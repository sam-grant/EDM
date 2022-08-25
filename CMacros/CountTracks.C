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

/*{

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
}*/


/*{

	vector<TString> ds_ = {"Run-1a", "Run-1b", "Run-1c", "Run-1d"};

	for(auto& ds : ds_) {

		TFile *f = TFile::Open("../Plots/Data/dMu/Run-1/Plots/count_"+ds+".root");//"../Plots/MC/dMu/5.4e-18/Plots/edmPlots_allDecays_WORLD_250MeV_1000_2500_MeV_AQ.root");//../Plots/Data/dMu/Run-1/Plots/edmPlots_"+ds+"_250MeV_1000_2500_MeV_BQ.root"); 

		TH1D *h1 = (TH1D*)f->Get("Momentum_QualityTracks");//SimultaneousAnalysis/ThetaY_vs_Time_Modulo");
		TH1D *h2 = (TH1D*)f->Get("Momentum_QualityVertices");//SimultaneousAnalysis/ThetaY_vs_Time_Modulo");

		int N1 = h1->GetEntries();
		int N2 = h2->GetEntries();

		cout<<"\nDataset "<<ds<<endl;
		cout<<"Q tracks = "<<N1<<endl;
		cout<<"Q vertices = "<<N2<<endl;

		f->Close();

	}

}
*/
/*{

	vector<TString> ds_ = {"allDecays", "reco", "truth"};

	for(auto& ds : ds_) {

		TFile *f = TFile::Open("../Plots/MC/dMu/5.4e-18/Plots/count_"+ds+".root");//"../Plots/MC/dMu/5.4e-18/Plots/edmPlots_allDecays_WORLD_250MeV_1000_2500_MeV_AQ.root");//../Plots/Data/dMu/Run-1/Plots/edmPlots_"+ds+"_250MeV_1000_2500_MeV_BQ.root"); 

		TH1D *h1 = (TH1D*)f->Get("Momentum_Raw");//SimultaneousAnalysis/ThetaY_vs_Time_Modulo");
		TH1D *h2 = (TH1D*)f->Get("Momentum_Cuts");//SimultaneousAnalysis/ThetaY_vs_Time_Modulo");

		int N1 = h1->GetEntries();
		int N2 = h2->GetEntries();

		cout<<"\nDataset "<<ds<<endl;
		cout<<"raw = "<<N1<<endl;
		cout<<"cuts = "<<N2<<endl;

		f->Close();

	}

}
*/
{

	for(int i(5); i<6; i++) { 

			TFile *f = TFile::Open("../Plots/MC/dMu/5.4e-18/Plots/plots_trackTruthTrees.5.root");
				//("../Plots/MC/dMu/5.4e-18/Plots/count_trackTruth_WORLD_250MeV_BQ_noVertCorr."+to_string(i)+".root").c_str());

			TH1D *h1 = (TH1D*)f->Get("Momentum_Raw");//SimultaneousAnalysis/ThetaY_vs_Time_Modulo");
			TH1D *h2 = (TH1D*)f->Get("Momentum_Cuts");//SimultaneousAnalysis/ThetaY_vs_Time_Modulo");

			int N1 = h1->GetEntries();
			int N2 = h2->GetEntries();

			cout<<"\n"<<i<<endl;
			cout<<"raw = "<<N1<<endl;
			cout<<"cuts = "<<N2<<endl;

			f->Close();

	}

}
