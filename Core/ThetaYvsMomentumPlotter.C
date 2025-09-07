#include "FancyDraw.h"

void ThetaYvsMomentumPlotter() { 

	TString finName0 = "../Plots/MC/dMu/5.4e-18/Plots/thetaYvsMomentum_allDecays_WORLD_250MeV_AQ_noVertCorr.root";
	TString finName1 = "../Plots/MC/dMu/5.4e-18/Plots/thetaYvsMomentum_trackTruth_WORLD_250MeV_BQ_noVertCorr.root";
	TString finName2 = "../Plots/Data/dMu/Run-1/Plots/thetaYvsMomentum_Run-1a_BQ_noVertCorr.root";
	TString finName3 = "../Plots/Data/dMu/Run-1/Plots/thetaYvsMomentum_Run-1b_BQ_noVertCorr.root";
	TString finName4 = "../Plots/Data/dMu/Run-1/Plots/thetaYvsMomentum_Run-1c_BQ_noVertCorr.root";
	TString finName5 = "../Plots/Data/dMu/Run-1/Plots/thetaYvsMomentum_Run-1d_50usStartTime_BQ_noVertCorr.root";

	TFile *fin0 = TFile::Open(finName0);
	TFile *fin1 = TFile::Open(finName1);
	TFile *fin2 = TFile::Open(finName2);
	TFile *fin3 = TFile::Open(finName3);
	TFile *fin4 = TFile::Open(finName4);
	TFile *fin5 = TFile::Open(finName5);

	cout<<fin0<<", "<<fin1<<", "<<fin2<<", "<<fin3<<", "<<fin4<<", "<<fin5<<endl;

	TH2D *h0 = (TH2D*)fin0->Get("SanityPlots/ThetaY_vs_Momentum");
	TH2D *h1 = (TH2D*)fin1->Get("SanityPlots/S12S18_ThetaY_vs_Momentum");
	TH2D *h2 = (TH2D*)fin2->Get("SanityPlots/S12S18_ThetaY_vs_Momentum");
	TH2D *h3 = (TH2D*)fin3->Get("SanityPlots/S12S18_ThetaY_vs_Momentum");
	TH2D *h4 = (TH2D*)fin4->Get("SanityPlots/S12S18_ThetaY_vs_Momentum");
	TH2D *h5 = (TH2D*)fin5->Get("SanityPlots/S12S18_ThetaY_vs_Momentum");

	cout<<h0<<", "<<h1<<", "<<h2<<", "<<h3<<", "<<h4<<", "<<h5<<endl;

	h0->GetYaxis()->SetRangeUser(-150, +150);
	h1->GetYaxis()->SetRangeUser(-150, +150);
	h2->GetYaxis()->SetRangeUser(-150, +150);
	h3->GetYaxis()->SetRangeUser(-150, +150);
	h4->GetYaxis()->SetRangeUser(-150, +150);
	h5->GetYaxis()->SetRangeUser(-150, +150);

	DrawTH2(h0, "Sim: all decays", "../Images/MC/dMu/5.4e-18/EDMSimSanityPlots/thetaYvsMomentum_allDecays_WORLD_250MeV_AQ_noVertCorr");
	DrawTH2(h1, "Sim: truth vertices", "../Images/MC/dMu/5.4e-18/EDMSimSanityPlots/S12S18_thetaYvsMomentum_trackTruth_WORLD_250MeV_BQ_noVertCorr");
	DrawTH2(h2, "Data: Run-1a", "../Images/MC/dMu/5.4e-18/EDMSimSanityPlots/S12S18_thetaYvsMomentum_Run-1a_BQ_noVertCorr");
	DrawTH2(h3, "Data: Run-1b", "../Images/MC/dMu/5.4e-18/EDMSimSanityPlots/S12S18_thetaYvsMomentum_Run-1b_BQ_noVertCorr");
	DrawTH2(h4, "Data: Run-1c", "../Images/MC/dMu/5.4e-18/EDMSimSanityPlots/S12S18_thetaYvsMomentum_Run-1c_BQ_noVertCorr");
	DrawTH2(h5, "Data: Run-1d", "../Images/MC/dMu/5.4e-18/EDMSimSanityPlots/S12S18_thetaYvsMomentum_Run-1d_50usStartTime_BQ_noVertCorr");

	fin0->Close();
	fin1->Close();
	fin2->Close();
	fin3->Close();
	fin4->Close();
	fin5->Close();

	return;

}