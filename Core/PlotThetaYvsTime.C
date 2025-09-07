#include <iostream>

#include "FancyDraw.h"
#include "RootInclude.h"

int main (int argc, char *argv[]) {

	std::string subrun = argv[1];

	TFile *fin = TFile::Open(("../Plots/Data/dMu/Run-1/Plots/gm2pro_daq_full_run1_EndGame_5042B_GLdocDB20839-v1/trackRecoPlots_"+subrun+".root").c_str());

	TH2D *h2_thetaY_vs_time = (TH2D*)fin->Get("MainPlots/S12S18_ThetaY_vs_Time");

	h2_thetaY_vs_time->RebinX(67);	

	TH1D *px_thetaY_vs_time = h2_thetaY_vs_time->ProfileX();

	DrawTH1(px_thetaY_vs_time, subrun+";Decay time [#mus];#LT#theta_{y}#GT [mrad]", "../Images/Data/dMu/Run-1/ThetaYvsTime/px_thetaY_vs_time_"+subrun);

	fin->Close();

	return 0;

}