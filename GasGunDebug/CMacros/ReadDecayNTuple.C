double M_POS = 0.51099895; // MeV
double M_MU = 105.6583715; // MeV
double A_MU = 11659208.9e-10; 
double GMAGIC = std::sqrt( 1.+1./A_MU );
double PMAX = 1.01 * M_MU * GMAGIC; // 3127.1144

bool boost = false;//true;//false;//false;//true; // true;

void ReadDecayNTuple() { 

   //string config = "1e4_0MeV";
   //string config = "1e4_noPol";
   string config = "1e4_xPol";

   //string config = "1e4";

	TFile *input = TFile::Open(("../trees/decayNTuple_"+config+".root").c_str());
	TTree *tree = (TTree*)input->Get("PositronDecay/DecayNTuple");

   string outputName = "../plots/decayNTuplePlots_"+config;

   if(boost) outputName += "_MRF.root";
   else outputName += "_LAB.root";

   TFile *output = new TFile(outputName.c_str(),"RECREATE");

	cout<<"Got file "<<input<<"\nGot tree "<<tree<<endl;

	// Book variables 

	// We only really need the momenta

	float GasGunMuonX;
  	float GasGunMuonY;
  	float GasGunMuonZ;
  	float GasGunMuonPX;
  	float GasGunMuonPY;
  	float GasGunMuonPZ;
  	float GasGunPolX;
  	float GasGunPolY;
  	float GasGunPolZ;
  	float GasGunTime;
  	float GasGunInjectionTime;
  	float TrajectoryPositronX;
  	float TrajectoryPositronY;
  	float TrajectoryPositronZ;
  	float TrajectoryPositronPX;
  	float TrajectoryPositronPY;
  	float TrajectoryPositronPZ;
  	int TrajectoryPDGID;
  	int TrajectoryParentID;
  	int TrajectoryTrackID;

   tree->SetBranchAddress("GasGunMuonX", &GasGunMuonX);
   tree->SetBranchAddress("GasGunMuonY", &GasGunMuonY);
   tree->SetBranchAddress("GasGunMuonZ", &GasGunMuonZ);
   tree->SetBranchAddress("GasGunMuonPX", &GasGunMuonPX);
   tree->SetBranchAddress("GasGunMuonPY", &GasGunMuonPY);
   tree->SetBranchAddress("GasGunMuonPZ", &GasGunMuonPZ);
   tree->SetBranchAddress("GasGunPolX", &GasGunPolX);
   tree->SetBranchAddress("GasGunPolY", &GasGunPolY);
   tree->SetBranchAddress("GasGunPolZ", &GasGunPolZ);
   tree->SetBranchAddress("GasGunTime", &GasGunTime);
   tree->SetBranchAddress("GasGunInjectionTime", &GasGunInjectionTime);
   tree->SetBranchAddress("TrajectoryPositronX", &TrajectoryPositronX);
   tree->SetBranchAddress("TrajectoryPositronY", &TrajectoryPositronY);
   tree->SetBranchAddress("TrajectoryPositronZ", &TrajectoryPositronZ);
   tree->SetBranchAddress("TrajectoryPositronPX", &TrajectoryPositronPX);
   tree->SetBranchAddress("TrajectoryPositronPY", &TrajectoryPositronPY);
   tree->SetBranchAddress("TrajectoryPositronPZ", &TrajectoryPositronPZ);
   tree->SetBranchAddress("TrajectoryPDGID", &TrajectoryPDGID);
   tree->SetBranchAddress("TrajectoryParentID", &TrajectoryParentID);
   tree->SetBranchAddress("TrajectoryTrackID", &TrajectoryTrackID);

   // Book histograms
   TH1F *h_muPosX = new TH1F("h_muPosX",";Muon position X [mm];Entries",500,-1.,1);
   TH1F *h_muPosY = new TH1F("h_muPosY",";Muon position Y [mm];Entries",500,-1.,1);
   TH1F *h_muPosZ = new TH1F("h_muPosZ",";Muon position Z [mm];Entries",500,7111,7113);

   TH1F *h_muPolX = new TH1F("h_muPolX",";Muon polarisation X [rad];Entries",500,-1.,1);
   TH1F *h_muPolY = new TH1F("h_muPolY",";Muon polarisation Y [rad];Entries",500,-1.,1);
   TH1F *h_muPolZ = new TH1F("h_muPolZ",";Muon polarisation Z [rad];Entries",500,0,2);

   TH1F *h_muMom = new TH1F("h_muMom",";Muon momentum [MeV];Entries",500,0,PMAX);
   TH1F *h_muMomX = new TH1F("h_muMomX",";Muon momentum X [MeV];Entries",2*500,-PMAX,PMAX);
   TH1F *h_muMomY = new TH1F("h_muMomY",";Muon momentum Y [MeV];Entries",2*500,-PMAX,PMAX);
   TH1F *h_muMomZ = new TH1F("h_muMomZ",";Muon momentum Z [MeV];Entries",2*500,-PMAX,PMAX);

   TH1F *h_posPosX = new TH1F("h_posPosX",";Positron position X [mm];Entries",500,-1.,1);
   TH1F *h_posPosY = new TH1F("h_posPosY",";Positron position Y [mm];Entries",500,-1.,1);
   TH1F *h_posPosZ = new TH1F("h_posPosZ",";Positron position Z [mm];Entries",500,7111,7113);

   // Only truly care about this one
   TH1F *h_posMom;
   TH1F *h_posMomX;
   TH1F *h_posMomY;
   TH1F *h_posMomZ;

   if(!boost) {

      h_posMom = new TH1F("h_posMom",";Positron momentum [MeV];Entries",310,0,3100);
      h_posMomX = new TH1F("h_posMomX",";Positron momentum X [MeV];Entries",20,-100,100);
      h_posMomY = new TH1F("h_posMomY",";Positron momentum Y [MeV];Entries",20,-100,100);
      h_posMomZ = new TH1F("h_posMomZ",";Positron momentum Z [MeV];Entries",620,-3100,3100);

   } else if(boost) {

      h_posMom = new TH1F("h_posMom",";Positron momentum [MeV];Entries",10,0,100);
      h_posMomX = new TH1F("h_posMomX",";Positron momentum X [MeV];Entries",20,-100,100);
      h_posMomY = new TH1F("h_posMomY",";Positron momentum Y [MeV];Entries",20,-100,100);
      h_posMomZ = new TH1F("h_posMomZ",";Positron momentum Z [MeV];Entries",20,-100,100);

   }

 	int64_t nEntries = tree->GetEntries();

 	double targetPerc = 0.;

 	for(int64_t entry = 0; entry < nEntries; entry++) {

      tree->GetEntry(entry);

      if(100*float(entry) / nEntries > targetPerc) {
         cout << Form("Processed %.1f%%", 100*float(entry)/nEntries) << endl;
         targetPerc += 10;
      }

      TVector3 muPos(GasGunMuonX, GasGunMuonY, GasGunMuonZ);
      TVector3 muPol(GasGunPolX, GasGunPolY, GasGunPolZ);
      TVector3 muMom(GasGunMuonPX, GasGunMuonPY, GasGunMuonPZ);

      TVector3 posPos(TrajectoryPositronX, TrajectoryPositronY, TrajectoryPositronZ);
      TVector3 posMom(TrajectoryPositronPX, TrajectoryPositronPY, TrajectoryPositronPZ);

      // Muon rest frame
      if(boost) {

         // No need to rotate here!

         double muE_lab = sqrt(pow(M_MU,2) + pow(muMom.Mag(),2));
         double posiE_lab = sqrt(pow(M_POS,2) + pow(posMom.Mag(),2));
         double gamma = sqrt(1.0 + pow(posMom.Mag()/M_MU, 2)); 

         // Construct 4-vector and boost it into the rest frame
         ROOT::Math::PxPyPzEVector muMom4Vec_lab(muMom.X(), muMom.Y(), muMom.Z(), muE_lab);
         ROOT::Math::XYZVector boost = muMom4Vec_lab.BoostToCM();

         // Get boost vector as a lorentz vector
         TVector3 boostToCM(boost.x(), boost.y(), boost.z());

         // Make positron momentum 4 vector in lab, and get boost vector as a TVector3 vector
         TLorentzVector posMom4Vec_lab(posMom.X(), posMom.Y(), posMom.Z(), posiE_lab);

         // Apply boost to positron lab vector to get it in MRF 1, using TLorentzVectors. Convert to normal TVector3 at end 
         TLorentzVector posMom4Vec_MRF = posMom4Vec_lab;
         posMom4Vec_MRF.Boost(boostToCM);

         TVector3 posMom_MRF(posMom4Vec_MRF.Px(), posMom4Vec_MRF.Py(), posMom4Vec_MRF.Pz());

         posMom = posMom_MRF; 

      } 

      h_muPosX->Fill(muPos.X());
      h_muPosY->Fill(muPos.Y());
      h_muPosZ->Fill(muPos.Z());

      h_muPolX->Fill(muPol.X());
      h_muPolY->Fill(muPol.Y());
      h_muPolZ->Fill(muPol.Z());

      h_muMomX->Fill(muMom.X());
      h_muMomY->Fill(muMom.Y());
      h_muMomZ->Fill(muMom.Z());
      h_muMom->Fill(muMom.Mag());

      h_posPosX->Fill(posPos.X());
      h_posPosY->Fill(posPos.Y());
      h_posPosZ->Fill(posPos.Z());

      h_posMomX->Fill(posMom.X());
      h_posMomY->Fill(posMom.Y());
      h_posMomZ->Fill(posMom.Z());
      h_posMom->Fill(posMom.Mag());
  
  	}

   // Should probably write these in a loop 

  	output->mkdir("Muons"); output->cd("Muons"); 

   h_muPosX->Write();
   h_muPosY->Write();
   h_muPosZ->Write();

   h_muPolX->Write();
   h_muPolY->Write();
   h_muPolZ->Write();

   h_muMomX->Write();
	h_muMomY->Write();
   h_muMomZ->Write();
   h_muMom->Write();

   output->mkdir("Positrons"); output->cd("Positrons"); 

   h_posPosX->Write();
   h_posPosY->Write();
   h_posPosZ->Write();

   h_posMomX->Write();
   h_posMomY->Write();
   h_posMomZ->Write();
   h_posMom->Write();

   input->Close();
   output->Close();

   cout<<"Written plots to "<<outputName<<", "<<output<<endl;

	return;

}