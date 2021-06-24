void DrawTH2(TH2D *hist, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());

	hist->SetStats(0);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.1);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);

	gStyle->SetPalette(55);
	c->SetRightMargin(0.13);

	hist->Draw("COLZ");

	c->SetLogz();
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void DecayX_vs_DecayZ() { 

	bool allDecays = false;//true;

	//string inFileName = "phaseAnalyzerPlots.root";
	string inFileName; string outFileName;

	string title = "";

	if(allDecays) {
		inFileName = "../Plots/MC/dMu/5.4e-18/dMuSim_truthAllDecays_WORLD_200MeV_AQ.root";
		outFileName = "decayX_vs_decayZ_truthAllDecays";
		title+="All decays";
	} else{
		inFileName = "../Plots/MC/dMu/5.4e-18/dMuSim_truth_WORLD_200MeV_AQ.root";
		outFileName = "decayX_vs_decayZ_truth";
		title+="Tracker decays";
	} 

	TFile *inFile = TFile::Open(inFileName.c_str()); 
	cout<<"Got input file "<<inFileName<<", "<<inFile<<endl;

	string histName = "MainPlots/DecayZ_vs_DecayX";
	TH2D *hist = (TH2D*)inFile->Get(histName.c_str());
	cout<<"Got hist "<<histName<<", "<<hist<<endl;

	title += ";Decay position X [mm];Decay position Z [mm]";

	DrawTH2(hist, ";Decay position X [mm];Decay position Z [mm]", outFileName);

	return;

}
