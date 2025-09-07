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

	hist->GetYaxis()->SetRangeUser(-100,100);
	hist->GetXaxis()->SetRangeUser(-45,45);;

	gStyle->SetPalette(kRainBow);
	c->SetRightMargin(0.13);

	hist->Draw("COLZ");

	// For some reason you need to update the pad when dealing with cloned histograms
/*	c->Update();*/
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void MiscTrackerAcceptancePlot() {

	TFile *fin = TFile::Open("../Plots/MC/Acceptance/Plots/trackerAcceptancePlots.truth.root");

	TH2D *h2_decays = (TH2D*)fin->Get("0_3127_MeV/AllDecays/Main/ThetaY_vs_Y");
	TH2D *h2_tracks = (TH2D*)fin->Get("0_3127_MeV/Tracks/Main/S12S18_ThetaY_vs_Y");

	DrawTH2(h2_decays, ";y [mm];#theta_{y} [mrad]", "../Images/MC/Acceptance/h2_decays");
	DrawTH2(h2_tracks, ";y [mm];#theta_{y} [mrad]", "../Images/MC/Acceptance/h2_tracks");

	fin->Close();

	return;

}