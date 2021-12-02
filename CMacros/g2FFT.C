#include "FancyDraw.h"
#include "Utils.h"

void Run(std::string config) { 

	TString finName = "../Plots/Data/dMu/Run-1/Plots/edmPlots_"+config+".root";
	TFile *fin = TFile::Open(finName);

	cout<<"Read input file "<<finName<<", "<<fin<<endl;

	TString wiggleName = "SimultaneousAnalysis/S12S18_Wiggle";
	TH1D *wiggle = (TH1D*)fin->Get(wiggleName);

	cout<<"Got histogram "<<wiggleName<<", "<<wiggle<<endl;

	TH1D *fft = GetFFT(wiggle);

	cout<<"Produced FFT "<<fft<<endl;

	DrawTH1(fft, ";Frequency [MHz];FFT magnitude / "+to_string(fft->GetBinWidth(1))+" MHz", "../Images/Data/dMu/Run-1/MainPlots/S12S18_WiggleFFT_"+config);

	fin->Close();

	return;

}


void g2FFT() { 

	Run("Run-1a_125MeV_BQ");
	Run("Run-1b_125MeV_BQ");
	Run("Run-1c_125MeV_BQ");
	Run("Run-1d_125MeV_BQ");

	return;

}