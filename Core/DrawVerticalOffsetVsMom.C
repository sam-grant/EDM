void DrawScan(TGraphErrors *gr, std::string dataset, std::string title, std::string fname, double ymin, double ymax) { 

  TCanvas *c = new TCanvas("c","c",800,600);

  gr->SetTitle(title.c_str());
  gr->GetXaxis()->SetTitleSize(.04);
  gr->GetYaxis()->SetTitleSize(.04);
  gr->GetXaxis()->SetTitleOffset(1.1);
  gr->GetYaxis()->SetTitleOffset(1.2);
  gr->GetXaxis()->CenterTitle(true);
  gr->GetYaxis()->CenterTitle(true);
  gr->GetYaxis()->SetMaxDigits(4);
  
  gr->SetMarkerStyle(20); //  Full circle
  gr->SetMarkerColor(kBlack); 

  gr->GetYaxis()->SetRangeUser(ymin, ymax);

  gr->Draw("AP");

  gPad->Update();

  TLine *zero = new TLine(gPad->GetUxmin(), 0, gPad->GetUxmax(), 0);
  //zero->SetLineWidth(3);
  zero->SetLineColor(kGray);
  zero->SetLineStyle(2);
  zero->Draw();

  gr->Draw("P SAME");

  TLegend *leg = new TLegend(0.65, 0.75, 0.85, 0.89);
  leg->SetBorderSize(0);
  
  leg->AddEntry(gr, dataset.c_str());

  leg->Draw("SAME");

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}


void DrawVerticalOffsetVsMom() { 

	std::string dataset = "Run-1d";

	TFile *fin = TFile::Open(("../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_"+dataset+"_125MeV_BQ.root").c_str());

	TGraphErrors *gr = (TGraphErrors*)fin->Get("MomentumBinnedAnalysis/ParameterScans/MomSlices/S12S18_c_vs_p");
	
	DrawScan(gr, dataset, "S12S18;Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad]", "../Images/Data/dMu/Run-1/VerticalOffset/MainPlots/S12S18_AverageCorrectedVerticalOffsetVsMomentum_"+dataset+"_BQ", -0.015, +0.02);

	return;

}