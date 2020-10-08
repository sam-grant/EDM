// Plot the mean calo pos, and error on the mean, versus number of sub-runs

#include <iostream>
#include <vector>

#include "FancyDraw.h"
#include "Utils.h"

#include "TFile.h"
#include "TH1.h"
#include "TH2.h"
#include "TGraphErrors.h"
#include "TDirectory.h"

using namespace std;

double ErrorOnMean(TH2 *hist) { 

	TH1 *projX = hist->ProjectionX();
	TH1 *projY = hist->ProjectionY();

	return sqrt(pow(projX->GetMeanError(),2)+pow(projY->GetMeanError(),2));

}

double Mean(TH2 *hist) { 

	TH1 *projX = hist->ProjectionX();
	TH1 *projY = hist->ProjectionY();

	return sqrt(pow(projX->GetMean(),2)+pow(projY->GetMean(),2));

}

int main() {

	int N = 349; // sub-runs in 15921

	TFile *input = TFile::Open("../Plots/Data/MeanCaloPos/plots_calo_15921.root");

	// Book in clusterXY hist, and their stack
	TH2D *posHist;
	TH2D *posHistStack;

	// TH1s are for reading in/out data, TGraphs are for presenting data
	TH1D *CTAG_vs_SUBRUN = new TH1D("CTAG_vs_SUBRUN","CTAG_vs_SUBRUN",N,0.5,349.5); 
	TH1D *SIGMA_vs_SUBRUN = new TH1D("SIGMA_vs_SUBRUN","SIGMA_vs_SUBRUN",N,0.5,349.5);

	// Input for TGraphs 
	double x[N];
  	double y[N]; 
  	double ey[N];
  	double zeros[N];

  	// Counter
	int subruns = 1;

	// Loop through sub-runs 
	// Note that i =/= n_subruns
	for(int i = 0; i<400; i++) { 

		// Get x-y position, where entries equal CTAGs
		posHist = (TH2D*)input->Get( ("clusterY_vs_clusterX_"+to_string(i)).c_str() );

		// Dodge non-existent of very low stats sub-runs
		if(posHist == 0 || posHist->GetEntries() < 1e3) continue; 

		// Stack histograms sub-run by sub-run
		if(subruns==1) {
			posHistStack = posHist;
		} else {
			posHistStack->Add(posHist);
		}

		// Get ctags and position with each iteration
		double ctag = posHistStack->GetEntries();
		double meanY = posHistStack->ProjectionY()->GetMean();
		double meanYErr = posHistStack->ProjectionY()->GetMeanError();

		//cout<<ctag<<endl;
		if(ctag > 0.47e6 && ctag < 0.53e6) cout<<"\nSub-run at "<<ctag<<" CTAGS:\t"<<subruns<<endl;
		if(ctag > 13.24e6 && ctag < 13.28e6) cout<<"Sub-run at "<<ctag<<" CTAGS:\t"<<subruns<<endl;

		// Append them into arrays
		x[subruns] = ctag;
		y[subruns] = meanY; 
		ey[subruns] = meanYErr; 
		zeros[subruns] = 0;

 		CTAG_vs_SUBRUN->SetBinContent(subruns, ctag);
 		SIGMA_vs_SUBRUN->SetBinContent(subruns, meanYErr);

		subruns++;

	}

	// Draw two axis TGraphs for y-pos versus positrons
	TGraphErrors *meanY_vs_subruns = new TGraphErrors(N,x,y,zeros,ey); // DefineTGraph(ctag_, meanY_, meanYErr_, 0);
	TGraphErrors *meanYErr_vs_subruns = new TGraphErrors(N,x,ey,zeros,zeros);

	meanY_vs_subruns->GetXaxis()->SetRangeUser(0,x[subruns-1]);
	meanYErr_vs_subruns->GetXaxis()->SetRangeUser(0,x[subruns-1]);
	meanY_vs_subruns->GetYaxis()->SetRangeUser(75.45,76.1);
	meanYErr_vs_subruns->GetYaxis()->SetRangeUser(0,0.25);

	DrawTGraphErrorsDoubleXAxis(meanY_vs_subruns, ";CTAGs;Cluster mean Y-position [mm]", "Number of sub-runs", "../Images/Data/CaloMeanPos/CaloMeanYPos_vs_CTAG", 0, subruns);
	DrawTGraphErrorsDoubleXAxis(meanYErr_vs_subruns, ";CTAGs;Cluster mean Y-position uncertainty [mm]", "Number of sub-runs", "../Images/Data/CaloMeanPos/CaloMeanYPosErr_vs_CTAG", 0, subruns);

	// Write everything to ROOT file
	string outName = "../Plots/Data/MeanCaloPos/CTAG_SUBRUN_SIGMA_15921.root";
	TFile *output = new TFile(outName.c_str(), "RECREATE");

	// Write TGraphs to ROOT file
	// meanY_vs_subruns->SetName("meanY_vs_subruns");
	// meanY_vs_subruns->Write();
	// meanYErr_vs_subruns->SetName("meanYErr_vs_subrun");
	// meanYErr_vs_subruns->Write();

	// Draw TH1 of CTAG vs subrun and write to ROOT file
	DrawTH1(CTAG_vs_SUBRUN,";Sub-runs;CTAGs","../Images/Data/CaloMeanPos/CTAG_vs_SUBRUN_15921");
	DrawTH1(SIGMA_vs_SUBRUN,";Sub-runs;#sigma_{y}","../Images/Data/CaloMeanPos/SIGMA_vs_SUBRUN_15921");
	CTAG_vs_SUBRUN->Write();
	SIGMA_vs_SUBRUN->Write();
	output->Write();

	cout<<"Written:\t"<<outName<<endl;



	return 0;
}