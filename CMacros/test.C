void test() { 

	TFile *f_c_vs_mom = TFile::Open("../Plots/Data/dMu/Run-1a/Plots/verticalOffset_Run-1a.root");

	// TGraphErrors *gr_c_vs_mom = (TGraphErrors*)f_c_vs_mom->Get("VerticalOffsetPlots/125MeV/S12_gr_ThetaY_vs_Momentum");
	TH1D *gr_c_vs_mom = (TH1D*)f_c_vs_mom->Get("VerticalOffsetPlots/125MeV/S12_px_ThetaY_vs_Momentum");

	for(int i(0); i<3000; i++) {

		// cout<<gr_c_vs_mom->Eval(i)<<endl;

		int bin = gr_c_vs_mom->FindBin(i);

		double y = gr_c_vs_mom->GetBinContent(bin);//FindBin(i);

		cout<<"bin "<<bin<<", "<<y<<endl;




	}


	f_c_vs_mom->Close();



}