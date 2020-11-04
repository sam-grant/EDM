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
#include <sstream>

// Blinding
#include "../Blinding/Blinders.hh"

using namespace std;

// EDM constants
double e = 1.6e-19; // J
double aMu = 11659208.9e-10; 
double mMu = 105.6583715; // u
double mMuKg = mMu * 1.79e-30; // kg
double B = 1.451269; // T
double c = 299792458.; // m/s
double cm2m = 100.0; // convert to m from cm
double hbar = 1.05457e-34;
double pmagic = mMu/std::sqrt(aMu);
double gmagic = std::sqrt( 1.+1./aMu );
double beta   = std::sqrt( 1.-1./(gmagic*gmagic) );
double d0 = 1.9e-19; // BNL edm limit in e.cm
double ppm = 1e-6;

// Use a test EDM
bool testFlag = false;
double TESTEDM = d0 / 2.; 


double blinded_dMu(bool test) {
  
  //
  // returns a blinded input edm value. returned dMu will be unphysical. it will be in the range of +- 3*d0 centred around 10*d0
  //

  double omega_blind = blinding::getBlinded.paramToFreq(R); // this is the blinded omegaA value
  double omega_ref   = blinding::getBlinded.referenceValue(); // this is the reference omegaA value
  double omega_diff  =  ((omega_blind / omega_ref) - 1) / ppm; // this is (omega_blind - omega_ref) in units of ppm
  double dMu_blind   = omega_diff * d0; // this is the blinded dMu in e.cm
  
  if(!test)	return dMu_blind; 
  else return TESTEDM;

}


double GetDelta(double dMu);


/*double SimpleSinFunc(double *x, double *par) {
  return ( par[0] * TMath::Sin(par[1] * x[0]) ) + par[2];
}

void SimpleSinFit(TGraphErrors *graph, double par1, double par2, double par3) {
  
  TF1 *func = new TF1("SimpleSinFunc", SimpleSinFunc, 0, G2PERIOD, 3);

  // WORKS PERFECTLY FOR 30xBNL

  // Put 10% limits on omega_a
  func->SetParLimits(1, par2-(par2*0.10), par2+(par2*0.10));  // Omega

  graph->Fit(func, "MR"); 
  
  std::cout << "\nChi^2/ndf...\t:" << func->GetChisquare() / func->GetNDF() << std::endl;

  return;

}*/

/*double BlindedAmplitude() {

  // this returns a blinded ppm value
  
  double omega_blind = getBlinded.paramToFreq(R); // this is the blinded omegaA value
  double omega_ref   = getBlinded.referenceValue(); // this is the reference omegaA value
  double omega_diff  =  ((omega_blind / omega_ref) - 1) / 1e-6; // this is (omega_blind - omega_ref) in units of ppm
  double amp_blind   = omega_diff * 0.0001; // this is the blinded amplitude of the test oscillation
  return amp_blind;

}*/

int main() {



	std::string config = "30xBNL"; // 1xBNL"
	std::string qualString = "Q";
	//bool quality = false;
	//std::string qualString;
	//if(quality) qualString = "Q";
	//else qualString = "NoQ";

	// Read file
	TFile *input = TFile::Open(("../Plots/MC/"+config+"/moduloPlots"+qualString+".root").c_str());
	std::cout << "\nRead input...\t\t: " << input << std::endl;

	TH2D *moduloHist = (TH2D*)input->Get("ThetaY_vs_Time_Modulo");
	std::cout << "Got modulo hist...\t: " << moduloHist << std::endl;

	// Make profile
	TProfile *moduloProf = moduloHist->ProfileX();
	std::cout << "Generated x-profile...\t: " << moduloProf << std::endl; 

  // Setup blinding
  // Width of 2*d0 around R=10*d0 with broad gaussian tails
  double R = 3.5; 
  double boxWidth = 0.25;
  double gausWidth = 0.7;
  
  blinding::Blinders::fitType ftype = blinding::Blinders::kOmega_a;
  blinding::Blinders myBlinder( ftype );
  blinding::Blinders getBlinded(ftype, "Inspiral, coalescence, ringdown", boxWidth, gausWidth);
 /*

	// Rebin
	std::cout << "\nNBins before rebin...\t\t: " << moduloProf->GetNbinsX() << std::endl;
	std::cout << "Binwidth before rebin...\t: " << moduloProf->GetXaxis()->GetBinWidth(1) << "\n" << std::endl;

	//moduloProf->Rebin(150);

	std::cout << "NBins post rebin...\t: " << moduloProf->GetNbinsX() << std::endl;
	std::cout << "Binwidth post rebin...\t: " << moduloProf->GetXaxis()->GetBinWidth(1) << "\n" << std::endl;*/

	// Convert to TGraph
/*	int n = moduloProf->GetNbinsX();
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

	TGraphErrors *moduloGraph = new TGraphErrors(n,x,y,ex,ey);*/

	// Fit with blinders 

	// First, get blind d_mu

	double dMu = blinded_dMu(testFlag);
  	double delta = GetDelta(dMu);
	double freq = getBlinded.referenceValue(); // omega
  	double tan_amp = tan(delta) / gmagic;
  	double amp = 0.13 * atan(tan_amp); // 0.13 is asymmetry factor
	
	//SimpleSinFit(moduloGraph, 0.15, OMEGA_A * 1e3, 0);

	// Fit with blinders





	// DrawSimpleSinFit(moduloGraph, ";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad]", ("../Images/MC/"+config+"/simpleModuloFit_"+qualString).c_str(), double(moduloProf->GetEntries()));


	return 0;
}

double GetDelta(double dMu) {
  double eta = ((4 * mMuKg * c * dMu)/ (hbar * cm2m) );
  double tan_delta = (eta * beta) / (2 * aMu);
  double delta = atan(tan_delta);
  return delta;
}
