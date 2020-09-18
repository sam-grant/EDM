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

	std::string qualString = "NoQ";
	//bool quality = false;
	//std::string qualString;
	//if(quality) qualString = "Q";
	//else qualString = "NoQ";

	// Read file
	TFile *input = TFile::Open(("../Plots/MC/30xBNL/moduloPlots"+qualString+".root").c_str());
	//TFile *input = TFile::Open("../Plots/MC/30xBNL/moduloPlotsNoQ.root");
	cout << "\nRead input...\t\t: " << input << endl;

	TH2D *moduloHist = (TH2D*)input->Get("ThetaY_vs_Time_Modulo");
	cout << "Got modulo hist...\t: " << moduloHist <<endl;

	// Make profile
	TH1D *moduloProf = moduloHist->ProfileX();
	cout << "Generated x-profile...\t: " << moduloProf << endl; 

	// Rebin
	cout << "\nNBins before rebin...\t\t: " << moduloProf->GetNbinsX() <<endl;
	cout << "Binwidth before rebin...\t: " << moduloProf->GetXaxis()->GetBinWidth(1) << "\n" <<endl;

	//moduloProf->Rebin(150);

	cout << "NBins post rebin...\t: " << moduloProf->GetNbinsX() <<endl;
	cout << "Binwidth post rebin...\t: " << moduloProf->GetXaxis()->GetBinWidth(1) << "\n" <<endl;

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

	TGraphErrors *moduloGraph = new TGraphErrors(n,x,y,ex,ey);

	// Fit
	SimpleSinFit(moduloGraph, 0.15, OMEGA_A * 1e3, 0);

	DrawSimpleSinFit(moduloGraph, ";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad]", ("../Images/MC/30xBNL/simpleModuloFit_"+qualString).c_str(), double(moduloProf->GetEntries()));


	return 0;
}
