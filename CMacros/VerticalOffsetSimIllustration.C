void DrawOffsetOverlay(vector<TGraphErrors*> gr_, vector<string> label_, string title, string fname, double xmin, double xmax, double ymin, double ymax) { 

  	cout<<"---> Drawing per station offsets"<<endl;

  	TCanvas *c = new TCanvas("c","",800,600);

  	gr_.at(0)->GetXaxis()->SetRangeUser(xmin, xmax);
  	gr_.at(0)->GetYaxis()->SetRangeUser(ymin, ymax);

  	gr_.at(0)->SetTitle(title.c_str());
  	gr_.at(0)->GetXaxis()->SetTitleSize(.04);
  	gr_.at(0)->GetYaxis()->SetTitleSize(.04);
  	gr_.at(0)->GetXaxis()->SetTitleOffset(1.1);
  	gr_.at(0)->GetYaxis()->SetTitleOffset(1.15);
  	gr_.at(0)->GetXaxis()->CenterTitle(true);
  	gr_.at(0)->GetYaxis()->CenterTitle(true);
  	gr_.at(0)->GetYaxis()->SetMaxDigits(4);

  	gr_.at(0)->SetTitle(title.c_str());//";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV");

  	gr_.at(0)->SetMarkerColor(kBlack);
  	gr_.at(0)->SetLineColor(kBlack);
	gr_.at(0)->SetMarkerStyle(20); 

  	gr_.at(1)->SetMarkerColor(kRed);
  	gr_.at(1)->SetLineColor(kRed);
	gr_.at(1)->SetMarkerStyle(20);  

/*	if(gr_.size() <= 2) {

		gr_.at(1)->SetMarkerColor(kRed);
  		gr_.at(1)->SetLineColor(kRed);
		gr_.at(1)->SetMarkerStyle(20);  

	}
*/
	gr_.at(0)->Draw("AP");
	gr_.at(1)->Draw("P SAME");

	//TLegend *l = new TLegend(0.15, 0.75, 0.50, 0.89); 
	//TLegend *l = new TLegend(0.66, 0.18, 0.85, 0.35);
	TLegend *l = new TLegend(0.63, 0.20, 0.85, 0.33);

	if(gr_.size() > 2) { 
  		gr_.at(2)->SetMarkerColor(kBlue);
  		gr_.at(2)->SetLineColor(kBlue);
		gr_.at(2)->SetMarkerStyle(20);   
		gr_.at(2)->Draw("P SAME");

		gPad->Update();
		l->SetX1NDC(0.66);
		l->SetY1NDC(0.18);
		l->SetX2NDC(0.85);
		l->SetY2NDC(0.35);

	}

//  	

  	//TLegend *l = new TLegend(0.66, 0.18, 0.85, 0.35); 
  	l->SetBorderSize(0);
  	l->SetTextSize(24);
  	l->SetTextFont(44);

  	for(int i(0); i<gr_.size(); i++) { 
  		l->AddEntry(gr_.at(i), (label_.at(i)).c_str());
  	}

 	l->Draw("SAME");

 	//fname = fname+"_S"+stn;

  	c->SaveAs((fname+".pdf").c_str());
  	c->SaveAs((fname+".png").c_str());
  	c->SaveAs((fname+".C").c_str());

 	delete c;

  	return;

}



void VerticalOffsetSimIllustration() { 

	TFile *fin1 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr_full.root");
	TFile *fin2 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr_full.root");
	TFile *fin3 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackReco_WORLD_250MeV_BQ_noVertCorr_full.root");

	TFile *fin4 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackReco_WORLD_250MeV_AQ_noVertCorr.root"); // currently no full file
	

	cout<<"---> "<<fin1<<", "<<fin2<<", "<<fin3<<endl;

	TGraphErrors *gr1 = (TGraphErrors*)fin1->Get("MomentumBinnedAnalysis/ParameterScans/c_vs_p_thetaY");
	TGraphErrors *gr2 = (TGraphErrors*)fin2->Get("MomentumBinnedAnalysis/ParameterScans/S12S18_c_vs_p_thetaY");
	TGraphErrors *gr3 = (TGraphErrors*)fin3->Get("MomentumBinnedAnalysis/ParameterScans/S12S18_c_vs_p_thetaY");
	
/*	
	vector<TGraphErrors*> gr_ = {gr1, gr2, gr3};
	vector<string> label_ = {"All decay", "Truth vertices", "Reco vertices"};
*/
	
	vector<TGraphErrors*> gr_ = {gr1, gr3};
	vector<string> label_ = {"All decays", "Reco vertices"};

	DrawOffsetOverlay(gr_, label_, ";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV", "../Images/MC/VerticalOffsetIllustration/VerticalOffsetSimOverlay", 500, 3000, -0.65, 0.1);

	TGraphErrors *grS0 = (TGraphErrors*)fin3->Get("MomentumBinnedAnalysis/ParameterScans/S0_c_vs_p_thetaY");
	TGraphErrors *grS12 = (TGraphErrors*)fin3->Get("MomentumBinnedAnalysis/ParameterScans/S12_c_vs_p_thetaY");
	TGraphErrors *grS18 = (TGraphErrors*)fin3->Get("MomentumBinnedAnalysis/ParameterScans/S18_c_vs_p_thetaY");

	cout<<gr1<<", "<<gr2<<", "<<gr3<<", "<<grS0<<", "<<grS12<<", "<<grS18<<endl;

	gr_ = {grS0, grS12, grS18};
	label_ = {"Station 0", "Station 12", "Station 18"};

	DrawOffsetOverlay(gr_, label_, ";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV", "../Images/MC/VerticalOffsetIllustration/VerticalOffsetSimStationOverlay", 500, 2900, -0.75, 0.2);


	// Vertex quality exaggerates this effect
	TGraphErrors *grS0_2 = (TGraphErrors*)fin4->Get("MomentumBinnedAnalysis/ParameterScans/S0_c_vs_p_thetaY");

	gr_ = {grS0_2, grS0};
	label_ = {"No quality", "Vertex quality"};//Station 12", "Station 18"};

	DrawOffsetOverlay(gr_, label_, "Station 0;Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV", "../Images/MC/VerticalOffsetIllustration/VerticalOffsetSimS0QualOverlay", 500, 2900, -0.5, 0.15);


	fin1->Close();
	fin2->Close();
	fin3->Close();


	return;

}