void DrawHists(TH1D *h1, TH1D *h2, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	TLegend *l = new TLegend(.45, .75, .89, .89);
	l->SetBorderSize(0);
  	l->SetTextSize(22);
	l->SetTextFont(44);

	h1->SetTitle(title.c_str());

	h1->SetStats(0);
			
	h1->GetXaxis()->SetTitleSize(.04);
	h1->GetYaxis()->SetTitleSize(.04);
	h1->GetXaxis()->SetTitleOffset(1.1);
	h1->GetYaxis()->SetTitleOffset(1.1);
	h1->GetXaxis()->CenterTitle(1);
	h1->GetYaxis()->CenterTitle(1);
	h1->GetYaxis()->SetMaxDigits(4);
	h1->SetLineColor(1);

	h1->SetLineColor(kBlack);
	h2->SetLineColor(kRed);

	h1->Draw("HIST");
	h2->Draw("HIST SAME");

	l->AddEntry(h1, "Without time randomisation");
	l->AddEntry(h2, "With time randomisation");

	l->Draw("SAME");

	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void FastRotationIllustration() { 

	TFile *fin = TFile::Open("../Plots/Data/dMu/Run-1a/Plots/fastRotationPlots.root");

	TH1D *h1 = (TH1D*)fin->Get("FastRotationPlots/S12S18_Wiggle_5ns");
	TH1D *h2 = (TH1D*)fin->Get("FastRotationPlots/S12S18_Wiggle_5ns_rand");

	cout<<h1<<", "<<h2<<endl;

	DrawHists(h1, h2, "", "../Images/Data/dMu/Run-1a/FR/FR_5ns");

	fin->Close();	

	return;

}