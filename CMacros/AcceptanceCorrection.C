#include <iostream>
#include "Utils.h"

using namespace std;

double xmin = 1000;
double xmax = 2500;

// Reset graph range (stops vector out-of-range errors down the line)
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
	graph->Draw("AP");
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
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.1);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);
	hist->SetLineWidth(1);
	hist->SetLineColor(1);
	hist->SetMarkerStyle(20);

	hist->Draw("P");
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void DrawOverlayA(TGraphErrors *gr_decays, TGraphErrors *gr_tracks, TGraphErrors *gr_weight, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	gr_decays->SetTitle(title.c_str());
	gr_decays->GetXaxis()->SetTitleSize(.04);
	gr_decays->GetYaxis()->SetTitleSize(.04);
	gr_decays->GetXaxis()->SetTitleOffset(1.1);
	gr_decays->GetYaxis()->SetTitleOffset(1.2);
	gr_decays->GetXaxis()->CenterTitle(true);
	gr_decays->GetYaxis()->CenterTitle(true);
	gr_decays->GetYaxis()->SetMaxDigits(4);
	gr_decays->SetMarkerStyle(20); //  Full circle

	// range
	double xmin = gr_decays->GetX()[0];
	double xmax = gr_decays->GetX()[gr_decays->GetN()-1];
	gr_decays->GetXaxis()->SetRangeUser(xmin - 100, xmax + 100);
	gr_decays->GetYaxis()->SetRangeUser(0.00, 0.35);
	gr_decays->Draw("AP");

	gr_weight->SetMarkerStyle(24); // open circle
	gr_weight->Draw("P SAME");

	gr_tracks->SetMarkerStyle(20);
	gr_tracks->SetMarkerColor(kRed);
	gr_tracks->SetLineColor(kRed);
	gr_tracks->Draw("P SAME");

	TLegend *l = new TLegend(.69, .79, .89, .89);
	l->SetBorderSize(0);
	l->SetTextSize(24);
	l->SetTextFont(44);

	l->AddEntry(gr_decays, "All decays (unweighted)");
	l->AddEntry(gr_weight, "All decays (weighted)");
	l->AddEntry(gr_tracks, "Truth vertices");
	l->Draw("SAME");
	gPad->Update();
	l->SetX1NDC(.49);
	l->SetX2NDC(.89);
	l->SetY1NDC(.75);
	l->SetY2NDC(.89);

	l->Draw("SAME");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawOverlayB(TGraphErrors *gr_weight, TGraphErrors *gr_tracks, TGraphErrors *gr_align, string align, string title, string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	gr_weight->SetTitle(title.c_str());
	gr_weight->GetXaxis()->SetTitleSize(.04);
	gr_weight->GetYaxis()->SetTitleSize(.04);
	gr_weight->GetXaxis()->SetTitleOffset(1.1);
	gr_weight->GetYaxis()->SetTitleOffset(1.2);
	gr_weight->GetXaxis()->CenterTitle(true);
	gr_weight->GetYaxis()->CenterTitle(true);
	gr_weight->GetYaxis()->SetMaxDigits(4);
	gr_weight->SetMarkerStyle(20); //  Full circle

	// range
	double xmin = gr_weight->GetX()[0];
	double xmax = gr_weight->GetX()[gr_weight->GetN()-1];
	gr_weight->GetXaxis()->SetRangeUser(xmin - 100, xmax + 100);
	gr_weight->GetYaxis()->SetRangeUser(0.00, 0.25);
	gr_weight->SetMarkerStyle(24); // open circle
	gr_weight->SetMarkerColor(kBlack);
	gr_weight->SetLineColor(kBlack);
	gr_weight->Draw("AP");

	gr_tracks->SetMarkerStyle(20); // closed
	gr_tracks->SetMarkerColor(kRed);
	gr_tracks->SetLineColor(kRed);
	gr_tracks->Draw("P SAME");

	gr_align->SetMarkerStyle(20); // closed
	gr_align->SetMarkerColor(kBlue);
	gr_align->SetLineColor(kBlue);
	gr_align->Draw("P SAME");

	TLegend *l = new TLegend(.49, .75, .89, .89);
	l->SetBorderSize(0);
	l->SetTextSize(24);
	l->SetTextFont(44);

	l->AddEntry(gr_weight, "All decays (weighted)");
	l->AddEntry(gr_tracks, "Truth vertices (nominal)");

	if(align=="plus1mm") l->AddEntry(gr_align, "Truth vertices (#plus1 mm)");
	if(align=="minus1mm") l->AddEntry(gr_align, "Truth vertices (#minus1 mm)");
	if(align=="plus0.1deg") l->AddEntry(gr_align, "Truth vertices (#plus0.1#circ)");
	if(align=="minus0.1deg") l->AddEntry(gr_align, "Truth vertices (#minus0.1#circ)");

	l->Draw("SAME");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawOverlayC(TGraphErrors *gr_tracks, TGraphErrors *gr_weight, TGraphErrors *gr_tracksReweight, std::string title, std::string fname, std::string dataset) {

	TCanvas *c = new TCanvas("c","c",800,600);

	gr_tracks->SetTitle(title.c_str());
	gr_tracks->GetXaxis()->SetTitleSize(.04);
	gr_tracks->GetYaxis()->SetTitleSize(.04);
	gr_tracks->GetXaxis()->SetTitleOffset(1.1);
	gr_tracks->GetYaxis()->SetTitleOffset(1.2);
	gr_tracks->GetXaxis()->CenterTitle(true);
	gr_tracks->GetYaxis()->CenterTitle(true);
	gr_tracks->GetYaxis()->SetMaxDigits(4);
	gr_tracks->SetMarkerStyle(20); //  Full circle

	// range
	double xmin = gr_tracks->GetX()[0];
	double xmax = gr_tracks->GetX()[gr_tracks->GetN()-1];
	gr_tracks->GetXaxis()->SetRangeUser(xmin - 100, xmax + 100);
	gr_tracks->GetYaxis()->SetRangeUser(0.00, 0.20);
	gr_tracks->Draw("AP");

	gr_weight->SetMarkerStyle(24); // open circle
	gr_weight->Draw("P SAME");

	gr_tracksReweight->SetMarkerStyle(24);
	gr_tracksReweight->SetMarkerColor(kRed);
	gr_tracksReweight->SetLineColor(kRed);
	gr_tracksReweight->Draw("P SAME");

	TLegend *l = new TLegend(.35, .75, .89, .89);
	l->SetBorderSize(0);
	l->SetTextSize(24);
	l->SetTextFont(44);

	l->AddEntry(gr_weight, "All decays (acc. weighted)");
	l->AddEntry(gr_tracks, "Truth vertices");
	l->AddEntry(gr_tracksReweight, ("Truth vertices ("+dataset+" weighted)").c_str());
	l->Draw("SAME");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawOverlayD(TGraphErrors *gr_decays, TGraphErrors *gr_decaysDataWeight, TGraphErrors *gr_tracks, TGraphErrors *gr_tracksDataWeight, string dataset, string title, string fname, double ymin, double ymax) {

	TCanvas *c = new TCanvas("c","c",800,600);

	gr_decays->SetTitle(title.c_str());
	gr_decays->GetXaxis()->SetTitleSize(.04);
	gr_decays->GetYaxis()->SetTitleSize(.04);
	gr_decays->GetXaxis()->SetTitleOffset(1.1);
	gr_decays->GetYaxis()->SetTitleOffset(1.2);
	gr_decays->GetXaxis()->CenterTitle(true);
	gr_decays->GetYaxis()->CenterTitle(true);
	gr_decays->GetYaxis()->SetMaxDigits(4);
	gr_decays->SetMarkerStyle(20); //  Full circle

	// range
	double xmin = gr_decays->GetX()[0];
	double xmax = gr_decays->GetX()[gr_decays->GetN()-1];

	gr_decays->GetXaxis()->SetRangeUser(xmin - 100, xmax + 100);
	gr_decays->GetYaxis()->SetRangeUser(ymin, ymax);
	gr_decays->SetMarkerStyle(20); // closed circle
	gr_decays->SetMarkerColor(kBlack); 
	gr_decays->SetLineColor(kBlack);
	gr_decays->Draw("AP");

	gr_decaysDataWeight->SetMarkerStyle(24); // open circle
	gr_decaysDataWeight->SetMarkerColor(kBlack); 
	gr_decaysDataWeight->SetLineColor(kBlack);
	gr_decaysDataWeight->Draw("P SAME");

	gr_tracks->SetMarkerStyle(20); // open
	gr_tracks->SetMarkerColor(kRed);
	gr_tracks->SetLineColor(kRed);
	gr_tracks->Draw("P SAME");

	gr_tracksDataWeight->SetMarkerStyle(24); // closed
	gr_tracksDataWeight->SetMarkerColor(kRed);
	gr_tracksDataWeight->SetLineColor(kRed);
	gr_tracksDataWeight->Draw("P SAME");

	TLegend *l = new TLegend(.35, .75, .89, .89);
	l->SetBorderSize(0);
	l->SetTextSize(24);
	l->SetTextFont(44);

	l->AddEntry(gr_decays, "All decays");
	l->AddEntry(gr_decaysDataWeight, ("All decays ("+dataset+" weighted)").c_str());
	l->AddEntry(gr_tracks, "Truth vertices");
	l->AddEntry(gr_tracksDataWeight, ("Truth vertices ("+dataset+" weighted)").c_str());

	l->Draw("SAME");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

// Delete this??
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

void DrawGausTrials(vector<TH1D*> hists_, std::string title, std::string fname) { 

  TCanvas *c = new TCanvas("c","c",800,600);


  // Convert to TH2D ?????????? 

  TH2D *h2_dummy = new TH2D("h2_dummy", "", 1, 1000, 2550, 1, 0, 1);

  TH2D *h2 = new TH2D("h2", "", 6, 1000, 2500, 1e3, 0, 1);

  for(auto& hist : hists_) { 

	  for(int i(0); i<hist->GetXaxis()->GetNbins(); i++) { 

	  	double x = hist->GetBinCenter(i+1);
	  	double y = hist->GetBinContent(i+1);

	  	// cout<<x<<", "<<y<<endl;

	  	double a = h2->GetXaxis()->FindBin(x);
	  	double b = h2->GetYaxis()->FindBin(y);

	  	h2->SetBinContent(a, b, 1 + h2->GetBinContent(a, b));

	  }

	}


	h2->SetTitle(title.c_str());

	//hist->SetStats(2210);
	gStyle->SetOptStat(0);//2210);
			
	h2->GetXaxis()->SetTitleSize(.04);
	h2->GetYaxis()->SetTitleSize(.04);
	h2->GetXaxis()->SetTitleOffset(1.1);
	h2->GetYaxis()->SetTitleOffset(1.1);
	h2->GetXaxis()->CenterTitle(1);
	h2->GetYaxis()->CenterTitle(1);
	h2->GetYaxis()->SetMaxDigits(4);

	//h2->GetXaxis()->SetRangeUser(900, 2550);
	h2->GetYaxis()->SetRangeUser(0, 1);

	gStyle->SetPalette(53);

	//h2->SetMarkerStyle(20);

	h2->Scale(1./h2->GetMaximum());
	//c->SetRightMargin(0.13);
	//h2->GetZaxis()->SetLimits(0.9, 1);

	//c->SetLogz();

	//h2_dummy->Draw("COL");

	h2->Draw("COL");

	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

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

			// Draw from Gaussian
			// Width is one sigma (error bar)
			h_ratio_trial->SetBinContent(i_bin+1, randGen->Gaus(centralVal, errorBar));
			h_ratio_trial->SetBinError(i_bin+1, 0);//randGen->Gaus(centralVal,2*errorBar));

		}


		h_ratio_trial->Write();

		trialHists_.push_back(h_ratio_trial);

	}

	DrawGausTrials(trialHists_, stn+";Decay vertex momentum [MeV];A_{EDM} acceptance factor / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_TrialsOverlay_AcceptanceWeightingVsMomentum");

	return;
}

void OverlayAcceptanceFractionsA(vector<TGraphErrors*> gr_, string title, string fname) { 
	
	TCanvas *c = new TCanvas("c", "c", 800, 600);

	// Offset x for S12 and S12S18 slightly 
	for(int i(0); i<gr_.at(1)->GetN(); i++) gr_.at(1)->SetPoint(i, gr_.at(1)->GetX()[i]+25, gr_.at(1)->GetY()[i]);
	for(int i(0); i<gr_.at(2)->GetN(); i++) gr_.at(2)->SetPoint(i, gr_.at(2)->GetX()[i]+50, gr_.at(2)->GetY()[i]);

	gr_.at(2)->SetTitle(title.c_str());//);
	gr_.at(2)->GetXaxis()->SetTitleSize(.04);
	gr_.at(2)->GetYaxis()->SetTitleSize(.04);
	gr_.at(2)->GetXaxis()->SetTitleOffset(1.1);
	gr_.at(2)->GetYaxis()->SetTitleOffset(1.2);
	gr_.at(2)->GetXaxis()->CenterTitle(true);
	gr_.at(2)->GetYaxis()->CenterTitle(true);
	gr_.at(2)->GetYaxis()->SetMaxDigits(4);
	gr_.at(2)->SetMarkerStyle(20); //  Full circle
	
	gr_.at(2)->GetYaxis()->SetRangeUser(0, 1);//0.35, 0.70);

	gr_.at(0)->SetMarkerStyle(20);
	gr_.at(1)->SetMarkerStyle(20);
	gr_.at(0)->SetMarkerColor(kRed);
	gr_.at(1)->SetMarkerColor(kBlue);
	gr_.at(0)->SetLineColor(kRed);
	gr_.at(1)->SetLineColor(kBlue);

	gr_.at(2)->GetXaxis()->SetRangeUser(1000, 2500);
	
	gr_.at(2)->Draw("AP");
	gr_.at(0)->Draw("P SAME");
	gr_.at(1)->Draw("P SAME");

 	// TLegend *l = new TLegend(0.65, 0.15, 0.85, 0.30); 
 	TLegend *l = new TLegend(0.15, 0.725, 0.45, 0.89); 
 	 //l->SetNColumns(3);
  l->SetBorderSize(0);
  l->SetTextSize(24);
  l->SetTextFont(44);

  l->AddEntry(gr_.at(0), "Station 12");
 	l->AddEntry(gr_.at(1), "Station 18");
 	l->AddEntry(gr_.at(2), "Combined");

 	l->Draw("SAME");

 	c->SaveAs((fname+".pdf").c_str());
 	c->SaveAs((fname+".png").c_str());

	return;

}

void OverlayAcceptanceFractionsB(vector<vector<TGraphErrors*>> gr_, vector<string> alignStr_, string title, string fname) { 

	TCanvas *c = new TCanvas("c", "c", 800, 600);

	for(int j(0); j<gr_.size(); j++) { 
	
		vector<TGraphErrors*> gr_align_ =  gr_.at(j);

		// Offset x for S12 and S12S18 slightly 
		for(int i(0); i<gr_align_.at(1)->GetN(); i++) gr_align_.at(1)->SetPoint(i, gr_align_.at(1)->GetX()[i]+25, gr_align_.at(1)->GetY()[i]);
		for(int i(0); i<gr_align_.at(2)->GetN(); i++) gr_align_.at(2)->SetPoint(i, gr_align_.at(2)->GetX()[i]+50, gr_align_.at(2)->GetY()[i]);

		gr_align_.at(2)->SetTitle(title.c_str());//);
		string alignStr = alignStr_.at(j);
		if(alignStr=="plus1mm") gr_align_.at(2)->SetTitle(("#plus1 mm"+title).c_str());//);
		if(alignStr=="minus1mm") gr_align_.at(2)->SetTitle(("#minus1 mm"+title).c_str());//);
		if(alignStr=="plus0.1deg") gr_align_.at(2)->SetTitle(("#plus0.1#circ"+title).c_str());//);
		if(alignStr=="minus0.1deg") gr_align_.at(2)->SetTitle(("#minus0.1#circ"+title).c_str());//);

		gr_align_.at(2)->GetXaxis()->SetTitleSize(.04);
		gr_align_.at(2)->GetYaxis()->SetTitleSize(.04);
		gr_align_.at(2)->GetXaxis()->SetTitleOffset(1.1);
		gr_align_.at(2)->GetYaxis()->SetTitleOffset(1.2);
		gr_align_.at(2)->GetXaxis()->CenterTitle(true);
		gr_align_.at(2)->GetYaxis()->CenterTitle(true);
		gr_align_.at(2)->GetYaxis()->SetMaxDigits(4);
		gr_align_.at(2)->SetMarkerStyle(20); //  Full circle
		gr_align_.at(2)->GetYaxis()->SetRangeUser(0,1);//0.4, 0.75);

		gr_align_.at(0)->SetMarkerStyle(20);
		gr_align_.at(1)->SetMarkerStyle(20);
		gr_align_.at(0)->SetMarkerColor(kRed);
		gr_align_.at(1)->SetMarkerColor(kBlue);
		gr_align_.at(0)->SetLineColor(kRed);
		gr_align_.at(1)->SetLineColor(kBlue);

		gr_align_.at(2)->GetXaxis()->SetRangeUser(900, 2500);
		
		gr_align_.at(2)->Draw("AP");
		gr_align_.at(0)->Draw("P SAME");
		gr_align_.at(1)->Draw("P SAME");

	 	// TLegend *l = new TLegend(0.65, 0.15, 0.85, 0.30); 
	 	TLegend *l = new TLegend(0.15, 0.725, 0.45, 0.89); 
	 	//l->SetNColumns(3);
	  l->SetBorderSize(0);
	  l->SetTextSize(24);
	  l->SetTextFont(44);

	  l->AddEntry(gr_align_.at(0), "Station 12");
	 	l->AddEntry(gr_align_.at(1), "Station 18");
	 	l->AddEntry(gr_align_.at(2), "Combined");

	 	l->Draw("SAME");

	 	c->SaveAs((fname+alignStr+".pdf").c_str());
	 	c->SaveAs((fname+alignStr+".png").c_str());

 	}

	return;

}

TGraphErrors *GetAcceptanceFactors(TGraphErrors *gr1, TGraphErrors *gr2) {

	int counter = 0;

	TGraphErrors *gr_ratio = new TGraphErrors();

	for (int i(0); i<gr1->GetN(); i++) {

		double x1 = gr1->GetX()[i]; 
		double x2 = gr2->GetX()[i]; 

		if(x1 < xmin || x1 > xmax) continue;
		
		double y = gr2->GetY()[i]/gr1->GetY()[i];

		// I state in this talk, https://gm2-docdb.fnal.gov/cgi-bin/sso/ShowDocument?docid=27773, 
		// that you can just compare "all decays (weighted)" to "all decays". However, on further inspection this does not give the correct tilt angle.
		// If you were to use this you can just take the stat error on "all decays"
		// double ey = gr2->GetEY()[i];

		// When comparing decays to tracks you have to combine the stat error in quadrature 
		// There will be some correlation but it's non-trivial to estimate
		
		double ey = y * sqrt( pow(gr1->GetEY()[i]/gr1->GetY()[i], 2) + pow(gr2->GetEY()[i]/gr2->GetY()[i], 2) );

		gr_ratio->SetPoint(counter, x1, y);
		gr_ratio->SetPointError(counter, 0, ey);

		counter++;

	}

	return gr_ratio;

}

void OverlayAlignDiffGraphs(TGraphErrors *gr1, TGraphErrors *gr2, string shift, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	// Get range
	double ymin = 1e6; double ymax = -1e6;

	vector<TGraphErrors*> gr_ = {gr1, gr2};

	for(auto& gr : gr_) { 

		for(int i(0); i<gr->GetN(); i++) {

			double y = gr->GetY()[i];
			double ey = gr->GetEY()[i];

			if((y+ey) > ymax) ymax = y+ey;
			if((y-ey) < ymin) ymin = y-ey;

		}

	}

	gr1->GetYaxis()->SetRangeUser(-.2, .15); //ymin-0.25, ymax+0.25);
	gr1->GetXaxis()->SetRangeUser(gr1->GetX()[0]-100, gr1->GetX()[gr1->GetN()]+100);
	gr1->SetTitle(title.c_str());
	gr1->GetXaxis()->SetTitleSize(.04);
	gr1->GetYaxis()->SetTitleSize(.04);
	gr1->GetXaxis()->SetTitleOffset(1.1);
	gr1->GetYaxis()->SetTitleOffset(1.2);
	gr1->GetXaxis()->CenterTitle(true);
	gr1->GetYaxis()->CenterTitle(true);
	gr1->GetYaxis()->SetMaxDigits(4);
	gr1->SetMarkerStyle(20); //  Full circle
	gr1->SetMarkerColor(kRed); 
	gr1->SetLineColor(kRed); 
	gr1->Draw("APL");

	gr2->SetMarkerStyle(20); // Open circle
	gr2->SetMarkerColor(kBlue); 
	gr2->SetLineColor(kBlue); 
	gr2->Draw("PL SAME");
	//c->SetGridx();

	//TLegend *leg = new TLegend(0.69, 0.79, 0.89, 0.89);
	TLegend *leg = new TLegend(0.11, 0.79, 0.35, 0.89);
	leg->SetBorderSize(0);
	leg->SetNColumns(1);
	leg->SetTextSize(24);
	leg->SetTextFont(44);

	leg->AddEntry(gr1, ("#plus"+shift).c_str());
	leg->AddEntry(gr2, ("#minus"+shift).c_str());

	leg->Draw("SAME");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

/*

1. Get all files, including all four misalignment files
2. Plot A_EDM
3. Calculate the acceptance scale factors for each 
4. Make difference plots 
5. Include option to use Run-1 weighted histograms for the correction
6. Write to output in a sensible way

*/

void Run(bool write, bool reweight = false, string dataset = "Run-1a") { // , string stn = "S12S18") { 

	vector<string> alignStr_ = {"plus1mm", "minus1mm", "plus0.1deg", "minus0.1deg"};

	TString foutName = "../Plots/MC/Acceptance/Plots/acceptanceCorrection_250MeV_full";
	if(reweight) foutName += "_reweight"+dataset; 
	foutName += ".root";

	if(!write) foutName = "delete_me.root";

	TFile *fout = new TFile(foutName, "RECREATE");
	fout->cd(); fout->mkdir("graphs"); fout->mkdir("hists"); fout->mkdir("trials");

	// No weighting 	
	TString finName_decays = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr_full.root";
	TString finName_tracks = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr_full.root";

	// Loop thro' 
	//TString finName_align = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr_"+align+"_full.root";

	TFile *fin_decays = TFile::Open(finName_decays);
	TFile *fin_tracks = TFile::Open(finName_tracks);

	cout<<"\n---> Got base files "<<finName_decays<<", "<<fin_decays<<", "<<finName_tracks<<", "<<fin_tracks<<endl;

	// Holder for main acceptance factors / stn
	vector<TGraphErrors*> gr_ratio_main_;
	vector<vector<TGraphErrors*>> gr_ratio_align_;
	vector<vector<TGraphErrors*>> gr_ratio_align_diff_;

	// Loop thro' stations
	vector<string> stn_ = {"S12", "S18", "S12S18"};

	for(auto& stn : stn_) {

		// Acceptance weighted decays
		TString finName_decaysAccWeight = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr_accWeight"+stn+"_full"; // _reweight"+stn+dataset+".root";
		if(reweight) finName_decaysAccWeight += "_reweight"+stn+dataset;
		finName_decaysAccWeight += ".root";
		TFile *fin_decaysAccWeight = TFile::Open(finName_decaysAccWeight);

		// Data weighted tracks
		TString finName_decaysDataWeight = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr_full_reweight"+stn+dataset+".root";
		TFile *fin_decaysDataWeight = TFile::Open(finName_decaysDataWeight);

		// Data weighted decays 
		TString finName_tracksDataWeight = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr_full_reweight"+stn+dataset+".root";
		TFile *fin_tracksDataWeight = TFile::Open(finName_tracksDataWeight);

		cout<<"\n---> Got weighted files for "<<stn<<", "<<finName_decaysAccWeight<<", "<<fin_decaysAccWeight<<", "<<finName_decaysDataWeight<<", "<<fin_decaysDataWeight<<", "<<finName_tracksDataWeight<<", "<<fin_tracksDataWeight<<endl;

		TGraphErrors *gr_decays = (TGraphErrors*)fin_decays->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY"); 
		TGraphErrors *gr_tracks = (TGraphErrors*)fin_tracks->Get(("MomentumBinnedAnalysis/ParameterScans/"+stn+"_AEDM_vs_p_thetaY").c_str());
		TGraphErrors *gr_decaysAccWeight = (TGraphErrors*)fin_decaysAccWeight->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY");
		TGraphErrors *gr_decaysDataWeight = (TGraphErrors*)fin_decaysDataWeight->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY");
		TGraphErrors *gr_tracksDataWeight = (TGraphErrors*)fin_tracksDataWeight->Get(("MomentumBinnedAnalysis/ParameterScans/"+stn+"_AEDM_vs_p_thetaY").c_str());

		cout<<"\n---> Got graphs "<<gr_decays<<", "<<gr_tracks<<", "<<gr_decaysAccWeight<<", "<<gr_decaysDataWeight<<", "<<gr_tracksDataWeight<<endl;

		// Reset x-ranges
		gr_decays = ResetGraph(gr_decays, xmin, xmax);
		gr_tracks = ResetGraph(gr_tracks, xmin, xmax);
		gr_decaysAccWeight = ResetGraph(gr_decaysAccWeight, xmin, xmax);
		gr_decaysDataWeight = ResetGraph(gr_decaysDataWeight, xmin, xmax);
		gr_tracksDataWeight = ResetGraph(gr_tracksDataWeight, xmin, xmax);

		// Draw overlay A
		DrawOverlayA(gr_decays, gr_tracks, gr_decaysAccWeight, stn+";Momentum [MeV];A_{EDM} [mrad] / 250 MeV", "../Images/MC/Acceptance/truth/FullCorrectionResults/"+stn+"_gr_AEDM_vs_p_overlay_A");

		DrawOverlayD(gr_decays, gr_decaysDataWeight, gr_tracks, gr_tracksDataWeight, dataset, stn+";Momentum [MeV];A_{EDM} [mrad] / 250 MeV", "../Images/MC/Acceptance/truth/FullCorrectionResults/"+stn+"_gr_AEDM_vs_p_overlay_D_"+dataset, 0, 0.35);

		// I would ideally use gr_decaysAccWeight instead of gr_tracks, but it just does not give the correct tilt angle in the end
		// Improving the weighting procedure should be a priority to make the most the acceptance correction
		TGraphErrors *gr_ratio_main = GetAcceptanceFactors(gr_decays, gr_tracks);
		if(reweight) gr_ratio_main = GetAcceptanceFactors(gr_decaysDataWeight, gr_tracksDataWeight);

		DrawTGraphErrors(gr_ratio_main, stn+";Decay vertex momentum [MeV];A_{EDM} acceptance factor / 250 MeV", "../Images/MC/Acceptance/truth/FullCorrectionResults/"+stn+"_gr_AEDM_acceptanceFactors_main_"+to_string(reweight));
	
		//TGraphErrors *gr_ratio_main = new TGraphErrors(gr_decays, gr_weight);

		fout->cd("graphs");
		gr_ratio_main->SetName((stn+"_ratio_main").c_str());
		gr_ratio_main->Write();

		// Easier to use a histogram during the actual correction
		TH1D *h1_ratio_main = new TH1D((stn+"_ratio_main").c_str(), (stn+";Decay vertex momentum [MeV];A_{EDM} acceptance factor / 250 MeV").c_str(), gr_ratio_main->GetN(), xmin, xmax);
	
		for(int i(0); i<gr_ratio_main->GetN(); i++) {
			h1_ratio_main->SetBinContent(i+1, gr_ratio_main->GetY()[i]);
			h1_ratio_main->SetBinError(i+1, gr_ratio_main->GetEY()[i]);
		}

		fout->cd("hists");
		h1_ratio_main->Write();

		// Draw acceptance weightings from Gaussian distribution for uncertainty estimate
		fout->mkdir(("trials/"+stn).c_str());
		fout->cd(("trials/"+stn).c_str());

		GausTrials(fout, h1_ratio_main, 1e3, stn);

		gr_ratio_main_.push_back(gr_ratio_main);

		// Now, for the misaligned files 
		vector<TGraphErrors*> gr_ratio_align_stn_;
		vector<TGraphErrors*> gr_ratio_align_diff_stn_;

		for(auto& alignStr : alignStr_) { 

			TString finName_align = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr_"+alignStr+"_full.root";
			TFile *fin_align = TFile::Open(finName_align);

			cout<<"\n---> Got alignment file for "<<stn<<": "<<finName_align<<", "<<fin_align<<endl;

			TGraphErrors *gr_align = (TGraphErrors*)fin_align->Get(("MomentumBinnedAnalysis/ParameterScans/"+stn+"_AEDM_vs_p_thetaY").c_str());
			gr_align = ResetGraph(gr_align, xmin, xmax);

			cout<<"\n---> Got alignment graph for "<<gr_align<<endl;

			DrawOverlayB(gr_decaysAccWeight, gr_tracks, gr_align, alignStr, stn+";Momentum [MeV];A_{EDM} [mrad] / 250 MeV", "../Images/MC/Acceptance/truth/FullCorrectionResults/"+stn+"_gr_AEDM_vs_p_overlay_B_"+alignStr);

			// Calculate the acceptance factors for misaligned sameples
			TGraphErrors *gr_ratio_align = GetAcceptanceFactors(gr_decays, gr_align);

			DrawTGraphErrors(gr_ratio_align, stn+";Decay vertex momentum [MeV];A_{EDM} acceptance factor / 250 MeV", "../Images/MC/Acceptance/truth/FullCorrectionResults/"+stn+"_gr_AEDM_acceptanceFactors_align_"+alignStr);

			fout->cd("graphs");
			gr_ratio_align->SetName((stn+"_ratio_align_"+alignStr).c_str());
			gr_ratio_align->Write();
		
			// Easier to use a histogram during the actual correction
			TH1D *h1_ratio_align = new TH1D((stn+"_ratio_align_"+alignStr).c_str(), (stn+";Decay vertex momentum [MeV];A_{EDM} acceptance factor / 250 MeV").c_str(), gr_ratio_align->GetN(), xmin, xmax);
	
			for(int i(0); i<gr_ratio_align->GetN(); i++) {
				h1_ratio_align->SetBinContent(i+1, gr_ratio_align->GetY()[i]);
				h1_ratio_align->SetBinError(i+1, gr_ratio_align->GetEY()[i]);
			}

			gr_ratio_align_stn_.push_back(gr_ratio_align);

			fout->cd("hists");

			h1_ratio_align->Write();

			// Find thew difference from nominal

			TGraphErrors *gr_ratio_align_diff = new TGraphErrors();

			for (int i(0); i<gr_ratio_align->GetN(); i++) {

				// Difference from nominal
				double y = gr_ratio_main->GetY()[i] - gr_ratio_align->GetY()[i];
				double x = gr_ratio_align->GetX()[i]; 

				// Approximate here
				double ey = 0.;//gr_ratio_main->GetEY()[i]; 

				gr_ratio_align_diff->SetPoint(i, x, y);
				gr_ratio_align_diff->SetPointError(i, 0, ey);

			}

			fout->cd("graphs");
			gr_ratio_align_diff->SetName((stn+"_ratio_align_diff_"+alignStr).c_str());
			gr_ratio_align_diff->Write();

			TH1D *h1_ratio_align_diff = new TH1D((stn+"_ratio_align_diff_"+alignStr).c_str(), (stn+";Decay vertex momentum [MeV];#Delta A_{EDM} acceptance factor / 250 MeV").c_str(), gr_ratio_align_diff->GetN(), xmin, xmax);
	
			for(int i(0); i<gr_ratio_align_diff->GetN(); i++) {
				h1_ratio_align_diff->SetBinContent(i+1, gr_ratio_align_diff->GetY()[i]);
				h1_ratio_align_diff->SetBinError(i+1, gr_ratio_align_diff->GetEY()[i]);
			}

			fout->cd("hists");
			h1_ratio_align_diff->Write();

			gr_ratio_align_diff_stn_.push_back(gr_ratio_align_diff);

			fin_align->Close();

		}

		gr_ratio_align_.push_back(gr_ratio_align_stn_);
		gr_ratio_align_diff_.push_back(gr_ratio_align_diff_stn_);

		fin_decaysDataWeight->Close();
		fin_tracksDataWeight->Close();
		fin_decaysAccWeight->Close();

	} // stn loop

	OverlayAcceptanceFractionsA(gr_ratio_main_, ";Decay vertex momentum (station 12) [MeV];A_{EDM} acceptance factor / 250 MeV", "../Images/MC/Acceptance/truth/FullCorrectionResults/gr_AcceptanceScaleFactors_AEDM_vs_p_main_overlay");

	// So dumb, vector<vector> is the wrong way around, to tired to figure out how to loop this properly

	vector<TGraphErrors*> plus1mm_;
	vector<TGraphErrors*> minus1mm_;
	vector<TGraphErrors*> plus1deg_;
	vector<TGraphErrors*> minus1deg_;

	for(auto& gr_ratio_align : gr_ratio_align_) { 

		plus1mm_.push_back(gr_ratio_align.at(0)); 
		minus1mm_.push_back(gr_ratio_align.at(1));
		plus1deg_.push_back(gr_ratio_align.at(2));
		minus1deg_.push_back(gr_ratio_align.at(3));

	} 

	vector<vector<TGraphErrors*>> gr_ratio_align_2_ = {plus1mm_,  minus1mm_, plus1deg_, minus1deg_};

	OverlayAcceptanceFractionsB(gr_ratio_align_2_, alignStr_, ";Decay vertex momentum (station 12) [MeV];A_{EDM} acceptance factor / 250 MeV", "../Images/MC/Acceptance/truth/FullCorrectionResults/gr_AcceptanceScaleFactors_AEDM_vs_p_align_overlay_");

	for(int i(0); i<stn_.size(); i++) { 

		vector<TGraphErrors*> gr_tmp_ = gr_ratio_align_diff_.at(i);

		OverlayAlignDiffGraphs(gr_tmp_.at(0), gr_tmp_.at(2), "1 mm", ";Decay vertex momentum [MeV];#Delta A_{EDM} acceptance fraction per mm / 250 MeV", "../Images/MC/Acceptance/truth/FullCorrectionResults/gr_DiffAcceptanceScaleFactors_AEDM_vs_p_align_overlay_1mm");
		OverlayAlignDiffGraphs(gr_tmp_.at(1), gr_tmp_.at(3), "0.1#circ", ";Decay vertex momentum [MeV];#Delta A_{EDM} acceptance fraction per 0.1#circ / 250 MeV", "../Images/MC/Acceptance/truth/FullCorrectionResults/gr_DiffAcceptanceScaleFactors_AEDM_vs_p_align_overlay_0.1deg");

	}


	fin_decays->Close();
	fin_tracks->Close();
	

	fout->Close();

	cout<<"\n---> Written plots to "<<foutName<<", "<<fout<<endl;

	return;

}


int main() { 

	bool write = true;
	bool reweight = true; // reweight according to Run-1 theta_y widths (just a check really) 

	// Run(write, reweight, "Run-1a");
	// Run(write, reweight, "Run-1b");
	//Run(write, reweight, "Run-1c");
	Run(write, reweight, "Run-1d");

	return 0; 

}