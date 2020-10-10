#ifndef ToyRadialFieldScan_h
#define ToyRadialFieldScan_h

// Custom includes
#include "FancyDraw.h"
#include "Utils.h"
#include "Utils.h"

// ROOT includes
#include "TFile.h"
#include "TH1.h"
#include "TGraphErrors.h"
#include "TLegend.h"
#include "TRandom3.h"
#include "TFitResult.h"
#include "TMatrixD.h"

using namespace std;

// ==================== GLOBALS ====================
const int N_QHV = 2;
const int N_FIELD = 4;
const double BR_BKG = 8; // ppm, the size of the field that would kill our measurement
const int N_EXP = 1e3;
const double QHV[N_QHV] = {16, 20}; // Two quad settings, kV
const double BR_APP[N_FIELD] = {-30, -10, 10, 30}; // Applied radial field, ppm
const int N_SUBRUNS = 13; // Lucky number
const int SUBRUN_INTERVAL = 25;

// ==================== CLASS TO LOAD CTAGS, SIGMAS, AND SUBRUNS ====================

class CTAGs_SIGMAS_SUBRUNS { 

public: 

	// Public variables
	int SUBRUNS[N_SUBRUNS];
	double CTAGS[N_SUBRUNS];
	double SIGMAS[N_SUBRUNS];

	// Member functions declaration
	CTAGs_SIGMAS_SUBRUNS();

};

 CTAGs_SIGMAS_SUBRUNS::CTAGs_SIGMAS_SUBRUNS() {

 	TFile *file = TFile::Open("../Plots/Data/MeanCaloPos/CTAG_SUBRUN_SIGMA_15921.root");
 	// Load histograms
	TH1D *CTAG_vs_SUBRUN = (TH1D*)file->Get("CTAG_vs_SUBRUN"); 
	TH1D *SIGMA_vs_SUBRUN = (TH1D*)file->Get("SIGMA_vs_SUBRUN"); 

 	int counter = 0; 

 	// cout<<"\nMAX SUBRUNS:\t"<<N_SUBRUNS*SUBRUN_INTERVAL<<endl;

	for (int i_subrun = SUBRUN_INTERVAL; i_subrun <= N_SUBRUNS*SUBRUN_INTERVAL; i_subrun = i_subrun + SUBRUN_INTERVAL) { 

		SUBRUNS[counter] = i_subrun; // new int[i_subrun+1]; // new int[i_subrun+1]; //  = ;
		CTAGS[counter] = CTAG_vs_SUBRUN->GetBinContent(i_subrun+1);
		SIGMAS[counter] = SIGMA_vs_SUBRUN->GetBinContent(i_subrun+1);
/*		cout<<"SUBRUN\t:"<<i_subrun<<endl;
		cout<<"counter\t:"<<counter<<endl;*/
		counter++;

	}

 } 

// Store class member function as a global variable
CTAGs_SIGMAS_SUBRUNS ctags_sigmas_subruns;

// ==================== HELPER FUNCTIONS ====================

// <y> = R0/n * Br
double yPosition(double Br_tot, double QHV) { 

	double n = 0.108/18.3 * QHV; // // Convert from 60h/EG values

//	cout<<
	return 7112./n * Br_tot *1e-6 ; // ppm 

}

// Could put these two functions in a tuple?


// Get a random value for the y-poistion based on Gaussian smearing
double GausSmearing(double yPos, int i_subrun, int seed) {
 
 	TRandom3 *rndm = new TRandom3(seed);
 	return rndm->Gaus(yPos,ctags_sigmas_subruns.SIGMAS[i_subrun]);
 
}

double CalcRadialField(TGraphErrors *graph, string func) { 

	TF1 *fit = graph->GetFunction(func.c_str());
	double c = fit->GetParameter(0);
	double m = fit->GetParameter(1);
	double Br = - c / m; // This is why I get a negative intercept
	return fabs(Br);

}

// double CalcRadialFieldPrecision(TGraphErrors *graph, TFitResultPtr frp, string func) { 
double CalcRadialFieldPrecision(TGraphErrors *graph, string func) { 

	// Get function
	TF1 *fit = graph->GetFunction(func.c_str());
	// Horrible that you have to refit
	TFitResultPtr fitResult = graph->Fit(fit, "SMQ"); // GetFunction(func.c_str());
	// Get the covarience matrix
	TMatrixDSym V = fitResult->GetCovarianceMatrix();

	// Get the covarience
    // Cov(x, y) = E((x - E(x))(y-E(y))) = E((y-E(y))(x-E(x))) = Cov(y,x)
	// The covarience is either off-diagonal elements V[0][1] or V[1][0] 
	double cov = V[0][1];

	// Fit params
	double c = fit->GetParameter(0);
	double cerr = fit->GetParError(0);
	double m = fit->GetParameter(1);
	double merr = fit->GetParError(1);
	double Br =  - c / m;

	// Dervied from Taylor 9.9
	return fabs(Br) * sqrt( pow(cerr/c, 2) + pow(merr/m, 2) * (2*(cov/(c*m))) );


}

 // ==================== CUSTOM PLOTTING ====================

// I'd rather put these in FancyDraw.h but there are too many dependancies

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

void DrawRadialFieldLineFit(TGraphErrors *graph, string func, std::string title, std::string fname) {

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
	double xint = - par0 / par1; // CalcRadialField(graph, func); // ;
	double xint_err = CalcRadialFieldPrecision(graph, func); 

	TPaveText *names = new TPaveText(0.30,0.69,0.62,0.88,"NDC");
	names->SetTextAlign(13);
	names->AddText("#chi^{2}/ndf"); 
	names->AddText("Gradient [mm/kV#upointppm]"); 
	names->AddText("Y-intercept [mm/kV]"); 
	names->AddText("Residual B_{r} [ppm]"); 

	TPaveText *values = new TPaveText(0.69,0.68,0.89,0.89,"NDC");
	values->SetTextAlign(33);

	values->AddText(ThreeSigFig(chi2ndf));
	values->AddText(FormatNegativeNumber(par1)+"#pm"+ThreeSigFig(err1));
	values->AddText(FormatNegativeNumber(par0)+"#pm"+ThreeSigFig(err0));
	values->AddText(FormatNegativeNumber(xint)+"#pm"+ThreeSigFig(xint_err));

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