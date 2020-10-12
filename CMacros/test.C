// ======================================================= //
// Toy quad scan for radial field measurement


// Sam Grant -- October 2020
// ======================================================= //

// C++ includes
#include <iostream>
#include <vector>

#include "ToyRadialFieldScan.h"

using namespace std;

// Put the measured radial field and it's uncertainty into a tuple
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
		// If you add the two fields together, you get a negative radial field out?
		double Br_tot = BR_APP[i_field]+BR_BKG;

		// Average vertical position
		double y[N_QHV];
		double ey[N_QHV];
		double x[N_QHV];
		double ex[N_QHV];

		// =========== Quad setting loop ==========
		for ( int i_quad = 0; i_quad < N_QHV; i_quad++ ) {

			double yPos =  yPosition( Br_tot, QHV[i_quad]);
		
			// Smear y, ensure that it's properly random smearing with a unique seed 
			int seed = i_experiment*i_subrun*i_field*i_quad;
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
		DrawQuadScanFits(QuadScans, "quadLineFit", ";QHV [kV];#LTy#GT [mm]", "../Images/MC/ToyRadialFieldScan/QuadScans_NSUBRUN_"+std::to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun])+"_NEXP_"+std::to_string(i_experiment),-2.5,3.5);
		DrawRadialFieldLineFit(quadGrads_vs_BrApp,"fieldLineFit", "Sub-runs "+std::to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun])+";Applied B_{r} [ppm];#LTy#GT / QHV [mm/kV]","../Images/MC/ToyRadialFieldScan/FieldFit_NSUBRUN_"+std::to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun])+"_NEXP_"+std::to_string(i_experiment));
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
	double ey_BrRes[N_SUBRUNS];
	double y_BrResRMS[N_SUBRUNS];
	double ey_BrResRMS[N_SUBRUNS];

	for ( int i_subrun = 0; i_subrun < N_SUBRUNS; i_subrun++ ) { 
	//int i_subrun = 1;
		// Perform many experiments at that sub-run 
		// Meas - true Br
		


		// Book histogram for each sub-run
		TH1D *Br = new TH1D("","dBr",1000,0,20);
		TH1D *dBr = new TH1D("","dBr",1000,0,4);
		TH1D *dBr_res = new TH1D("","dBr_res",1000,-10,10);


		for ( int i_exp = 0; i_exp < N_EXP; i_exp++ ) {

			//if(i_exp % 100 == 0) cout << "Processed " << i_exp << " / " << N_EXP << "..." << endl;

			tuple<double, double> radialField = GetRadialField(i_exp, i_subrun);

			// Residual
			//cout<<"Br meas\t:"<<get<0>(radialField)<<endl;
			//cout<<"Br bkg\t:"<<BR_BKG<<endl;

			// Fill radial field
			Br->Fill(get<0>(radialField));
			// Radial field uncertainty
			dBr->Fill(get<1>(radialField));
			// Residual
			dBr_res->Fill(get<0>(radialField) - BR_BKG);
			
			//cout<<"\nFit uncertainty:\t"<<abs(get<1>(radialField))<<endl;
			//cout<<"Meas - true:\t"<<get<0>(radialField) - BR_BKG<<endl;
			
		
		}

		cout<<"\n********************* RESULTS *********************"<<endl;
		cout<<"SUBRUN:\t"<<ctags_sigmas_subruns.SUBRUNS[i_subrun]<<endl;
		cout<<"CTAG:\t"<<ctags_sigmas_subruns.CTAGS[i_subrun]<<endl;
		cout<<"SIGMA:\t"<<ctags_sigmas_subruns.SIGMAS[i_subrun]<<endl;
		cout<<"BR:\t"<<Br->GetMean()<<endl;
		cout<<"DELTA BR:\t"<<dBr->GetMean()<<endl;
		cout<<"RESIDUAL:\t"<<dBr_res->GetMean()<<endl;
		cout<<"RMS OF RESIDUAL:\t"<<dBr_res->GetRMS()<<endl;
		cout<<"***************************************************\n"<<endl;

		DrawTH1(Br,"Number of sub-runs: "+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun])+";B_{r} [ppm];Experiments","../Images/MC/ToyRadialFieldScan/Br_"+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun]));
		DrawTH1(dBr,"Number of sub-runs: "+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun])+";#deltaB_{r} [ppm];Experiments","../Images/MC/ToyRadialFieldScan/dBr_"+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun]));
		DrawTH1(dBr_res,"Number of sub-runs: "+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun])+";Meas #minus background B_{r} [ppm];Experiments","../Images/MC/ToyRadialFieldScan/resBr_"+to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun]));

		x_ctag[i_subrun] = ctags_sigmas_subruns.CTAGS[i_subrun];
		x_subrun[i_subrun] = ctags_sigmas_subruns.SUBRUNS[i_subrun];
		zeros[i_subrun] = 0;
		y_dBr[i_subrun] = dBr->GetMean();
		ey_dBr[i_subrun] = dBr->GetMeanError();
		y_BrRes[i_subrun] = dBr_res->GetMean();
		ey_BrRes[i_subrun] = dBr_res->GetMeanError();
		y_BrResRMS[i_subrun] = dBr_res->GetRMS();
		ey_BrResRMS[i_subrun] = dBr_res->GetRMSError();
		// Get residual
		//double res = abs(dBr->GetMean() - BR_RES);
		
	}

	TGraphErrors *dBr_vs_N_ctag = new TGraphErrors(N_SUBRUNS,x_ctag,y_dBr,zeros,ey_dBr);
	TGraphErrors *dBr_vs_N_subrun = new TGraphErrors(N_SUBRUNS,x_subrun,y_dBr,zeros,ey_dBr);
	TGraphErrors *BrRes_vs_N_ctag = new TGraphErrors(N_SUBRUNS,x_ctag,y_BrRes,zeros,ey_BrRes);
	TGraphErrors *BrResRMS_vs_N_ctag = new TGraphErrors(N_SUBRUNS,x_ctag,y_BrResRMS,zeros,ey_BrResRMS);
	// TEST AREA
	//BrRes_vs_N_ctag->Fit("pol1");

	//TCanvas *c = new TCanvas("","",800,600);
	//BrResRMS_vs_N_ctag->Draw("AP");
	//BrResRMS_vs_N_ctag->


	//DrawTH1(dBr_res,";;Experiments")


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










