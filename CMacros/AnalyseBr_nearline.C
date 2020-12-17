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

/*const int N_QHV = 2;
const int N_FIELD = 2;
const double QHV[N_QHV] = {14, 18}; //  quad settings, kV
const double BR_APP[N_FIELD] = {30, -30}; // Applied radial field, ppm*/

// Read tree, produce tuple of y and yerr
// Also store histograms of y-pos 

tuple<double, double> ReadYPos(string input, string output) {

   // ++++++++++++++ Open tree and load branches ++++++++++++++

   // Get file
   TFile *f1 = TFile::Open(input.c_str());//"TestTrees/gm2nearline_hists_run34888_00270.root");
   cout<<"\nOpened tree:\t"<<input<<" "<<f1<<endl;

   // Get reader for tree
   TTreeReader treeReader("nearlineHistTree/eventTree",f1);

   // Get branches
   TTreeReaderValue<unsigned int> runNum(treeReader,"runNum");
   TTreeReaderValue<unsigned int> subRunNum(treeReader,"subRunNum");
   TTreeReaderValue<unsigned int> eventNum(treeReader,"eventNum");
   TTreeReaderValue<unsigned int> ctag(treeReader,"ctag");
   TTreeReaderValue<vector<int>> caloNum(treeReader,"caloNum");
   TTreeReaderValue<std::vector<double>> energy(treeReader,"energy");
   TTreeReaderValue<std::vector<double>> times(treeReader,"time");
   TTreeReaderValue<std::vector<double>> x(treeReader,"x");
   TTreeReaderValue<std::vector<double>> y(treeReader,"y");


   // ++++++++++++++ Book histograms ++++++++++++++

   // All calos
   TH2D *hxy = new TH2D("hxy", ";x [mm];y [mm]", 225, 0, 225, 150, 0, 150);
   TH1D *hy = new TH1D("hy", ";y [mm];Clusters", 150, 0, 150);

   // Individual calos
   vector<TH1D *> hy_calos;
   for(int i_calo = 0; i_calo < 24; i_calo++) {
   	TH1D *hy_tmp = (TH1D*) hy->Clone();
   	hy_tmp->SetName( ("hy_"+to_string(i_calo+1)).c_str() );
   	hy_calos.push_back(hy_tmp);
   }

   // ++++++++++++++ Loop thro events ++++++++++++++

   unsigned int tot_ctag = 0;
   unsigned int tot_ctag_check = 0;

   while (treeReader.Next()){

    //unsigned int ctag = ctag*;
   	tot_ctag = tot_ctag + *ctag;

      // Get leaves
   	vector<int> caloNum_ = *caloNum;
   	vector<double> x_ = *x;
   	vector<double> y_ = *y;
   	vector<double> energy_ = *energy;
   	vector<double> times_ = *times;

      // Number of clusters in this fill
   	int nClu = caloNum_.size(); 

      // Loop through clusters
   	for(int i_clu = 0; i_clu < nClu; i_clu++) { 

         // Get cluster level variables
   		int caloNum =  caloNum_.at(i_clu);
   		double xmm = x_.at(i_clu) * 25;
   		double ymm = y_.at(i_clu) * 25; 
   		double energy = energy_.at(i_clu);
   		double time = times_.at(i_clu);

         // Apply CTAG cuts
   		if(energy > 1700 && energy < 6000 && time > 24000) {

   			tot_ctag_check++;

            // Fill y-position for all calos
   			hxy->Fill(xmm, ymm);
   			hy->Fill(ymm);
            // Fill y-position for individual calos
   			hy_calos.at(caloNum-1)->Fill(ymm);


   		}

   	}

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

void tmp(vector<tuple<double, double>> yPos) {

	cout<<"Starting tmp"<<endl;

	for (int i = 0; i < yPos.size(); i++) {

		cout << get<0>(yPos[i]) << " "
		<< get<1>(yPos[i]) << "\n";

	}

	return;
}

int main() {


   //int N_SET = N_FIELD*N_QHV;

	string runs[4] = {"37131-37133", "37119", "37128-37130", "37120-37127"};
	string settings[4] = {"14 kV, +30 ppm", "18 kV, +30 ppm", "14 kV, -30 ppm", "18 kV, -30 ppm"};

	int counter = 0;

  	// Vector to hold the quad scans at each field setting
	vector<TGraphErrors*> quadScans;

	// Field fit variables
	double x[N_FIELD]; double ex[N_FIELD];
	double y[N_FIELD]; double ey[N_FIELD];

  // =========== Field setting loop =========== 
	for ( int i_field = 0; i_field < N_FIELD; i_field++ ) {

    // Book vector for y-pos per field setting
		vector<tuple<double, double>> yPos;

    // =========== Quad setting loop ==========
		for ( int i_quad = 0; i_quad < N_QHV; i_quad++ ) {

      //if(i_quad != 0) continue;

			cout<<"Run "<<runs[counter]<<endl;
			cout<<"Settings "<<settings[counter]<<endl;

			string input = "../Trees/Data/RadialFieldScan_1/merged_noDQC/gm2nearline_hists_run"+runs[counter]+".root";
			string output = "../Plots/Data/RadialFieldScan_1/noDQC/y-pos_"+runs[counter]+".root";

			yPos.push_back(ReadYPos(input, output));

			counter++;

		}

    	// Fit for quad gradient and store

		TF1 *quadLineFit = new TF1("quadLineFit", "[0]+[1]*x");
		QuadScan(yPos)->Fit(quadLineFit,"M");

		quadScans.push_back(QuadScan(yPos));

		x[i_field] = BR_APP[i_field]; 
		ey[i_field] = 0.0;
		y[i_field] = quadLineFit->GetParameter(1);
		ey[i_field] = quadLineFit->GetParError(1);

	}

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

	DrawRadialFieldLineFit(result, BrErr, "mainFit", ";#LTB_{r}^{App}#GT [ppm];#LTy#GTupointQHV [mm#upointkV]","../Images/Data/RadialFieldScan_1/FieldFit");

  //GetRadialField(quadSlopes);


   // TODO: Write a seperate macro to produce the results

	return 0;
}

 /*

  // Take command line input for the fit mode
  string fitName;
  string fitMode;
  cout << "Select fit mode: '1' (SingleGaus) '2' (DoubleGaus) '3' (LanGaus)\n";
  cin >> fitName;
  if (fitName == "1") {
    fitMode = "SingleGaus";
    cout << "Using fitMode: "<< fitMode << "\nStarting\n" << endl; 
  } else if(fitName == "2") {
    fitMode = "DoubleGaus";
    cout << "Using fitMode: "<< fitMode << "\nStarting\n" << endl;
  } else if(fitName == "3") {
    fitMode = "LanGaus";
    cout << "Using fitMode: "<< fitMode << "\nStarting\n" << endl;
  } else {
    cout<<"Invalid fitmode, stopping"<<endl;
    exit(0);
  }

  */
