// Just do one sigma setting

// Directly compare methods for calculating results between James and I

// ROOT includes
#include "TFile.h"
#include "TH1.h"
#include "TGraphErrors.h"
#include "TLegend.h"
#include "TRandom3.h"
#include "TFitResult.h"
#include "TMatrixD.h"
#include "TStyle.h"
#include "TF1.h"
#include "TH1F.h"

void Grant_vs_Mott(){

	// Params consistent between Grant and Mott
	const int N_QHV = 2;
	const int N_FIELD = 4;
	const double BR_BKG = 8; // ppm, the size of the field that would kill our measurement
	const double QHV[N_QHV] = {16, 20}; // Two quad settings, kV
	const double BR_APP[N_FIELD] = {-30, -10, 10, 30}; // Applied radial field, ppm
	const double SIGMA = 0.0207403;

  // Calculate n from HV setting

  // Consistent between Grant & Mott
  double nSettings[N_QHV];
  
  for(int iHV = 0; iHV < N_QHV; iHV++){
    nSettings[iHV] = 0.108/18.3 * QHV[iHV];  // Convert from 60h/EG values
  }

  // Histograms to store the result (fit - true residual and fit error)
  TH1D* hFitRes_Grant = new TH1D("hFitRes_Grant", "Grant;Fit - True B_r [ppm]", 1000, -10, 10);
  TH1D* hFitErr_Grant = new TH1D("hFitErr_Grant", "Grant;Fit Uncertainty [ppm]", 1000, 0, 4);

  TH1D* hFitRes_Mott = new TH1D("hFitRes_Mott", "Mott;Fit - True B_r [ppm]", 1000, -10, 10);
  TH1D* hFitErr_Mott = new TH1D("hFitErr_Mott", "Mott;Fit Uncertainty [ppm]", 1000, 0, 4);

  // Do many trials of the experiment
  TRandom3* rndm = new TRandom3(12345);

  int nTrials = 1;//000; 
  
  // Just do the one trial for easy comparison
  for(int iTrial = 0; iTrial < nTrials; iTrial++){

    if(iTrial % 10000 == 0) cout << "Processed " << iTrial << " / " << nTrials << "..." << endl;

  	// Each trial, we apply our set of BRs and store in graph
  	// Br calc versus Br app, aka quad grad versus br app

    // Br calc versus Br app
    double x1[N_FIELD]; double ex1[N_FIELD];
    double y1_Grant[N_FIELD]; double ey1_Grant[N_FIELD];
    double y1_Mott[N_FIELD]; double ey1_Mott[N_FIELD];

    for(int iBR = 0; iBR < N_FIELD; iBR++) { 

      //cout<<"Field setting:\t"<<BR_APP[iBR]<<endl;

    	// Quad scan
      double x2[N_QHV]; double ex2[N_QHV];
    	double y2[N_QHV]; double ey2[N_QHV];

    	double BR_tot = BR_BKG + BR_APP[iBR];

    	// And look at change in height with different HV settings      
      double yMeas[N_QHV];


      for(int iHV = 0; iHV < N_QHV; iHV++) {

		    //cout<<"Quad setting:\t"<<QHV[iBR]<<endl;

		    // All this is consistent between Grant & Mott
        double y_true = 7112./nSettings[iHV] * BR_tot * 1e-6;
        double y_meas = rndm->Gaus(y_true,SIGMA);

        x2[iHV] = QHV[iHV];
        ex2[iHV] = 0;
        y2[iHV] = y_meas;
        ey2[iHV] = SIGMA;

        cout<<"y_true\t"<<y_true<<endl;
        cout<<"y_meas\t"<<y_meas<<endl;

      } // Quad settings

      TGraphErrors *quadScan = new TGraphErrors(N_QHV,x2,y2,ex2,ey2);

      // Grant method
      TF1 *quadLineFit = new TF1("quadLineFit", "[0]+[1]*x");
      quadScan->Fit(quadLineFit,"QM");

      // Mott method
      double calcGrad = 7112 * (1./nSettings[1] - 1./nSettings[0]) * 1e-6; // ppm 
      double measDiff = y2[1]-y2[0];

      //cout<<"\n\n******************** Quad scan results ********************"<<endl;
      //cout<<"Grant gradient:\t"<<quadLineFit->GetParameter(1)<<endl;
      //cout<<"Mott gradient:\t"<<measDiff/calcGrad<<endl;

      x1[iBR] = BR_APP[iBR];
      ex1[iBR] = 0;
      y1_Grant[iBR] = quadLineFit->GetParameter(1);
      ey1_Grant[iBR] = quadLineFit->GetParError(1);
      y1_Mott[iBR] = measDiff/calcGrad;
      ey1_Mott[iBR] = fabs(sqrt(2)*SIGMA/calcGrad);


    } // Field settings

    // Br calc vs Br app
    TGraphErrors *BrCalc_vs_BrApp_Grant =  new TGraphErrors(N_FIELD,x1,y1_Grant,ex1,ey1_Grant);
    TGraphErrors *BrCalc_vs_BrApp_Mott =  new TGraphErrors(N_FIELD,x1,y1_Mott,ex1,ey1_Mott);

    // Draw quad scans from the first trial
    if(iTrial == 0) {
      // Grant
      TCanvas* cBrCalc_vs_BrApp_Grant = new TCanvas("cBrCalc_vs_BrApp_Grant","cBrCalc_vs_BrApp_Grant",800,600);
      BrCalc_vs_BrApp_Grant->SetTitle("Grant;Applied B_{r} [ppm];#LTy#GT / QHV [mm/kV]");
      BrCalc_vs_BrApp_Grant->Draw("AP");
      cBrCalc_vs_BrApp_Grant->SaveAs("BrCalc_vs_BrApp_Grant.png");
      // Mott
      TCanvas* cBrCalc_vs_BrApp_Mott = new TCanvas("cBrCalc_vs_BrApp_Mott","cBrCalc_vs_BrApp_Mott",800,600);
      BrCalc_vs_BrApp_Mott->SetTitle("Mott;Applied B_{r} [ppm];#LTy#GT / QHV [mm/kV]");
      BrCalc_vs_BrApp_Mott->Draw("AP");
      cBrCalc_vs_BrApp_Mott->SaveAs("BrCalc_vs_BrApp_Mott.png");
    }

    // Now fit

    TF1* fit_Grant = new TF1("fit_Grant","[0]+[1]*x");//,-50,50);
    TFitResultPtr fitRes_Grant = BrCalc_vs_BrApp_Grant->Fit(fit_Grant,"SMQ");
    TF1* fit_Mott = new TF1("fit_Mott","[0]+[1]*x",-50,50);
    TFitResultPtr fitRes_Mott = BrCalc_vs_BrApp_Mott->Fit(fit_Mott,"SNQ");

    // Grant fit results
    double p0_Grant = fit_Grant->GetParameter(0); double p0_err_Grant = fit_Grant->GetParError(0);
    double p1_Grant = fit_Grant->GetParameter(1); double p1_err_Grant = fit_Grant->GetParError(1);
    double Br_Grant = p0_Grant/p1_Grant;
    // Just did this so it's exactly as I do it in main code
    TMatrixDSym V = fitRes_Grant->GetCovarianceMatrix();
    double cov = V[0][1];
    double Br_err_Grant = fabs(Br_Grant) * sqrt(pow(p0_err_Grant/p0_Grant,2) + pow(p1_err_Grant/p1_Grant,2) - (2*cov)/(p0_Grant*p1_Grant));

    // Mott fit results
    double p0_Mott = fit_Mott->GetParameter(0); double p0_err_Mott = fit_Mott->GetParError(0);
    double p1_Mott = fit_Mott->GetParameter(1); double p1_err_Mott = fit_Mott->GetParError(1);
    double Br_Mott = p0_Mott/p1_Mott;
    double Br_err_Mott = fabs(Br_Mott) * sqrt(pow(p0_err_Mott/p0_Mott,2) + pow(p1_err_Mott/p1_Mott,2) - 2*fitRes_Mott->GetCovarianceMatrix()(0,1)/(p0_Mott*p1_Mott));

    if(iTrial < 10) {

      cout<<"\n\n******************** Results from trial "<<iTrial<<" ********************"<<endl;
      cout<<"Grant Br:\t"<<Br_Grant<<"+/-"<<Br_err_Grant<<" ppm"<<endl;
      cout<<"Mott Br:\t"<<Br_Mott<<"+/-"<<Br_err_Mott<<" ppm"<<endl;
    
    }

    // Fill histograms 
    hFitRes_Grant->Fill(Br_Grant-BR_BKG);
    hFitErr_Grant->Fill(Br_err_Grant);

    hFitRes_Mott->Fill(Br_Mott-BR_BKG);
    hFitErr_Mott->Fill(Br_err_Mott);

    // delete fit_Grant; delete fit_Mott;
    // delete BrCalc_vs_BrApp_Grant; delete BrCalc_vs_BrApp_Mott;


  } // Trials

  // Draw plots
  gStyle->SetOptStat(1112210);

	// Grant
  TCanvas* cFitRes_Grant = new TCanvas("cFitRes_Grant","cFitRes_Grant");
  hFitRes_Grant->Draw();
  cFitRes_Grant->SaveAs("FitRes_Grant.png");

  TCanvas* cFitErr_Grant = new TCanvas("cFitErr_Grant","cFitErr_Grant");
  hFitErr_Grant->Draw();
  cFitErr_Grant->SaveAs("FitResErr_Grant.png");

	// Mott
  TCanvas* cFitRes_Mott = new TCanvas("cFitRes_Mott","cFitRes_Mott");
  hFitRes_Mott->Draw();
  cFitRes_Mott->SaveAs("FitRes_Mott.png");

  TCanvas* cFitErr_Mott = new TCanvas("cFitErr_Mott","cFitErr_Mott");
  hFitErr_Mott->Draw();
  cFitErr_Mott->SaveAs("FitResErr_Mott.png");

} // void


