#include "Utils.h"
#include "FancyDraw.h"

const double delta_calc = 0.0495092; // rad
const double delta_lab = (delta_calc / GMAGIC) * 1e3; // mrad

double DilutionFunc(double *x, double *par) {
  x[0] = x[0]/PMAX;
  return  par[0] * ( (x[0]-1)*(2*x[0]+1) ) / ( 4*x[0]*x[0] - 5*x[0] -5 ) ; 
}

void DilutionFit(TGraphErrors *graph, double norm, double xmin, double xmax, bool letFloat) { // double p0, double p1, double p2, 
  
  TF1 *fnc = new TF1("DilutionFunc", DilutionFunc, xmin, xmax, 1);

  if(letFloat) fnc->FixParameter(0, norm); 
  else fnc->SetParameter(0, norm);

  graph->Fit(fnc, "R");    

  return;

}

double A1(double lambda) {
  return  (1./6) * lambda * (6 + 3*lambda - 4*lambda*lambda); 
}

double A2(double lambda) {
  return  (1./6) * lambda * (30 + 15*lambda - 8*lambda*lambda); 
}

double A3(double lambda) {
  return  (1./6) * lambda * (-6 - 3*lambda + 16*lambda*lambda); 
}

void DrawTwoTGraphErrors(TGraphErrors *gr1, TGraphErrors *gr2, std::string title, std::string fname) {

  TCanvas *c = new TCanvas("c","c",800,600);

  //gStyle->SetOptFit(11111);

  gr1->SetTitle(title.c_str());
  gr1->GetXaxis()->SetTitleSize(.04);
  gr1->GetYaxis()->SetTitleSize(.04);
  gr1->GetXaxis()->SetTitleOffset(1.1);
  gr1->GetYaxis()->SetTitleOffset(1.2);
  gr1->GetXaxis()->CenterTitle(true);
  gr1->GetYaxis()->CenterTitle(true);
  gr1->GetYaxis()->SetMaxDigits(4);
  gr1->SetMarkerStyle(20); //  Full circle

  gr2->SetMarkerStyle(20); //  Full circle
  gr2->SetMarkerColor(kBlue); //  Full circle
  gr2->SetLineColor(kBlue); //  Full circle

  gr1->Draw("AP");
  gr2->Draw("P SAME");

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}

TGraphErrors *ConvertToDilution(TGraphErrors *gr) {

  int n = gr->GetN();

  double x[n]; double ex[n]; 
  double y[n]; double ey[n];

  for(int i = 0; i<n; i++) { 

    x[i] = gr->GetX()[i]; ex[i] = 0;
    y[i] = gr->GetY()[i] / delta_lab;
    ey[i] = gr->GetEY()[i] / delta_lab;

  }

  return new TGraphErrors(n, x, y, ex, ey);

}


// For full momentum range: compare analytically predicted points to fitted values 

// Pick a momentum bin 
// Compare the (1) analytical the number oscillation and (2) analytical the vertical angle oscillation to the MC

void DilutionTest() {

 	TFile *f = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_noVertCorr_full.root");

  // Fitted amplitudes
  TGraphErrors *gr0 = ConvertToDilution((TGraphErrors*)f->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY"));
 // TGraphErrors *gr0 = (TGraphErrors*)f->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY");

  TGraphErrors *gr1 = (TGraphErrors*)gr0->Clone();

  double norm = (1. / GMAGIC) * TMath::Sin(delta_calc);
  norm = norm * 1e3; // rad --> mrad

  //norm = (1/((1. / GMAGIC) * TMath::Sin(delta_calc))

 // norm = .935;

  norm = 1.58088; // mrad
  norm = norm / delta_lab;

  // Original dilution function 
  DilutionFit(gr0, norm, 0, PMAX, false);
  DilutionFit(gr1, norm, 0, PMAX, true);

  DrawTGraphErrors(gr0, "", "../Images/FloatingDilutionFit");
  DrawTGraphErrors(gr1, "", "../Images/FixedDilutionFit");

  // Analytical amplitudes
  TGraphErrors *gr2 = new TGraphErrors(); 

  // Numerator
  TGraphErrors *gr3 = new TGraphErrors();

  // Denominator
  TGraphErrors *gr4 = new TGraphErrors(); 

  // Somehow the fitted amplitudes are composed of two parts. How do we decouple them? Could try dividing through maybe?

  // Try multiplying the fitted amplitudes by the denominator in order to see if the numberator is okay?
  TGraphErrors *gr5 = new TGraphErrors(); 
  
  // Try removing numerator
  TGraphErrors *gr6 = new TGraphErrors(); 

  // Wiggle integrals
  TGraphErrors *gr7 = new TGraphErrors(); 


  double phi = TMath::Pi() / 2; // Max tilt
  //phi = TMath::Pi(); // min tilt

  int n = gr1->GetN();
  //double x[n]; double y[n];
  int step = 250;

  for(int i(0); i<n; i++) {

    double fitted_AEDM = gr1->GetY()[i];
    double lambda = gr1->GetX()[i] / PMAX;
    double lambda_0 = (0 + step*i) / PMAX;
    double lambda_1 = (step + step*i) / PMAX;

    // Can you really integrate like this?
    double numerator = (A1(lambda_1) - A1(lambda_0)) * TMath::Sin(phi) * TMath::Sin(delta_calc);
    double denominator =  GMAGIC *  ( (A2(lambda_1) - A2(lambda_0)) + (A3(lambda_1) - A3(lambda_0)) * TMath::Cos(phi) );

    double AEDM = (numerator/denominator) * 1e3;

    // cout<<AEDM<<endl;

    gr2->SetPoint(i, lambda*PMAX, AEDM);
    gr2->SetPointError(i, 0, 0);

    gr3->SetPoint(i, lambda*PMAX, numerator * 1e3);
    gr3->SetPointError(i, 0, 0);

    gr4->SetPoint(i, lambda*PMAX, denominator);
    gr4->SetPointError(i, 0, 0);

    gr5->SetPoint(i, lambda*PMAX, fitted_AEDM*denominator);
    gr5->SetPointError(i, 0, gr1->GetEY()[i]*denominator);

    gr6->SetPoint(i, lambda*PMAX, numerator*1e3/fitted_AEDM);
    gr6->SetPointError(i, 0, 0);

    TGraphErrors *gr_wiggle = (TGraphErrors*)f->Get(("MomentumBinnedAnalysis/ModuloFits/wiggleFit_"+to_string(int(step*i))+"_"+to_string(int(step+step*i))).c_str());
    TF1 *f_wiggle = gr_wiggle->GetFunction("FiveParFunc");

    double wiggle_int = f_wiggle->Integral(0, G2PERIOD);

    gr7->SetPoint(i, lambda*PMAX, wiggle_int);
    gr7->SetPointError(i, 0, 0);


    cout<<"\t"<<wiggle_int<<endl;

  }

  DilutionFit(gr3, norm, 0, PMAX, false);

  DrawTwoTGraphErrors(gr1, gr2, ";Momentum [MeV];A_{EDM} [mrad] / 250 MeV", "../Images/DilutionTestOverlay");  

  // Seperate the numerator and denominator for bin 1000-1250 MeV

  //TGraphErrors *gr3 = (TGraphErrors*)f->Get("MomentumBinnedAnalysis/ModuloFits/wiggleFit_1000_1250");

/*  gr3->SetMarkerStyle(20);
  gr3->Draw("AP");*/

  DrawTGraphErrors(gr3, "Numerator;Momentum [MeV];", "../Images/Numerator");
  DrawTGraphErrors(gr4, "Denominator;Momentum [MeV];", "../Images/Denominator");

  DrawTwoTGraphErrors(gr5, gr3, ";Momentum [MeV];Numerator", "../Images/FittedNumerator");
  DrawTwoTGraphErrors(gr6, gr4, ";Momentum [MeV];Denominator", "../Images/FittedDenominator");

  DrawTGraphErrors(gr7, "", "../Images/WiggleInt");
  
  // Now what? 

  // I think that denominator should be the integral of the wiggle fit 
  


	return;


}