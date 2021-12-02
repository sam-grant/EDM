
#ifndef Utils_h
#define Utils_h

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>
#include <sstream>

#include "RootInclude.h"


// ====================== Constants ====================== 

double OMEGA_A = 0.00143934; // kHz from gm2const
double G2PERIOD = (2 * TMath::Pi() / OMEGA_A) * 1e-3; // us

// ====================== Fitting ====================== 

// Need to keep these in a header so it's consitent across mulitple macros

double SimpleSinFunc(double *x, double *par) {
  return ( par[0] * TMath::Sin(par[1] * x[0]) ) + par[2];
}


void SimpleSinFit(TGraphErrors *graph, double par1, double par2, double par3) {
  
  TF1 *func = new TF1("SimpleSinFunc", SimpleSinFunc, 0, G2PERIOD, 3);

  // Put 10% limits on omega_a
  // func->SetParLimits(1, par2-(par2*0.10), par2+(par2*0.10));  // Omega
  func->SetParameter(0, par1);
  func->SetParameter(1, par2);
  func->FixParameter(1, par2);  // Omega
  func->SetParameter(2, par3);

  graph->Fit(func, "MR"); // ,"MR");

  return;

}

double FiveParFunc(double *x, double *par) {
  return par[0] * exp(-x[0]/par[1]) * (1 - (par[2] * cos((par[3] * x[0]) + par[4])));
}


void FitFivePar(TGraphErrors *graph, double par0, double par1, double par2, double par3, double par4, double min, double max) {
  
  TF1 *func = new TF1("FiveParFunc", FiveParFunc, min, max, 5);

  func->SetParameter(0, par0); // N0
  func->SetParameter(1, par1); // tau
  func->SetParameter(2, par2); // A
  func->FixParameter(3, par3); // Omega
  //func->SetParameter(4, par4);
    //func->SetParLimits(4, -TMath::Pi(), TMath::Pi());

    func->SetNpx(1e3);

    graph->Fit(func, "QMR"); // ,"MR");

    //std::cout << "\nChi^2/ndf...\t:" << func->GetChisquare() / func->GetNDF() << std::endl;

    return;

}

double BzFunc(double *x, double *par) {
  return  (par[0] * cos((par[1]*x[0]) + par[2])) + (par[3] * sin((par[4]*x[0]) + par[5])) + par[6]; 
}

void FitBz(TGraphErrors *graph, double par0, double par1, double par2, double par3, double par4, double par5, double par6, double min, double max) {

  TF1 *func = new TF1("BzFunc", BzFunc, min, max, 7);

  // A_Bz
  func->SetParameter(0, par0);
  func->SetParameter(1, par1); func->FixParameter(1, par1);
  func->FixParameter(2, par2); // phi
  func->SetParameter(3, 0); // A_EDM
  func->FixParameter(4, par4); // omega_a
  func->FixParameter(5, par5); // phi
  func->SetParameter(6, par6); // C

  graph->Fit(func, "QMR"); 

  return;
}

// ====================== Plotting ======================


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

TGraphErrors *GenerateTGraphErrors(std::vector<double> x_, std::vector<double> y_, std::vector<double> ex_, std::vector<double> ey_) {

  int n = x_.size();
  double x[n]; double ex[n];
  double y[n]; double ey[n];

  for(int i = 0; i < n; i++) {
    x[i] = x_.at(i); ex[i] = ex_.at(i);
    y[i] = y_.at(i); ey[i] = ey_.at(i);
  }

  return new TGraphErrors(n, x, y, ex, ey);

}


// ====================== Misc ======================


TString Round(double N, double n) { 
  std::stringstream roundedValue;
  roundedValue.precision(n);
  roundedValue << N << std::endl;
  return roundedValue.str();

}

TString OneSigFig(double num) { 
  return Form("%5.1g", num);
}

TString ThreeSigFig(double num) { 
  return Form("%5.3g", num);
}

TString SciNotation(double num) { 
	TString text;
	text = ThreeSigFig(num);
  text.ReplaceAll("e+0","#times10^{");
  text.ReplaceAll("e-0","#times10^{#minus");
  text.ReplaceAll("e+","#times10^{");
  text.ReplaceAll("e-","#times10^{#minus");
	if(abs(num)>10 || abs(num)<0.1) text.Append("}");
	return text;
}

TString FormatNegativeNumber(double num) { 
  TString text;
  text = ThreeSigFig(num);
  if(num>=0) {
    //std::cout<<"This number is positive..."<<std::endl;
    return text;
  } else {
    text.ReplaceAll("-","#minus");
  }
  return text;
}







/*
float RoundToThreeSigFig(float var) { 
    // 37.66666 * 100 =3766.66 
    // 3766.66 + .5 =3767.16    for rounding off value 
    // then type cast to int so value is 3767 
    // then divided by 100 so the value converted into 37.67 
    float value = (int)(var * 100 + .5); 
    return (float)value / 100; 
}*/ 

/*
void SciNotation(double num) {

	//num = RoundToThreeSigFig(num);

   int exponent  = (int)floor(log10( fabs(num)));  // This will round down the exponent
   double base   = num * pow(10, -1.0*exponent);

   printf("%13.9lfE%+01d", base, exponent);

   return;

   // if(abs(exponent)<10) 
   // else	return printf("%12.9lfE%+01d", base, exponent);
}*/


//# Define function for string formatting of scientific notation
//def sci_notation(num, decimal_digits=2, precision=None, exponent=None, mat=False):
//    """
//    Author: sodd 
//    https://stackoverflow.com/questions/18311909/how-do-i-annotate-with-power-of-ten-formatting
//
//    Returns a string representation of the scientific
//    notation of the given number formatted for use with
//    LaTeX or Mathtext, with specified number of significant
//    decimal digits and precision (number of decimal digits
//    to show). The exponent to be used can also be specified
//    explicitly.
//    """
//    if exponent is None:
//        exponent = int(floor(log10(abs(num))))
//    coeff = round(num / float(10**exponent), decimal_digits)
//    if precision is None:
//        precision = decimal_digits
//
//    
//    if(mat==False): return "${0:.{2}f}\times10^{{{1:d}}}$".format(coeff, exponent, precision)
//    if(mat==True):  return "${0:.{2}f}\times10^{{{1:d}}}$".format(coeff, exponent, precision)

#endif