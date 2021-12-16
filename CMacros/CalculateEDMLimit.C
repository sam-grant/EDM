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

void CalculateEDMLimit() { 

	double delta_prime = 34e-3; //0.037381 / 0.08; //0.0068 / 0.1; //0.0475245;//.0875;//1.7; // mrad

	double dMu = GetLimit(delta_prime); 

	cout<<"Limit for a tilt boosted tilt angle of "<<delta_prime<<" mrad is "<<dMu<<" ecm"<<endl;
	// double delta_prime = 

	return;

}