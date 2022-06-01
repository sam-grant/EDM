void DrawTH2(TH2D *hist, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());

	hist->SetStats(0);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.2);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);

	gStyle->SetPalette(55);
	c->SetRightMargin(0.13);

	hist->Draw("COLZ");

	//c->SetLogz();
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;

}

void DecayZ_vs_DecayX() { 

	TFile *fin1 = TFile::Open("../Plots/MC/dMu/5.4e-18/Plots/edmPlots_allDecays_WORLD_250MeV_AQ_noVertCorr.root");
	TFile *fin2 = TFile::Open("../Plots/MC/dMu/5.4e-18/Plots/edmPlots_trackReco_WORLD_250MeV_BQ.root");

	TH2D *h1 = (TH2D*)fin1->Get("SimultaneousAnalysis/DecayZ_vs_DecayX");
	TH2D *h2 = (TH2D*)fin2->Get("SimultaneousAnalysis/S12S18_DecayZ_vs_DecayX");

	DrawTH2(h1, "", "../Images/MC/dMu/5.4e-18/Misc/allDecays_DecayZ_vs_DecayX");
	DrawTH2(h2, "", "../Images/MC/dMu/5.4e-18/Misc/S12S18_trackReco_DecayZ_vs_DecayX");

	fin1->Close();
	fin2->Close();

	return;

}