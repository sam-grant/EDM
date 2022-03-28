void DrawOverlay(TGraphErrors *gr1, TGraphErrors *gr2, TGraphErrors *gr3, TGraphErrors *gr4, TGraphErrors *gr5, TGraphErrors *gr6, TGraphErrors *gr7, string fname, double ymin, double ymax) { 

  	cout<<"---> Drawing offset"<<endl;

  	TCanvas *c = new TCanvas("c","",800,600);
  	TLegend *l = new TLegend(0.15, 0.65, 0.89, 0.89); 
  	l->SetBorderSize(0);
  	l->SetTextSize(24);
  	l->SetTextFont(44);
  	//l->SetNColumns(2);

  	gr1->GetYaxis()->SetRangeUser(ymin, ymax);
  	gr1->GetXaxis()->SetTitleSize(.04);
  	gr1->GetYaxis()->SetTitleSize(.04);
  	gr1->GetXaxis()->SetTitleOffset(1.1);
  	gr1->GetYaxis()->SetTitleOffset(1.15);
  	gr1->GetXaxis()->CenterTitle(true);
  	gr1->GetYaxis()->CenterTitle(true);
  	gr1->GetYaxis()->SetMaxDigits(4);

  	gr1->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV");

  	gr1->SetMarkerColor(kBlack);
  	gr1->SetLineColor(kBlack);
	gr1->SetMarkerStyle(23);  

  	gr2->SetMarkerColor(kRed);
  	gr2->SetLineColor(kRed);
	gr2->SetMarkerStyle(32); 
 
  	gr3->SetMarkerColor(kRed);
  	gr3->SetLineColor(kRed);
	gr3->SetMarkerStyle(23);

  	gr4->SetMarkerColor(kBlue);
  	gr4->SetLineColor(kBlue);
	gr4->SetMarkerStyle(20); 
 
  	gr5->SetMarkerColor(kGreen-3);
  	gr5->SetLineColor(kGreen-3);
	gr5->SetMarkerStyle(20); 

  	gr6->SetMarkerColor(kOrange+7);
  	gr6->SetLineColor(kOrange+7);
	gr6->SetMarkerStyle(20); 

  	gr7->SetMarkerColor(kMagenta+2);
  	gr7->SetLineColor(kMagenta+2);
	gr7->SetMarkerStyle(20); 

	gr1->Draw("APL");
	gr2->Draw("PL SAME");
	gr3->Draw("PL SAME");
	gr4->Draw("PL SAME");
	gr5->Draw("PL SAME");
	gr6->Draw("PL SAME");
	gr7->Draw("PL SAME");

	l->AddEntry(gr1, "Sim: all decays");
	l->AddEntry(gr2, "Sim: reco vertices (no misalignment)");
	l->AddEntry(gr3, "Sim: reco vertices (with misalignment)");
	l->AddEntry(gr4, "Data: Run-1a");
	l->AddEntry(gr5, "Data: Run-1b");
	l->AddEntry(gr6, "Data: Run-1c");
	l->AddEntry(gr7, "Data: Run-1d");

 	l->Draw("SAME");

  	c->SaveAs((fname+".pdf").c_str());
  	c->SaveAs((fname+".png").c_str());
  	c->SaveAs((fname+".C").c_str());

 	 delete c;

  	return;

}

TGraphErrors *ResetGraph(TGraphErrors *grIn, double xmin, double xmax) {

	TGraphErrors *grOut = new TGraphErrors();
	int count = 0;
	
	for(int i(0); i<grIn->GetN(); i++) { 

		double x = grIn->GetX()[i];
		double y = grIn->GetY()[i];
		double ey = grIn->GetEY()[i];   

    	if(x<xmin || x>xmax) continue;

    	grOut->SetPoint(count, x, y);
    	grOut->SetPointError(count, 0., ey);  

    	count++;

	}


	return grOut;

}

void Run(string simConfig, string dataConfig) { 

	//TFile *f1 = TFile::Open(("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ"+simConfig+".root").c_str());
	TFile *f1 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr_accCorr.root");//.c_str());
	TFile *f2 = TFile::Open(("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackReco_WORLD_250MeV_BQ"+simConfig+".root").c_str());
	TFile *f3 = TFile::Open(("../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_Run-1a_250MeV_BQ"+dataConfig+".root").c_str());
	TFile *f4 = TFile::Open(("../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_Run-1b_250MeV_BQ"+dataConfig+".root").c_str());
	TFile *f5 = TFile::Open(("../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_Run-1c_250MeV_BQ"+dataConfig+".root").c_str());
	TFile *f6 = TFile::Open(("../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_Run-1d_250MeV_BQ"+dataConfig+".root").c_str());

	cout<<f1<<", "<<f2<<", "<<f3<<", "<<f4<<", "<<f5<<", "<<f6<<endl;

	TGraphErrors *gr1 = (TGraphErrors*)f1->Get("MomentumBinnedAnalysis/ParameterScans/c_vs_p_thetaY");
	TGraphErrors *gr2 = (TGraphErrors*)f2->Get("MomentumBinnedAnalysis/ParameterScans/S0_c_vs_p_thetaY");
	TGraphErrors *gr3 = (TGraphErrors*)f2->Get("MomentumBinnedAnalysis/ParameterScans/S12S18_c_vs_p_thetaY");
	TGraphErrors *gr4 = (TGraphErrors*)f3->Get("MomentumBinnedAnalysis/ParameterScans/S12S18_c_vs_p");
	TGraphErrors *gr5 = (TGraphErrors*)f4->Get("MomentumBinnedAnalysis/ParameterScans/S12S18_c_vs_p");
	TGraphErrors *gr6 = (TGraphErrors*)f5->Get("MomentumBinnedAnalysis/ParameterScans/S12S18_c_vs_p");
	TGraphErrors *gr7 = (TGraphErrors*)f6->Get("MomentumBinnedAnalysis/ParameterScans/S12S18_c_vs_p");

	cout<<gr1<<", "<<gr2<<", "<<gr3<<", "<<gr4<<", "<<gr5<<", "<<gr6<<", "<<gr7<<endl;

	double xmin = 750; 
	double xmax = 2750;
	TGraphErrors *gr1_reset = ResetGraph(gr1, xmin, xmax);
	TGraphErrors *gr2_reset = ResetGraph(gr2, xmin, xmax);
	TGraphErrors *gr3_reset = ResetGraph(gr3, xmin, xmax);
	TGraphErrors *gr4_reset = ResetGraph(gr4, xmin, xmax);
	TGraphErrors *gr5_reset = ResetGraph(gr5, xmin, xmax);
	TGraphErrors *gr6_reset = ResetGraph(gr6, xmin, xmax);
	TGraphErrors *gr7_reset = ResetGraph(gr7, xmin, xmax);

	DrawOverlay(gr1_reset, gr2_reset, gr3_reset, gr4_reset, gr5_reset, gr6_reset, gr7_reset, "../Images/MC/dMu/5.4e-18/VerticalOffset/verticalOffsetIllustration"+dataConfig, -1, 1);

	f1->Close();
	f2->Close();
	f3->Close();
	f4->Close();
	f5->Close();
	f6->Close();

	return;

}

void VerticalAngleIllustration() { 

	
	//Run("_noVertCorr", "_noVertCorr");
	Run("_noVertCorr", "_timeVertCorr");
	//Run("");

	return;

}