#include <iostream>
#include "Utils.h"

using namespace std;

double xmin = 1000;
double xmax = 2500;

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

void DrawTGraphErrors(TGraphErrors *graph, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	graph->SetTitle(title.c_str());
	graph->GetXaxis()->SetTitleSize(.04);
	graph->GetYaxis()->SetTitleSize(.04);
	graph->GetXaxis()->SetTitleOffset(1.1);
	graph->GetYaxis()->SetTitleOffset(1.2);
	graph->GetXaxis()->CenterTitle(true);
	graph->GetYaxis()->CenterTitle(true);
	graph->GetYaxis()->SetMaxDigits(4);
	graph->SetMarkerStyle(20); //  Full circle
	graph->Draw("APL");
	//c->SetGridx();

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
	//gStyle->SetOptStat(2210);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.1);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);
	hist->SetLineWidth(3);
	hist->SetLineColor(1);

	//c->SetRightMargin(0.13);

	hist->Draw("E");
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

// Apologies foe confusing numbering		
void DrawOverlay(TGraphErrors *gr1, TGraphErrors *gr3, TGraphErrors *gr2, std::string title, std::string fname) {

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
	gr1->GetYaxis()->SetRangeUser(0.00, 0.35);
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
		l->AddEntry(gr3, "Truth vertices");
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

  	TString rms = Round(hist->GetRMS(), 2);
  	TString rms_err = Round(hist->GetRMSError(), 1);

  	TPaveText *names = new TPaveText(0.575,0.80,0.675,0.89,"NDC");
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

	TH1D *h_res = new TH1D("h_res", ";Residuals [mrad];Entries", 20, -0.05, 0.05);

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
/*
void RunSimDerivedCorrections(string config, string title) {

	TFile *f1;
	TFile *f2;
	TFile *f3;

	if(config=="0") { // Neither sample has any vertical offset correction
		f1 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr.root");
		f2 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr_accCorr.root");
		f3 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackReco_WORLD_250MeV_BQ_noVertCorr.root");
	} else if(config=="1") { // Reco vertices has a vertical offset correction 
		f1 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr.root");
		f2 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr_accCorr.root");
		f3 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackReco_WORLD_250MeV_BQ.root");
	} else if(config=="2") { // All decays has a vertical offset correction 
		f1 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ.root");
		f2 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_accCorr.root");//.c_str());
		f3 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackReco_WORLD_250MeV_BQ_noVertCorr.root");
	} else if(config=="3") { // Both samples have a vertical offset correction 
		f1 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ.root");
		f2 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_accCorr.root");//.c_str());
		f3 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackReco_WORLD_250MeV_BQ.root");
	}

	TGraphErrors *gr1 = (TGraphErrors*)f1->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY");
	TGraphErrors *gr2 = (TGraphErrors*)f2->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY");
	TGraphErrors *gr3 = (TGraphErrors*)f3->Get("MomentumBinnedAnalysis/ParameterScans/S0S12S18_AEDM_vs_p_thetaY");

	TGraphErrors *gr1_reset = ResetGraph(gr1, xmin, xmax);
	TGraphErrors *gr2_reset = ResetGraph(gr2, xmin, xmax);
	TGraphErrors *gr3_reset = ResetGraph(gr3, xmin, xmax);

	DrawOverlay(gr1_reset, gr2_reset, gr3_reset, title, "../Images/MC/Acceptance/truth/CorrectionResults/AllDecaysAndTrackReco_AEDM_vs_p_overlay."+config);

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


	DrawResiduals(h_res, title+"", "../Images/MC/Acceptance/truth/CorrectionResults/Residuals_AEDM_vs_p."+config);

	// Make ratio of gr2/gr1
	TGraphErrors *gr_ratio = new TGraphErrors();


	for (int i(0); i<gr1->GetN(); i++) {

		double x = gr1->GetX()[i];

		double y = gr2->GetY()[i]/gr1->GetY()[i];

		// from different samples so the error should be uncorrelated 
		double ey = y * sqrt( pow(gr1->GetEY()[i]/gr1->GetY()[i],2) + pow(gr2->GetEY()[i]/gr2->GetY()[i],2) );

		gr_ratio->SetPoint(i, x, y);
		gr_ratio->SetPointError(i, 0, ey);

	}

	DrawTGraphErrors(gr_ratio, ";Decay vertex momentum [MeV];Acceptance weighting / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/AcceptanceWeightingVsMomentum."+config);

	// Easier to use a histogram during the actual correction
	int nBins = gr_ratio->GetN()+1;
	TH1D *h1_ratio = new TH1D("h1_ratio", ";Decay vertex momentum [MeV];Acceptance weighting / 250 MeV", gr_ratio->GetN(), 0, 3000);

	for(int i(0); i<gr_ratio->GetN(); i++) {
		h1_ratio->SetBinContent(i+1, gr_ratio->GetY()[i]);
		h1_ratio->SetBinError(i+1, gr_ratio->GetEY()[i]);
	}
	
	string foutName = "../Plots/MC/Acceptance/Plots/acceptanceWeightingVsMomentum_250MeV."+config+".root";
	TFile *fout = new TFile(foutName.c_str(), "RECREATE");
	
	fout->mkdir("graphs"); fout->cd("graphs");

	gr_ratio->SetName("acceptanceWeightingVsMomentum");
	gr_ratio->Write();

	fout->mkdir("hists"); fout->cd("hists");

	h1_ratio->Write();

	f1->Close();
	f2->Close();
	f3->Close();

	fout->Close();

	cout<<"Written plots to "<<foutName<<", "<<fout<<endl;

	return;

}

void RunDataDerivedCorrections(string dataset, string title) {

	TFile *fin1 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr.root");
	TFile *fin2 = TFile::Open(("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr_dataAccCorr_"+dataset+".root").c_str());
	TFile *fin3 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackReco_WORLD_250MeV_BQ_noVertCorr.root");

	string foutName = "../Plots/MC/Acceptance/Plots/acceptanceWeightingVsMomentum_250MeV_dataAccCorr_"+dataset+".root";
	TFile *fout = new TFile(foutName.c_str(), "RECREATE");
	fout->mkdir("graphs"); fout->mkdir("hists");

	vector<string> stn_ = {"S12", "S18", "S12S18"};

	for(auto& stn : stn_) {

		TGraphErrors *gr1 = (TGraphErrors*)fin1->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY");
		TGraphErrors *gr2 = (TGraphErrors*)fin2->Get(("MomentumBinnedAnalysis/ParameterScans/"+stn+"_AEDM_vs_p_thetaY").c_str());
		TGraphErrors *gr3 = (TGraphErrors*)fin3->Get(("MomentumBinnedAnalysis/ParameterScans/"+stn+"_AEDM_vs_p_thetaY").c_str());

		TGraphErrors *gr1_reset = ResetGraph(gr1, xmin, xmax);
		TGraphErrors *gr2_reset = ResetGraph(gr2, xmin, xmax);
		TGraphErrors *gr3_reset = ResetGraph(gr3, xmin, xmax);

		DrawOverlay(gr1_reset, gr2_reset, gr3_reset, dataset+": "+stn, "../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_AllDecaysAndTrackReco_AEDM_vs_p_overlay_dataAccCorr_"+dataset);

		TH1D *h_res = GetResiduals(gr2_reset, gr3_reset);

		int underflow_bin = 0;
		int overflow_bin = h_res->GetNbinsX()+1;
		int underflow_content = h_res->GetBinContent(underflow_bin);
		int overflow_content = h_res->GetBinContent(overflow_bin);

		if(underflow_content != 0) cout<<"Residual histogram has "<<underflow_content<<" underflows"<<endl;
		if(overflow_content != 0) cout<<"Residual histogram has "<<overflow_content<<" overflows"<<endl;

		DrawResiduals(h_res, title, "../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_Residuals_AEDM_vs_p_dataAccCorr_"+dataset);

		// Make ratio of gr2/gr1
		TGraphErrors *gr_ratio = new TGraphErrors();

		for (int i(0); i<gr1->GetN(); i++) {

			double x = gr1->GetX()[i];
			double y = gr2->GetY()[i]/gr1->GetY()[i];

			// Correlated errors again :/ 
			double ey = gr1->GetEY()[i];

			gr_ratio->SetPoint(i, x, y);
			gr_ratio->SetPointError(i, 0, ey);

		}

		DrawTGraphErrors(gr_ratio, dataset+": "+stn+";Decay vertex momentum [MeV];Acceptance weighting / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_AcceptanceWeightingVsMomentum_"+dataset);

		// Easier to use a histogram during the actual correction
		int nBins = gr_ratio->GetN()+1;
		TH1D *h1_ratio = new TH1D((stn+"_h1_ratio").c_str(), (stn+";Decay vertex momentum [MeV];Acceptance weighting / 250 MeV").c_str(), gr_ratio->GetN(), 0, 3000);

		for(int i(0); i<gr_ratio->GetN(); i++) {
			h1_ratio->SetBinContent(i+1, gr_ratio->GetY()[i]);
			h1_ratio->SetBinError(i+1, gr_ratio->GetEY()[i]);
		}


		fout->cd("graphs");
		gr_ratio->SetName((stn+"_acceptanceWeightingVsMomentum").c_str());
		gr_ratio->Write();

		fout->cd("hists");
		h1_ratio->Write();


	}

	fin1->Close();
	fin2->Close();
	fin3->Close();

	fout->Close();

	cout<<"Written plots to "<<foutName<<", "<<fout<<endl;

	return;

}

void DrawDataDerivedAcceptanceWeightings() { 

	vector<string> ds_ = {"Run-1a", "Run-1b", "Run-1c", "Run-1d"};
	vector<string> stn_ = {"S12", "S18", "S12S18"};
	vector<int> colours_ = {4, 807, 413, 614};
	
	for(auto& stn : stn_) {

		vector<TGraphErrors*> gr_;



		for(auto& ds : ds_) {

			TFile *fin = TFile::Open(("../Plots/MC/Acceptance/Plots/acceptanceWeightingVsMomentum_250MeV_dataAccCorr_"+ds+".root").c_str());

			TGraphErrors *gr = (TGraphErrors*)fin->Get(("graphs/"+stn+"_acceptanceWeightingVsMomentum").c_str());
			gr_.push_back(gr);

			fin->Close();

		}
		
		//	gr_.at(0)->SetTitle(title.c_str())

		TCanvas *c = new TCanvas("c","c",800,600);
		//TLegend *l = new TLegend(0.11,0.60,0.49,0.89);
		TLegend *l = new TLegend(0.11,0.75,0.49,0.89);
		l->SetNColumns(2);
		gr_.at(0)->SetTitle(stn.c_str());
		gr_.at(0)->GetXaxis()->SetTitleSize(.04);
		gr_.at(0)->GetYaxis()->SetTitleSize(.04);
		gr_.at(0)->GetXaxis()->SetTitleOffset(1.1);
		gr_.at(0)->GetYaxis()->SetTitleOffset(1.2);
		gr_.at(0)->GetXaxis()->CenterTitle(true);
		gr_.at(0)->GetYaxis()->CenterTitle(true);
		gr_.at(0)->GetYaxis()->SetMaxDigits(4);
		gr_.at(0)->SetMarkerStyle(20); //  Full circle

		gr_.at(0)->SetMarkerColor(colours_.at(0));
		gr_.at(0)->SetLineColor(colours_.at(0));
		gr_.at(1)->SetMarkerColor(colours_.at(1));
		gr_.at(1)->SetLineColor(colours_.at(1));
		gr_.at(2)->SetMarkerColor(colours_.at(2));
		gr_.at(2)->SetLineColor(colours_.at(2));
		gr_.at(3)->SetMarkerColor(colours_.at(3));
		gr_.at(3)->SetLineColor(colours_.at(3));

		gr_.at(0)->Draw("APL");
		gr_.at(1)->Draw("PL SAME");
		gr_.at(2)->Draw("PL SAME");
		gr_.at(3)->Draw("PL SAME");

		l->AddEntry(gr_.at(0), "Run-1a");
		l->AddEntry(gr_.at(1), "Run-1b");
		l->AddEntry(gr_.at(2), "Run-1c");
		l->AddEntry(gr_.at(3), "Run-1d");

		l->SetBorderSize(0);
		l->Draw("SAME");


		c->SaveAs(("../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_AcceptanceWeightingVsMomentumRun1Overlay.png").c_str());
		c->SaveAs(("../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_AcceptanceWeightingVsMomentumRun1Overlay.pdf").c_str());
		c->SaveAs(("../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_AcceptanceWeightingVsMomentumRun1Overlay.C").c_str());

	}

	return;

}*/


void DrawGausTrials(vector<TH1D*> hists_, std::string title, std::string fname) { 

  TCanvas *c = new TCanvas("c","c",800,600);

  hists_.at(0)->SetTitle(title.c_str());
  hists_.at(0)->GetXaxis()->SetTitleSize(.04);
  hists_.at(0)->GetYaxis()->SetTitleSize(.04);
  hists_.at(0)->GetXaxis()->SetTitleOffset(1.1);
  hists_.at(0)->GetYaxis()->SetTitleOffset(1.1);
  hists_.at(0)->GetXaxis()->CenterTitle(true);
  hists_.at(0)->GetYaxis()->CenterTitle(true);
  hists_.at(0)->GetYaxis()->SetMaxDigits(4);
  hists_.at(0)->GetYaxis()->SetRangeUser(0,1);//Draw("E");

  for(int i = 0; i < hists_.size(); i++) {

    double colour = colour = i*0.1;
    hists_.at(i)->SetMarkerColor(colour);
    hists_.at(i)->SetLineColor(colour);

    if(i==0) hists_.at(i)->Draw("E");
    else hists_.at(i)->Draw("E SAME");
  }

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}


void GausTrials(TFile *fout, TH1D *h_ratio, int nTrials, string stn) { 

   	// Set random number pointer with seed
 	TRandom3 *randGen = new TRandom3(12345);

 	vector<TH1D*> trialHists_;

 	for(int i_trial(0); i_trial<nTrials; i_trial++) {


 		TH1D *h_ratio_trial = (TH1D*)h_ratio->Clone(Form("h_ratio_trial_%d",i_trial));

		// Loop thro' bins
		for(int i_bin(0); i_bin<h_ratio->GetNbinsX(); i_bin++) { 

			double centralVal = h_ratio->GetBinContent(i_bin+1);
			double errorBar = h_ratio->GetBinError(i_bin+1);

			// Draw from gaussian
			// Width is one sigma (error bar)
			h_ratio_trial->SetBinContent(i_bin+1, randGen->Gaus(centralVal, errorBar));
			h_ratio_trial->SetBinError(i_bin+1, 0);//randGen->Gaus(centralVal,2*errorBar));

		}


		h_ratio_trial->Write();

		trialHists_.push_back(h_ratio_trial);

	}

	DrawGausTrials(trialHists_, "", "../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_TrialsOverlay_AcceptanceWeightingVsMomentum");

	return;
}


// Ignore other "Run" functions
void Run(bool write, string misalign) {

	TString foutName = "../Plots/MC/Acceptance/Plots/acceptanceWeightingVsMomentum_250MeV"+misalign+".root";
	if(!write) foutName = "delete_me.root";

	TFile *fout = new TFile(foutName, "RECREATE");
	fout->mkdir("graphs"); fout->mkdir("hists"); fout->mkdir("trials");

	TString f1Name = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr.root";
	TString f2Name = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr.root";

	TFile *f1 = TFile::Open(f1Name);
	TFile *f2 = TFile::Open(f2Name);

	cout<<"---> Got base files "<<f1Name<<", "<<f1<<", "<<f2Name<<", "<<f2<<endl;

	vector<string> stn_ = {"S12", "S18", "S12S18"};

	for(auto& stn : stn_) {

		TString f3Name = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr_accWeight"+stn+misalign+".root";
		TFile *f3 = TFile::Open(f3Name);

		cout<<"---> Got corrected file for "<<stn<<", "<<f3Name<<", "<<f3<<endl;

		TGraphErrors *gr1 = (TGraphErrors*)f1->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY"); 
		TGraphErrors *gr2 = (TGraphErrors*)f2->Get(("MomentumBinnedAnalysis/ParameterScans/"+stn+"_AEDM_vs_p_thetaY").c_str());
		TGraphErrors *gr3 = (TGraphErrors*)f3->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY");

		// For presentation only
		TGraphErrors *gr1_reset = ResetGraph(gr1, xmin, xmax);
		TGraphErrors *gr2_reset = ResetGraph(gr2, xmin, xmax);
		TGraphErrors *gr3_reset = ResetGraph(gr3, xmin, xmax);

		DrawOverlay(gr1_reset, gr2_reset, gr3_reset, stn+";Decay vertex momentum [MeV];A_{EDM} [mrad] / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_AcceptanceCorrected_AEDM_vs_p_overlay"+misalign);

		// Make ratio of gr2/gr1
		
		//TGraphErrors *gr_ratio_plus = new TGraphErrors();
		//TGraphErrors *gr_ratio_minus = new TGraphErrors();

		int counter = 0;

		// Two ratios

		// Weighting directly from the truth vertices 
		// Ratio between gr1 and gr2
		TGraphErrors *gr_ratio_main = new TGraphErrors();

		// Weighting from pure acceptance of theta_y vs y 
		// Ratio between gr1 and gr3 
		TGraphErrors *gr_ratio_alt = new TGraphErrors();

		for (int i(0); i<gr1_reset->GetN(); i++) {

			double x1 = gr1_reset->GetX()[i]; // decays
			double x2 = gr2_reset->GetX()[i]; // truth vertices
			double x3 = gr3_reset->GetX()[i]; // weighted decays

			if(x1 < xmin || x1 > xmax) continue;

			// Main
			double y1 = gr2_reset->GetY()[i]/gr1_reset->GetY()[i];
			double ey1 = y1 * sqrt( pow(gr1_reset->GetEY()[i]/gr1_reset->GetY()[i],2) + pow(gr2_reset->GetEY()[i]/gr2_reset->GetY()[i],2) );

			gr_ratio_main->SetPoint(counter, x2, y1);
			gr_ratio_main->SetPointError(counter, 0, ey1);

			// Alt
			// This is the way to get an accurate result 
			// A conservative approximation, gr3 is a subset of gr1 so will have the larger stat uncertainty. 
			double y2 = gr3_reset->GetY()[i]/gr1_reset->GetY()[i];
			double ey2 = y1 * gr3_reset->GetEY()[i]/gr3_reset->GetY()[i]; 

			gr_ratio_alt->SetPoint(counter, x1, y2);
			gr_ratio_alt->SetPointError(counter, 0, ey2);

			counter++;

		}

		DrawTGraphErrors(gr_ratio_main, stn+";Decay vertex momentum [MeV];Vertical angle acceptance fraction / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_MainAcceptanceWeightingVsMomentum"+misalign);
		DrawTGraphErrors(gr_ratio_alt, stn+";Decay vertex momentum [MeV];Vertical angle acceptance fraction / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_AltAcceptanceWeightingVsMomentum"+misalign);

		fout->cd("graphs");
		gr_ratio_main->SetName((stn+"_ratio_main").c_str());
		gr_ratio_main->Write();

		gr_ratio_alt->SetName((stn+"_ratio_alt").c_str());
		gr_ratio_alt->Write();

		// Easier to use a histogram during the actual correction
		TH1D *h1_ratio_main = new TH1D((stn+"_ratio_main").c_str(), ";Decay vertex momentum [MeV];Vertical angle acceptance fraction / 250 MeV", gr_ratio_main->GetN(), xmin, xmax);
		TH1D *h1_ratio_alt = new TH1D((stn+"_ratio_alt").c_str(), ";Decay vertex momentum [MeV];Vertical angle acceptance fraction / 250 MeV", gr_ratio_alt->GetN(), xmin, xmax);

		for(int i(0); i<gr_ratio_main->GetN(); i++) {
			h1_ratio_main->SetBinContent(i+1, gr_ratio_main->GetY()[i]);
			h1_ratio_main->SetBinError(i+1, gr_ratio_main->GetEY()[i]);
		}

		for(int i(0); i<gr_ratio_alt->GetN(); i++) {
			h1_ratio_alt->SetBinContent(i+1, gr_ratio_alt->GetY()[i]);
			h1_ratio_alt->SetBinError(i+1, gr_ratio_alt->GetEY()[i]);
		}

		DrawTH1(h1_ratio_main, stn+";Decay vertex momentum [MeV];Vertical angle acceptance fraction / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_HistMainAcceptanceWeightingVsMomentum"+misalign);
		DrawTH1(h1_ratio_alt, stn+";Decay vertex momentum [MeV];Vertical angle acceptance fraction / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_HistAltAcceptanceWeightingVsMomentum"+misalign);

		fout->cd("hists");
		h1_ratio_main->Write();
		h1_ratio_alt->Write();
		f3->Close();

		// Draw acceptance weightings from gaussian distribution for uncertainty estimate

		
		fout->mkdir(("trials/"+stn).c_str());
		fout->cd(("trials/"+stn).c_str());

		GausTrials(fout, h1_ratio_main, 1e3, stn);

	}

	f1->Close();
	f2->Close();

	fout->Close();

	cout<<"---> Written plots to "<<foutName<<", "<<fout<<endl;

	return;

}


int main() { 

	bool write = true;
	string misalign = "";
	
	Run(write, misalign);

	//RunAlignmentShift();

	//Run("truth", "_accepted2", "Simple acceptance weighting");
	//Run("truth", "_acceptedMomBins", "Momentum binned acceptance weighting");
	//Run("1", ";Decay vertex momentum [MeV];A_{EDM} [mrad] / 250 MeV");
	//Run("_acceptedInterpolatedMomBins", "Momentum binned acceptance weighting with interpolation");	

	// RunSimDerivedCorrections("0", "No vertical offset corrections;Decay vertex momentum [MeV];A_{EDM} [mrad] / 250 MeV");
	//Run("1", "Vertical offset correction on 'reco vertices'");
	//Run("2", "Vertical offset correction on 'all decays'");
	//Run("3", "Vertical offset corrections on both samples");

	//RunDataDerivedCorrections("Run-1a", ";Decay vertex momentum [MeV];A_{EDM} [mrad] / 250 MeV");
	//RunDataDerivedCorrections("Run-1b", ";Decay vertex momentum [MeV];A_{EDM} [mrad] / 250 MeV");
	//RunDataDerivedCorrections("Run-1c", ";Decay vertex momentum [MeV];A_{EDM} [mrad] / 250 MeV");
	//RunDataDerivedCorrections("Run-1d", ";Decay vertex momentum [MeV];A_{EDM} [mrad] / 250 MeV");

	//DrawDataDerivedAcceptanceWeightings();

	return 0; 

}