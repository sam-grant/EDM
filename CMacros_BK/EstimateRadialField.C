// DEPRACTED 

// SEE /gm2/app/users/sgrant/analysis/EDM/RadialField/RadialFieldEstimation/CMacros

#include <iostream>

#include "RootInclude.h"

#include "FancyDraw.h"


using namespace std;

// Conversion factors
float QHV = 18.3; // kV
double p0 = 4.60494e-03; double e0 = 6.81887e-04; // mm/ppm
double p1 = 7.76846e-01; double e1 = 1.15883e-02; // mmkV/ppm
//double ppm2mm = p1*(1/QHV) + p0;

tuple<double, double> GetBrBkg(TFile *input) { 

  TGraphErrors *result = (TGraphErrors*)input->Get("mainFit/mainFit");

  TF1 *mainFit = result->GetFunction("mainFit");
  TFitResultPtr mainFitRes = result->Fit(mainFit,"SMQ");

  double p0 = mainFit->GetParameter(0); double p0_err = mainFit->GetParError(0);
  double p1 = mainFit->GetParameter(1); double p1_err = mainFit->GetParError(1);

  // Negative x-intercept 
  double Br = p0/p1;

  // From Taylor 9.9
  double BrErr = fabs(Br) * sqrt(pow(p0_err/p0,2) + pow(p1_err/p1,2) - 2*mainFitRes->GetCovarianceMatrix()(0,1)/(p0*p1));

  return make_tuple(Br, BrErr);

}

tuple<double, double> GetZeroPoint() { 

    string input = "../Plots/Data/RadialFieldEstimation/BeamYPosMonitoring/Results/Run4_Jan.root";
    TFile *fin = TFile::Open(input.c_str());

    TGraphErrors *gr = (TGraphErrors*)fin->Get("CaloAverage/gr");

    TF1 *zeroLine = new TF1("zeroLine", "[0]", 37970, 38293);
    gr->Fit(zeroLine, "R");

    gr->GetXaxis()->SetRangeUser(37960, 38303);
    gr->GetYaxis()->SetRangeUser(74.45, 75);

    TCanvas *c = new TCanvas("c","c",800,600);

    gStyle->SetStatFormat("6.3g");
    gr->Draw();
    gPad->Update();
    gStyle->SetStatY(0.89);
    gStyle->SetStatX(0.49);
    gStyle->SetStatBorderSize(0);
    gStyle->SetOptFit(111);

    gr->SetTitle(";Sub-run;#LTy_{calo}#GT [mm]");
    gr->GetXaxis()->SetTitleSize(.04);
    gr->GetYaxis()->SetTitleSize(.04);
    gr->GetXaxis()->SetTitleOffset(1.1);
    gr->GetYaxis()->SetTitleOffset(1.2);
    gr->GetXaxis()->CenterTitle(true);
    gr->GetYaxis()->CenterTitle(true);
    gr->GetYaxis()->SetMaxDigits(4);
    gr->SetMarkerStyle(20); //  Full circle
    gr->Draw("AP");
  //c->SetGridx();
  zeroLine->SetLineWidth(3);

  c->SaveAs("../Images/Data/RadialFieldEstimation/Results/Run4/ZeroPoint.pdf");
  c->SaveAs("../Images/Data/RadialFieldEstimation/Results/Run4/ZeroPoint.png");
  c->SaveAs("../Images/Data/RadialFieldEstimation/Results/Run4/ZeroPoint.C");

  delete c;

  return make_tuple(zeroLine->GetParameter(0),zeroLine->GetParError(0));

}

TGraphErrors *GetYMinusZero(TGraphErrors *input, double zero, double zero_err) { 

  int n = input->GetN();

  double x[n]; double ex[n];
  double y[n]; double ey[n];

  for (int i_point = 0; i_point < n; i_point++) { 

    x[i_point] = input->GetPointX(i_point); 
    ex[i_point] = 0.;
    y[i_point] = input->GetPointY(i_point) - zero;
    ey[i_point] = sqrt(pow(input->GetErrorY(i_point),2) + pow(zero_err,2));

  } 

  return new TGraphErrors(n, x, y, ex, ey);

}

double mm2ppm(double y) {
  double ppm = y / ( (p1/QHV) + (p0) );
	return ppm;
}

double mm2ppm_err(double y, double ey) {
  // Quotient rule
	double term1 = pow(1/((p1/QHV)+p0),2)*pow(ey,2);
	double term2 = pow((((p1/QHV)+p0)-(y/QHV))/pow(((p1/QHV)+p0),2),2)*pow(e1,2); // checked
	double term3 = pow(((p1/QHV)+p0-y)/pow(((p1/QHV)+p0),2),2)*pow(e0,2); // checked
	return sqrt(term1+term2+term3);
}


TGraphErrors *GetBr(TGraphErrors *input, double BrBkg, double BrBkgErr) { 
  
  int n = input->GetN();

  double x[n]; double ex[n];
  double y[n]; double ey[n];

  for (int i_point = 0; i_point < n; i_point++) { 

    x[i_point] = input->GetPointX(i_point); 
    ex[i_point] = 0.;
    // Add the background field
    y[i_point] = mm2ppm(input->GetPointY(i_point)) + BrBkg;
    ey[i_point] = mm2ppm_err(input->GetPointY(i_point), input->GetErrorY(i_point));
    ey[i_point] = sqrt(pow(ey[i_point],2)+pow(BrBkgErr,2));

  }

  return new TGraphErrors(n, x, y, ex, ey);

}


int main() {

  // Get the background radial field at the zero point
  tuple<double, double> bkg_field = GetBrBkg(TFile::Open("../Plots/Data/RadialFieldScan_2/raw/fits.root","READ"));
  double BrBkg = get<0>(bkg_field); double BrBkgErr = get<1>(bkg_field);

	// Get zero point in mm 
	tuple<double, double> zero_point = GetZeroPoint();
  double zero = get<0>(zero_point); double zero_err = get<1>(zero_point);

  ////////////////////////////////////////////////////////////////////////
  // Now read in the y-positions through run-1, relative to the zero point
  ////////////////////////////////////////////////////////////////////////

	string dataset = "Run1";
	string inputName = "../Plots/Data/RadialFieldEstimation/BeamYPosMonitoring/Results/"+dataset+".root";
	TFile *input = TFile::Open(inputName.c_str(),"READ");

	// Get <y_calo> - zero versus run
	TGraphErrors *gr_caloAverageY = (TGraphErrors*)input->Get("CaloAverage/gr");
	TGraphErrors *gr_deltaY = GetYMinusZero(gr_caloAverageY, zero, zero_err); 
	DrawTGraphErrors(gr_deltaY, ";Sub-run;#Delta#LTy_{calo}#GT [mm]", "../Images/Data/RadialFieldEstimation/Results/"+dataset+"/deltaY");

  // Convert to the shift in Br
  TGraphErrors *gr_Br = GetBr(gr_deltaY, BrBkg, BrBkgErr);

  DrawTGraphErrors(gr_Br, ";Sub-run;#LTB_{r}#GT [ppm]", "../Images/Data/RadialFieldEstimation/Results/"+dataset+"/Br");

  return 0;
 
}


