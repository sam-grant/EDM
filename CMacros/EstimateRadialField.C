#include <iostream>

#include "RootInclude.h"

#include "FancyDraw.h"

using namespace std;

// Conversion factors
const float QHV = 18.3; // kV
const double p0 = 4.60494e-03; const double e0 = 6.81887e-04; // mm/ppm
const double p1 = 7.76846e-01; const double e1 = 1.15883e-02; // mmkV/ppm
//const double ppm2mm = p1*(1/QHV) + p0;

double mm2ppm(double y) {
	return y / ( (p1/QHV) + p0 );
}

// Double check this!
double mm2ppm_err(double y, double ey) {
	double term1 = pow(1/((p1/QHV)+p0),2)*pow(ey,2);
	double term2 = pow((((p1/QHV)+p0)+(y/QHV))/pow(((p1/QHV)+p0),2),2)*pow(e1,2);
	double term3 = pow(((p1/QHV)+y)/pow(((p1/QHV)+p0),2),2)*pow(e0,2);
	return sqrt(term1+term2+term3);
}

tuple<double, double> ZeroPoint() { 

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

	c->SaveAs("../Images/Data/RadialFieldEstimation/Results/tmp3.pdf");
	c->SaveAs("../Images/Data/RadialFieldEstimation/Results/tmp3.png");
	c->SaveAs("../Images/Data/RadialFieldEstimation/Results/tmp3.C");

	delete c;

  	return make_tuple(zeroLine->GetParameter(0),zeroLine->GetParError(0));

}

int main() {

	// Get zero point in mm 
	tuple<double, double> zeroPoint = ZeroPoint();
  	const double zero = get<0>(zeroPoint); const double zero_err = get<1>(zeroPoint);

	string dataset = "Run1";
	string inputName = "../Plots/Data/RadialFieldEstimation/BeamYPosMonitoring/Results/"+dataset+".root";
	TFile *input = TFile::Open(inputName.c_str(),"READ");

	// Get <y_calo> - zero versus run
	TGraphErrors *input_gr = (TGraphErrors*)input->Get("CaloAverage/gr");

	int n_point = input_gr->GetN();

	double x[n_point]; double ex[n_point];
    double y_1[n_point]; double ey_1[n_point];

	for (int i_point = 0; i_point < n_point; i_point++) { 

		x[i_point] = input_gr->GetPointX(i_point); 
		ex[i_point] = 0.;
		y_1[i_point] = input_gr->GetPointY(i_point) - zero;
		ey_1[i_point] = sqrt(pow(input_gr->GetErrorY(i_point),2) + pow(zero_err,2));
		//cout<<y_1[i_point]<<", "<<ey_1[i_point]<<endl;

	} 

	TGraphErrors *y_minus_zero = new TGraphErrors(n_point, x, y_1, ex, ey_1);

	DrawTGraphErrors(y_minus_zero, ";Sub-run;y_{calo} #minus y_{#LTB_{r}#GT=0} [mm]", "../Images/Data/RadialFieldEstimation/Results/tmp1");

    double y_2[n_point]; double ey_2[n_point];

    for (int i_point = 0; i_point < n_point; i_point++) { 

		y_2[i_point] = mm2ppm(y_1[i_point]);
		ey_2[i_point] = mm2ppm_err(y_1[i_point], ey_1[i_point]);////sqrt(pow(input_gr->GetErrorY(i_point),2) + pow(zero_err,2));

    }

    TGraphErrors *Br_shift = new TGraphErrors(n_point, x, y_2, ex, ey_2);

    DrawTGraphErrors(Br_shift, ";Sub-run;#Delta#LTB_{r}#GT [ppm]", "../Images/Data/RadialFieldEstimation/Results/tmp2");



	return 0;
 
}


