/*DecayNtup, Trajectory:

  PDG: -13
  pos: 610.274, -6.48728, 7060.09
  pol: 0.996285, 0, -0.0861188
  mom: -3079.79, -0.17785, 271.174, tot: 3091.7


  DecayNtup, Trajectory:

  PDG: -11
  pos: 610.274, -6.48728, 7060.09
  pol: 0, 0, 0
  mom: -311.788, 6.65035, 56.2608, tot: 316.893 */

void highEnergyDecay() {

  cout<<"\nHigh energy decay"<<endl;

  double eMass = 0.51099895; // MeV
  double muMass = 105.6583715; // MeV
  double nuMass = 0.;

  TVector3 muMom (-3079.79, -0.17785, 271.174); // MeV
  TVector3 muPol (0.996285, 0, -0.0861188);
  
  TVector3 eMom (-311.788, 6.65035, 56.2608);

  double muEne = sqrt(pow(muMass,2)+pow(muMom.Mag(),2));
  double eEne = sqrt(pow(eMass,2)+pow(eMom.Mag(),2));
  double nuEne = muEne - eEne; // This correct?
  //  cout<<"Muon momentum\t"<<muMom.Mag()<<" MeV"<<endl;
  cout<<"Muon energy\t"<<muEne<<" MeV"<<endl;
  cout<<"Positron energy\t"<<eEne<<" MeV"<<endl;
  cout<<"Neutrino energy\t"<<nuEne<<" MeV"<<endl;

  return;

}

/*DecayNtup, Trajectory: 

PDG: -13
pos: -1512.49, -6.20758, 6946.33
pol: 0.941668, 0, 0.336542
mom: -3024.05, -1.90041, -660.491, tot: 3095.34


DecayNtup, Trajectory: 

PDG: -11
pos: -1512.49, -6.20758, 6946.33
pol: 0, 0, 0
mom: -2750.9, -0.543735, -615.558, tot: 2818.93
*/

void lowEnergyDecay() {

  cout<<"\nLow energy decay"<<endl;

  double eMass = 0.51099895; // MeV
  double muMass = 105.6583715; // MeV
  double nuMass = 0.;

  TVector3 muMom (-3024.05, -1.90041, -660.491); // MeV
  TVector3 muPol (0.941668, 0, 0.336542);
  TVector3 eMom (-2750.9, -0.543735, -615.558);

  double muEne = sqrt(pow(muMass,2)+pow(muMom.Mag(),2));
  double eEne = sqrt(pow(eMass,2)+pow(eMom.Mag(),2));
  double nuEne = muEne - eEne; 

  cout<<"Muon energy\t"<<muEne<<" MeV"<<endl;
  cout<<"Positron energy\t"<<eEne<<" MeV"<<endl;
  cout<<"Neutrino energy\t"<<nuEne<<" MeV"<<endl;

  return;

}

// Full decay

/*
DecayNtup, Trajectory:

Anti muon
PDG: -13
pos: 1442.93, 11.3047, -6985.89
pol: -0.979328, 0, -0.202279
mom: 3032.76, 1.75069, 626.43, tot: 3096.78


DecayNtup, Trajectory:
Muon neutrino
PDG: 12
pos: 1442.93, 11.3047, -6985.89
pol: 0, 0, 0
mom: 1422.51, -32.4943, 307.456, tot: 1455.72


DecayNtup, Trajectory:
Electon neutrino
PDG: -14
pos: 1442.93, 11.3047, -6985.89
pol: 0, 0, 0
mom: 205.36, 21.7713, 33.5652, tot: 209.221


DecayNtup, Trajectory:
Positon
PDG: -11
pos: 1442.93, 11.3047, -6985.89
pol: 0, 0, 0
mom: 1404.91, 12.4737, 285.413, tot: 1433.66

*/

void fullDecay() {

  cout<<"\nFull decay\n-------------"<<endl;

  double eMass = 0.51099895; // MeV
  double muMass = 105.6583715; // MeV
  double nu1Mass = 0.;
  double nu2Mass = 0.;

  TVector3 muPol (-0.979328, 0, -0.202279); 

  TVector3 muMom (3032.76, 1.75069, 626.43); // MeV
  TVector3 nu1Mom (1422.51, -32.4943, 307.456);
  TVector3 nu2Mom (205.36, 21.7713, 33.5652);
  TVector3 eMom (1404.91, 12.4737, 285.413);
  
  double muEne = sqrt(pow(muMass,2)+pow(muMom.Mag(),2));
  double nu1Ene = sqrt(pow(nu1Mass,2)+pow(nu1Mom.Mag(),2));
  double nu2Ene = sqrt(pow(nu2Mass,2)+pow(nu2Mom.Mag(),2));
  double eEne = sqrt(pow(eMass,2)+pow(eMom.Mag(),2));

  bool consEne = false;
  string consEneStr = "false";
  if(int((muEne)-(eEne+nu2Ene+nu1Ene))==0) consEneStr = "true";

  string maxPosiEneOKStr = "false";
  if(eEne <= muEne/2) maxPosiEneOKStr = "true";

  double mu_theta_y = asin(muMom.Y()/muMom.Mag()); // atan2(muPol.Y(),muPol.Z());
  double e_theta_y = asin(eMom.Y()/eMom.Mag());

  cout<<"Muon energy\t\t\t"<<muEne<<" MeV"<<endl;
  cout<<"Muon neutrino energy\t\t"<<nu1Ene<<" MeV"<<endl;
  cout<<"Positron energy\t\t\t"<<eEne<<" MeV"<<endl;
  cout<<"Electron neutrino energy\t"<<nu2Ene<<" MeV"<<endl;
  cout<<"Energy conserved?\t\t"<<consEneStr<<endl;
  cout<<"Positron energy below max?\t"<<maxPosiEneOKStr<<endl;
  cout<<"Muon vertical angle\t\t"<<mu_theta_y*1e3<<" mrad"<<endl;
  cout<<"Positron vertical angle\t\t"<<e_theta_y*1e3<<" mrad"<<endl;
  
  return;

}

void decayKinematics() { 

  highEnergyDecay();
  lowEnergyDecay();
  fullDecay();

  // How can the muons have a vertical momentum component with a vertical polarisation of zero? 
 
  return;

}
