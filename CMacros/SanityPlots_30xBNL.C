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

	bool quality = true;
	std::string qualString;
	if(quality) qualString = "Q";
	else qualString = "NoQ";

	TFile *input = TFile::Open(("../Plots/MC/30xBNL/moduloPlots"+qualString+".root").c_str());
	cout << "\nRead input...\t\t: " << input << endl;
	
	// Draw 2D plots
	TH2D *DecayX_vs_DecayZ = (TH2D*)input->Get("DecayX_vs_DecayZ");
	DrawTH2(DecayX_vs_DecayZ, "", ("../Images/MC/30xBNL/DecayX_vs_DecayZ_"+qualString).c_str());
	TH2D *ThetaY_vs_DecayTime = (TH2D*)input->Get("ThetaY_vs_DecayTime");
	DrawTH2(ThetaY_vs_DecayTime, "", ("../Images/MC/30xBNL/ThetaY_vs_DecayTime_2D_"+qualString).c_str());
	TH2D *ThetaY_vs_DecayTime_Modulo = (TH2D*)input->Get("ThetaY_vs_DecayTime_Modulo_Fine");
	DrawTH2(ThetaY_vs_DecayTime_Modulo, "", ("../Images/MC/30xBNL/ThetaY_vs_DecayTime_Modulo_2D_"+qualString).c_str());

	// Draw projections
	TH1D *ThetaY_vs_DecayTime_ProjX = ((TH2D*)input->Get("ThetaY_vs_DecayTime"))->ProjectionX();
	DrawTH1(ThetaY_vs_DecayTime_ProjX, "", ("../Images/MC/30xBNL/ThetaY_vs_DecayTime_ProjX_"+qualString).c_str());
	
	TH1D *ThetaY_vs_DecayTime_ProjY = ((TH2D*)input->Get("ThetaY_vs_DecayTime"))->ProjectionY();
	DrawTH1(ThetaY_vs_DecayTime_ProjY, "", ("../Images/MC/30xBNL/ThetaY_vs_DecayTime_Modulo_ProjY_"+qualString).c_str());


	TH1D *ThetaY_vs_DecayTime_Modulo_ProjX = ((TH2D*)input->Get("ThetaY_vs_DecayTime_Modulo"))->ProjectionX();
	DrawTH1(ThetaY_vs_DecayTime_Modulo_ProjX, "", ("../Images/MC/30xBNL/ThetaY_vs_DecayTime_Modulo_ProjX_"+qualString).c_str());
	
	TH1D *ThetaY_vs_DecayTime_Modulo_ProjY = ((TH2D*)input->Get("ThetaY_vs_DecayTime_Modulo"))->ProjectionY();
	DrawTH1(ThetaY_vs_DecayTime_Modulo_ProjY, "", ("../Images/MC/30xBNL/ThetaY_vs_DecayTime_Modulo_ProjY_"+qualString).c_str());


	input->Close();
	return 0;
}
