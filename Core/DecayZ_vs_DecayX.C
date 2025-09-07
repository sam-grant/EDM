double Circle(double *x, double *par) {
	return sqrt( x[0] - par[0]);
}


void DrawTH2(TH2D *hist, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",1600,1200);

	hist->SetTitle(title.c_str());
	hist->SetStats(0);
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.1);
	hist->GetZaxis()->SetTitleOffset(1.1);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetZaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);
	hist->GetZaxis()->SetTitle("Normalised units");

/*	gPad->Update();*/

	gStyle->SetPalette(55);
	c->SetRightMargin(0.13);

	hist->Draw("COLZ");

  	
  	TEllipse *e = new TEllipse(0,0,7.112,7.112);
  	//e->SetNpx(1e4); //e->SetNpy(1e4);
  	e->SetLineWidth(3);
  	e->SetLineColor(kGray);
  	e->SetLineStyle(2);
	e->Draw();

	hist->Draw("COLZ SAME");



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
	TH2D *h2 = (TH2D*)fin2->Get("SimultaneousAnalysis/S0S12S18_DecayX_vs_DecayZ");

	h1->Scale(1/h1->GetMaximum());
	h2->Scale(1/h2->GetMaximum());

	h1->GetXaxis()->SetLimits(-8, 8);
	h1->GetYaxis()->SetLimits(-8, 8);

	h2->GetXaxis()->SetLimits(-8, 8);
	h2->GetYaxis()->SetLimits(-8, 8);

	DrawTH2(h1, ";Decay vertex position Z [m]; Decay vertex position X [m];Normalised units", "../Images/MC/dMu/5.4e-18/Misc/allDecays_DecayZ_vs_DecayX");
	DrawTH2(h2, ";Decay vertex position Z [m]; Decay vertex position X [m];Normalised units", "../Images/MC/dMu/5.4e-18/Misc/S0S12S18_trackReco_DecayZ_vs_DecayX");

	fin1->Close();
	fin2->Close();

	return;

}