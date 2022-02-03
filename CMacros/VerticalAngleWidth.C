{

	cout << "\n *** SIM *** ,, " << endl;

	vector<TString> stn_ = {"S0", "S12", "S18", "S12S18", "S0S12S18"};

	TFile *f1 = TFile::Open("../Plots/MC/dMu/5.4e-18/Plots/edmPlots_trackReco_WORLD_250MeV_BQ.root");

	double sigma; double dsigma;

	for(auto& stn : stn_) { 

		TH1D *h1 = (TH1D*)f1->Get("SimultaneousAnalysis/"+stn+"_ThetaY");

		sigma = h1->GetRMS();
		dsigma = h1->GetRMSError();

		cout<<stn<<", "<<sigma<<", "<<dsigma<<endl;

	}

	f1->Close();

	cout << "\n *** DATA *** ,," << endl;

	vector<TString> ds_ = {"Run-1a", "Run-1b", "Run-1c", "Run-1d"};

	for(auto& ds : ds_) {

		TFile *f2 = TFile::Open("../Plots/Data/dMu/Run-1/Plots/edmPlots_"+ds+"_125MeV_BQ.root"); 

		cout<<"\n"<<ds<<",,"<<endl;

		for(auto& stn : stn_) { 

			TH1D *h2 = (TH1D*)f2->Get("SimultaneousAnalysis/"+stn+"_ThetaY");
			if(h2==0) continue;

			sigma = h2->GetRMS();
			dsigma = h2->GetRMSError();

			cout<<stn<<", "<<sigma<<", "<<dsigma<<endl;

		}


		f2->Close();

	}

	cout << "\n *** REWIEGHTED SIM *** ,, " << endl;

	TFile *f3 = TFile::Open("../Plots/MC/dMu/5.4e-18/Plots/edmPlots_trackReco_WORLD_250MeV_BQ.reweight.root");

	for(auto& stn : stn_) { 

		TH1D *h3 = (TH1D*)f3->Get("SimultaneousAnalysis/"+stn+"_ThetaY");

		sigma = h3->GetRMS();
		dsigma = h3->GetRMSError();

		cout<<stn<<", "<<sigma<<", "<<dsigma<<endl;

	}

	f3->Close();

}