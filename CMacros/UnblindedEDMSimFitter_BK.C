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

int main(int argc, char *argv[]) {

	std::string config = "5.4e-18";//30xBNL"; 
	std::string cuts = argv[1];
	//std::string qualString = cuts+"Q";//VertexExt_ptQ"; // VertexExt_Q";
	//std::string qualString = "VertCorr_"+cuts+"Q";//VertexExt_ptQ"; // VertexExt_Q";
	// std::string qualString = "S0S1218_"+cuts+"Q";//VertexExt_ptQ"; // VertexExt_Q";
	std::string qualString = "test_"+cuts+"Q"; // S0S1218_"+cuts+"Q";//VertexExt_ptQ"; // VertexExt_Q";
	//bool quality = false;
	//std::string qualString;
	//if(quality) qualString = "Q";
	//else qualString = "NoQ";

	// Read file
	TFile *input = TFile::Open(("../Plots/MC/dMu/"+config+"/dMuSim_"+qualString+".root").c_str());
	std::cout << "\nRead input...\t\t: " << input << std::endl;

	TH2D *moduloHist = (TH2D*)input->Get("ThetaY_vs_Time_Modulo");
	std::cout << "Got modulo hist...\t: " << moduloHist << std::endl;

	TH2D *moduloHistS0 = (TH2D*)input->Get("S0_ThetaY_vs_Time_Modulo");
	std::cout << "Got modulo hist...\t: " << moduloHistS0 << std::endl;

	TH2D *moduloHistS12 = (TH2D*)input->Get("S12_ThetaY_vs_Time_Modulo");
	std::cout << "Got modulo hist...\t: " << moduloHistS12 << std::endl;

	TH2D *moduloHistS18 = (TH2D*)input->Get("S18_ThetaY_vs_Time_Modulo");
	std::cout << "Got modulo hist...\t: " << moduloHistS18 << std::endl;


	TH2D *moduloHistS12S18 = (TH2D*)moduloHistS12->Clone("moduloHistS12S18"); 
	moduloHistS12S18->Add(moduloHistS18);
	//Add(moduloHistS18);

//	// Make profile
//	TH1D *moduloProf = moduloHist->ProfileX();
//	std::cout << "Generated x-profile...\t: " << moduloProf << std::endl; 
//
//	TH1D *moduloProfS0 = moduloHistS0->ProfileX();
//	std::cout << "Generated x-profile...\t: " << moduloProfS0 << std::endl; 
//
//	TH1D *moduloProfS12 = moduloHistS12->ProfileX();
//	std::cout << "Generated x-profile...\t: " << moduloProfS12 << std::endl; 
//
//	TH1D *moduloProfS18 = moduloHistS18->ProfileX();
//	std::cout << "Generated x-profile...\t: " << moduloProfS18 << std::endl; 

	// Rebin
	//std::cout << "\nNBins before rebin...\t\t: " << moduloProf->GetNbinsX() << std::endl;
	//std::cout << "Binwidth before rebin...\t: " << moduloProf->GetXaxis()->GetBinWidth(1) << "\n" << std::endl;

	//moduloProf->Rebin(150);

	//std::cout << "NBins post rebin...\t: " << moduloProf->GetNbinsX() << std::endl;
	//std::cout << "Binwidth post rebin...\t: " << moduloProf->GetXaxis()->GetBinWidth(1) << "\n" << std::endl;
	TH2D *hists[] = {moduloHist, moduloHistS0, moduloHistS12, moduloHistS18, moduloHistS12S18};

	std::string names[] = {"S0S12S18", "S0", "S12", "S18", "S12S18"};

	int counter = 0;

	for(auto &hist: hists) { 

		TH1D *moduloProf = hist->ProfileX();
		std::cout << "Generated x-profile...\t: " << moduloProf << std::endl;

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

  		int nEntries = hist->GetEntries();

  		delete moduloProf; delete hist;

		TGraphErrors *moduloGraph = new TGraphErrors(n,x,y,ex,ey);

		// Fit
		SimpleSinFit(moduloGraph, 0.15, OMEGA_A * 1e3, 0);

		std::cout<<"A_EDM:\t"<<moduloGraph->GetFunction("SimpleSinFunc")->GetParameter(0)<<std::endl;
	
		DrawSimpleSinFit(moduloGraph, names[counter]+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/dMu/"+config+"/Unblinded/"+names[counter]+"ModuloFit_"+qualString).c_str(), double(nEntries),true);

		counter++;

	}



	return 0;
}
