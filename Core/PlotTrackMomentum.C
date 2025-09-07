void DrawPlot(TH1D *hist, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());

	hist->SetStats(0);
	//gStyle->SetOptStat(2210);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.25);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);
	//hist->SetLineWidth(3);
	hist->SetLineColor(1);

	//c->SetRightMargin(0.13);

	hist->Draw("HIST");
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void TrackReco() { 

	double mMu = 105.6583715; // MeV
	double aMu = 11659208.9e-10; 
	double gmagic = std::sqrt( 1.+1./aMu );
	double pmax = 1.01 * mMu * gmagic; // 3127.1144

	TFile *file = TFile::Open("../Trees/MC/dMu/simTree.root"); 
	TTree *tree = (TTree*)file->Get("trackerNTup/tracker");

	TH1D *h_mom  = new TH1D("Momentum", ";Track momentum [MeV];Tracks", int(pmax), 0, pmax);

	float trackMomentum;
	bool hitVolume;
	float trackPValue;

	tree->SetBranchAddress("trackMomentum", &trackMomentum);
	tree->SetBranchAddress("hitVolume", &hitVolume);
	tree->SetBranchAddress("trackPValue", &trackPValue);

   	int64_t nEntries = tree->GetEntries();

   	for(int64_t entry = 0; entry < nEntries; entry++) {

    	tree->GetEntry(entry);

    	if(hitVolume || trackPValue < 0.05) continue;

    	h_mom->Fill(trackMomentum);

    }

    DrawPlot(h_mom, ";Track momentum [MeV];Tracks", "../Images/MC/dMuSim/5.4e-18/trackReco_Momentum_AQ");

    return;
}

void PlotTrackMomentum() { 

	TrackReco();

	return; 

}