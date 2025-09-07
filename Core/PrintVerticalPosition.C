/*{
	vector<string> ds_ = {"Run-1a", "Run-1b", "Run-1c", "Run-1d"};
	vector<string> stn_ = {"S12", "S18"};

	for(auto& ds : ds_) { 

		cout<<"\n---> "<<ds<<endl;

		TFile *fin = TFile::Open(("../Plots/Data/dMu/Run-1/Plots/verticalPositionPlots_"+ds+".root").c_str());
		
		cout<<fin<<endl;

		for(auto& stn : stn_) {

			cout<<"---> "<<stn<<endl;

			TH1D *h = (TH1D*)fin->Get(("SimultaneousAnalysis/"+stn+"_Y").c_str());

			cout<<"y = "<<h->GetMean()<<" ± "<<h->GetMeanError()<<endl;

		}

		fin->Close();

	}


}*/

{
	//vector<string> ds_ = {"Run-1a", "Run-1b", "Run-1c", "Run-1d"};
	vector<string> stn_ = {"S0", "S12", "S18"};

	TString finName = "../Plots/MC/dMu/5.4e-18/Plots/verticalPositionPlots_trackTruth_BQ.root";
	TFile *fin = TFile::Open(finName); // ("../Plots/Data/dMu/Run-1/Plots/verticalPositionPlots_"+ds+".root").c_str());
	
	cout<<fin<<endl;

	for(auto& stn : stn_) {

		cout<<"---> "<<stn<<endl;

		TH1D *h = (TH1D*)fin->Get(("SimultaneousAnalysis/"+stn+"_Y").c_str());

		cout<<"y = "<<h->GetMean()<<" ± "<<h->GetMeanError()<<endl;

	}

	fin->Close();


}