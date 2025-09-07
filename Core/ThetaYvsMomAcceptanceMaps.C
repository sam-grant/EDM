// Produce theta_y vs momentum for truth quality tracks over all decays

void DrawAcceptanceWeightingMap(TH2D *map, string title, string fname) { // , TString drawOption = "COLZ") { //";Decay y-position [mm];#theta_{y} [mrad];Ratio", "../Images/MC/Acceptance/BaseHistograms/h2_thetaY_vs_Y_ratio");

	TCanvas *c = new TCanvas("c","c",800,600);

	map->SetTitle(title.c_str());
	map->SetStats(0);
	map->GetXaxis()->SetTitleSize(.04);
	map->GetYaxis()->SetTitleSize(.04);
	map->GetXaxis()->CenterTitle(1);
	map->GetYaxis()->CenterTitle(1);
	map->GetYaxis()->SetMaxDigits(4);

	map->GetZaxis()->SetTitle("Acceptance ratio");

	gStyle->SetPalette(kLightTemperature);
	c->SetRightMargin(0.13);

/*	if(drawOption == "SURF2") {
		map->GetXaxis()->SetTitleOffset(1.5);
		map->GetYaxis()->SetTitleOffset(1.6);
	} else{ 
		map->GetXaxis()->SetTitleOffset(1.1);
		map->GetYaxis()->SetTitleOffset(1.1);
		gStyle->SetPaintTextFormat("4.2f");
		gPad->Update();
	}*/

	map->GetZaxis()->CenterTitle(1);

	//map->GetXaxis()->SetRangeUser(-60, 60);
	//map->GetYaxis()->SetRangeUser(-100, 100);
	map->Draw("COLZ");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;
}

void DrawTH1(TH1D *hist, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());
	hist->SetStats(0);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.1);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);

	hist->SetLineColor(kBlack);
	hist->SetMarkerColor(kBlack);
	//**/hist->GetYaxis()->SetRangeUser(-100,100);

	hist->Draw("E");

	// For some reason you need to update the pad when dealing with cloned histograms
	c->Update();
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}


void DrawTH2(TH2D *hist, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());
	hist->SetStats(0);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.1);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);

	hist->GetYaxis()->SetRangeUser(-100,100);

	gStyle->SetPalette(kRainBow);
	c->SetRightMargin(0.13);

	hist->Draw("COLZ");

	// For some reason you need to update the pad when dealing with cloned histograms
	c->Update();
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

TH2D *AcceptanceWeightingMap(TH2D *h1, TH2D *h2, int rebin = 1) {

	// Clone before rebinning 
	TH2D *h1_clone = (TH2D*)h1->Clone("h1_clone");
	TH2D *h2_clone = (TH2D*)h2->Clone("h2_clone");

	// Rebin before normalising
	h1_clone->RebinX(rebin);
	h2_clone->RebinX(rebin);

	// Create structure to store sum of squares of weights.
	if (h1_clone->GetSumw2N() == 0) h1_clone->Sumw2(kTRUE);
 	if (h2_clone->GetSumw2N() == 0) h2_clone->Sumw2(kTRUE);

	// Draw hists
  	//h1_clone->GetXaxis()->SetRangeUser(-60, 60);
  	//h1_clone->GetYaxis()->SetRangeUser(-100, 100);
  	//h2_clone->GetXaxis()->SetRangeUser(-60, 60);
  	//h2_clone->GetYaxis()->SetRangeUser(-100, 100);

	DrawTH2(h1_clone, "Decays;Momentum [MeV];#theta_{y} [mrad] / 100 MeV", "../Images/MC/Acceptance/ThetaYvsMomentum/h2_thetaY_vs_p_decays");
	DrawTH2(h2_clone, "Tracks;Momentum [MeV];#theta_{y} [mrad] / 100 MeV", "../Images/MC/Acceptance/ThetaYvsMomentum/h2_thetaY_vs_p_tracks");

	TH2D *ratio = (TH2D*)h2_clone->Clone("WeightMap");
	ratio->Divide(h1_clone);

	int x, y, z;
	ratio->GetBinXYZ(ratio->GetMaximumBin(), x, y, z);
	ratio->Scale(1./ratio->GetBinContent(ratio->GetMaximumBin()));

	//DrawTH2(ratio, "Tracks;Momentum [MeV];#theta_{y} [mrad] / 50 MeV", "../Images/MC/Acceptance/ThetaYvsMomentum/ratio_test");
	
	return ratio;

}

void Run() { 

	TFile *fout = new TFile("../Plots/MC/Acceptance/Plots/ThetaYvsMomAcceptance.root", "RECREATE");

	fout->cd(); fout->mkdir("2D_ratio"); fout->mkdir("1D_projY");

	TString finName1 = "../Plots/MC/dMu/5.4e-18/Plots/thetaYvsMomentum_allDecays_WORLD_250MeV_AQ_noVertCorr.root";
	TString finName2 = "../Plots/MC/dMu/5.4e-18/Plots/thetaYvsMomentum_trackTruth_WORLD_250MeV_BQ_noVertCorr.root";

	TFile *fin1 = TFile::Open(finName1);
	TFile *fin2 = TFile::Open(finName2);

	cout<<"---> Opened "<<finName1<<" "<<fin1<<" and "<<finName2<<" "<<fin2<<endl;

	TH2D *h1 = (TH2D*)fin1->Get("SanityPlots/ThetaY_vs_Momentum");
	TH2D *h2 = (TH2D*)fin2->Get("SanityPlots/S0S12S18_ThetaY_vs_Momentum");

	cout<<"---> Got histograms "<<h1<<" and "<<h2<<endl;

	TH2D *acceptanceMap = AcceptanceWeightingMap(h1, h2, 2);

	DrawAcceptanceWeightingMap(acceptanceMap, ";Momentum [MeV];#theta_{y} [mrad] / 100 MeV", "../Images/MC/Acceptance/ThetaYvsMomentum/thetaY_vs_p_map");

	fout->cd("2D_ratio");
	acceptanceMap->Write();

	//acceptanceMap->Draw("COLZ");

	int pLo = 0;
	int pHi = pLo + 100;

	fout->cd("1D_projY");

	for(int i(0); i<acceptanceMap->GetNbinsX(); i++) { 

		TH1D *projY = acceptanceMap->ProjectionY(("projY_"+to_string(i)).c_str(), i+1, i+1);

		projY->GetXaxis()->SetRangeUser(-80, 80);

		DrawTH1(projY, to_string(i*100)+" < p [MeV] < "+to_string((i+1)*100), "../Images/MC/Acceptance/ThetaYvsMomentum/Projections/thetaY_projY_"+to_string(i));

		projY->Write();

	}

	/*	TH1D *projY = acceptanceMap->ProjectionY();//"projY");//, i+1, i+1);

	new TCanvas();
	projY->Draw();*/

	//DrawTH2(acceptanceMap, "Tracks;Momentum [MeV];#theta_{y} [mrad] / 50 MeV", "../Images/MC/Acceptance/ThetaYvsMomentum/ratio_test");

	//

	/*for(int i(0); i<acceptanceMap->GetNbinsX(); i++) { 

		TH1D *projY = acceptanceMap->ProjectionY("projY");//, i+1, i+1);

		projY->Draw();

		break;
	}*/

	fin1->Close();
	fin2->Close();

	fout->Write();

	cout<<"---> Written ../Plots/MC/Acceptance/Plots/ThetaYvsMomAcceptance.root "<<fout<<endl;

	return;
}

void ThetaYvsMomAcceptanceMaps() { 

	Run();	

	return;
}