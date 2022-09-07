// Show new vertical angle ratios and residuals with/without reweighting 
// Show A_EDM vs. momentum with/without reweighting 
// Show the change in scale factor 

// Also need to look at the theta_y distributions in the all decays reweighted and compare them to truth verices, is this the source of the difference there?

#include "Utils.h"

void DrawRatioPlot1D(TH1D *h1, TH1D *h2, std::string dataset, std::string title, string leg1, string leg2, std::string fname, double xmin, double xmax) { 

	// Mother canvas
	TCanvas *c = new TCanvas("c", "c", 800, 600);

	c->Draw(); 

	// Main pad, not sure if this is needed anymore... 
	TPad *p1 = new TPad("p1", "p1", 0., 0., 1., 1.); //, .89);
	p1->Draw();
	p1->cd();

	gStyle->SetOptStat(0);

	//h1_decays->SetTitle(title);	
	h1->GetXaxis()->SetTitleSize(.04);
	h1->GetYaxis()->SetTitleSize(.04);
	h1->GetXaxis()->SetTitleOffset(1.1);
	h1->GetYaxis()->SetTitleOffset(1.1);
	h1->GetXaxis()->CenterTitle(1);
	h1->GetYaxis()->CenterTitle(1);
	h1->GetYaxis()->SetMaxDigits(4);

	h1->SetLineColor(kBlue);
	h2->SetLineColor(kRed);
	h1->SetLineWidth(2);
	h2->SetLineWidth(2);
	h1->SetMarkerColor(kBlue);
	h2->SetMarkerColor(kRed);

	// TRatioPlot is a nightmare.
	TRatioPlot *rp = new TRatioPlot(h1, h2);

	// This must come before draw
	rp->SetH1DrawOpt("E");
	rp->SetH2DrawOpt("E");

	rp->Draw();

	h1->SetTitle(title.c_str());
	rp->GetUpperRefYaxis()->SetTitle("Normalised entries");
	rp->GetLowerRefYaxis()->SetTitle("Ratio");
	rp->GetXaxis()->SetTitle("#theta_{y} [mrad]");

	rp->GetLowerRefYaxis()->CenterTitle(1);
	rp->GetLowerRefXaxis()->CenterTitle(1);
	rp->GetUpperRefYaxis()->CenterTitle(1);

	rp->GetLowerRefYaxis()->SetRangeUser(0, 1.5); 
	rp->GetUpperRefXaxis()->SetRangeUser(xmin, xmax); 
	rp->GetLowerRefXaxis()->SetRangeUser(xmin, xmax); 

	c->Update();

	TLegend *l = new TLegend(0.12, 0.79, .40, .89);
	l->SetBorderSize(0);
	l->SetTextSize(24);
	l->SetTextFont(44);
	l->AddEntry(h1, leg1.c_str());// ("Data: "+dataset).c_str());
	l->AddEntry(h2, leg2.c_str());// "Sim: reco vertices (weighted)");
	l->Draw("SAME");

	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".pdf").c_str());

	delete p1;
	delete l;
	delete rp;
	delete c;

	return; 

}

void Run(string dataset = "Run-1a", int rebin = 1) { 

	// First, weighted ratio plots 

	string finNameSimWeighted = "../Plots/MC/dMu/5.4e-18/Plots/edmPlots_trackReco_WORLD_250MeV_BQ_noVertCorr_full.root";//_"+dataset+"_accWeight.root";
	string finNameData = "../Plots/Data/dMu/Run-1/Plots/edmPlots_"+dataset+"_250MeV_1000_2500MeV_randomised_BQ_noVertCorr.root";//../Plots/Data/dMu/Run-1/Plots/thetaYvsMomentum_"+dataset+"_BQ_noVertCorr.root";
	if(dataset=="Run-1d") finNameData = "../Plots/Data/dMu/Run-1/Plots/edmPlots_"+dataset+"_250MeV_1000_2500MeV_50usStartTime_randomised_BQ_noVertCorr.root";//../Plots/Data/dMu/Run-1/Plots/thetaYvsMomentum_"+dataset+"_BQ_noVertCorr.root";

	//TFile *finSimWeighted = TFile::Open(finNameSimWeighted.c_str());
	TFile *finSimWeighted = TFile::Open(finNameSimWeighted.c_str());
	TFile *finData = TFile::Open(finNameData.c_str());

	cout<<"---> Opened files "<<finNameSimWeighted<<", "<<finSimWeighted<<", "<<finNameData<<", "<<finData<<endl;

	string stns[] = {"S12S18"}; // {"S0S12S18", "S12S18", "S0", "S12", "S18"}; 
	int n_stn = sizeof(stns)/sizeof(stns[0]);

  	int step = 250;
  	int nSlices = PMAX/step;

  	// Loop thro' stations

  	for (int i_stn = 0; i_stn < n_stn; i_stn++) { 

  		cout<<"---> Running station "<<stns[i_stn]<<endl; 

	  	// Loop through momenta

	    for ( int i_slice = 0; i_slice < nSlices; i_slice++ ) { 

	    	int lo = 0 + i_slice*step; 
	    	int hi = step + i_slice*step;

	    	TH1D *h_thetaY_sim = (TH1D*)finSimWeighted->Get(("MomentumBinnedAnalysis/"+stns[i_stn]+"_ThetaY_"+to_string(lo)+"_"+to_string(hi)).c_str());
	    	TH1D *h_thetaY_data = (TH1D*)finData->Get(("MomentumBinnedAnalysis/"+stns[i_stn]+"_ThetaY_"+to_string(lo)+"_"+to_string(hi)).c_str());

	    	cout<<"---> Got histograms: "<<h_thetaY_sim<<", "<<h_thetaY_data<<endl;

	    	// Normalise

	    	if (h_thetaY_sim->GetSumw2N() == 0) h_thetaY_sim->Sumw2(kTRUE);
 			if (h_thetaY_data->GetSumw2N() == 0) h_thetaY_data->Sumw2(kTRUE);

			h_thetaY_sim->Scale(1./h_thetaY_sim->GetMaximum());
			h_thetaY_data->Scale(1./h_thetaY_data->GetMaximum());

	      	// Make ratio plot

	     	//DrawRatioPlot1D(h_thetaY_data, h_thetaY_sim, dataset, to_string(lo)+"-"+to_string(hi)+" MeV", "../Images/VerticalAngleDists/Projections/"+stns[i_stn]+"_thetaY_weighted_ratio_slice_"+to_string(lo)+"_"+to_string(hi)+"MeV_trackReco_"+dataset, -60, 60);
	     	DrawRatioPlot1D(h_thetaY_data, h_thetaY_sim, dataset, to_string(lo)+"-"+to_string(hi)+" MeV", "Data: "+dataset, "Sim: reco vertices", "../Images/VerticalAngleDists/Projections/"+stns[i_stn]+"_thetaY_ratio_slice_"+to_string(lo)+"_"+to_string(hi)+"MeV_trackRecoNoWeight_"+dataset, -60, 60);

	  	}

	}

	finSimWeighted->Close();
	finData->Close();

	return;

}

void Run2(string dataset = "Run-1a", int rebin = 1) { 

	// First, weighted ratio plots 

	string finNameTRWeighted = "../Plots/MC/dMu/5.4e-18/Plots/edmPlots_trackReco_WORLD_250MeV_BQ_noVertCorr_full.root";//+dataset+"_accWeight.root";
	string finNameADWeighted  = "../../copy_dump/plots_000_S12S18.root";//../Plots/MC/dMu/5.4e-18/Plots/edmPlots_allDecays_WORLD_250MeV_AQ_noVertCorr_accWeightS12S18_full.root"; // "../Plots/Data/dMu/Run-1/Plots/edmPlots_"+dataset+"_250MeV_1000_2500MeV_randomised_BQ_noVertCorr.root";//../Plots/Data/dMu/Run-1/Plots/thetaYvsMomentum_"+dataset+"_BQ_noVertCorr.root";
	//if(dataset=="Run-1d") finNameData = "../Plots/Data/dMu/Run-1/Plots/edmPlots_"+dataset+"_250MeV_1000_2500MeV_50usStartTime_randomised_BQ_noVertCorr.root";//../Plots/Data/dMu/Run-1/Plots/thetaYvsMomentum_"+dataset+"_BQ_noVertCorr.root";

	//TFile *finSimWeighted = TFile::Open(finNameSimWeighted.c_str());
	TFile *finTRWeighted = TFile::Open(finNameTRWeighted.c_str());
	TFile *finADWeighted = TFile::Open(finNameADWeighted.c_str());

	cout<<"---> Opened files "<<finNameTRWeighted<<", "<<finTRWeighted<<", "<<finNameADWeighted<<", "<<finADWeighted<<endl;

	string stns[] = {"S12S18"}; // {"S0S12S18", "S12S18", "S0", "S12", "S18"}; 
	int n_stn = sizeof(stns)/sizeof(stns[0]);

  	int step = 250;
  	int nSlices = PMAX/step;

  	// Loop thro' stations

  	for (int i_stn = 0; i_stn < n_stn; i_stn++) { 

  		cout<<"---> Running station "<<stns[i_stn]<<endl; 

	  	// Loop through momenta

	    for ( int i_slice = 0; i_slice < nSlices; i_slice++ ) { 

	    	int lo = 0 + i_slice*step; 
	    	int hi = step + i_slice*step;

	    	TH1D *h_thetaY_TR = (TH1D*)finTRWeighted->Get(("MomentumBinnedAnalysis/"+stns[i_stn]+"_ThetaY_"+to_string(lo)+"_"+to_string(hi)).c_str());
	    	TH1D *h_thetaY_AD = (TH1D*)finADWeighted->Get(("MomentumBinnedAnalysis/ThetaY_"+to_string(lo)+"_"+to_string(hi)).c_str());

	    	cout<<"---> Got histograms: "<<h_thetaY_TR<<", "<<h_thetaY_AD<<endl;

	    	// Normalise

	    	if (h_thetaY_TR->GetSumw2N() == 0) h_thetaY_TR->Sumw2(kTRUE);
 			if (h_thetaY_AD->GetSumw2N() == 0) h_thetaY_AD->Sumw2(kTRUE);

			h_thetaY_TR->Scale(1./h_thetaY_TR->GetMaximum());
			h_thetaY_AD->Scale(1./h_thetaY_AD->GetMaximum());

	      	// Make ratio plot

	     	//DrawRatioPlot1D(h_thetaY_data, h_thetaY_sim, dataset, to_string(lo)+"-"+to_string(hi)+" MeV", "../Images/VerticalAngleDists/Projections/"+stns[i_stn]+"_thetaY_weighted_ratio_slice_"+to_string(lo)+"_"+to_string(hi)+"MeV_trackReco_"+dataset, -60, 60);
	     	//DrawRatioPlot1D(h_thetaY_AD, h_thetaY_TR, dataset, to_string(lo)+"-"+to_string(hi)+" MeV", "All decays (weighted)", "Reco vertices ("+dataset+" weighted)", "../Images/VerticalAngleDists/Projections/"+stns[i_stn]+"_thetaY_ratio_slice_"+to_string(lo)+"_"+to_string(hi)+"MeV_TR_vs_AD_"+dataset, -60, 60);
	     	DrawRatioPlot1D(h_thetaY_AD, h_thetaY_TR, dataset, to_string(lo)+"-"+to_string(hi)+" MeV", "All decays (weighted)", "Reco vertices", "../Images/VerticalAngleDists/Projections/"+stns[i_stn]+"_thetaY_ratio_slice_"+to_string(lo)+"_"+to_string(hi)+"MeV_TRnoW_vs_AD_"+dataset, -60, 60);

	  	}

	}

	finTRWeighted->Close();
	finADWeighted->Close();

	return;

}


void VerticalAngleReweightingResults() { 

	Run2();

	return;

}