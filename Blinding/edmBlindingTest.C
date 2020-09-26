R__LOAD_LIBRARY(/Users/samuelgrant/Documents/gm2/EDM/lib/dev_v9_52_00/libgm2util_blinders.so)
#include "Blinders.hh"

#include "TFile.h"
#include "TH1D.h"
#include "TF1.h"
#include "TTree.h"

// edm constants
double e = 1.6e-19; // J
double aMu = 11659208.9e-10; 
double mMu = 105.6583715; // u
double mMuKg = mMu * 1.79e-30; // kg
double B = 1.451269; // T
double c = 299792458.; // m/s
double cm2m = 100.0;
double hbar = 1.05457e-34;
double pmagic = mMu/std::sqrt(aMu);
double gmagic = std::sqrt( 1.+1./aMu );
double beta   = std::sqrt( 1.-1./(gmagic*gmagic) );

// defaults for now
double d0 = 1.9e-19; // BNL edm limit in e.cm
double ppm = 1e-6;

long double R = 3.5; // * d0 
long double boxWidth = 0.3;
double gausWidth = 0.8;

blinding::Blinders::fitType ftype = blinding::Blinders::kOmega_a;

double blinded_edm() {

  std::cout << "R = " << R << "\n";
  std::cout << "boxWidth = " << boxWidth << "\n";

  TCanvas* c1 = new TCanvas();
  TH1F* h1 = new TH1F("h1","R_{blind} - R_{ref}",100.,-1,10);

  for (int i(0); i<50000; i++) {
    std::string blindString = Form("blindingString%d",i);
    blinding::Blinders iBlinder( ftype, blindString , boxWidth, gausWidth);

    // use the blinder to give us a blinded offset from the input R which is 10*d0
    double iAmp = iBlinder.paramToFreq(R); // this is something like 1.442 which is the shifted / blinded omegaA value
    double iRef  = iBlinder.referenceValue(); // this is 1.443 which is the reference omegaA value
    double iDiff =  ((iAmp / iRef) - 1) / ppm; // this is (R - Rref) in units of ppm
    
    std::cout << "iDiff = " << iDiff << "\n";
    
    // iDiff tells us the edm value we have got
    // e.g. input EDM_blind = iDiff * d0
    double EDM_blind = iDiff * d0;
    std::cout << "EDM_blind = " << EDM_blind << "\n";
    
    double omegaA = iRef; // just use the reference value

    double eta_blind = ((4 * mMuKg * c * EDM_blind)/ (hbar * cm2m) );
    double tan_delta_blind = (eta_blind * beta) / (2 * aMu);
    double delta_blind = atan(tan_delta_blind);
    
    std::cout << "aMu = " << aMu << "\n";
    std::cout << "beta = " << beta << "\n";
    std::cout << "delta_blind = " << delta_blind << "\n";

    h1->Fill(iDiff);

  }

  h1->GetXaxis()->SetTitle("x d_{0}");
  h1->Draw();
  c1->SaveAs("test/blind1.png");
  
  return 0.0;//norm * exp(-time/life) * (1 - asym*cos(omega*time + phi));

}

void edmBlindingTest(){
  double tmp = blinded_edm();
  return 0;
}
