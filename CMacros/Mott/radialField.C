// Here, I'm assuming <y> = R0/n * Br

#include "TStyle.h"
#include "TF1.h"
#include "TH1F.h"
#include "TGraphErrors.h"
#include "TCanvas.h"
#include "TRandom3.h"
#include "TFitResult.h"

void radialField(){

  // Setup some parameters
  double Br_true = 8; // ppm - this is what we're going to try and measure

  // HV and applied BR params
  const int nHV = 2;
  double HVSettings[nHV] = {16, 20};
  const int nBR = 4;
  double BRSettings[nBR] = {-30, -10, 10, 30};

  // Calculate n from HV setting
  double nSettings[nHV];
  for(int iHV = 0; iHV < nHV; iHV++){
    nSettings[iHV] = 0.108/18.3 * HVSettings[iHV];  // Convert from 60h/EG values
  }

  // Uncertainty on each y-measurement (sum of all 24 calorimeters)
  double sigmaY = 0.0247454; // From Sam's array for ~50 sub-runs

  // Histograms to store the result (fit - true residual and fit error)
  TH1D* hFitRes = new TH1D("hFitRes", ";Fit - True B_r [ppm]", 1000, -10, 10);
  TH1D* hFitErr = new TH1D("hFitErr", ";Fit Uncertainty [ppm]", 1000, 0, 4);
  
  // Do many trials of the experiment
  TRandom3* rng = new TRandom3(12345);
  int nTrials = 1000;// 000;
  for(int iTrial = 0; iTrial < nTrials; iTrial++){

    if(iTrial % 10000 == 0) cout << "Processed " << iTrial << " / " << nTrials << "..." << endl;
    
    // Each trial, we apply our set of BRs and store in graph
    TGraphErrors* BrCalc_vs_BrApp = new TGraphErrors();
    for(int iBR = 0; iBR < nBR; iBR++){
      
      double BR_tot = Br_true + BRSettings[iBR];

      // And look at change in height with different HV settings      
      double yMeas[nHV];
      for(int iHV = 0; iHV < nHV; iHV++){
	double y_true = 7112./nSettings[iHV] * BR_tot * 1e-6;
	yMeas[iHV] = rng->Gaus(y_true,sigmaY);
      }

      // Set point in plot
      double calcGrad = 7112 * (1./nSettings[1] - 1./nSettings[0]) * 1e-6; // ppm 
      double measDiff = yMeas[1]-yMeas[0];
      BrCalc_vs_BrApp->SetPoint(BrCalc_vs_BrApp->GetN(), BRSettings[iBR], measDiff/calcGrad);
      BrCalc_vs_BrApp->SetPointError(BrCalc_vs_BrApp->GetN()-1, 0, fabs(sqrt(2)*sigmaY/calcGrad));
    }

    // Fit the data with a straight line
    TF1* fit = new TF1("fit","[0]+[1]*x",-50,50);
    //    BrCalc_vs_BrApp->Draw("ap");
    TFitResultPtr fitRes = BrCalc_vs_BrApp->Fit(fit,"SNQ");

    // Now find the point where the beam didn't move (i.e. when y = 0 so x = -[0]/[1])
    // This is the value that matches Br_true, so we want to take the opposite sign
    double p0 = fit->GetParameter(0); double p0_err = fit->GetParError(0);
    double p1 = fit->GetParameter(1); double p1_err = fit->GetParError(1);
    double Br_fit = p0/p1;

    // Get error on this point.  If we centre the data around x = 0, then the covariance between parameters is 0 so last term
    // does nothing.  I include it here in case we ever shift the data and introduce a correlation
    double Br_fit_err = fabs(Br_fit) * sqrt(pow(p0_err/p0,2) + pow(p1_err/p1,2) - 2*fitRes->GetCovarianceMatrix()(0,1)/(p0*p1));

    // Fill histograms with these points
    hFitRes->Fill(Br_fit-Br_true);
    hFitErr->Fill(Br_fit_err);
    
    delete fit;
    delete BrCalc_vs_BrApp;
    
  }

  // Draw plots
  gStyle->SetOptStat(1112210);

  TCanvas* cFitRes = new TCanvas("cFitRes","cFitRes");
  hFitRes->Draw();
  cFitRes->SaveAs("FitRes.png");

  TCanvas* cFitErr = new TCanvas("cFitErr","cFitErr");
  hFitErr->Draw();
  cFitErr->SaveAs("FitResErr.png");

  
   
}
