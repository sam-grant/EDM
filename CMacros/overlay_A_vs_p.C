void overlay_A_vs_p() { 

	int step = 200;

	TFile *f_WORLD = TFile::Open("../Plots/MC/dMu/5.4e-18/dMuSim_unblindedFits_truthAllDecays_WORLD_200MeV_AQ.root");
	TFile *f_AAR = TFile::Open("../Plots/MC/dMu/5.4e-18/dMuSim_unblindedFits_truthAllDecays_AAR_200MeV_AQ.root");
	TFile *f_MRF = TFile::Open("../Plots/MC/dMu/5.4e-18/dMuSim_unblindedFits_truthAllDecays_MRF_200MeV_AQ.root");

	TGraphErrors *gr_WORLD = (TGraphErrors*)f_WORLD->Get("MomentumBinnedAnalysis/ParameterScans/MomSlices/A_vs_p");
	TGraphErrors *gr_AAR = (TGraphErrors*)f_AAR->Get("MomentumBinnedAnalysis/ParameterScans/MomSlices/A_vs_p");
	TGraphErrors *gr_MRF = (TGraphErrors*)f_MRF->Get("MomentumBinnedAnalysis/ParameterScans/MomSlices/A_vs_p");

	gr_WORLD->SetMarkerStyle(20);
	gr_AAR->SetMarkerStyle(20);
	gr_MRF->SetMarkerStyle(20);

	gr_WORLD->SetMarkerColor(kBlack);
	gr_AAR->SetMarkerColor(kRed);
	gr_MRF->SetMarkerColor(kBlue);

	string title = ";p_{e^{+} WORLD} [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;A_{EDM} [mrad]";

	TCanvas *c = new TCanvas("c", "c", 800, 600); 

	gr_WORLD->SetTitle(title.c_str());
	gr_WORLD->GetXaxis()->SetTitleSize(.04);
	gr_WORLD->GetYaxis()->SetTitleSize(.04);
	gr_WORLD->GetXaxis()->SetTitleOffset(1.1);
	gr_WORLD->GetYaxis()->SetTitleOffset(1.2);
	gr_WORLD->GetXaxis()->CenterTitle(true);
	gr_WORLD->GetYaxis()->CenterTitle(true);
	gr_WORLD->GetYaxis()->SetMaxDigits(4);
	gr_WORLD->SetMarkerStyle(20); //  Full circle
	gr_WORLD->GetYaxis()->SetRangeUser(-0.1,15);
	gr_WORLD->Draw("AP");
	gr_AAR->Draw("P SAME");
	gr_MRF->Draw("P SAME");

	TLegend *leg = new TLegend(.59,.69,.89,.89);
	leg->SetNColumns(3);

	leg->AddEntry(gr_WORLD, "WORLD");
	leg->AddEntry(gr_AAR, "AAR");
	leg->AddEntry(gr_MRF, "MRF");

	leg->SetBorderSize(0);

	leg->Draw("same");
		
	string fname = "../Images/MC/dMuSim/5.4e-18/Unblinded/MomBinnedAna/MomSlices/FramesOverlay_A_vs_p_overlay_"+to_string(step);

	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".C").c_str());

}