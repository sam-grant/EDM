

#include <iostream>
#include <vector>

#include <fstream>
#include <string>
#include <fstream>
#include <vector>
#include <utility> 
#include <stdexcept> 
#include <sstream> 

#include "TFile.h"
#include "TTreeReader.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TGraphErrors.h"
#include "TFitResult.h"

#include "FancyDraw.h"

using namespace std;


const string stage = "reprocessed";//"raw";;//// //
// Read histograms, produce tuple of y, yerr
tuple<vector<double>, vector<double>> ReadYPos(string input) { 

	// ++++++++++++++ Open tree and load branches ++++++++++++++

	// Get file
	TFile *f1 = TFile::Open(input.c_str());
	cout<<"\nOpened file:\t"<<input<<" "<<f1<<endl;

	vector<TH1D *> hy_calos;// vector<unsigned int> tot_ctags;

	vector<double> yPos; vector<double> eyPos;

	for(int i_calo = 0; i_calo < 24; i_calo++) {

		TH1D *hy = (TH1D*)f1->Get( ("PerCalo/hy_"+to_string(i_calo+1)).c_str() );//hy->Clone();

		yPos.push_back(hy->GetMean());
		eyPos.push_back(hy->GetMeanError());

		//cout<<hy->GetMean()<<"±"<<hy->GetMeanError()<<endl;

	}

	return make_tuple(yPos,eyPos);

}

// ==================== ACCURATE THETA ====================
double GetTheta(int caloNum) { 

	double caloPosRad[24] = {0.19896753472735357, 0.46076692252650303, 0.7225663103256524, 0.9843656981248019, 1.2461650859239513, 1.5079644737231008, 1.7697638615222502, 2.0315632493213998, 2.293362637120549, 2.5551620249196985, 2.816961412718848, 3.0787608005179976, 3.3405601883171467, 3.6023595761162963, 3.864158963915446, 4.125958351714595, 4.387757739513744, 4.649557127312894, 4.911356515112043, 5.173155902911193, 5.4349552907103424, 5.696754678509492, 5.958554066308642, 6.220353454107791};
	//return (2*TMath::Pi() * caloNum/24);// * (180/TMath::Pi());
	double theta = caloPosRad[caloNum-1] + (18.35*(TMath::Pi()/180)); 

	if(theta > 2*TMath::Pi()) theta = theta - 2*TMath::Pi();

	return theta;
}

TGraphErrors *VCOD(tuple<vector<double>, vector<double>> yVal) {

  // CAN"T USE GLOBAL QHV SINCE SOME SETTINGS ARE BROKEN

  // Loop through y-pos and fill a TGraph

  	int n_calo = 24;//yVal.size();

  	//cout<<"n_calo\t"<<n_calo<<endl;

	double x[n_calo]; double ex[n_calo];
	double y[n_calo]; double ey[n_calo];

	for ( int i_calo = 0; i_calo < n_calo; i_calo++ ) {

    //double y_tmp = get<0>(yPos[i_quad]); double ey_tmp = get<1>(yPos[i_quad]);

		//cout<<GetTheta(i_calo+1)*(180/TMath::Pi())<<"\t"<<get<0>(yVal)[i_calo]*1e-3<<"\t"<<get<1>(yVal)[i_calo]*1e-3<<"\n";

		x[i_calo] = GetTheta(i_calo+1);
		ex[i_calo] = 0.0;
		y[i_calo] = get<0>(yVal)[i_calo];// - func->Eval(x[i_calo]);//get<0>(yVal[i_calo]);
		ey[i_calo] = get<1>(yVal)[i_calo];

	}

	return new TGraphErrors(n_calo,x,y,ex,ey);


}


/*
void Draw(TGraphErrors *graph, string title, string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	//c->SetRightMargin(0.20);

	graph->SetTitle(title.c_str());
	graph->GetXaxis()->SetTitleSize(.04);
	graph->GetYaxis()->SetTitleSize(.04);
  	graph->GetXaxis()->SetTitleOffset(1.1);
  	graph->GetYaxis()->SetTitleOffset(1.25);
  	graph->GetXaxis()->CenterTitle(true);
	graph->GetYaxis()->CenterTitle(true);
	graph->GetYaxis()->SetMaxDigits(4);
	graph->SetMarkerStyle(20); //  Full circle

	//graph->GetYaxis()->SetRangeUser(-0.325, 0.325);
	graph->Draw("AP");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}*/

double GetYMean(TGraphErrors *gr) {


	gr->Fit("pol0");

	TF1 *func = gr->GetFunction("pol0");

	gStyle->SetOptFit(20222);

	DrawTGraphErrors(gr, ";#theta [rad];y [mm]", "../Images/Data/ClosedOrbit/"+stage+"/pol0Fit_18kV");

	double p0 = func->GetParameter(0);

	return p0;

}

TGraphErrors *SubtractYPos(TGraphErrors *gr, TF1 *func, double yMean) {


  	int n_calo = 24;

	double x[n_calo]; double ex[n_calo];
	double y[n_calo]; double ey[n_calo];

	for ( int i_calo = 0; i_calo < n_calo; i_calo++ ) {

    //double y_tmp = get<0>(yPos[i_quad]); double ey_tmp = get<1>(yPos[i_quad]);

		//cout<<GetTheta(i_calo+1)*(180/TMath::Pi())<<"\t"<<get<0>(yVal)[i_calo]*1e-3<<"\t"<<get<1>(yVal)[i_calo]*1e-3<<"\n";

		x[i_calo] = i_calo+1;
		ex[i_calo] = 0.0;
		y[i_calo] = (gr->GetPointY(i_calo) - yMean) - func->Eval(x[i_calo]);//get<0>(yVal[i_calo]);
		ey[i_calo] = gr->GetErrorY(i_calo);

	}

	return new TGraphErrors(n_calo,x,y,ex,ey);


}

void DrawBarChart(TGraphErrors *graph, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	graph->SetTitle(title.c_str());
	graph->GetXaxis()->SetTitleSize(.04);
	graph->GetYaxis()->SetTitleSize(.04);
	graph->GetXaxis()->SetTitleOffset(1.1);
	graph->GetYaxis()->SetTitleOffset(1.1);
	graph->GetXaxis()->CenterTitle(true);
	graph->GetYaxis()->CenterTitle(true);
	graph->GetYaxis()->SetMaxDigits(4);
	graph->SetMarkerStyle(20); //  Full circle
	graph->SetLineColor(kBlack);
	graph->SetFillColor(kBlack);
	graph->Draw("AB");
	//c->SetGridx();

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}


int main() {

	string stage = "reprocessed";//"raw";;//// //

	string input = "../Plots/Data/ClosedOrbit/"+stage+"/merged/y-pos_37886.root"; 

	tuple<vector<double>, vector<double>> yPos = ReadYPos(input);

	double xmin = 0; 
	double xmax = 2*TMath::Pi();

	TF1 *fCOD_5 = new TF1("fCOD_5", "( (-6.12010e-04/0.108) +  (2.48682e-02*cos(x)-4.09261e-02*sin(x))/(1-0.108) + (1.68082e-02*cos(2*x)+4.98955e-02*sin(2*x))/(4-0.108) + (-4.67237e-03*cos(3*x)-3.19369e-01*sin(3*x))/(9-0.108) + (1.22918e-01*cos(4*x)-4.20146e-01*sin(4*x))/(16-0.108) )", xmin, xmax);

	DrawTF1(fCOD_5, ";#theta [rad];y [mm]","../Images/Data/ClosedOrbit/"+stage+"/fCOD_5");
	
	TGraphErrors *gr1 = VCOD(yPos);//, fCOD_5);

	double yMean = GetYMean(gr1);

	TGraphErrors *gr2 = SubtractYPos(gr1, fCOD_5, yMean);

	gr2->GetXaxis()->SetRangeUser(0,25);

	DrawBarChart(gr2, "18 kV;Calo number;y_{data} #minus y_{func} [mm]", "../Images/Data/ClosedOrbit/"+stage+"/CaloMisalignment");


	return 0;

}

	// Read tree, produce tuple of y, yerr, ctag, & subruns
	// Also store histograms of y-pos 



// +++++++ OLD STYLE , READ DIRECTLY FROM TREE, SLOW BUT EASY +++++++  
/*
tuple<vector<double>, vector<double>> ReadYPos(string input, string output) {

	// ++++++++++++++ Open tree and load branches ++++++++++++++

	// Get file
	TFile *f1 = TFile::Open(input.c_str());
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
	TH1D *hy = new TH1D("hy", ";y [mm];Clusters", 150, 0, 150);

	vector<TH1D *> hy_calos;// vector<unsigned int> tot_ctags;

	for(int i_calo = 0; i_calo < 24; i_calo++) {

		TH1D *hy_tmp = (TH1D*) hy->Clone();
		hy_tmp->SetName( ("hy_"+to_string(i_calo+1)).c_str() );
		hy_calos.push_back(hy_tmp);

	}

	// ++++++++++++++ Loop thro events ++++++++++++++

	//int nFill_tmp = treeReader.size(); double x_fill[nFill_tmp]; double y_clu[nFill_tmp]; double zeros[nFill_tmp];
	int counter = 0;
	unsigned int run;

	// For DQC purposess
	vector<double> subRuns; vector<double> ctags; 

	while (treeReader.Next()){

		run = *runNum;

		//tot_ctag = tot_ctag + *ctag;

		//tot_ctags.at(caloNum-1).push_backtot_ctag

	  // Get leaves
		vector<int> caloNum_ = *caloNum;
		vector<double> x_ = *x;
		vector<double> y_ = *y;
		vector<double> energy_ = *energy;
		vector<double> times_ = *times;

	  // Number of clusters in this fill

	  // This could be any of the vectors, caloNum has no special significance 
		int nClu = caloNum_.size(); 

		ctags.push_back(double(*ctag)); subRuns.push_back(double(*subRunNum));

		// Start run 37884 at subrun 280 

		if(run == 37884 && *subRunNum < 280) continue;



		//x_fill[nFill] = double(nFill); y_clu[nFill] = double(nClu); zeros[n_fill] = 0.;

	  // Loop through clusters
		for(int i_clu = 0; i_clu < nClu; i_clu++) { 

	     // Get cluster level variables
			int caloNum =  caloNum_.at(i_clu);
			double xmm = x_.at(i_clu) * 25;
			double ymm = y_.at(i_clu) * 25; 
			double energy = energy_.at(i_clu);
			double time = times_.at(i_clu);

	     // Apply CTAG cuts
			// if(energy > 1700 && energy < 6000 && time > 24000) {
			if(energy > eLoCut && energy < 6000 && time > 24000) {

	    	// Fill y-position for individual calos
				hy_calos.at(caloNum-1)->Fill(ymm);

			}

		}

		counter++;

	} // Exit tree

	// Plot clusters per fill 
	int n_subrun = subRuns.size();
	double x_subrun[n_subrun]; double y_ctag[n_subrun]; double zeros[n_subrun];

	for (int i_subrun = 0; i_subrun < n_subrun; i_subrun++ ) {

		x_subrun[i_subrun] = double(subRuns.at(i_subrun)); 
		y_ctag[i_subrun] = double(ctags.at(i_subrun));
		zeros[i_subrun] = 0.;

	}

	TGraphErrors *ctag_vs_subrun = new TGraphErrors(n_subrun, x_subrun, y_ctag, zeros, zeros);

	DrawTGraphErrors(ctag_vs_subrun, ";Sub-run;CTAG / fill", "../Images/Data/VCOD/ctag_vs_subrun_"+to_string(run));


	// ++++++++++++++ Write to file ++++++++++++++

	TFile *f2 = new TFile(output.c_str(), "RECREATE");
	hy->Write();
	f2->cd(); f2->mkdir("PerCalo"); f2->cd("PerCalo");


	vector<double> yPos; vector<double> eyPos; 

	for(int i_calo = 0; i_calo < hy_calos.size(); i_calo++) {

		// cout<<"\nCalo:\t"<<i_calo+1<<endl;
		// cout<<"Mean y-position:\t"<<hy_calos.at(i_calo)->GetMean()<<"+/-"<<hy_calos.at(i_calo)->GetMeanError()<<endl;
		// cout<<"Total ctags:\t"<<hy_calos.at(i_calo)->GetEntries()<<endl;

		yPos.push_back(hy_calos.at(i_calo)->GetMean()); 
		eyPos.push_back(hy_calos.at(i_calo)->GetMeanError());

		hy_calos.at(i_calo)->Write();

	}

	cout<<"\nWritten histograms to:\t"<<output<<" "<<f2<<endl;

	// Need this to avoid seg fault after closing files
	// double yPos = hy->GetMean(); double eyPos = hy->GetMeanError();

	f1->Close();
	f2->Close();

	return make_tuple(yPos, eyPos);//, theta);//, tot_ctag);

}

*/
