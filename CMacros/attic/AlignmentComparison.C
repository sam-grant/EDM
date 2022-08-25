/*#include "FancyDraw.h"*/
#include "Utils.h"

const double delta_calc = 1.699245178; // mrad

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
	graph->GetYaxis()->SetTitleOffset(1.25);
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
	hist->GetYaxis()->SetTitleOffset(1.2);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);
	hist->SetLineWidth(1);
	hist->SetLineColor(1);

	hist->SetMarkerStyle(20);
	//c->SetRightMargin(0.13);

	hist->Draw("PL");
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

/*void DrawTH1Overlay(vector<TH1D *> hist_, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist_.at(0)->SetTitle(title.c_str());
	hist_.at(0)->SetStats(0);
	hist_.at(0)->GetXaxis()->SetTitleSize(.04);
	hist_.at(0)->GetYaxis()->SetTitleSize(.04);
	hist_.at(0)->GetXaxis()->SetTitleOffset(1.1);
	hist_.at(0)->GetYaxis()->SetTitleOffset(1.3);
	hist_.at(0)->GetXaxis()->CenterTitle(1);
	hist_.at(0)->GetYaxis()->CenterTitle(1);
	hist_.at(0)->GetYaxis()->SetMaxDigits(4);
	hist_.at(0)->SetLineWidth(1);
	hist_.at(0)->SetLineColor(1);
	hist_.at(0)->SetMarkerStyle(20);

	hist_.at(1)->SetLineColor(kRed);
	hist_.at(1)->SetMarkerColor(kRed);
	hist_.at(1)->SetMarkerStyle(20);

	hist_.at(0)->GetYaxis()->SetRangeUser(-0.25, 0.2);

	hist_.at(0)->Draw("PL");
	hist_.at(1)->Draw("PL SAME");
	
	TLegend *leg = new TLegend(0.15,0.79,0.50,0.89);
	leg->SetNColumns(1);
	leg->AddEntry(hist_.at(0), "#plus1 mm");
	leg->AddEntry(hist_.at(1), "#minus1 mm");
	leg->SetBorderSize(0);
	leg->SetTextSize(22); // 26
	leg->SetTextFont(44);

	leg->Draw("SAME");

	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}*/

void DrawTH1Overlay(TH1D *h1, TH1D *h2, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	h1->SetTitle(title.c_str());
	h1->SetStats(0);
	h1->GetXaxis()->SetTitleSize(.04);
	h1->GetYaxis()->SetTitleSize(.04);
	h1->GetXaxis()->SetTitleOffset(1.1);
	h1->GetYaxis()->SetTitleOffset(1.3);
	h1->GetXaxis()->CenterTitle(1);
	h1->GetYaxis()->CenterTitle(1);
	h1->GetYaxis()->SetMaxDigits(4);
	h1->SetLineWidth(1);
	h1->SetLineColor(1);
	h1->SetMarkerStyle(20);

	h2->SetLineColor(kRed);
	h2->SetMarkerColor(kRed);
	h2->SetMarkerStyle(20);

	h1->GetYaxis()->SetRangeUser(0, 1);

	h1->Draw("P");
	h2->Draw("P SAME");
	
	TLegend *leg = new TLegend(0.15,0.79,0.50,0.89);
	leg->SetNColumns(1);
	leg->AddEntry(h1, "#plus1 mm");
	leg->AddEntry(h2, "#minus1 mm");
	leg->SetBorderSize(0);
	leg->SetTextSize(22); // 26
	leg->SetTextFont(44);

	leg->Draw("SAME");

	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void OverlayGraphs(TGraphErrors *gr1, TGraphErrors *gr2, std::string title, std::string fname, std::string stn) {

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

	gr1->GetYaxis()->SetRangeUser(-0.05, .25);//ymin-0.25, ymax+0.25);
	gr1->GetXaxis()->SetRangeUser(gr1->GetX()[0]-100, gr1->GetX()[gr1->GetN()]+100);
	gr1->SetTitle((stn+title).c_str());
	gr1->GetXaxis()->SetTitleSize(.04);
	gr1->GetYaxis()->SetTitleSize(.04);
	gr1->GetXaxis()->SetTitleOffset(1.1);
	gr1->GetYaxis()->SetTitleOffset(1.2);
	gr1->GetXaxis()->CenterTitle(true);
	gr1->GetYaxis()->CenterTitle(true);
	gr1->GetYaxis()->SetMaxDigits(4);
	gr1->SetMarkerStyle(20); //  Full circle
	gr1->Draw("AP");

	gr2->SetMarkerStyle(24); // Open circle
	gr2->Draw("P SAME");
	//c->SetGridx();

	TLegend *leg = new TLegend(0.49, 0.79, 0.89, 0.89);
	leg->SetBorderSize(0);
	leg->SetNColumns(2);

	leg->AddEntry(gr1, "Nominal");
	if(stn=="S12") leg->AddEntry(gr2, "#plus1 mm");
	else if(stn=="S18") leg->AddEntry(gr2, "#minus1 mm");

	leg->Draw("SAME");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

// Bad name, but it's just an overlay of the AEDM acceptance ratios with +1 mm and -1 mm shift

void OverlayUpDownGraphs(TGraphErrors *gr1, TGraphErrors *gr2, std::string title, std::string fname) {

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

	gr1->GetYaxis()->SetRangeUser(-.15, .25);//ymin-0.25, ymax+0.25);
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

	TLegend *leg = new TLegend(0.59, 0.79, 0.89, 0.89);
	leg->SetBorderSize(0);
	leg->SetNColumns(2);

	leg->AddEntry(gr1, "#plus1 mm");
	leg->AddEntry(gr2, "#minus1 mm");

	leg->Draw("SAME");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawGraph(TGraphErrors *graph, std::string title, std::string fname, std::string stn) {

	TCanvas *c = new TCanvas("c","c",800,600);

	graph->SetTitle(title.c_str());
	graph->SetTitle((stn+title).c_str());
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

	TF1 *fit = (TF1*)graph->GetFunction("pol0");

	TLegend *leg = new TLegend(.59, .79, .89, .89);
	leg->SetBorderSize(0);
	leg->SetNColumns(2);
	leg->AddEntry(graph, "Sim");
	leg->AddEntry(fit, "Fit");
	//leg->Draw("SAME");

	TPaveText *result = new TPaveText(0.40,0.75,0.60,0.85,"NDC");
	result->SetTextAlign(22);
	result->AddText("#LT#DeltaA_{EDM}#GT = "+Round(fit->GetParameter(0),2)+"%");// #pm"+Round(fit->GetParError(0),2)+" %"); 
	result->SetTextSize(26);
	result->SetTextFont(44);
	result->SetFillColor(0);

	result->Draw("SAME");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawMainOverlay(TGraphErrors *gr1, TGraphErrors *gr2, TGraphErrors *gr3, std::string title, std::string fname, string stn) {

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
	gr1->GetYaxis()->SetRangeUser(-0.05, 0.35);
	gr1->Draw("AP");

	gr2->SetMarkerStyle(20); // open circle
	gr2->SetMarkerColor(kRed);
	gr2->SetLineColor(kRed);
	gr2->Draw("P SAME");

	if(gr3!=0) {
		gr3->SetMarkerStyle(20);
		gr3->SetMarkerColor(kBlue);
		gr3->SetLineColor(kBlue);
		gr3->Draw("P SAME");
	}

	TLegend *l = new TLegend(.69, .79, .89, .89);
	l->SetBorderSize(0);
	l->SetTextSize(24);
	l->SetTextFont(44);

	if(gr3==0) {
		l->AddEntry(gr1, "Unweighted");
		l->AddEntry(gr2, "Weighted");
	} else { 
		l->AddEntry(gr1, "All decays");
		l->AddEntry(gr2, "Truth vertices (nominal)");
		if(stn=="S12") l->AddEntry(gr3, "Truth vertices (#plus1 mm)");
		if(stn=="S18") l->AddEntry(gr3, "Truth vertices (#minus1 mm)");
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

void DrawSecondaryOverlay(TGraphErrors *gr1, TGraphErrors *gr2, string stn, std::string title, std::string fname) {

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

	//gr1->GetXaxis()->SetRangeUser(xmin - 100, xmax + 100);
	gr1->GetYaxis()->SetRangeUser(-0.05, 1);
	gr1->SetMarkerColor(kRed);
	gr1->SetLineColor(kRed);
	gr1->Draw("AP");


	for(int i(0); i<gr2->GetN(); i++) gr2->SetPoint(i, gr2->GetX()[i]+25, gr2->GetY()[i]);

	gr2->SetMarkerStyle(20); // open circle
	gr2->SetMarkerColor(kBlue);
	gr2->SetLineColor(kBlue);
	gr2->Draw("P SAME");

	TLegend *l = new TLegend(0.11,0.79,0.50,0.89);
	l->SetBorderSize(0);
	l->SetTextSize(24);
	l->SetTextFont(44);

	l->AddEntry(gr1, "Truth vertices (nominal)");
	if(stn=="S12") l->AddEntry(gr2, "Truth vertices (#plus1 mm)");
	if(stn=="S18") l->AddEntry(gr2, "Truth vertices (#minus1 mm)");
	
	l->Draw("SAME");
	gPad->Update();

	/*		

		l->SetX1NDC(.49);
		l->SetX2NDC(.89);
		l->SetY1NDC(.75);
		l->SetY2NDC(.89);*/
		//c->Update();
		//}

	/*	l->Draw("SAME");*/

	//c->SetGridx();

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

TGraphErrors *DiffGraph(TGraphErrors *gr1, TGraphErrors *gr2) {

	TGraphErrors *gr = new TGraphErrors();

	double sum = 0;

	for(int i(0); i<gr1->GetN(); i++) {

		double a = gr1->GetY()[i]; double ea = gr1->GetY()[i];
		double b = gr2->GetY()[i]; double eb = gr2->GetEY()[i]; 

		double percChange = (a-b)/a;
		percChange = abs(percChange)*100;

		sum = sum + percChange;

		double percChangeErr = 4;//percChange*gr2->GetEY()[i]/gr2->GetY()[i];//0;//sqrt( (pow(b/(a*a), 2) * pow(ea,2)) + (pow(1/a, 2) * pow(eb,2)) );

		gr->SetPoint(i, gr1->GetX()[i], percChange);//(gr1->GetY()[i] - gr2->GetY()[i])/gr1->GetY()[i]);
		gr->SetPointError(i, 0, percChangeErr);//*sqrt( pow(gr1->GetEY()[i], 2) + pow(gr2->GetEY()[i], 2)));

	}

	cout<<"Average shift = "<<sum/gr1->GetN()<<endl;

	return gr; 
}

void Run(string step) { 

	string fn1 = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr_0mm.root"; // "../Plots/MC/dMu/Alignment/0mm/Fits/edmFits_unblinded_trackTruth_WORLD_"+step+"_noVertCorr_BQ.root";
	string fn2 = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr_1mm.root"; //../Plots/MC/dMu/Alignment/1mm/Fits/edmFits_unblinded_trackTruth_WORLD_"+step+"_noVertCorr_BQ.root";

	TFile *f1 = TFile::Open(fn1.c_str());
	TFile *f2 = TFile::Open(fn2.c_str());

	cout<<"Reading files "<<fn1<<", "<<f1<<" and "<<fn2<<", "<<f2<<endl;

	vector<string> stn_ = {"S12", "S18"};

	for(auto& stn : stn_) { 

		TGraphErrors *gr1 = ResetGraph((TGraphErrors*)f1->Get(("MomentumBinnedAnalysis/ParameterScans/"+stn+"_AEDM_vs_p_thetaY").c_str()), xmin, xmax);
		TGraphErrors *gr2 = ResetGraph((TGraphErrors*)f2->Get(("MomentumBinnedAnalysis/ParameterScans/"+stn+"_AEDM_vs_p_thetaY").c_str()), xmin, xmax);

		for(int i(0); i<gr1->GetN(); i++) {

			gr1->SetPointX(i, gr1->GetX()[i]-25);
			gr2->SetPointX(i, gr2->GetX()[i]+25);
		}

		OverlayGraphs(gr1, gr2, ";Truth vertex momentum [MeV];A_{EDM} [mrad] / 250 MeV", ("../Images/MC/Alignment/"+stn+"_AEDM_vs_p_overlay_"+step).c_str(), stn);

		TGraphErrors *gr_diff = DiffGraph(gr1, gr2);

		gr_diff->Fit("pol0");

		DrawGraph(gr_diff, ";Decay vertex momentum [MeV];#DeltaA_{EDM} [%] / 250 MeV", "../Images/MC/Alignment/"+stn+"_AEDM_vs_p_diff_"+step, stn);

		TH1D *h_diff = new TH1D("h_diff", ";#DeltaA_{EDM} [%];Entries / 1%", 45, 0, 45);

		for(int i(0); i<gr_diff->GetN(); i++) h_diff->Fill(gr_diff->GetY()[i]);

		DrawTH1(h_diff, "", "../Images/MC/Alignment/"+stn+"_AEDM_vs_p_diff_hist_"+step);

	}

	f1->Close();
	f2->Close();

	return;

}

// Ignore other "Run" functions
void Run2(bool write) {

	TString foutName = "../Plots/MC/Acceptance/Plots/acceptanceWeightingErrorVsMomentum_250MeV.root";
	if(!write) foutName = "delete_me.root";

	TFile *fout = new TFile(foutName, "RECREATE");
	fout->mkdir("graphs"); fout->mkdir("hists");

	TString f1Name = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr.root";
	TString f2Name = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr_0mm.root"; // "../Plots/MC/dMu/Alignment/0mm/Fits/edmFits_unblinded_trackTruth_WORLD_"+step+"_noVertCorr_BQ.root";
	TString f3Name = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr_1mm.root";
	
	TFile *f1 = TFile::Open(f1Name);
	TFile *f2 = TFile::Open(f2Name);
	TFile *f3 = TFile::Open(f3Name);

	TGraphErrors *gr1 = (TGraphErrors*)f1->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY"); 

	cout<<"---> Got base files "<<f1Name<<", "<<f1<<", "<<f2Name<<", "<<f2<<", "<<f3Name<<", "<<f3<<endl;

	vector<string> stn_ = {"S12", "S18"};

	vector<TH1D*> h1_ratio_;

	for(auto& stn : stn_) {
		
		TGraphErrors *gr2 = (TGraphErrors*)f2->Get(("MomentumBinnedAnalysis/ParameterScans/"+stn+"_AEDM_vs_p_thetaY").c_str());
		TGraphErrors *gr3 = (TGraphErrors*)f3->Get(("MomentumBinnedAnalysis/ParameterScans/"+stn+"_AEDM_vs_p_thetaY").c_str());

		// For presentation only
		gr1 = ResetGraph(gr1, xmin, xmax);
		gr2 = ResetGraph(gr2, xmin, xmax);
		gr3 = ResetGraph(gr3, xmin, xmax);

		DrawMainOverlay(gr1, gr2, gr3, stn+";Decay vertex momentum [MeV];A_{EDM} [mrad] / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_AlignmentShifted_AEDM_vs_p_overlay", stn);

		// Make ratio of gr2/gr1 (gr2 = nominal)
		TGraphErrors *gr_ratio_1 = new TGraphErrors();

		int counter = 0;

		for (int i(0); i<gr1->GetN(); i++) {

			double x = gr1->GetX()[i];

			if(x < xmin || x > xmax) continue;

			double y = gr2->GetY()[i]/gr1->GetY()[i];
			double ey = y * sqrt( pow(gr1->GetEY()[i]/gr1->GetY()[i], 2) + pow(gr2->GetEY()[i]/gr2->GetY()[i], 2) );

			gr_ratio_1->SetPoint(counter, x, y);
			gr_ratio_1->SetPointError(counter, 0, ey);


			counter++;
		}

		// Make ratio of gr3/gr1 (gr3 = ±1 mm)
		TGraphErrors *gr_ratio_2 = new TGraphErrors();

		counter = 0;

		for (int i(0); i<gr1->GetN(); i++) {

			double x = gr1->GetX()[i];

			if(x < xmin || x > xmax) continue;

			double y = gr3->GetY()[i]/gr1->GetY()[i];
			double ey = y * sqrt( pow(gr1->GetEY()[i]/gr1->GetY()[i], 2) + pow(gr3->GetEY()[i]/gr3->GetY()[i], 2) );

			gr_ratio_2->SetPoint(counter, x, y);
			gr_ratio_2->SetPointError(counter, 0, ey);

			//gr_ratio_plus->SetPoint(counter, )

			counter++;
		}

		TGraphErrors *gr_ratio_diff = new TGraphErrors();

		for (int i(0); i<gr_ratio_1->GetN(); i++) {

			// Difference from nominal
			double y = gr_ratio_1->GetY()[i] - gr_ratio_2->GetY()[i];
			double x = gr_ratio_1->GetX()[i]; 

			gr_ratio_diff->SetPoint(i, x, y);
			gr_ratio_diff->SetPointError(i, 0, 0);

		}

		//TGraphErrors *gr_ratio_plus = new TGraphErrors();
		//TGraphErrors *gr_ratio_minus = new TGraphErrors();

		DrawTGraphErrors(gr_ratio_diff, stn+";Decay vertex momentum [MeV];Acceptance fraction per mm misalignment / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_AcceptanceErrorVsMomentum");

		fout->cd("graphs");
		gr_ratio_diff->SetName((stn+"_diff").c_str());
		gr_ratio_diff->Write();

		// Easier to use a histogram during the actual correction
		int nBins = gr_ratio_diff->GetN()+1;

		TH1D *h1_ratio = new TH1D((stn+"_diff").c_str(), ";Decay vertex momentum [MeV];Acceptance fraction per mm misalignment / 250 MeV", gr_ratio_diff->GetN(), xmin, xmax);

		for(int i(0); i<gr_ratio_diff->GetN(); i++) {
			h1_ratio->SetBinContent(i+1, gr_ratio_diff->GetY()[i]);
			h1_ratio->SetBinError(i+1, gr_ratio_diff->GetEY()[i]);
		}

		DrawTH1(h1_ratio, stn+";Decay vertex momentum [MeV];Acceptance fraction per mm misalignment / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_HistAcceptanceErrorVsMomentum");

		//TH1D *h1_ratio_minus = new TH1D((stn+"_ratio_minus").c_str(), ";Decay vertex momentum [MeV];Acceptance weighting / 250 MeV", gr_ratio->GetN(), xmin, xmax);

		fout->cd("hists");
		h1_ratio->Write();

		h1_ratio_.push_back(h1_ratio);


	}

	//DrawTH1Overlay(h1_ratio_, ";Decay vertex momentum [MeV];#Delta A_{EDM} acceptance fraction / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/Overlay_HistAcceptanceErrorVsMomentum");


	// Get delta / mm 

	TH1D *h_delta = (TH1D*)h1_ratio_.at(0)->Clone("h_delta");

	for(int i(0); i<h_delta->GetXaxis()->GetNbins(); i++) { 

		double y1 = h1_ratio_.at(0)->GetBinContent(i+1);
		double y2 = h1_ratio_.at(1)->GetBinContent(i+1);

		double delta = (y1+y2)/2;

		h_delta->SetBinContent(i+1,delta);

	}

	h_delta->GetYaxis()->SetRangeUser(0, 0.17);
	DrawTH1(h_delta, ";Decay vertex momentum [MeV];#Delta A_{EDM} acceptance fraction per mm / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/DeltaAcceptancePerMMVsMomentum");

	h_delta->Write();
	
	f1->Close();
	f2->Close();
	f3->Close();

	fout->Close();

	cout<<"---> Written plots to "<<foutName<<", "<<fout<<endl;

	return;

}

void Run3(bool write) {

	TString foutName = "../Plots/MC/Acceptance/Plots/acceptanceWeightingErrorVsMomentum_250MeV.root";
	if(!write) foutName = "delete_me.root";

	TFile *fout = new TFile(foutName, "RECREATE");
	fout->mkdir("graphs"); fout->mkdir("hists");

	TString f1Name = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr.root";
	TString f2Name = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr_0mm.root"; // "../Plots/MC/dMu/Alignment/0mm/Fits/edmFits_unblinded_trackTruth_WORLD_"+step+"_noVertCorr_BQ.root";
	TString f3Name = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr_1mm.root";
	
	TFile *f1 = TFile::Open(f1Name);
	TFile *f2 = TFile::Open(f2Name);
	TFile *f3 = TFile::Open(f3Name);

	TGraphErrors *gr1 = (TGraphErrors*)f1->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY"); 

	cout<<"---> Got base files "<<f1Name<<", "<<f1<<", "<<f2Name<<", "<<f2<<", "<<f3Name<<", "<<f3<<endl;

	vector<string> stn_ = {"S12", "S18"};

	vector<TH1D*> h1_ratio_diff_;
	vector<TGraphErrors*> gr_ratio_diff_;

	for(auto& stn : stn_) {
		
		TGraphErrors *gr2 = (TGraphErrors*)f2->Get(("MomentumBinnedAnalysis/ParameterScans/"+stn+"_AEDM_vs_p_thetaY").c_str());
		TGraphErrors *gr3 = (TGraphErrors*)f3->Get(("MomentumBinnedAnalysis/ParameterScans/"+stn+"_AEDM_vs_p_thetaY").c_str());

		gr1 = ResetGraph(gr1, xmin, xmax);
		gr2 = ResetGraph(gr2, xmin, xmax);
		gr3 = ResetGraph(gr3, xmin, xmax);

		DrawMainOverlay(gr1, gr2, gr3, stn+";Decay vertex momentum [MeV];A_{EDM} [mrad] / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_AlignmentShifted_AEDM_vs_p_overlay", stn);

		// Make ratio of gr2/gr1 (gr2 = nominal)
		TGraphErrors *gr_ratio_1 = new TGraphErrors();

		int counter = 0;

		for (int i(0); i<gr1->GetN(); i++) {

			double x = gr1->GetX()[i];

			if(x < xmin || x > xmax) continue;

			double y = gr2->GetY()[i]/gr1->GetY()[i];
			double ey = y * sqrt( pow(gr1->GetEY()[i]/gr1->GetY()[i], 2) + pow(gr2->GetEY()[i]/gr2->GetY()[i], 2) );

			gr_ratio_1->SetPoint(counter, x, y);
			gr_ratio_1->SetPointError(counter, 0, ey);


			counter++;
		}

		// Make ratio of gr3/gr1 (gr3 = ±1 mm)
		TGraphErrors *gr_ratio_2 = new TGraphErrors();

		counter = 0;

		for (int i(0); i<gr1->GetN(); i++) {

			double x = gr1->GetX()[i];

			// Not really necessary 
			if(x < xmin || x > xmax) continue;

			double y = gr3->GetY()[i]/gr1->GetY()[i];
			double ey = y * sqrt( pow(gr1->GetEY()[i]/gr1->GetY()[i], 2) + pow(gr3->GetEY()[i]/gr3->GetY()[i], 2) );

			gr_ratio_2->SetPoint(counter, x, y);
			gr_ratio_2->SetPointError(counter, 0, ey);

			counter++;

		}

		fout->cd("graphs");
		gr_ratio_1->SetName((stn+"_gr_ratio_nominal").c_str());
		gr_ratio_1->Write();

		gr_ratio_2->SetName((stn+"_gr_ratio_shift").c_str());
		gr_ratio_2->Write();

		DrawSecondaryOverlay(gr_ratio_1, gr_ratio_2, stn, stn+";Decay vertex momentum (nominal) [MeV];A_{EDM} acceptance fraction / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_OverlayAEDMAcceptanceFraction");
	
		TH1D *h1_ratio_1 = new TH1D((stn+"_h_ratio_nominal").c_str(), ";Decay vertex momentum [MeV];A_{EDM} acceptance fraction / 250 MeV", gr_ratio_1->GetN(), xmin, xmax);
		TH1D *h1_ratio_2 = new TH1D((stn+"_h_ratio_shift").c_str(), ";Decay vertex momentum [MeV];A_{EDM} acceptance fraction / 250 MeV", gr_ratio_2->GetN(), xmin, xmax);

		for(int i(0); i<gr_ratio_1->GetN(); i++) {
			h1_ratio_1->SetBinContent(i+1, gr_ratio_1->GetY()[i]);
			h1_ratio_1->SetBinError(i+1, gr_ratio_1->GetEY()[i]);
		}

		for(int i(0); i<gr_ratio_2->GetN(); i++) {
			h1_ratio_2->SetBinContent(i+1, gr_ratio_2->GetY()[i]);
			h1_ratio_2->SetBinError(i+1, gr_ratio_2->GetEY()[i]);
		}

		fout->cd("hists");
		h1_ratio_1->Write();
		h1_ratio_2->Write();

		// Get difference 
		TGraphErrors *gr_ratio_diff = new TGraphErrors();

		for (int i(0); i<gr_ratio_1->GetN(); i++) {

			// Difference from nominal
			double y = gr_ratio_1->GetY()[i] - gr_ratio_2->GetY()[i];
			double x = gr_ratio_1->GetX()[i]; 

			gr_ratio_diff->SetPoint(i, x, y);
			gr_ratio_diff->SetPointError(i, 0, 0);

		}

		DrawTGraphErrors(gr_ratio_diff, stn+";Decay vertex momentum [MeV];#Delta A_{EDM} acceptance fraction / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_AEDMAcceptanceFractionDiff");

		fout->cd("graphs");
		gr_ratio_diff->SetName((stn+"_diff").c_str());
		gr_ratio_diff->Write();

		// What's the average?
		TH1D *h1_ratio_diff = new TH1D((stn+"_diff").c_str(), ";Decay vertex momentum [MeV];#Delta A_{EDM} acceptance fraction per mm / 250 MeV", gr_ratio_diff->GetN(), xmin, xmax);

		for(int i(0); i<gr_ratio_diff->GetN(); i++) {
			h1_ratio_diff->SetBinContent(i+1, gr_ratio_diff->GetY()[i]);
			h1_ratio_diff->SetBinError(i+1, gr_ratio_diff->GetEY()[i]);
		}

		DrawTH1(h1_ratio_diff, stn+";Decay vertex momentum [MeV];#Delta A_{EDM} acceptance fraction per mm / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_HistAEDMAcceptanceFractionDiff");

		//TH1D *h1_ratio_minus = new TH1D((stn+"_ratio_minus").c_str(), ";Decay vertex momentum [MeV];Acceptance weighting / 250 MeV", gr_ratio->GetN(), xmin, xmax);
		fout->cd("hists");
		h1_ratio_diff->Write();

		h1_ratio_diff_.push_back(h1_ratio_diff);
		gr_ratio_diff_.push_back(gr_ratio_diff);

	}

	OverlayUpDownGraphs(gr_ratio_diff_.at(0), gr_ratio_diff_.at(1), ";Decay vertex momentum [MeV];#Delta A_{EDM} acceptance fraction per mm / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/AEDMAcceptanceUncOverlay");

	// DrawTH1Overlay(h1_ratio_, ";Decay vertex momentum [MeV];#Delta A_{EDM} acceptance fraction / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/Overlay_HistAcceptanceErrorVsMomentum");

	// Get delta / mm 

	TH1D *h_delta = (TH1D*)h1_ratio_diff_.at(0)->Clone("h_delta");

	for(int i(0); i<h_delta->GetXaxis()->GetNbins(); i++) { 

		// what's the average absolute offset from nominal ±1 mm? 
		double y1 = abs(h1_ratio_diff_.at(0)->GetBinContent(i+1));
		double y2 = abs(h1_ratio_diff_.at(1)->GetBinContent(i+1));

		double delta = (y1+y2)/2;

		h_delta->SetBinContent(i+1,delta);

	}

	h_delta->GetYaxis()->SetRangeUser(0, 0.17);

	DrawTH1(h_delta, ";Decay vertex momentum [MeV];#Delta A_{EDM} acceptance fraction per mm / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/DeltaAEDMAcceptancePerMMVsMomentum");

	h_delta->Write();
	
	f1->Close();
	f2->Close();
	f3->Close();

	fout->Close();

	cout<<"---> Written plots to "<<foutName<<", "<<fout<<endl;

	return;

}

void Run4(bool write) {

	TString foutName = "../Plots/MC/Acceptance/Plots/acceptanceWeightingErrorVsMomentum_250MeV.root";
	if(!write) foutName = "delete_me.root";

	TFile *fout = new TFile(foutName, "RECREATE");
	fout->mkdir("graphs"); fout->mkdir("hists");

	TString f1Name = "../Plots/MC/dMu/Dilution/dilutionCurves.exact.root";

	TString f2Name = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr_full.root"; // "../Plots/MC/dMu/Alignment/0mm/Fits/edmFits_unblinded_trackTruth_WORLD_"+step+"_noVertCorr_BQ.root";
	TString f3Name = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr_full_plus1mm.root";
	
	TFile *f1 = TFile::Open(f1Name);
	TFile *f2 = TFile::Open(f2Name);
	TFile *f3 = TFile::Open(f3Name);

	TGraphErrors *d_gr = (TGraphErrors*)f1->Get("DilutionFits/AQ/Decays/250MeV/d_vs_p/allDecays");
  	TF1 *dilutionFunc = (TF1*)d_gr->GetFunction("DilutionFunc");

	//TGraphErrors *gr1 = (TGraphErrors*)f1->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY"); 

	cout<<"---> Got base files "<<f1Name<<", "<<f1<<", "<<f2Name<<", "<<f2<<", "<<f3Name<<", "<<f3<<endl;

	vector<string> stn_ = {"S0", "S12", "S18", "S12S18", "S0S12S18"};

	vector<TH1D*> h1_ratio_diff_;
	vector<TGraphErrors*> gr_ratio_diff_;

	for(auto& stn : stn_) {
		
		TGraphErrors *gr2 = (TGraphErrors*)f2->Get(("MomentumBinnedAnalysis/ParameterScans/"+stn+"_AEDM_vs_p_thetaY").c_str());
		TGraphErrors *gr3 = (TGraphErrors*)f3->Get(("MomentumBinnedAnalysis/ParameterScans/"+stn+"_AEDM_vs_p_thetaY").c_str());

		gr2 = ResetGraph(gr2, xmin, xmax);
		gr3 = ResetGraph(gr3, xmin, xmax);

		// DrawMainOverlay(gr1, gr2, gr3, stn+";Decay vertex momentum [MeV];A_{EDM} [mrad] / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_AlignmentShifted_AEDM_vs_p_overlay", stn);

		// Make ratio of gr2/gr1 (gr2 = nominal)
		TGraphErrors *gr_ratio_1 = new TGraphErrors();

		int counter = 0;

		for (int i(0); i<gr2->GetN(); i++) {

			double x = gr2->GetX()[i];

			if(x < xmin || x > xmax) continue;

			double y = (gr2->GetY()[i]/delta_calc) * (1/dilutionFunc->Eval(x));
			double ey = y * (gr2->GetEY()[i]/gr2->GetY()[i]); 

			gr_ratio_1->SetPoint(counter, x, y);
			gr_ratio_1->SetPointError(counter, 0, ey);

			counter++;
		}

		// Make ratio of gr3/gr1 (gr3 = ±1 mm)
		TGraphErrors *gr_ratio_2 = new TGraphErrors();

		counter = 0;

		for (int i(0); i<gr3->GetN(); i++) {

			double x = gr3->GetX()[i];

			if(x < xmin || x > xmax) continue;

			double y = (gr3->GetY()[i]/delta_calc) * (1/dilutionFunc->Eval(x));
			double ey = y * (gr3->GetEY()[i]/gr3->GetY()[i]); 

			gr_ratio_2->SetPoint(counter, x, y);
			gr_ratio_2->SetPointError(counter, 0, ey);

			counter++;
		}

		fout->cd("graphs");
		gr_ratio_1->SetName((stn+"_gr_ratio_nominal").c_str());
		gr_ratio_1->Write();

		gr_ratio_2->SetName((stn+"_gr_ratio_shift").c_str());
		gr_ratio_2->Write();

		DrawSecondaryOverlay(gr_ratio_1, gr_ratio_2, stn, stn+";Decay vertex momentum (nominal) [MeV];A_{EDM} acceptance fraction / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_OverlayAEDMAcceptanceFraction");
	
		TH1D *h1_ratio_1 = new TH1D((stn+"_h_ratio_nominal").c_str(), ";Decay vertex momentum [MeV];A_{EDM} acceptance fraction / 250 MeV", gr_ratio_1->GetN(), xmin, xmax);
		TH1D *h1_ratio_2 = new TH1D((stn+"_h_ratio_shift").c_str(), ";Decay vertex momentum [MeV];A_{EDM} acceptance fraction / 250 MeV", gr_ratio_2->GetN(), xmin, xmax);

		for(int i(0); i<gr_ratio_1->GetN(); i++) {
			h1_ratio_1->SetBinContent(i+1, gr_ratio_1->GetY()[i]);
			h1_ratio_1->SetBinError(i+1, gr_ratio_1->GetEY()[i]);
		}

		for(int i(0); i<gr_ratio_2->GetN(); i++) {
			h1_ratio_2->SetBinContent(i+1, gr_ratio_2->GetY()[i]);
			h1_ratio_2->SetBinError(i+1, gr_ratio_2->GetEY()[i]);
		}

		fout->cd("hists");
		h1_ratio_1->Write();
		h1_ratio_2->Write();

		// Get difference 
		TGraphErrors *gr_ratio_diff = new TGraphErrors();

		for (int i(0); i<gr_ratio_1->GetN(); i++) {

			// Difference from nominal
			double y = gr_ratio_1->GetY()[i] - gr_ratio_2->GetY()[i];
			double x = gr_ratio_1->GetX()[i]; 

			// This needs to only include contributions from the unique dataset.
			double N_0;
			double N_1;
			double N_c;
			// = 15512942.;//21512942.;
			// = 21853798.;
			//;// = 21512942.;

			if(stn=="S12") {
				N_0 = 12223913.;
				N_1 = 11850367.;
				N_c = 11579642.;
			} else if(stn=="S18") {
				N_0 = 12079727.;
				N_1 = 11710096.;
				N_c = 11438115.;				
			}

			double n_0 = N_0 - N_c;
			double n_1 = N_1 - N_c; 

			// depend on stn 
			// 				0 mm	1 mm	Common
			// S12	12223913	11850367	11579642
			// S18	12079727	11710096	11438115

			//double ey = gr3->GetEY()[i]; // proto 1/sqrt(N+n)
			// Scale the uncertainty according the fraction unique events
			//double ey = sqrt(pow(gr_ratio_1->GetEY()[i]*(n1/N),2)+pow(gr_ratio_2->GetEY()[i]*(n2/N),2));
			double ey = sqrt(pow(gr_ratio_1->GetEY()[i]*n_0/N_0,2)+pow(gr_ratio_2->GetEY()[i]*n_1/N_1,2));

			// This scales  

			gr_ratio_diff->SetPoint(i, x, y);
			gr_ratio_diff->SetPointError(i, 0, ey);

		}

		DrawTGraphErrors(gr_ratio_diff, stn+";Decay vertex momentum [MeV];#Delta A_{EDM} acceptance fraction / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_AEDMAcceptanceFractionDiff");

		fout->cd("graphs");
		gr_ratio_diff->SetName((stn+"_diff").c_str());
		gr_ratio_diff->Write();

		// What's the average?
		TH1D *h1_ratio_diff = new TH1D((stn+"_diff").c_str(), ";Decay vertex momentum [MeV];#Delta A_{EDM} acceptance fraction per mm / 250 MeV", gr_ratio_diff->GetN(), xmin, xmax);

		for(int i(0); i<gr_ratio_diff->GetN(); i++) {
			h1_ratio_diff->SetBinContent(i+1, gr_ratio_diff->GetY()[i]);
			h1_ratio_diff->SetBinError(i+1, gr_ratio_diff->GetEY()[i]);
		}

		DrawTH1(h1_ratio_diff, stn+";Decay vertex momentum [MeV];#Delta A_{EDM} acceptance fraction per mm / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_HistAEDMAcceptanceFractionDiff");

		//TH1D *h1_ratio_minus = new TH1D((stn+"_ratio_minus").c_str(), ";Decay vertex momentum [MeV];Acceptance weighting / 250 MeV", gr_ratio->GetN(), xmin, xmax);
		fout->cd("hists");
		h1_ratio_diff->Write();

		h1_ratio_diff_.push_back(h1_ratio_diff);
		gr_ratio_diff_.push_back(gr_ratio_diff);

	}

	OverlayUpDownGraphs(gr_ratio_diff_.at(0), gr_ratio_diff_.at(1), ";Decay vertex momentum [MeV];#Delta A_{EDM} acceptance fraction per mm / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/AEDMAcceptanceUncOverlay");

	// DrawTH1Overlay(h1_ratio_, ";Decay vertex momentum [MeV];#Delta A_{EDM} acceptance fraction / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/Overlay_HistAcceptanceErrorVsMomentum");

	// Get delta / mm 

	TH1D *h_delta = (TH1D*)h1_ratio_diff_.at(0)->Clone("h_delta");

	for(int i(0); i<h_delta->GetXaxis()->GetNbins(); i++) { 

		// what's the average absolute offset from nominal ±1 mm? 
		double y1 = abs(h1_ratio_diff_.at(0)->GetBinContent(i+1));
		double y2 = abs(h1_ratio_diff_.at(1)->GetBinContent(i+1));

		double delta = (y1+y2)/2;

		h_delta->SetBinContent(i+1,delta);

	}

	h_delta->GetYaxis()->SetRangeUser(0, 0.17);

	DrawTH1(h_delta, ";Decay vertex momentum [MeV];#Delta A_{EDM} acceptance fraction per mm / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/DeltaAEDMAcceptancePerMMVsMomentum");

	h_delta->Write();
	
	f1->Close();
	f2->Close();
	f3->Close();

	fout->Close();

	cout<<"---> Written plots to "<<foutName<<", "<<fout<<endl;

	return;

}

void Run5(bool write, string suffix = "1mm") {

	TString foutName = "../Plots/MC/Acceptance/Plots/acceptanceWeightingErrorVsMomentum_250MeV.root";
	if(!write) foutName = "delete_me.root";

	TFile *fout = new TFile(foutName, "RECREATE");
	fout->mkdir("graphs"); fout->mkdir("hists");

	string f1Name = "../Plots/MC/dMu/Dilution/dilutionCurves.exact.root";
	string f2Name = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr_plus"+suffix+".root"; 
	string f3Name = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr_minus"+suffix+".root";
	
	TFile *f1 = TFile::Open(f1Name.c_str());
	TFile *f2 = TFile::Open(f2Name.c_str());
	TFile *f3 = TFile::Open(f3Name.c_str());

	TGraphErrors *d_gr = (TGraphErrors*)f1->Get("DilutionFits/AQ/Decays/250MeV/d_vs_p/allDecays");
  	TF1 *dilutionFunc = (TF1*)d_gr->GetFunction("DilutionFunc");

	//TGraphErrors *gr1 = (TGraphErrors*)f1->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY"); 

	cout<<"---> Got base files "<<f1Name<<", "<<f1<<", "<<f2Name<<", "<<f2<<", "<<f3Name<<", "<<f3<<endl;

	//vector<string> stn_ = {"S0", "S12", "S18"};

	vector<TH1D*> h1_ratio_diff_;
	vector<TGraphErrors*> gr_ratio_diff_;
	
	// Up	
	TGraphErrors *gr2 = (TGraphErrors*)f2->Get("MomentumBinnedAnalysis/ParameterScans/S12_AEDM_vs_p_thetaY");

	// Down
	TGraphErrors *gr3 = (TGraphErrors*)f3->Get("MomentumBinnedAnalysis/ParameterScans/S12_AEDM_vs_p_thetaY");

	gr2 = ResetGraph(gr2, xmin, xmax);
	gr3 = ResetGraph(gr3, xmin, xmax);

	TGraphErrors *gr_ratio_1 = new TGraphErrors();

	int counter = 0;

	for (int i(0); i<gr2->GetN(); i++) {

		double x = gr2->GetX()[i];

		if(x < xmin || x > xmax) continue;

		double y = (gr2->GetY()[i]/delta_calc) * (1/dilutionFunc->Eval(x));
		double ey = y * (gr2->GetEY()[i]/gr2->GetY()[i]); 

		gr_ratio_1->SetPoint(counter, x, y);
		gr_ratio_1->SetPointError(counter, 0, ey);

		counter++;
	}

	// Make ratio of gr3/gr1 (gr3 = ±1 mm)
	TGraphErrors *gr_ratio_2 = new TGraphErrors();

	counter = 0;

	for (int i(0); i<gr3->GetN(); i++) {

		double x = gr3->GetX()[i];

		if(x < xmin || x > xmax) continue;

		double y = (gr3->GetY()[i]/delta_calc) * (1/dilutionFunc->Eval(x));
		double ey = y * (gr3->GetEY()[i]/gr3->GetY()[i]); 

		gr_ratio_2->SetPoint(counter, x, y);
		gr_ratio_2->SetPointError(counter, 0, ey);

		counter++;
	}

	fout->cd("graphs");
	gr_ratio_1->SetName("gr_ratio_nominal");
	gr_ratio_1->Write();

	gr_ratio_2->SetName("gr_ratio_shift");
	gr_ratio_2->Write();

	DrawSecondaryOverlay(gr_ratio_1, gr_ratio_2, "", ";Decay vertex momentum (nominal) [MeV];A_{EDM} acceptance fraction / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/OverlayAEDMAcceptanceFraction_"+suffix);

	TH1D *h1_ratio_1 = new TH1D("h_ratio_nominal", ";Decay vertex momentum [MeV];A_{EDM} acceptance fraction / 250 MeV", gr_ratio_1->GetN(), xmin, xmax);
	TH1D *h1_ratio_2 = new TH1D("h_ratio_shift", ";Decay vertex momentum [MeV];A_{EDM} acceptance fraction / 250 MeV", gr_ratio_2->GetN(), xmin, xmax);

	for(int i(0); i<gr_ratio_1->GetN(); i++) {
		h1_ratio_1->SetBinContent(i+1, gr_ratio_1->GetY()[i]);
		h1_ratio_1->SetBinError(i+1, gr_ratio_1->GetEY()[i]);
	}

	for(int i(0); i<gr_ratio_2->GetN(); i++) {
		h1_ratio_2->SetBinContent(i+1, gr_ratio_2->GetY()[i]);
		h1_ratio_2->SetBinError(i+1, gr_ratio_2->GetEY()[i]);
	}

	fout->cd("hists");
	h1_ratio_1->Write();
	h1_ratio_2->Write();

	// Get difference 
	TGraphErrors *gr_ratio_diff = new TGraphErrors();

	for (int i(0); i<gr_ratio_1->GetN(); i++) {

		// Difference from nominal
		double y = gr_ratio_1->GetY()[i] - gr_ratio_2->GetY()[i];
		double x = gr_ratio_1->GetX()[i]; 

		// This needs to only include contributions from the unique dataset.
		double N_0;
		double N_1;
		double N_c;
		// = 15512942.;//21512942.;
		// = 21853798.;
		//;// = 21512942.;

/*		if(stn=="S12") {
			N_0 = 12223913.;
			N_1 = 11850367.;
			N_c = 11579642.;
		} else if(stn=="S18") {
			N_0 = 12079727.;
			N_1 = 11710096.;
			N_c = 11438115.;				
		}*/

		double n_0 = N_0 - N_c;
		double n_1 = N_1 - N_c; 

		// depend on stn 
		// 				0 mm	1 mm	Common
		// S12	12223913	11850367	11579642
		// S18	12079727	11710096	11438115

		//double ey = gr3->GetEY()[i]; // proto 1/sqrt(N+n)
		// Scale the uncertainty according the fraction unique events
		//double ey = sqrt(pow(gr_ratio_1->GetEY()[i]*(n1/N),2)+pow(gr_ratio_2->GetEY()[i]*(n2/N),2));
		double ey = sqrt(pow(gr_ratio_1->GetEY()[i]*n_0/N_0,2)+pow(gr_ratio_2->GetEY()[i]*n_1/N_1,2));

		// This scales  

		gr_ratio_diff->SetPoint(i, x, y);
		gr_ratio_diff->SetPointError(i, 0, ey);

	}

	DrawTGraphErrors(gr_ratio_diff, ";Decay vertex momentum [MeV];#Delta A_{EDM} acceptance fraction / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/AEDMAcceptanceFractionDiff_"+suffix);

	fout->cd("graphs");
	gr_ratio_diff->SetName("diff");
	gr_ratio_diff->Write();

	// What's the average?
	TH1D *h1_ratio_diff = new TH1D("diff", ";Decay vertex momentum [MeV];#Delta A_{EDM} acceptance fraction per mm / 250 MeV", gr_ratio_diff->GetN(), xmin, xmax);

	for(int i(0); i<gr_ratio_diff->GetN(); i++) {
		h1_ratio_diff->SetBinContent(i+1, gr_ratio_diff->GetY()[i]);
		h1_ratio_diff->SetBinError(i+1, gr_ratio_diff->GetEY()[i]);
	}

	DrawTH1(h1_ratio_diff, ";Decay vertex momentum [MeV];#Delta A_{EDM} acceptance fraction per mm / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/HistAEDMAcceptanceFractionDiff_"+suffix);

	//TH1D *h1_ratio_minus = new TH1D((stn+"_ratio_minus").c_str(), ";Decay vertex momentum [MeV];Acceptance weighting / 250 MeV", gr_ratio->GetN(), xmin, xmax);
	fout->cd("hists");
	h1_ratio_diff->Write();

	h1_ratio_diff_.push_back(h1_ratio_diff);
	gr_ratio_diff_.push_back(gr_ratio_diff);

	//}

	OverlayUpDownGraphs(gr_ratio_diff_.at(0), gr_ratio_diff_.at(1), ";Decay vertex momentum [MeV];#Delta A_{EDM} acceptance fraction per mm / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/AEDMAcceptanceUncOverlay_"+suffix);

	// DrawTH1Overlay(h1_ratio_, ";Decay vertex momentum [MeV];#Delta A_{EDM} acceptance fraction / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/Overlay_HistAcceptanceErrorVsMomentum");

	// Get delta / mm 

	TH1D *h_delta = (TH1D*)h1_ratio_diff_.at(0)->Clone("h_delta");

	for(int i(0); i<h_delta->GetXaxis()->GetNbins(); i++) { 

		// what's the average absolute offset from nominal ±1 mm? 
		double y1 = abs(h1_ratio_diff_.at(0)->GetBinContent(i+1));
		double y2 = abs(h1_ratio_diff_.at(1)->GetBinContent(i+1));

		double delta = (y1+y2)/2;

		h_delta->SetBinContent(i+1,delta);

	}

	h_delta->GetYaxis()->SetRangeUser(0, 0.17);

	DrawTH1(h_delta, ";Decay vertex momentum [MeV];#Delta A_{EDM} acceptance fraction per mm / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/DeltaAEDMAcceptancePerMMVsMomentum_"+suffix);

	h_delta->Write();
	
	f1->Close();
	f2->Close();
	f3->Close();

	fout->Close();

	cout<<"---> Written plots to "<<foutName<<", "<<fout<<endl;

	return;

}

void AlignmentComparison() {

	//Run("250MeV");

	Run5(false);
	//Run("500MeV");
	
	return;
}