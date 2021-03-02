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

int main() {

	std::string config = "5.4e-18";//30xBNL"; 
	std::string qualString = "Q";
	//bool quality = false;
	//std::string qualString;
	//if(quality) qualString = "Q";
	//else qualString = "NoQ";

	// Read file
	TFile *input = TFile::Open(("../Plots/MC/dMU/"+config+"/moduloPlots_"+qualString+".root").c_str());
	std::cout << "\nRead input...\t\t: " << input << std::endl;

	TH2D *moduloHist = (TH2D*)input->Get("ThetaY_vs_Time_Modulo");
	std::cout << "Got modulo hist...\t: " << moduloHist << std::endl;

	// Make profile
	TH1D *moduloProf = moduloHist->ProfileX();
	std::cout << "Generated x-profile...\t: " << moduloProf << std::endl; 

	// Rebin
	std::cout << "\nNBins before rebin...\t\t: " << moduloProf->GetNbinsX() << std::endl;
	std::cout << "Binwidth before rebin...\t: " << moduloProf->GetXaxis()->GetBinWidth(1) << "\n" << std::endl;

	//moduloProf->Rebin(150);

	std::cout << "NBins post rebin...\t: " << moduloProf->GetNbinsX() << std::endl;
	std::cout << "Binwidth post rebin...\t: " << moduloProf->GetXaxis()->GetBinWidth(1) << "\n" << std::endl;

	// Convert to TGraph
	int n = moduloProf->GetNbinsX();
	double x[n];
  	double ex[n];
  	double y[n];
  	double ey[n];

  	for(int i = 0; i < n; i++) {

  		x[i] = moduloProf->GetBinCenter(i+1);
  		ex[i] = 0; 
  		y[i] = moduloProf->GetBinContent(i+1); 
      	ey[i] = moduloProf->GetBinError(i+1); 

  	}

  	int nEntries = moduloProf->GetEntries();

  	delete moduloProf; delete moduloHist;

	TGraphErrors *moduloGraph = new TGraphErrors(n,x,y,ex,ey);

	// Fit
	SimpleSinFit(moduloGraph, 0.15, OMEGA_A * 1e3, 0);

	std::cout<<"A_EDM:\t"<<moduloGraph->GetFunction("SimpleSinFunc")->GetParameter(0)<<std::endl;
	
	DrawSimpleSinFit(moduloGraph, ";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad]", ("../Images/MC/"+config+"/simpleModuloFit_"+qualString).c_str(), double(nEntries),true);


	return 0;
}
