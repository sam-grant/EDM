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

double GetTilt(double dMu) { 

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

	
	// double dMu = (gmagic*e*hbar*a_mu)/(2*m_mu*c*beta) * tan(delta_prime*mrad2rad); 
	// Convert to Cm
	dMu = dMu * (m2cm * e);

	// Calculate delta_prime in mrad
	double delta_prime = 1/mrad2rad*atan(dMu * (2*m_mu*c*beta)/(gmagic*e*hbar*a_mu));

	// Convert to ecm
	//dMu = dMu / (m2cm * e);

	return delta_prime; //Mu;

}

void CalculateEDM() { 

	double tilt = GetTilt(5.4e-18);//1.9e-18);//9.13787e-19);

	cout<<tilt<<endl;

/*vector<double> Br_ = {22.1956
					,22.7213
					,29.6031
					,34.2797
					,11.2903
					,14.8524
					,17.318
					,12.6899
					,12.6202
					,14.7471
					,16.3936
					,10.8665
					,10.7896
					,-0.44437
					,0.715409};
vector<double> eBr_ = {7.29799
					,8.17204
					,8.24297
					,9.14532
					,3.62802
					,3.93142
					,6.25748
					,3.60069
					,3.62891
					,4.91707
					,4.97847
					,5.00627
					,5.41738
					,1.95142
					,3.48681};

					for(auto& i : eBr_) { 

						double delta_prime = i*1e-3; // 0.2;//805;//3.2*1e-3;//-0.44351*1e-3; // mrad
						double dMu = GetEDM(delta_prime); 

						cout<<i<<", "<<dMu<<endl;//EDM for a boosted tilt angle of "<<delta_prime<<" mrad is "<<dMu<<" ecm"<<endl;

					}*/

	return;

}