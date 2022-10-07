// Container for common EDM blinding stuff 

#include "../Blinding/Blinders.hh"
#include "RootInclude.h"

//#include "BlindingStrings/O.h"
#include "BlindingStrings/Run-1.h"
//#include "BlindingStrings/Sim.h"

using namespace blinding;

double R = 4.81; // ppm shift
double boxWidth = 0.25;
double gausWidth = 0.7;

Blinders::fitType ftype = Blinders::kOmega_a;
Blinders getBlinded( ftype, blindingString, boxWidth, gausWidth );

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
double alpha = 0.10; //0.13; // dilution factor, uhhhhh


double blinded_edm_value(bool unblind) {

  // returns a blinded input edm value. returned dMu will be unphysical. it will be in the range of +- 3*d0 centred around 10*d0

  // How far from the ref value are we
  double omega_diff;
  if(!unblind) { // Blinded verions
    omega_diff = ((getBlinded.paramToFreq(R) / getBlinded.referenceValue()) - 1) / ppm;
  } else if(unblind) {
    Blinders myBlinder( ftype ); // Just to print out the warning
    // You have to subtract the overlaid function to properly unblind the result
    omega_diff = 0.0;
  }

  double dMu_blind = omega_diff * d0; // this is the blinded dMu in e.cm?
  
  return dMu_blind;
  
}

// For sanity check d_mu plot
double blinded_edm_value(std::string tmp) {

  Blinders getBlinded( ftype, tmp.c_str(), boxWidth, gausWidth );

  double omega_blind = getBlinded.paramToFreq(R); // this is the blinded omegaA value
  double omega_ref   = getBlinded.referenceValue(); // this is the reference omegaA value
  // How far from the ref value are we
  double omega_diff  =  ((omega_blind / omega_ref) - 1) / ppm; // this is (omega_blind - omega_ref) in units of ppm
  double dMu_blind   = omega_diff * d0; // this is the blinded dMu in e.cm

  return dMu_blind;

}

double GetDelta(double dMu) {
  double eta = ((4 * mMuKg * c * dMu)/ (hbar * cm2m) );
  double dMu_tmp = (hbar * cm2m * eta) / (4 * mMuKg * c);
/*  std::cout<<"eta_check:\t"<<eta<<std::endl;
  std::cout<<"dMu_check:\t"<<dMu_tmp<<std::endl;*/
  double tan_delta = (eta * beta) / (2 * aMu);
  double delta = atan(tan_delta);
  return delta; // radians
}

double EDMFunc( double *x, double *p )  {
  double time = x[0];// time offset
  return p[0] * TMath::Sin(p[1]*time + p[2]);  
}

// With number oscillation denominator
double EDMFuncB( double *x, double *p )  {

  double numerator = p[0] * TMath::Sin((p[1] * x[0]) + p[2]); 
  double denominator = exp(-x[0]/p[3]) * (1  + (p[4] * TMath::Cos((p[1] * x[0]) + p[2])));

  return numerator / denominator; 

}

TGraphErrors *InjectBlindedModulo(TGraphErrors* gr_thetaY_mod, TF1 *blindEDMFunc) { 

    int n = gr_thetaY_mod->GetN();
    
    double x[n]; double ex[n];
    double y[n]; double ey[n];

    for (int i(0); i<n; i++) {

      double scaleFactor = 0.1;
      double time = gr_thetaY_mod->GetPointX(i);
      double theta_y = gr_thetaY_mod->GetPointY(i);
      double theta_y_shift = blindEDMFunc->Eval(time) * scaleFactor; // apply flat 10% dilution

      x[i] = time; ex[i] = 0;
      y[i] = theta_y + theta_y_shift;
      ey[i] = gr_thetaY_mod->GetErrorY(i);

    }

    return new TGraphErrors(n, x, y, ex, ey);

}

// An effort to make the behaviour of the blind signal more realistic
TGraphErrors *InjectBlindedModuloWithWeighting(TGraphErrors* gr_thetaY_mod, TF1 *blindEDMFunc, std::string stn, double momentum) { 

  TString dilution_fileName = "../Plots/MC/dMu/Dilution/dilutionCurves.floatingNormalisation.root";
  TFile *dilution_file  = TFile::Open(dilution_fileName);

  TString acceptance_fileName = "../Plots/MC/Acceptance/Plots/acceptanceWeightingVsMomentum_250MeV_full.root"; // _dataAccCorr_"+datasetLabel+".root";
  TFile *acceptance_file = TFile::Open(acceptance_fileName);

  TGraphErrors *d_gr = (TGraphErrors*)dilution_file->Get("DilutionFits/AQ/Decays/250MeV/d_vs_p/allDecays");
  TF1 *dilutionFunc = (TF1*)d_gr->GetFunction("DilutionFunc");

  int n = gr_thetaY_mod->GetN();
    
  double x[n]; double ex[n];
  double y[n]; double ey[n];

  for (int i(0); i<n; i++) {

    double time = gr_thetaY_mod->GetPointX(i);
    double theta_y = gr_thetaY_mod->GetPointY(i);
    double theta_y_shift = blindEDMFunc->Eval(time);// * weighting;

    // reweight 
    double d_EDM = dilutionFunc->Eval(momentum);

    TString acceptanceHistName = "hists/"+stn+"ratio_main";
    TH1D *acceptanceHist = (TH1D*)acceptance_file->Get(acceptanceHistName);

    double accWeight = 1.0;

    if(acceptanceHist!=0) accWeight = acceptanceHist->GetBinContent(acceptanceHist->FindBin(momentum));

    if(isnan(accWeight)) std::cerr<<"Error: acceptance weighting is nan";

    double scaleFactor = d_EDM * accWeight;
    if(scaleFactor==0) scaleFactor = 0.1;

    x[i] = time; ex[i] = 0;
    y[i] = theta_y + (theta_y_shift*scaleFactor);
    ey[i] = gr_thetaY_mod->GetEY()[i];

  }

  dilution_file->Close();
  acceptance_file->Close();

  return new TGraphErrors(n, x, y, ex, ey);

}
