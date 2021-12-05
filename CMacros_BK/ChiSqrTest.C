#include "FancyDraw.h"

void DrawChiSqrDist(int NDF) {

	double mean = NDF;
	double width = sqrt(2*NDF);

	TH2D *hist = new TH2D("", "", 100, 0, 10*NDF, 100, 0, 1);

	double chiSqr = 0;
	TRandom3 *rand = new TRandom3(12345);

	for(int i(0); i<1e6; i++) { 

		double chiSqr = rand->Uniform(0, 10*NDF); 
		double prob = TMath::Prob(chiSqr, NDF); 


		hist->Fill(chiSqr, prob);

	}

	DrawTH2(hist, ";#chi^{2};Probability", "../tmp/chiSqr");

	return;

} 


void Run(std::string config) { 

	TString finName = "../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_"+config+".root";
	TFile *fin = TFile::Open(finName);

	cout<<"Opened file "<<finName<<", "<<fin<<endl;

	TGraphErrors *gr_edmFit = (TGraphErrors*)fin->Get("SimultaneousAnalysis/S12S18_edmFit");
	cout<<"Got graph "<<gr_edmFit<<endl;

	TF1 *f_edmFit = (TF1*)gr_edmFit->GetFunction("FullEDMFunc");
	cout<<"Got fit function "<<f_edmFit<<endl;

	double chiSqr =  f_edmFit->GetChisquare();
	int NDF = f_edmFit->GetNDF();
	int nPar = f_edmFit->GetNpar(); 
	int nBins = gr_edmFit->GetN(); 
	int nFreePar = f_edmFit->GetNumberFreeParameters();

	cout<<"Mean value is "<<NDF<<" and the width is "<<sqrt(2*NDF)<<endl;

	cout<<"Mean value is "<<NDF/NDF<<" and the width is "<<sqrt(2*NDF)/NDF<<endl;

	cout<<"1 sigma = "<<sqrt(2*NDF)/NDF<<endl;
	cout<<"2 sigma = "<<2*sqrt(2*NDF)/NDF<<endl;
	cout<<"3 sigma = "<<3*sqrt(2*NDF)/NDF<<endl;

	cout<<"Difference from one is "<<1-chiSqr/NDF<<endl;

	cout<<"p-value is "<<TMath::Prob(chiSqr, NDF)<<endl;

	//DrawChiSqrDist(NDF);
	//DrawChiSqrDist(1);

/*	double k = NDF; 
	double dk = sqrt(2*k);

	double chiSqr = 0;

	TH1D *hist = new TH1D("", "", 100, 0, 100);

	TRandom3 *rand = new TRandom3(12345);

	for(int i(0); i<100; i++) {

		double chiSqr = rand->Prob(i,NDF); 
		hist->Fill(chiSqr);

	}

	DrawTH1(hist,";#chi^{2};Entries", "../tmp/chiSqr");
	//while TMath::Prob(f_edmFit->GetChisquare(),f_edmFit->GetNDF())<<endl;

	int nPar = f_edmFit->GetNpar(); 
	int NDF = f_edmFit->GetNDF();
	int nBins = gr_edmFit->GetN(); 
	int nFreePar = f_edmFit->GetNumberFreeParameters();
	cout<<"NDF "<<NDF<<endl; 
	cout<<"NBins "<<nBins<<endl; 
	cout<<"NDF  "<<nBins - nFreePar<<endl;*/

	fin->Close();

	return;

}

void ChiSqrTest() { 

	Run("Run-1d_125MeV_BQ");

	return; 

}