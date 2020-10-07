{

	TFile *file = TFile::Open("../../Plots/Data/MeanCaloPos/CTAG_SUBRUN_SIGMA_15921.root"); 
	cout<<file<<endl;

	TH1D *CTAG_vs_SUBRUN = (TH1D*)file->Get("CTAG_vs_SUBRUN"); 
	TH1D *SIGMA_vs_SUBRUN = (TH1D*)file->Get("SIGMA_vs_SUBRUN"); 

	int n = 0;
	int n_1 = CTAG_vs_SUBRUN->GetNbinsX(); 
	int n_2 = SIGMA_vs_SUBRUN->GetNbinsX(); 
	if(n_1 == n_2) n = n_1; 
	else cout<<"ERROR"<<endl;

	for (int i_subruns = 0; i_subruns < n_1; i_subruns++) { 

		cout<<"\ni_subruns\t"<<i_subruns+1<<endl;
		cout<<"ctags \t"<<CTAG_vs_SUBRUN->GetBinContent(i_subruns+1)<<endl;
		cout<<"sigma \t"<<SIGMA_vs_SUBRUN->GetBinContent(i_subruns+1)<<endl;

	}



}