void Run(string dataset) { 

	TFile *fin = TFile::Open(("../Plots/Data/dMu/Run-1/Plots/verticalOffsetHists_"+dataset+".root").c_str());

	TString foutName = "../Plots/Data/dMu/Run-1/Plots/verticalOffsetHists_"+dataset+"_2.root";
	TFile *fout = new TFile(foutName, "RECREATE");
	fout->mkdir("VerticalOffsetPlots"); fout->cd("VerticalOffsetPlots"); 

	vector<string> stn_ = {"S12", "S18", "S12S18"};
  	vector<string> step_ = {"125", "250"};

	for(auto& step : step_) {

		fout->mkdir(("VerticalOffsetPlots/"+step+"MeV").c_str()); fout->cd(("VerticalOffsetPlots/"+step+"MeV").c_str()); 

		for(auto& stn : stn_) {

			TH2D *h_theta_y_vs_p;
			if(step=="125") h_theta_y_vs_p = (TH2D*)fin->Get(("VerticalOffsetPlots/"+stn+"_ThetaY_vs_Momentum_"+step+"MeV").c_str());
			else h_theta_y_vs_p = (TH2D*)fin->Get(("VerticalOffsetPlots/"+stn+"_ThetaY_vs_Momentum_"+step+"Mev").c_str());

			h_theta_y_vs_p->SetName((stn+"_ThetaY_vs_Momentum").c_str());

			h_theta_y_vs_p->Write();

		}

  }

	

	fin->Close();
	fout->Close();

	cout<<"Plots written to "<<foutName<<", "<<fout<<endl;

	return;
}
void rename() { 

	Run("Run-1b");
	Run("Run-1c");
	Run("Run-1d");

	return;

}