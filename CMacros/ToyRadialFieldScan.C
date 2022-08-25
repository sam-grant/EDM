// ======================================================= //
// Toy quad scan for radial field measurement


// Sam Grant -- October 2020
// ======================================================= //

// C++ includes
#include <iostream>
#include <vector>

// Custom includes
#include "ToyRadialFieldScan.h"
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

// Store class member function from header as a global variable
CTAGS_SIGMAS_SUBRUNS ctags_sigmas_subruns;

// Temp histograms for David T.
//TH1D *h_ymeas = new TH1D("","",100,2.22,2.36);
//TH1D *h_ytrue = new TH1D("","",100,2.22,2.36);

// ==================== MISC FUNCTIONS ====================


void DrawHist(TH1D *hist, TString title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title); // .c_str());

	hist->SetStats(0);
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.1);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);
	//hist->SetLineWidth(3);
	hist->SetLineColor(1);

	// Find x-range
	// double xmin = hist->GetBinCenter(hist->FindFirstBinAbove(0)) - 0.1*hist->GetBinCenter(hist->FindFirstBinAbove(0));
	// double xmax = hist->GetBinCenter(hist->FindLastBinAbove(0)) + 0.1*hist->GetBinCenter(hist->FindLastBinAbove(0));
	double xmin = hist->GetMean() - 17*hist->GetRMS();
	double xmax = hist->GetMean() + 17*hist->GetRMS();

	hist->GetXaxis()->SetRangeUser(xmin, xmax);

	// Mean and RMS
	TPaveText *names = new TPaveText(0.54,0.75,0.73,0.89,"NDC");
	//TPaveText *names = new TPaveText(0.54,0.74,0.79,0.89,"NDC");
	names->AddText("Trials");
	names->AddText("Mean [ppm]");
	names->AddText("RMS [ppm]");

	names->SetTextAlign(13);
	names->SetTextSize(23);
	names->SetTextFont(44);
	names->SetFillColor(0);

	TPaveText *values = new TPaveText(0.79,0.75,0.89,0.89,"NDC");
	values->AddText(to_string(int(hist->GetEntries())).c_str());
	values->AddText(Round(hist->GetMean(),3)+"#pm"+Round(hist->GetMeanError(),1));
	values->AddText(Round(hist->GetRMS(),3)+"#pm"+Round(hist->GetRMSError(),1));

	// BrErr_100
/*   	values->AddText("1000");
   	values->AddText("0.3#pm0.0001");
   	values->AddText("(3.15#pm0.07)#times10^{-5}");*/

	values->SetTextAlign(33);
	values->SetFillColor(0);
	values->SetTextFont(44);
	values->SetTextSize(23);

	hist->Draw("HIST");
	names->Draw("SAME");
	values->Draw("SAME");

	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

// ==================== CALCULATE BR AND BR UNCERTAINTY ====================

// Put the measured radial field and it's uncertainty into a tuple
tuple<double, double> GetRadialField(TRandom3 *rndm, int i_experiment, int i_subrun) {

	// Uncertainty on caloY at this level of stats
	double sigmaY = ctags_sigmas_subruns.SIGMAS[i_subrun];
	// ... this level of stats
	int subruns = ctags_sigmas_subruns.SUBRUNS[i_subrun];

	double x_field[N_FIELD]; double ex_field[N_FIELD];

	// TODO: come up with some more readable names for these

	// <y>/QHV from fits
	double y_field_1[N_FIELD]; double ey_field_1[N_FIELD];
	// Calculated Br 
	double y_field_2[N_FIELD]; double ey_field_2[N_FIELD];

	// Vector to hold the quad scans at each field setting
	vector<TGraphErrors*> quadScans;

	// =========== Field setting loop =========== 
	for ( int i_field = 0; i_field < N_FIELD; i_field++ ) {

		double Br_tot = BR_APP[i_field]+BR_BKG;

		double y_quad[N_QHV]; double ey_quad[N_QHV];
		double x_quad[N_QHV]; double ex_quad[N_QHV];

		// Field indices
		double n[N_QHV];

		int counter = 0;

		TGraphErrors *quadScan = new TGraphErrors(); // N_QHV,x_quad,y_quad,ex_quad,ey_quad);
		quadScan->SetName((std::to_string(BR_APP[i_field])+" ppm").c_str());

		// =========== Quad setting loop ==========
		for ( int i_quad = 0; i_quad < N_QHV; i_quad++ ) {

			if( (QHV[i_quad]==18 && BR_APP[i_field] == 10) || (QHV[i_quad]==14 && BR_APP[i_field] == -50) ) {
				//counter++;
				continue;
			}

			n[i_quad] =  0.108/18.3 * QHV[i_quad];

			double y_true = R_0/n[i_quad] * Br_tot * 1e-6;

			double y_meas = rndm->Gaus(y_true,sigmaY);
		
			y_quad[i_quad] = y_meas;
			ey_quad[i_quad] = sigmaY;
			x_quad[i_quad] = 1/QHV[i_quad];
			ex_quad[i_quad] = 0;

			quadScan->SetPoint(counter, 1/QHV[i_quad], y_meas);
			quadScan->SetPointError(counter, 0, sigmaY);

			counter++;

		}

/*		TGraphErrors *quadScan = new TGraphErrors(N_QHV,x_quad,y_quad,ex_quad,ey_quad);
		quadScan->SetName((std::to_string(BR_APP[i_field])+" ppm").c_str());*/

		// Fit
		TF1 *quadLineFit = new TF1("quadLineFit", "[0]+[1]*x", quadScan->GetX()[0], quadScan->GetX()[quadScan->GetN()-1]);
		quadScan->Fit(quadLineFit,"QMR");

		// Push scans into a vector
		quadScans.push_back(quadScan);
				
		x_field[i_field] = BR_APP[i_field];
		ex_field[i_field] = 0;

		// <y>/QHV
		y_field_1[i_field] = quadLineFit->GetParameter(1);
		ey_field_1[i_field] = quadLineFit->GetParError(1);

		// Calculated Br, from Mott's method
		double calcGrad = R_0 * ( 1./n[N_QHV-1] - 1./n[0]) * 1e-6; // ppm
		double measDiff = y_quad[N_QHV-1]-y_quad[0];
		y_field_2[i_field] = measDiff / calcGrad;
		ey_field_2[i_field] = fabs(sqrt(2)*sigmaY/calcGrad);

	} 

	// We'll use this for the result
	TGraphErrors *QuadGrads_vs_BrApp = new TGraphErrors(N_FIELD,x_field,y_field_1,ex_field,ey_field_1);
	// This is a cross check
	TGraphErrors *BrCalc_vs_BrApp = new TGraphErrors(N_FIELD,x_field,y_field_2,ex_field,ey_field_2);

	TF1 *mainFit = new TF1("mainFit", "[0]+[1]*x", QuadGrads_vs_BrApp->GetX()[0], QuadGrads_vs_BrApp->GetX()[QuadGrads_vs_BrApp->GetN()-1]);
	TFitResultPtr mainFitRes = QuadGrads_vs_BrApp->Fit(mainFit,"SMQR");

	TF1 *checkFit = new TF1("checkFit", "[0]+[1]*x", BrCalc_vs_BrApp->GetX()[0], BrCalc_vs_BrApp->GetX()[BrCalc_vs_BrApp->GetN()-1]);
	TFitResultPtr checkFitRes = BrCalc_vs_BrApp->Fit(checkFit,"SMQR");

	double p0 = mainFit->GetParameter(0); double p0_err = mainFit->GetParError(0);
    double p1 = mainFit->GetParameter(1); double p1_err = mainFit->GetParError(1);

   	double p0_check = checkFit->GetParameter(0); double p0_err_check = checkFit->GetParError(0);
    double p1_check = checkFit->GetParameter(1); double p1_err_check = checkFit->GetParError(1);

    // x-intercept
	double Br = fabs(p0/p1);
	double Br_check = fabs(p0_check/p1_check);

	// From Taylor 9.9
	double BrErr = fabs(Br) * sqrt(pow(p0_err/p0,2) + pow(p1_err/p1,2) - 2*mainFitRes->GetCovarianceMatrix()(0,1)/(p0*p1));
	double BrErr_check = fabs(Br_check) * sqrt(pow(p0_err_check/p0_check,2) + pow(p1_err_check/p1_check,2) - 2*checkFitRes->GetCovarianceMatrix()(0,1)/(p0_check*p1_check));

	double chi2ndf = mainFit->GetChisquare()/mainFit->GetNDF();

/*	if( (Br>=7.8 && Br<=8.2) && (chi2ndf > 0.95 && chi2ndf < 1.5) ) {
		cout<<i_experiment<<endl;
		cout<<chi2ndf<<endl;
		cout<<Br<<endl;
	}
*/
	// Only draw the plots once 
	if(i_experiment==738) { 

		//tuple<double, double> quadScanYRange = QuadScanYRange(quadScans);
		//DrawQuadScanFits(quadScans, "quadLineFit", ";1/QHV [kV^{-1}];#LTy#GT [mm]", "../Images/MC/ToyRadialFieldScan/QuadScans_NSUBRUN_"+std::to_string(subruns)+"_NEXP_"+std::to_string(i_experiment), get<0>(quadScanYRange), get<1>(quadScanYRange), BR_APP);
		//DrawRadialFieldLineFit(QuadGrads_vs_BrApp, BrErr, "mainFit", std::to_string(subruns)+" sub-runs;#LTB_{r}^{App}#GT [ppm];#LTy#GT QHV [mm#upointkV]","../Images/MC/ToyRadialFieldScan/FieldFit_NSUBRUN_"+std::to_string(subruns)+"_NEXP_"+std::to_string(i_experiment));
		//DrawRadialFieldLineFit(BrCalc_vs_BrApp, BrErr_check, "checkFit", std::to_string(subruns)+" sub-runs;#LTB_{r}^{App}#GT [ppm];Calculated B_{r} [ppm]","../Images/MC/ToyRadialFieldScan/FieldFitCheck_NSUBRUN_"+std::to_string(subruns)+"_NEXP_"+std::to_string(i_experiment));
	}
	
	delete QuadGrads_vs_BrApp; delete BrCalc_vs_BrApp; delete mainFit;

	return make_tuple(Br,BrErr);

}

// ==================== MAIN, RUN EXPERIMENTS ====================

int main() {

	// Draw a TGraph of dBr versus sub-runs and CTAGS
	// Overlay residual RMS of meas-true 

	TRandom3 *rndm = new TRandom3(12345);

	double x[N_SUBRUNS];
	double zeros[N_SUBRUNS];
	double Br[N_SUBRUNS];
	double BrErr[N_SUBRUNS];
	double BrRes[N_SUBRUNS];
	double BrResErr[N_SUBRUNS];
	double BrResRMS[N_SUBRUNS];
	double BrResRMSErr[N_SUBRUNS];

	for ( int i_subrun = 0; i_subrun < N_SUBRUNS; i_subrun++ ) { 

		// Perform many experiments at that sub-run 

		//if(i_subrun != 1) continue;

		// Book histogram for each sub-run
		TH1D *hBr = new TH1D("","hBr",1000,0,20);
		TH1D *hBrErr = new TH1D("","hBrErr",240,0.4,1.6);
		TH1D *hBrRes = new TH1D("","hBrRes",240,-11,11);


		for ( int i_exp = 0; i_exp < N_EXP; i_exp++ ) {

			//if(i_exp % 100 == 0) cout << "Processed " << i_exp << " / " << N_EXP << "..." << endl;

			tuple<double, double> radialField = GetRadialField(rndm, i_exp, i_subrun);

			// Fill radial field
			hBr->Fill(get<0>(radialField));
			// Radial field uncertainty
			hBrErr->Fill(get<1>(radialField));
			// Residual
			hBrRes->Fill(get<0>(radialField) - BR_BKG);			
		
		}

		cout<<"\n********************* RESULTS *********************"<<endl;
		cout<<"SUBRUN:\t"<<ctags_sigmas_subruns.SUBRUNS[i_subrun]<<endl;
		cout<<"CTAG:\t"<<ctags_sigmas_subruns.CTAGS[i_subrun]<<endl;
		cout<<"SIGMA:\t"<<ctags_sigmas_subruns.SIGMAS[i_subrun]<<endl;
		cout<<"BR:\t"<<hBr->GetMean()<<endl;
		cout<<"DELTA BR:\t"<<hBrErr->GetMean()<<endl;
		cout<<"RESIDUAL:\t"<<hBrRes->GetMean()<<endl;
		cout<<"DELTA RESIDUAL:\t"<<hBrRes->GetMeanError()<<endl;
		cout<<"RMS OF RESIDUAL:\t"<<hBrRes->GetRMS()<<endl;
		cout<<"DELTA RMS OF RESIDUAL:\t"<<hBrRes->GetRMSError()<<endl;
		cout<<"***************************************************\n"<<endl;

		// DrawTH1(hBr,"Number of sub-runs: "+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun])+";B_{r} [ppm];Trials","../Images/MC/ToyRadialFieldScan/Br_"+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun]));
		// DrawTH1(hBrErr,"Number of sub-runs: "+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun])+";Fitted #delta#LTB_{r}^{b}#GT [ppm];Trials","../Images/MC/ToyRadialFieldScan/BrErr_"+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun]));
		// DrawTH1(hBrRes,"Number of sub-runs: "+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun])+";#LTB_{r}^{b}#GT truth residual [ppm];Trials","../Images/MC/ToyRadialFieldScan/BrRes_"+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun]));

		DrawHist(hBr,"Number of sub-runs: "+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun])+";B_{r} [ppm];Trials / "+to_string(hBr->GetBinWidth(1))+" ppm","../Images/MC/ToyRadialFieldScan/Br_"+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun]));
		DrawHist(hBrErr,"Number of sub-runs: "+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun])+";Fitted #delta#LTB_{r}^{b}#GT [ppm];Trials / "+Round(hBrErr->GetBinWidth(1),1)+" ppm","../Images/MC/ToyRadialFieldScan/BrErr_"+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun]));
		DrawHist(hBrRes,"Number of sub-runs: "+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun])+";#LTB_{r}^{b}#GT truth residual [ppm];Trials / "+Round(hBrRes->GetBinWidth(1),1)+" ppm","../Images/MC/ToyRadialFieldScan/BrRes_"+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun]));

		x[i_subrun] = ctags_sigmas_subruns.CTAGS[i_subrun];
		zeros[i_subrun] = 0;
		Br[i_subrun] = hBr->GetMean();
		BrErr[i_subrun] = hBrErr->GetMean();
		BrRes[i_subrun] = hBrRes->GetMean();
		BrResErr[i_subrun] = hBrRes->GetMeanError();
		BrResRMS[i_subrun] = hBrRes->GetRMS();
		BrResRMSErr[i_subrun] = hBrRes->GetRMSError();
		
	}

	// Average Br versus stats
	TGraphErrors *Br_vs_N = new TGraphErrors(N_SUBRUNS,x,Br,zeros,BrErr);
	// Average Br fit uncertainty versus stats
	TGraphErrors *BrErr_vs_N = new TGraphErrors(N_SUBRUNS,x,BrErr,zeros,zeros);
	// Br truth residual versus stats
	TGraphErrors *BrRes_vs_N = new TGraphErrors(N_SUBRUNS,x,BrRes,zeros,BrResErr);
	// RMS of Br truth residual versus stats
	TGraphErrors *BrResRMS_vs_N = new TGraphErrors(N_SUBRUNS,x,BrResRMS,zeros,BrResRMSErr);

	// These come from the printouts in CaloMeanPos.C
	// Needed to get the two axes to line up correctly 
	double ctag_lo = 0; double ctag_hi = 1.32464e+07;
	double subrun_lo = 0; double subrun_hi = 345;
	//subrun_lo = subrun_lo - 0.5;
	subrun_hi = subrun_hi - 0.5;
	
	Br_vs_N->GetXaxis()->SetRangeUser(ctag_lo,ctag_hi);
	BrErr_vs_N->GetXaxis()->SetRangeUser(ctag_lo,ctag_hi);
	BrRes_vs_N->GetXaxis()->SetRangeUser(ctag_lo,ctag_hi);	
	BrResRMS_vs_N->GetXaxis()->SetRangeUser(ctag_lo,ctag_hi);
	
	BrErr_vs_N->SetName("Fits");
	BrResRMS_vs_N->SetName("Truth");
	
	DrawTGraphErrorsDoubleXAxis(Br_vs_N, ";CTAGs / setting;#LTB_{r}^{b}#GT [ppm]", "Sub-runs / setting", "../Images/MC/ToyRadialFieldScan/Br_vs_N",subrun_lo,subrun_hi);
	DrawTGraphErrorsDoubleXAxis(BrErr_vs_N, ";CTAGs / setting;#LT#deltaB_{r}^{b}#GT [ppm]", "Sub-runs / setting", "../Images/MC/ToyRadialFieldScan/BrErr_vs_N",subrun_lo,subrun_hi);
	DrawTGraphErrorsDoubleXAxis(BrRes_vs_N, ";CTAGs / setting;Meas #minus true #LTB_{r}^{b}#GT [ppm]", "Sub-runs / setting","../Images/MC/ToyRadialFieldScan/BrRes_vs_N",subrun_lo,subrun_hi);
	DrawTGraphErrorsDoubleXAxis(BrResRMS_vs_N, ";CTAGs / setting;RMS of meas #minus true #LTB_{r}^{b}#GT [ppm]", "Sub-runs / setting","../Images/MC/ToyRadialFieldScan/BrResRMS_vs_N",subrun_lo,subrun_hi);

	// Overlay fit precision with RMS of truth residual
	DrawTGraphErrorsDoubleXAxisOverlay(BrErr_vs_N, BrResRMS_vs_N, "Mean fit uncertainty", "RMS of truth residual", ";CTAGs / setting;#delta#LTB_{r}^{b}#GT [ppm]", "Sub-runs / setting", "../Images/MC/ToyRadialFieldScan/BrErr_and_BrResRMS_overlay",subrun_lo,subrun_hi);

	// htmp 

	//DrawTH1(h_ymeas,";y [mm];Trials","yC0_Br30_QHV20_MC");
	//DrawTH1(h_ytrue,";y [mm];Trials","yC0_Br30_QHV20_truth");
	return 0; 

}