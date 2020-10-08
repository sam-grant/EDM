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
#include "TFitResult.h"
#include "TMatrixD.h"

using namespace std;

// ==================== GLOBALS ====================
const int N_QHV = 2;
const int N_FIELD = 4;
const double BR_BKG = 0; // ppm, the size of the field that would kill our measurement
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

 	cout<<"MAX SUBRUNS:\t"<<N_SUBRUNS*SUBRUN_INTERVAL<<endl;

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

// This is an approximation! 
double yPosition(double Br_true, double QHV) { return Br_true / QHV; }

// Could put these two functions in a tuple?
double CalcRadialField(TGraphErrors *graph, string func) { 

	TF1 *fit = graph->GetFunction(func.c_str());
	double c = fit->GetParameter(0);
	double m = fit->GetParameter(1);
	double Br = - c / m;
	return Br;

}

// double CalcRadialFieldPrecision(TGraphErrors *graph, TFitResultPtr frp, string func) { 
double CalcRadialFieldPrecision(TGraphErrors *graph, string func) { 

	// Get function
	TF1 *fit = graph->GetFunction(func.c_str());
	// Horrible that you have to refit
	TFitResultPtr fitResult = graph->Fit(fit, "SQM"); // GetFunction(func.c_str());
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
	return Br * sqrt( pow(cerr/c, 2) + pow(merr/m, 2) * (2*(cov/(c*m))) );


}

// Get a random value for the y-poistion based on Gaussian smearing
double GausSmearing(double yPos, int i_subrun, int seed) {
 
 	TRandom3 *rndm = new TRandom3(seed);
 	return rndm->Gaus(yPos,ctags_sigmas_subruns.SIGMAS[i_subrun]);
 
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



	double xint = CalcRadialField(graph, func); // - par0 / par1;
	double xint_err = CalcRadialFieldPrecision(graph, func); 

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

// double GetRadialFieldPrecision(int i_experiment, int i_subrun) { 
// Br and it's uncertainty
tuple<double, double> GetRadialField(int i_experiment, int i_subrun) { 

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

		// The real Br includes contributions from the surface coils and the background
		double Br_meas = BR_APP[i_field]+BR_BKG;

		// Average vertical position
		double y[N_QHV];
		double ey[N_QHV];
		double x[N_QHV];
		double ex[N_QHV];

		// =========== Quad setting loop ==========
		for ( int i_quad = 0; i_quad < N_QHV; i_quad++ ) {

			double yPos =  yPosition( Br_meas, QHV[i_quad]);

			// Smear y, ensure that it's properly random smearing with a unique seed 
			int seed = i_experiment*i_subrun*i_field*i_quad;;
			y[i_quad] = GausSmearing(yPos, i_subrun, seed);
			// Take uncertainty as sigma
			ey[i_quad] = ctags_sigmas_subruns.SIGMAS[i_subrun];
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
	quadGrads_vs_BrApp->Fit(fieldLineFit, "QM");
	// You have to use this if you want to get the covarience matrix out
	// TFitResultPtr fieldLineFitResult = quadGrads_vs_BrApp->Fit(fieldLineFit, "QM");

	// Only draw the plots once 
	if(i_experiment==0) { 
		DrawQuadScanFits(QuadScans, "quadLineFit", ";QHV [kV];#LTy#GT [mm]", "../Images/MC/ToyRadialFieldScan/QuadScans_NSUBRUN_"+std::to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun])+"_NEXP_"+std::to_string(i_experiment),-3,2);
		DrawRadialFieldLineFit(quadGrads_vs_BrApp,"fieldLineFit", "Sub-runs "+std::to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun])+";Applied B_{r} [ppm];#LTy#GT / QHV [mm/kV]","../Images/MC/ToyRadialFieldScan/Result_NSUBRUN_"+std::to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun])+"_NEXP_"+std::to_string(i_experiment));
	}

	// tuple<double, double> result = make_tuple(CalcRadialField(quadGrads_vs_BrApp, "fieldLineFit"), CalcRadialFieldPrecision(quadGrads_vs_BrApp, "fieldLineFit"));

	return make_tuple(CalcRadialField(quadGrads_vs_BrApp, "fieldLineFit"), CalcRadialFieldPrecision(quadGrads_vs_BrApp, "fieldLineFit"));//result; // CalcRadialFieldPrecision(quadGrads_vs_BrApp, "fieldLineFit");

}



// ==================== MAIN ====================

int main() {

	// Draw a TGraph of dBr versus sub-runs and CTAGS
	// Overlay residual RMS of meas-true 

	// Initialise arrays for TGraphs
	double x_ctag[N_SUBRUNS];
	double x_subrun[N_SUBRUNS];
	double zeros[N_SUBRUNS];
	double y_dBr[N_SUBRUNS];
	double ey_dBr[N_SUBRUNS];
	double y_BrRes[N_SUBRUNS];
	double y_BrResRMS[N_SUBRUNS];
	double ey_BrResRMS[N_SUBRUNS];

	for ( int i_subrun = 0; i_subrun < N_SUBRUNS; i_subrun++ ) { 

		// Perform many experiments at that sub-run 
		// Meas - true Br
		

		// Book histogram for each sub-run 
		TH1D *dBr = new TH1D("","dBr",300,0,3);
		TH1D *dBr_res = new TH1D("","dBr_res",400,-2,2);


		for ( int i_exp = 0; i_exp < N_EXP; i_exp++ ) {

			tuple<double, double> radialField = GetRadialField(i_exp, i_subrun);

			// Residual
			dBr_res->Fill(get<0>(radialField) - BR_BKG);
			// Precision
			dBr->Fill(get<1>(radialField));
			
		
		}

		cout<<"SUBRUN:\t"<<ctags_sigmas_subruns.SUBRUNS[i_subrun]<<endl;
		cout<<"CTAG:\t"<<ctags_sigmas_subruns.CTAGS[i_subrun]<<endl;
		cout<<"SIGMA:\t"<<ctags_sigmas_subruns.SIGMAS[i_subrun]<<endl;

		DrawTH1(dBr,"Number of sub-runs: "+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun])+";Background #deltaB_{r} [ppm];Experiments","../Images/MC/ToyRadialFieldScan/dBr_"+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun]));
		DrawTH1(dBr_res,"Number of sub-runs: "+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun])+";Meas #minus true B_{r} [ppm];Experiments","../Images/MC/ToyRadialFieldScan/resBr_"+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun]));

		x_ctag[i_subrun] = ctags_sigmas_subruns.CTAGS[i_subrun];
		x_subrun[i_subrun] = ctags_sigmas_subruns.SUBRUNS[i_subrun];
		zeros[i_subrun] = 0;
		y_dBr[i_subrun] = dBr->GetMean();
		ey_dBr[i_subrun] = dBr->GetMeanError();
		y_BrRes[i_subrun] = dBr_res->GetMean();
		y_BrResRMS[i_subrun] = dBr_res->GetRMS();
		ey_BrResRMS[i_subrun] = dBr_res->GetRMSError();
		// Get residual
		//double res = abs(dBr->GetMean() - BR_RES);
		
	}

	TGraphErrors *dBr_vs_N_ctag = new TGraphErrors(N_SUBRUNS,x_ctag,y_dBr,zeros,ey_dBr);

	
	TGraphErrors *dBr_vs_N_subrun = new TGraphErrors(N_SUBRUNS,x_subrun,y_dBr,zeros,ey_dBr);

	TGraphErrors *BrRes_vs_N_ctag = new TGraphErrors(N_SUBRUNS,x_ctag,y_BrRes,zeros,y_BrResRMS);
	TGraphErrors *BrResRMS_vs_N_ctag = new TGraphErrors(N_SUBRUNS,x_ctag,y_BrResRMS,zeros,ey_BrResRMS);



	// These must be hard coded, otherwise the axes won't line up 
	// They come from the printouts in CaloMeanPos.C
	dBr_vs_N_ctag->GetXaxis()->SetRangeUser(517848,1.32464e+07);
	int subrun_hi = 345;
	int subrun_lo = 14;
	dBr_vs_N_subrun->GetXaxis()->SetRangeUser(subrun_lo,subrun_hi);

	dBr_vs_N_ctag->SetName("Fits");
	BrResRMS_vs_N_ctag->SetName("Truth");

	
	DrawTGraphErrorsDoubleXAxis(dBr_vs_N_ctag, ";CTAGs;#deltaB_{r} [ppm]", "Sub-runs", "../Images/MC/ToyRadialFieldScan/dBr_vs_N",subrun_lo,subrun_hi);
	DrawTGraphErrorsDoubleXAxisOverlay(dBr_vs_N_ctag, BrResRMS_vs_N_ctag, "Fits", "Truth", ";CTAGs;#deltaB_{r} [ppm]", "Sub-runs", "../Images/MC/ToyRadialFieldScan/dBr_vs_N_overlay",subrun_lo,subrun_hi);
	DrawTGraphErrorsDoubleXAxis(BrRes_vs_N_ctag, ";CTAGs;Meas #minus true B_{r} [ppm]", "Sub-runs","../Images/MC/ToyRadialFieldScan/dBrRes_vs_N",subrun_lo,subrun_hi);
	DrawTGraphErrorsDoubleXAxis(BrResRMS_vs_N_ctag, ";CTAGs;RMS of meas #minus true B_{r} [ppm]", "Sub-runs","../Images/MC/ToyRadialFieldScan/dBrResRMS_vs_N",subrun_lo,subrun_hi);

	return 0; 

} 










