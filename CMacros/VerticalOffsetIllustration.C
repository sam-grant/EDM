// Globals
double xmin = 1000; double xmax = 2500;

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



void DrawSimOverlay(TGraphErrors *gr0, TGraphErrors *gr1, TGraphErrors *gr2, string fname, double ymin, double ymax) { 

  	cout<<"---> Drawing offset"<<endl;

  	TCanvas *c = new TCanvas("c","",800,600);
  	TLegend *l = new TLegend(0.15, 0.75, 0.89, 0.89); 
  	l->SetBorderSize(0);
  	l->SetTextSize(24);
  	l->SetTextFont(44);
  	//l->SetNColumns(2);

  	gr0->GetYaxis()->SetRangeUser(ymin, ymax);
  	gr0->GetXaxis()->SetTitleSize(.04);
  	gr0->GetYaxis()->SetTitleSize(.04);
  	gr0->GetXaxis()->SetTitleOffset(1.1);
  	gr0->GetYaxis()->SetTitleOffset(1.15);
  	gr0->GetXaxis()->CenterTitle(true);
  	gr0->GetYaxis()->CenterTitle(true);
  	gr0->GetYaxis()->SetMaxDigits(4);

  	gr0->SetTitle(";Momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV");

  	gr0->SetMarkerColor(kBlack);
  	gr0->SetLineColor(kBlack);
	gr0->SetMarkerStyle(20);  

  	//gr2->SetMarkerColor(kRed);
  	//gr2->SetLineColor(kRed);
	//gr2->SetMarkerStyle(32); 
 
  	gr1->SetMarkerColor(kBlack);
  	gr1->SetLineColor(kBlack);
	gr1->SetMarkerStyle(24);

  	gr2->SetMarkerColor(kRed);
  	gr2->SetLineColor(kRed);
	gr2->SetMarkerStyle(24); 

	gr0->Draw("APL");
	gr1->Draw("PL SAME");
	gr2->Draw("PL SAME");

	l->AddEntry(gr0, "Sim: all decays");
	l->AddEntry(gr1, "Sim: all decays (acceptance weighted)");
	l->AddEntry(gr2, "Sim: truth vertices");

 	l->Draw("SAME");

  	c->SaveAs((fname+".pdf").c_str());
  	c->SaveAs((fname+".png").c_str());
  	c->SaveAs((fname+".C").c_str());

 	delete c;

  	return;

}

void DrawStationOverlay(TFile *f, string dataset, string fname, double ymin, double ymax, bool data) { 

  	cout<<"---> Drawing per station offsets"<<endl;

  	TCanvas *c = new TCanvas("c","",800,600);
  	TLegend *l = new TLegend(0.15, 0.75, 0.89, 0.89); 

	TGraphErrors *gr12;
	TGraphErrors *gr18;

	if(data) {
		gr12 = ResetGraph((TGraphErrors*)f->Get("MomentumBinnedAnalysis/ParameterScans/S12_c_vs_p"), xmin, xmax);
		gr18 = ResetGraph((TGraphErrors*)f->Get("MomentumBinnedAnalysis/ParameterScans/S18_c_vs_p"), xmin, xmax);
	} else {
		gr12 = ResetGraph((TGraphErrors*)f->Get("MomentumBinnedAnalysis/ParameterScans/S12_c_vs_p_thetaY"), xmin, xmax);
		gr18 = ResetGraph((TGraphErrors*)f->Get("MomentumBinnedAnalysis/ParameterScans/S18_c_vs_p_thetaY"), xmin, xmax);	
	}
	
  	l->SetBorderSize(0);
  	l->SetTextSize(24);
  	l->SetTextFont(44);

  	gr12->GetYaxis()->SetRangeUser(ymin, ymax);
  	gr12->GetXaxis()->SetTitleSize(.04);
  	gr12->GetYaxis()->SetTitleSize(.04);
  	gr12->GetXaxis()->SetTitleOffset(1.1);
  	gr12->GetYaxis()->SetTitleOffset(1.15);
  	gr12->GetXaxis()->CenterTitle(true);
  	gr12->GetYaxis()->CenterTitle(true);
  	gr12->GetYaxis()->SetMaxDigits(4);

  	gr12->SetTitle((dataset+";Momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV").c_str());

  	gr12->SetMarkerColor(kBlack);
  	gr12->SetLineColor(kBlack);
	gr12->SetMarkerStyle(20);  
 
  	gr18->SetMarkerColor(kRed);
  	gr18->SetLineColor(kRed);
	gr18->SetMarkerStyle(20);

	gr12->Draw("APL");
	gr18->Draw("PL SAME");

	l->AddEntry(gr12, "Station 12");
	l->AddEntry(gr18, "Station 18");

 	l->Draw("SAME");

  	c->SaveAs((fname+".pdf").c_str());
  	c->SaveAs((fname+".png").c_str());
  	c->SaveAs((fname+".C").c_str());

 	delete c;

  	return;

}


/*void RunOLD(string simConfig, string dataConfig) { 

	// This is out of date... 

	TFile *f0 = TFile::Open(("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ"+simConfig+".root").c_str());

	// Should be accWeightS12S18_full rather than noVertCorr_accCorr, not sure what 
	TFile *f1 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr_accCorr.root");//.c_str());
	TFile *f2 = TFile::Open(("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ"+simConfig+".root").c_str());
	TFile *f3 = TFile::Open(("../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_Run-1a_250MeV_BQ"+dataConfig+".root").c_str());
	TFile *f4 = TFile::Open(("../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_Run-1b_250MeV_BQ"+dataConfig+".root").c_str());
	TFile *f5 = TFile::Open(("../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_Run-1c_250MeV_BQ"+dataConfig+".root").c_str());
	TFile *f6 = TFile::Open(("../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_Run-1d_250MeV_BQ"+dataConfig+".root").c_str());

	TFile *f7 = TFile::Open(("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackReco_WORLD_250MeV_BQ"+simConfig+"_0mm.root").c_str());

	cout<<f0<<", "<<f1<<", "<<f2<<", "<<f3<<", "<<f4<<", "<<f5<<", "<<f6<<", "<<f7<<endl;

	TGraphErrors *gr0 = ResetGraph((TGraphErrors*)f0->Get("MomentumBinnedAnalysis/ParameterScans/c_vs_p_thetaY"), xmin, xmax);
	TGraphErrors *gr1 = ResetGraph((TGraphErrors*)f1->Get("MomentumBinnedAnalysis/ParameterScans/c_vs_p_thetaY"), xmin, xmax);
	TGraphErrors *gr2 = ResetGraph((TGraphErrors*)f2->Get("MomentumBinnedAnalysis/ParameterScans/S0S12S18_c_vs_p_thetaY"), xmin, xmax);
	TGraphErrors *gr3 = ResetGraph((TGraphErrors*)f3->Get("MomentumBinnedAnalysis/ParameterScans/S12S18_c_vs_p"), xmin, xmax);
	TGraphErrors *gr4 = ResetGraph((TGraphErrors*)f4->Get("MomentumBinnedAnalysis/ParameterScans/S12S18_c_vs_p"), xmin, xmax);
	TGraphErrors *gr5 = ResetGraph((TGraphErrors*)f5->Get("MomentumBinnedAnalysis/ParameterScans/S12S18_c_vs_p"), xmin, xmax);
	TGraphErrors *gr6 = ResetGraph((TGraphErrors*)f6->Get("MomentumBinnedAnalysis/ParameterScans/S12S18_c_vs_p"), xmin, xmax);

	//TGraphErrors *gr7 = ResetGraph((TGraphErrors*)f7->Get("MomentumBinnedAnalysis/ParameterScans/S12_c_vs_p"), xmin, xmax);
	//TGraphErrors *gr8 = ResetGraph((TGraphErrors*)f7->Get("MomentumBinnedAnalysis/ParameterScans/S18_c_vs_p"), xmin, xmax);

	cout<<gr1<<", "<<gr2<<", "<<gr3<<", "<<gr4<<", "<<gr5<<", "<<gr6<<", "<<endl;//gr7<<", "<<gr8<<endl;

	DrawSimOverlay(gr0, gr1, gr2, "../Images/MC/dMu/5.4e-18/VerticalOffset/verticalOffsetIllustrationSimOnly"+dataConfig, -1, 1);
	DrawOverlay(gr0, gr1, gr2, gr3, gr4, gr5, gr6, "../Images/MC/dMu/5.4e-18/VerticalOffset/verticalOffsetIllustration"+dataConfig, -1, 1);
	
	// Very sloppy
	DrawStationOverlay(f3, "Run-1a", "../Images/MC/dMu/5.4e-18/VerticalOffset/verticalOffsetStationComp_Run-1a"+dataConfig, -1, 1, true);
	DrawStationOverlay(f4, "Run-1b", "../Images/MC/dMu/5.4e-18/VerticalOffset/verticalOffsetStationComp_Run-1b"+dataConfig, -1, 1, true);
	DrawStationOverlay(f5, "Run-1c", "../Images/MC/dMu/5.4e-18/VerticalOffset/verticalOffsetStationComp_Run-1c"+dataConfig, -1, 1, true);
	DrawStationOverlay(f6, "Run-1d", "../Images/MC/dMu/5.4e-18/VerticalOffset/verticalOffsetStationComp_Run-1d"+dataConfig, -1, 1, true);

	DrawStationOverlay(f7, "0 mm", "../Images/MC/dMu/5.4e-18/VerticalOffset/verticalOffsetStationComp_0mm"+simConfig, -1, 1, false);

	f0->Close();
	f1->Close();
	f2->Close();
	f3->Close();
	f4->Close();
	f5->Close();
	f6->Close();
	f7->Close();

	return;

}

void RunOLD2(string simConfig, string dataConfig) { 

	// This is out of date... 

	TFile *f0 = TFile::Open(("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ"+simConfig+".root").c_str());

	// Should be accWeightS12S18_full rather than noVertCorr_accCorr, not sure what 
	TFile *f1 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr_accCorr.root");//.c_str());
	TFile *f2 = TFile::Open(("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ"+simConfig+".root").c_str());
	TFile *f3 = TFile::Open(("../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_Run-1a_250MeV_BQ"+dataConfig+".root").c_str());
	TFile *f4 = TFile::Open(("../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_Run-1b_250MeV_BQ"+dataConfig+".root").c_str());
	TFile *f5 = TFile::Open(("../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_Run-1c_250MeV_BQ"+dataConfig+".root").c_str());
	TFile *f6 = TFile::Open(("../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_Run-1d_250MeV_BQ"+dataConfig+".root").c_str());

	TFile *f7 = TFile::Open(("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackReco_WORLD_250MeV_BQ"+simConfig+"_0mm.root").c_str());

	cout<<f0<<", "<<f1<<", "<<f2<<", "<<f3<<", "<<f4<<", "<<f5<<", "<<f6<<", "<<f7<<endl;

	TGraphErrors *gr0 = ResetGraph((TGraphErrors*)f0->Get("MomentumBinnedAnalysis/ParameterScans/c_vs_p_thetaY"), xmin, xmax);
	TGraphErrors *gr1 = ResetGraph((TGraphErrors*)f1->Get("MomentumBinnedAnalysis/ParameterScans/c_vs_p_thetaY"), xmin, xmax);
	TGraphErrors *gr2 = ResetGraph((TGraphErrors*)f2->Get("MomentumBinnedAnalysis/ParameterScans/S0S12S18_c_vs_p_thetaY"), xmin, xmax);
	TGraphErrors *gr3 = ResetGraph((TGraphErrors*)f3->Get("MomentumBinnedAnalysis/ParameterScans/S12S18_c_vs_p"), xmin, xmax);
	TGraphErrors *gr4 = ResetGraph((TGraphErrors*)f4->Get("MomentumBinnedAnalysis/ParameterScans/S12S18_c_vs_p"), xmin, xmax);
	TGraphErrors *gr5 = ResetGraph((TGraphErrors*)f5->Get("MomentumBinnedAnalysis/ParameterScans/S12S18_c_vs_p"), xmin, xmax);
	TGraphErrors *gr6 = ResetGraph((TGraphErrors*)f6->Get("MomentumBinnedAnalysis/ParameterScans/S12S18_c_vs_p"), xmin, xmax);

	//TGraphErrors *gr7 = ResetGraph((TGraphErrors*)f7->Get("MomentumBinnedAnalysis/ParameterScans/S12_c_vs_p"), xmin, xmax);
	//TGraphErrors *gr8 = ResetGraph((TGraphErrors*)f7->Get("MomentumBinnedAnalysis/ParameterScans/S18_c_vs_p"), xmin, xmax);

	cout<<gr1<<", "<<gr2<<", "<<gr3<<", "<<gr4<<", "<<gr5<<", "<<gr6<<", "<<endl;//gr7<<", "<<gr8<<endl;

	DrawSimOverlay(gr0, gr1, gr2, "../Images/MC/dMu/5.4e-18/VerticalOffset/verticalOffsetIllustrationSimOnly"+dataConfig, -1, 1);
	DrawOverlay(gr0, gr1, gr2, gr3, gr4, gr5, gr6, "../Images/MC/dMu/5.4e-18/VerticalOffset/verticalOffsetIllustration"+dataConfig, -1, 1);
	
	// Very sloppy
	DrawStationOverlay(f3, "Run-1a", "../Images/MC/dMu/5.4e-18/VerticalOffset/verticalOffsetStationComp_Run-1a"+dataConfig, -1, 1, true);
	DrawStationOverlay(f4, "Run-1b", "../Images/MC/dMu/5.4e-18/VerticalOffset/verticalOffsetStationComp_Run-1b"+dataConfig, -1, 1, true);
	DrawStationOverlay(f5, "Run-1c", "../Images/MC/dMu/5.4e-18/VerticalOffset/verticalOffsetStationComp_Run-1c"+dataConfig, -1, 1, true);
	DrawStationOverlay(f6, "Run-1d", "../Images/MC/dMu/5.4e-18/VerticalOffset/verticalOffsetStationComp_Run-1d"+dataConfig, -1, 1, true);

	DrawStationOverlay(f7, "0 mm", "../Images/MC/dMu/5.4e-18/VerticalOffset/verticalOffsetStationComp_0mm"+simConfig, -1, 1, false);

	f0->Close();
	f1->Close();
	f2->Close();
	f3->Close();
	f4->Close();
	f5->Close();
	f6->Close();
	f7->Close();

	return;

} */

void DrawOverlay(vector<TGraphErrors*> gr_sim_, vector<TGraphErrors*> gr_data_, string title, string fname, double ymin, double ymax) { 

  	cout<<"---> Drawing offsets"<<endl;

  	TCanvas *c = new TCanvas("c","",800,600);
  	TLegend *l = new TLegend(0.15, 0.55, 0.89, 0.89); 
  	l->SetBorderSize(0);
  	l->SetTextSize(24);
  	l->SetTextFont(44);
  	//l->SetNColumns(2);

  	gr_sim_.at(0)->GetYaxis()->SetRangeUser(ymin, ymax);
  	gr_sim_.at(0)->GetXaxis()->SetTitleSize(.04);
  	gr_sim_.at(0)->GetYaxis()->SetTitleSize(.04);
  	gr_sim_.at(0)->GetXaxis()->SetTitleOffset(1.1);
  	gr_sim_.at(0)->GetYaxis()->SetTitleOffset(1.15);
  	gr_sim_.at(0)->GetXaxis()->CenterTitle(true);
  	gr_sim_.at(0)->GetYaxis()->CenterTitle(true);
  	gr_sim_.at(0)->GetYaxis()->SetMaxDigits(4);
  	gr_sim_.at(0)->SetTitle(title.c_str());
  	gr_sim_.at(0)->SetMarkerColor(kBlack);
  	gr_sim_.at(0)->SetLineColor(kBlack);
	gr_sim_.at(0)->SetMarkerStyle(20);  
 
  	gr_sim_.at(1)->SetMarkerColor(kBlack);
  	gr_sim_.at(1)->SetLineColor(kBlack);
	gr_sim_.at(1)->SetMarkerStyle(24);

  	gr_sim_.at(2)->SetMarkerColor(kBlue);
  	gr_sim_.at(2)->SetLineColor(kBlue);
	gr_sim_.at(2)->SetMarkerStyle(24); 

  	gr_sim_.at(3)->SetMarkerColor(kOrange+7);
  	gr_sim_.at(3)->SetLineColor(kOrange+7);
	gr_sim_.at(3)->SetMarkerStyle(24); 

  	gr_sim_.at(4)->SetMarkerColor(kGreen-3);
  	gr_sim_.at(4)->SetLineColor(kGreen-3);
	gr_sim_.at(4)->SetMarkerStyle(24); 

  	gr_sim_.at(5)->SetMarkerColor(kMagenta+2);
  	gr_sim_.at(5)->SetLineColor(kMagenta+2);
	gr_sim_.at(5)->SetMarkerStyle(24); 

  	gr_data_.at(0)->SetMarkerColor(kBlue);
  	gr_data_.at(0)->SetLineColor(kBlue);
	gr_data_.at(0)->SetMarkerStyle(23);

  	gr_data_.at(1)->SetMarkerColor(kOrange+7);
  	gr_data_.at(1)->SetLineColor(kOrange+7);
	gr_data_.at(1)->SetMarkerStyle(23); 
 
  	gr_data_.at(2)->SetMarkerColor(kGreen-3);
  	gr_data_.at(2)->SetLineColor(kGreen-3);
	gr_data_.at(2)->SetMarkerStyle(23); 

  	gr_data_.at(3)->SetMarkerColor(kMagenta+2);
  	gr_data_.at(3)->SetLineColor(kMagenta+2);
	gr_data_.at(3)->SetMarkerStyle(23); 

	gr_sim_.at(0)->Draw("APL");
	gr_sim_.at(1)->Draw("PL SAME");
	gr_sim_.at(2)->Draw("PL SAME");
	gr_sim_.at(3)->Draw("PL SAME");
	gr_sim_.at(4)->Draw("PL SAME");
	gr_sim_.at(5)->Draw("PL SAME");

	gr_data_.at(0)->Draw("PL SAME");
	gr_data_.at(1)->Draw("PL SAME");
	gr_data_.at(2)->Draw("PL SAME");
	gr_data_.at(3)->Draw("PL SAME");

	l->AddEntry(gr_sim_.at(0), "Sim: all decays");
	l->AddEntry(gr_sim_.at(1), "Sim: all decays (acc.)");
	l->AddEntry(gr_sim_.at(2), "Sim: all decays (acc. + Run-1a)");
	l->AddEntry(gr_sim_.at(3), "Sim: all decays (acc. + Run-1b)");
	l->AddEntry(gr_sim_.at(4), "Sim: all decays (acc. + Run-1c)");
	l->AddEntry(gr_sim_.at(5), "Sim: all decays (acc. + Run-1d)");
	l->AddEntry(gr_data_.at(0), "Data: Run-1a");
	l->AddEntry(gr_data_.at(1), "Data: Run-1b");
	l->AddEntry(gr_data_.at(2), "Data: Run-1c");
	l->AddEntry(gr_data_.at(3), "Data: Run-1d");

 	l->Draw("SAME");

  	c->SaveAs((fname+".pdf").c_str());
  	c->SaveAs((fname+".png").c_str());
  	//c->SaveAs((fname+".C").c_str());

 	delete c;

  	return;

}

void DrawTwoOverlay(TGraphErrors *gr1, TGraphErrors *gr2, string grName1, string grName2, string title, string fname, double ymin, double ymax) { 

  	cout<<"---> Drawing offsets"<<endl;

  	TCanvas *c = new TCanvas("c","",800,600);
  	TLegend *l = new TLegend(0.15, 0.79, 0.69, 0.89); 
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
  	gr1->SetTitle(title.c_str());

  	gr1->SetMarkerColor(kBlack);
  	gr1->SetLineColor(kBlack);
	gr1->SetMarkerStyle(20);  
 
   	gr2->SetMarkerColor(kRed);
  	gr2->SetLineColor(kRed);
	gr2->SetMarkerStyle(20);  

	gr1->Draw("APL");
	gr2->Draw("PL SAME");

	l->AddEntry(gr1, grName1.c_str());
	l->AddEntry(gr2, grName2.c_str());

 	l->Draw("SAME");

  	c->SaveAs((fname+".pdf").c_str());
  	c->SaveAs((fname+".png").c_str());
  	//c->SaveAs((fname+".C").c_str());

 	delete c;

  	return;

}

void Run(string stn = "S12S18") { 

	TString simPath = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_";

	vector<TString> simConfig_ = { 
								"allDecays_WORLD_250MeV_AQ_noVertCorr_full",
								"allDecays_WORLD_250MeV_AQ_noVertCorr_accWeight"+stn+"_full",
								"allDecays_WORLD_250MeV_AQ_noVertCorr_accWeight"+stn+"_full_reweight"+stn+"Run-1a",
								"allDecays_WORLD_250MeV_AQ_noVertCorr_accWeight"+stn+"_full_reweight"+stn+"Run-1b",
								"allDecays_WORLD_250MeV_AQ_noVertCorr_accWeight"+stn+"_full_reweight"+stn+"Run-1c",
								"allDecays_WORLD_250MeV_AQ_noVertCorr_accWeight"+stn+"_full_reweight"+stn+"Run-1d"
							  };

	TString dataPath = "../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_";

	vector<TString> dataConfig_ = { 
								"Run-1a_250MeV_BQ_noVertCorr",
								"Run-1b_250MeV_BQ_noVertCorr",
								"Run-1c_250MeV_BQ_noVertCorr",
								"Run-1d_250MeV_BQ_noVertCorr"
							  };

	vector<TGraphErrors*> gr_sim_; 

	for(auto& simConfig : simConfig_) {
		TFile *f_sim = TFile::Open(simPath+simConfig+".root");
		TGraphErrors *gr_sim = ResetGraph((TGraphErrors*)f_sim->Get("MomentumBinnedAnalysis/ParameterScans/c_vs_p_thetaY"), xmin, xmax);
		gr_sim_.push_back(gr_sim);
		f_sim->Close();
	}

	vector<TGraphErrors*> gr_data_; 

	for(auto& dataConfig : dataConfig_) {
		TFile *f_data = TFile::Open(dataPath+dataConfig+".root");
		TGraphErrors *gr_data = ResetGraph((TGraphErrors*)f_data->Get(("MomentumBinnedAnalysis/ParameterScans/"+stn+"_c_vs_p").c_str()), xmin, xmax);
		gr_data_.push_back(gr_data);
		f_data->Close();
	}

	// Draw them
	DrawOverlay(gr_sim_, gr_data_, stn+";Momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV", "../Images/MC/dMu/5.4e-18/VerticalOffset/"+stn+"_verticalOffsetIllustration", -1, 1);

	DrawTwoOverlay(gr_sim_.at(2), gr_data_.at(0), "Sim: all decays (acc. + Run-1a)", "Data: Run-1a", stn+";Momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV", "../Images/MC/dMu/5.4e-18/VerticalOffset/"+stn+"_verticalOffsetIllustration_Run-1a", -1, 0.25);
	DrawTwoOverlay(gr_sim_.at(3), gr_data_.at(1), "Sim: all decays (acc. + Run-1b)", "Data: Run-1b", stn+";Momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV", "../Images/MC/dMu/5.4e-18/VerticalOffset/"+stn+"_verticalOffsetIllustration_Run-1b", -1, 0.25);
	DrawTwoOverlay(gr_sim_.at(4), gr_data_.at(2), "Sim: all decays (acc. + Run-1c)", "Data: Run-1c", stn+";Momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV", "../Images/MC/dMu/5.4e-18/VerticalOffset/"+stn+"_verticalOffsetIllustration_Run-1c", -1, 0.25);
	DrawTwoOverlay(gr_sim_.at(5), gr_data_.at(3), "Sim: all decays (acc. + Run-1d)", "Data: Run-1d", stn+";Momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV", "../Images/MC/dMu/5.4e-18/VerticalOffset/"+stn+"_verticalOffsetIllustration_Run-1d", -1, 0.25);

	return;

}

void VerticalOffsetIllustration() { 

	Run("S12");
	Run("S18");
	Run("S12S18");

	//Run("_noVertCorr", "_noVertCorr");
	//Run("", "");
	//Run("_noVertCorr", "_timeVertCorr");
	//Run("");

	return;

}