#include "Utils.h"

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


void DrawOverlay(TGraphErrors *gr1, TGraphErrors *gr2, TGraphErrors *gr3, std::string title, std::string fname) {

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
	gr1->GetYaxis()->SetRangeUser(0.05, 0.32);
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

	for(int i = 0; i<gr1->GetN(); i++) { 

		double x = gr1->GetX()[i];

		if(x < 700 || x > 2750) continue;

		gr1_reset->SetPoint(counter, gr1->GetX()[i], gr1->GetY()[i]);
		gr2_reset->SetPoint(counter, gr2->GetX()[i], gr2->GetY()[i]);
		gr3_reset->SetPoint(counter, gr3->GetX()[i-1], gr3->GetY()[i-1]);

		gr1_reset->SetPointError(counter, 0, gr1->GetEY()[i]);
		gr2_reset->SetPointError(counter, 0, gr2->GetEY()[i]);
		gr3_reset->SetPointError(counter, 0, gr3->GetEY()[i-1]);

		counter++;

	}


	//DrawOverlay(gr1, gr2, "All decays", "../Images/MC/Acceptance/truth/CorrectionResults/AllDecays_AEDM_vs_p_overlay"+config);
	DrawOverlay(gr1_reset, gr2_reset, gr3_reset, title, "../Images/MC/Acceptance/truth/CorrectionResults/AllDecaysAndTrackReco_AEDM_vs_p_overlay"+config);

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

	DrawTGraphErrors(gr_ratio, ";Decay vertex momentum [MeV];Acceptance weighting / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/AcceptanceWeightingVsMomentum"+config);

	// Easier to use a histogram during the actual correction
	int nBins = gr_ratio->GetN()+1;
	TH1D *h1_ratio = new TH1D("h1_ratio", ";Decay vertex momentum [MeV];Acceptance weighting / 250 MeV", gr_ratio->GetN(), 0, 3000);

	for(int i(0); i<gr_ratio->GetN(); i++) {
		h1_ratio->SetBinContent(i+1, gr_ratio->GetY()[i]);
		h1_ratio->SetBinError(i+1, gr_ratio->GetEY()[i]);
	}
	
	TString foutName = "../Plots/MC/Acceptance/Plots/acceptanceWeightingVsMomentum_250MeV.root";
	TFile *fout = new TFile("../Plots/MC/Acceptance/Plots/acceptanceWeightingVsMomentum_250MeV.root", "RECREATE");
	
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

void AcceptanceWeightedDilution() { 
	
	//Run("truth", "_accepted2", "Simple acceptance weighting");
	//Run("truth", "_acceptedMomBins", "Momentum binned acceptance weighting");
	Run("_acceptedInterpolatedMomBins", "Momentum binned acceptance weighting with interpolation;Decay vertex momentum [MeV];A_{EDM} [mrad] / 250 MeV");
	//Run("_acceptedInterpolatedMomBins", "Momentum binned acceptance weighting with interpolation");	

	return; 

}