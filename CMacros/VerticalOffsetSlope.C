// Globals
double xmin = 1000; double xmax = 2750;

#include "Utils.h"

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

void DrawStationOverlay(TFile *f, string dataset, string fname, double ymin, double ymax) { 

  	cout<<"---> Drawing per station offsets"<<endl;

  	TCanvas *c = new TCanvas("c","",800,600);
  	TLegend *l = new TLegend(0.15, 0.75, 0.89, 0.89); 

	TGraphErrors *gr12 = ResetGraph((TGraphErrors*)f->Get("MomentumBinnedAnalysis/ParameterScans/S12_c_vs_p_thetaY"), xmin, xmax); // -0.7, 0.02);
	TGraphErrors *gr18 = ResetGraph((TGraphErrors*)f->Get("MomentumBinnedAnalysis/ParameterScans/S18_c_vs_p_thetaY"), xmin, xmax);//);	
	
  	l->SetBorderSize(0);
  	l->SetTextSize(24);
  	l->SetTextFont(44);

  	gr12->GetYaxis()->SetRangeUser(ymin, ymax);
  	gr12->GetXaxis()->SetTitleSize(.04);
  	gr12->GetYaxis()->SetTitleSize(.04);
  	gr12->GetXaxis()->SetTitleOffset(1.1);
  	gr12->GetYaxis()->SetTitleOffset(1.15);
  	gr12->GetXaxis()->CenterTitle(true);
  	gr12->GetYaxis()->CenterTitle(true);
  	gr12->GetYaxis()->SetMaxDigits(4);

  	gr12->SetTitle((dataset+";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV").c_str());

  	gr12->SetMarkerColor(kBlack);
  	gr12->SetLineColor(kBlack);
	gr12->SetMarkerStyle(20);  
 
  	gr18->SetMarkerColor(kRed);
  	gr18->SetLineColor(kRed);
	gr18->SetMarkerStyle(20);

	gr12->Draw("APL");
	gr18->Draw("PL SAME");

	l->AddEntry(gr12, "Station 12");
	l->AddEntry(gr18, "Station 18");

 	l->Draw("SAME");

  	c->SaveAs((fname+".pdf").c_str());
  	c->SaveAs((fname+".png").c_str());
  	c->SaveAs((fname+".C").c_str());

 	delete c;

  	return;

}

void DrawOffsetOverlay(TGraphErrors *gr0, TGraphErrors *gr1, string stn, string fname, double ymin, double ymax) { 

  	cout<<"---> Drawing per station offsets"<<endl;

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

  	gr0->SetTitle(("S"+stn+";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV").c_str());

  	gr0->SetMarkerColor(kBlack);
  	gr0->SetLineColor(kBlack);
	gr0->SetMarkerStyle(20);  
 
  	gr1->SetMarkerColor(kRed);
  	gr1->SetLineColor(kRed);
	gr1->SetMarkerStyle(20);

	gr0->Draw("AP");
	gr1->Draw("P SAME");

	// Get fits

	TF1* fit0 = (TF1*)gr0->GetFunction("fit");
	TF1* fit1 = (TF1*)gr1->GetFunction("fit");

	cout<<fit0<<endl;

	fit0->SetLineColor(kBlack);
	fit1->SetLineColor(kRed);

	fit0->Draw("SAME");
	fit1->Draw("SAME");

	l->AddEntry(gr0, "0 mm");
	if(stn=="12") l->AddEntry(gr1, "#plus1 mm");
	else if(stn=="18") l->AddEntry(gr1, "#minus1 mm");

 	l->Draw("SAME");

 	fname = fname+"_S"+stn;

  	c->SaveAs((fname+".pdf").c_str());
  	c->SaveAs((fname+".png").c_str());
  	c->SaveAs((fname+".C").c_str());

 	delete c;

  	return;

}

void DrawSlopeGraph(TGraphErrors *graph, std::string title, std::string fname, double xmin, double xmax, double ymin, double ymax) {

	TCanvas *c = new TCanvas("c","c",800,600);

	// Dummy graph because of ridiculous ROOT range issues
	TGraph *dummy = new TGraph();
	dummy->SetPoint(0, xmin, 0);
	dummy->SetPoint(1, xmax, 0);
	dummy->SetMarkerSize(0);	
	dummy->GetYaxis()->SetRangeUser(ymin, ymax);
	dummy->SetTitle(title.c_str());
	dummy->GetXaxis()->SetTitleSize(.04);
	dummy->GetYaxis()->SetTitleSize(.04);
	dummy->GetXaxis()->SetTitleOffset(1.1);
	dummy->GetYaxis()->SetTitleOffset(1.2);
	dummy->GetXaxis()->CenterTitle(true);
	dummy->GetYaxis()->CenterTitle(true);
	dummy->GetYaxis()->SetMaxDigits(4);
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
  	names->AddText("Gradient [rad#upointMeV^{-1}#upointm^{-1}]"); 
    names->AddText("Y-intercept [mrad#upointMeV^{-1}]"); 

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

/*	  TPaveText *names = new TPaveText(0.58,0.62,0.65,0.89,"NDC");

  names->SetTextAlign(13);
  names->AddText("N"); 
  names->AddText("#chi^{2}/ndf");
  //names->AddText("N_{0}");
  names->AddText("#gamma#tau [#mus]");
  names->AddText("A"); 
  names->AddText("#phi [rad]"); 

  TPaveText *values = new TPaveText(0.70,0.62,0.89,0.89,"NDC");
  values->SetTextAlign(33);
  values->AddText(SciNotation(double(N))); 
  values->AddText(Round(chi2ndf, 3));
  //values->AddText(SciNotation(par0)+"#pm"+Round(err0,2));
  values->AddText(Round(par1, 4)+"#pm"+Round(err1, 1));
  values->AddText(Round(par2, 3)+"#pm"+Round(err2, 1));
  //values->AddText(Round(par3, 3)+"#pm"+Round(err3, 1));
  values->AddText(Round(par4, 4)+"#pm"+Round(err4, 1));

  TPaveText *cuts = new TPaveText(0.25,0.70,0.40,0.80,"NDC");
  cuts->SetTextAlign(22);
  cuts->AddText("1900 < p [MeV] < 3100");*/

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}


void Run() { 

	TString finName0 = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr_0mm.root";
	TString finName1 = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ_noVertCorr_1mm.root";

	TFile *fin0 = TFile::Open(finName0);
	TFile *fin1 = TFile::Open(finName1);

	cout<<"Opened files "<<finName0<<", "<<fin0<<", "<<fin1<<", "<<finName1<<endl;

	double ymin = -0.5;
	double ymax = 0.0;

	DrawStationOverlay(fin0, "0 mm", "../Images/MC/dMu/5.4e-18/VerticalOffset/verticalOffsetStationComp_0mm", ymin, ymax);
	DrawStationOverlay(fin1, "#pm1 mm", "../Images/MC/dMu/5.4e-18/VerticalOffset/verticalOffsetStationComp_1mm", ymin, ymax);

	TGraphErrors *gr12_0 = ResetGraph((TGraphErrors*)fin0->Get("MomentumBinnedAnalysis/ParameterScans/S12_c_vs_p_thetaY"), xmin, xmax);
	TGraphErrors *gr18_0 = ResetGraph((TGraphErrors*)fin0->Get("MomentumBinnedAnalysis/ParameterScans/S18_c_vs_p_thetaY"), xmin, xmax);	

	TGraphErrors *gr12_1 = ResetGraph((TGraphErrors*)fin1->Get("MomentumBinnedAnalysis/ParameterScans/S12_c_vs_p_thetaY"), xmin, xmax);
	TGraphErrors *gr18_1 = ResetGraph((TGraphErrors*)fin1->Get("MomentumBinnedAnalysis/ParameterScans/S18_c_vs_p_thetaY"), xmin, xmax);	
		
	// Fit

	TF1 *fit = new TF1("fit", "[0]+[1]*x", gr12_0->GetX()[0], gr12_0->GetX()[gr12_0->GetN()-1]);

	gr12_0->Fit(fit, "R");
	gr12_1->Fit(fit, "R");	
	gr18_0->Fit(fit, "R");
	gr18_1->Fit(fit, "R");	

	DrawOffsetOverlay(gr12_0, gr12_1, "12",  "../Images/MC/dMu/5.4e-18/VerticalOffset/verticalOffsetOffsetComp", -0.55, 0.0);//-0.7, 0.02);
	DrawOffsetOverlay(gr18_0, gr18_1, "18",  "../Images/MC/dMu/5.4e-18/VerticalOffset/verticalOffsetOffsetComp", -0.4, -0.05);// -0.45, -0.05);

	// Get slopes
	TF1 *fit12_0 = (TF1*)gr12_0->GetFunction("fit");
	TF1 *fit12_1 = (TF1*)gr12_1->GetFunction("fit");
	TF1 *fit18_0 = (TF1*)gr18_0->GetFunction("fit");
	TF1 *fit18_1 = (TF1*)gr18_1->GetFunction("fit");

	double slope12_0 = fit12_0->GetParameter(1);
	double slope12_1 = fit12_1->GetParameter(1);
	double slope18_0 = fit18_0->GetParameter(1);
	double slope18_1 = fit18_1->GetParameter(1);

	double error12_0 = fit12_0->GetParError(1);
	double error12_1 = fit12_1->GetParError(1);
	double error18_0 = fit18_0->GetParError(1);
	double error18_1 = fit18_1->GetParError(1);

	cout << "\nStation, Offset, Slope, Error" << endl;
	cout << "12, 0 mm, " << slope12_0 << ", " << error12_0 << endl;
	cout << "12, 1 mm, " << slope12_1 << ", " << error12_1 << endl;
	cout << "18, 0 mm, " << slope18_0 << ", " << error18_0 << endl;
	cout << "18, 1 mm, " << slope18_1 << ", " << error18_0 << endl;

	TGraphErrors *slopes12 = new TGraphErrors();
	TGraphErrors *slopes18 = new TGraphErrors();	

	slopes12->SetPoint(0, 0, slope12_0);
	slopes12->SetPoint(1, 1, slope12_1);
	slopes12->SetPointError(0, 0, error12_0);
	slopes12->SetPointError(1, 0, error12_1);

	slopes18->SetPoint(0, 0, slope18_0);
	slopes18->SetPoint(1, -1, slope18_1);
	slopes18->SetPointError(0, 0, error18_0);
	slopes18->SetPointError(1, 0, error18_1);

	slopes12->GetXaxis()->SetRangeUser(-0.5, 1.5);
	slopes18->GetXaxis()->SetRangeUser(-1.5, 0.5);

	fit->SetRange(0,1);
	slopes12->Fit("fit", "R");
	fit->SetRange(-1,0);
	slopes18->Fit("fit", "R");

	DrawSlopeGraph(slopes12, ";Tracker alignment vertical offset [mm];#LT#theta_{y}#GT/p [mrad/MeV]", "../Images/MC/dMu/5.4e-18/VerticalOffset/verticalOffsetSlope_S12", -0.25, 1.25, 0.19E-3, 0.33E-3);
	DrawSlopeGraph(slopes18, ";Tracker alignment vertical offset [mm];#LT#theta_{y}#GT/p [mrad/MeV]", "../Images/MC/dMu/5.4e-18/VerticalOffset/verticalOffsetSlope_S18", -1.25, 0.25, 0.05E-3, 0.19E-3);

	fin0->Close();
	fin1->Close();

	return;

}

void VerticalOffsetSlope() { 

	Run();

	return;

}