#ifndef FancyDraw_h
#define FancyDraw_h

#include <stdio.h>
#include <iostream>

#include "Utils.h"
#include "ToyRadialFieldScan.h"

#include "TH1D.h"
#include "TH2D.h"
#include "TStyle.h"
#include "TGraphErrors.h"
#include "TCanvas.h"
#include "TAxis.h"
#include "TPaveText.h"
#include "TF1.h"
#include "TString.h"
#include "TLegend.h"
#include "TLatex.h"
#include "TGaxis.h"
#include "TPad.h"
#include "TFitResultPtr.h"
#include "TPaveStats.h"

using namespace std;

// =========================== Standard plotting ===========================

void DrawTH1(TH1D *hist, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());

	//hist->SetStats(0);
	gStyle->SetOptStat(2210);
			
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

void DrawTH1Fit(TH1D *hist, TF1 *fit, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	gStyle->SetStatFormat("6.3g");
  	hist->Draw();
  	gPad->Update();

	hist->SetTitle(title.c_str());

	TPaveStats *statBox = (TPaveStats*) hist->FindObject("stats");
	statBox->SetBorderSize(0);

	gStyle->SetOptStat(0);
  	gStyle->SetOptFit(111);
			
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

	fit->SetLineWidth(3);
	fit->Draw("same");
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void DrawTH2(TH2D *hist, std::string title, std::string fname) {

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

	gStyle->SetPalette(55);
	c->SetRightMargin(0.13);

	hist->Draw("COLZ");
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void DrawTGraphErrors(TGraphErrors *graph, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	graph->SetTitle(title.c_str());
	graph->GetXaxis()->SetTitleSize(.04);
	graph->GetYaxis()->SetTitleSize(.04);
	graph->GetXaxis()->SetTitleOffset(1.1);
	graph->GetYaxis()->SetTitleOffset(1.1);
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

// =========================== Custom plotting ===========================

void DrawManyTGraphErrors(std::vector<TGraphErrors*> graphs, std::string title, std::string fname, double ymin, double ymax ) {

	TCanvas *c = new TCanvas("c","c",800,600);

	graphs.at(0)->SetTitle(title.c_str());
	graphs.at(0)->GetXaxis()->SetTitleSize(.04);
	graphs.at(0)->GetYaxis()->SetTitleSize(.04);
	graphs.at(0)->GetXaxis()->SetTitleOffset(1.1);
	graphs.at(0)->GetYaxis()->SetTitleOffset(1.1);
	graphs.at(0)->GetXaxis()->CenterTitle(true);
	graphs.at(0)->GetYaxis()->CenterTitle(true);
	graphs.at(0)->GetYaxis()->SetMaxDigits(4);
	//graphs.at(0)->SetMarkerStyle(20); //  Full circle
	graphs.at(0)->GetYaxis()->SetRangeUser(ymin,ymax);
	graphs.at(0)->Draw("AP");

	for(int i = 0; i < graphs.size(); i++) {
		//graphs.at(i)->SetMarkerStyle(20);
		graphs.at(i)->SetMarkerColor(i+1);
		graphs.at(i)->SetLineColor(i+1);
		graphs.at(i)->Draw("P SAME");
	}

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawManyTGraphErrorsFits(std::vector<TGraphErrors*> graphs, std::string title, std::string fname, double ymin, double ymax, std::string func ) {

	TCanvas *c = new TCanvas("c","c",800,600);
	c->SetRightMargin(0.25);

	graphs.at(0)->SetTitle(title.c_str());
	graphs.at(0)->GetXaxis()->SetTitleSize(.04);
	graphs.at(0)->GetYaxis()->SetTitleSize(.04);
	graphs.at(0)->GetXaxis()->SetTitleOffset(1.1);
	graphs.at(0)->GetYaxis()->SetTitleOffset(1.1);
	graphs.at(0)->GetXaxis()->CenterTitle(true);
	graphs.at(0)->GetYaxis()->CenterTitle(true);
	graphs.at(0)->GetYaxis()->SetMaxDigits(4);
	//graphs.at(0)->SetMarkerStyle(20); //  Full circle
	graphs.at(0)->GetYaxis()->SetRangeUser(ymin,ymax);

	TLegend *l = new TLegend(0.69,0.40,0.99,0.60);
	l->SetBorderSize(0);

	for(int i = 0; i < graphs.size(); i++) {
		l->AddEntry(graphs.at(i));
		TF1 *fit = graphs.at(i)->GetFunction(func.c_str());
		fit->SetLineColor(kBlack);
		fit->SetLineColor(i+1); 
		graphs.at(i)->SetMarkerColor(i+1);
		graphs.at(i)->SetLineColor(i+1);
		if(i==0) graphs.at(i)->Draw("AP");
		else {

			graphs.at(i)->Draw("P SAME");
			
		}
		fit->Draw("same");
	}
	l->Draw("same");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawTGraphErrorsDoubleXAxis(TGraphErrors *graph, std::string title, std::string axisTitle, std::string fname, double lo, double hi) {

	TCanvas *c = new TCanvas("c","c",800,600);

	graph->SetTitle(title.c_str());
	graph->GetXaxis()->SetTitleSize(.04);
	graph->GetYaxis()->SetTitleSize(.04);
	graph->GetXaxis()->SetTitleOffset(1.1);
	graph->GetYaxis()->SetTitleOffset(1.1);
	graph->GetXaxis()->CenterTitle(true);
	graph->GetYaxis()->CenterTitle(true);
	graph->GetYaxis()->SetMaxDigits(4);
	graph->SetMarkerStyle(20); //  Full circle
	graph->Draw("AP");

	gPad->Update();

	TGaxis *axis = new TGaxis(gPad->GetUxmin(),gPad->GetUymax(),gPad->GetUxmax(),gPad->GetUymax(),lo,hi,510,"-");
	axis->SetTitle(axisTitle.c_str());
	axis->SetTitleOffset(1.1);
	axis->CenterTitle(true);
	axis->SetTextFont(42);
	axis->SetLabelFont(42);
	axis->SetTextColor(kRed);
	axis->SetLabelColor(kRed);
	axis->SetLineColor(kRed);
	axis->Draw("same");
	//c->SetGridx();

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawTGraphErrorsDoubleXAxisOverlay(TGraphErrors *graph1, TGraphErrors *graph2, std::string name1, std::string name2, std::string title, std::string axisTitle, std::string fname, double lo, double hi) {

	TCanvas *c = new TCanvas("c","c",800,600);

	graph1->SetTitle(title.c_str());
	graph1->GetXaxis()->SetTitleSize(.04);
	graph1->GetYaxis()->SetTitleSize(.04);
	graph1->GetXaxis()->SetTitleOffset(1.1);
	graph1->GetYaxis()->SetTitleOffset(1.1);
	graph1->GetXaxis()->CenterTitle(true);
	graph1->GetYaxis()->CenterTitle(true);
	graph1->GetYaxis()->SetMaxDigits(4);
	graph1->SetMarkerStyle(20); //  Full circle
	graph1->Draw("AP");
	graph2->SetMarkerStyle(24); // Open circle
	graph2->Draw("P same");

	TLegend *l = new TLegend(0.70,0.65,0.89,0.85);
	graph1->SetName(name1.c_str());
	graph2->SetName(name2.c_str());
	gPad->Update();
	l->SetBorderSize(0);
	l->SetTextFont(42);
	l->AddEntry(graph1,name1.c_str());
	l->AddEntry(graph2,name2.c_str());
	l->Draw("same");

	gPad->Update();

	TGaxis *axis = new TGaxis(gPad->GetUxmin(),gPad->GetUymax(),gPad->GetUxmax(),gPad->GetUymax(),lo,hi,510,"-");
	axis->SetTitle(axisTitle.c_str());
	axis->SetTitleOffset(1.1);
	axis->CenterTitle(true);
	axis->SetTextFont(42);
	axis->SetLabelFont(42);
	axis->SetTextColor(kRed);
	axis->SetLabelColor(kRed);
	axis->SetLineColor(kRed);
	axis->Draw("same");

/*	TLine *line0 = new TLine(980385,gPad->GetUymin(),980385,gPad->GetUymax());
	line0->Draw("same");
	TLine *line1 = new TLine(1.94531e+06,gPad->GetUymin(),1.94531e+06,gPad->GetUymax());
	line1->Draw("same");
	TLine *line2 = new TLine(2.90712e+06,gPad->GetUymin(),2.90712e+06,gPad->GetUymax());
	line2->Draw("same");
	TLine *line3 = new TLine(3.83186e+06,gPad->GetUymin(),3.83186e+06,gPad->GetUymax());
	line3->Draw("same");
	TLine *line4 = new TLine(4.79715e+06,gPad->GetUymin(),4.79715e+06,gPad->GetUymax());
	line4->Draw("same");
	TLine *line5 = new TLine(5.76194e+06,gPad->GetUymin(),5.76194e+06,gPad->GetUymax());
	line5->Draw("same");
	TLine *line6 = new TLine(6.72444e+06,gPad->GetUymin(),6.72444e+06,gPad->GetUymax());
	line6->Draw("same");
	TLine *line7 = new TLine(7.68956e+06,gPad->GetUymin(),7.68956e+06,gPad->GetUymax());
	line7->Draw("same");
	TLine *line8 = new TLine(8.65456e+06,gPad->GetUymin(),8.65456e+06,gPad->GetUymax());
	line8->Draw("same");
	TLine *line9 = new TLine(9.61958e+06,gPad->GetUymin(),9.61958e+06,gPad->GetUymax());
	line9->Draw("same");
	TLine *line10 = new TLine(1.05832e+07,gPad->GetUymin(),1.05832e+07,gPad->GetUymax());
	line10->Draw("same");
	TLine *line11 = new TLine(1.15499e+07,gPad->GetUymin(),1.15499e+07,gPad->GetUymax());
	line11->Draw("same");
	TLine *line12 = new TLine(1.25135e+07,gPad->GetUymin(),1.25135e+07,gPad->GetUymax());
	line12->Draw("same");*/
	//c->SetGridx();

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}
void DrawSimpleSinFit(TGraphErrors *graph, std::string title, std::string fname, double N, bool blind) {

	TCanvas *c = new TCanvas("c","c",800,600);

	graph->Draw();
  	gPad->Update();
  	gStyle->SetOptStat(0);

	// Get functoin
	TF1 *func = graph->GetFunction("SimpleSinFunc");

	double chi2ndf = func->GetChisquare() / func->GetNDF();
	double par0 = func->GetParameter(0);
	double err0 = func->GetParError(0);
	double par1 = func->GetParameter(1);
	double err1 = func->GetParError(1);
	double par2 = func->GetParameter(2);
	double err2 = func->GetParError(2);

	TLegend *function = new TLegend(0.11,0.79,0.45,0.89);//,"NDC");
	function->AddEntry(func,"A_{EDM} sin(#omega_{a}t) + C");
	function->SetBorderSize(0);

	//TPaveText *names = new TPaveText(0.59,0.55,0.69,0.89,"NDC");
	//TPaveText *names = new TPaveText(0.55,0.59,0.69,0.88,"NDC");
	TPaveText *names = new TPaveText(0.52,0.595,0.69,0.88,"NDC");

	names->SetTextAlign(13);
	names->AddText("N") ; // +SciNotation(double(N))); 
	names->AddText("#chi^{2}/ndf"); //+SciNotation(chi2ndf));
	string amplitude;
	if(blind) amplitude = "A_{EDM}^{BLIND} [mrad]";
	else amplitude = "A_{EDM} [mrad]";
	names->AddText(amplitude.c_str()); // +SciNotation(par0));
	names->AddText("#omega_{a} [MHz]"); // +SciNotation(par1));
	names->AddText("C [mrad]"); // +SciNotation(par2));

	TPaveText *values = new TPaveText(0.69,0.59,0.89,0.89,"NDC");
	values->SetTextAlign(33);
	values->AddText(SciNotation(double(N))); 
	values->AddText(ThreeSigFig(chi2ndf));//std::to_string(chi2ndf).c_str());
	values->AddText(ThreeSigFig(par0)+"#pm"+OneSigFig(err0));
	values->AddText(ThreeSigFig(par1)+"#pm"+OneSigFig(err1));
	values->AddText(ThreeSigFig(par2)+"#pm"+OneSigFig(err2));

	names->SetTextSize(26);
	names->SetTextFont(44);
	names->SetFillColor(0);
	names->SetTextSize(26);
	names->SetTextFont(44);
	names->SetFillColor(0);
	values->SetFillColor(0);
	values->SetTextFont(44);
	values->SetTextSize(26);

	graph->SetTitle(title.c_str());
	graph->GetXaxis()->SetTitleSize(.04);
	graph->GetYaxis()->SetTitleSize(.04);
	graph->GetXaxis()->SetTitleOffset(1.1);
	graph->GetYaxis()->SetTitleOffset(1.1);
	graph->GetXaxis()->CenterTitle(true);
	graph->GetYaxis()->CenterTitle(true);
	graph->GetYaxis()->SetMaxDigits(4);
	graph->SetMarkerStyle(20); //  Full circle
	graph->GetXaxis()->SetRangeUser(0,G2PERIOD);
	graph->Draw("AP");
	values->Draw("same");
	names->Draw("same");
	function->Draw("same");
	
	func->SetLineWidth(3);
	func->Draw("same");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

/*
// IGNORE
void DrawSimpleSinFit2(TGraphErrors *graph, std::string title, std::string fname, double N) {

	TCanvas *c = new TCanvas("c","c",800,600);

	// Get functoin
	TF1 *func = graph->GetFunction("SimpleSinFunc");

	double chi2ndf = func->GetChisquare() / func->GetNDF();
	double par0 = func->GetParameter(0);
	double par1 = func->GetParameter(1);
	double par2 = func->GetParameter(2);

	// Format N entries
	// TString text;
	// text = Form("%5.3g", N);
	// text.ReplaceAll("e+0","  #times10^{");
	// text.Append("}");

	TPaveText *names = new TPaveText(0.59,0.55,0.69,0.89,"NDC");
	names->SetTextAlign(13);
	names->AddText("N") ; // +SciNotation(double(N))); 
	names->AddText("#chi^{2}/ndf"); //+SciNotation(chi2ndf));
	names->AddText("A_{EDM} [mrad]"); // +SciNotation(par0));
	names->AddText("#omega_{a} [MHz]"); // +SciNotation(par1));
	names->AddText("C [mrad]"); // +SciNotation(par2));

	TPaveText *values = new TPaveText(0.69,0.55,0.89,0.89,"NDC");
	values->SetTextAlign(33);
	values->AddText(SciNotation(double(N))); 
	values->AddText(SciNotation(chi2ndf));
	values->AddText(SciNotation(par0));
	values->AddText(SciNotation(par1));
	values->AddText(SciNotation(par2));
	//txt->AddText(("#chi^{2}/ndf:\t\t"+std::to_string(SciNotation(double(chi2ndf))).c_str());
	//txt->AddText(("A_{EDM}:\t\t"+std::to_string(SciNotation(par0)).c_str());
	//txt->AddText(("#omega_{a}:\t\t"+std::to_string(SciNotation(par1)).c_str());
	//txt->AddText(("C:\t\t"+std::to_string(SciNotation(par2)).c_str());
	//txt->AddText("N:\t\t"+text);
	//txt->AddText("N:\t\t"+text);
	//txt-
	names->SetTextSize(26);
	names->SetTextFont(44);
	names->SetFillColor(0);
	values->SetFillColor(0);
	values->SetTextFont(44);
	values->SetTextSize(26);

	graph->SetTitle(title.c_str());
	graph->GetXaxis()->SetTitleSize(.04);
	graph->GetYaxis()->SetTitleSize(.04);
	graph->GetXaxis()->SetTitleOffset(1.1);
	graph->GetYaxis()->SetTitleOffset(1.1);
	graph->GetXaxis()->CenterTitle(true);
	graph->GetYaxis()->CenterTitle(true);
	graph->GetYaxis()->SetMaxDigits(4);
	graph->SetMarkerStyle(20); //  Full circle
	graph->GetXaxis()->SetRangeUser(0,G2PERIOD);
	graph->Draw("AP");
	values->Draw("same");
	names->Draw("same");
	
	func->SetLineWidth(3);
	func->Draw("same");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	//c->SaveAs((fname+".C").c_str());

	delete c;

	return;

} */

void DrawAsymmetryPlot(TF1 *N, TF1 *A, TF1 *NA2, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);
	c->SetRightMargin(0.20);
	// TLegend *leg = new TLegend(0.25,0.69,0.45,0.89);
	// TODO: Make legend not look like a pile of shit
	TLegend *leg = new TLegend(0.81,0.35,0.99,0.65);// 0.15,0.65,0.35,0.85);
	leg->SetBorderSize(0);
	
	TLine *y_0 = new TLine(0,0,1,0);
	
	leg->AddEntry(N," N(y)");
	leg->AddEntry(A," A(y)");
	leg->AddEntry(NA2," NA^{2}(y)");

	leg->SetTextSize(26);
	leg->SetTextFont(44);

	N->SetTitle(title.c_str());		
	N->GetXaxis()->SetTitleSize(.04);
	N->GetYaxis()->SetTitleSize(.04);
	N->GetXaxis()->SetTitleOffset(1.1);
	N->GetYaxis()->SetTitleOffset(1.1);
	N->GetXaxis()->CenterTitle(1);
	N->GetYaxis()->CenterTitle(1);
	N->GetYaxis()->SetMaxDigits(4);

	N->SetLineColor(kBlack);
	A->SetLineColor(kRed);
	NA2->SetLineColor(kBlue);

	N->SetLineWidth(3);
	A->SetLineWidth(3);
	NA2->SetLineWidth(3);
	y_0->SetLineWidth(3);

	y_0->SetLineStyle(2);

	//c->SetRightMargin(0.13);

	N->Draw();
	leg->Draw("same");
	A->Draw("same");
	NA2->Draw("same");
	y_0->Draw("same");
	
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

 // ==================== RADIAL FIELD SCAN ====================

// void DrawQuadScanFits(std::vector<TGraphErrors*> graphs,  const double *BR_APP, string func, std::string title, std::string fname, double ymin, double ymax) {
void DrawQuadScanFits(std::vector<TGraphErrors*> graphs, string func, std::string title, std::string fname, double ymin, double ymax) {

	TCanvas *c = new TCanvas("c","c",800,600);
	c->SetRightMargin(0.20);

	graphs.at(0)->SetTitle(title.c_str());
	graphs.at(0)->GetXaxis()->SetTitleSize(.04);
	graphs.at(0)->GetYaxis()->SetTitleSize(.04);
	graphs.at(0)->GetXaxis()->SetTitleOffset(1.1);
	graphs.at(0)->GetYaxis()->SetTitleOffset(1.1);
	graphs.at(0)->GetXaxis()->CenterTitle(true);
	graphs.at(0)->GetYaxis()->CenterTitle(true);
	graphs.at(0)->GetYaxis()->SetMaxDigits(4);
	graphs.at(0)->GetYaxis()->SetRangeUser(ymin,ymax);

	TLegend *l = new TLegend(0.81,0.35,0.99,0.65);

	l->SetBorderSize(0);

	//double field = 
	// Load legend entries backwards
	for( int i = graphs.size()-1; i>-1; i--) {
		l->AddEntry(graphs.at(i), FormatNegativeNumber(BR_APP[i])+" ppm");
	}
	
	for(int i = 0; i < graphs.size(); i++) {
		TF1 *fit = graphs.at(i)->GetFunction(func.c_str());
		fit->SetLineColor(kBlack);
		fit->SetLineColor(i+1); 
		graphs.at(i)->SetMarkerColor(i+1);
		graphs.at(i)->SetLineColor(i+1);

		if(i==0) graphs.at(i)->Draw("AP");
		else {
			graphs.at(i)->Draw("P SAME");
		}

		fit->Draw("same");

	}

	l->Draw("same");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawRadialFieldLineFit(TGraphErrors *graph, double BrErr, string func, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	graph->Draw();
	gPad->Update();

	// Get function
	TF1 *fit = graph->GetFunction(func.c_str());
	fit->SetLineWidth(2);
	fit->SetLineColor(kRed);

	double chi2ndf = fit->GetChisquare() / fit->GetNDF();

	// std::cout<<"chi2ndf "<<chi2ndf<<std::endl;

	double par0 = fit->GetParameter(0);
	double err0 = fit->GetParError(0);
	double par1 = fit->GetParameter(1);
	double err1 = fit->GetParError(1);
	// We want to retain the sign here
	double xint = - par0 / par1; 
	double xint_err = BrErr;

	TPaveText *names = new TPaveText(0.30,0.69,0.62,0.88,"NDC");
	names->SetTextAlign(13);
	names->AddText("#chi^{2}/ndf"); 
	names->AddText("Gradient [mm/kV#upointppm]"); 
	names->AddText("Y-intercept [mm/kV]"); 
	names->AddText("Background B_{r} [ppm]"); 

	TPaveText *values = new TPaveText(0.69,0.68,0.89,0.89,"NDC");
	values->SetTextAlign(33);

	values->AddText(ThreeSigFig(chi2ndf));
	values->AddText(FormatNegativeNumber(par1)+"#pm"+ThreeSigFig(err1));
	values->AddText(FormatNegativeNumber(par0)+"#pm"+ThreeSigFig(err0));
	values->AddText(ThreeSigFig(fabs(xint))+"#pm"+ThreeSigFig(xint_err));

	// std::cout<<"xint_err\t"<<xint_err<<std::endl;

	names->SetTextSize(26);
	names->SetTextFont(44);
	names->SetFillColor(0);
	names->SetTextSize(26);
	names->SetTextFont(44);
	names->SetFillColor(0);
	values->SetFillColor(0);
	values->SetTextFont(44);
	values->SetTextSize(26);

	TLine *x_line = new TLine(gPad->GetUxmin(),0,xint,0);
	x_line->SetLineStyle(2);
	x_line->SetLineWidth(2);
	TLine *y_line = new TLine(xint,gPad->GetUymin(),xint,0);
	y_line->SetLineStyle(2);
	y_line->SetLineWidth(2);

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
	values->Draw("same");
	names->Draw("same");
	x_line->Draw("same");
	y_line->Draw("same");
	fit->Draw("same");
	

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

#endif