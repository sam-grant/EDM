#include "FancyDraw.h"

void Run(string config, string stn) { 

	// Open file 

	string finName = "../Plots/MC/dMu/5.4e-18/Plots/sanityPlots_"+config+".root";
	TFile *fin = TFile::Open(finName.c_str());

	cout<<"---> Opened file "<<finName<<", "<<fin<<endl;

	// Grab histograms

	//TH1D *h1_y = (TH1D*)fin->Get(("SanityPlots/"+stn+"Y").c_str());
	TH1D *h1_r = (TH1D*)fin->Get(("SanityPlots/"+stn+"R").c_str());
	TH1D *h1_p = (TH1D*)fin->Get(("SanityPlots/"+stn+"Momentum").c_str());
	TH1D *h1_thetaY = (TH1D*)fin->Get(("SanityPlots/"+stn+"ThetaY").c_str()); 
	TH2D *h2_thetaY_vs_p = (TH2D*)fin->Get(("SanityPlots/"+stn+"ThetaY_vs_Momentum").c_str()); 
	TH2D *h2_y_vs_r = (TH2D*)fin->Get(("SanityPlots/"+stn+"DecayY_vs_DecayR").c_str());

	//cout<<"---> Got histograms "<<h1_y<<", "<<h1_r<<", "<<h1_p<<", "<<h1_thetaY<<", "<<h2_thetaY_vs_p<<", "<<h2_y_vs_r<<endl;
	cout<<"---> Got histograms "<<h1_r<<", "<<h1_p<<", "<<h1_thetaY<<", "<<h2_thetaY_vs_p<<", "<<h2_y_vs_r<<endl;

	// Not plot them

	//DrawTH1(h1_y, "", "../Images/MC/dMu/5.4e-18/EDMSimSanityPlots/h1_y_"+config);
	DrawTH1(h1_r, "", "../Images/MC/dMu/5.4e-18/EDMSimSanityPlots/h1_r_"+config);
	DrawTH1(h1_p, "", "../Images/MC/dMu/5.4e-18/EDMSimSanityPlots/h1_p_"+config);
	DrawTH1(h1_thetaY, "", "../Images/MC/dMu/5.4e-18/EDMSimSanityPlots/h1_thetaY_"+config);
	DrawTH2(h2_thetaY_vs_p, "", "../Images/MC/dMu/5.4e-18/EDMSimSanityPlots/h2_thetaY_vs_p_"+config);
	DrawTH2(h2_y_vs_r, "", "../Images/MC/dMu/5.4e-18/EDMSimSanityPlots/h2_y_vs_r_"+config);

	fin->Close();

	return;

}


void EDMSimSanityPlots() { 

	//Run("allDecays_full_BQ", "");
	//Run("truth_full_BQ", "S0S12S18_");
	//Run("truth_full_plus1mm_BQ", "S0S12S18_");
	//Run("truth_full_minus1mm_BQ", "S0S12S18_");
	Run("truth_full_minus0.1deg_BQ", "S0S12S18_");
	Run("truth_full_plus0.1deg_BQ", "S0S12S18_");
/*	Run("allDecays_MainSample_BQ", "");
	Run("allDecays_Summer2022_full_BQ", "");
	Run("allDecays_full_BQ", "");*/
	//Run("truth_full_BQ", ""); 

	//truth_MainSample_BQ
	//truth_Summer2022_full_BQ
	
	//Run("reco_Summer2022_full_BQ", "S0S12S18_");
	//Run("truth_MainSample_BQ", "S0S12S18_"); 
	//Run("truth_Summer2022_full_BQ", "S0S12S18_"); 

	//Run("allDecays_Summer2022TestSample_BQ", "");
/*	Run("reco_MainSample_BQ", "_S0S12S18");
	Run("reco_Summer2022TestSample_BQ", "_S0S12S18");
	Run("reco_Plus1mmTestSample_BQ", "_S0S12S18");
	Run("reco_Minus1mmTestSample_BQ", "_S0S12S18");
	Run("reco_Plus0.1degTestSample_BQ", "_S0S12S18");
	Run("reco_Minus0.1degTestSample_BQ", "_S0S12S18");*/

	return;

}