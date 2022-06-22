void DrawTH2(TH2D *hist, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

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
	hist->GetZaxis()->SetMaxDigits(3);

	//hist->GetZaxis()->SetTitle("");

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


void TimeModIllustration() { 

	TString finName = "../Plots/MC/dMu/5.4e-18/Plots/edmPlots_allDecays_WORLD_250MeV_AQ_noVertCorr.root";
	TFile *fin = TFile::Open(finName);

	cout<<"---> File "<<finName<<", "<<fin<<endl;

	TH2D *h1 = (TH2D*)fin->Get("SimultaneousAnalysis/ThetaY_vs_Time");
	TH2D *h2 = (TH2D*)fin->Get("SimultaneousAnalysis/ThetaY_vs_Time_Modulo");

	//h1->Scale(1/h1->GetMaximum());
	//h2->Scale(1/h2->GetMaximum());

	cout<<"---> Hists "<<h1<<", "<<h2<<endl;

	h1->GetYaxis()->SetRangeUser(-45, 45);
	h1->GetXaxis()->SetRangeUser(30.6, 150);

	h2->GetYaxis()->SetRangeUser(-45, 45);

	DrawTH2(h1, ";Decay time [#mus]; #theta_{y} [mrad]", "../Images/MC/dMu/5.4e-18/Misc/allDecays_ThetaY_vs_t");
	DrawTH2(h2, ";t^{mod}_{g-2} [#mus]; #theta_{y} [mrad]", "../Images/MC/dMu/5.4e-18/Misc/allDecays_ThetaY_vs_t_modulo");


	fin->Close();

	return;

}

