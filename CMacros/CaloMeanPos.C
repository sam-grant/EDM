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


TGraphErrors *Graph(vector<int> N, vector<double> mean, vector<double> err, int type) { 

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

	TFile *input = TFile::Open("../Plots/Data/MeanCaloPos/plots_15921.root");
	cout<<"Opened file\t:"<<input<<endl;

	int counter = 0;

	TH2 *hist;
	TH2 *histStack;

	vector<int> N;
	vector<double> err;
	vector<double> mean; 

	for(int i = 0; i<400; i++) { 

		hist = (TH2D*)input->Get( ("caloVertY_vs_caloVertX_"+to_string(i)).c_str() );

		if(hist==0) continue;

		if(counter==0) histStack = hist;
		else histStack->Add(hist);

		N.push_back(histStack->GetEntries());
		mean.push_back(Mean(histStack));
		err.push_back(ErrorOnMean(histStack));		

		counter++;

	}

	//vector<TH2*> histStack = stack(input);

	//cout<<"errorOnMean at 0\t"<<errorOnMean(histStack.at(0))<<endl;
	//cout<<"errorOnMean at 10\t"<<errorOnMean(histStack.at(10))<<endl;
	//cout<<"errorOnMean at 20\t"<<errorOnMean(histStack.at(20))<<endl;
	//cout<<"errorOnMean at 30\t"<<errorOnMean(histStack.at(30))<<endl;

	TGraphErrors *gr0 = Graph(N, mean, err, 0);
	TGraphErrors *gr1 = Graph(N, mean, err, 1);

	//gr1->GetYaxis()->SetRangeUser(0.4,0.5);

	//DrawTGraphErrors(gr0, "test0", "0");
	//DrawTGraphErrors(gr1, "test1", "1");
	gr0->GetXaxis()->SetRangeUser(0,N.back());
	gr1->GetXaxis()->SetRangeUser(0,N.back());

	DrawTGraphErrorsDoubleXAxis(gr0, ";Number of tracks;Calo vertex mean position [mm]", "Number of sub-runs", "../Images/Data/CaloMeanPos/CaloMeanPos", 0, counter);
	DrawTGraphErrorsDoubleXAxis(gr1, ";Number of tracks;Calo vertex mean position uncertainty [mm]", "Number of sub-runs", "../Images/Data/CaloMeanPos/CaloMeanPosErr", 0, counter);

	return 0;
}

/*
vector<pair<int,double>> N_and_Err(TFile *input) {

	TH2 *hist;

	TH1 *projX;
	TH1 *projY;

	vector<pair<int,double>> result_;

	for(int i = 0; i<400; i++) { 

		if(i!=100) continue;

		hist = (TH2D*)input->Get( ("caloVertY_vs_caloVertX_"+to_string(i)).c_str() );

		if(hist==0) continue;

		int N = hist->GetEntries();

		projX = hist->ProjectionX();
		projY = hist->ProjectionY();

		double meanX = projX->GetMean();
		double errX = projX->GetMeanError();
		double meanY = projY->GetMean();
		double errY = projY->GetMeanError();

		double mean = sqrt(pow(meanX,2)+pow(meanY,2));
		double err = sqrt(pow(errX,2)+pow(errY,2));

		result_.push_back(make_pair(N,err));

	}

	return result_;

}

// Add histograms one by one, appending the result to a vector which each new hist
vector<TH2*> stack(TFile *input) {


	TH2 *hist;
	TH2 *histStack;

	vector<TH2*> stack_;

	int counter = 0;

	for(int i = 0; i<40; i++) { 

		hist = (TH2D*)input->Get( ("caloVertY_vs_caloVertX_"+to_string(i)).c_str() );

		if(hist==0) continue;

		if(counter==0) histStack = hist;
		else histStack->Add(hist);

		// Overwrites for some reason
		stack_.push_back(histStack);

		//cout<<"hist N:\t"<<hist->GetEntries()<<endl;
		//cout<<"histStack:\t"<<histStack->GetEntries()<<endl;
		//cout<<"mean:\t"<<mean(histStack)<<endl;
		cout<<"error:\t"<<errorOnMean(histStack)<<endl;
		

		counter++;

	}

	return stack_;

}*/