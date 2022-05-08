/*{

	vector<TString> ds_ = {"Run-1a", "Run-1b", "Run-1c", "Run-1d"};
	vector<TString> stn_ = {"S12", "S18", "S12S18"};

	int sum = 0;

	for(auto& ds : ds_) {

		TFile *f = TFile::Open("../Plots/Data/dMu/Run-1/Plots/edmPlots_"+ds+"_250MeV_1000_2500_MeV_BQ.root"); 

		for(auto& stn : stn_) { 

			TH1D *h = (TH1D*)f->Get("SimultaneousAnalysis/"+stn+"_ThetaY_vs_Time_Modulo");

			int N = h->GetEntries();

			cout<<stn<<", "<<ds<<", "<<N<<endl;

			if(stn=="S12S18") sum += N;

		}


		f->Close();

	}

	cout<<"Total Run-1 = "<<sum<<endl;
}*/

{

	vector<TString> ds_ = {"Run-1a", "Run-1b", "Run-1c", "Run-1d"};
	vector<TString> stn_ = {"S12", "S18", "S12S18"};

	int sum = 0;

	//for(auto& ds : ds_) {

		TFile *f = TFile::Open("../Plots/MC/dMu/5.4e-18/Plots/edmPlots_allDecays_WORLD_250MeV_1000_2500_MeV_AQ.root");//../Plots/Data/dMu/Run-1/Plots/edmPlots_"+ds+"_250MeV_1000_2500_MeV_BQ.root"); 

		for(auto& stn : stn_) { 

			//TH1D *h = (TH1D*)f->Get("SimultaneousAnalysis/"+stn+"_ThetaY_vs_Time_Modulo");
			TH1D *h = (TH1D*)f->Get("SimultaneousAnalysis/ThetaY_vs_Time_Modulo");

			int N = h->GetEntries();

			//cout<<stn<<", "<<ds<<", "<<N<<endl;

			if(stn=="S12S18") sum += N;

		}


		f->Close();

	//}

	cout<<"Total trackReco = "<<sum<<endl;
}