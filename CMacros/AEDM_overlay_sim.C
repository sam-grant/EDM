void DrawOverlay(TGraphErrors *gr1, TGraphErrors *gr3, TGraphErrors *gr2, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	gr1->SetTitle(title.c_str());
	gr1->GetXaxis()->SetTitleSize(.04);
	gr1->GetYaxis()->SetTitleSize(.04);
	gr1->GetXaxis()->SetTitleOffset(1.1);
	gr1->GetYaxis()->SetTitleOffset(1.2);
	gr1->GetXaxis()->CenterTitle(true);
	gr1->GetYaxis()->CenterTitle(true);
	gr1->GetYaxis()->SetMaxDigits(4);
	gr1->SetMarkerStyle(20); //  Full circle
	gr2->SetMarkerStyle(20); 
	gr3->SetMarkerStyle(20); 

	// range
	double xmin = gr1->GetX()[0];
	double xmax = gr1->GetX()[gr1->GetN()-1];

	gr1->GetXaxis()->SetRangeUser(500, 3000);//xmin - 100, xmax + 100);
	gr1->GetYaxis()->SetRangeUser(-0.05, 0.40);

	gr1->SetLineColor(kBlack);
	gr1->SetMarkerColor(kBlack);

	gr2->SetLineColor(kRed);
	gr2->SetMarkerColor(kRed);

	gr3->SetLineColor(kBlue);
	gr3->SetMarkerColor(kBlue);

	gr1->Draw("AP");
	gr2->Draw("P SAME");
	gr3->Draw("P SAME");

	TLegend *l = new TLegend(.65, .75, .89, .89);
	l->SetBorderSize(0);
	l->SetTextSize(24);
	l->SetTextFont(44);
	
	l->AddEntry(gr1, "All decays");
	l->AddEntry(gr2, "Truth vertices");
	l->AddEntry(gr3, "Reco vertices");

	l->Draw("SAME");

	//c->SetGridx();

	c->SaveAs((fname+".pdf").c_str());
/*	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());*/

	delete c;

	return;

}

void AEDM_overlay_sim() { 

	TString f1Name = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr.root";
	TString f2Name = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr.root";
	TString f3Name = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackReco_WORLD_250MeV_BQ_noVertCorr.root";

	TFile *f1 = TFile::Open(f1Name);
	TFile *f2 = TFile::Open(f2Name);
	TFile *f3 = TFile::Open(f3Name);

	TGraphErrors *gr1 = (TGraphErrors*)f1->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY"); 
	TGraphErrors *gr2 = (TGraphErrors*)f2->Get("MomentumBinnedAnalysis/ParameterScans/S12S18_AEDM_vs_p_thetaY");
	TGraphErrors *gr3 = (TGraphErrors*)f3->Get("MomentumBinnedAnalysis/ParameterScans/S12S18_AEDM_vs_p_thetaY");

	cout<<gr1<<", "<<gr2<<", "<<gr3<<endl;

	gr1->GetYaxis()->SetRangeUser(-0.1, 0.4);

	DrawOverlay(gr1, gr2, gr3, ";Momentum, p [MeV];A_{EDM} [mrad];", "../Images/MC/dMu/5.4e-18/Results/S12S18_AEDM_overlay");

	f1->Close();
	f2->Close();
	f3->Close();

	return;

}