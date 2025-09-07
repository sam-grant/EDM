#include "Utils.h"

double GetLimit(double delta_prime) { 

  // CODATA 2018
  double pi = 3.14159265358979323846;
  double h = 6.62607015e-34; // Js
  double c = 299792458; // m/s
  double e = 1.602176634e-19; // C

  // Conversions
  double Mev2J = e*1e6;
  double MeV2kg = Mev2J / pow(c,2);
  double m2cm = 1e-2;
  double mrad2rad = 1e-3;

  double m_mu = M_MU * MeV2kg;
  double beta = sqrt(1-(1/pow(GMAGIC,2)));
  double hbar = h/(2*pi);

  // Calculate dMu in SI units
  double dMu = (e*hbar*A_MU*GMAGIC)/(2*m_mu*c*beta) * atan(delta_prime*mrad2rad); // Cm

  // Convert to ecm
  dMu = dMu / (m2cm * e);

  return dMu;

}

double GetRadialFieldTilt(std::string dataset) {

  if(dataset=="Run-1a") return 22 * 1e-3; // mrad 
  else if(dataset=="Run-1b") return 23 * 1e-3; // mrad
  else if(dataset=="Run-1c") return 30 * 1e-3; // mrad 
  else if(dataset=="Run-1d") return 34 * 1e-3; // mrad 
  else if(dataset=="Run-2b") return 11 * 1e-3; // mrad
  else if(dataset=="Run-2c") return 15 * 1e-3; // mrad 
  else if(dataset=="Run-2d") return 17 * 1e-3; // mrad 
  else if(dataset=="Run-2e") return 13 * 1e-3; // mrad
  else if(dataset=="Run-2f") return 13 * 1e-3; // mrad 
  else if(dataset=="Run-2g") return 15 * 1e-3; // mrad 
  else if(dataset=="Run-2h") return 16 * 1e-3; // mrad
  else if(dataset=="Run-3N") return 11 * 1e-3; // mrad 
  else if(dataset=="Run-3O") return 11 * 1e-3; // mrad 
  else if(dataset=="Run-4") return -0.4 * 1e-3; // mrad 
  else if(dataset=="Run-5") return 0.7 * 1e-3; // mrad 
  else {
    cerr<<"RemoveRadialField: dataset not found";
    return 0.;
  }


}

double GetRadialFieldTiltError(std::string dataset) {

  if(dataset=="Run-1a") return 7 * 1e-3; // mrad 
  else if(dataset=="Run-1b") return 8 * 1e-3; // mrad
  else if(dataset=="Run-1c") return 8 * 1e-3; // mrad 
  else if(dataset=="Run-1d") return 9 * 1e-3; // mrad 
  else if(dataset=="Run-2b") return 4 * 1e-3; // mrad
  else if(dataset=="Run-2c") return 4 * 1e-3; // mrad 
  else if(dataset=="Run-2d") return 6 * 1e-3; // mrad 
  else if(dataset=="Run-2e") return 4 * 1e-3; // mrad
  else if(dataset=="Run-2f") return 4 * 1e-3; // mrad 
  else if(dataset=="Run-2g") return 5 * 1e-3; // mrad 
  else if(dataset=="Run-2h") return 5 * 1e-3; // mrad
  else if(dataset=="Run-3N") return 5 * 1e-3; // mrad 
  else if(dataset=="Run-3O") return 5 * 1e-3; // mrad 
  else if(dataset=="Run-4") return 2 * 1e-3; // mrad 
  else if(dataset=="Run-5") return 3.4 * 1e-3; // mrad 
  else {
    cerr<<"RemoveRadialField: dataset not found";
    return 0.;
  }

}

void Run(std::string dataset) { 

  double delta_prime = GetRadialFieldTilt(dataset);
  double delta_prime_err = GetRadialFieldTiltError(dataset);
  double fake_EDM = GetLimit(delta_prime);
  double fake_EDM_error = GetLimit(delta_prime_err);

  cout<<dataset<<", "<<delta_prime<<"±"<<delta_prime_err<<" mrad, "<<fake_EDM<<"±"<<fake_EDM_error<<" ecm"<<endl;

  return;

}

void RadialFieldTilt() { 

  cout<<"dataset, tilt [mrad], dMu [ecm]"<<endl;

  Run("Run-1a");
  Run("Run-1b");
  Run("Run-1c");
  Run("Run-1d");
  Run("Run-2b");
  Run("Run-2c");
  Run("Run-2d");
  Run("Run-2e");
  Run("Run-2f");
  Run("Run-2g");
  Run("Run-2h");
  Run("Run-3N");
  Run("Run-3O");
  Run("Run-4");
  Run("Run-5");
  return;


}