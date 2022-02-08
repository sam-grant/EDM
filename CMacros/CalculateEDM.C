double GetEDM(double delta_prime) { 

	// CODATA 2018
	double pi = 3.14159265358979323846;
	double h = 6.62607015e-34; // Js
	double c = 299792458; // m/s
	double e = 1.602176634e-19; // C

	// gm2consts
	double m_mu = 105.6583715; // MeV
	double a_mu = 11659208.9e-10;
	double gmagic = std::sqrt( 1.+1./a_mu );
	double beta = sqrt(1-(1/pow(gmagic,2)));
	double hbar = h/(2*pi);

	// Conversions
	double Mev2J = e*1e6;
	double MeV2kg = Mev2J / pow(c,2);
	double m2cm = 1e-2;
	double mrad2rad = 1e-3;

	m_mu = m_mu * MeV2kg;

	// Calculate dMu in SI units
	double dMu = (gmagic*e*hbar*a_mu)/(2*m_mu*c*beta) * tan(delta_prime*mrad2rad); // Cm

	//cout<<gmagic<<endl;

	// Convert to ecm
	dMu = dMu / (m2cm * e);

	return dMu;

}

void CalculateEDM() { 

	double delta_prime = -0.01210 * 1e-3;//3.2*1e-3;//-0.44351*1e-3; // mrad
	double dMu = GetEDM(delta_prime); 

	cout<<"EDM for a tilt boosted tilt angle of "<<delta_prime<<" mrad is "<<dMu<<" ecm"<<endl;

	return;

}