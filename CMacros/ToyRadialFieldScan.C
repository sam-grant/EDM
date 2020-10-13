// ======================================================= //
// Toy quad scan for radial field measurement


// Sam Grant -- October 2020
// ======================================================= //

// C++ includes
#include <iostream>
#include <vector>

#include "ToyRadialFieldScan.h"

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

// ==================== CALCULATE BR AND BR UNCERTAINTY ====================

// Put the measured radial field and it's uncertainty into a tuple
tuple<double, double> GetRadialField(TRandom3 *rndm, int i_experiment, int i_subrun) {

	double y_field[N_FIELD]; double ey_field[N_FIELD];
	double x_field[N_FIELD]; double ex_field[N_FIELD];

	// Vector to hold the quad scans at each field setting
	vector<TGraphErrors*> quadScans;

	// =========== Field setting loop =========== 
	for ( int i_field = 0; i_field < N_FIELD; i_field++ ) {

		double Br_tot = BR_APP[i_field]+BR_BKG;

		double y_quad[N_QHV]; double ey_quad[N_QHV];
		double x_quad[N_QHV]; double ex_quad[N_QHV];

		// =========== Quad setting loop ==========
		for ( int i_quad = 0; i_quad < N_QHV; i_quad++ ) {

			double n =  0.108/18.3 * QHV[i_quad];
			double y_true = 7112./n * Br_tot * 1e-6;
			double sigmaY = ctags_sigmas_subruns.SIGMAS[i_subrun];
			double y_meas = rndm->Gaus(y_true,sigmaY);
		
			y_quad[i_quad] = y_meas;
			ey_quad[i_quad] = sigmaY;
			x_quad[i_quad] = QHV[i_quad];
			ex_quad[i_quad] = 0;

		}

		TGraphErrors *quadScan = new TGraphErrors(N_QHV,x_quad,y_quad,ex_quad,ey_quad);
		quadScan->SetName((std::to_string(BR_APP[i_field])+" ppm").c_str());

		// Fit
		TF1 *quadLineFit = new TF1("quadLineFit", "[0]+[1]*x");
		quadScan->Fit(quadLineFit,"QM");

		// Push them into the vector
		quadScans.push_back(quadScan);
				
		x_field[i_field] = BR_APP[i_field];
		ex_field[i_field] = 0;
		y_field[i_field] = quadLineFit->GetParameter(1);
		ey_field[i_field] = quadLineFit->GetParError(1);

		//delete quadLineFit; 

	} 
	
	TGraphErrors *BrCalc_vs_BrApp = new TGraphErrors(N_FIELD,x_field,y_field,ex_field,ey_field);

	TF1 *mainFit = new TF1("mainFit", "[0]+[1]*x");
	TFitResultPtr mainFitRes = BrCalc_vs_BrApp->Fit(mainFit,"SMQ");

	double p0 = mainFit->GetParameter(0); double p0_err = mainFit->GetParError(0);
    double p1 = mainFit->GetParameter(1); double p1_err = mainFit->GetParError(1);

	double Br = fabs(p0/p1);
	// From Taylor 9.9
	double BrErr = fabs(Br) * sqrt(pow(p0_err/p0,2) + pow(p1_err/p1,2) - 2*mainFitRes->GetCovarianceMatrix()(0,1)/(p0*p1));

		// Only draw the plots once 
	if(i_experiment==0) { 
		DrawQuadScanFits(quadScans, &BR_APP[N_FIELD], "quadLineFit", ";QHV [kV];#LTy#GT [mm]", "../Images/MC/ToyRadialFieldScan/QuadScans_NSUBRUN_"+std::to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun])+"_NEXP_"+std::to_string(i_experiment),-2.5,3.5);
		DrawRadialFieldLineFit(BrCalc_vs_BrApp, BrErr, "mainFit", "Sub-runs "+std::to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun])+";Applied B_{r} [ppm];#LTy#GT / QHV [mm/kV]","../Images/MC/ToyRadialFieldScan/FieldFit_NSUBRUN_"+std::to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun])+"_NEXP_"+std::to_string(i_experiment));
	}
	
	delete BrCalc_vs_BrApp; delete mainFit;

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

		// Book histogram for each sub-run
		TH1D *hBr = new TH1D("","hBr",1000,0,20);
		TH1D *hBrErr = new TH1D("","hBrErr",1000,0,4);
		TH1D *hBrRes = new TH1D("","hBrRes",1000,-10,10);


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

		DrawTH1(hBr,"Number of sub-runs: "+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun])+";B_{r} [ppm];Experiments","../Images/MC/ToyRadialFieldScan/Test/Br_"+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun]));
		DrawTH1(hBrErr,"Number of sub-runs: "+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun])+";#deltaB_{r} [ppm];Experiments","../Images/MC/ToyRadialFieldScan/Test/BrErr_"+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun]));
		DrawTH1(hBrRes,"Number of sub-runs: "+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun])+";Meas #minus background B_{r} [ppm];Experiments","../Images/MC/ToyRadialFieldScan/Test/BrRes_"+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun]));

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

	// They come from the printouts in CaloMeanPos.C
	double ctag_lo = 517845; double ctag_hi = 1.32464e+07;
	double subrun_lo = 13.5; double subrun_hi = 344.5;
	
	Br_vs_N->GetXaxis()->SetRangeUser(ctag_lo,ctag_hi);
	BrErr_vs_N->GetXaxis()->SetRangeUser(ctag_lo,ctag_hi);
	BrRes_vs_N->GetXaxis()->SetRangeUser(ctag_lo,ctag_hi);	
	BrResRMS_vs_N->GetXaxis()->SetRangeUser(ctag_lo,ctag_hi);
	

	BrErr_vs_N->SetName("Fits");
	BrResRMS_vs_N->SetName("Truth");
	
	DrawTGraphErrorsDoubleXAxis(Br_vs_N, ";CTAGs;B_{r} [ppm]", "Sub-runs", "../Images/MC/ToyRadialFieldScan/Br_vs_N",subrun_lo,subrun_hi);
	DrawTGraphErrorsDoubleXAxis(BrErr_vs_N, ";CTAGs;#deltaB_{r} [ppm]", "Sub-runs", "../Images/MC/ToyRadialFieldScan/BrErr_vs_N",subrun_lo,subrun_hi);
	DrawTGraphErrorsDoubleXAxis(BrRes_vs_N, ";CTAGs;Meas #minus true B_{r} [ppm]", "Sub-runs","../Images/MC/ToyRadialFieldScan/BrRes_vs_N",subrun_lo,subrun_hi);
	DrawTGraphErrorsDoubleXAxis(BrResRMS_vs_N, ";CTAGs;RMS of meas #minus true B_{r} [ppm]", "Sub-runs","../Images/MC/ToyRadialFieldScan/BrResRMS_vs_N",subrun_lo,subrun_hi);

	// Overlay fit precision with RMS of truth residual
	DrawTGraphErrorsDoubleXAxisOverlay(BrErr_vs_N, BrResRMS_vs_N, "Fits", "Truth", ";CTAGs;#deltaB_{r} [ppm]", "Sub-runs", "../Images/MC/ToyRadialFieldScan/BrErr_and_BrResRMS_overlay",subrun_lo,subrun_hi);

	return 0; 

}