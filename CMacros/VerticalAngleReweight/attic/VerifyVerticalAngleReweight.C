/*

Samuel Grant

Verify vertical angle width reweighting.

Compare data and unweighted/reweighted simulation.

*/


// Just plot all the Run-1 weighted A_EDM and scale factor graphs
// Put all the shifts in scale factor into a file 
// We use this file in GetTiltAngle.C

// Momentum
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

// Gave up on the idea of loops today

void Run(string stn) { 

    // TODO: not the best way to handle this if you're also including data
    vector<string> suffix_ = {"", "_reweight"+stn+"Run-1a", "_reweight"+stn+"Run-1b", "_reweight"+stn+"Run-1c", "_reweight"+stn+"Run-1d"};

    vector<TGraphErrors*> gr_thetaY_; vector<TGraphErrors*> gr_thetaY_RMS_;
    vector<TGraphErrors*> gr_thetaY_allDecays_; vector<TGraphErrors*> gr_thetaY_RMS_allDecays_;
    vector<TGraphErrors*> gr_thetaY_trackTruth_; vector<TGraphErrors*> gr_thetaY_RMS_trackTruth_;

    for (auto& suffix : suffix_) {

        // TODO: add data files

        // Decay sim and track sim
        TFile *f_allDecays = TFile::Open("../../Plots/Sim/5.4e-18/VerticalAngleFits/edmFits_unblinded_allDecays_LAB_250MeV_noQ_randCorr"+suffix".root"); 
        TFile *f_trackTruth = TFile::Open("../../Plots/Sim/5.4e-18/VerticalAngleFits/edmFits_unblinded_trackTruth_LAB_250MeV_BQ_randCorr"+suffix".root"); 

        // Mean theta_y
        TGraphErrors *gr_thetaY_allDecays = ResetGraph( (TGraphErrors*)f_allDecays->Get("MomentumBinnedAnalysis/ParameterScans/thetaY_mean_vs_p_thetaY"), xmin, xmax );
        TGraphErrors *gr_thetaY_trackTruth = ResetGraph( (TGraphErrors*)f_trackTruth->Get("MomentumBinnedAnalysis/ParameterScans/"+stn+"_thetaY_mean_vs_p"), xmin, xmax );

        // theta_y RMS
        TGraphErrors *gr_thetaY_RMS_allDecays = ResetGraph( (TGraphErrors*)f_allDecays->Get("MomentumBinnedAnalysis/ParameterScans/thetaY_RMS_vs_p_thetaY"), xmin, xmax );
        TGraphErrors *gr_thetaY_RMS_trackTruth = ResetGraph( (TGraphErrors*)f_trackTruth->Get("MomentumBinnedAnalysis/ParameterScans/"+stn+"_thetaY_RMS_vs_p"), xmin, xmax );
       
        gr_thetaY_.push_back()

    } 



	TFile *f0 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr_full.root");
	TFile *f1 = TFile::Open(("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr_full_reweight"+stn+"Run-1a.root").c_str());
	TFile *f2 = TFile::Open(("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr_full_reweight"+stn+"Run-1b.root").c_str());
	TFile *f3 = TFile::Open(("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr_full_reweight"+stn+"Run-1c.root").c_str());
	TFile *f4 = TFile::Open(("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr_full_reweight"+stn+"Run-1d.root").c_str());

	TFile *f5 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr_full.root");
	TFile *f6 = TFile::Open(("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr_full_reweight"+stn+"Run-1a.root").c_str());
	TFile *f7 = TFile::Open(("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr_full_reweight"+stn+"Run-1b.root").c_str());
	TFile *f8 = TFile::Open(("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr_full_reweight"+stn+"Run-1c.root").c_str());
	TFile *f9 = TFile::Open(("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr_full_reweight"+stn+"Run-1d.root").c_str());

	//TFile *f5 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr_full.root");
	//TFile *f6 = TFile::Open(("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr_full_reweight"+stn+"Run-1a.root").c_str());
	//TFile *f7 = TFile::Open(("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr_full_reweight"+stn+"Run-1b.root").c_str());
	//TFile *f8 = TFile::Open(("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr_full_reweight"+stn+"Run-1c.root").c_str());
	//TFile *f9 = TFile::Open(("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr_full_reweight"+stn+"Run-1d.root").c_str());

        TGraphErrors *gr0 = ResetGraph( (TGraphErrors*)f0->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY"), xmin, xmax );
        TGraphErrors *gr1 = ResetGraph( (TGraphErrors*)f1->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY"), xmin, xmax );
	TGraphErrors *gr2 = ResetGraph( (TGraphErrors*)f2->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY"), xmin, xmax );
	TGraphErrors *gr3 = ResetGraph( (TGraphErrors*)f3->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY"), xmin, xmax );
	TGraphErrors *gr4 = ResetGraph( (TGraphErrors*)f4->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY"), xmin, xmax );

	TGraphErrors *gr5 = ResetGraph( (TGraphErrors*)f5->Get("MomentumBinnedAnalysis/ParameterScans/S12S18_AEDM_vs_p_thetaY"), xmin, xmax );
	TGraphErrors *gr6 = ResetGraph( (TGraphErrors*)f6->Get("MomentumBinnedAnalysis/ParameterScans/S12S18_AEDM_vs_p_thetaY"), xmin, xmax );
	TGraphErrors *gr7 = ResetGraph( (TGraphErrors*)f7->Get("MomentumBinnedAnalysis/ParameterScans/S12S18_AEDM_vs_p_thetaY"), xmin, xmax );
	TGraphErrors *gr8 = ResetGraph( (TGraphErrors*)f8->Get("MomentumBinnedAnalysis/ParameterScans/S12S18_AEDM_vs_p_thetaY"), xmin, xmax );
	TGraphErrors *gr9 = ResetGraph( (TGraphErrors*)f9->Get("MomentumBinnedAnalysis/ParameterScans/S12S18_AEDM_vs_p_thetaY"), xmin, xmax );
	
	TCanvas *c1 = new TCanvas("c1", "c1", 800, 600);

	//gr0->SetTitle(title.c_str());
	gr5->SetTitle(";Momentum [MeV];A_{EDM} [mrad]");

	gr5->GetYaxis()->SetRangeUser(0, 0.375);
	gr5->GetXaxis()->SetTitleSize(.04);
	gr5->GetYaxis()->SetTitleSize(.04);
	gr5->GetXaxis()->SetTitleOffset(1.1);
	gr5->GetYaxis()->SetTitleOffset(1.2);
	gr5->GetXaxis()->CenterTitle(true);
	gr5->GetYaxis()->CenterTitle(true);
	gr5->GetYaxis()->SetMaxDigits(4);

	gr0->SetMarkerStyle(24); 
	gr1->SetMarkerStyle(24); 
	gr2->SetMarkerStyle(24); 
	gr3->SetMarkerStyle(24); 
	gr4->SetMarkerStyle(24); 

  	gr0->SetMarkerColor(kBlack);
  	gr0->SetLineColor(kBlack);

  	gr1->SetMarkerColor(kBlue);
  	gr1->SetLineColor(kBlue);

  	gr2->SetMarkerColor(kOrange+7);
  	gr2->SetLineColor(kOrange+7);

   	gr3->SetMarkerColor(kGreen-3);
  	gr3->SetLineColor(kGreen-3);
  	
  	gr4->SetMarkerColor(kMagenta+2);
  	gr4->SetLineColor(kMagenta+2);

  	gr5->SetMarkerColor(kBlack);
  	gr5->SetLineColor(kBlack);
  	gr5->SetMarkerStyle(20); 

   	gr6->SetMarkerColor(kBlue);
  	gr6->SetLineColor(kBlue);
  	gr6->SetMarkerStyle(20);  	

   	gr7->SetMarkerColor(kOrange+7);
  	gr7->SetLineColor(kOrange+7);
  	gr7->SetMarkerStyle(20);  		

   	gr8->SetMarkerColor(kGreen-3);
  	gr8->SetLineColor(kGreen-3);
  	gr8->SetMarkerStyle(20);  		

   	gr9->SetMarkerColor(kMagenta+2);
  	gr9->SetLineColor(kMagenta+2);
  	gr9->SetMarkerStyle(20);  	

  	gr5->Draw("AP");
	gr6->Draw("P SAME");
	gr7->Draw("P SAME");
	gr8->Draw("P SAME");
	gr9->Draw("P SAME");

  	gr0->Draw("P SAME");
  	gr1->Draw("P SAME");
  	gr2->Draw("P SAME");
  	gr3->Draw("P SAME");
  	gr4->Draw("P SAME");

	TLegend *l1 = new TLegend(.325, .65, .89, .89);
	l1->SetBorderSize(0);
	l1->SetTextSize(24);
	l1->SetTextFont(44);
		
	// l1->SetHeader("Weighting", "C");
	l1->SetNColumns(2);

	l1->AddEntry(gr5, "Truth vertices (TV)");
	l1->AddEntry(gr0, "All decays (AD)");

	l1->AddEntry(gr6, "TV (Run-1a)");
	l1->AddEntry(gr1, "AD (Run-1a)");

	l1->AddEntry(gr7, "TV (Run-1b)");
	l1->AddEntry(gr2, "AD (Run-1b)");

	l1->AddEntry(gr8, "TV (Run-1c)");
	l1->AddEntry(gr3, "AD (Run-1c)");

	l1->AddEntry(gr9, "TV (Run-1d)");
	l1->AddEntry(gr4, "AD (Run-1d)");

	l1->Draw("SAME");
  	
  	c1->SaveAs("../Images/AEDM_overlay_reweight.pdf");	
  	c1->SaveAs("../Images/AEDM_overlay_reweight.png");

  	// Ratios

  	TGraphErrors *ratio = new TGraphErrors();
  	TGraphErrors *ratio_a = new TGraphErrors();
  	TGraphErrors *ratio_b = new TGraphErrors();
  	TGraphErrors *ratio_c = new TGraphErrors();
  	TGraphErrors *ratio_d = new TGraphErrors();

  	for(int i(0); i<gr5->GetN(); i++) { 

  		// Nominal
  		ratio->SetPoint(i, gr0->GetX()[i], gr5->GetY()[i]/gr0->GetY()[i]);
  		ratio->SetPointError(i, 0., 0.); // gr5->GetY()[i]/gr0->GetY()[i] * sqrt( pow(gr0->GetEY()[i]/gr0->GetY()[i], 2) + pow(gr5->GetEY()[i]/gr5->GetY()[i], 2) ) );

  		// Run-1a
  	  	ratio_a->SetPoint(i, gr6->GetX()[i], gr6->GetY()[i]/gr1->GetY()[i]);
  		ratio_a->SetPointError(i, 0., 0.); // gr6->GetY()[i]/gr1->GetY()[i] * sqrt( pow(gr1->GetEY()[i]/gr1->GetY()[i], 2) + pow(gr6->GetEY()[i]/gr6->GetY()[i], 2) ) );
  	  	
  	  	cout<<"\nDelta Run-1a = "<<(gr6->GetY()[i]/gr1->GetY()[i]) - (gr5->GetY()[i]/gr0->GetY()[i])<<endl;

  	  	// Run-1b
  	  	ratio_b->SetPoint(i, gr7->GetX()[i], gr7->GetY()[i]/gr2->GetY()[i]);
		ratio_b->SetPointError(i, 0., 0.); // gr7->GetY()[i]/gr2->GetY()[i] * sqrt( pow(gr2->GetEY()[i]/gr2->GetY()[i], 2) + pow(gr7->GetEY()[i]/gr7->GetY()[i], 2) ) );

  		cout<<"Delta Run-1b = "<<(gr7->GetY()[i]/gr2->GetY()[i]) - (gr5->GetY()[i]/gr0->GetY()[i])<<endl;

  		// Run-1c
  	  	ratio_c->SetPoint(i, gr8->GetX()[i], gr8->GetY()[i]/gr3->GetY()[i]);
		ratio_c->SetPointError(i, 0., 0.); // gr8->GetY()[i]/gr3->GetY()[i] * sqrt( pow(gr3->GetEY()[i]/gr3->GetY()[i], 2) + pow(gr8->GetEY()[i]/gr8->GetY()[i], 2) ) );

		cout<<"Delta Run-1c = "<<(gr8->GetY()[i]/gr3->GetY()[i]) - (gr5->GetY()[i]/gr0->GetY()[i])<<endl;

		// Run-1d
   	  	ratio_d->SetPoint(i, gr9->GetX()[i], gr9->GetY()[i]/gr4->GetY()[i]);
		ratio_d->SetPointError(i, 0., 0.); // gr9->GetY()[i]/gr4->GetY()[i] * sqrt( pow(gr4->GetEY()[i]/gr4->GetY()[i], 2) + pow(gr9->GetEY()[i]/gr9->GetY()[i], 2) ) );

  		cout<<"Delta Run-1d = "<<(gr9->GetY()[i]/gr4->GetY()[i]) - (gr5->GetY()[i]/gr0->GetY()[i])<<endl;

  	}

  	// woah now, I don't remember this?
  	string foutName = "../Plots/MC/Acceptance/Plots/acceptanceCorrection_250MeV_full_reweightRun1_"+stn+".root";
  	TFile *fout = new TFile(foutName.c_str(), "RECREATE");

  	ratio->SetName("ratio");
	ratio_a->SetName("ratio_a");
	ratio_b->SetName("ratio_b"); 	
	ratio_c->SetName("ratio_c");
	ratio_d->SetName("ratio_d");

	fout->mkdir("ratios"); fout->cd("ratios");

	ratio->Write();
	ratio_a->Write();
	ratio_b->Write();
	ratio_c->Write();
	ratio_d->Write();

	cout<<"---> Written plots to "<<foutName<<", "<<fout<<endl;


  	TCanvas *c2 = new TCanvas("c2", "c2", 800, 600);

	ratio->GetYaxis()->SetRangeUser(0.3, 0.8);

	ratio->SetTitle(";Momentum [MeV];A_{EDM} acceptance factor");
	ratio->GetXaxis()->SetTitleSize(.04);
	ratio->GetYaxis()->SetTitleSize(.04);
	ratio->GetXaxis()->SetTitleOffset(1.1);
	ratio->GetYaxis()->SetTitleOffset(1.2);
	ratio->GetXaxis()->CenterTitle(true);
	ratio->GetYaxis()->CenterTitle(true);
	ratio->GetYaxis()->SetMaxDigits(4);

	ratio->SetMarkerColor(kBlack);
	ratio->SetLineColor(kBlack);
	ratio->SetMarkerStyle(20);

	ratio_a->SetMarkerColor(kBlue);
	ratio_a->SetLineColor(kBlue);
	ratio_a->SetMarkerStyle(20);

	ratio_b->SetMarkerColor(kOrange+7);
	ratio_b->SetLineColor(kOrange+7);
	ratio_b->SetMarkerStyle(20);

	ratio_c->SetMarkerColor(kGreen-3);
	ratio_c->SetLineColor(kGreen-3);
	ratio_c->SetMarkerStyle(20);

	ratio_d->SetMarkerColor(kMagenta+2);
	ratio_d->SetLineColor(kMagenta+2);
	ratio_d->SetMarkerStyle(20);

	ratio->Draw("AP");
	ratio_a->Draw("P SAME");
	ratio_b->Draw("P SAME");
	ratio_c->Draw("P SAME");
	ratio_d->Draw("P SAME");

	TLegend *l2 = new TLegend(.15, .65, .39, .89);
	l2->SetBorderSize(0);
	l2->SetTextSize(24);
	l2->SetTextFont(44);

	l2->AddEntry(ratio, "Nominal");
	l2->AddEntry(ratio_a, "Run-1a");
	l2->AddEntry(ratio_b, "Run-1b");
	l2->AddEntry(ratio_c, "Run-1c");
	l2->AddEntry(ratio_d, "Run-1d");	

	l2->Draw("SAME");

	c2->SaveAs("../Images/AEDM_ratios_overlay_reweight.pdf");	
	c2->SaveAs("../Images/AEDM_ratios_overlay_reweight.png");

	f0->Close();
	f1->Close();
	f2->Close();
	f3->Close();
	f4->Close();
	f5->Close();
	f6->Close();

	return;

}

void Run1ReweightingError() { 

	Run("S12");
	Run("S18");
	Run("S12S18");

	return;

}

