void DrawTH2(TH2D *hist, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());

	//hist->SetStats(2210);
	gStyle->SetOptStat(2210);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.1);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);

	gStyle->SetPalette(55);

	hist->GetYaxis()->SetRangeUser(-80, 80);
	//c->SetRightMargin(0.13);

	hist->Draw("COL");

	//c->SetLogz();
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void ReweightModuloHist() { 

	// File to be reweighted
	//TFile *f1 = TFile::Open("../Plots/MC/dMu/5.4e-18/Plots/edmPlots_allDecays_WORLD_250MeV_AQ_noVertCorr_accWeightS12S18_full.root");
	TFile *f1 = TFile::Open("../Plots/MC/dMu/5.4e-18/Plots/edmPlots_trackTruth_WORLD_250MeV_BQ_noVertCorr_full.root");

	// File for reweighting
	TFile *f2 = TFile::Open("../Plots/MC/Acceptance/Plots/verticalAngleMomentumSlices.Run-1a.root");

	// Histogram to be reweighted
	TH2D *h1 = (TH2D*)f1->Get("MomentumBinnedAnalysis/S12S18_ThetaY_vs_Time_Modulo_1000_1250");
	TH2D *h1_rw = (TH2D*)h1->Clone("h1_rw");

	// Histogram for reweighting
	TH1D *h2 = (TH1D*)f2->Get("ratios/S12S18_h_ratio_4");

	// Loop thro' TH2 and reweight it

	for(int i(0); i<h1->GetNbinsX(); i++) {

		for(int j(0); j<h1->GetNbinsY(); j++) { 

			double content = h1->GetBinContent(i+1, j+1);

			if(content==0) continue;

			double theta_y = h1->GetYaxis()->GetBinCenter(j+1);
			double weighting = h2->GetBinContent(h2->FindBin(theta_y));
			content = content * weighting;

			h1_rw->SetBinContent(i+1, j+1, content);

		}

	}

	// Reference histogram
	TFile *f3 = TFile::Open("../Plots/Data/dMu/Run-1/Plots/edmPlots_Run-1a_250MeV_1000_2500MeV_randomised_BQ.root");
	TH2D *h3 = (TH2D*)f3->Get("MomentumBinnedAnalysis/S12S18_ThetaY_vs_Time_Modulo_1000_1250");

	DrawTH2(h1, "", "../Images/ReweightedAngles/trackTruth_ThetaY_vs_Time_Modulo_1000_1250");
	DrawTH2(h1_rw, "", "../Images/ReweightedAngles/trackTruth_Run-1a_Reweighted_ThetaY_vs_Time_Modulo_1000_1250");
	DrawTH2(h3, "", "../Images/ReweightedAngles/S12S18_Run-1a_ThetaY_vs_Time_Modulo_1000_1250");

	return;

}