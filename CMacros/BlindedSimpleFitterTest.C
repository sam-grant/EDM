#include "../Blinding/Blinders.hh"
#include "FancyDraw.h"

#include "TTree.h"
#include "TCanvas.h"
#include "TFile.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TProfile.h"
#include "TGraphErrors.h"

// SETUP BLINDING

using namespace blinding;

// 3.5 x BNL 
double R = 3.5; 
double boxWidth = 0.25;
double gausWidth = 0.7;

Blinders::fitType ftype = Blinders::kOmega_a;
//Blinders myBlinder( ftype );
Blinders getBlinded( ftype, "Inspiral, coalescence, ringdown", boxWidth, gausWidth );
//Blinders getBlinded( ftype, "TWAT", boxWidth, gausWidth );

// CONSTANTS
double e = 1.6e-19; // J
double aMu = 11659208.9e-10; 
double mMu = 105.6583715; // u
double mMuKg = mMu * 1.79e-30; // kg
double B = 1.451269; // T
double c = 299792458.; // m/s
double cm2m = 100.0; // cm -> m
double hbar = 1.05457e-34;
double pmagic = mMu/std::sqrt(aMu);
double gmagic = std::sqrt( 1.+1./aMu );
double beta   = std::sqrt( 1.-1./(gmagic*gmagic) );
double d0 = 1.9e-19; // BNL edm limit in e.cm
double ppm = 1e-6;
double TESTEDM = d0 / 2.; 

bool testFlag = false;

double blinded_edm_value() {
  
  //
  // returns a blinded input edm value. returned dMu will be unphysical. it will be in the range of +- 3*d0 centred around 10*d0
  //

  double omega_blind = getBlinded.paramToFreq(R); // this is the blinded omegaA value
  double omega_ref   = getBlinded.referenceValue(); // this is the reference omegaA value
  double omega_diff  =  ((omega_blind / omega_ref) - 1) / ppm; // this is (omega_blind - omega_ref) in units of ppm
  double dMu_blind   = omega_diff * d0; // this is the blinded dMu in e.cm
  
  if (!testFlag)  {
    return dMu_blind;
  }
  else {
    return TESTEDM;
  }

}

double GetDelta(double dMu) {
	double eta = ((4 * mMuKg * c * dMu)/ (hbar * cm2m) );
	return atan( (eta * beta) / (2 * aMu) );
}

double OmegaFunc( double *x, double *p )  {
	double time = x[0]-p[5];
  	return p[0] * exp(-time/p[1]) * ( 1 - p[2] * cos(p[3] * time + p[4]));
}

double EDMFunc( double *x, double *p )  {
  double time = x[0] + p[3];
  return (-p[0] * cos(p[1]* time + p[2]));
}

int main() {

  	if (testFlag) {
		std::cout << "\n========= TESTING ==========" << "\n";
    	std::cout << "Using UNBLINDED test edm value of " << TESTEDM << " e.cm" << "\n";
  	}
  
  	// Read file
  	std::string config = "30xBNL"; // 1xBNL"
  	std::string qualString = "Q";

  	TFile *input = TFile::Open(("../Plots/MC/"+config+"/moduloPlots"+qualString+".root").c_str());
  	std::cout << "\nRead input...\t\t: " << input << std::endl;

  	// ================== First, fit N(t) for the phase ================== 

  	// Get unmodulated theta_y vs time for N(t) plot	
  	TH2D *ThetaY_vs_Time = (TH2D*)input->Get("ThetaY_vs_Time");	
  	TProfile *ThetaY_vs_Time_Prof = ThetaY_vs_Time->ProfileX();

   	// Make n(t) histogram
  	int nbinsx = ThetaY_vs_Time_Prof->GetNbinsX();
  	int x1 = ThetaY_vs_Time_Prof->GetXaxis()->GetBinLowEdge(0);
  	int x2 = ThetaY_vs_Time_Prof->GetXaxis()->GetBinUpEdge(nbinsx-1);
  	TH1D* ThetaY_vs_Time_1D = new TH1D("numberHist","N(t) vs t",nbinsx,x1,x2);

  	for (int i_bin(0); i_bin< ThetaY_vs_Time_Prof->GetNbinsX(); i_bin++) {
    	double i_entries =  ThetaY_vs_Time_Prof->GetBinEntries(i_bin);
    	ThetaY_vs_Time_1D->SetBinContent(i_bin,i_entries);
  	}

  	// Initial time cuts
  	double xmin = G2PERIOD*7;
  	double xmax = G2PERIOD*70;

  	ThetaY_vs_Time_1D->GetXaxis()->SetRangeUser(xmin,xmax);

  	// Fit the number hist to get a guess at the phase

  	TF1* omegaFunc = new TF1("omegaFunc",OmegaFunc,xmin,xmax,6);
  	omegaFunc->SetParNames("N","#gamma#tau","A","#omega","#phi","off");//,"Time offset");	
  	omegaFunc->SetNpx(10000);

  	omegaFunc->SetParameter(1,64.4); // Muon lifetime, assists fit
  	// Fix omega_a to blinded reference value
  	omegaFunc->SetParameter(3,getBlinded.referenceValue());
  	omegaFunc->FixParameter(3,getBlinded.referenceValue());
  	// Fix the time offset to the start time
  	omegaFunc->SetParameter(5,xmin);
  	omegaFunc->FixParameter(5,xmin);

	ThetaY_vs_Time_1D->Fit(omegaFunc);

  	//DrawTH1Fit(ThetaY_vs_Time_1D,omegaFunc,";Time [#mus];N(t)","../Images/BlindingTest/ThetaY_vs_Time_1D"); 

  	double phi_omega = omegaFunc->GetParameter(4);
  	// Shift the phase 90 deg
  	double phi_edm = phi_omega + M_PI/2.; 

  	// ================== Second, get blinded A_EDM ================== 

  	double dMu_blind = blinded_edm_value();
  	double delta_blind = GetDelta(dMu_blind);
  	double omega_a = getBlinded.referenceValue(); 
  	double tan_A_edm = tan(delta_blind) / gmagic;
  	double A_edm = 0.1 * atan(tan_A_edm); // 0.1 is asymmetry factor

  	//std::cout<<"A_EDM\t"<<A_EDM<<std::endl;

  	// ================== Third, inject blinded A_EDM into modulo plot ==================

  	TH2D *ThetaY_vs_Time_Modulo = (TH2D*)input->Get("ThetaY_vs_Time_Modulo");
  	// Do this as a TH1
  	TH1D *ThetaY_vs_Time_Modulo_Prof = ThetaY_vs_Time_Modulo->ProfileX(); 
  	// Reset min/max
  	xmin = 0;
  	xmax = G2PERIOD;

  	TF1* edmFunc = new TF1("edmFunc",EDMFunc,xmin,xmax,4);
  	edmFunc->SetParNames("A_{EDM blinded}","#omega_{a BNL}","#phi","offset");
  	edmFunc->SetParameters(A_edm,omega_a,phi_edm,xmin);

  	// Hmmm mmmm mmmm 
  	

  	// Inject shift into TGraph
  	int n = ThetaY_vs_Time_Modulo_Prof->GetNbinsX();
	double x[n];
  	double ex[n];
  	double y[n];
  	double ey[n];

  	for (int i(0); i<n; i++) {

  		double bin_cent = ThetaY_vs_Time_Modulo_Prof->GetBinCenter(i+1);
  		double bin_cont = ThetaY_vs_Time_Modulo_Prof->GetBinContent(i+1);
  		double y_shift = edmFunc->Eval(bin_cent);

  		std::cout<<"y_shift:\t"<<y_shift<<std::endl;

  		x[i] = bin_cent;// ThetaY_vs_Time_Modulo_Prof->GetBinCenter(i+1);
  		ex[i] = 0;
  		y[i] = bin_cont + y_shift;
  		//else y[i] = bin_cont;
  		ey[i] = ThetaY_vs_Time_Modulo_Prof->GetBinError(i+1);

  	}

  	//delete ThetaY_vs_Time_Modulo_Prof;

  	TGraphErrors *result = new TGraphErrors(n,x,y,ex,ey);
  	result->Draw();
  	gPad->Update();
  	gStyle->SetOptStat(0);

  	// Fit
	SimpleSinFit(result, 0.15, OMEGA_A * 1e3, 0);

	DrawSimpleSinFit(result, ";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad]", ("../Images/MC/"+config+"/simpleModuloFit_BLIND_"+qualString).c_str(), double(ThetaY_vs_Time_Modulo->GetEntries()), true);

	return 0;

}
