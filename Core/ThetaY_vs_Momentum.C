#include "FancyDraw.h"

void ThetaY_vs_Momentum() { 

	TString finName = "../Plots/MC/dMu/5.4e-18/Plots/edmPlots_allDecays_WORLD_250MeV_noQ.root";
	TFile *fin = TFile::Open(finName);
	cout<<"Reading file "<<finName<<", "<<fin<<endl;

	TString histName = "SimultaneousAnalysis/ThetaY_vs_Momentum";
	TH2D *hist = (TH2D*)fin->Get(histName);

	cout<<"Got histogram "<<histName<<", "<<hist<<endl;

	DrawTH2(hist, "", "../Images/MC/dMu/5.4e-18/MainPlots/ThetaY_vs_Momentum_allDecays_WORLD_250MeV_noQ");

	fin->Close();



	return;

}

