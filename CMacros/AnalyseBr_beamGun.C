#include <iostream>
#include <vector>

#include "TFile.h"
#include "TTreeReader.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TGraphErrors.h"
#include "TFitResult.h"

#include "FancyDraw.h"

using namespace std;

const int N_QHV = 1;
const int N_FIELD = 2;
const double QHV[N_QHV] = {14}; // , 18}; //  quad settings, kV
const double BR_APP[N_FIELD] = {30, -30}; // Applied radial field, ppm*/

// Read tree, produce tuple of y and yerr
// Also store histograms of y-pos 

int unsigned_to_signed(unsigned n){
    return static_cast<int>(n);
}

tuple<double, double> ReadYPos(string input, string output) {

   // ++++++++++++++ Open tree and load branches ++++++++++++++

   // Get file
   TFile *f1 = TFile::Open(input.c_str());//"TestTrees/gm2nearline_hists_run34888_00270.root");
   cout<<"\nOpened tree:\t"<<input<<" "<<f1<<endl;

   // Get reader for tree
   TTreeReader treeReader("caloSimTrees/tree",f1);

   // Get branches
   TTreeReaderValue<unsigned int> runNum(treeReader,"runNum");
   TTreeReaderValue<unsigned int> subRunNum(treeReader,"subRunNum");
   TTreeReaderValue<unsigned int> eventNum(treeReader,"eventNum");
   TTreeReaderValue<int> ctag(treeReader,"ctag");
   TTreeReaderValue<unsigned int> caloNum(treeReader,"caloNum");
   TTreeReaderValue<float> energy(treeReader,"caloHitEnergy");
   TTreeReaderValue<float> times(treeReader,"caloHitTime");
   TTreeReaderValue<float> x(treeReader,"caloHitX");
   TTreeReaderValue<float> y(treeReader,"caloHitY");


   // ++++++++++++++ Book histograms ++++++++++++++

   // All calos
   TH2D *hxy = new TH2D("hxy", ";x [mm];y [mm]", 225, -112.5, 112.5, 150, -75, 75);
   TH1D *hy = new TH1D("hy", ";y [mm];Clusters", 150, -75, 75);

   // Individual calos
   vector<TH1D *> hy_calos;
   for(int i_calo = 0; i_calo < 24; i_calo++) {
   	TH1D *hy_tmp = (TH1D*) hy->Clone();
   	hy_tmp->SetName( ("hy_"+to_string(i_calo+1)).c_str() );
   	hy_calos.push_back(hy_tmp);
   }

   // ++++++++++++++ Loop thro events ++++++++++++++

   int tot_ctag = 0;
   int tot_ctag_check = 0;
   int tot_ctag_doublecheck = 0;

   while (treeReader.Next()){

         // Apply CTAG cuts
   		if(*energy > 1700 && *energy < 6000 && *times > 24000) {

   			
   			tot_ctag = tot_ctag + *ctag;
   			
   			hy->Fill(*y);
   			tot_ctag_check++;

           // Fill y-position for all calos
   			hxy->Fill(*x, *y);
   			
            // Fill y-position for individual calos
   			hy_calos.at(unsigned_to_signed(*caloNum)-1)->Fill(*y);

   		} //else cout<<"Bad\t"<<*ctag<<endl;

   }

   // ++++++++++++++ Draw sanity plots ++++++++++++++

   /*// use fancy draw
   TCanvas *c1 = new TCanvas("c1","c1",800,600);
   gStyle->SetOptStat(2210);
   hy->Draw("HIST");
   c1->SaveAs("Images/hy.png");

   TCanvas *c2 = new TCanvas("c2","c2",800,600);
   gStyle->SetOptStat(2210);
   hy_calos.at(0)->Draw("HIST");
   c2->SaveAs("Images/hy_1.png");

   TCanvas *c3 = new TCanvas("c3","c3",800,600);
   gStyle->SetOptStat(0);
   gStyle->SetPalette(55);
   hxy->Draw("COLZ");
   c3->SaveAs("Images/hxy.png");*/

   // ++++++++++++++ Write to file ++++++++++++++

   TFile *f2 = new TFile(output.c_str(), "RECREATE");
   hy->Write();
   f2->cd(); f2->mkdir("PerCalo"); f2->cd("PerCalo");
   for(int i_calo = 0; i_calo < hy_calos.size(); i_calo++) hy_calos.at(i_calo)->Write();
   	f2->Close();

   cout<<"\nMean y-position:\t"<<hy->GetMean()<<"+/-"<<hy->GetMeanError()<<endl;
   cout<<"Total ctags:\t"<<tot_ctag<<endl;
   cout<<"Total ctags check:\t"<<tot_ctag_check<<endl;
   cout<<"Total ctags double check:\t"<<tot_ctag_doublecheck<<endl;

   cout<<"\nWritten histograms to:\t"<<output<<" "<<f2<<endl;

   // Need this to avoid seg fault after closing files
   double yPos = hy->GetMean(); double eyPos = hy->GetMeanError();

   f1->Close();
   f2->Close();

   return make_tuple(yPos,eyPos);

}


TGraphErrors *QuadScan(vector<tuple<double, double>> yPos) {


  // Loop through y-pos and fill a TGraph

	double x[N_QHV]; double ex[N_QHV];
	double y[N_QHV]; double ey[N_QHV];

	for ( int i_quad = 0; i_quad < N_QHV; i_quad++ ) {

		x[i_quad] = 1/QHV[i_quad];
		ex[i_quad] = 0.0;
		y[i_quad] = get<0>(yPos[i_quad]);
		ey[i_quad] = get<1>(yPos[i_quad]);

	}

	return new TGraphErrors(N_QHV,x,y,ex,ey);


}

int main() {


   //int N_SET = N_FIELD*N_QHV;

  // Should probably set up seperate header files for these things ... 
	
	string settings[2] = {"18_30","18_-30"};

	int counter = 0;

	// Vector to hold the quad scans at each field setting
	vector<TGraphErrors*> quadScans;

	// Field fit variables
	double x[N_FIELD]; double ex[N_FIELD];
	double y[N_FIELD]; double ey[N_FIELD];

    // =========== Field setting loop =========== 
	for ( int i_field = 0; i_field < 2; i_field++ ) {

		//out<<BR_APP[i_field]<<endl;

		// Book vector for y-pos per field setting
		vector<tuple<double, double>> yPos;

    	// =========== Quad setting loop ==========
		for ( int i_quad = 0; i_quad < N_QHV; i_quad++ ) {

			string input = " ../Trees/MC/BrSim_TestTrees/gm2trees_Br_"+settings[counter]+".root";
			string output = "../Plots/MC/BrSim_TestPlots/y-pos_"+settings[counter]+".root";

			yPos.push_back(ReadYPos(input, output));

			counter++;

		}

		TGraphErrors *quadScan = QuadScan(yPos);

    	// Fit for quad gradient and store
   		TF1 *quadLineFit = new TF1("quadLineFit", "[0]+[1]*x");

		quadScan->Fit(quadLineFit,"M");

    	cout<<"quadLineFit\t"<<quadLineFit<<endl;

		quadScans.push_back(quadScan);

		x[i_field] = BR_APP[i_field]; 
		ey[i_field] = 0.0;
		y[i_field] = quadLineFit->GetParameter(1);
		ey[i_field] = quadLineFit->GetParError(1);



	}

	quadScans.at(0)->SetMarkerStyle(20);
  	quadScans.at(1)->SetMarkerStyle(20);
  	DrawQuadScanFits(quadScans, "quadLineFit", ";1/QHV [kV^{-1}];#LTy#GT [mm]", "../Images/MC/BrSim_Test/QuadScans", -50, 50, BR_APP);
  	
  // Now fit for radial field

	TGraphErrors *result = new TGraphErrors(N_FIELD, x, y, ex, ey);

	TF1 *mainFit = new TF1("mainFit", "[0]+[1]*x");
	TFitResultPtr mainFitRes = result->Fit(mainFit,"SMQ");

	double p0 = mainFit->GetParameter(0); double p0_err = mainFit->GetParError(0);
  	double p1 = mainFit->GetParameter(1); double p1_err = mainFit->GetParError(1);

    // x-intercept 
	double Br = fabs(p0/p1);

	// From Taylor 9.9
	double BrErr = fabs(Br) * sqrt(pow(p0_err/p0,2) + pow(p1_err/p1,2) - 2*mainFitRes->GetCovarianceMatrix()(0,1)/(p0*p1));

	DrawRadialFieldLineFit(result, BrErr, "mainFit", ";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]","../Images/MC/BrSim_Test/FieldFit");

	return 0;
}
