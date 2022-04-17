// Sam Grant 2022
// - Fit S0, S12, S18 in simulation 
// - Fit S12, S18 in data
// - Print slopes

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
void DrawSimThetaYvsMomFits(TGraphErrors *gr0, TGraphErrors *gr12, TGraphErrors *gr18, string fname, double ymin, double ymax, string recoOrTruth) { 

  	cout<<"\n---> Drawing sim fits"<<endl;

  	TCanvas *c = new TCanvas("c","",800,600);
  	TLegend *l = new TLegend(0.15, 0.75, 0.50, 0.89); 
	
  	l->SetBorderSize(0);
  	l->SetTextSize(24);
  	l->SetTextFont(44);

  	gr0->GetYaxis()->SetRangeUser(ymin, ymax);
  	gr0->GetXaxis()->SetTitleSize(.04);
  	gr0->GetYaxis()->SetTitleSize(.04);
  	gr0->GetXaxis()->SetTitleOffset(1.1);
  	gr0->GetYaxis()->SetTitleOffset(1.15);
  	gr0->GetXaxis()->CenterTitle(true);
  	gr0->GetYaxis()->CenterTitle(true);
  	gr0->GetYaxis()->SetMaxDigits(4);

  	gr0->SetTitle((";"+recoOrTruth+" vertex momentum [MeV];"+recoOrTruth+" #LT#theta_{y}#GT [mrad] / 250 MeV").c_str());

  	gr0->SetMarkerColor(kBlack);
  	gr0->SetLineColor(kBlack);
	gr0->SetMarkerStyle(20);

  	gr12->SetMarkerColor(kRed);
  	gr12->SetLineColor(kRed);
	gr12->SetMarkerStyle(20);

   	gr18->SetMarkerColor(kBlue);
  	gr18->SetLineColor(kBlue);
	gr18->SetMarkerStyle(20);

	gr0->Draw("AP");
	gr12->Draw("P SAME");
	gr18->Draw("P SAME");

	// Get fits
	TF1* fit0 = (TF1*)gr0->GetFunction("S0_fit");
	TF1* fit12 = (TF1*)gr12->GetFunction("S12_fit");
	TF1* fit18 = (TF1*)gr18->GetFunction("S18_fit");

	fit0->SetLineColor(kBlack);
	fit12->SetLineColor(kRed);
	fit18->SetLineColor(kBlue);

	fit0->Draw("SAME");
	fit12->Draw("SAME");
	fit18->Draw("SAME");

	l->AddEntry(gr0, "S0");
	l->AddEntry(gr12, "S12");
	l->AddEntry(gr18, "S18");

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

void DrawDataThetaYvsMomFits(vector<TGraphErrors*> gr_, vector<string> names_, string title, string fname, double ymin, double ymax) {

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
    	
    	l->AddEntry(gr_.at(i), (names_.at(i)).c_str());
      	if(i==0) gr_.at(i)->Draw("AP");
      	else gr_.at(i)->Draw("P SAME");

      	TF1 *fit = gr_.at(i)->GetFunction("fit");
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

void RunSimFits(string config, TFile *fout) {

	fout->mkdir((config+"SimFits").c_str()); 

	// Fit S0, S12, S18 with no vertical offset correction in truth simulation
	TString finNameSim = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_track"+config+"_WORLD_250MeV_BQ_noVertCorr.root";
	TFile *finSim = TFile::Open(finNameSim);

	cout<<"\n---> Opened sim file "<<finNameSim<<", "<<finSim<<endl;

	// Holder for <theta_y>/y vs offset fits
	vector<TF1*> simOffsetFunc_;
	//vector<TFitResultPtr> simOffsetFrp_;
	vector<TGraphErrors*> simOffsetGr_;

	vector<string> stn_ = {"S0", "S12", "S18"};

	for(auto &stn : stn_) { 	

		TGraphErrors *gr = ResetGraph((TGraphErrors*)finSim->Get(("MomentumBinnedAnalysis/ParameterScans/"+stn+"_c_vs_p_thetaY").c_str()), xmin, xmax);

		cout<<"---> Got graph for "<<stn<<", "<<gr<<endl;

		TF1 *fit = new TF1((stn+"_fit").c_str(), "[0]+[1]*x", gr->GetX()[0], gr->GetX()[gr->GetN()-1]);
		
		gr->Fit(fit, "R");

		// Fit result (for cov matrix)
		TFitResultPtr frp = gr->Fit(fit,"SMQR");

		simOffsetFunc_.push_back(fit);
		//simOffsetFrp_.push_back(frp);
		simOffsetGr_.push_back(gr);

		gr->SetName((stn+"_fit").c_str());
		
		fout->cd((config+"SimFits").c_str()); 

		gr->Write();

	}	

	// Draw truth sim fits
	
	// DrawSimThetaYvsMomFits(TGraphErrors *gr0, TGraphErrors *gr12, TGraphErrors *gr18, string fname, double ymin, double ymax, string recoOrTruth) { 

	DrawSimThetaYvsMomFits(simOffsetGr_.at(0), simOffsetGr_.at(1), simOffsetGr_.at(2),  "../Images/MC/dMu/5.4e-18/VerticalOffset/ThetaYvsMomFits"+config+"Sim", -0.6, 0.2, config);

	finSim->Close();

	return;


}

void RunDataFits(TFile *fout) {

	fout->mkdir("DataFits");

	vector<string> ds_ = {"Run-1a", "Run-1b", "Run-1c", "Run-1d"};
	// Reset stns
	vector<string> stn_ = {"S12", "S18"};

	int i_stn = 0;

	cout<<"Station, Dataset, Vertical offset [mm], Error [mm]"<<endl;

	for(auto& stn : stn_) {

		vector<TGraphErrors*> gr_; 

		for(auto& ds : ds_) {

			TString finNameData = "../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_"+ds+"_250MeV_BQ_timeVertCorr.root";

			TFile *finData = TFile::Open(finNameData);

			cout<<"\n---> Opened data file "<<finNameData<<", "<<finData<<endl;

			//cout<<"Opened file "<<finName<<", "<<fin<<endl;

			TGraphErrors *gr = ResetGraph( (TGraphErrors*)finData->Get( ("MomentumBinnedAnalysis/ParameterScans/"+stn+"_c_vs_p").c_str() ) , xmin, xmax);

			TF1 *fit = new TF1("fit", "[0]+[1]*x", gr->GetX()[0], gr->GetX()[gr->GetN()-1]);

			gr->Fit(fit, "R");

			gr_.push_back(gr);

			finData->Close();

			if(stn=="S12") fout->mkdir(("DataFits/"+ds).c_str()); 
			fout->cd(("DataFits/"+ds).c_str());

			gr->SetName((stn+"_fit").c_str());

			gr->Write();

		}

		DrawDataThetaYvsMomFits(gr_, ds_, stn+";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV", "../Images/MC/dMu/5.4e-18/VerticalOffset/"+stn+"_AvgThetaYvsMomFitsData", -1, 0.5);
		
	}

	return;

}

void RunSlopes(TFile *fout, string recoOrTruth) {

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

			TF1 *data_fit = ((TGraphErrors*)fout->Get(("DataFits/"+ds+"/"+stn+"_fit").c_str()))->GetFunction("fit");
			TH1D *h_data = (TH1D*)finData->Get(("SimultaneousAnalysis/"+stn+"_Y").c_str());

			gr_data->SetPoint(i, h_data->GetMean(), data_fit->GetParameter(1));
			gr_data->SetPointError(i, h_data->GetMeanError(), data_fit->GetParError(1));

			i++;

			finData->Close();

		}

		// Fit data and write

		TF1 *fit = new TF1("fit", "[0]+[1]*x", gr_data->GetX()[1], gr_data->GetX()[gr_data->GetN()-1]);

		gr_data->Fit(fit, "R");

		fout->cd("SlopesData");

		gr_data->SetName((stn+"_fit").c_str());
		gr_data->Write(); // for some reason this write it twice

		gr_data_.push_back(gr_data);

		TF1 *sim_fit = ((TGraphErrors*)fout->Get((recoOrTruth+"SimFits/"+stn+"_fit").c_str()))->GetFunction((stn+"_fit").c_str());
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

  	//gr_data_.at(0)->GetYaxis()->SetRangeUser(;
  	//gr_data_.at(0)->GetXaxis()->SetRangeUser(-0.5, 1.5);
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

	fit12_extrap->Draw("SAME");


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
/*	
	fit12->SetLineColor(kRed);
	fit18->SetLineColor(kBlue);

	fit0->Draw("SAME");
	fit12->Draw("SAME");
	fit18->Draw("SAME");

 	*/

	string fname = "../Images/MC/dMu/5.4e-18/VerticalOffset/SlopeVsBeamPosition"+recoOrTruth;

  	c->SaveAs((fname+".pdf").c_str());
  	c->SaveAs((fname+".png").c_str());
  	c->SaveAs((fname+".C").c_str());

 	delete c;

	finSim->Close();

	return;

}

void VerticalOffsetSlope3() { 

	// Sim fits

	TString foutName = "../Plots/verticalOffsetFits.root";
	TFile *fout = new TFile(foutName, "RECREATE");

	RunSimFits("Truth", fout);
	RunSimFits("Reco", fout);
	RunDataFits(fout);

	RunSlopes(fout, "Truth");
	RunSlopes(fout, "Reco");

	cout<<"\n---> Written plots to "<<foutName<<", "<<fout<<endl;

	fout->Close();

	return;

}

/*Station, Dataset, Vertical offset [mm], Error [mm]

S12, Run-1a, 12.6889, 32.2976
S12, Run-1b, 11.9061, 30.3107
S12, Run-1c, 23.1748, 58.8422
S12, Run-1d, 36.8448, 93.4857

S18, Run-1a, 14.9119, 37.9249
S18, Run-1b, 9.1374, 23.316
S18, Run-1c, 19.0542, 48.4035
S18, Run-1d, 33.9083, 86.0426*/