

void tmp() { 

	double omegaAMagic = 0.00143934; // from gm2geom consts / kHz 
	double g2Period = (2*TMath::Pi()/omegaAMagic) * 1e-3; // 4.3653239 us
	double mMu = 105.6583715; // MeV
	double aMu = 11659208.9e-10; 
	double gmagic = std::sqrt( 1.+1./aMu );
	double pmax = 1.01 * mMu * gmagic;

	string inFileName = "/pnfs/GM2/persistent/EDM/MC/dMu/TrackerNTup/simTree.dMu.5.4e-18.root";
	TFile *fin = TFile::Open(inFileName .c_str());
	
	string treeName = "trackerNTup/tracker";

	TTree *tree = (TTree*)fin->Get(treeName.c_str());
	cout<<tree<<endl;

	string stns[] = {"S0S12S18", "S12S18", "S0", "S12", "S18"}; 

	int n_stn = sizeof(stns)/sizeof(stns[0]);

	for (int i_stn = 0; i_stn < n_stn; i_stn++) cout<<stns[i_stn]+"_Momentum"<<endl;

	int station;
   	float trackMomentum;
	tree->SetBranchAddress("station", &station);
	tree->SetBranchAddress("trackMomentum", &trackMomentum);

	int64_t nEntries = tree->GetEntries();

   	int stn_id = -1;

   	TH1D* momentum_[n_stn]; 

   	for (int i_stn = 0; i_stn < n_stn; i_stn++) {
   		cout<<"Name\t"<<stns[i_stn]+"_Momentum"<<endl;
   		momentum_[i_stn] = new TH1D((stns[i_stn]+"_Momentum").c_str(), ";Track momentum [MeV];Tracks", int(pmax), 0, pmax); 
	}

   	long long counter = 0;

   	for(int64_t entry = 0; entry < nEntries; entry++) {

   		tree->GetEntry(entry);

   		int stn = station; 
   		float p = trackMomentum;

   		stn_id = 0;
   		momentum_[stn_id]->Fill(p);

//   		if(stn==0 || stn==12 || stn == 18) {
//   			 
//   			
//   		}

        if(stn!=0) { 
        	stn_id = 1;
        	cout<<"Stn "<<stn<<", stn_id "<<stn_id<<endl;
        	momentum_[stn_id]->Fill(p);
         }

         // Individual stations
         if(stn==0) {
            stn_id = 2;
            cout<<"Stn "<<stn<<", stn_id "<<stn_id<<endl;
            momentum_[stn_id]->Fill(p);
         } 

         if(stn==12) { 
            stn_id = 3;
            cout<<"Stn "<<stn<<", stn_id "<<stn_id<<endl;
            momentum_[stn_id]->Fill(p);
         }

         if(stn==18) {
            stn_id = 4;
            cout<<"Stn "<<stn<<", stn_id "<<stn_id<<endl;
            momentum_[stn_id]->Fill(p);
         }

         counter++;
         if(counter>1e3) break;

   	}

	TFile *fout = new TFile("tmp.root","RECREATE");

	fout->mkdir("cunt"); fout->cd("cunt"); // Write();

	momentum_[0]->Write();
	momentum_[1]->Write();
	momentum_[2]->Write();
	momentum_[3]->Write();
	momentum_[4]->Write();

	fout->Close();



	return;

}