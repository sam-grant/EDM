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

// A bit superfluous but it seems to work fine
TGraphErrors *DefineTGraph(vector<int> N, vector<double> mean, vector<double> err, int type) { 

	int n = N.size();
	double x[n];
  	double ex[n];
  	double y[n];
  	double ey[n];

  	for(int i = 0; i < n; i++) {

  		if(type==0) {

  			x[i] = N.at(i); 
  			ex[i] = 0; 
  			y[i] = mean.at(i); 
      		ey[i] = err.at(i); 

      	} else if(type==1) {

  			x[i] = N.at(i); 
  			ex[i] = 0; 
  			y[i] = err.at(i); 
      		ey[i] = 0; 

      	}

  	}

  	return new TGraphErrors(n,x,y,ex,ey);
}


int main() {

	TFile *input = TFile::Open("../Plots/Data/MeanCaloPos/plots_calo_15921.root");

	TH2D *posHist;
	TH2D *posHistStack;

	// plot sub-runs vs ctag, write to file
	TH2D *SUBRUN_vs_CTAG = new TH2D("SUBRUN_vs_CTAG","SUBRUN_vs_CTAG",355,0.5,355.5,14e4,0,14e6);

	vector<int> ctag_; 
	vector<double> meanY_; 
	vector<double> meanYErr_;

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

		// Append them to a vector
		ctag_.push_back(ctag);
		meanY_.push_back(meanY);
		meanYErr_.push_back(meanYErr);	

 		// Fill sub-run vs CTAG
 		SUBRUN_vs_CTAG->Fill(subruns, ctag);

		subruns++;

	}

	// Draw two axis TGraphs for y-pos versus positrons

	TGraphErrors *meanY_vs_subruns = DefineTGraph(ctag_, meanY_, meanYErr_, 0);
	TGraphErrors *meanYErr_vs_subruns = DefineTGraph(ctag_, meanY_, meanYErr_, 1);

	meanY_vs_subruns->GetXaxis()->SetRangeUser(0,ctag_.back());
	meanYErr_vs_subruns->GetXaxis()->SetRangeUser(0,ctag_.back());
	meanY_vs_subruns->GetYaxis()->SetRangeUser(75.45,76.1);
	meanYErr_vs_subruns->GetYaxis()->SetRangeUser(0,0.25);

	DrawTGraphErrorsDoubleXAxis(meanY_vs_subruns, ";CTAGs;Cluster mean Y-position [mm]", "Number of sub-runs", "../Images/Data/CaloMeanPos/CaloMeanYPos_vs_CTAG", 1, subruns);
	DrawTGraphErrorsDoubleXAxis(meanYErr_vs_subruns, ";CTAGs;Cluster mean Y-position uncertainty [mm]", "Number of sub-runs", "../Images/Data/CaloMeanPos/CaloMeanYPosErr_vs_CTAG", 1, subruns);

	// Draw TH2 of CTAG vs subrun and write to file
	TFile *output = new TFile("../Plots/Data/MeanCaloPos/SUBRUN_vs_CTAG_15921.root", "RECREATE");
	DrawTH2(SUBRUN_vs_CTAG,";Sub-runs;CTAGs","../Images/Data/CaloMeanPos/SUBRUN_vs_CTAG_15921");
	SUBRUN_vs_CTAG->SetDirectory(gDirectory);
	output->Write();

	return 0;
}

/*		if(subruns==25) {
			cout<<"SIGMA at 25 sub-runs:\t"<<meanYErr<<endl;
			cout<<"CTAGs at 25 sub-runs:\t"<<ctag<<endl;
		} else if(subruns==50) {
			cout<<"SIGMA at 50 sub-runs:\t"<<meanYErr<<endl;
			cout<<"CTAGs at 50 sub-runs:\t"<<ctag<<endl;
		} else if(subruns==75) {
			cout<<"SIGMA at 75 sub-runs:\t"<<meanYErr<<endl;
			cout<<"CTAGs at 75 sub-runs:\t"<<ctag<<endl;
		} else if(subruns==100) {
			cout<<"SIGMA at 100 sub-runs:\t"<<meanYErr<<endl;
			cout<<"CTAGs at 100 sub-runs:\t"<<ctag<<endl;
		} else if(subruns==125) {
			cout<<"SIGMA at 125 sub-runs:\t"<<meanYErr<<endl;
			cout<<"CTAGs at 125 sub-runs:\t"<<ctag<<endl;
		} else if(subruns==150) {
			cout<<"SIGMA at 150 sub-runs:\t"<<meanYErr<<endl;
			cout<<"CTAGs at 150 sub-runs:\t"<<ctag<<endl;
		} else if(subruns==175) {
			cout<<"SIGMA at 175 sub-runs:\t"<<meanYErr<<endl;
			cout<<"CTAGs at 175 sub-runs:\t"<<ctag<<endl;
		} else if(subruns==200) {
			cout<<"SIGMA at 200 sub-runs:\t"<<meanYErr<<endl;
			cout<<"CTAGs at 200 sub-runs:\t"<<ctag<<endl;
		}
 
 		if(ctag > 7.99e6 && ctag < 8.01e6) {
 			cout<<"Sub-runs at "<<ctag<<" CTAGS: "<<subruns<<endl;
 		} 

 		if(ctag > 4.8e5 && ctag < 5.2e5) {
 			cout<<"Sub-runs at "<<ctag<<" CTAGS: "<<subruns<<endl;
 		}*/ 