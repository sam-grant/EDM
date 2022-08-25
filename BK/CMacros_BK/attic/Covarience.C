// Example fit using ROOT with a simple 
// Polynomial of dimension nDim to a TGraph Object
//
#include <cmath>
#include <cstdlib>
#include <iostream>

#include <TMath.h>
#include <TStyle.h>
#include <TF1.h>
#include <TH1.h>
#include <TGraphErrors.h>
#include <TMinuit.h>
#include <TVirtualFitter.h>
#include <TMatrixDSym.h>
#include <TFitResultPtr.h>
#include <TCanvas.h>
#include <TFitResult.h>

using namespace std;

const int nDim = 4; // dimension of the Polynomial, set global   

double myFunc (double* xval, double* par);
void myFit() {

//set default to Minuit since we will use gMinuit
TVirtualFitter::SetDefaultFitter("Minuit2");

// data to be fit by a polynomial
const int nP =  10 ; // Number of data points
double xData[nP]  = {1.  ,2.  ,3.  ,4.  ,5.  ,6.  ,7.  , 8. ,9.  , 10. };
double yData[nP]  = {1.1 ,2.3 ,2.7 ,3.2 ,3.1 ,2.4 ,1.7 ,1.5 ,1.5  ,1.7};
double dyData[nP] = {0.15,0.22,0.29,0.39,0.31,0.21,0.13,0.15,0.19,0.13 };
 double dxData[nP] = {0.1,0.1,0.5,0.1,0.5,0.1,0.5,0.1,0.5,0.1};
// get range
double xRmin = xData[0]-1.0;
double xRmax = xData[nP-1]+1.0; 

double yRmin = yData[0];
for (int l=0;l<nP;l++) 
     if (yData[l] <= yRmin)  yRmin = yData[l];
double yRmax = yData[0];
for (int l=0;l<nP;l++) 
     if (yData[l] >= yRmax)  yRmax = yData[l];
yRmin =  yRmin - 1.0;
yRmax =  yRmax + 1.0;

// Create TGraph
TGraphErrors* Graph = new TGraphErrors(nP, xData, yData, dxData, dyData);
// Create Function
TF1* f = new TF1("f",myFunc,xRmin,xRmax,nDim);
// Fit with various options, see transparencies
// TFitResultPtr fp = Graph->Fit(f, " M EX0 S"); 
// "EX0" ignores the x errors given in the graph
TFitResultPtr fp = Graph->Fit(f, " M E S"); 
// Get fit results
double chi2 = f->GetChisquare();
int ndof = f->GetNDF();
double prob = TMath::Prob(chi2, ndof);
cout << "chi2 = " << chi2 << " for " << ndof << " degrees of freedom" << endl;
cout << "p-value = " << prob << endl;
cout << "fit parameter number, value, error..." << endl;
double Val[nDim];
double sigmaVal[nDim];
for (int i=0; i<nDim; i++){
    Val[i] = f->GetParameter(i);
    sigmaVal[i] = f->GetParError(i);
    cout << i << "  " << Val[i] << " +- " << sigmaVal[i] << endl;
}
cout << endl;
// get covariance matrix
TMatrixDSym V = fp->GetCovarianceMatrix();
TMatrixDSym Vinv(V);  // initialize Vinv with V
Vinv.Invert();           
for (int i=0; i<nDim; i++){
   for (int j=0; j<nDim; j++){
     cout << i << "  " << j << "  " << V[i][j] ;
   }
   cout << endl;
}
cout << endl;

// Get confidence intervals
//
// create graph for confidence interval 
TGraphErrors *GraphConf = new TGraphErrors(nP);
GraphConf->SetTitle("Fit Polynomial with .95 confidence;x;f(x)");
for (int i=0; i<nP; i++)
      GraphConf->SetPoint(i, Graph->GetX()[i], 0);
//Compute the confidence intervals at the x points of the created graph
(TVirtualFitter::GetFitter())->GetConfidenceIntervals(GraphConf);
//Now the "GraphConf" graph contains function values as its y-coordinates
//and confidence intervals as the errors on these coordinates
 
// Draw function, fit result and confidence intervals
TCanvas* c = new TCanvas("c", "canvas", 100, 100, 800, 800);
c->cd(1);
// this removes the output from the fit
//gStyle->SetOptFit(0); 

// Draw the confidence interval first
GraphConf->SetLineColor(kBlue);
GraphConf->Draw("AP");
// Draw data 
// set marker color and shape
Graph->SetMarkerColor(kRed);
Graph->SetMarkerStyle(21);
Graph->Draw("P SAME");
// Draw function with fitresult 
f->SetLineColor(kBlue);
f->Draw("same");
// set scale 
Graph->GetXaxis()->SetLimits(0.,12.); 
Graph->GetYaxis()->SetLimits(0.,4.);
// update Canvas 
c->Modified();
c->Update(); 

// contours in 2 dimensions
TCanvas *c2 = new TCanvas("c2","contours",10,10,600,800);
c2->Divide(1,2);
c2->cd(1);
/*get first (1 sigma) contour for parameter 0 versus parameter 1*/
TGraph *gr01 = (TGraph*)gMinuit->Contour(40,2,3);
gr01->Draw("alp"); 
// for the draw options see transparencies
c2->cd(2);
/*Get 2 sigma contour for parameter 0 versus parameter 1  for ERRDEF=2*/
gMinuit->SetErrorDef(4); //seeting for 2 sigma, note 4 and not 2!
TGraph *gr201 = (TGraph*)gMinuit->Contour(60,2,3);
gr201->SetFillColor(42);
gr201->Draw("alf");
/*Get 1 sigma contour for parameter 0 versus parameter 1 for ERRDEF=1*/
gMinuit->SetErrorDef(1);
TGraph *gr101 = (TGraph*)gMinuit->Contour(60,2,3);
gr101->SetFillColor(38);
gr101->Draw("lf");

// print fit results
fp->Print();
}

double myFunc (double* xval, double* par){
  double x = xval[0];
  double f = 0.;
  for (int i=0; i<nDim; i++){
    f += par[i] * pow(x,i);
  }
  return f;
}