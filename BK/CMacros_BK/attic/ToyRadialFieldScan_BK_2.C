// ======================================================= //
// Toy quad scan for radial field measurement


// Sam Grant -- October 2020
// ======================================================= //

// C++ includes
#include <iostream>
#include <vector>

// Custom includes
#include "FancyDraw.h"
#include "Utils.h"

// ROOT includes
#include "TFile.h"
#include "TH1.h"
#include "TGraphErrors.h"
#include "TLegend.h"
#include "TRandom3.h"

using namespace std;

// ==================== GLOBAL PARAMETERS ====================
const int N_QHV = 2;
const int N_FIELD = 4;
const double BR_RES = 8; // ppm, the size of the field that would kill our measurement
const int N_EXP = 1e3;
const double QHV[N_QHV] = {16, 20}; // Two quad settings, kV
const double BR_APP[N_FIELD] = {-30, -10, 10, 30}; // Applied radial field, ppm
const int N_SUBRUNS = 12;
const int SUBRUN_INTERVAL = 25;

// I want to load these from a file, but that's tricky with global params. Maybe I can do it in a header?
const int SUBRUNS[N_SUBRUNS] = {25, 50, 75, 100, 125, 150, 175, 200};
const double SIGMAS[N_SUBRUNS] = {0.0298227, 0.0209469, 0.0170752, 0.0148505, 0.0132568, 0.0120878, 0.0111837, 0.0104537};
const double CTAGS[N_SUBRUNS] = {941719, 1.90707e+06, 2.86835e+06, 3.79245e+06, 4.75873e+06, 5.72386e+06,  6.68638e+06, 7.65107e+06};

// ==================== LOAD CTAGS AND SUBRUNS ====================

class CTAGs_SIGMAS_SUBRUNS { 

public: 

	



};

/* void LOAD_CTAGs_SIGMAS_SUBRUNS(std::string fname) {

	// struct Variables var; 

	std::cout<<"\nLoading CTAGS, SIGMAS, AND SUBRUNS"<<std::endl;
	// TFile *file = TFile::Open("../Plots/Data/MeanCaloPos/CTAG_SUBRUN_SIGMA_15921.root"); 
	TFile *file = TFile::Open(fname.c_str()); 

	// Load histograms
	TH1D *CTAG_vs_SUBRUN = (TH1D*)file->Get("CTAG_vs_SUBRUN"); 
	TH1D *SIGMA_vs_SUBRUN = (TH1D*)file->Get("SIGMA_vs_SUBRUN"); 

	// int n = 0;
	// int n_1 = CTAG_vs_SUBRUN->GetNbinsX(); 
	// int n_2 = SIGMA_vs_SUBRUN->GetNbinsX(); 
	// if(n_1 == n_2) n = n_1; 
	// else cout<<"ERROR"<<endl;

	int counter = 0;

	for (int i_subrun = SUBRUN_INTERVAL; i_subrun < N_SUBRUNS*SUBRUN_INTERVAL; i_subrun = i_subrun + SUBRUN_INTERVAL) { 


		SUBRUNS[counter] = 100;//i_subrun+1; // new int[i_subrun+1]; // new int[i_subrun+1]; //  = ;
		//CTAGS[i_subrun] = CTAG_vs_SUBRUN->GetBinContent(i_subrun+1);
		//SIGMAS[i_subrun] = SIGMA_vs_SUBRUN->GetBinContent(i_subrun+1);

		counter++;

	}

	return;


} */


// ==================== HELPER FUNCTIONS ====================

// This is an approximation! 
double yPosition(double Br_true, double QHV) { return Br_true / QHV; }

double RadialFieldPrecision(TF1 *fit) { 

	double c = fit->GetParameter(0);
	double cerr = fit->GetParError(0);
	double m = fit->GetParameter(1);
	double merr = fit->GetParError(1);
	double Br =  - c / m;

	return Br * sqrt( pow(cerr/c, 2) + pow(merr/m, 2) );

}

// Get a random value for the y-poistion based on Gaussian smearing
double GausSmearing(double yPos, int i_subrun, int seed) {
 
 	TRandom3 *rndm = new TRandom3(seed);
 	return rndm->Gaus(yPos,SIGMAS[i_subrun]);
 
}

// ==================== CUSTOM PLOTTING ====================

// I'd rather put these in FancyDraw.h but there are too many dependancies

void DrawQuadScanFits(std::vector<TGraphErrors*> graphs, std::string title, std::string fname, double ymin, double ymax, std::string func ) {

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

void DrawRadialFieldLineFit(TGraphErrors *graph, std::string title, std::string fname, std::string func) {

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

	double xint = - par0 / par1;
	double xint_err = RadialFieldPrecision(fit); 

	TPaveText *names = new TPaveText(0.30,0.69,0.62,0.88,"NDC");
	names->SetTextAlign(13);
	names->AddText("#chi^{2}/ndf"); 
	names->AddText("Gradient [mm/kV#upointppm]"); 
	names->AddText("Y-intercept [mm/kV]"); 
	names->AddText("Residual B_{r} [ppm]"); 

	TPaveText *values = new TPaveText(0.69,0.68,0.89,0.89,"NDC");
	values->SetTextAlign(33);

	values->AddText(SciNotation(chi2ndf));
	values->AddText(FormatNegativeNumber(par1)+"#pm"+ThreeSigFig(err1));
	values->AddText(ThreeSigFig(par0)+"#pm"+ThreeSigFig(err0));
	values->AddText(ThreeSigFig(xint)+"#pm"+ThreeSigFig(xint_err));

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

// ==================== MAIN RESULT ====================

double GetRadialFieldPrecision(int i_experiment, int i_subrun) { 

	std::vector<TGraphErrors*> QuadScans;

	double quadScanGrads[N_FIELD];
	double quadScanGradErrs[N_FIELD];
	double zeros[N_FIELD];

	// =========== Field setting loop =========== 
	for ( int i_field = 0; i_field < N_FIELD; i_field++ ) {

		// Printout
		// std::cout<<"\nScan number:\t"<<i_field<<std::endl;
		// std::cout<<"Br setting:\t"<<BR_APP[i_field]<<" ppm"<<std::endl; 
		// std::cout<<"True Br:\t"<<BR_APP[i_field]-BR_RES<<" ppm"<<std::endl;

		double Br_true = BR_APP[i_field]-BR_RES;

		// Average vertical position
		double y[N_QHV];
		double ey[N_QHV];
		double x[N_QHV];
		double ex[N_QHV];

		// =========== Quad setting loop ==========
		for ( int i_quad = 0; i_quad < N_QHV; i_quad++ ) {

			double yPos =  yPosition( Br_true, QHV[i_quad]);

			// Smear y, ensure that it's properly random smearing with a unique seed 
			int seed = i_experiment*i_subrun*i_field*i_quad;;
			y[i_quad] = GausSmearing(yPos, i_subrun, seed);
			// Take uncertainty as sigma
			ey[i_quad] = SIGMAS[i_subrun];
			x[i_quad] = QHV[i_quad];
			ex[i_quad] = 0;


		}

		TGraphErrors *QuadScan = new TGraphErrors(N_QHV,x,y,ex,ey);
		QuadScan->SetName((std::to_string(BR_APP[i_field])+" ppm").c_str());

		// Fit
		TF1 *quadLineFit = new TF1("quadLineFit", "pol 1");
		QuadScan->Fit(quadLineFit,"QM");
		QuadScans.push_back(QuadScan);

		quadScanGrads[i_field] = quadLineFit->GetParameter(1);
		quadScanGradErrs[i_field] = quadLineFit->GetParError(1);
		zeros[i_field] = 0;

	} 
	
	TGraphErrors *quadGrads_vs_BrApp = new TGraphErrors(N_FIELD,BR_APP,quadScanGrads,zeros,quadScanGradErrs);

	TF1 *fieldLineFit = new TF1("fieldLineFit", "pol 1");

	// lineFit2->SetLineColor(kRed);
	quadGrads_vs_BrApp->Fit(fieldLineFit, "QM");

	// Only draw the plots once 
	if(i_experiment==0) { 
		DrawQuadScanFits(QuadScans, ";QHV [kV];#LTy#GT [mm]", "../Images/MC/ToyRadialFieldScan/QuadScans_NSUBRUN_"+std::to_string(SUBRUNS[i_subrun])+"_NEXP_"+std::to_string(i_experiment),-3,2,"quadLineFit");
		DrawRadialFieldLineFit(quadGrads_vs_BrApp,"Sub-runs "+std::to_string(SUBRUNS[i_subrun])+";Applied B_{r} [ppm];#LTy#GT / QHV [mm/kV]","../Images/MC/ToyRadialFieldScan/Result_NSUBRUN_"+std::to_string(SUBRUNS[i_subrun])+"_NEXP_"+std::to_string(i_experiment),"fieldLineFit");
	}

	return RadialFieldPrecision(fieldLineFit);

}



// ==================== MAIN ====================

int main() {

	// Draw a TGraph of dBr versus sub-runs and CTAGS
	// Overlay residual RMS of meas-true 

/*	struct Variables var;

	CTAGs_SIGMAS_SUBRUNS("../Plots/Data/MeanCaloPos/CTAG_SUBRUN_SIGMA_15921.root");

	std::cout<<"N_SUBRUNS\t"<<var.N_SUBRUNS<<std::endl;

	for (int i = 0; i < var.N_SUBRUNS; i++) {

		std::cout<<"SUBRUNS\t"<<var.SUBRUNS[i]<<std::endl;



	}

			std::cout<<"\ni_subrun\t"<<i_subrun<<std::endl;
		std::cout<<"ctags \t"<<CTAG_vs_SUBRUN->GetBinContent(i_subrun+1)<<std::endl;
		std::cout<<"sigma \t"<<SIGMA_vs_SUBRUN->GetBinContent(i_subrun+1)<<std::endl;*/

	
	double x_ctag[N_SUBRUNS];
	double x_subrun[N_SUBRUNS];
	double ex[N_SUBRUNS];
	double y[N_SUBRUNS];
	double ey[N_SUBRUNS];

	for ( int i_subrun = 0; i_subrun < N_SUBRUNS; i_subrun++ ) { 

		// Perform many experiments at that sub-run /

		// Book histogram for each sub-run 
		TH1D *dBr = new TH1D("","dBr",300,0,3);

		for ( int i_exp = 0; i_exp < N_EXP; i_exp++ ) {

			dBr->Fill(GetRadialFieldPrecision(i_exp, i_subrun));
			//std::cout<<"dBr:\t"<<GetRadialFieldPrecision(i_exp, i_subrun)<<std::endl;
		
		}

		DrawTH1(dBr,"Number of sub-runs: "+std::to_string(SUBRUNS[i_subrun])+";Residual #deltaB_{r} [ppm];Experiments","../Images/MC/ToyRadialFieldScan/dBr_"+std::to_string(SUBRUNS[i_subrun]));

		x_ctag[i_subrun] = CTAGS[i_subrun];
		x_subrun[i_subrun] = SUBRUNS[i_subrun];
		ex[i_subrun] = 0;
		y[i_subrun] = dBr->GetMean();
		ey[i_subrun] = dBr->GetRMS();
		
	}

	TGraphErrors *dBr_vs_N_ctag = new TGraphErrors(N_SUBRUNS,x_ctag,y,ex,ey);
	TGraphErrors *dBr_vs_N_subrun = new TGraphErrors(N_SUBRUNS,x_subrun,y,ex,ey);

	// These must be hard coded, otherwise the axes won't line up 

	// TODO: either put these as globals, or try and read everything in from another file

	dBr_vs_N_ctag->GetXaxis()->SetRangeUser(517848,7.99829e+06);
	dBr_vs_N_subrun->GetXaxis()->SetRangeUser(14,209);
	
	DrawTGraphErrorsDoubleXAxis(dBr_vs_N_ctag, ";CTAGs;#deltaB_{r} [ppm]", "Sub-runs", "../Images/MC/ToyRadialFieldScan/dBr_vs_N_test",14, 209);
	// DrawTGraphErrors(dBr_vs_N_ctag, ";CTAGS;#deltaB_{r} [ppm]", "../Images/MC/ToyRadialFieldScan/dBr_vs_N_2_test");
	// DrawTGraphErrors(dBr_vs_N_subrun, ";Sub-runs;#deltaB_{r} [ppm]", "../Images/MC/ToyRadialFieldScan/dBr_vs_N_1_test");
	
	// delete[] SUBRUNS;
	return 0; 

}