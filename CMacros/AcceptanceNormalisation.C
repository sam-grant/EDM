{

	TFile *fin1 = TFile::Open("../Plots/MC/Acceptance/Plots/trackerAcceptancePlots.truth.root");
	TFile *fin2 = TFile::Open("../Plots/MC/Acceptance/Plots/trackerAcceptancePlots.truth.0mm.root");
	TFile *fin3 = TFile::Open("../Plots/MC/Acceptance/Plots/trackerAcceptancePlots.truth.1mm.root");

	cout<<fin1<<", "<<fin2<<", "<<fin3<<endl;

	int N1 = ((TH1D*)fin1->Get("AllDecays/Main/Momentum"))->GetEntries();
	int N2 = ((TH1D*)fin1->Get("Tracks/Main/S12_Momentum"))->GetEntries();
	int N3 = ((TH1D*)fin1->Get("Tracks/Main/S18_Momentum"))->GetEntries();
	int N4 = ((TH1D*)fin1->Get("Tracks/Main/S12S18_Momentum"))->GetEntries();
	int N5 = ((TH1D*)fin2->Get("Tracks/Main/S12_Momentum"))->GetEntries();
	int N6 = ((TH1D*)fin2->Get("Tracks/Main/S18_Momentum"))->GetEntries();
	int N7 = ((TH1D*)fin2->Get("Tracks/Main/S12S18_Momentum"))->GetEntries();
	int N8 = ((TH1D*)fin3->Get("Tracks/Main/S12_Momentum"))->GetEntries();
	int N9 = ((TH1D*)fin3->Get("Tracks/Main/S18_Momentum"))->GetEntries();
	int N10 = ((TH1D*)fin3->Get("Tracks/Main/S12S18_Momentum"))->GetEntries();

	cout<<"All decays, "<<N1<<endl;
	cout<<"Truth vertices (S12), "<<N2<<endl;
	cout<<"Truth vertices (S18), "<<N3<<endl;
	cout<<"Truth vertices (S12S18), "<<N4<<endl;
	cout<<"Truth vertices (S12, 0 mm), "<<N5<<endl;
	cout<<"Truth vertices (S18, 0 mm), "<<N6<<endl;
	cout<<"Truth vertices (S12S18, 0 mm), "<<N7<<endl;
	cout<<"Truth vertices (S12, 1 mm), "<<N8<<endl;
	cout<<"Truth vertices (S18, 1 mm), "<<N9<<endl;
	cout<<"Truth vertices (S12S18, 1 mm), "<<N10<<endl;

	fin1->Close();
	fin2->Close();
	fin3->Close();
}