#include <iostream>

#include "FancyDraw.h"
#include "Utils.h"
#include "RootInclude.h"

#include "../Blinding/Blinders.hh"
#include "RootInclude.h"

using namespace blinding;

// 
double boxWidth = 0.25;
double gausWidth = 0.7;

/*double R = 4.81; // ppm shift
double boxWidth = 0.25;
double gausWidth = 0.7;*/

//double R = 10; // ppm shift
//double boxWidth = 0.3;
//double gausWidth = 0.8;

Blinders::fitType ftype = Blinders::kOmega_a;
//Blinders getBlinded( ftype, "Blinding string", boxWidth, gausWidth );

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
double alpha = 0.10; //0.13; // asymmetry factor

// For sanity check d_mu plot
double blinded_edm_value(std::string tmp, double R) {

  Blinders getBlinded( ftype, tmp.c_str(), boxWidth, gausWidth );

  double omega_blind = getBlinded.paramToFreq(R); // this is the blinded omegaA value
  double omega_ref   = getBlinded.referenceValue(); // this is the reference omegaA value
  // How far from the ref value are we
  double omega_diff  =  ((omega_blind / omega_ref) - 1) / ppm; // this is (omega_blind - omega_ref) in units of ppm
  double dMu_blind   = omega_diff * d0; // this is the blinded dMu in e.cm


  return dMu_blind;

}

int main() { 

  double R = 4.81; // ppm shift
  double blind_dMu = blinded_edm_value("My blinding string", R);
  cout<<"\n---> Blinded EDM value = "<<blind_dMu<<endl;

   return 0;

}