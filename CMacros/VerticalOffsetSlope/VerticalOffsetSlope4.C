// Sam Grant 2022
// - Fit S0, S12, S18 in simulation 
// - Fit S12, S18 in data
// - Print slopes
#include "Utils.h"

// Globals
double xmin = 1000; double xmax = 2750;

#include "Utils.h"

// Reset graph range (can't use SetRangeUser because sometimes I like to plot with "L" option)
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

// Draw <theta_y> vs p for both simulation offsets
void DrawSimThetaYvsMomFits(vector<TGraphErrors*> gr_, string fname, double ymin, double ymax) { 

  	cout<<"\n---> Drawing sim fits"<<endl;

  	TCanvas *c = new TCanvas("c","",800,600);
  	TLegend *l = new TLegend(0.15, 0.75, 0.50, 0.89); 
	
  	l->SetBorderSize(0);
  	l->SetTextSize(24);
  	l->SetTextFont(44);

  	gr_.at(0)->GetYaxis()->SetRangeUser(ymin, ymax);
  	gr_.at(0)->GetXaxis()->SetTitleSize(.04);
  	gr_.at(0)->GetYaxis()->SetTitleSize(.04);
  	gr_.at(0)->GetXaxis()->SetTitleOffset(1.1);
  	gr_.at(0)->GetYaxis()->SetTitleOffset(1.15);
  	gr_.at(0)->GetXaxis()->CenterTitle(true);
  	gr_.at(0)->GetYaxis()->CenterTitle(true);
  	gr_.at(0)->GetYaxis()->SetMaxDigits(4);
  	gr_.at(0)->SetTitle(";Truth decay vertex momentum [MeV];Truth #LT#theta_{y}#GT [mrad] / 250 MeV");
  	gr_.at(0)->SetMarkerColor(kBlack);
  	gr_.at(0)->SetLineColor(kBlack);
	gr_.at(0)->SetMarkerStyle(20);

  	gr_.at(1)->SetMarkerColor(kRed);
  	gr_.at(1)->SetLineColor(kRed);
	gr_.at(1)->SetMarkerStyle(20);

   	gr_.at(2)->SetMarkerColor(kBlue);
  	gr_.at(2)->SetLineColor(kBlue);
	gr_.at(2)->SetMarkerStyle(20);

	gr_.at(0)->Draw("AP");
	gr_.at(1)->Draw("P SAME");
	gr_.at(2)->Draw("P SAME");

	// Get fits
	TF1* fit0 = (TF1*)gr_.at(0)->GetFunction("S0_fit_thetaY_vs_p");
	TF1* fit12 = (TF1*)gr_.at(1)->GetFunction("S12_fit_thetaY_vs_p");
	TF1* fit18 = (TF1*)gr_.at(2)->GetFunction("S18_fit_thetaY_vs_p");

	fit0->SetLineColor(kBlack);
	fit12->SetLineColor(kRed);
	fit18->SetLineColor(kBlue);

	fit0->Draw("SAME");
	fit12->Draw("SAME");
	fit18->Draw("SAME");

	l->AddEntry(gr_.at(0), "S0");
	l->AddEntry(gr_.at(1), "S12");
	l->AddEntry(gr_.at(2), "S18");

 	l->Draw("SAME");

  	c->SaveAs((fname+".pdf").c_str());
  	c->SaveAs((fname+".png").c_str());
  	c->SaveAs((fname+".C").c_str());

 	delete c;

  	return;

}

// Draw <theta_y>/p vs tracker offset
void DrawSimSlopeFits(TGraphErrors *graph, std::string title, std::string fname, double xmin, double xmax, double ymin, double ymax) {

	cout<<"\n---> Drawing slope fits (sim)"<<endl;

	TCanvas *c = new TCanvas("c","c",800,600);

	// Dummy graph because of ridiculous ROOT range issues
	TGraph *dummy = new TGraph();
	dummy->SetPoint(0, xmin, 0);
	dummy->SetPoint(1, xmax, 0);
	dummy->SetMarkerSize(0);	
	dummy->GetYaxis()->SetRangeUser(ymin, ymax);

	dummy->GetXaxis()->SetTitleSize(.04);
	dummy->GetYaxis()->SetTitleSize(.04);
	dummy->GetXaxis()->SetTitleOffset(1.1);
	dummy->GetYaxis()->SetTitleOffset(1.2);
	dummy->GetXaxis()->CenterTitle(true);
	dummy->GetYaxis()->CenterTitle(true);
	dummy->GetYaxis()->SetMaxDigits(4);
	dummy->SetTitle(title.c_str());
	dummy->Draw("AP");
	
	graph->SetMarkerStyle(20); //  Full circle
	graph->Draw("P SAME");

	// Get fit params
	double p0 = graph->GetFunction("fit")->GetParameter(0);
	double p1 = graph->GetFunction("fit")->GetParameter(1);
	double e0 = graph->GetFunction("fit")->GetParError(0);
	double e1 = graph->GetFunction("fit")->GetParError(1);

	TPaveText *names = new TPaveText(0.11,0.75,0.65,0.89,"NDC");
  	names->SetTextAlign(13);
  	names->AddText("Gradient"); // [rad#upointMeV^{-1}#upointm^{-1}]"); 
    names->AddText("Y-intercept"); // [mrad#upointMeV^{-1}]"); 

 	TPaveText *values = new TPaveText(0.75, 0.74, 0.70, 0.89,"NDC");
  	values->SetTextAlign(33);
  	values->AddText(Round(p0, 2)+"#pm"+Round(e0, 1));
  	values->AddText(Round(p1, 3)+"#pm"+Round(e1, 3));

  	names->SetTextSize(26);
  	names->SetTextFont(44);
  	names->SetFillColor(0);
  	values->SetFillColor(0);
  	values->SetTextFont(44);
  	values->SetTextSize(26);

  	names->Draw("SAME");
  	values->Draw("SAME");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawDataThetaYvsMomFits(vector<TGraphErrors*> gr_, vector<string> ds_, string stn, string title, string fname, double ymin, double ymax) {

	TCanvas *c = new TCanvas("c","c",800,600);

	TLegend *l = new TLegend(0.11,0.60,0.49,0.89);
	l->SetBorderSize(0);

	gr_.at(0)->SetTitle(title.c_str());
	gr_.at(0)->GetXaxis()->SetTitleSize(.04);
	gr_.at(0)->GetYaxis()->SetTitleSize(.04);
	gr_.at(0)->GetXaxis()->SetTitleOffset(1.1);
	gr_.at(0)->GetYaxis()->SetTitleOffset(1.1);
	gr_.at(0)->GetXaxis()->CenterTitle(true);
	gr_.at(0)->GetYaxis()->CenterTitle(true);
	gr_.at(0)->GetYaxis()->SetMaxDigits(4);
	gr_.at(0)->GetYaxis()->SetRangeUser(ymin,ymax);

	//kWhite  = 0,   kBlack  = 1,   kGray    = 920,  kRed    = 632,  kGreen  = 416,
	//kBlue   = 600, kYellow = 400, kMagenta = 616,  kCyan   = 432,  kOrange = 800,
	//kSpring = 820, kTeal   = 840, kAzure   =  860, kViolet = 880,  kPink   = 900

	vector<int> colours_ = {4, 807, 413, 614};

	for(int i = 0; i < gr_.size(); i++) {

    	gr_.at(i)->SetMarkerStyle(20);
    	gr_.at(i)->SetMarkerColor(colours_.at(i));
    	gr_.at(i)->SetLineColor(colours_.at(i));
    	
    	l->AddEntry(gr_.at(i), (ds_.at(i)).c_str());
      	if(i==0) gr_.at(i)->Draw("AP");
      	else gr_.at(i)->Draw("P SAME");

      	TF1 *fit = gr_.at(i)->GetFunction((stn+"_fit_thetaY_vs_p").c_str());
      	fit->SetLineColor(colours_.at(i));
      	fit->Draw("SAME");

  	}

	l->Draw("same");
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawDataYvsMomFits(vector<TGraphErrors*> gr_, vector<string> ds_, string stn, string title, string fname, double ymin, double ymax) {

	TCanvas *c = new TCanvas("c","c",800,600);

	TLegend *l = new TLegend(0.60,0.75,0.89,0.89);
	l->SetNColumns(2);
	l->SetBorderSize(0);

	gr_.at(0)->SetTitle(title.c_str());
	gr_.at(0)->GetXaxis()->SetTitleSize(.04);
	gr_.at(0)->GetYaxis()->SetTitleSize(.04);
	gr_.at(0)->GetXaxis()->SetTitleOffset(1.1);
	gr_.at(0)->GetYaxis()->SetTitleOffset(1.1);
	gr_.at(0)->GetXaxis()->CenterTitle(true);
	gr_.at(0)->GetYaxis()->CenterTitle(true);
	gr_.at(0)->GetYaxis()->SetMaxDigits(4);
	gr_.at(0)->GetYaxis()->SetRangeUser(ymin,ymax);

	//kWhite  = 0,   kBlack  = 1,   kGray    = 920,  kRed    = 632,  kGreen  = 416,
	//kBlue   = 600, kYellow = 400, kMagenta = 616,  kCyan   = 432,  kOrange = 800,
	//kSpring = 820, kTeal   = 840, kAzure   =  860, kViolet = 880,  kPink   = 900

	vector<int> colours_ = {4, 807, 413, 614};

	for(int i = 0; i < gr_.size(); i++) {

    	gr_.at(i)->SetMarkerStyle(20);
    	gr_.at(i)->SetMarkerColor(colours_.at(i));
    	gr_.at(i)->SetLineColor(colours_.at(i));
    	
    	l->AddEntry(gr_.at(i), (ds_.at(i)).c_str());
      	if(i==0) gr_.at(i)->Draw("AP");
      	else gr_.at(i)->Draw("P SAME");

      	TF1 *fit = gr_.at(i)->GetFunction((stn+"_fit_Y_vs_p").c_str());
      	fit->SetLineColor(colours_.at(i));
      	fit->Draw("SAME");

  	}

	l->Draw("same");
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawDataExtrapDistvsMomFits(vector<TGraphErrors*> gr_, vector<string> ds_, string stn, string title, string fname, double ymin, double ymax) {

	TCanvas *c = new TCanvas("c","c",800,600);

	TLegend *l = new TLegend(0.11,0.60,0.49,0.89);

	l->SetBorderSize(0);

	gr_.at(0)->SetTitle(title.c_str());
	gr_.at(0)->GetXaxis()->SetTitleSize(.04);
	gr_.at(0)->GetYaxis()->SetTitleSize(.04);
	gr_.at(0)->GetXaxis()->SetTitleOffset(1.1);
	gr_.at(0)->GetYaxis()->SetTitleOffset(1.2);
	gr_.at(0)->GetXaxis()->CenterTitle(true);
	gr_.at(0)->GetYaxis()->CenterTitle(true);
	gr_.at(0)->GetYaxis()->SetMaxDigits(4);
	//gr_.at(0)->GetYaxis()->SetRangeUser(ymin,ymax);

	//kWhite  = 0,   kBlack  = 1,   kGray    = 920,  kRed    = 632,  kGreen  = 416,
	//kBlue   = 600, kYellow = 400, kMagenta = 616,  kCyan   = 432,  kOrange = 800,
	//kSpring = 820, kTeal   = 840, kAzure   =  860, kViolet = 880,  kPink   = 900

	vector<int> colours_ = {4, 807, 413, 614};

	for(int i = 0; i < gr_.size(); i++) {

    	gr_.at(i)->SetMarkerStyle(20);
    	gr_.at(i)->SetMarkerColor(colours_.at(i));
    	gr_.at(i)->SetLineColor(colours_.at(i));
    	
    	l->AddEntry(gr_.at(i), (ds_.at(i)).c_str());
      	if(i==0) gr_.at(i)->Draw("APL");
      	else gr_.at(i)->Draw("PL SAME");

  	}

	l->Draw("same");
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void RunSimFits(TFile *fout) {

	fout->mkdir("SimFits"); 
	
	TString finNameSim = "../Plots/MC/dMu/5.4e-18/Plots/verticalOffsetHists_trackTruth_WORLD_250MeV_BQ.root";
	TFile *finSim = TFile::Open(finNameSim);

	cout<<"\n---> Opened sim file "<<finNameSim<<", "<<finSim<<endl;

	vector<TGraphErrors*> gr_thetaY_vs_p_;
	vector<TGraphErrors*> gr_Y_vs_p_;

	vector<string> stn_ = {"S0", "S12", "S18"};

	// Slice momentum
  	int step = 250; 
  	int nSlices = PMAX/step;

	for(auto &stn : stn_) { 	

		TGraphErrors *gr_thetaY_vs_p = new TGraphErrors();
		TGraphErrors *gr_Y_vs_p = new TGraphErrors();
		// TGraphErrors *gr_extrapDist_vs_p = new TGraphErrors();
		
		int counter = 0;

		// Slice momentum
    	for ( int i_slice = 0; i_slice < nSlices; i_slice++ ) { 

      		int lo = 0 + i_slice*step; 
      		int hi = step + i_slice*step;

      		if(lo<xmin) continue;
      		if(hi>xmax) continue;

      		TH1D *h_p = (TH1D*)finSim->Get(("MomentumBinnedAnalysis/"+stn+"_Momentum_"+to_string(lo)+"_"+to_string(hi)).c_str()); 
      		TH1D *h_thetaY = (TH1D*)finSim->Get(("MomentumBinnedAnalysis/"+stn+"_ThetaY_"+to_string(lo)+"_"+to_string(hi)).c_str()); 
      		TH1D *h_Y = (TH1D*)finSim->Get(("MomentumBinnedAnalysis/"+stn+"_Y_"+to_string(lo)+"_"+to_string(hi)).c_str()); 
      	
      		double p = h_p->GetMean(); double e_p = h_p->GetMeanError(); 
      		double thetaY = h_thetaY->GetMean(); double e_thetaY = h_thetaY->GetMeanError(); 
      		double y = h_Y->GetMean(); double e_y = h_Y->GetMeanError(); 

      		gr_thetaY_vs_p->SetPoint(counter, p, thetaY);
      		gr_thetaY_vs_p->SetPointError(counter, e_p, e_thetaY);
      		gr_Y_vs_p->SetPoint(counter, p, y); gr_Y_vs_p->SetPointError(counter, e_p, e_y);

      		counter++;
    	}

    	TF1 *fit_thetaY_vs_p = new TF1((stn+"_fit_thetaY_vs_p").c_str(), "[0]+[1]*x", gr_thetaY_vs_p->GetX()[0],  gr_thetaY_vs_p->GetX()[ gr_thetaY_vs_p->GetN()-1]);
    	TF1 *fit_Y_vs_p = new TF1((stn+"_fit_Y_vs_p").c_str(), "[0]+[1]*x", gr_Y_vs_p->GetX()[0],  gr_Y_vs_p->GetX()[ gr_Y_vs_p->GetN()-1]);
    	TF1 *fit_extrapDist_vs_p = new TF1((stn+"_fit_extrapDist_vs_p").c_str(), "[0]+[1]*x", gr_Y_vs_p->GetX()[0],  gr_Y_vs_p->GetX()[ gr_Y_vs_p->GetN()-1]);
    	
    	gr_thetaY_vs_p->Fit(fit_thetaY_vs_p, "QR");
    	gr_Y_vs_p->Fit(fit_Y_vs_p, "QR");
    	//gr_extrapDist_vs_p->Fit(fit_extrapDist_vs_p, "R");

    	gr_thetaY_vs_p_.push_back(gr_thetaY_vs_p);
    	gr_Y_vs_p_.push_back(gr_Y_vs_p);

    	gr_thetaY_vs_p->SetName((stn+"_gr_thetaY_vs_p").c_str());
    	gr_Y_vs_p->SetName((stn+"_gr_Y_vs_p").c_str());

    	fout->cd("SimFits");

    	gr_thetaY_vs_p->Write();
    	gr_Y_vs_p->Write();

	}	

	DrawSimThetaYvsMomFits(gr_thetaY_vs_p_,  "../Images/MC/dMu/5.4e-18/VerticalOffset/ThetaYvsMomFitsSim", -0.6, 0.2);

	finSim->Close();

	return;


}


void RunDataFits(TFile *fout) {

	fout->mkdir("DataFits"); 

	vector<string> ds_ = {"Run-1a", "Run-1b", "Run-1c", "Run-1d"};
	// Reset stns
	vector<string> stn_ = {"S12", "S18"};

	// <theta_y> vs p 
	vector<TGraphErrors*> gr12_; vector<TGraphErrors*> gr18_; 

	// y vs p
	vector<TGraphErrors*> gr12_y_; vector<TGraphErrors*> gr18_y_; 

	// extrap dists vs p
	vector<TGraphErrors*> gr12_extrap_; vector<TGraphErrors*> gr18_extrap_; 

	// Slice momentum
  	int step = 250; 
  	int nSlices = PMAX/step;

  	for(auto& ds : ds_) { 

		string finNameData = "../Plots/Data/dMu/Run-1/Plots/verticalOffsetHists_"+ds+"_250MeV_BQ.root";
		TFile *finData = TFile::Open(finNameData.c_str());

	    fout->cd("DataFits");
    	fout->mkdir(("DataFits/"+ds).c_str());
    	fout->cd(("DataFits/"+ds).c_str());

		for(auto &stn : stn_) { 	

			TGraphErrors *gr_thetaY_vs_p = new TGraphErrors();
			TGraphErrors *gr_Y_vs_p = new TGraphErrors();
			TGraphErrors *gr_extrapDist_vs_p = new TGraphErrors();

			int counter = 0;

			// Slice momentum
    		for ( int i_slice = 0; i_slice < nSlices; i_slice++ ) { 

      			int lo = 0 + i_slice*step; 
      			int hi = step + i_slice*step;

      			if(lo<xmin) continue;
      			if(hi>xmax) continue;

      			TH1D *h_p = (TH1D*)finData->Get(("MomentumBinnedAnalysis/"+stn+"_Momentum_"+to_string(lo)+"_"+to_string(hi)).c_str()); 
      			TH1D *h_thetaY = (TH1D*)finData->Get(("MomentumBinnedAnalysis/"+stn+"_ThetaY_"+to_string(lo)+"_"+to_string(hi)).c_str()); 
      			TH1D *h_Y = (TH1D*)finData->Get(("MomentumBinnedAnalysis/"+stn+"_Y_"+to_string(lo)+"_"+to_string(hi)).c_str()); 
      			TH1D *h_extrapDist = (TH1D*)finData->Get(("MomentumBinnedAnalysis/"+stn+"_ExtrapolatedDistance_"+to_string(lo)+"_"+to_string(hi)).c_str()); 

      			double p = h_p->GetMean(); double e_p = h_p->GetMeanError(); 
      			double thetaY = h_thetaY->GetMean(); double e_thetaY = h_thetaY->GetMeanError(); 
      			double y = h_Y->GetMean(); double e_y = h_Y->GetMeanError(); 
      			double extrapDist = h_extrapDist->GetMean(); double e_extrapDist = h_extrapDist->GetMeanError(); 

      			gr_thetaY_vs_p->SetPoint(counter, p, thetaY);
      			gr_thetaY_vs_p->SetPointError(counter, e_p, e_thetaY);
      			gr_Y_vs_p->SetPoint(counter, p, y); gr_Y_vs_p->SetPointError(counter, e_p, e_y);
      			gr_extrapDist_vs_p->SetPoint(counter, p, extrapDist); gr_extrapDist_vs_p->SetPointError(counter, e_p, e_extrapDist);


      			counter++;
    		}

    		TF1 *fit_thetaY_vs_p = new TF1((stn+"_fit_thetaY_vs_p").c_str(), "[0]+[1]*x", gr_thetaY_vs_p->GetX()[0],  gr_thetaY_vs_p->GetX()[ gr_thetaY_vs_p->GetN()-1]);
    		TF1 *fit_Y_vs_p = new TF1((stn+"_fit_Y_vs_p").c_str(), "[0]+[1]*x", gr_Y_vs_p->GetX()[0],  gr_Y_vs_p->GetX()[ gr_Y_vs_p->GetN()-1]);
    		TF1 *fit_extrapDist_vs_p = new TF1((stn+"_fit_extrapDist_vs_p").c_str(), "[0]+[1]*x", gr_extrapDist_vs_p->GetX()[0],  gr_extrapDist_vs_p->GetX()[ gr_extrapDist_vs_p->GetN()-1]);

    		gr_thetaY_vs_p->Fit(fit_thetaY_vs_p, "QR");
    		gr_Y_vs_p->Fit(fit_Y_vs_p, "QR");

    		gr_thetaY_vs_p->SetName((stn+"_gr_thetaY_vs_p").c_str());
    		gr_Y_vs_p->SetName((stn+"_gr_Y_vs_p").c_str());
    		gr_extrapDist_vs_p->SetName((stn+"_gr_extrapDist_vs_p").c_str());

    		fout->cd(("DataFits/"+ds).c_str());

    		gr_thetaY_vs_p->Write();
    		gr_Y_vs_p->Write();
    		gr_extrapDist_vs_p->Write();

    		if(stn=="S12") {
    			gr12_.push_back(gr_thetaY_vs_p);
    			gr12_y_.push_back(gr_Y_vs_p);
    			gr12_extrap_.push_back(gr_extrapDist_vs_p);
    		} else if(stn=="S18") {
    			gr18_.push_back(gr_thetaY_vs_p);
    			gr18_y_.push_back(gr_Y_vs_p);
				gr18_extrap_.push_back(gr_extrapDist_vs_p);
			}
    	}

    	finData->Close();

	}	

	DrawDataThetaYvsMomFits(gr12_, ds_, "S12", "S12;Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV", "../Images/MC/dMu/5.4e-18/VerticalOffset/S12_AvgThetaYvsMomFitsData", -1, 0.5);
	DrawDataThetaYvsMomFits(gr18_, ds_, "S18", "S18;Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV", "../Images/MC/dMu/5.4e-18/VerticalOffset/S18_AvgThetaYvsMomFitsData", -1, 0.5);

	DrawDataYvsMomFits(gr12_y_, ds_, "S12", "S12;Decay vertex momentum [MeV];#LTy#GT [mm] / 250 MeV", "../Images/MC/dMu/5.4e-18/VerticalOffset/S12_AvgYvsMomFitsData", -0.5, 1.5);
	DrawDataYvsMomFits(gr18_y_, ds_, "S18", "S18;Decay vertex momentum [MeV];#LTy#GT [mm] / 250 MeV", "../Images/MC/dMu/5.4e-18/VerticalOffset/S18_AvgYvsMomFitsData", 0, 2);

	DrawDataExtrapDistvsMomFits(gr12_extrap_, ds_, "S12", "S12;Decay vertex momentum [MeV];Decay extrapolated distance [mm] / 250 MeV", "../Images/MC/dMu/5.4e-18/VerticalOffset/S18_ExtrapDistvsMomFitsData", -1, 0.5);
	DrawDataExtrapDistvsMomFits(gr18_extrap_, ds_, "S18", "S18;Decay vertex momentum [MeV];Decay extrapolated distance [mm] / 250 MeV", "../Images/MC/dMu/5.4e-18/VerticalOffset/S12_ExtrapDistvsMomFitsData", -1, 0.5);

	return;


}

void RunSlopes(TFile *fout) {

	fout->mkdir("SlopesData");
	fout->mkdir("SlopesSim");

	// Beam position info
	TString finNameSim = "../Plots/MC/dMu/5.4e-18/Plots/verticalPositionPlots_trackTruth_BQ.root";
	TFile *finSim = TFile::Open(finNameSim); 

	// Fill graphs
	vector<TGraphErrors*> gr_data_; 
	vector<TGraphErrors*> gr_sim_; 

	vector<string> ds_ = {"Run-1a", "Run-1b", "Run-1c", "Run-1d"};
	vector<string> stn_ = {"S12", "S18"};

	for(auto& stn : stn_) {	

		int i = 0;

		TGraphErrors *gr_data = new TGraphErrors();
		TGraphErrors *gr_sim = new TGraphErrors();

		for(auto& ds : ds_) {

			// Beam position info
			TString finNameData = "../Plots/Data/dMu/Run-1/Plots/verticalPositionPlots_"+ds+".root";
			TFile *finData = TFile::Open(finNameData);

			TF1 *data_fit = ((TGraphErrors*)fout->Get(("DataFits/"+ds+"/"+stn+"_gr_thetaY_vs_p").c_str()))->GetFunction((stn+"_fit_thetaY_vs_p").c_str());
			TH1D *h_data = (TH1D*)finData->Get(("SimultaneousAnalysis/"+stn+"_Y").c_str());

			gr_data->SetPoint(i, h_data->GetMean(), data_fit->GetParameter(1));
			gr_data->SetPointError(i, h_data->GetMeanError(), data_fit->GetParError(1));

			i++;

			finData->Close();

		}

		// Fit data and write

		TF1 *fit = new TF1("fit", "[0]+[1]*x", gr_data->GetX()[1], gr_data->GetX()[gr_data->GetN()-1]);

		gr_data->Fit(fit, "QR");

		fout->cd("SlopesData");

		gr_data->SetName((stn+"_fit").c_str());
		gr_data->Write(); // for some reason this write it twice

		gr_data_.push_back(gr_data);

		TF1 *sim_fit = ((TGraphErrors*)fout->Get(("SimFits/"+stn+"_gr_thetaY_vs_p").c_str()))->GetFunction((stn+"_fit_thetaY_vs_p").c_str());
		TH1D *h_sim = (TH1D*)finSim->Get(("SimultaneousAnalysis/"+stn+"_Y").c_str());

		gr_sim->SetPoint(0, h_sim->GetMean(), sim_fit->GetParameter(1));
		gr_sim->SetPointError(0, h_sim->GetMeanError(), sim_fit->GetParError(1));
		gr_sim->Draw("APL");

		gr_sim_.push_back(gr_sim);

		fout->cd("SlopesSim");
		gr_sim->SetName((stn+"_fit").c_str());
		gr_sim->Write();

	}

	// Draw on same canvas 
	TCanvas *c = new TCanvas("c","",800,600);
  	TLegend *l = new TLegend(0.15, 0.70, 0.50, 0.89); 
	
	// Dummy graph because of ridiculous ROOT range issues
	TGraph *dummy = new TGraph();
	dummy->SetPoint(0, -0.2, 0);
	dummy->SetPoint(1, 1.4, 0);
	dummy->SetMarkerSize(0);	
	dummy->GetYaxis()->SetRangeUser(1e-4, 6.5e-4);

	dummy->GetXaxis()->SetTitleSize(.04);
	dummy->GetYaxis()->SetTitleSize(.04);
	dummy->GetXaxis()->SetTitleOffset(1.1);
	dummy->GetYaxis()->SetTitleOffset(1.2);
	dummy->GetXaxis()->CenterTitle(true);
	dummy->GetYaxis()->CenterTitle(true);
	dummy->GetYaxis()->SetMaxDigits(4);
	dummy->SetTitle(";Vertical beam position [mm];#LT#theta_{y}#GT/p [mrad/MeV]");
	dummy->Draw("AP");

  	l->SetBorderSize(0);
  	l->SetTextSize(24);
  	l->SetTextFont(44);

  	gr_data_.at(0)->GetXaxis()->SetTitleSize(.04);
  	gr_data_.at(0)->GetYaxis()->SetTitleSize(.04);
  	gr_data_.at(0)->GetXaxis()->SetTitleOffset(1.1);
  	gr_data_.at(0)->GetYaxis()->SetTitleOffset(1.15);
  	gr_data_.at(0)->GetXaxis()->CenterTitle(true);
  	gr_data_.at(0)->GetYaxis()->CenterTitle(true);
  	gr_data_.at(0)->GetYaxis()->SetMaxDigits(4);

  	gr_data_.at(0)->SetTitle();

  	gr_data_.at(0)->SetMarkerColor(kBlack);
  	gr_data_.at(0)->SetLineColor(kBlack);
	gr_data_.at(0)->SetMarkerStyle(20);

  	gr_data_.at(1)->SetMarkerColor(kRed);
  	gr_data_.at(1)->SetLineColor(kRed);
	gr_data_.at(1)->SetMarkerStyle(20);

   	gr_sim_.at(0)->SetMarkerColor(kBlack);
  	gr_sim_.at(0)->SetLineColor(kBlack);
	gr_sim_.at(0)->SetMarkerStyle(24);

   	gr_sim_.at(1)->SetMarkerColor(kRed);
  	gr_sim_.at(1)->SetLineColor(kRed);
	gr_sim_.at(1)->SetMarkerStyle(24);

	gr_data_.at(0)->Draw("P SAME");
	gr_data_.at(1)->Draw("P SAME");
	gr_sim_.at(0)->Draw("P SAME");
	gr_sim_.at(1)->Draw("P SAME");

	// Get fits
	TF1* fit12 = (TF1*)gr_data_.at(0)->GetFunction("fit");
	TF1* fit18 = (TF1*)gr_data_.at(1)->GetFunction("fit");

	fit12->SetLineColor(kBlack);
	fit18->SetLineColor(kRed);

	fit12->Draw("SAME");
	fit18->Draw("SAME");

	TF1 *fit12_extrap = new TF1("fit", "[0]+[1]*x", gr_sim_.at(0)->GetX()[0], gr_data_.at(0)->GetX()[(gr_data_.at(0)->GetN())-1]);
	fit12_extrap->SetParameters(fit12->GetParameter(0), fit12->GetParameter(1));
	fit12_extrap->SetLineColor(kBlack);
	fit12_extrap->SetLineStyle(kDashed);

	TF1 *fit18_extrap = new TF1("fit", "[0]+[1]*x", gr_sim_.at(1)->GetX()[0], gr_data_.at(1)->GetX()[(gr_data_.at(1)->GetN())-1]);
	fit18_extrap->SetParameters(fit18->GetParameter(0), fit18->GetParameter(1));
	fit18_extrap->SetLineColor(kRed);
	fit18_extrap->SetLineStyle(kDashed);

	fit12_extrap->Draw("SAME");
	fit18_extrap->Draw("SAME");

	l->AddEntry(gr_data_.at(0), "Data (S12)");
	l->AddEntry(gr_sim_.at(0), "Sim (S12)");
	l->AddEntry(gr_data_.at(1), "Data (S18)");
	l->AddEntry(gr_sim_.at(1), "Sim (S18)");

	l->Draw("SAME");

	string fname = "../Images/MC/dMu/5.4e-18/VerticalOffset/SlopeVsBeamPosition";

  	c->SaveAs((fname+".pdf").c_str());
  	c->SaveAs((fname+".png").c_str());
  	c->SaveAs((fname+".C").c_str());

 	delete c;

	finSim->Close();

	return;

}

void RunShiftedSlopes(TFile *fout) {

	TGraphErrors *gr_data_S12 = (TGraphErrors*)fout->Get("SlopesData/S12_fit");
	TGraphErrors *gr_data_S18 = (TGraphErrors*)fout->Get("SlopesData/S18_fit");

	TGraphErrors *gr_sim_S12 = (TGraphErrors*)fout->Get("SlopesSim/S12_fit");
	TGraphErrors *gr_sim_S18 = (TGraphErrors*)fout->Get("SlopesSim/S18_fit");

	TGraphErrors *gr_shift = new TGraphErrors(); 

	// Get fits
	TF1* fit_data_S12 = (TF1*)gr_data_S12->GetFunction("fit");
	TF1* fit_data_S18 = (TF1*)gr_data_S18->GetFunction("fit");

	TFitResultPtr frp_data_S12 = gr_data_S12->Fit(fit_data_S12 ,"SMQR");
	TFitResultPtr frp_data_S18 = gr_data_S18->Fit(fit_data_S18 ,"SMQR");

	double p0_12 = fit_data_S12->GetParameter(0); double e0_12 = fit_data_S12->GetParError(0);
	double p1_12 = fit_data_S12->GetParameter(1); double e1_12 = fit_data_S12->GetParError(1);

	double p0_18 = fit_data_S18->GetParameter(0); double e0_18 = fit_data_S18->GetParError(0);
	double p1_18 = fit_data_S18->GetParameter(1); double e1_18 = fit_data_S18->GetParError(1);

	double x_shift = p0_12/p1_12 - p0_18/p1_18; // fit_data_S12->GetParameter(0)/fit_data_S12->GetParameter(1) - fit_data_S18->GetParameter(0)/fit_data_S18->GetParameter(1);

	double err_data_S12 = p0_12/p1_12 * sqrt(pow(e0_12/p0_12,2) + pow(e1_12/p1_12,2) - 2*frp_data_S12->GetCovarianceMatrix()(0,1)/(p0_12*p1_12));
	double err_data_S18 = p0_18/p1_18 * sqrt(pow(e0_18/p0_18,2) + pow(e1_18/p1_18,2) - 2*frp_data_S18->GetCovarianceMatrix()(0,1)/(p0_18*p1_18));

	double x_shift_err = sqrt(pow(err_data_S12, 2) + pow(err_data_S18, 2));

	cout<<"\n---> shift in beam-Y position = "<<x_shift<<"±"<<x_shift_err<<" mm"<<endl;

	for(int i(0); i<gr_data_S12->GetN(); i++) { 

		gr_shift->SetPoint(i, gr_data_S12->GetX()[i] + x_shift, gr_data_S12->GetY()[i]);
		gr_shift->SetPointError(i, gr_data_S12->GetEX()[i], gr_data_S12->GetEY()[i]);

	}

	TF1 *new_fit = new TF1("new_fit", "[0]+[1]*x", gr_shift->GetX()[1], gr_shift->GetX()[(gr_shift->GetN())-1]);
	gr_shift->Fit(new_fit, "R");

	// Draw on same canvas 
	TCanvas *c = new TCanvas("c","",800,600);
  	TLegend *l = new TLegend(0.15, 0.70, 0.50, 0.89); 
	
	// Dummy graph because of ridiculous ROOT range issues
	TGraph *dummy = new TGraph();
	dummy->SetPoint(0, -0.2, 0);
	dummy->SetPoint(1, 1.4, 0);
	dummy->SetMarkerSize(0);	
	dummy->GetYaxis()->SetRangeUser(1e-4, 6.5e-4);

	dummy->GetXaxis()->SetTitleSize(.04);
	dummy->GetYaxis()->SetTitleSize(.04);
	dummy->GetXaxis()->SetTitleOffset(1.1);
	dummy->GetYaxis()->SetTitleOffset(1.2);
	dummy->GetXaxis()->CenterTitle(true);
	dummy->GetYaxis()->CenterTitle(true);
	dummy->GetYaxis()->SetMaxDigits(4);
	dummy->SetTitle(";Vertical beam position [mm];#LT#theta_{y}#GT/p [mrad/MeV]");
	dummy->Draw("AP");

  	l->SetBorderSize(0);
  	l->SetTextSize(24);
  	l->SetTextFont(44);

  	gr_shift->GetXaxis()->SetTitleSize(.04);
  	gr_shift->GetYaxis()->SetTitleSize(.04);
  	gr_shift->GetXaxis()->SetTitleOffset(1.1);
  	gr_shift->GetYaxis()->SetTitleOffset(1.15);
  	gr_shift->GetXaxis()->CenterTitle(true);
  	gr_shift->GetYaxis()->CenterTitle(true);
  	gr_shift->GetYaxis()->SetMaxDigits(4);
  	gr_shift->SetTitle();
  	gr_shift->SetMarkerColor(kBlack);
  	gr_shift->SetLineColor(kBlack);
	gr_shift->SetMarkerStyle(20);
  	gr_data_S18->SetMarkerColor(kRed);
  	gr_data_S18->SetLineColor(kRed);
	gr_data_S18->SetMarkerStyle(20);

   	gr_sim_S12->SetMarkerColor(kBlack);
  	gr_sim_S12->SetLineColor(kBlack);
	gr_sim_S12->SetMarkerStyle(24);
   	gr_sim_S18->SetMarkerColor(kRed);
  	gr_sim_S18->SetLineColor(kRed);
	gr_sim_S18->SetMarkerStyle(24);

	gr_shift->Draw("P SAME");
	gr_data_S18->Draw("P SAME");
	gr_sim_S12->Draw("P SAME");
	gr_sim_S18->Draw("P SAME");

	new_fit->SetLineColor(kBlack);
	fit_data_S18->SetLineColor(kRed);

	new_fit->Draw("SAME");
	fit_data_S18->Draw("SAME");

	TF1 *fit_extrap_S12 = new TF1("fit_extrap_S12", "[0]+[1]*x", gr_sim_S12->GetX()[0], gr_shift->GetX()[1]);
	fit_extrap_S12->SetParameters(new_fit->GetParameter(0), new_fit->GetParameter(1));
	fit_extrap_S12->SetLineColor(kBlack);
	fit_extrap_S12->SetLineStyle(kDashed);
	fit_extrap_S12->Draw("SAME");

	TF1 *fit_extrap_S18 = new TF1("fit_extrap_S18", "[0]+[1]*x", gr_sim_S18->GetX()[0], gr_data_S18->GetX()[1]);
	fit_extrap_S18->SetParameters(fit_data_S18->GetParameter(0), fit_data_S18->GetParameter(1));
	fit_extrap_S18->SetLineColor(kRed);
	fit_extrap_S18->SetLineStyle(kDashed);
	fit_extrap_S18->Draw("SAME");

	l->AddEntry(gr_data_S12, "Data (S12)");
	l->AddEntry(gr_sim_S18, "Sim (S12)");
	l->AddEntry(gr_data_S18, "Data (S18)");
	l->AddEntry(gr_sim_S18, "Sim (S18)");

	l->Draw("SAME");

	string fname = "../Images/MC/dMu/5.4e-18/VerticalOffset/SlopeVsShiftedBeamPosition";

  	c->SaveAs((fname+".pdf").c_str());
  	c->SaveAs((fname+".png").c_str());
  	c->SaveAs((fname+".C").c_str());

 	delete c;

	return;

}

void RunSlopeVsSlope(TFile *fout) {

	vector<TGraphErrors*> gr_data_; 
	vector<TGraphErrors*> gr_sim_;

	vector<string> ds_ = {"Run-1a", "Run-1b", "Run-1c", "Run-1d"};
	vector<string> stn_ = {"S12", "S18"};

	for(auto& stn : stn_) {	

		TGraphErrors *gr_data = new TGraphErrors();
		TGraphErrors *gr_sim = new TGraphErrors();

		TF1 *slope1 = ((TGraphErrors*)fout->Get(("SimFits/"+stn+"_gr_Y_vs_p").c_str()))->GetFunction((stn+"_fit_Y_vs_p").c_str());
		TF1 *slope2 = ((TGraphErrors*)fout->Get(("SimFits/"+stn+"_gr_thetaY_vs_p").c_str()))->GetFunction((stn+"_fit_thetaY_vs_p").c_str());

		gr_sim->SetPoint(0, slope2->GetParameter(1), slope1->GetParameter(1)); // ((TGraphErrors*)fout->Get(("SimFits/"+stn+"_gr_thetaY_vs_p").c_str()))->GetFunction((stn+"_fit_thetaY_vs_p").c_str())->GetParameter(1), ((TGraphErrors*)fout->Get(("SimFits/"+stn+"_gr_thetaY_vs_p").c_str()))->GetFunction((stn+"_fit_Y_vs_p").c_str())->GetParameter(1));
		gr_sim->SetPointError(0, slope2->GetParError(1), slope1->GetParError(1)); // ((TGraphErrors*)fout->Get(("SimFits/"+stn+"_gr_Y_vs_p").c_str()))->GetFunction((stn+"_fit_thetaY_vs_p").c_str())->GetParError(1), ((TGraphErrors*)fout->Get(("SimFits/"+stn+"_gr_thetaY_vs_p").c_str()))->GetFunction((stn+"_fit_Y_vs_p").c_str())->GetParError(1));

		int i = 0;

		for(auto& ds : ds_) {

			// y/p 
			slope1 = ((TGraphErrors*)fout->Get(("DataFits/"+ds+"/"+stn+"_gr_Y_vs_p").c_str()))->GetFunction((stn+"_fit_Y_vs_p").c_str());
			// <theta_y>/p
			slope2 = ((TGraphErrors*)fout->Get(("DataFits/"+ds+"/"+stn+"_gr_thetaY_vs_p").c_str()))->GetFunction((stn+"_fit_thetaY_vs_p").c_str());

			gr_data->SetPoint(i, slope2->GetParameter(1), slope1->GetParameter(1));
			gr_data->SetPointError(i, slope2->GetParError(1), slope1->GetParError(1));

			i++;

		}

		gr_data_.push_back(gr_data);
		gr_sim_.push_back(gr_sim);

	}

	// Draw on same canvas 
	TCanvas *c = new TCanvas("c","",800,600);
  	//TLegend *l = new TLegend(0.15, 0.70, 0.50, 0.89); 
  	//TLegend *l = new TLegend(0.15, 0.15, 0.35, 0.34); 
  	TLegend *l = new TLegend(0.15, 0.40, 0.35, 0.60); 
	
	// Dummy graph because of ridiculous ROOT range issues
	TGraph *dummy = new TGraph();
	dummy->SetPoint(0, 0, 0);
	dummy->SetPoint(1, 1e-3, 0);
	dummy->SetMarkerSize(0);	
	dummy->GetYaxis()->SetRangeUser(-2.6e-4, 5e-5);
	dummy->GetXaxis()->SetRangeUser(1e-4, 6e-4);

	dummy->GetXaxis()->SetTitleSize(.04);
	dummy->GetYaxis()->SetTitleSize(.04);
	dummy->GetXaxis()->SetTitleOffset(1.1);
	dummy->GetYaxis()->SetTitleOffset(1.2);
	dummy->GetXaxis()->CenterTitle(true);
	dummy->GetYaxis()->CenterTitle(true);
	dummy->GetYaxis()->SetMaxDigits(4);
	dummy->SetTitle(";#LT#theta_{y}#GT/p [mm/MeV];#LTy#GT/p [mrad/MeV];");
	dummy->Draw("AP");

  	l->SetBorderSize(0);
  	l->SetTextSize(24);
  	l->SetTextFont(44);

  	gr_data_.at(0)->GetXaxis()->SetTitleSize(.04);
  	gr_data_.at(0)->GetYaxis()->SetTitleSize(.04);
  	gr_data_.at(0)->GetXaxis()->SetTitleOffset(1.1);
  	gr_data_.at(0)->GetYaxis()->SetTitleOffset(1.15);
  	gr_data_.at(0)->GetXaxis()->CenterTitle(true);
  	gr_data_.at(0)->GetYaxis()->CenterTitle(true);
  	gr_data_.at(0)->GetYaxis()->SetMaxDigits(4);

  	gr_data_.at(0)->SetTitle();

  	gr_data_.at(0)->SetMarkerColor(kBlack);
  	gr_data_.at(0)->SetLineColor(kBlack);
	gr_data_.at(0)->SetMarkerStyle(20);

  	gr_data_.at(1)->SetMarkerColor(kRed);
  	gr_data_.at(1)->SetLineColor(kRed);
	gr_data_.at(1)->SetMarkerStyle(20);

   	gr_sim_.at(0)->SetMarkerColor(kBlack);
  	gr_sim_.at(0)->SetLineColor(kBlack);
	gr_sim_.at(0)->SetMarkerStyle(24);

   	gr_sim_.at(1)->SetMarkerColor(kRed);
  	gr_sim_.at(1)->SetLineColor(kRed);
	gr_sim_.at(1)->SetMarkerStyle(24);

	gr_data_.at(0)->Draw("P SAME");
	gr_data_.at(1)->Draw("P SAME");
	gr_sim_.at(0)->Draw("P SAME");
	gr_sim_.at(1)->Draw("P SAME");

	//TF1 *fit_S12 = new TF1("fit_S12", "[0]", gr_data_.at(0)->GetX()[1], gr_data_.at(0)->GetX()[gr_data_.at(1)->GetN()-1]);
	//TF1 *fit_S18 = new TF1("fit_S18", "[0]", gr_data_.at(1)->GetX()[1], gr_data_.at(1)->GetX()[gr_data_.at(1)->GetN()-1]);

	TF1 *fit_S12 = new TF1("fit_S12", "[0]", 0, 6e-4); //gr_data_.at(0)->GetX()[1], gr_data_.at(0)->GetX()[gr_data_.at(1)->GetN()-1]);
	TF1 *fit_S18 = new TF1("fit_S18", "[0]", 0, 6e-4); //gr_data_.at(1)->GetX()[1], gr_data_.at(1)->GetX()[gr_data_.at(1)->GetN()-1]);


	gr_data_.at(0)->Fit(fit_S12, "R");
	gr_data_.at(1)->Fit(fit_S18, "R");

	fit_S12->SetLineColor(kBlack); 
	fit_S18->SetLineColor(kRed); 

	fit_S12->Draw("SAME");
	fit_S18->Draw("SAME");

	l->AddEntry(gr_data_.at(0), "Data (S12)");
	l->AddEntry(gr_sim_.at(0), "Sim (S12)");
	l->AddEntry(gr_data_.at(1), "Data (S18)");
	l->AddEntry(gr_sim_.at(1), "Sim (S18)");

	l->Draw("SAME");

	string fname = "../Images/MC/dMu/5.4e-18/VerticalOffset/SlopeVsSlope";

  	c->SaveAs((fname+".pdf").c_str());
  	c->SaveAs((fname+".png").c_str());
  	c->SaveAs((fname+".C").c_str());

 	delete c;

	return;

}

void VerticalOffsetSlope4() { 

	// Sim fits

	TString foutName = "../Plots/verticalOffsetFits.test.root";
	TFile *fout = new TFile(foutName, "RECREATE");

	RunSimFits(fout);
	RunDataFits(fout);
	RunSlopes(fout);
	RunShiftedSlopes(fout);
	// Need a better name
	RunSlopeVsSlope(fout);

	cout<<"\n---> Written plots to "<<foutName<<", "<<fout<<endl;

	fout->Close();

	return;

}