void DrawTGraphErrors(TGraphErrors *graph, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	graph->SetTitle(title.c_str());
	graph->GetXaxis()->SetTitleSize(.04);
	graph->GetYaxis()->SetTitleSize(.04);
	graph->GetXaxis()->SetTitleOffset(1.1);
	graph->GetYaxis()->SetTitleOffset(1.2);
	graph->GetXaxis()->CenterTitle(true);
	graph->GetYaxis()->CenterTitle(true);
	graph->GetYaxis()->SetMaxDigits(4);
	graph->SetMarkerStyle(20); //  Full circle
	graph->Draw("APL");
	//c->SetGridx();

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void OverlayAEDM_Interpolation() { 

	TFile *fin_int = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr_accWeightS12S18_full.root");
	TFile *fin_noInt = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr_accWeightS12S18_noInt_full.root");
	
	TGraphErrors *gr_int = (TGraphErrors*)fin_int->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY");
	TGraphErrors *gr_noInt = (TGraphErrors*)fin_noInt->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY");

	TGraphErrors *gr_diff = new TGraphErrors();

	int n = 0; 

	for(int i(0); i<gr_int->GetN(); i++) { 

		double x = gr_int->GetX()[i];

		if(x < 1000 || x > 2500) continue;

		double y1 = gr_int->GetY()[i];
		double y2 = gr_noInt->GetY()[i];

		double diff = y1-y2; 

		cout<<diff<<endl;

		gr_diff->SetPoint(n, x, diff);
		gr_diff->SetPointError(n, 0, 0);

		n++;
	}

	DrawTGraphErrors(gr_diff, ";Momentum [MeV];#DeltaA_{EDM} [mrad]", "../Images/MC/A_EDM_Interpolation");

	return; 

}