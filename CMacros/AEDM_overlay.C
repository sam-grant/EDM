#include "Utils.h"

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

	//DrawOverlay(gr1, gr2, "All decays", "../Images/MC/Acceptance/truth/CorrectionResults/AllDecays_AEDM_vs_p_overlay"+config);
	DrawOverlay(gr1, gr2, title, "../Images/MC/Acceptance/truth/CorrectionResults/AllDecaysAndTrackReco_AEDM_vs_p_overlay"+config, gr3);

	TH1D *h_res = GetResiduals(gr2, gr3);


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

}