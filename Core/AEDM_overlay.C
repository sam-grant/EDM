double pmin = 1000;
double pmax = 2500;

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

void DrawGraph(TGraphErrors *graph, std::string ds, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	graph->SetTitle(title.c_str());
	graph->GetXaxis()->SetTitleSize(.04);
	graph->GetYaxis()->SetTitleSize(.04);
	graph->GetXaxis()->SetTitleOffset(1.1);
	graph->GetYaxis()->SetTitleOffset(1.25);
	graph->GetXaxis()->CenterTitle(true);
	graph->GetYaxis()->CenterTitle(true);
	graph->GetYaxis()->SetMaxDigits(4);
	graph->SetMarkerStyle(20); //  Full circle
	//graph->SetMaximum(0.07);//-0.01, 0.07);//(20); 
	graph->Draw("APL");

	TLegend *l = new TLegend(.70, .80, .89, .89);
	l->SetBorderSize(0);
/*	l->SetTextSize(24);
	l->SetTextFont(44);*/
	l->SetTextAlign(12); 

	l->AddEntry(graph, ds.c_str());

	l->Draw("SAME");
	//c->SetGridx();

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawAllGraphs(vector<TGraphErrors*> graph_, std::string title, std::string fname, vector<string> ds_) {

  // Get one sigma band

  TCanvas *c = new TCanvas("c","c",800,600);

  // S12 ect 
  //TLegend *l = new TLegend(0.66, 0.18, 0.85, 0.38); 
  //TLegend *l = new TLegend(0.15, 0.15, 0.45, 0.30);  // MAIN
  TLegend *l = new TLegend(0.15, 0.15, 0.85, 0.20);  // INDIVIDUAL STN
  l->SetNColumns(4);
  l->SetBorderSize(0);
  l->SetTextSize(24);
  l->SetTextFont(44);

  //graph_.at(0)->GetYaxis()->SetTitle("d_{#mu} (BLIND) [e#upointcm]");//title.c_str());
  //graph_.at(0)->SetTextSize(26);//"d_{#mu}^{BLIND} [e#upointcm]");
  graph_.at(0)->GetXaxis()->SetTitleSize(.04);
  graph_.at(0)->GetYaxis()->SetTitleSize(.04);
  graph_.at(0)->GetXaxis()->SetTitleOffset(1.1);
  graph_.at(0)->GetYaxis()->SetTitleOffset(1.2);
  graph_.at(0)->GetXaxis()->CenterTitle(true);
  graph_.at(0)->GetYaxis()->CenterTitle(true);
  graph_.at(0)->GetYaxis()->SetMaxDigits(4);

  // Find y-range
  double ymax = graph_.at(0)->GetY()[0] + 2.5*graph_.at(0)->GetEY()[0];
  double ymin = graph_.at(0)->GetY()[0] - 2.5*graph_.at(0)->GetEY()[0];  

  for(int i(0); i<graph_.size(); i++) {

    double ymin1 = graph_.at(i)->GetY()[0] - 2.5*graph_.at(i)->GetEY()[0]; 
    double ymax1 = graph_.at(i)->GetY()[0] + 2.5*graph_.at(i)->GetEY()[0]; 

    for(int j(1); j<graph_.at(0)->GetN(); j++) { 

      double ymax2 = graph_.at(i)->GetY()[j] + 2.5*graph_.at(i)->GetEY()[j];
      double ymin2 = graph_.at(i)->GetY()[j] - 2.5*graph_.at(i)->GetEY()[j]; 

      if(ymin2 < ymin1) ymin1 = ymin2;
      if(ymax2 > ymax1) ymax1 = ymax2;

    }

    if(ymin1 < ymin) ymin = ymin1;
    if(ymax1 > ymax) ymax = ymax1;

  }

  graph_.at(0)->GetYaxis()->SetRangeUser(-0.02, 1.0);//ymin, ymax);


  	//for(int i(0); i<gr_S18->GetN(); i++) gr_S18->SetPoint(i, gr_S18->GetX()[i]+25, gr_S18->GetY()[i]);
	//for(int i(0); i<gr_S12S18->GetN(); i++) gr_S12S18->SetPoint(i, gr_S12S18->GetX()[i]+50, gr_S12S18->GetY()[i]);

  for(int i(0); i<graph_.size(); i++) {

  	for(int j(0); j<graph_.at(i)->GetN(); j++) { 

  		graph_.at(i)->SetPoint(j, graph_.at(i)->GetX()[j]+(25*i), graph_.at(i)->GetY()[j]);
  		graph_.at(i)->SetPointError(j, 0, graph_.at(i)->GetEY()[j]);

  	}
  	

  }

  vector<int> colours_ = {4, 807, 413, 614};

  //for(int i(0); i<graph_.at(0)->GetN(); i++) graph_.at(0)->GetXaxis()->SetBinLabel(graph_.at(0)->GetXaxis()->FindBin(i+1), (xLabel_.at(i)).c_str());

  //graph_.at(0)->GetXaxis()->LabelsOption("h");
/*  graph_.at(0)->GetXaxis()->SetLabelSize(0.055);//Option("h");*/
/*  graph_.at(0)->GetXaxis()->SetRangeUser(0, 5);*/
/*  graph_.at(0)->GetXaxis()->SetTickLength(0);*/
  graph_.at(0)->GetYaxis()->SetRangeUser(-0.04, 0.1);
  graph_.at(0)->GetXaxis()->SetRangeUser(1050, 2500);
  graph_.at(0)->Draw("AP");
  gPad->Update();
  
  //vector<int> colour_ = {2,4,1};

  for(int i(0); i<graph_.size(); i++) {
    graph_.at(i)->SetMarkerStyle(20);
    graph_.at(i)->SetMarkerColor(colours_.at(i));
    graph_.at(i)->SetLineColor(colours_.at(i));

    if(i==0) {

/*      fit->Draw("same");
      minusSigma->Draw("same");
      plusSigma->Draw("same");*/
      // minusTwoSigma->Draw("same");
      // plusTwoSigma->Draw("same");
      // minusThreeSigma->Draw("same");
      // plusThreeSigma->Draw("same");

      graph_.at(i)->Draw("P SAME");

    }

    else graph_.at(i)->Draw("P SAME");

    l->AddEntry(graph_.at(i), ds_.at(i).c_str());

  }

  l->Draw("SAME");

  // Text box
  TPaveText *result = new TPaveText(0.15,0.79,0.40,0.89,"NDC");
  result->SetTextAlign(13);
  result->SetTextSize(26);
  result->SetTextFont(44);
  result->SetFillColor(0);

  //std::ostringstream result_str; result_str << fit->GetParameter(0); 
  //std::ostringstream error_str; error_str << fit->GetParError(0);  

  //result->AddText("#delta#LTd_{#mu}#GT = "+SciNotation(fit->GetParError(0))+" e#upointcm");// error_str.str()+" e#upointcm") ;//+result_str.str()+"#pm"+error_str.str()+" e#upointcm").c_str());
  //result->Draw("SAME");

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());  

  delete c;

  return;

}


void DrawAllMaxSigmaGraphs(vector<TGraphErrors*> graph_, std::string title, std::string fname, vector<string> stn_) {

  TCanvas *c = new TCanvas("c","c",800,600);

  // S12 ect 
  //TLegend *l = new TLegend(0.66, 0.18, 0.85, 0.38); 
  TLegend *l = new TLegend(0.66, 0.69, 0.85, 0.89); 
  //TLegend *l = new TLegend(0.15, 0.15, 0.45, 0.30);  // MAIN
  //TLegend *l = new TLegend(0.15, 0.15, 0.85, 0.20);  // INDIVIDUAL STN
  l->SetNColumns(1);
  l->SetBorderSize(0);
  l->SetTextSize(24);
  l->SetTextFont(44);

  graph_.at(0)->SetTitle(title.c_str());//"d_{#mu} (BLIND) [e#upointcm]");//title.c_str());
  //graph_.at(0)->SetTextSize(26);//"d_{#mu}^{BLIND} [e#upointcm]");
  graph_.at(0)->GetXaxis()->SetTitleSize(.04);
  graph_.at(0)->GetYaxis()->SetTitleSize(.04);
  graph_.at(0)->GetXaxis()->SetTitleOffset(1.1);
  graph_.at(0)->GetYaxis()->SetTitleOffset(1.2);
  graph_.at(0)->GetXaxis()->CenterTitle(true);
  graph_.at(0)->GetYaxis()->CenterTitle(true);
  graph_.at(0)->GetYaxis()->SetMaxDigits(4);


  graph_.at(0)->GetYaxis()->SetRangeUser(-3, 3);//ymin, ymax);

/*  // Offset x-values
  for(int i(0); i<graph_.size(); i++) {

  	for(int j(0); j<graph_.at(i)->GetN(); j++) { 

  		graph_.at(i)->SetPoint(j, graph_.at(i)->GetX()[j]+(25*i), graph_.at(i)->GetY()[j]);
  		graph_.at(i)->SetPointError(j, 0, graph_.at(i)->GetEY()[j]);

  	}
  	
  }*/

  vector<int> colours_ = {2,4,1};
/*
  graph_.at(0)->GetYaxis()->SetRangeUser(-0.04, 0.1);
  graph_.at(0)->GetXaxis()->SetRangeUser(1050, 2500);*/

  graph_.at(0)->GetYaxis()->SetRangeUser(0, 3);
  graph_.at(0)->Draw("APL");
  gPad->Update();
  
  //vector<int> colour_ = {2,4,1};

  for(int i(0); i<graph_.size(); i++) {
    graph_.at(i)->SetMarkerStyle(20);
    graph_.at(i)->SetMarkerColor(colours_.at(i));
    graph_.at(i)->SetLineColor(colours_.at(i));
    graph_.at(i)->Draw("PL SAME");

    l->AddEntry(graph_.at(i), stn_.at(i).c_str());

  }


  l->Draw("SAME");


  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  //c->SaveAs((fname+".C").c_str());  

  delete c;

  return;

}

TGraphErrors *GetMaxSigma(vector<TGraphErrors*> gr_) { 

	TGraphErrors *gr_max_sigma = new TGraphErrors();

	// Loop through bins
	for(int i_bin(0); i_bin<gr_.at(0)->GetN(); i_bin++) {

		double max_sigma = 0;

		int i_count = 0;

		// Loop through graphs 
		for(int i_gr(0); i_gr<gr_.size(); i_gr++) {

			// Loop through graphs again
			for(int i_gr2(0); i_gr2<gr_.size(); i_gr2++) { 
				
				if(i_gr==i_gr2) continue;

				i_count++;

				double y1 = gr_.at(i_gr)->GetY()[i_bin];
				double y2 = gr_.at(i_gr2)->GetY()[i_bin];
				
				double ey1 = gr_.at(i_gr)->GetEY()[i_bin];
				double ey2 = gr_.at(i_gr2)->GetEY()[i_bin];

				double sigma = abs(y1-y2)/sqrt(pow(ey1,2)+pow(ey2,2));

				if(sigma > max_sigma) max_sigma = sigma;
 
 				//cout<<"---> sigma = "<<sigma<<endl;

			}

		}

		gr_max_sigma->SetPoint(i_bin, gr_.at(0)->GetX()[i_bin], max_sigma);

		// cout<<"---> Combinations (should be 12) = "<<i_count<<endl;
		// cout<<"---> Max sigma = "<<max_sigma<<endl;


	}

	return gr_max_sigma;


}

void AEDM_overlay() { 

	vector<string> ds_ = {"Run-1a", "Run-1b", "Run-1c", "Run-1d"};

	vector<string> stn_ = {"S12", "S18", "S12S18"};

	vector<TGraphErrors*> gr_max_sigma_;

	for(auto &stn : stn_) {

		vector<TGraphErrors*> gr_;

		for(auto &ds : ds_) {

			TString finName = "../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_"+ds+"_250MeV_1000_2500MeV_randomised_BQ.root";
			if(ds == "Run-1d") finName = "../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_"+ds+"_250MeV_1000_2500MeV_50usStartTime_randomised_BQ.root";

			TFile *fin = TFile::Open(finName);

			cout<<"----> Opened "<<finName<<", "<<fin<<endl;

			TGraphErrors *gr = ResetGraph( (TGraphErrors*)fin->Get(("MomentumBinnedAnalysis/ParameterScans/"+stn+"_AEDM_vs_p").c_str()), pmin, pmax);

			cout<<"----> Graph "<<gr<<endl;

			DrawGraph(gr, ds, ";Decay vertex momentum (Run-1a) [MeV];A_{EDM}^{BLIND} [mrad]", "../Images/Data/dMu/Run-1/MainPlots/"+stn+"_AEDM_vs_p_overlay_"+ds+"_"+to_string(int(pmin))+"_"+to_string(int(pmax)));

			gr_.push_back(gr);

			fin->Close();

		}

		DrawAllGraphs(gr_, "", "../Images/Data/dMu/Run-1/MainPlots/"+stn+"_AEDM_vs_p_overlay_"+to_string(int(pmin))+"_"+to_string(int(pmax)), ds_);

		gr_max_sigma_.push_back(GetMaxSigma(gr_));

	}

	DrawAllMaxSigmaGraphs(gr_max_sigma_, ";Decay vertex momentum [MeV];#sigma_{max}", "../Images/Data/dMu/Run-1/MainPlots/AEDM_max_sigma_vs_p_overlay_"+to_string(int(pmin))+"_"+to_string(int(pmax)), {"Station 12", "Station 18", "Combined"});

	return;

}







/*#include "Utils.h"

void DrawOverlay(TGraphErrors *gr1, TGraphErrors *gr2, std::string title, std::string fname, TGraphErrors *gr3 = 0) {

	TCanvas *c = new TCanvas("c","c",800,600);

	gr1->SetTitle(title.c_str());
	gr1->GetXaxis()->SetTitleSize(.04);
	gr1->GetYaxis()->SetTitleSize(.04);
	gr1->GetXaxis()->SetTitleOffset(1.1);
	gr1->GetYaxis()->SetTitleOffset(1.2);
	gr1->GetXaxis()->CenterTitle(true);
	gr1->GetYaxis()->CenterTitle(true);
	gr1->GetYaxis()->SetMaxDigits(4);
	gr1->SetMarkerStyle(20); //  Full circle

	// range
	double xmin = gr1->GetX()[0];
	double xmax = gr1->GetX()[gr1->GetN()-1];
	gr1->GetXaxis()->SetRangeUser(xmin - 100, xmax + 100);

	gr1->Draw("APL");

	gr2->SetMarkerStyle(24); // open circle
	gr2->Draw("PL SAME");

	if(gr3!=0) {
		gr3->SetMarkerStyle(24);
		gr3->SetMarkerColor(kRed);
		gr3->SetLineColor(kRed);
		gr3->Draw("PL SAME");
	}

	TLegend *l = new TLegend(.69, .79, .89, .89);
	l->SetBorderSize(0);
	l->SetTextSize(24);
	l->SetTextFont(44);

	if(gr3==0) {
		l->AddEntry(gr1, "Unweighted");
		l->AddEntry(gr2, "Weighted");
	} else { 
		l->AddEntry(gr1, "All decays (unweighted)");
		l->AddEntry(gr2, "All decays (weighted)");
		l->AddEntry(gr3, "Reco vertices");
		l->Draw("SAME");
		gPad->Update();
		l->SetX1NDC(.49);
		l->SetX2NDC(.89);
		l->SetY1NDC(.75);
		l->SetY2NDC(.89);
		//c->Update();
	}

	l->Draw("SAME");

	//c->SetGridx();

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawResiduals(TH1D *hist, string title, string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());

	hist->SetStats(0);
	// gStyle->SetOptStat(2210);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.1);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);
	//hist->SetLineWidth(3);
	hist->SetLineColor(1);

	//c->SetRightMargin(0.13);

	hist->Draw("HIST");

  	TString rms = Round(hist->GetRMS(), 1);
  	TString rms_err = Round(hist->GetRMSError(), 1);

  	TPaveText *names = new TPaveText(0.625,0.80,0.70,0.89,"NDC");
  	names->SetTextAlign(13);
  	//names->AddText("#LT#Deltay#GT [mm]");
  	names->AddText("#sigma [mrad]");
  	names->SetTextSize(26); // 26
 	names->SetTextFont(44);
 	names->SetFillColor(0);

  	TPaveText *values = new TPaveText(0.79,0.80,0.89,0.89,"NDC");
  	values->SetTextAlign(33);
  	//values->AddText(mean+"#pm"+mean_err);
  	values->AddText(rms+"#pm"+rms_err);
  	values->SetTextSize(26); // 26
  	values->SetTextFont(44);
  	values->SetFillColor(0);

  	values->Draw("same");
  	names->Draw("same");
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
	return;
}

TH1D *GetResiduals(TGraphErrors *gr1, TGraphErrors *gr2) { 

	// Take the uncertainty as the uncertainty on gr3

	TH1D *h_res = new TH1D("h_res", ";Residuals [mrad];Entries", 25, -0.15, 0.15);

	for(int i(0); i<gr1->GetN(); i++) {

		double x =  gr1->GetX()[i];
		if(x < 750 || x > 2750) continue;

		double y1 = gr1->GetY()[i];
		double y2 = gr2->GetY()[i];

		if(y1 == 0 || y2 == 0) continue;

		double res = gr1->GetY()[i] - gr2->GetY()[i];

		// cout<<"\nres = "<<res<<"\nx = "<<x<<endl;

		h_res->Fill(res);

	}

	return h_res; 

}

void Run(string config, string title) {

	TFile *f1 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ.root");
	TFile *f2 = TFile::Open(("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ"+config+".root").c_str());
	TFile *f3 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackReco_WORLD_250MeV_BQ.root");

	TGraphErrors *gr1 = (TGraphErrors*)f1->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY");
	TGraphErrors *gr2 = (TGraphErrors*)f2->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY");
	TGraphErrors *gr3 = (TGraphErrors*)f3->Get("MomentumBinnedAnalysis/ParameterScans/S0S12S18_AEDM_vs_p_thetaY");

	TGraphErrors *gr1_reset = new TGraphErrors();
	TGraphErrors *gr2_reset = new TGraphErrors();
	TGraphErrors *gr3_reset = new TGraphErrors();
	
	int counter = 0;

	for(int i(0); i<gr1->GetN(); i++) { 

		double x = gr1->GetX()[i];

		if(x < 750 || x > 2750) continue;

		gr1_reset->SetPoint(count, gr1_reset->GetX()[i], gr1_reset->GetY()[i]);
		gr2_reset->SetPoint(count, gr2_reset->GetX()[i], gr2_reset->GetY()[i]);
		gr3_reset->SetPoint(count, gr3_reset->GetX()[i], gr3_reset->GetY()[i]);

		gr1_reset->SetPointError(count, 0, gr1_reset->GetEY()[i]);
		gr2_reset->SetPointError(count, 0, gr2_reset->GetEY()[i]);
		gr3_reset->SetPointError(count, 0, gr3_reset->GetEY()[i]);

		counter++;

	}

	
	//DrawOverlay(gr1, gr2, "All decays", "../Images/MC/Acceptance/truth/CorrectionResults/AllDecays_AEDM_vs_p_overlay"+config);
	DrawOverlay(gr1_reset, gr2_reset, title, "../Images/MC/Acceptance/truth/CorrectionResults/AllDecaysAndTrackReco_AEDM_vs_p_overlay"+config, gr3);

	TH1D *h_res = GetResiduals(gr2_reset, gr3_reset);

	int underflow_bin = 0;
	int overflow_bin = h_res->GetNbinsX()+1;
	int underflow_content = h_res->GetBinContent(underflow_bin);
	int overflow_content = h_res->GetBinContent(overflow_bin);

	if(underflow_content != 0) {
		cout<<"Residual histogram has "<<underflow_content<<" underflows"<<endl;
	}


	if(overflow_content != 0) {
		cout<<"Residual histogram has "<<overflow_content<<" overflows"<<endl;
	}


	DrawResiduals(h_res, title+"", "../Images/MC/Acceptance/truth/CorrectionResults/Residuals_AEDM_vs_p"+config);

	f1->Close();
	f2->Close();

	return;

}

void AcceptanceWeightedDilution() { 
	
	//Run("truth", "_accepted2", "Simple acceptance weighting");
	//Run("truth", "_acceptedMomBins", "Momentum binned acceptance weighting");
	Run("_acceptedInterpolatedMomBins", "Momentum binned acceptance weighting with interpolation");
	//Run("_acceptedInterpolatedMomBins", "Momentum binned acceptance weighting with interpolation");	

	return; 

}*/