/*{

	vector<TString> ds_ = {"Run-1a", "Run-1b", "Run-1c", "Run-1d"};
	vector<TString> stn_ = {"S12", "S18", "S12S18"};

	for(auto& ds : ds_) {

		TFile *f = TFile::Open("../Plots/Data/dMu/Run-1/Plots/edmPlots_"+ds+"_125MeV_BQ.root"); 

		for(auto& stn : stn_) { 

			TH1D *h = (TH1D*)f->Get("SimultaneousAnalysis/"+stn+"_ThetaY_vs_Time_Modulo");

			int N = h->GetEntries();

			cout<<stn<<", "<<ds<<", "<<N<<endl;

		}


		f->Close();

	}

}*/

{

	vector<TString> ds_ = {"0", "1", "2", "3", "4"};
	vector<TString> stn_ = {"S12", "S18", "S12S18", "S0S12S18"};

	for(auto& ds : ds_) {

		TFile *f = TFile::Open("../Plots/MC/dMu/5.4e-18/Plots/edmPlots_trackReco_WORLD_250MeV_BQ."+ds+".root"); 

		for(auto& stn : stn_) { 

			TH1D *h = (TH1D*)f->Get("SimultaneousAnalysis/"+stn+"_ThetaY_vs_Time_Modulo");

			int N = h->GetEntries();

			cout<<stn<<", "<<ds<<", "<<N<<endl;

		}


		f->Close();

	}

}