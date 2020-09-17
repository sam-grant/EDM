
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

double OMEGA_A = 0.00143934; // kHz
double G2PERIOD = (2 * TMath::Pi() / OMEGA_A) * 1e-3; // us


// ====================== Fitting ====================== 


// ====================== Misc ======================


// Quite proud of this
TString SciNotation(double num) { 

	TString text;
	text = Form("%5.3g", num);
	text.ReplaceAll("e+0","#times10^{");
	if(abs(num)>10) text.Append("}");

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