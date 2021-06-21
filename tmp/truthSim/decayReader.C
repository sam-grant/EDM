//https://www.psi.ch/sites/default/files/import/lmu/EducationLecturesEN/A_Amato_Chapter_1_to_5_up_to_Section_5_5_23_03_2018.pdf
void readTruth(TTree* in);

//Might need to work out angle w.r.t. exact muon momentum direction

void GetAngles(TVector3& unitVec, double& phi, double& theta){
  if (fabs(unitVec.Mag() - 1.0) > 1E-10){
    cerr << "GetAngles caleed with non unit vector\n";
  }

  //theta is angle between unit vector and the z axis
  theta = acos(unitVec.z());
  
  //if no y component don't worry about atan2 which isn't 100% accurate
  if (unitVec.y() == 0) {
    phi = 0.0;
    return;
  }
  phi = atan2(unitVec.y(), unitVec.x() ); //unit vector so mod 1
  if (phi < 0) phi += TMath::TwoPi();
  return;
}
//
void decayReader(){
  TChain* chain = new TChain("trackerPhaseAnalyzer/g2phase");
  
  vector<int> IDs = {
    1605115845,1605119474,1605120404,1605121195,1605121936,1605163551,1605163652,1605175087,1605175090,1605175281,1605183372,1605213661,1605214193,1605214526,1605214527,1605253108,1605254292,1605273200,1605273201,1605273210,1605273221,1605273361,1605289885,1605289892,1605289896,1605289899,1605290026,1605355172,1605358723,1605359386,1605359387,1605377164,1605377790,1605452425,1605453447,1605477504,1605477505,1605477506,1605477691,1605537341,1605583477,1605583743,1605605585,1605605586,1605626943,1605626979,1605639348,1605639460,1605645669,1605645992,1605665438,1605666878,1605670973,1605671194,1605673964,1605674177,1605676962,1605677375,1605681672,1605682642,1605684045,1605685936,1605686123,1605687615,1605687616,1605768429,1605768430,1605812225,1605812417,1605836303,1605836538,1605844930,1605845460,1605853783,1605909359,1605936909,1606050012,1606052269,1606059674,1606073213,1606075298,1606100078,1606102629,1606198565,1606226499,1606296559,1606317405,1606403666,1606422342,1606478184,1606484866,1606517047,1606522670,1606563991,1606564442,1606566556,1606566572,1606568092,1606586696,1606589186,1606662932,1606663138,1606663271,1606663634,1606665149,1606665165,1606678837,1606679465,1606680017,1606680298,1606680377,1606688217,1606688317,1606695317,1606695624,1606695913,1606696218,1606699172,1606706168,1606710620,1606710914,1606711818,1606715079,1606725921,1606726835,1606727563,1606727578,1606729379,1606729778,1606732777,1606741571,1606742847,1606743485,1606744203,1606749526,1606777484,1606777487,1606777680,1606778127,1606792830,1606793238,1606793443,1606793718,1606793963,1606808416,1606809019,1606809313,1606809632,1606809635,1606824318,1606824623,1606824921,1606825222,1606825514,1606941377,1606941687,1606941872,1607226338,1607226592,1607226593,1607241916,1607242220,1607242221,1607242516,1607242522,1607257601,1607257685,1607257834,1607258115,1607264746,1607273584,1607274975,1607275034,1607275187,1607282029,1607289522,1607291077,1607291119,1607292044,1607297673,1607305642,1607307018,1607307400,1607308194,1607488066,1607488067,1607503280,1607503781,1607529891,1607529929,1607529930,1607530602
  };

  //for 1 file check
  IDs.clear();
  IDs.push_back(1607530602);

  int maxFiles = 10;
  int nFiles = 0;
  for (auto& ID: IDs){
    if (nFiles == maxFiles) break;
    chain->Add(Form("/pnfs/GM2/persistent/Tracking/mc_gasgun_run1_2001/TrackerPhaseAnalyzerTree_2001_%i.root", ID));
    nFiles++;
  }
  readTruth((TTree*) chain);
}

void readTruth(TTree* tree){

  TCanvas* c1 = new TCanvas("c1", "", 800, 600);
  tree->Print();

  int64_t nEntries = tree->GetEntries();
  nEntries = 5E6;
  cout << "\n\tEntries = " << nEntries << ";\n" << endl;

  //tree->Print();
  
  //truth
  float decayTime;
  float muX, muY, muZ, muPX, muPY, muPZ, muP;
  float polX, polY, polZ;
  float posiPX, posiPY, posiPZ, posiP;
  float posiX, posiY, posiZ;
  tree->SetBranchAddress("muDecayTime",&decayTime);

  tree->SetBranchAddress("muDecayPosX",&muX);
  tree->SetBranchAddress("muDecayPosY",&muY);
  tree->SetBranchAddress("muDecayPosZ",&muZ);
  tree->SetBranchAddress("muDecayP",&muP);
  tree->SetBranchAddress("muDecayPX",&muPX);
  tree->SetBranchAddress("muDecayPY",&muPY);
  tree->SetBranchAddress("muDecayPZ",&muPZ);
  tree->SetBranchAddress("muDecayPolX",&polX);
  tree->SetBranchAddress("muDecayPolY",&polY);
  tree->SetBranchAddress("muDecayPolZ",&polZ);
  tree->SetBranchAddress("posiInitPosX",&posiX);
  tree->SetBranchAddress("posiInitPosY",&posiY);
  tree->SetBranchAddress("posiInitPosZ",&posiZ);
  tree->SetBranchAddress("posiInitP",&posiP);
  tree->SetBranchAddress("posiInitPX",&posiPX);
  tree->SetBranchAddress("posiInitPY",&posiPY);
  tree->SetBranchAddress("posiInitPZ",&posiPZ);

  //omega a period
  double period = 4.365411; //us

  TFile* fout = new TFile("decayOut.root", "RECREATE");
  TDirectory* topDir = fout->mkdir("Decays"); 
  TDirectory* timeDir = topDir->mkdir("Time"); 
  TDirectory* labDir = topDir->mkdir("LABPositronEnergy"); 
  TDirectory* mrfDir = topDir->mkdir("MRFPositronEnergy"); 

  double mumass = 105.659; //tiny bit too large to avoid rounding errors
  double emass = 0.510999;
  double maxMuP = 3100; //MeV
  double maxGamma = sqrt(1.0 + pow( maxMuP/mumass, 2 )); 
  double posiEMaxLAB = maxGamma * mumass; 
  double posiEMaxMRF = mumass / 2.0;

  //total (all energy) hists
  TH1F* h_fracEnergy_LAB = new TH1F("posiE_LAB", "E/Emax", 100, 0, 1);
  TH1F* h_fracEnergy_MRF = new TH1F("posiE_MRF", "E/Emax", 100, 0, 1);
  //TH2F* h2_polDotPosi = new TH2F("h2_polDotPosi", ";s.e;E/Emax",50, -1, 1, 50, 0, 1);
  //TProfile* tp_cosAlpha = new TProfile("tp_cosAlpha", ";E/Emax; cos(alpha)", 100, 0, 1);

  //make decay energy (lab) folders in
  int nFolders = 20; //use factor of 100
  int lowE = 0;
  int eStep = 100 / nFolders;
  vector<TDirectory*> fracEnergyDirs;
  for (int iFolder(0); iFolder < nFolders; iFolder++){
    fracEnergyDirs.push_back( (TDirectory*) labDir->mkdir(Form("%02i-%02i", lowE, lowE+eStep)) );
    //cout << iFolder << ": " << fracEnergyDirs.back()->GetName() << "\n";
    lowE += eStep;
  }

  //add MRF folder to back of this list
  lowE = 0;
  for (int iFolder(0); iFolder < nFolders; iFolder++){
    fracEnergyDirs.push_back( (TDirectory*) mrfDir->mkdir(Form("%02i-%02i", lowE, lowE+eStep)) );
    lowE += eStep;
  }

  //for each fracEnergy dir (in lab and MRF) book the same hists in either frame
  for (auto& dir: fracEnergyDirs){
    dir->cd();

    //book hists
    TDirectory* MRFDir = (TDirectory*) dir->mkdir("MRF");
    TDirectory* LABDir = (TDirectory*) dir->mkdir("Lab");
    //TDirectory* MRFTiltDir = (TDirectory*) dir->mkdir("MRFTilt");
    //TDirectory* LABTiltDir = (TDirectory*) dir->mkdir("LABTilt"); // todo, figure out

    vector<TDirectory*> frameDirs = { MRFDir, LABDir};
    for (auto& fdir: frameDirs){
      fdir->cd();
      //muon momentum
      TH1F* muTheta = new TH1F("muTheta", ";theta; Entries",100, 0, TMath::Pi());
      TH1F* muPhi = new TH1F("muPhi", ";phi; Entries",100, 0, TMath::TwoPi());

      //polarisation vector
      TH1F* polTheta = new TH1F("polTheta", ";theta; Entries",100, 0, TMath::Pi());
      TH1F* polPhi = new TH1F("polPhi", ";phi; Entries",100, 0, TMath::TwoPi());
      
      //positron momentum
      TH1F* posiTheta = new TH1F("posiTheta", ";theta; Entries",100, 0, TMath::Pi());
      TH1F* posiPhi = new TH1F("posiPhi", ";phi; Entries",100, 0, TMath::TwoPi());

      TH1F* posiEnergy   = new TH1F("posiE", ";E/Emax [MeV]; Entries",110, 0, 1.1);
      
      //angle between positron mom and polarisation vector
      TH1F* alpha = new TH1F("alpha", ";alpha; Entries",100, 0, TMath::Pi());
      TH1F* cosAlpha = new TH1F("cosAlpha", ";cos(alpha); Entries",100, -1, 1);
      TH1F* thetaDiff = new TH1F("thetaDiff", ";theta diff; Entries",100, -TMath::TwoPi(), TMath::TwoPi());
      TH1F* cosThetaDiff = new TH1F("cosThetaDiff", ";theta diff; Entries",100, -1, 1);

      TH1F* time = new TH1F("time", ";time % perios; Entries",29, 0, period);
      
      //averages as a function of time (modulo wa period)
      TProfile* tp_positheta = new TProfile("tp_cosPosiTheta", ";time [us];cos( theta (e))", 29, 0, period);
      TProfile* tp_posiphi   = new TProfile("tp_cosPosiPhi",   ";time [us];cos( phi (e))", 29, 0, period);
      TProfile* tp_poltheta = new TProfile("tp_cosPolTheta", ";time [us];cos( theta (pol))", 29, 0, period);
      TProfile* tp_polphi   = new TProfile("tp_cosPolPhi",   ";time [us];cos( phi (pol))", 29, 0, period);
      TProfile* tp_cosAlpha = new TProfile("tp_cosAlpha", ";time [us];cos(alpha)", 29, 0, period);

      TH2F* h2_posiTheta = new TH2F("h2_cosPosiTheta", ";time [us];cos( theta (e))", 29, 0, period, 25, -1, 1);
      TH2F* h2_posiPhi   = new TH2F("h2_cosPosiPhi", ";time [us];cos( phi (e))", 29, 0, period, 25, -1, 1);
      TH2F* h2_polTheta  = new TH2F("h2_cosPolTheta", ";time [us];cos( theta (pol))", 29, 0, period, 25, -1, 1);
      TH2F* h2_polPhi    = new TH2F("h2_cosPolPhi", ";time [us];cos( phi (pol))", 29, 0, period, 25, -1, 1);
      TH2F* h2_cosAlpha  = new TH2F("h2_cosAlpha", ";time [us];cos(alpha)", 29, 0, period, 25, -1, 1);
    }
  }

  //book time bins hists
  //make decay energy (lab) folders in
  int nTimeFolders = 10; //use factor of 100
  int lowT = 0;
  int tStep = 100 / nTimeFolders;
  vector<TDirectory*> timeDirs;
  for (int iFolder(0); iFolder < nTimeFolders; iFolder++){
    timeDirs.push_back( (TDirectory*) timeDir->mkdir(Form("%02i-%02i", lowT, lowT+tStep)) );
    lowT += tStep;
  }

  for (auto& dir: timeDirs){
    dir->cd();
    TH1F* time = new TH1F("time", ";time % period; Entries",100, 0, period);
    TH1F* h_labE = new TH1F("posiE_LAB", "E/Emax", 100, 0, 1);
    TH1F* h_mrfE = new TH1F("posiE_MRF", "E/Emax", 100, 0, 1);
    TH1F* polTheta = new TH1F("polTheta_MRF", ";theta; Entries",100, 0, TMath::Pi());
    TH1F* posiTheta = new TH1F("posiTheta_MRF", ";theta; Entries",100, 0, TMath::Pi());
    TH1F* alpha = new TH1F("alpha_MRF", ";alpha; Entries",100, 0, TMath::Pi());
    TH1F* thetaDiff = new TH1F("thetaDiff_MRF", ";theta diff; Entries",100, -TMath::TwoPi(), TMath::TwoPi());
  }
  timeDir->cd();
  TProfile* tp_polZ = new TProfile("polZ", ";time [us];pol z", 29, 0, period);
  topDir->cd();

  double targetPerc = 0;
  for(int64_t entry = 0; entry < nEntries; entry++){
    if(100*float(entry) / nEntries > targetPerc){
      cout << Form("Processed %.1f%%", 100*float(entry)/nEntries) << endl;
      targetPerc += 10;
    }
    tree->GetEntry(entry);
    if (posiP > 3100) continue;

    double timeModWa = fmod( (decayTime/1000.0), period);

    //get time folder
    int tBin = int( (timeModWa/period) / (0.01*double(tStep)));
    TDirectory* tDir = timeDirs[tBin];
    
    //work out angle aroud ring from position
    //Ring coordinates, (0,0,0) = centre of ring, y vertical, 12 o'clock at z = 0.
    TVector3 muPos(muX, muY, muZ);
    TVector3 muMom(muPX, muPY, muPZ);
    TVector3 posiMom(posiPX, posiPY, posiPZ);
    TVector3 pol(polX, polY, polZ); // polarisation is a rest frame only direction
    
    //RingAngle is angle from x axis, from 0 to 2pi
    double ringAngle = atan2(muZ, muX);    
    if (ringAngle < 0) ringAngle += TMath::TwoPi();

    //rot frame is with z pointing tangential to magic mom at x and z of decay (Figure 2 of Debevec note)
    TVector3 muMom_rot = muMom;
    TVector3 posiMom_rot = posiMom;
    TVector3 pol_rot = pol;
    muMom_rot.RotateY(ringAngle);
    posiMom_rot.RotateY(ringAngle);
    pol_rot.RotateY(ringAngle);

    /*
    if (entry < 1){
      cout << "First Rotation...\n";
      cout << "muMom: " << muMom.x() << ", " << muMom.y() << ", " << muMom.z() << "\n";
      cout << "angle: " << ringAngle << "\n";
      cout << "muMom_rot: " << muMom_rot.x() << ", " << muMom_rot.y() << ", " << muMom_rot.z() << "\n";
      //return;
    }

    //alternative - let muon mom define the new z direction
    TVector3 muMom_rot2 = muMom;
    TVector3 posiMom_rot2 = posiMom;
    TVector3 pol_rot2 = pol;

    double angle = atan2(muPZ, muPX);
    if (angle < 0) angle += TMath::TwoPi();
    angle -= TMath::PiOver2(); 
    muMom_rot2.RotateY(angle);
    posiMom_rot2.RotateY(angle);
    pol_rot2.RotateY(angle);

    if (entry < 1){
      cout << "second rotation...\n";
      cout << "muMom: " << muMom.x() << ", " << muMom.y() << ", " << muMom.z() << "\n";
      cout << "angle: " << angle << "\n";
      cout << "muMom_rot2: " << muMom_rot2.x() << ", " << muMom_rot2.y() << ", " << muMom_rot2.z() << "\n";
    }
    
    //now remove y component with rotation about x
    TVector3 muMom_rot3 = muMom_rot2;
    TVector3 posiMom_rot3 = posiMom_rot2;
    TVector3 pol_rot3 = pol_rot2;

    double angle2 = atan2(muMom_rot2.y(), muMom_rot2.z());
    muMom_rot3.RotateX(angle2);
    posiMom_rot3.RotateX(angle2);
    pol_rot3.RotateX(angle2);

    if (entry < 1){
      cout << "\nthird rotation...\n";
      cout << "angle2: " << angle2 << "\n";
      cout << "muMom_rot3: " << muMom_rot3.x() << ", " << muMom_rot3.y() << ", " << muMom_rot3.z() << "\n";
      //return;
    }

    //overwrite with new rotation
    muMom_rot = muMom_rot3;
    posiMom_rot = posiMom_rot3;
    pol_rot = pol_rot3;

    //check that rotation has worked - majority of muon momentum should be along z
    if (fabs(muMom_rot.z() - muMom_rot.Mag()) > 0.001){
      cout << "Problem defining new coordinates\n";
      cout << "muMom_rot: " << muMom_rot.x() << ", " << muMom_rot.y() << ", " << muMom_rot.z() << " Mag: " << muMom_rot.Mag() << "\n";
      return;
    }
    */

    //rotation not perfect, so if original y component was 0 force that to be the case:
    if (fabs(pol.y()) < 1E-10){
      pol_rot = TVector3(pol_rot.x(), 0.0, pol_rot.z());
      pol_rot = pol_rot.Unit();
    }

    //now boost to rest frame and get the same quantities

    //e mom
    double muE_lab = sqrt(mumass*mumass + muP*muP);
    double posiE_lab = sqrt(emass*emass + posiP*posiP);
    double gamma = sqrt(1.0 + pow( muP/mumass, 2 )); 
      
    //for MRF 1: get the vector that would boost the muon into it's rest frame
    ROOT::Math::PxPyPzEVector muMomE_lab(muMom_rot.x(), muMom_rot.y(), muMom_rot.z(), muE_lab);
    ROOT::Math::XYZVector boost = muMomE_lab.BoostToCM();
      
    //make positron momentum 4 vector in lab, and get boost vector as a TVector3 vector
    TLorentzVector posiMomE_lab(posiMom_rot.x(), posiMom_rot.y(), posiMom_rot.z(), posiE_lab);
    TVector3 boostToCM(boost.x(), boost.y(), boost.z());
    
    //apply boost to positron lab vector to get it in MRF 1, using TLorentzVectors. Convert to normal TVector3 at end 
    TLorentzVector posiMomE_MRF = posiMomE_lab;
    posiMomE_MRF.Boost(boostToCM);
    TVector3 posiMom_MRF(posiMomE_MRF.Px(), posiMomE_MRF.Py(), posiMomE_MRF.Pz());
    
    //do same with muon as a cross check...
    TLorentzVector muMomE_MRF(muMomE_lab.Px(), muMomE_lab.Py(), muMomE_lab.Pz(),muMomE_lab.E());
    muMomE_MRF.Boost(boostToCM);
    TVector3 muMom_MRF = muMomE_MRF.Vect();
      
    //now we have everything we need to work out which directories to fill, get corresponding lab and mrf fractions and folders
    
    h_fracEnergy_LAB->Fill(posiE_lab / posiEMaxLAB);
    h_fracEnergy_MRF->Fill(posiMomE_MRF.E() / posiEMaxMRF);

    ((TH1F*) tDir->Get("time"))->Fill(timeModWa);
    ((TH1F*) tDir->Get("posiE_LAB"))->Fill(posiE_lab / posiEMaxLAB);
    ((TH1F*) tDir->Get("posiE_MRF"))->Fill(posiMomE_MRF.E() / posiEMaxMRF);

    int labEBin = int((posiE_lab/posiEMaxLAB) / (0.01*double(eStep)));
    int mrfEBin = int((posiMomE_MRF.E()/ posiEMaxMRF) / (0.01*double(eStep)));
    
    if (labEBin >= nFolders)      cout << "labE too large: " << posiE_lab << " > " << posiEMaxLAB << "\n";
    if (mrfEBin >= nFolders)    {
      cout << "mrfE too large: " << posiMomE_MRF.E() << " > " << posiEMaxMRF << " setting to " << mrfEBin-1 << "\n";      
      mrfEBin -= 1;
    }
    TDirectory* labEDir = fracEnergyDirs[labEBin];
    TDirectory* mrfEDir = fracEnergyDirs[mrfEBin + nFolders];    

    if (entry < 3 ){
      cout << "posi E: " << posiE_lab/posiEMaxLAB << " calc: " << (posiE_lab/posiEMaxLAB) / (0.01*double(eStep)) << " labEBin: " << labEBin << " dir: " << fracEnergyDirs[labEBin]->GetName() << "\n";
      cout << "posi E: " << posiMomE_MRF.E()/posiEMaxMRF << " mrfEBin: " << mrfEBin << " dir: " << fracEnergyDirs[mrfEBin+nFolders]->GetName() << "\n";
    }
    
    int iFrameDir = 0;
    for (auto& fDir : {labEDir, mrfEDir}){
      TDirectory* Mdir = (TDirectory*)fDir->Get("MRF");
      TDirectory* Ldir = (TDirectory*)fDir->Get("Lab");

      ////additional rotation around z axis to mimc EDM
      //double tiltAngle = 0.001; //tilt in MRF - may need to reduce tilt for tilted LAB?
      //muMom_rot.RotateZ(tiltAngle);
      //posiMom_rot.RotateZ(tiltAngle);
      //pol_rot.RotateZ(tiltAngle);
      //Mdir = (TDirectory*)momDir->Get("MRFTilt");
      //Ldir = (TDirectory*)momDir->Get("LABTilt");

      TVector3 muMom_rot_unit = muMom_rot.Unit();
      TVector3 posiMom_rot_unit = posiMom_rot.Unit();

      //mu mom
      double phi_muMom_rot(0.0);
      double theta_muMom_rot(0.0);
      GetAngles(muMom_rot_unit, phi_muMom_rot, theta_muMom_rot);

      //e mom
      double phi_posiMom_rot(0.0);
      double theta_posiMom_rot(0.0);
      GetAngles(posiMom_rot_unit, phi_posiMom_rot, theta_posiMom_rot);

      //pol
      double phi_pol_rot(0.0);
      double theta_pol_rot(0.0);
      GetAngles(pol_rot, phi_pol_rot, theta_pol_rot);

      double polDotPosi = pol_rot.Dot(posiMom_rot_unit);
      double alpha = acos(polDotPosi);
      if (alpha < 0) alpha += TMath::TwoPi();

      if (entry < 3){
	cout << "dot product: " << polDotPosi << "\n";
	cout << "alpha: " << alpha << "\n";
	cout << "cos(alpha): " << cos(alpha) << "\n";
      }

      //get muon angles : don't get from boost as the rounding errors combined with unit give odd results
      // MRF options: 
      // MRF 1: use muon momentum to get boost (guaranteed no x or y components)
      // MRF 2: apply boost in -z direction only, CBO not accounted for
      
      //pol: no boost required for pol as it is a rest frame only vector
      TVector3 pol_MRF = pol_rot;
      double phi_pol_MRF(0.0);
      double theta_pol_MRF(0.0);
      GetAngles(pol_MRF, phi_pol_MRF, theta_pol_MRF);
      
      //Here we don't have a momentum in the rest frame by definition, so don't use it anywhere!
      //TVector3 muMom_MRF_unit = muMom_MRF.Unit();
      double phi_muMom_MRF = 0.0;
      double theta_muMom_MRF = 0.0;
      //GetAngles(muMom_MRF_unit, phi_muMom_MRF, theta_muMom_MRF);    
      
      //get positron angles
      TVector3 posiMom_MRF_unit = posiMom_MRF.Unit();
      double phi_posiMom_MRF(0.0);
      double theta_posiMom_MRF(0.0);
      GetAngles(posiMom_MRF_unit, phi_posiMom_MRF, theta_posiMom_MRF);

      //now get angle between polarisation vector and positron momentum vector
      double polDotPosi_MRF = pol_MRF.Dot(posiMom_MRF_unit);
      double alpha_MRF = acos(polDotPosi_MRF);
      if (alpha_MRF < 0) alpha_MRF += TMath::TwoPi();
      
      double thetaDiff = theta_pol_rot - theta_posiMom_rot;
      double thetaDiff_MRF = theta_pol_MRF - theta_posiMom_MRF;

      //ELAB->Fill(posiE / posiEMax);
      //h2_polDotPosi_ELAB->Fill(polDotPosi, posiE / posiEMax);
      //tp_cosAlpha_ELAB->Fill(posiE / posiEMax, cos(alpha));

      //sanity checks
      if (entry < 3) {
	cout << "\nEntry: " << entry << " directory: " << fDir->GetName() << "\n";
	cout << "muon lab E: " << muE_lab << " posi lab E: " << posiE_lab << "\n";
	cout << "Decay position: " << muPos.x() << ", " << muPos.y() << ", " << muPos.z() << "\n";
	cout << "Muon mom: " << muMom.x() << ", " << muMom.y() << ", " << muMom.z() << "\n";
	cout << "Posi mom: " << posiMom.x() << ", " << posiMom.y() << ", " << posiMom.z() << "\n";
	cout << "spin: " << pol.x() << ", " << pol.y() << ", " << pol.z() << "\n";
	cout << "Angle around ring: " << ringAngle << "\n";
	cout << "rotated muon mom: " << muMom_rot.x() << ", " << muMom_rot.y() << ", " << muMom_rot.z() << "\n";
	cout << "rotated Posi mom: " << posiMom_rot.x() << ", " << posiMom_rot.y() << ", " << posiMom_rot.z() << "\n";
	cout << "rotated spin: " << pol_rot.x() << ", " << pol_rot.y() << ", " << pol_rot.z() << "\n";
	cout << "theta pol rot: " << theta_pol_rot << ", phi pol rot: " << phi_pol_rot << "\n";
	cout << "gamma: " << gamma << " or: " << muE_lab/mumass  <<"\n";
	cout << "boost to MRF 1: " << boostToCM.x() << ", " << boostToCM.y() << ", " << boostToCM.z() << "\n";
	cout << "Posi E LAB: " << posiE_lab <<" ("<< posiE_lab/posiEMaxLAB 
	     <<"), MRF: " << posiMomE_MRF.E() << " ("<<posiMomE_MRF.E()/posiEMaxMRF << ")\n";
	cout << "eMRF: " << posiMomE_MRF.Px() << ", "  << posiMomE_MRF.Py() << ", "  << posiMomE_MRF.Pz() << "\n";
	cout << "eMRF (unit): " << posiMom_MRF_unit.x() << ", "  << posiMom_MRF_unit.y() << ", "  << posiMom_MRF_unit.z() << "\n";
	cout << "MuLAB: " << muMomE_lab.Px() << ", " << muMomE_lab.Py() << ", " << muMomE_lab.Pz() << ", " << muMomE_lab.E() << "\n";
	cout << "MuMRF: " << muMomE_MRF.Px() << ", " << muMomE_MRF.Py() << ", " << muMomE_MRF.Pz() << ", " << muMomE_MRF.E() << "\n";
	cout << "polMRF: " << pol_MRF.Px() << ", " << pol_MRF.Py() << ", " << pol_MRF.Pz() << "\n";
	cout << "s(theta)c(phi): " <<sin(theta_pol_MRF)*cos(phi_pol_MRF)<<", s(theta)s(phi) "<<sin(theta_pol_MRF)*sin(phi_pol_MRF)<<", c(theta) "<<cos(theta_pol_MRF)<<"\n";
	cout << "LAB - theta pol: " << theta_pol_rot << ", theta e: " << theta_posiMom_rot << " theta diff " << thetaDiff <<" alpha: " << alpha << "\n";
	cout << "MRF - theta pol: " << theta_pol_MRF << ", theta e: " << theta_posiMom_MRF << " theta diff " << thetaDiff_MRF <<" alpha: " << alpha_MRF << "\n";

	//cross check that MRF angle of positron is correct, using:
	//http://www.phys.ufl.edu/~avery/course/4390/f2015/lectures/relativistic_kinematics_1.pdf
	double v = muMomE_lab.Pz() / muMomE_lab.E();
	double u_MRF = sqrt( pow(posiMomE_MRF.Px(),2) + pow(posiMomE_MRF.Py(),2) + pow(posiMomE_MRF.Pz(),2)) / posiMomE_MRF.E();
	double numerator = sin(theta_posiMom_MRF);
	double denominator = gamma * (cos(theta_posiMom_MRF) +  (v/u_MRF));
	double th_LAB =numerator/denominator;
	
	cout << "th_LAB: " << atan(th_LAB) << " theta: " << theta_posiMom_rot << "\n";

      }

      //if (entry < 100) cout << "theta pol: " << theta_pol_MRF << ", theta e: " << theta_posiMom_MRF << " theta diff " << thetaDiff_MRF <<" alpha: " << alpha_MRF << "\n";
      

      ((TH1F*) Ldir->Get("muPhi"))->Fill(phi_muMom_rot);
      ((TH1F*) Ldir->Get("muTheta"))->Fill(theta_muMom_rot);
      ((TH1F*) Ldir->Get("polPhi"))->Fill(phi_pol_rot);
      ((TH1F*) Ldir->Get("polTheta"))->Fill(theta_pol_rot);
      ((TH1F*) Ldir->Get("posiE"))->Fill(posiE_lab / posiEMaxLAB);
      ((TH1F*) Ldir->Get("posiPhi"))->Fill(phi_posiMom_rot);
      ((TH1F*) Ldir->Get("posiTheta"))->Fill(theta_posiMom_rot);
      ((TH1F*) Ldir->Get("alpha"))->Fill(alpha);
      ((TH1F*) Ldir->Get("cosAlpha"))->Fill(cos(alpha));
      ((TH1F*) Ldir->Get("thetaDiff"))->Fill(thetaDiff);
      ((TH1F*) Ldir->Get("cosThetaDiff"))->Fill(cos(thetaDiff));
      ((TH1F*) Ldir->Get("time"))->Fill(timeModWa);
      ((TProfile*) Ldir->Get("tp_cosPosiPhi"))->Fill(timeModWa, cos(phi_posiMom_rot));
      ((TProfile*) Ldir->Get("tp_cosPosiTheta"))->Fill(timeModWa, cos(theta_posiMom_rot));
      ((TProfile*) Ldir->Get("tp_cosPolPhi"))->Fill(timeModWa, cos(phi_pol_rot));
      ((TProfile*) Ldir->Get("tp_cosPolTheta"))->Fill(timeModWa, cos(theta_pol_rot));
      ((TProfile*) Ldir->Get("tp_cosAlpha"))->Fill(timeModWa, cos(alpha));
      ((TH2F*) Ldir->Get("h2_cosPosiPhi"))->Fill(timeModWa, cos(phi_posiMom_rot));
      ((TH2F*) Ldir->Get("h2_cosPosiTheta"))->Fill(timeModWa, cos(theta_posiMom_rot));
      ((TH2F*) Ldir->Get("h2_cosPolPhi"))->Fill(timeModWa, cos(phi_pol_rot));
      ((TH2F*) Ldir->Get("h2_cosPolTheta"))->Fill(timeModWa, cos(theta_pol_rot));
      ((TH2F*) Ldir->Get("h2_cosAlpha"))->Fill(timeModWa, cos(alpha));
      
      ((TH1F*) Mdir->Get("muPhi"))->Fill(phi_muMom_MRF);
      ((TH1F*) Mdir->Get("muTheta"))->Fill(theta_muMom_MRF);
      ((TH1F*) Mdir->Get("polPhi"))->Fill(phi_pol_MRF);
      ((TH1F*) Mdir->Get("polTheta"))->Fill(theta_pol_MRF);
      ((TH1F*) Mdir->Get("posiE"))->Fill(posiMomE_MRF.E() / posiEMaxMRF);
      ((TH1F*) Mdir->Get("posiPhi"))->Fill(phi_posiMom_MRF);
      ((TH1F*) Mdir->Get("posiTheta"))->Fill(theta_posiMom_MRF);
      ((TH1F*) Mdir->Get("alpha"))->Fill(alpha_MRF);
      ((TH1F*) Mdir->Get("cosAlpha"))->Fill(cos(alpha_MRF));
      ((TH1F*) Mdir->Get("thetaDiff"))->Fill(thetaDiff_MRF);
      ((TH1F*) Mdir->Get("cosThetaDiff"))->Fill(cos(thetaDiff_MRF));
      ((TH1F*) Mdir->Get("time"))->Fill(timeModWa);
      ((TProfile*) Mdir->Get("tp_cosPosiPhi"))->Fill(timeModWa, cos(phi_posiMom_MRF));
      ((TProfile*) Mdir->Get("tp_cosPosiTheta"))->Fill(timeModWa, cos(theta_posiMom_MRF));
      ((TProfile*) Mdir->Get("tp_cosPolPhi"))->Fill(timeModWa, cos(phi_pol_MRF));
      ((TProfile*) Mdir->Get("tp_cosPolTheta"))->Fill(timeModWa, cos(theta_pol_MRF));
      ((TProfile*) Mdir->Get("tp_cosAlpha"))->Fill(timeModWa, cos(alpha_MRF));
      ((TH2F*) Mdir->Get("h2_cosPosiPhi"))->Fill(timeModWa, cos(phi_posiMom_MRF));
      ((TH2F*) Mdir->Get("h2_cosPosiTheta"))->Fill(timeModWa, cos(theta_posiMom_MRF));
      ((TH2F*) Mdir->Get("h2_cosPolPhi"))->Fill(timeModWa, cos(phi_pol_MRF));
      ((TH2F*) Mdir->Get("h2_cosPolTheta"))->Fill(timeModWa, cos(theta_pol_MRF));
      ((TH2F*) Mdir->Get("h2_cosAlpha"))->Fill(timeModWa, cos(alpha_MRF));


      //angles in time bins - only fill once
      if (iFrameDir == 0){
	((TH1F*) tDir->Get("polTheta_MRF"))->Fill(theta_pol_MRF);
	((TH1F*) tDir->Get("posiTheta_MRF"))->Fill(theta_posiMom_MRF);
	((TH1F*) tDir->Get("thetaDiff_MRF"))->Fill(thetaDiff_MRF);
	((TH1F*) tDir->Get("alpha_MRF"))->Fill(alpha_MRF);

	//only fill on first precession
	if (decayTime/1000.0 < period){
	  ((TProfile*) timeDir->Get("polZ"))->Fill(decayTime/1000.0, pol_MRF.z());
	}

      }
      iFrameDir++;
    }

  }
  fout->Write();
  fout->Close();

}
