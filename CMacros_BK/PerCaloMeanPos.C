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

	TFile *input = TFile::Open("../Plots/Data/MeanCaloPos/perCalo_15921.root");
	// Write everything to ROOT file
	string outName = "../Plots/Data/MeanCaloPos/Split/CTAG_SUBRUN_SIGMA_15921.root";
	TFile *output = new TFile(outName.c_str(), "RECREATE");

	for(int i_calo = 1; i_calo<25; i_calo++) {

		//if(i_calo != 1) continue;

		cout<<"\n++++++++++++++ CALO "<<i_calo<<" ++++++++++++++"<<endl;

		// Book in clusterXY hist, and their stack
		TH2D *posHist;
		TH2D *posHistStack;
	
		// TH1s are for reading in/out data, TGraphs are for presenting data
		TH1D *CTAG_vs_SUBRUN = new TH1D( ("C"+to_string(i_calo)+"_CTAG_vs_SUBRUN").c_str(),"CTAG_vs_SUBRUN",349,0.5,349.5); 
		TH1D *SIGMA_vs_SUBRUN = new TH1D( ("C"+to_string(i_calo)+"_SIGMA_vs_SUBRUN").c_str() ,"SIGMA_vs_SUBRUN",349,0.5,349.5);
	
		// Input for TGraphs, these must to be dynamic vectors in this case!!!!
		vector<double> x_;
		vector<double> y_;
		vector<double> ey_;

	  	// Counter
		int subruns = 1;
	
		// Loop through sub-runs 
		// Note that i =/= n_subruns
		cout<<"\nsubruns ctag meanY sigmaY"<<endl;
	
		for(int i_subrun = 0; i_subrun<400; i_subrun++) { 
	
			// Get x-y position, where entries equal CTAGs
			posHist = (TH2D*)input->Get( ("C"+to_string(i_calo)+"_clusterY_vs_clusterX_"+to_string(i_subrun)).c_str() );
	
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
			double sigmaY = posHistStack->ProjectionY()->GetMeanError();
	
			cout<<subruns<<" "<<ctag<<" "<<meanY<<" "<<sigmaY<<endl;
			//if(subruns==50) cout<<"CTAGs at 50 subruns:\t"<<sigmaY<<endl;
			//if(ctag > 0.47e6 && ctag < 0.53e6) cout<<"\nSub-run at "<<ctag<<" CTAGS:\t"<<subruns<<endl;
			//if(ctag > 13.24e6 && ctag < 13.28e6) cout<<"Sub-run at "<<ctag<<" CTAGS:\t"<<subruns<<endl;
	
			// Append them into arrays

			x_.push_back(ctag);
			y_.push_back(meanY);
			ey_.push_back(sigmaY);
	
	 		CTAG_vs_SUBRUN->SetBinContent(subruns, ctag);
	 		SIGMA_vs_SUBRUN->SetBinContent(subruns, sigmaY);
	
			subruns++;
	
		}

		// Input for TGraphs
		int N = x_.size(); 
		double x[N];
  		double y[N]; 
  		double ey[N];
  		double zeros[N];

		// Not write into arrays for TGraph
		for(int i_entry = 0; i_entry < N; i_entry++) {

			x[i_entry] = x_.at(i_entry);
			y[i_entry] = y_.at(i_entry);
			ey[i_entry] = ey_.at(i_entry);
			zeros[i_entry] = 0.;
		}

		// Draw two axis TGraphs for y-pos versus positrons
		TGraphErrors *meanY_vs_ctag = new TGraphErrors(N,x,y,zeros,ey); // DefineTGraph(ctag_, meanY_, sigmaY_, 0);
		TGraphErrors *sigmaY_vs_ctag = new TGraphErrors(N,x,ey,zeros,zeros);
	
		meanY_vs_ctag->GetXaxis()->SetRangeUser(0,x[N-1]);
		sigmaY_vs_ctag->GetXaxis()->SetRangeUser(0,x[N-1]);
		//meanY_vs_ctag->GetYaxis()->SetRangeUser(70,80);
		//sigmaY_vs_ctag->GetYaxis()->SetRangeUser(0,0.25);
	
		DrawTGraphErrorsDoubleXAxis(meanY_vs_ctag, ";CTAGs;#LTy#GT [mm]", "Sub-runs", "../Images/Data/CaloMeanPos/Split/C"+to_string(i_calo)+"_CaloMeanYPos_vs_CTAG", 0, subruns);
		DrawTGraphErrorsDoubleXAxis(sigmaY_vs_ctag, ";CTAGs;#delta#LTy#GT [mm]", "Sub-runs", "../Images/Data/CaloMeanPos/Split/C"+to_string(i_calo)+"_CaloMeanYPosErr_vs_CTAG", 0, subruns);
	
		// Write TGraphs to ROOT file
		// meanY_vs_subruns->SetName("meanY_vs_subruns");
		// meanY_vs_subruns->Write();
		// sigmaY_vs_subruns->SetName("sigmaY_vs_subrun");
		// sigmaY_vs_subruns->Write();
	
		// Draw TH1 of CTAG vs subrun and write to ROOT file
		DrawTH1(CTAG_vs_SUBRUN,";Sub-runs;CTAGs","../Images/Data/CaloMeanPos/Split/C"+to_string(i_calo)+"_CTAG_vs_SUBRUN_15921");
		DrawTH1(SIGMA_vs_SUBRUN,";Sub-runs;#sigma_{y}","../Images/Data/CaloMeanPos/Split/C"+to_string(i_calo)+"_SIGMA_vs_SUBRUN_15921");
	
		CTAG_vs_SUBRUN->Write();
		SIGMA_vs_SUBRUN->Write();
		
		delete CTAG_vs_SUBRUN; delete SIGMA_vs_SUBRUN;

	}

	output->Write(); cout<<"Written:\t"<<outName<<endl;
	return 0;
}