#include <iostream>

#include "FancyDraw.h"
#include "Utils.h"

#include "TFile.h"
#include "TMath.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TProfile.h"
#include "TF1.h"
#include "TDirectory.h"
#include "TObject.h"
#include "TGraphErrors.h"
#include "TCanvas.h"
#include "TLegend.h"
#include "TPaveStats.h"
#include "TPaveText.h"
#include "TVirtualFFT.h"

/*double xmin = 8.25*G2PERIOD;
double xmax = 16.25*G2PERIOD;*/

double xmin = 7*G2PERIOD;
double xmax = 70*G2PERIOD;
//double xmax = 70*G2PERIOD;

using namespace std;

double FiveParFunc(double *x, double *par) {
 	return par[0] * exp(-x[0]/par[1]) * (1 + (par[2] * cos((par[3] * x[0]) + par[4])));
}


void FitFivePar(TGraphErrors *graph, double par0, double par1, double par2, double par3, double par4, double min, double max) {
  
	TF1 *func = new TF1("FiveParFunc", FiveParFunc, min, max, 5);

	func->SetParameter(0, par0); // N0
	func->SetParameter(1, par1); // tau
	func->SetParameter(2, par2); // A
	func->FixParameter(3, par3); // Omega
	//func->SetParameter(4, par4);
  	//func->SetParLimits(4, -TMath::Pi(), TMath::Pi());

  	graph->Fit(func, "MR"); // ,"MR");

  	std::cout << "\nChi^2/ndf...\t:" << func->GetChisquare() / func->GetNDF() << std::endl;

  	return;

}

double BzFunc(double *x, double *par) {
	return  (par[0] * cos((par[1]*x[0]) + par[2])) + (par[3] * sin((par[4]*x[0]) + par[5])) + par[6]; 
}

void FitBz(TGraphErrors *graph, double par0, double par1, double par2, double par3, double par4, double par5, double par6, double min, double max) {

	TF1 *func = new TF1("BzFunc", BzFunc, min, max, 7);

	//func->SetParLimits(0, par0/4, par0);
	func->SetParameter(0, par0); // A_Bz
	func->FixParameter(1, par1); // omega_a
	func->FixParameter(2, par2); // phi
	func->SetParameter(3, 0); // A_EDM
	func->FixParameter(4, par4); // omega_a
	func->FixParameter(5, par5); // phi
	func->SetParameter(6, par6); // C

  	graph->Fit(func, "MR"); // ,"MR");

  	std::cout << "\nChi^2/ndf...\t:" << func->GetChisquare() / func->GetNDF() << std::endl;
  	//std::cout << "\nN...\t:" << graph->GetEn << std::endl;
	return;

}

TGraphErrors *ConvertToTGraphErrors(TH1D *hist) {

	int n = hist->GetNbinsX();
	double x[n]; double ex[n];
  	double y[n]; double ey[n];

  	for(int i = 0; i < n; i++) {

  		x[i] = hist->GetBinCenter(i+1);
  		ex[i] = 0; 
  		y[i] = hist->GetBinContent(i+1); 
      	ey[i] = hist->GetBinError(i+1); 

  	}

  	return new TGraphErrors(n, x, y, ex, ey);

}

void DrawFit(TGraphErrors *graph, TF1 *wiggle, string title, string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

/*	graph->Draw();
	gPad->Update();
	gStyle->SetOptFit(20222); */

	graph->SetTitle(title.c_str());
	graph->GetXaxis()->SetTitleSize(.04);
	graph->GetYaxis()->SetTitleSize(.04);
	graph->GetXaxis()->SetTitleOffset(1.1);
	graph->GetYaxis()->SetTitleOffset(1.25);
	graph->GetXaxis()->CenterTitle(true);
	graph->GetYaxis()->CenterTitle(true);
	graph->GetYaxis()->SetMaxDigits(4);
	graph->SetMarkerStyle(20); //  Full circle
	graph->Draw("AP");

//	TF1 *wiggle = graph->GetFunction("FiveParFunc");
	wiggle->SetLineWidth(3);
	wiggle->SetLineColor(kRed);
	wiggle->SetNpx(1e4);	//
	//wiggle->Draw("SAME");

	gPad->Update();
	gStyle->SetOptFit(20222); 
	//c->SetLogy();

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void FoldWiggle(TGraphErrors *gr) {

	// Gleb method 
	int right = 0;
	int left = 0;
	int i_section = 0; 

	for(int i_point = 0; i_point < gr->GetN(); i_point++) { 

		int x = gr->GetPointX(i_point);
		int y = gr->GetPointY(i_point);
		

		// cout<<x<<" "<<y<<endl;




	}

	return;
}

int main() {

	bool sanityPlots = true;

	string config = "Bz"; 
	string field = "82ppm"; // 1700ppm";
	// Read file
	TFile *input = TFile::Open(("../Plots/MC/"+config+"/simPlots.Bz."+field+".root").c_str());
	cout << "\nRead input...\t\t: " << input << endl;

	// Get histograms
	TH1D *h1_wiggle = (TH1D*)input->Get("Wiggle");
	TH1D *h1_wiggle_full = (TH1D*)input->Get("Wiggle_Full");
	TH1D *h1_wiggle_mod = (TH1D*)input->Get("Wiggle_Modulo");
	TH1D *h1_wiggle_mod_full = (TH1D*)input->Get("Wiggle_Modulo_Full");
	//TH1D *h1_wiggle_mod_shift = (TH1D*)input->Get("Wiggle_Modulo_Shift");

	TH2D *h2_thetaY_mod = (TH2D*)input->Get("ThetaY_vs_Time_Modulo");
	//TH2D *h2_thetaY_mod_shift = (TH2D*)input->Get("ThetaY_vs_Time_Modulo_Shift");

	cout << "Got histograms...\n: ";
	cout << h1_wiggle << endl;
	cout << h1_wiggle_full << endl;
	cout << h1_wiggle_mod << endl;
	//cout << h1_wiggle_mod_shift << endl;
	cout << h2_thetaY_mod << endl;

	// Make profiles
	TH1D *px_thetaY_mod = h2_thetaY_mod->ProfileX();
	//TH1D *px_thetaY_mod_shift = h2_thetaY_mod_shift->ProfileX();

	cout << "Generated x-profile...\n: ";
	cout << px_thetaY_mod << endl; 

	// Rebin
	
	cout << "\nNBins before rebin...\t\t: " << px_thetaY_mod->GetNbinsX() << endl;
	cout << "Binwidth before rebin...\t: " << px_thetaY_mod->GetXaxis()->GetBinWidth(1) << "\n" << endl;
	//px_thetaY_mod->Rebin(2);
	cout << "NBins post rebin...\t: " << px_thetaY_mod->GetNbinsX() << endl;
	cout << "Binwidth post rebin...\t: " << px_thetaY_mod->GetXaxis()->GetBinWidth(1) << "\n" << endl;
	

	TGraphErrors *gr_wiggle = ConvertToTGraphErrors(h1_wiggle);
	TGraphErrors *gr_wiggle_full = ConvertToTGraphErrors(h1_wiggle_full);
	TGraphErrors *gr_wiggle_mod = ConvertToTGraphErrors(h1_wiggle_mod);
	TGraphErrors *gr_wiggle_mod_full = ConvertToTGraphErrors(h1_wiggle_mod_full);
	TGraphErrors *gr_thetaY_mod = ConvertToTGraphErrors(px_thetaY_mod);
	//TGraphErrors *gr_thetaY_mod_shift = ConvertToTGraphErrors(px_thetaY_mod_shift);

	// Draw all base plots
	if(sanityPlots) { 

		DrawTH1(h1_wiggle,"h1_wiggle","../Images/MC/Bz/"+field+"/h1_wiggle");
		DrawTH1(h1_wiggle_full,"h1_wiggle","../Images/MC/Bz/"+field+"/h1_wiggle_full");
		DrawTH1(h1_wiggle_mod,"h1_wiggle_mod","../Images/MC/Bz/"+field+"/h1_wiggle_mod");
		DrawTGraphErrors(gr_wiggle,"gr_wiggle","../Images/MC/Bz/"+field+"/gr_wiggle");
		DrawTGraphErrors(gr_wiggle_full,"gr_wiggle_full","../Images/MC/Bz/"+field+"/gr_wiggle_full");
		DrawTGraphErrors(gr_wiggle_mod,"gr_wiggle_mod","../Images/MC/Bz/"+field+"/gr_wiggle_mod");
		//DrawTGraphErrors(gr_wiggle_mod_shift,"gr_wiggle_mod_shift","../Images/MC/Bz/"+field+"/gr_wiggle_mod_shift");
		DrawTH2(h2_thetaY_mod,"h2_thetaY_mod","../Images/MC/Bz/"+field+"/h2_thetaY_mod");
		//DrawTH2(h2_thetaY_mod_shift,"h2_thetaY_mod_shift","../Images/MC/Bz/"+field+"/h2_thetaY_mod_shift");
		DrawTH1(px_thetaY_mod,"px_thetaY_mod","../Images/MC/Bz/"+field+"/px_thetaY_mod");
		DrawTGraphErrors(gr_thetaY_mod, "gr_thetaY_mod", "../Images/MC/Bz/"+field+"/gr_thetaY_mod");

	}

	// Fit full wiggle
	//FitFivePar(gr_wiggle, 5e3, 64, 1e3, OMEGA_A*1e3, 0);
	//gr_wiggle->GetXaxis()->SetRangeUser(xmin, xmax);
	//DrawFit(gr_wiggle,"fit_wiggle","../Images/MC/Bz/"+field+"/fit_wiggle");

/*	TF1 *wiggle = new TF1("wiggle","[0] * exp(-x/[1]) * (1 - ([2] *  cos(([3] * x) + [4])))", xmin, xmax);
	wiggle->SetParameter(0, 1300);
	wiggle->SetParameter(1, 64);
	wiggle->SetParameter(2, 0.35);
	wiggle->SetParameter(3,OMEGA_A*1e3);
	wiggle->SetParameter(4, 0);

	TCanvas *c = new TCanvas("c","c",800,600);
	wiggle->SetNpx(10e3);
	gr_wiggle->GetXaxis()->SetRangeUser(xmin, xmax);
	gr_wiggle->Draw();
	wiggle->Draw("same");
	c->SaveAs("../Images/MC/Bz/"+field+"/tmp_wiggle.png");*/

	// Fit full wiggle
	FitFivePar(gr_wiggle_full, 1300, 64, 0.35, OMEGA_A*1e3, 0, xmin, xmax);

	//gr_wiggle_full->GetXaxis()->SetRangeUser(xmin, xmax);
	
	TF1 *wiggle = gr_wiggle_full->GetFunction("FiveParFunc");

	wiggle->SetParName(0,"N_{0}");
	wiggle->SetParName(1,"#tau [#mus]");
	wiggle->SetParName(2,"A");
	wiggle->SetParName(3,"#omega_{a} (fixed) [MHz]");
	wiggle->SetParName(4,"#phi [rad]");

	DrawFit(gr_wiggle_full, wiggle,";Time [#mus];Tracks / 149 ns","../Images/MC/Bz/"+field+"/fit_wiggle");

	// Now fold the wiggle over 20*T_g-2 on the x-axis

	FoldWiggle(gr_wiggle_full);

		// ======= SET PHASE =======
	const double phi = wiggle->GetParameter(4);

	//return 0;

	// Now fit the modulo wiggle

	// No shift 
	FitFivePar(gr_wiggle_mod, 1300, 64, 0.35, OMEGA_A*1e3, 0, 0, G2PERIOD);
	cout<<"G2PERIOD\t"<<G2PERIOD<<endl;
	TF1 *modWiggle = gr_wiggle_mod->GetFunction("FiveParFunc");
	modWiggle->SetParName(0,"N_{0}");
	modWiggle->SetParName(1,"#tau [#mus]");
	modWiggle->SetParName(2,"A");
	modWiggle->SetParName(3,"#omega_{a} (fixed) [MHz]");
	modWiggle->SetParName(4,"#phi [rad]");
	DrawFit(gr_wiggle_mod, modWiggle,";t_{g#minus2}^{mod} [#mus];Tracks / 149 ns","../Images/MC/Bz/"+field+"/fit_mod_wiggle");

	// Shift
	// FitFivePar(gr_wiggle_mod_shift, 1300, 64, 0.35, OMEGA_A*1e3, 0, 0, G2PERIOD);
	// cout<<"G2PERIOD\t"<<G2PERIOD<<endl;
	// TF1 *modWiggle_shift = gr_wiggle_mod_shift->GetFunction("FiveParFunc");
	// modWiggle_shift->SetParName(0,"N_{0}");
	// modWiggle_shift->SetParName(1,"#tau [#mus]");
	// modWiggle_shift->SetParName(2,"A");
	// modWiggle_shift->SetParName(3,"#omega_{a} (fixed) [MHz]");
	// modWiggle_shift->SetParName(4,"#phi [rad]");
	// DrawFit(gr_wiggle_mod_shift, modWiggle_shift,";t_{g#minus2}^{mod} [#mus];Tracks / 149 ns","../Images/MC/Bz/"+field+"/fit_mod_wiggle_shift");

	// Clone TGraph 

	// TGraphErrors *gr_thetaY_mod_clone = (TGraphErrors*)gr_thetaY_mod->Clone("gr_thetaY_mod_clone");



	// ======= Fit for A_Bz =====
	// Bz should be 1700 ppm or 0.17 mrad
	FitBz(gr_thetaY_mod, 0.008, OMEGA_A*1e3, phi, 0, OMEGA_A*1e3, phi, 0.5, 0, G2PERIOD);
	TF1 *BzWiggle = gr_thetaY_mod->GetFunction("BzFunc");
	BzWiggle->SetParName(0,"A_{Bz} [mrad]");
	BzWiggle->SetParName(1,"#omega_{a} (fixed) [MHz]");
	BzWiggle->SetParName(2,"#phi (fixed) [rad]");
	BzWiggle->SetParName(3,"A_{EDM} [mrad]");
	BzWiggle->SetParName(4,"#omega_{a} (fixed) [MHz]");
	BzWiggle->SetParName(5,"#phi (fixed) [rad]");
	BzWiggle->SetParName(6,"C [mrad]");
	DrawFit(gr_thetaY_mod, BzWiggle,";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad]","../Images/MC/Bz/"+field+"/fit_Bz");

	// phi = modWiggle_shift->GetParameter(4);


	// // ======= Fit for A_Bz with a shifted phase but unshifted mod for theta_y =====
	// // Bz should be 1700 ppm or 0.17 mrad
	// FitBz(gr_thetaY_mod_clone, -0.17, OMEGA_A*1e3, phi, 0, OMEGA_A*1e3, phi, 0.5, 0, G2PERIOD);
	// TF1 *BzWiggle2 = gr_thetaY_mod_clone->GetFunction("BzFunc");
	// BzWiggle2->SetParName(0,"A_{Bz} [mrad]");
	// BzWiggle2->SetParName(1,"#omega_{a} (fixed) [MHz]");
	// BzWiggle2->SetParName(2,"#phi (fixed) [rad]");
	// BzWiggle2->SetParName(3,"A_{EDM} [mrad]");
	// BzWiggle2->SetParName(4,"#omega_{a} (fixed) [MHz]");
	// BzWiggle2->SetParName(5,"#phi (fixed) [rad]");
	// BzWiggle2->SetParName(6,"C [mrad]");
	// DrawFit(gr_thetaY_mod_clone, BzWiggle2,";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad]","../Images/MC/Bz/"+field+"/fit_Bz_shift");

	// // ======= Fit for A_Bz with shifted phase and a shifted mod for theta_y =====
	// // Bz should be 1700 ppm or 0.17 mrad
	// FitBz(gr_thetaY_mod_shift, 0.17, OMEGA_A*1e3, phi, 0, OMEGA_A*1e3, phi, 0.5, 0, G2PERIOD);
	// TF1 *BzWiggle_shift = gr_thetaY_mod_shift->GetFunction("BzFunc");
	// BzWiggle_shift->SetParName(0,"A_{Bz} [mrad]");
	// BzWiggle_shift->SetParName(1,"#omega_{a} (fixed) [MHz]");
	// BzWiggle_shift->SetParName(2,"#phi (fixed) [rad]");
	// BzWiggle_shift->SetParName(3,"A_{EDM} (fixed) [mrad]");
	// BzWiggle_shift->SetParName(4,"#omega_{a} (fixed) [MHz]");
	// BzWiggle_shift->SetParName(5,"#phi (fixed) [rad]");
	// BzWiggle_shift->SetParName(6,"C [mrad]");
	// DrawFit(gr_thetaY_mod_shift, BzWiggle_shift,";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad]","../Images/MC/Bz/"+field+"/fit_Bz_doubleShift");

	cout<<"Number of tracks in fit:\t"<<h1_wiggle_mod->GetEntries()<<endl;
	return 0;
}




	// Fit 5 par to hist just to check it out 

	//FitFivePar2(h1_wiggle, 1300, 64, 0.35, OMEGA_A*1e3, 0, 0.5*G2PERIOD, xmax-(G2PERIOD/2));
/*
	h1_wiggle->GetXaxis()->SetRangeUser(xmin, xmax);
	
	TF1 *wiggle2 = h1_wiggle->GetFunction("FiveParFunc");
	wiggle2->SetParName(0,"N_{0}");
	wiggle2->SetParName(1,"#tau [#mus]");
	wiggle2->SetParName(2,"A");
	wiggle2->SetParName(3,"#omega_{a} (fixed) [MHz]");
	wiggle2->SetParName(4,"#phi [rad]");

	DrawFit2(h1_wiggle, wiggle2, ";Time [#mus];Tracks / 149 ns","../Images/MC/Bz/"+field+"/fit_h1_wiggle");*/


//	SimpleSinFit(moduloGraph, 0.15, OMEGA_A * 1e3, 0);
//
//	cout<<"A_EDM:\t"<<moduloGraph->GetFunction("SimpleSinFunc")->GetParameter(0)<<endl;
//	
//	DrawSimpleSinFit(moduloGraph, ";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad]", ("../Images/MC/"+config+"/simpleModuloFit_"+qualString).c_str(), double(nEntries),true);

