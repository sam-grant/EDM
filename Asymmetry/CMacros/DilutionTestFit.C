#include "FancyDraw.h"

int GetStep(string config) { 

  if(config.find("500MeV") != std::string::npos) { 
    return 500;
  } else if(config.find("250MeV") != std::string::npos) { 
    return 250;
  } else if(config.find("200MeV") != std::string::npos) { 
    return 200;
  } else { 
    cerr<<"Step size is unknown";
    return -1;
  }

}

void Run(std::string config) { 

	// Get file
  	TString fn = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_"+config+".root";
  	TFile fin = TFile::Open(fn);

  	int step = GetStep(config);

  	TGraphErrors *gr_AEDM_vs_p = (TGraphErrors*)fin->Get("MomentunBinnedAnalysis/ParameterScans/MomSlices/S0S12S18_AEDM_vs_p");
  	TGraphErrors *gr_thetaY_RMS_vs_p = (TGraphErrors*)fin->Get("MomentunBinnedAnalysis/ParameterScans/MomSlices/S0S12S18_thetaY_RMS_vs_p");

  	TGraphErrors *gr_AEDM_over_thetaY_RMS_vs_p = new TGraphErrors();

  	for(int i(0); i<gr_AEDM_vs_p->GetN(); i++) {

  		double p = gr_AEDM_vs_p->GetX()[i];
  		double ep = gr_AEDM_vs_p->GetEX()[i];

  		double y = gr_AEDM_vs_p->GetY()[i] / gr_thetaY_RMS_vs_p->GetY()[i];
  		double ey = y * sqrt( pow((gr_AEDM_vs_p->GetEY()[i]/gr_AEDM_vs_p->GetY()[i]), 2) + pow((gr_thetaY_RMS_vs_p->GetEY()[i]/gr_thetaY_RMS_vs_p->GetY()[i]), 2) );

  		gr_AEDM_over_thetaY_RMS_vs_p->SetPoint(i, p, y);
   		gr_AEDM_over_thetaY_RMS_vs_p->SetPointError(i, p, y);

  	}

  	DrawTGraphErrors(gr_AEDM_over_thetaY_RMS_vs_p, ";Decay vertex momentum [MeV]; A_{EDM}/#sigma{theta_{y}} / "+to_string(step)" MeV", )

  	fin->Close();

	return;

}

void DilutionTestFits() { 

	Run("trackReco_AAR_250MeV_BQ");

	return;

}