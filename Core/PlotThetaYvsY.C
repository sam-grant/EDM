#include "Utils.h"
#include "FancyDraw.h"

void PlotThetaYvsY() { 

	TString finName = "../Plots/MC/Acceptance/Plots/trackerAcceptancePlots.root";

	TFile *fin = TFile::Open(finName);

  	int step = 250; 
  	int nSlices = PMAX/step;
	
	for (int i_slice(0); i_slice<nSlices; i_slice++) { 

    	int lo = i_slice*step; 
    	int hi = step + i_slice*step;

    	string stepStr = to_string(lo)+"_"+to_string(hi);

    	TH2D *h2_decays = (TH2D*)fin->Get(("AllDecays/MomBins/ThetaY_vs_Y_"+stepStr).c_str());
    	TH2D *h2_tracks = (TH2D*)fin->Get(("Tracks/MomBins/S12S18_ThetaY_vs_Y_"+stepStr).c_str());

    	DrawTH2(h2_decays, "All decays: "+to_string(lo)+" < p [MeV] < "+to_string(hi), "../Images/MC/Acceptance/MomBins/ThetaY_vs_Y_decays_"+stepStr);
    	DrawTH2(h2_tracks, "Reco vertices: "+to_string(lo)+" < p [MeV] < "+to_string(hi), "../Images/MC/Acceptance/MomBins/ThetaY_vs_Y_tracks_"+stepStr);
	}

	return;

}