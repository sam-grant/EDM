

void BrHallTempPlot() { 

/*# 2018-04-22 to 2018-06-28
# 15907 to 17527*/

	TFile *f_temp = TFile::Open("../Plots/Data/HallTempRun1.root");
	
	TFile *f_1a= TFile::Open("../Plots/Data/RadialFieldEstimation/RadialFieldEstimation/radialFieldEstimationPlots_gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2_15921_15991_empiricalMethod.root");
	TFile *f_1b = TFile::Open("../Plots/Data/RadialFieldEstimation/RadialFieldEstimation/radialFieldEstimationPlots_gm2pro_daq_full_run1_HighKick_5042B_GLdocDB20949-v3_16113_16234_empiricalMethod.root");
	TFile *f_1c = TFile::Open("../Plots/Data/RadialFieldEstimation/RadialFieldEstimation/radialFieldEstimationPlots_gm2pro_daq_full_run1_9d_5040A_GLdocDB17018-v3_16355_16514_empiricalMethod.root");
	TFile *f_1d = TFile::Open("../Plots/Data/RadialFieldEstimation/RadialFieldEstimation/radialFieldEstimationPlots_gm2pro_daq_full_run1_EndGame_5042B_GLdocDB20839-v1_17065_17527_empiricalMethod.root");

	cout<<f_1a<<", "<<f_1b<<", "<<f_1c<<", "<<f_1d<<endl;

	TGraphErrors *gr_temp = (TGraphErrors*)f_temp->Get("HallTempRun1");

	TGraphErrors *gr_StatErr_Run1a = (TGraphErrors*)f_1a->Get("CaloAveragePlots/gr_AvgBrVsRun_StatErr");
	TGraphErrors *gr_StatErr_Run1b = (TGraphErrors*)f_1b->Get("CaloAveragePlots/gr_AvgBrVsRun_StatErr");
	TGraphErrors *gr_StatErr_Run1c = (TGraphErrors*)f_1c->Get("CaloAveragePlots/gr_AvgBrVsRun_StatErr");
	TGraphErrors *gr_StatErr_Run1d = (TGraphErrors*)f_1d->Get("CaloAveragePlots/gr_AvgBrVsRun_StatErr");

	TGraphErrors *gr_AllErr_Run1a = (TGraphErrors*)f_1a->Get("CaloAveragePlots/gr_AvgBrVsRun_AllErr");
	TGraphErrors *gr_AllErr_Run1b = (TGraphErrors*)f_1b->Get("CaloAveragePlots/gr_AvgBrVsRun_AllErr");
	TGraphErrors *gr_AllErr_Run1c = (TGraphErrors*)f_1c->Get("CaloAveragePlots/gr_AvgBrVsRun_AllErr");
	TGraphErrors *gr_AllErr_Run1d = (TGraphErrors*)f_1d->Get("CaloAveragePlots/gr_AvgBrVsRun_AllErr");

	TCanvas *c = new TCanvas("c", "c", 800, 600);

	vector<int> colours_ = {4, 807, 413, 614};

	gr_StatErr_Run1a->SetMarkerColor(4);
	gr_StatErr_Run1a->SetLineColor(4);
	gr_StatErr_Run1a->SetMarkerStyle(20);
	gr_StatErr_Run1a->SetFillColor(kWhite);

	gr_StatErr_Run1b->SetMarkerColor(807);
	gr_StatErr_Run1b->SetLineColor(807);
	gr_StatErr_Run1b->SetMarkerStyle(20);
	gr_StatErr_Run1b->SetFillColor(kWhite);

	gr_StatErr_Run1c->SetMarkerColor(413);
	gr_StatErr_Run1c->SetLineColor(413);
	gr_StatErr_Run1c->SetMarkerStyle(20);
	gr_StatErr_Run1c->SetFillColor(kWhite);

	gr_StatErr_Run1d->SetMarkerColor(614);
	gr_StatErr_Run1d->SetLineColor(614);
	gr_StatErr_Run1d->SetMarkerStyle(20);
	gr_StatErr_Run1d->SetFillColor(kWhite);

	// Reset T plot
	int n = gr_temp->GetN();
	double run_frac = (17527-15907)/n;

	double lo = 23.5; double hi = 30;
	double tmin = 24.5285; double tmax = 28.5874;
	// scale y values so that 15->20 and 45->30
	//https://stackoverflow.com/questions/5294955/how-to-scale-down-a-range-of-numbers-with-a-known-min-and-max-value
	// OLD PERCENT = (x - OLD MIN) / (OLD MAX - OLD MIN)
	// NEW X = ((NEW MAX - NEW MIN) * OLD PERCENT) + NEW MIN
	for(int i(0); i<n; i++) {

		//double old = (gr_temp->GetY()[i] - 15)
		gr_temp->SetPoint(i, 15907+(i*run_frac), (((45-15)*(gr_temp->GetY()[i]-lo))/(hi-lo))+15);
		gr_temp->SetPointError(i, 0, gr_temp->GetEY()[i]);
	}

	gr_temp->SetMarkerStyle(20);
	gr_temp->SetMarkerColor(kRed);
	gr_temp->SetLineColor(kRed);
	//gr_temp->SetLimits()

	// CREATE A DUMMY GRAPH
	TGraph *gr_dummy = new TGraph();
	TRandom3 *rand = new TRandom3(12345);
	for(int i(0); i<gr_temp->GetN(); i++) gr_dummy->SetPoint(i, gr_temp->GetX()[i], rand->Uniform(20, 40));

	gr_dummy->SetMarkerColor(kWhite);
	gr_dummy->SetLineColor(kWhite);
	gr_dummy->GetXaxis()->SetTitleSize(.04);
	gr_dummy->GetYaxis()->SetTitleSize(.04);
	gr_dummy->GetXaxis()->SetTitleOffset(1.1);
	gr_dummy->GetYaxis()->SetTitleOffset(1.1);
	gr_dummy->GetXaxis()->CenterTitle(true);
	gr_dummy->GetYaxis()->CenterTitle(true);
	gr_dummy->GetYaxis()->SetMaxDigits(4);
	gr_dummy->SetMarkerStyle(20); //  Full circle
	gr_dummy->SetTitle(";Run number;#LTB_{r}#GT [ppm]");
	gr_dummy->GetYaxis()->SetRangeUser(15,45);
	gr_dummy->Draw();
	gPad->Update();


	TGaxis *axis = new TGaxis(gPad->GetUxmax(),gPad->GetUymin(),gPad->GetUxmax(),gPad->GetUymax(),lo,hi,510,"L+");
	axis->SetTitle("Temperature [C#circ]");
	axis->SetTitleOffset(1.1);
	axis->CenterTitle(true);
	axis->SetTextFont(42);
	axis->SetLabelFont(42);
	axis->SetTextColor(kRed);
	axis->SetLabelColor(kRed);
	axis->SetLineColor(kRed);
	//axis->SetLabelOffset(-0.025);


	gr_dummy->Draw("AP");
	
	//gr_temp->GetYaxis()->SetRangeUser(20,30);
	
	//gr_temp->Draw("P SAME");
	gr_StatErr_Run1a->Draw("P SAME");
	gr_StatErr_Run1b->Draw("P SAME");
	gr_StatErr_Run1c->Draw("P SAME");
	gr_StatErr_Run1d->Draw("P SAME");
/*
	c->cd();
	TPad *overlay = new TPad("overlay","",0,0,1,1);
	overlay->SetFillStyle(4000);
	overlay->SetFillColor(0);
	overlay->SetFrameFillStyle(4000);
	overlay->Draw();
	overlay->cd();*/
	gr_temp->SetLineWidth(3);
	gr_temp->Draw("SAME");
	axis->Draw("SAME");

	TLegend *l = new TLegend(0.15,0.625,0.45,0.89);
  	l->SetNColumns(1);
  	l->SetBorderSize(0);
	l->SetTextSize(26);
	l->SetTextFont(44);
  	l->AddEntry(gr_temp,"Temperature");
  	l->AddEntry(gr_StatErr_Run1a,"Run-1a");
  	l->AddEntry(gr_StatErr_Run1b,"Run-1b");
  	l->AddEntry(gr_StatErr_Run1c,"Run-1c");
  	l->AddEntry(gr_StatErr_Run1d,"Run-1d");

  	l->Draw("SAME");

  	c->SaveAs("../Images/Data/BrTempOverlayRun1.pdf");
  	c->SaveAs("../Images/Data/BrTempOverlayRun1.png");

	return;

}