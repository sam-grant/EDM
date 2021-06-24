void FramesOverlay(int step ) { 

	TFile *f_WORLD = TFile::Open(("../Plots/MC/dMu/5.4e-18/dMuSim_unblindedFits_truthAllDecays_WORLD_"+to_string(step)+"MeV_AQ.root").c_str());
	TFile *f_AAR = TFile::Open(("../Plots/MC/dMu/5.4e-18/dMuSim_unblindedFits_truthAllDecays_AAR_"+to_string(step)+"MeV_AQ.root").c_str());
	TFile *f_MRF = TFile::Open(("../Plots/MC/dMu/5.4e-18/dMuSim_unblindedFits_truthAllDecays_MRF_"+to_string(step)+"MeV_AQ.root").c_str());

	TGraphErrors *gr_WORLD = (TGraphErrors*)f_WORLD->Get("MomentumBinnedAnalysis/ParameterScans/MomSlices/A_vs_p");
	TGraphErrors *gr_AAR = (TGraphErrors*)f_AAR->Get("MomentumBinnedAnalysis/ParameterScans/MomSlices/A_vs_p");
	TGraphErrors *gr_MRF = (TGraphErrors*)f_MRF->Get("MomentumBinnedAnalysis/ParameterScans/MomSlices/A_vs_p");

	gr_WORLD->SetMarkerStyle(20);
	gr_AAR->SetMarkerStyle(20);
	gr_MRF->SetMarkerStyle(20);

	gr_WORLD->SetMarkerColor(kBlack);
	gr_AAR->SetMarkerColor(kRed);
	gr_MRF->SetMarkerColor(kBlue);

	string title = ";e^{+}_{LAB} p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;A_{EDM} [mrad]";

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
		
	string fname = "../Images/MC/dMuSim/5.4e-18/Unblinded/FramesOverlay_A_vs_p_overlay_"+to_string(step);

	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".C").c_str());

	return;

}

void DecaysOverlay(int step, int frame) { 


	string title = "";
	string frameName = "";

	if(frame == 0) {
		frameName += "WORLD";
		title += "LAB";
	}
	else if(frame == 1) {
		frameName += "AAR";
		title += "LAB";
	} 
	else if(frame == 2) {
		frameName += "MRF";
		title += "MRF";
	}
	else cerr<<"No frame supplied";

	frameName += "_"+to_string(step);

	TFile *f_allDecays = TFile::Open(("../Plots/MC/dMu/5.4e-18/dMuSim_unblindedFits_truthAllDecays_"+frameName+"MeV_AQ.root").c_str());
	TFile *f_trackDecays = TFile::Open(("../Plots/MC/dMu/5.4e-18/dMuSim_unblindedFits_truth_"+frameName+"MeV_AQ.root").c_str());

	TGraphErrors *gr_allDecays = (TGraphErrors*)f_allDecays->Get("MomentumBinnedAnalysis/ParameterScans/MomSlices/A_vs_p");
	TGraphErrors *gr_trackDecays = (TGraphErrors*)f_trackDecays->Get("MomentumBinnedAnalysis/ParameterScans/MomSlices/A_vs_p");

	gr_allDecays->SetMarkerStyle(20);
	gr_trackDecays->SetMarkerStyle(24);

	gr_allDecays->SetMarkerColor(kBlack);
	gr_trackDecays->SetMarkerColor(kBlack);

	title += ";e^{+}_{LAB} p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;A_{EDM} [mrad]";

	TCanvas *c = new TCanvas("c", "c", 800, 600); 

	gr_allDecays->SetTitle(title.c_str());
	gr_allDecays->GetXaxis()->SetTitleSize(.04);
	gr_allDecays->GetYaxis()->SetTitleSize(.04);
	gr_allDecays->GetXaxis()->SetTitleOffset(1.1);
	gr_allDecays->GetYaxis()->SetTitleOffset(1.2);
	gr_allDecays->GetXaxis()->CenterTitle(true);
	gr_allDecays->GetYaxis()->CenterTitle(true);
	gr_allDecays->GetYaxis()->SetMaxDigits(4);
	gr_allDecays->SetMarkerStyle(20); //  Full circle
	//gr_allDecays->GetYaxis()->SetRangeUser(-0.01, 0.475);

	gr_allDecays->GetXaxis()->SetRangeUser(-50, 3050);
	gr_allDecays->Draw("AP");
	gr_trackDecays->Draw("P SAME");

	TLegend *leg = new TLegend(.59,.79,.89,.89);
	//TLegend *leg = new TLegend(.11,.79,.49,.89);
	//leg->SetNColumns(2);

	leg->AddEntry(gr_allDecays, "All decays");
	leg->AddEntry(gr_trackDecays, "Tracker decays");

	leg->SetBorderSize(0);

	leg->Draw("same");
		
	string fname = "../Images/MC/dMuSim/5.4e-18/Unblinded/DecaysOverlay_A_vs_p_overlay_"+frameName;

	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".C").c_str());

	return;

}


void overlay_A_vs_p() {

	//FramesOverlay(step);

	DecaysOverlay(200, 1);





	return;



}