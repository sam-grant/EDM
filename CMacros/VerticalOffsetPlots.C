#include "FancyDraw.h"

void Run(string config) { 

	TString finName = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_"+config+".root";
	TFile *fin = TFile::Open(finName);

	TGraphErrors *gr = (TGraphErrors*)fin->Get("MomentumBinnedAnalysis/ParameterScans/S0S12S18_AEDM_vs_p_thetaY");
	if(gr==0) gr = (TGraphErrors*)fin->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY");

	TGraphErrors *new_gr = new TGraphErrors();

	int count = 0;

	for(int i(0); i<gr->GetN(); i++) { 

		double x = gr->GetX()[i];
		double y = gr->GetY()[i];
		double ey = gr->GetEY()[i];

		if(x < 750 || x > 2750) continue;

		new_gr->SetPoint(count, x, y);
		new_gr->SetPointError(count, 0, ey);

		count++;

	}


	DrawTGraphErrors(new_gr, ";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV", "../Images/MC/Acceptance/VerticalOffset/gr_"+config);

	return;

}

void VerticalOffsetPlots() { 

	Run("trackReco_WORLD_250MeV_BQ_noCorr");

	return;

}