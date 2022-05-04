/*#include "FancyDraw.h"*/
#include "Utils.h"

double xmin = 750;
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

	hist->Draw("HIST");
	
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

void DrawOverlay(TGraphErrors *gr1, TGraphErrors *gr3, TGraphErrors *gr2, std::string title, std::string fname, string stn) {

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

	gr2->SetMarkerStyle(20); // open circle
	gr2->SetMarkerColor(kRed);
	gr2->SetLineColor(kRed);
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

	vector<string> stn_ = {"S12", "S18", "S12S18"};

	for(auto& stn : stn_) {

		
		TGraphErrors *gr2 = (TGraphErrors*)f2->Get(("MomentumBinnedAnalysis/ParameterScans/"+stn+"_AEDM_vs_p_thetaY").c_str());
		TGraphErrors *gr3 = (TGraphErrors*)f3->Get(("MomentumBinnedAnalysis/ParameterScans/"+stn+"_AEDM_vs_p_thetaY").c_str());

		// For presentation only
		TGraphErrors *gr1_reset = ResetGraph(gr1, xmin, xmax);
		TGraphErrors *gr2_reset = ResetGraph(gr2, xmin, xmax);
		TGraphErrors *gr3_reset = ResetGraph(gr3, xmin, xmax);

		DrawOverlay(gr1_reset, gr2_reset, gr3_reset, stn+";Decay vertex momentum [MeV];A_{EDM} [mrad] / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_AlignmentShifted_AEDM_vs_p_overlay", stn);

		// Make ratio of gr2/gr1 (gr2 = nominal)
		TGraphErrors *gr_ratio_1 = new TGraphErrors();

		int counter = 0;

		for (int i(0); i<gr1->GetN(); i++) {

			double x = gr1->GetX()[i];

			if(x < xmin || x > xmax) continue;

			double y = gr2->GetY()[i]/gr1->GetY()[i];
			double ey = y * gr1->GetEY()[i]/gr1->GetY()[i]; // sqrt( pow(gr1->GetEY()[i]/gr1->GetY()[i], 2) + pow(gr2->GetEY()[i]/gr2->GetY()[i], 2) );

			//cout<<gr2->GetY()[i]<<", "<<gr1->GetY()[i]<<endl;
			//cout<<i<<", "<<x<<", "<<y<<endl;

			gr_ratio_1->SetPoint(counter, x, y);
			gr_ratio_1->SetPointError(counter, 0, ey);

			//gr_ratio_plus->SetPoint(counter, )

			counter++;
		}

		// Make ratio of gr3/gr1
		TGraphErrors *gr_ratio_2 = new TGraphErrors();

		counter = 0;

		for (int i(0); i<gr1->GetN(); i++) {

			double x = gr1->GetX()[i];

			if(x < xmin || x > xmax) continue;

			double y = gr3->GetY()[i]/gr1->GetY()[i];
			double ey = y * gr1->GetEY()[i]/gr1->GetY()[i]; // sqrt( pow(gr1->GetEY()[i]/gr1->GetY()[i], 2) + pow(gr2->GetEY()[i]/gr2->GetY()[i], 2) );

			//cout<<gr2->GetY()[i]<<", "<<gr1->GetY()[i]<<endl;
			//cout<<i<<", "<<x<<", "<<y<<endl;

			gr_ratio_2->SetPoint(counter, x, y);
			gr_ratio_2->SetPointError(counter, 0, ey);

			//gr_ratio_plus->SetPoint(counter, )

			counter++;
		}

		TGraphErrors *gr_ratio_diff = new TGraphErrors();

		for (int i(0); i<gr_ratio_1->GetN(); i++) {

			double y = abs(gr_ratio_1->GetY()[i] - gr_ratio_2->GetY()[i]);
			double x = gr_ratio_1->GetX()[i]; 

			gr_ratio_diff->SetPoint(i, x, y);
			gr_ratio_diff->SetPointError(i, 0, 0);

		}

		//TGraphErrors *gr_ratio_plus = new TGraphErrors();
		//TGraphErrors *gr_ratio_minus = new TGraphErrors();

		DrawTGraphErrors(gr_ratio_diff, stn+";Decay vertex momentum [MeV];Acceptance fractional uncertainty / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_AcceptanceErrorVsMomentum");

		fout->cd("graphs");
		gr_ratio_diff->SetName((stn+"_diff").c_str());
		gr_ratio_diff->Write();

		// Easier to use a histogram during the actual correction
		int nBins = gr_ratio_diff->GetN()+1;

		TH1D *h1_ratio = new TH1D((stn+"_diff").c_str(), ";Decay vertex momentum [MeV];Acceptance fractional uncertainty / 250 MeV", gr_ratio_diff->GetN(), xmin, xmax);

		for(int i(0); i<gr_ratio_diff->GetN(); i++) {
			h1_ratio->SetBinContent(i+1, gr_ratio_diff->GetY()[i]);
			h1_ratio->SetBinError(i+1, gr_ratio_diff->GetEY()[i]);
		}

		DrawTH1(h1_ratio, stn+";Decay vertex momentum [MeV];Acceptance fractional uncertainty / 250 MeV", "../Images/MC/Acceptance/truth/CorrectionResults/"+stn+"_HistAcceptanceErrorVsMomentum");

		//TH1D *h1_ratio_minus = new TH1D((stn+"_ratio_minus").c_str(), ";Decay vertex momentum [MeV];Acceptance weighting / 250 MeV", gr_ratio->GetN(), xmin, xmax);

		fout->cd("hists");
		h1_ratio->Write();


	}

	f1->Close();
	f2->Close();
	f3->Close();

	fout->Close();

	cout<<"---> Written plots to "<<foutName<<", "<<fout<<endl;

	return;

}

void AlignmentComparison() {

	//Run("250MeV");

	Run2(true);
	//Run("500MeV");
	
	return;
}