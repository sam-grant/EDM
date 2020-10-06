// Plot the mean calo pos, and error on the mean, versus number of sub-runs

#include <iostream>
#include <vector>

#include "FancyDraw.h"
#include "Utils.h"

#include "TFile.h"
#include "TH1.h"
#include "TH2.h"
#include "TGraphErrors.h"

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


TGraphErrors *DefineTGraph(vector<int> N, vector<float> mean, vector<float> err, int type) { 

	int n = N.size();
	double x[n];
  	double ex[n];
  	double y[n];
  	double ey[n];

  	for(int i = 0; i < n; i++) {

  		if(type==0) {

  			x[i] = N.at(i); //i+1; // hists.at(i)->GetEntries();
  			ex[i] = 0; 
  			y[i] = mean.at(i); //  moduloProf->GetBinContent(i+1); 
      		ey[i] = err.at(i); 

      	} else if(type==1) {

  			x[i] = N.at(i); //i+1;// hists.at(i)->GetEntries();
  			ex[i] = 0; 
  			y[i] = err.at(i); //  moduloProf->GetBinContent(i+1); 
  			//cout<< errorOnMean(hists.at(i))<< endl;
      		ey[i] = 0; 
      	}

  	}

  	return new TGraphErrors(n,x,y,ex,ey);
}


int main() {

	TFile *input = TFile::Open("../Plots/Data/MeanCaloPos/plots_calo_15921.root");
	//TFile *input = TFile::Open("/Users/samuelgrant/Documents/gm2/EDM/ReadTrees/Data/ReadCaloTrees/plots_Data_15921.root");

	cout<<"Opened file\t:"<<input<<endl;

	int subruns = 0;

	//TH1 *ctagHist;
	//TH1 *ctagHistStack;
	TH2 *posHist;
	TH2 *posHistStack;

	//vector<int> N;
	vector<int> ctag; 
	vector<float> meanPosY; 
	vector<float> meanPosYErr;

	// Loop through sub-runs 

	// Note that i =/= n_subruns
	for(int i = 0; i<400; i++) { 

		//ctagHist = (TH1D*)input->Get( ("ctag_"+to_string(i)).c_str() );
		posHist = (TH2D*)input->Get( ("clusterY_vs_clusterX_"+to_string(i)).c_str() );

		if(posHist == 0) continue;

		//cout<<"Got posHist\t:"<<posHist<<endl;

		if(subruns==0) {
			posHistStack = posHist;
		} else {
			posHistStack->Add(posHist);
		}

		//cout<<"ctagHistStack->GetMean()\t:"<<ctagHistStack->GetMean()<<endl;
		ctag.push_back(posHistStack->GetEntries());

		// Do I want mean CTAGS, or the aggregated total CTAGs? 

		//ctag.push_back(ctagHistStack->GetMean());
		meanPosY.push_back(posHistStack->ProjectionY()->GetMean());
		meanPosYErr.push_back(posHistStack->ProjectionY()->GetMeanError());	

		if(subruns==25) {
			cout<<"SIGMA at 25 sub-runs:\t"<<posHistStack->ProjectionY()->GetMeanError()<<endl;
			cout<<"CTAGs at 25 sub-runs:\t"<<posHistStack->ProjectionY()->GetEntries()<<endl;
		} else if(subruns==50) {
			cout<<"SIGMA at 50 sub-runs:\t"<<posHistStack->ProjectionY()->GetMeanError()<<endl;
			cout<<"CTAGs at 50 sub-runs:\t"<<posHistStack->ProjectionY()->GetEntries()<<endl;
		} else if(subruns==75) {
			cout<<"SIGMA at 75 sub-runs:\t"<<posHistStack->ProjectionY()->GetMeanError()<<endl;
			cout<<"CTAGs at 75 sub-runs:\t"<<posHistStack->ProjectionY()->GetEntries()<<endl;
		} else if(subruns==100) {
			cout<<"SIGMA at 100 sub-runs:\t"<<posHistStack->ProjectionY()->GetMeanError()<<endl;
			cout<<"CTAGs at 100 sub-runs:\t"<<posHistStack->ProjectionY()->GetEntries()<<endl;
		} else if(subruns==125) {
			cout<<"SIGMA at 125 sub-runs:\t"<<posHistStack->ProjectionY()->GetMeanError()<<endl;
			cout<<"CTAGs at 125 sub-runs:\t"<<posHistStack->ProjectionY()->GetEntries()<<endl;
		} else if(subruns==150) {
			cout<<"SIGMA at 150 sub-runs:\t"<<posHistStack->ProjectionY()->GetMeanError()<<endl;
			cout<<"CTAGs at 150 sub-runs:\t"<<posHistStack->ProjectionY()->GetEntries()<<endl;
		} else if(subruns==175) {
			cout<<"SIGMA at 175 sub-runs:\t"<<posHistStack->ProjectionY()->GetMeanError()<<endl;
			cout<<"CTAGs at 175 sub-runs:\t"<<posHistStack->ProjectionY()->GetEntries()<<endl;
		} else if(subruns==200) {
			cout<<"SIGMA at 200 sub-runs:\t"<<posHistStack->ProjectionY()->GetMeanError()<<endl;
			cout<<"CTAGs at 200 sub-runs:\t"<<posHistStack->ProjectionY()->GetEntries()<<endl;
		}
 
		subruns++;

	}


	TGraphErrors *gr0 = DefineTGraph(ctag, meanPosY, meanPosYErr, 0);
	TGraphErrors *gr1 = DefineTGraph(ctag, meanPosY, meanPosYErr, 1);
	//TGraphErrors *gr2 = DefineTGraph(N, meanPos, meanPosErr, 0);
	//TGraphErrors *gr3 = DefineTGraph(N, meanPos, meanPosErr, 1);

	gr0->GetXaxis()->SetRangeUser(0,ctag.back());
	gr1->GetXaxis()->SetRangeUser(0,ctag.back());
	gr0->GetYaxis()->SetRangeUser(75.45,76.1);
	gr1->GetYaxis()->SetRangeUser(0,0.25);
	//gr2->GetXaxis()->SetRangeUser(0,N.back());
	//gr3->GetXaxis()->SetRangeUser(0,N.back());

	DrawTGraphErrorsDoubleXAxis(gr0, ";CTAGs;Cluster mean Y-position [mm]", "Number of sub-runs", "../Images/Data/CaloMeanPos/CaloMeanYPos_vs_CTAG", 0, subruns);
	DrawTGraphErrorsDoubleXAxis(gr1, ";CTAGs;Cluster mean Y-position uncertainty [mm]", "Number of sub-runs", "../Images/Data/CaloMeanPos/CaloMeanPosYErr_vs_CTAG", 0, subruns);
	//DrawTGraphErrorsDoubleXAxis(gr2, ";Number of clusters;Cluster mean position [mm]", "Number of sub-runs", "../Images/Data/CaloMeanPos/CaloMeanPos_vs_N", 0, counter);
	//DrawTGraphErrorsDoubleXAxis(gr3, ";Number of clusters;Cluster mean position uncertainty [mm]", "Number of sub-runs", "../Images/Data/CaloMeanPos/CaloMeanPosErr_vs_N", 0, counter);

	return 0;
}