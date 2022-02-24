
void DrawOverlay(TGraphErrors *gr1, TGraphErrors *gr2, std::string title, std::string fname, TGraphErrors *gr3 = 0) {

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

	// range
	double xmin = gr1->GetX()[0];
	double xmax = gr1->GetX()[gr1->GetN()-1];
	gr1->GetXaxis()->SetRangeUser(xmin - 100, xmax + 100);

	gr1->Draw("APL");

	gr2->SetMarkerStyle(24); // open circle
	gr2->Draw("PL SAME");

	if(gr3!=0) {
		gr3->SetMarkerStyle(24);
		gr3->SetMarkerColor(kRed);
		gr3->SetLineColor(kRed);
		gr3->Draw("PL SAME");
	}

	TLegend *l = new TLegend(.69, .79, .89, .89);
	l->SetBorderSize(0);
	l->SetTextSize(24);
	l->SetTextFont(44);

	if(gr3==0) {
		l->AddEntry(gr1, "Unweighted");
		l->AddEntry(gr2, "Weighted");
	} else { 


		l->AddEntry(gr1, "All decays (unweighted)");
		l->AddEntry(gr2, "All decays (weighted)");
		l->AddEntry(gr3, "Reco vertices");

		l->Draw("SAME");

		gPad->Update();

		l->SetX1NDC(.49);
		l->SetX2NDC(.89);
		l->SetY1NDC(.75);
		l->SetY2NDC(.89);


		//c->Update();

	}

	l->Draw("SAME");

	//c->SetGridx();

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}


void AEDM_overlay() { 
	
	TFile *f1 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ.root");
	TFile *f2 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_accepted2.root");
	TFile *f3 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackReco_WORLD_250MeV_BQ.root");

	TGraphErrors *gr1 = (TGraphErrors*)f1->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY");
	TGraphErrors *gr2 = (TGraphErrors*)f2->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY");
	TGraphErrors *gr3 = (TGraphErrors*)f3->Get("MomentumBinnedAnalysis/ParameterScans/S0S12S18_AEDM_vs_p_thetaY");

	DrawOverlay(gr1, gr2, "All decays", "../Images/MC/Acceptance/Results/AllDecays_AEDM_vs_p_overlay");
	DrawOverlay(gr1, gr2, "", "../Images/MC/Acceptance/Results/AllDecaysAndTrackReco_AEDM_vs_p_overlay", gr3);

	f1->Close();
	f2->Close();

	return; 

}