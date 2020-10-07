#include <iostream>

#include "FancyDraw.h"
#include "Utils.h"

#include "TFile.h"
#include "TMath.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TProfile.h"
#include "TF1.h"
#include "TDirectory.h"
#include "TObject.h"
#include "TGraphErrors.h"
#include "TCanvas.h"
#include "TLegend.h"
#include "TPaveStats.h"
#include "TPaveText.h"
#include "TVirtualFFT.h"

using namespace std;

int main() {

	std::string config = "1xBNL"; // "30xBNL"
	bool quality = true;
	std::string qualString;
	if(quality) qualString = "Q";
	else qualString = "NoQ";

	TFile *input = TFile::Open(("../Plots/MC/"+config+"/moduloPlots"+qualString+".root").c_str());
	cout << "\nRead input...\t\t: " << input << endl;

	// TODO: ADD 1D PLOTS
	
	// Draw 2D plots
	TH2D *DecayX_vs_DecayZ = (TH2D*)input->Get("DecayX_vs_DecayZ");
	DrawTH2(DecayX_vs_DecayZ, "", ("../Images/MC/"+config+"/DecayX_vs_DecayZ_"+qualString).c_str());
	TH2D *ThetaY_vs_Time = (TH2D*)input->Get("ThetaY_vs_Time");
	DrawTH2(ThetaY_vs_Time, "", ("../Images/MC/"+config+"/ThetaY_vs_Time_2D_"+qualString).c_str());
	TH2D *ThetaY_vs_Time_Modulo = (TH2D*)input->Get("ThetaY_vs_Time_Modulo_Fine");
	DrawTH2(ThetaY_vs_Time_Modulo, "", ("../Images/MC/"+config+"/ThetaY_vs_Time_Modulo_2D_"+qualString).c_str());

	TH1D *TrackMomentum = (TH1D*)input->Get("TrackMom"); // ->ProjectionY();
	DrawTH1(TrackMomentum, "", ("../Images/MC/"+config+"/TrackMom_"+qualString).c_str());
	// Draw projections
	TH1D *ThetaY_vs_Time_ProjX = ((TH2D*)input->Get("ThetaY_vs_Time"))->ProjectionX();
	DrawTH1(ThetaY_vs_Time_ProjX, "", ("../Images/MC/"+config+"/ThetaY_vs_Time_ProjX_"+qualString).c_str());
	
	TH1D *ThetaY_vs_Time_ProjY = ((TH2D*)input->Get("ThetaY_vs_Time"))->ProjectionY();
	DrawTH1(ThetaY_vs_Time_ProjY, "", ("../Images/MC/"+config+"/ThetaY_vs_Time_ProjY_"+qualString).c_str());

	TH1D *ThetaY_vs_Time_Modulo_ProjX = ((TH2D*)input->Get("ThetaY_vs_Time_Modulo"))->ProjectionX();
	DrawTH1(ThetaY_vs_Time_Modulo_ProjX, "", ("../Images/MC/"+config+"/ThetaY_vs_Time_Modulo_ProjX_"+qualString).c_str());
	
	TH1D *ThetaY_vs_Time_Modulo_ProjY = ((TH2D*)input->Get("ThetaY_vs_Time_Modulo"))->ProjectionY();
	DrawTH1(ThetaY_vs_Time_Modulo_ProjY, "", ("../Images/MC/"+config+"/ThetaY_vs_Time_Modulo_ProjY_"+qualString).c_str());


	input->Close();
	return 0;
}
