
#ifndef Utils_h
#define Utils_h

#include <iostream>
#include <stdio.h>
#include <math.h>

#include "TMath.h"
#include "TF1.h"
#include "TGraphErrors.h"
#include "TString.h"


// ====================== Constants ====================== 

double OMEGA_A = 0.00143934; // kHz from gm2const
double G2PERIOD = (2 * TMath::Pi() / OMEGA_A) * 1e-3; // us


// ====================== Fitting ====================== 

double SimpleSinFunc(double *x, double *par) {
  return ( par[0] * TMath::Sin(par[1] * x[0]) ) + par[2];
}


void SimpleSinFit(TGraphErrors *graph, double par1, double par2, double par3) {
  
  TF1 *func = new TF1("SimpleSinFunc", SimpleSinFunc, 0, G2PERIOD, 3);

  // Generally works if you only set par2

  //func->SetParameter(0, par1);  // Amplitude
  func->SetParameter(1, par2);  // Omega
  //func->SetParameter(2, par3);  // Vertical offset

  graph->Fit(func, "MR"); // ,"MR");
  
  std::cout << "\nChi^2/ndf...\t:" << func->GetChisquare() / func->GetNDF() << std::endl;

  return;

}

// ====================== Misc ======================

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