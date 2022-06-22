{

	TCanvas *c = new TCanvas("c", "c", 800, 600);

	TFile *fin = TFile::Open("../Plots/MC/Acceptance/Plots/acceptanceWeightingVsMomentum_250MeV.root");

	TGraphErrors *gr_S12S18 = (TGraphErrors*)fin->Get("graphs/S12S18_ratio_main");
	TGraphErrors *gr_S12 = (TGraphErrors*)fin->Get("graphs/S12_ratio_main");
	TGraphErrors *gr_S18 = (TGraphErrors*)fin->Get("graphs/S18_ratio_main");

	// Offset x for S12 and S12S18 slightly 
	for(int i(0); i<gr_S18->GetN(); i++) gr_S18->SetPoint(i, gr_S18->GetX()[i]+25, gr_S18->GetY()[i]);
	for(int i(0); i<gr_S12S18->GetN(); i++) gr_S12S18->SetPoint(i, gr_S12S18->GetX()[i]+50, gr_S12S18->GetY()[i]);

	gr_S12S18->SetTitle(";Decay vertex momentum (station 12) [MeV];A_{EDM} acceptance factor / 250 MeV");
	gr_S12S18->GetXaxis()->SetTitleSize(.04);
	gr_S12S18->GetYaxis()->SetTitleSize(.04);
	gr_S12S18->GetXaxis()->SetTitleOffset(1.1);
	gr_S12S18->GetYaxis()->SetTitleOffset(1.2);
	gr_S12S18->GetXaxis()->CenterTitle(true);
	gr_S12S18->GetYaxis()->CenterTitle(true);
	gr_S12S18->GetYaxis()->SetMaxDigits(4);
	gr_S12S18->SetMarkerStyle(20); //  Full circle
	gr_S12S18->GetYaxis()->SetRangeUser(0, 1.0);

	gr_S12->SetMarkerStyle(20);
	gr_S18->SetMarkerStyle(20);
	gr_S12->SetMarkerColor(kRed);
	gr_S18->SetMarkerColor(kBlue);
	gr_S12->SetLineColor(kRed);
	gr_S18->SetLineColor(kBlue);

	gr_S12S18->GetXaxis()->SetRangeUser(900, 2500);
	
	gr_S12S18->Draw("AP");
	gr_S12->Draw("P SAME");
	gr_S18->Draw("P SAME");

 	// TLegend *l = new TLegend(0.65, 0.15, 0.85, 0.30); 
 	TLegend *l = new TLegend(0.15, 0.725, 0.45, 0.89); 
 	 //l->SetNColumns(3);
  	l->SetBorderSize(0);
  	l->SetTextSize(24);
  	l->SetTextFont(44);

  	l->AddEntry(gr_S12, "Station 12");
 	l->AddEntry(gr_S18, "Station 18");
 	l->AddEntry(gr_S12S18, "Combined");

 	l->Draw("SAME");

 	c->SaveAs("../Images/MC/Acceptance/truth/CorrectionResults/OverlayMainAcceptanceWeightingVsMomentum.pdf");

	fin->Close();



}