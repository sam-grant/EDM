#include <iostream>
#include <vector>

#include <fstream>
#include <string>
#include <fstream>
#include <vector>
#include <utility> 
#include <stdexcept> 
#include <sstream> 

#include "TFile.h"
#include "TTreeReader.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TGraphErrors.h"
#include "TFitResult.h"
#include "TF1.h"
#include "TLine.h"

#include "FancyDraw.h"

using namespace std;

const int N_QHV = 2;
const double QHV[N_QHV] = {14, 18}; //  quad settings, kV

// Read histograms, produce tuple of y, yerr
tuple<vector<double>, vector<double>> ReadYPos(string input) { 

	//  ====================  Open tree and load branches  ==================== 

	// Get file
	TFile *f1 = TFile::Open(input.c_str());
	cout<<"\nOpened file:\t"<<input<<" "<<f1<<endl;

	vector<TH1D *> hy_calos;

	vector<double> yPos; vector<double> eyPos;

	for(int i_calo = 0; i_calo < 24; i_calo++) {

		TH1D *hy = (TH1D*)f1->Get( ("PerCalo/hy_"+to_string(i_calo+1)).c_str() );

		yPos.push_back(hy->GetMean());
		eyPos.push_back(hy->GetMeanError());
	}

	return make_tuple(yPos,eyPos);

}

// ==================== ACCURATE THETA ====================
double GetTheta(int caloNum) { 

	// From Josh, don't get too hung up on these
	double caloPosRad[24] = {0.19896753472735357, 0.46076692252650303, 0.7225663103256524, 0.9843656981248019, 1.2461650859239513, 1.5079644737231008, 1.7697638615222502, 2.0315632493213998, 2.293362637120549, 2.5551620249196985, 2.816961412718848, 3.0787608005179976, 3.3405601883171467, 3.6023595761162963, 3.864158963915446, 4.125958351714595, 4.387757739513744, 4.649557127312894, 4.911356515112043, 5.173155902911193, 5.4349552907103424, 5.696754678509492, 5.958554066308642, 6.220353454107791};
	double theta = caloPosRad[caloNum-1] + (18.35*(TMath::Pi()/180)); 

	if(theta > 2*TMath::Pi()) theta = theta - 2*TMath::Pi();

	return theta;
}

TGraphErrors *VCOD(tuple<vector<double>, vector<double>> yVal) {

  	// Loop through y-pos and fill a TGraph

  	int n_calo = 24;

	double x[n_calo]; double ex[n_calo];
	double y[n_calo]; double ey[n_calo];

	for ( int i_calo = 0; i_calo < n_calo; i_calo++ ) {

		x[i_calo] = GetTheta(i_calo+1);
		ex[i_calo] = 0.0;
		y[i_calo] = get<0>(yVal)[i_calo];
		ey[i_calo] = get<1>(yVal)[i_calo];

	}

	return new TGraphErrors(n_calo,x,y,ex,ey);

}


tuple<vector<double>, vector<double>> SubtractYPos(vector<tuple<vector<double>, vector<double>>> vcods) {

	//tuple<vector<double>, vector<double>> yPos;
	vector<double> y; vector<double> ey; 

	cout<<"Calo,Angle[deg],<y>[m],delta<y>[m]"<<endl;

	for( int i_calo = 0; i_calo < 24; i_calo++ ) {

		double y1 = get<0>(vcods.at(0))[i_calo]; double y2 = get<0>(vcods.at(1))[i_calo];
		double ey1 = get<1>(vcods.at(0))[i_calo]; double ey2 = get<1>(vcods.at(1))[i_calo];

		// y_18 - y_14
		double ytot = y2 - y1; double eytot = sqrt(ey1*ey1 + ey2*ey2);

		cout<<i_calo+1<<","<<GetTheta(i_calo+1)*(180/TMath::Pi())<<","<<ytot*1e-3<<","<<eytot*1e-3<<"\n";

		y.push_back(ytot); ey.push_back(eytot);

	}

	return make_tuple(y, ey);

}

// ================================ START OF FIT FUNCTIONS ================================ 

const double n_1 = 0.0826; // 14 kV
const double n_2 = 0.106; // 18 kV

double fVCOD_0(double *x, double *par) {

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 1; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );

  	return ( par[0]*cos(0*x[0]) ) * quadFactor_.at(0);

}

double fVCOD_1(double *x, double *par) {

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 2; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) );

}

double fVCOD_2(double *x, double *par) {

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 3; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) );

}

double fVCOD_3(double *x, double *par) {

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 4; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) )
  			+ ( (par[5]*cos(3*x[0])+par[6]*sin(3*x[0])) * quadFactor_.at(3) );

}

double fVCOD_4(double *x, double *par) {

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 5; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) )
  			+ ( (par[5]*cos(3*x[0])+par[6]*sin(3*x[0])) * quadFactor_.at(3) ) 
  			+ ( (par[7]*cos(4*x[0])+par[8]*sin(4*x[0])) * quadFactor_.at(4) );

}

double fVCOD_4_E(double *x, double *par) {

    vector<double> quadFactor_;

    quadFactor_.push_back(1.);
    for (int i_order = 1; i_order < 5; i_order++ ) quadFactor_.push_back( (n_2/(pow(i_order,2) - n_2)) - (n_1/(pow(i_order,2) - n_1)) );

    return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
        + ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
        + ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) )
        + ( (par[5]*cos(3*x[0])+par[6]*sin(3*x[0])) * quadFactor_.at(3) ) 
        + ( (par[7]*cos(4*x[0])+par[8]*sin(4*x[0])) * quadFactor_.at(4) );

}

double fVCOD_4_183(double *x, double *par) {

  	vector<double> quadFactor_;

  	double n = 0.108; // 18.3 kV

  	for (int i_order = 0; i_order < 5; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n))  );

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) )
  			+ ( (par[5]*cos(3*x[0])+par[6]*sin(3*x[0])) * quadFactor_.at(3) ) 
  			+ ( (par[7]*cos(4*x[0])+par[8]*sin(4*x[0])) * quadFactor_.at(4) );

}

double fVCOD_5(double *x, double *par) {

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 6; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) )
  			+ ( (par[5]*cos(3*x[0])+par[6]*sin(3*x[0])) * quadFactor_.at(3) ) 
  			+ ( (par[7]*cos(4*x[0])+par[8]*sin(4*x[0])) * quadFactor_.at(4) )
  			+ ( (par[9]*cos(5*x[0])+par[10]*sin(5*x[0])) * quadFactor_.at(5) );
}

double fVCOD_6(double *x, double *par) {

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 7; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) )
  			+ ( (par[5]*cos(3*x[0])+par[6]*sin(3*x[0])) * quadFactor_.at(3) ) 
  			+ ( (par[7]*cos(4*x[0])+par[8]*sin(4*x[0])) * quadFactor_.at(4) )
  			+ ( (par[9]*cos(5*x[0])+par[10]*sin(5*x[0])) * quadFactor_.at(5) )
  			+ ( (par[11]*cos(6*x[0])+par[12]*sin(6*x[0])) * quadFactor_.at(6) );
}

double fVCOD_7(double *x, double *par) {

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 8; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) )
  			+ ( (par[5]*cos(3*x[0])+par[6]*sin(3*x[0])) * quadFactor_.at(3) ) 
  			+ ( (par[7]*cos(4*x[0])+par[8]*sin(4*x[0])) * quadFactor_.at(4) )
  			+ ( (par[9]*cos(5*x[0])+par[10]*sin(5*x[0])) * quadFactor_.at(5) )
  			+ ( (par[11]*cos(6*x[0])+par[12]*sin(6*x[0])) * quadFactor_.at(6) )
  			+ ( (par[13]*cos(7*x[0])+par[14]*sin(7*x[0])) * quadFactor_.at(7) );
}

double fVCOD_8(double *x, double *par) {

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 9; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) )
  			+ ( (par[5]*cos(3*x[0])+par[6]*sin(3*x[0])) * quadFactor_.at(3) ) 
  			+ ( (par[7]*cos(4*x[0])+par[8]*sin(4*x[0])) * quadFactor_.at(4) )
  			+ ( (par[9]*cos(5*x[0])+par[10]*sin(5*x[0])) * quadFactor_.at(5) )
  			+ ( (par[11]*cos(6*x[0])+par[12]*sin(6*x[0])) * quadFactor_.at(6) )
  			+ ( (par[13]*cos(7*x[0])+par[14]*sin(7*x[0])) * quadFactor_.at(7) )
  			+ ( (par[15]*cos(8*x[0])+par[16]*sin(8*x[0])) * quadFactor_.at(8) );
}


double fVCOD_9(double *x, double *par) {

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 10; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) )
  			+ ( (par[5]*cos(3*x[0])+par[6]*sin(3*x[0])) * quadFactor_.at(3) ) 
  			+ ( (par[7]*cos(4*x[0])+par[8]*sin(4*x[0])) * quadFactor_.at(4) )
  			+ ( (par[9]*cos(5*x[0])+par[10]*sin(5*x[0])) * quadFactor_.at(5) )
  			+ ( (par[11]*cos(6*x[0])+par[12]*sin(6*x[0])) * quadFactor_.at(6) )
  			+ ( (par[13]*cos(7*x[0])+par[14]*sin(7*x[0])) * quadFactor_.at(7) )
  			+ ( (par[15]*cos(8*x[0])+par[16]*sin(8*x[0])) * quadFactor_.at(8) )
  			+ ( (par[17]*cos(9*x[0])+par[18]*sin(9*x[0])) * quadFactor_.at(9) );
}

double fVCOD_9_183(double *x, double *par) {

  	vector<double> quadFactor_;

  	double n = 0.108; // 18.3 kV

  	for (int i_order = 0; i_order < 10; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n))  );

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) )
  			+ ( (par[5]*cos(3*x[0])+par[6]*sin(3*x[0])) * quadFactor_.at(3) ) 
  			+ ( (par[7]*cos(4*x[0])+par[8]*sin(4*x[0])) * quadFactor_.at(4) )
  			+ ( (par[9]*cos(5*x[0])+par[10]*sin(5*x[0])) * quadFactor_.at(5) )
  			+ ( (par[11]*cos(6*x[0])+par[12]*sin(6*x[0])) * quadFactor_.at(6) )
  			+ ( (par[13]*cos(7*x[0])+par[14]*sin(7*x[0])) * quadFactor_.at(7) )
  			+ ( (par[15]*cos(8*x[0])+par[16]*sin(8*x[0])) * quadFactor_.at(8) )
  			+ ( (par[17]*cos(9*x[0])+par[18]*sin(9*x[0])) * quadFactor_.at(9) );
}

double fVCOD_10(double *x, double *par) {

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 11; i_order++ ) {
      quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );
      //cout<<"quadFactor at N = "<<i_order<<":\t"<<(1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1))<<endl;
    }

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) )
  			+ ( (par[5]*cos(3*x[0])+par[6]*sin(3*x[0])) * quadFactor_.at(3) ) 
  			+ ( (par[7]*cos(4*x[0])+par[8]*sin(4*x[0])) * quadFactor_.at(4) )
  			+ ( (par[9]*cos(5*x[0])+par[10]*sin(5*x[0])) * quadFactor_.at(5) )
  			+ ( (par[11]*cos(6*x[0])+par[12]*sin(6*x[0])) * quadFactor_.at(6) )
  			+ ( (par[13]*cos(7*x[0])+par[14]*sin(7*x[0])) * quadFactor_.at(7) )
  			+ ( (par[15]*cos(8*x[0])+par[16]*sin(8*x[0])) * quadFactor_.at(8) )
  			+ ( (par[17]*cos(9*x[0])+par[18]*sin(9*x[0])) * quadFactor_.at(9) )
  			+ ( (par[19]*cos(10*x[0])+par[20]*sin(10*x[0])) * quadFactor_.at(10) );
}

double fVCOD_11(double *x, double *par) {

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 12; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) )
  			+ ( (par[5]*cos(3*x[0])+par[6]*sin(3*x[0])) * quadFactor_.at(3) ) 
  			+ ( (par[7]*cos(4*x[0])+par[8]*sin(4*x[0])) * quadFactor_.at(4) )
  			+ ( (par[9]*cos(5*x[0])+par[10]*sin(5*x[0])) * quadFactor_.at(5) )
  			+ ( (par[11]*cos(6*x[0])+par[12]*sin(6*x[0])) * quadFactor_.at(6) )
  			+ ( (par[13]*cos(7*x[0])+par[14]*sin(7*x[0])) * quadFactor_.at(7) )
  			+ ( (par[15]*cos(8*x[0])+par[16]*sin(8*x[0])) * quadFactor_.at(8) )
  			+ ( (par[17]*cos(9*x[0])+par[18]*sin(9*x[0])) * quadFactor_.at(9) )
  			+ ( (par[19]*cos(10*x[0])+par[20]*sin(10*x[0])) * quadFactor_.at(10) )
  			+ ( (par[21]*cos(11*x[0])+par[22]*sin(11*x[0])) * quadFactor_.at(11) );
  			
}

// At this point with have more fit parameters than data points so it's a good place to stop.
// Actually gives you an infinite chi sqr

double fVCOD_12(double *x, double *par) {

  	vector<double> quadFactor_;

  	for (int i_order = 0; i_order < 13; i_order++ ) quadFactor_.push_back( (1/(pow(i_order,2) - n_2)) - (1/(pow(i_order,2) - n_1)) );

  	return ( (par[0]*cos(0*x[0])) * quadFactor_.at(0) ) 
  			+ ( (par[1]*cos(1*x[0])+par[2]*sin(1*x[0])) * quadFactor_.at(1) )
  			+ ( (par[3]*cos(2*x[0])+par[4]*sin(2*x[0])) * quadFactor_.at(2) )
  			+ ( (par[5]*cos(3*x[0])+par[6]*sin(3*x[0])) * quadFactor_.at(3) ) 
  			+ ( (par[7]*cos(4*x[0])+par[8]*sin(4*x[0])) * quadFactor_.at(4) )
  			+ ( (par[9]*cos(5*x[0])+par[10]*sin(5*x[0])) * quadFactor_.at(5) )
  			+ ( (par[11]*cos(6*x[0])+par[12]*sin(6*x[0])) * quadFactor_.at(6) )
  			+ ( (par[13]*cos(7*x[0])+par[14]*sin(7*x[0])) * quadFactor_.at(7) )
  			+ ( (par[15]*cos(8*x[0])+par[16]*sin(8*x[0])) * quadFactor_.at(8) )
  			+ ( (par[17]*cos(9*x[0])+par[18]*sin(9*x[0])) * quadFactor_.at(9) )
  			+ ( (par[19]*cos(10*x[0])+par[20]*sin(10*x[0])) * quadFactor_.at(10) )
  			+ ( (par[21]*cos(11*x[0])+par[22]*sin(11*x[0])) * quadFactor_.at(11) )
  			+ ( (par[23]*cos(13*x[0])+par[24]*sin(12*x[0])) * quadFactor_.at(12) );

}

// ================================ CUSTOM PLOTTING ================================ 


void VCOD_183(TF1 *funcs[], string title, string fname) {

	// HV 14/16/18/20 kV  corresponds to n= 0.108/0.0944/0.106/0.118
	// n = 0.108 corresponds to 18.3 kV 

	// Get BD sim
	TFile *simFile = TFile::Open("../Plots/MC/ClosedOrbit/y_vs_theta.root"); 
	TGraphErrors *sim = (TGraphErrors*)simFile->Get("y_vs_theta"); 
	sim->SetLineColor(kRed); sim->SetMarkerColor(kRed); sim->SetLineWidth(3);

	TF1 *fit_4 = funcs[4];
	TF1 *fit_9 = funcs[9];

	double xmin = 0.;
	double xmax = 2*TMath::Pi();

	// "Empty" functions for 18.3 kV
	TF1 *f_4 = new TF1("fVCOD_4_183", fVCOD_4_183, xmin, xmax, 9);
	TF1 *f_9 = new TF1("fVCOD_9_183", fVCOD_9_183, xmin, xmax, 19);

/*	f_4->SetParameter(0, 2.12034e-03);
	f_4->SetParameter(1, -9.77146e-01);
	f_4->SetParameter(2, 1.60811e+00);
	f_4->SetParameter(3, -2.81531e+00);
	f_4->SetParameter(4, -8.35731e+00);
	f_4->SetParameter(5, 1.78097e+00);
	f_4->SetParameter(6, 1.21734e+02);
	f_4->SetParameter(7, -8.36230e+01);
	f_4->SetParameter(8, 2.85832e+02); */

	// Set parameters based on fit results
	for( int i_param = 0; i_param < 9; i_param++ ) f_4->SetParameter(i_param, fit_4->GetParameter(i_param));
	for( int i_param = 0; i_param < 19; i_param++ ) f_9->SetParameter(i_param, fit_9->GetParameter(i_param)); 

  	TLegend *leg = new TLegend(0.11,0.69,0.50,0.89); // 0.81,0.35,0.99,0.65);
  	leg->AddEntry(f_4, "N = 4");
  	leg->AddEntry(f_9, "N = 9");
  	leg->AddEntry(sim, "BD sim");
  	leg->SetBorderSize(0);

  	TCanvas *c = new TCanvas("c","c",800,600);

  	f_9->Draw();
  	gPad->Update();

	f_9->SetTitle(title.c_str());
	//9_4->GetYaxis()->SetRangeUser(-.4,.4);
	f_9->GetXaxis()->SetTitleSize(.04);
	f_9->GetYaxis()->SetTitleSize(.04);
	f_9->GetXaxis()->SetTitleOffset(1.1);
	f_9->GetYaxis()->SetTitleOffset(1.1);
	f_9->GetXaxis()->CenterTitle(true);
	f_9->GetYaxis()->CenterTitle(true);
	f_9->GetYaxis()->SetMaxDigits(4);
	f_4->SetLineColor(kBlue); f_4->SetMarkerColor(kBlue); f_4->SetLineWidth(3);
	f_9->SetLineColor(kGreen-3); f_9->SetMarkerColor(kGreen-3); f_9->SetLineWidth(3);
	f_4->SetNpx(1000); 
	f_9->SetNpx(1000);
	f_9->Draw();
	f_4->Draw("same");
	sim->Draw("same");
	leg->Draw("same");
	//c->SetGridx();

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return ;
}

int main() {

	string stage = "reprocessed";//"raw";;//// // 

	string runs[N_QHV] = {"37884-37885","37886"}; // ,"-37885"};

	vector<tuple<vector<double>, vector<double>>> vcods;



	for( int i_quad = 0; i_quad < N_QHV; i_quad++ ) {

		string input = "../Plots/Data/ClosedOrbit/"+stage+"/merged/y-pos_"+runs[i_quad]+".root"; 
		
		tuple<vector<double>, vector<double>> yPos = ReadYPos(input);

		vcods.push_back(yPos);

		TGraphErrors *gr1 = VCOD(yPos);//
		DrawTGraphErrors(gr1, ";#theta [rad];#LTy#GT [mm]", "../Images/Data/ClosedOrbit/"+stage+"/y_vs_theta_"+to_string(int(QHV[i_quad])));
		// Plot y(theta) for each quad setting

	}

	// Plot 18 kV and subtract the function

	// Subtract the two settings 
	tuple<vector<double>, vector<double>> yPosTot = SubtractYPos(vcods); 

	// Plot the difference 
	TGraphErrors *gr2 = VCOD(yPosTot);

	gr2->GetYaxis()->SetRangeUser(-0.25, 0.25);
	gr2->GetXaxis()->SetRangeUser(0, 2.01*TMath::Pi());

	DrawTGraphErrors(gr2, ";#theta [rad];#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]", "../Images/Data/ClosedOrbit/"+stage+"/ytot_vs_theta");

  // Store ytot_vs_theta
  TFile *out1 = new TFile("../Plots/Data/ClosedOrbit/reprocessed/ytot_vs_theta.root","RECREATE");
  gr2->SetName("ytot_vs_theta");
  gr2->Write();
  out1->Close();


	// Unfortunate complication of having calo 24 in front of calo 1
	double xmin = gr2->GetPointX(23);
	double xmax = gr2->GetPointX(22); //2*TMath::Pi();

	// Get funnctions up to N=12 (25 params)

	TF1 *f_0 = new TF1("fVCOD_0", fVCOD_0, xmin, xmax, 1);
	TF1 *f_1 = new TF1("fVCOD_1", fVCOD_1, xmin, xmax, 3);
	TF1 *f_2 = new TF1("fVCOD_2", fVCOD_2, xmin, xmax, 5);
	TF1 *f_3 = new TF1("fVCOD_3", fVCOD_3, xmin, xmax, 7);
	TF1 *f_4 = new TF1("fVCOD_4", fVCOD_4, xmin, xmax, 9);

	TF1 *f_5 = new TF1("fVCOD_5", fVCOD_5, xmin, xmax, 11);
	TF1 *f_6 = new TF1("fVCOD_6", fVCOD_6, xmin, xmax, 13);
	TF1 *f_7 = new TF1("fVCOD_7", fVCOD_7, xmin, xmax, 15);
	TF1 *f_8 = new TF1("fVCOD_8", fVCOD_8, xmin, xmax, 17);
	TF1 *f_9 = new TF1("fVCOD_9", fVCOD_9, xmin, xmax, 19);
	TF1 *f_10 = new TF1("fVCOD_10", fVCOD_10, xmin, xmax, 21);
	TF1 *f_11 = new TF1("fVCOD_11", fVCOD_11, xmin, xmax, 23);
	//TF1 *f_12 = new TF1("fVCOD_12", fVCOD_12, xmin, xmax, 25);

  // E-field
  
	int maxN = 12; 

	TF1 *funcs[12] = {f_0, f_1, f_2, f_3, f_4, f_5, f_6, f_7, f_8, f_9, f_10, f_11};//, f_12};	

	double chis[12]; double orders[12]; double zeros[12];

	int bestFitOrder = 0; double tmp = 1e6;

  // Set par limits for N=4

/*  f_4->SetParLimits(0,-0.25,0.25);
  f_4->SetParLimits(1,-0.25,0.25);
  f_4->SetParLimits(2,-0.25,0.25);
  f_4->SetParLimits(3,-0.25,0.25);
  f_4->SetParLimits(4,-0.25,0.25);
  f_4->SetParLimits(5,-0.25,0.25);
  f_4->SetParLimits(6,-0.25,0.25);
  f_4->SetParLimits(7,-0.25,0.25);
  f_4->SetParLimits(8,-0.25,0.25);
*/

//	int count = ;
	// Loop through functions and fit 
	for( int i_fit = 0; i_fit < 12; i_fit++ ) {

		gr2->Fit(funcs[i_fit], "R");

		chis[i_fit] = funcs[i_fit]->GetChisquare() / funcs[i_fit]->GetNDF();
		orders[i_fit] = i_fit; zeros[i_fit] = 0.;

		if(abs(1-chis[i_fit]) < tmp) {
			tmp = abs(1-chis[i_fit]);
			bestFitOrder = i_fit;
		}
 
		gStyle->SetOptFit(20222);
		gr2->Draw();
		gPad->Update();

/*		for( int i_ord = 0; i_ord < i_fit+1; i_ord++) {

			fVCOD[i_fit]->SetParName(i_ord, (names[i_ord]).c_str());
		}*/

		cout<<"CHI\t"<<chis[i_fit]<<endl;
		DrawTGraphErrors(gr2, ";#theta [rad];#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]", "../Images/Data/ClosedOrbit/"+stage+"/fit_ytot_vs_theta_"+to_string(i_fit));

	}

	// Print out the fit which gives a reduced chi^2 closest to one
	cout<<"Best fit order\t"<<bestFitOrder<<endl;

	// Now plot yCOD for 18.3 kV and compare with BD sim 

	VCOD_183(funcs, ";#theta [rad];#LTy#GT [mm]", "../Images/Data/ClosedOrbit/sim_N4_N9_183kV");

	// Draw TGraph of chi^2/ndf versus fit order
	TGraphErrors *gr3 = new TGraphErrors(maxN, orders, chis, zeros, zeros);
	gr3->GetXaxis()->SetRangeUser(-0.5, 11.25);
	gr3->SetMinimum(0);

	TCanvas *c = new TCanvas("c","c",800,600);

	gr3->SetTitle(";Fit order, N;#chi^{2}/ndf");
	gr3->GetXaxis()->SetTitleSize(.04);
	gr3->GetYaxis()->SetTitleSize(.04);
	gr3->GetXaxis()->SetTitleOffset(1.1);
	gr3->GetYaxis()->SetTitleOffset(1.1);
	gr3->GetXaxis()->CenterTitle(true);
	gr3->GetYaxis()->CenterTitle(true);
	gr3->GetYaxis()->SetMaxDigits(4);
	gr3->SetMarkerStyle(20); //  Full circle
	gr3->Draw("APL");

	gPad->Update();
	TLine *l1 = new TLine(gPad->GetUxmin(),1.,gPad->GetUxmax(),1.);
	l1->SetLineStyle(2);
	l1->SetLineWidth(2);
	l1->SetLineColor(kRed);
	l1->Draw("same");

	c->SaveAs( ("../Images/Data/ClosedOrbit/"+stage+"/fit_chi_vs_order.pdf").c_str() );
	c->SaveAs( ("../Images/Data/ClosedOrbit/"+stage+"/fit_chi_vs_order.png").c_str() );
	c->SaveAs( ("../Images/Data/ClosedOrbit/"+stage+"/fit_chi_vs_order.C").c_str() );


  // Fit for E-field

  TF1 *f_4_E = new TF1("fVCOD_4_E", fVCOD_4_E, xmin, xmax, 9); 

/*  f_4_E->SetParLimits(0,-0.25,0.25);
  f_4_E->SetParLimits(1,-0.25,0.25);
  f_4_E->SetParLimits(2,-0.25,0.25);
  f_4_E->SetParLimits(3,-0.25,0.25);
  f_4_E->SetParLimits(4,-0.25,0.25);
  f_4_E->SetParLimits(5,-0.25,0.25);
  f_4_E->SetParLimits(6,-0.25,0.25);
  f_4_E->SetParLimits(7,-0.25,0.25);
  f_4_E->SetParLimits(8,-0.25,0.25);*/
  gr2->Fit(f_4_E, "R");
  DrawTGraphErrors(gr2, "E-field;#theta [rad];#LTy_{18 kV}#GT #minus #LTy_{14 kV}#GT [mm]", "../Images/Data/ClosedOrbit/"+stage+"/Efit_ytot_vs_theta_4");


	return 0;


}


	// Read tree, produce tuple of y, yerr, ctag, & subruns
	// Also store histograms of y-pos 



// +++++++ OLD STYLE , READ DIRECTLY FROM TREE, SLOW BUT EASY +++++++  
/*
tuple<vector<double>, vector<double>> ReadYPos(string input, string output) {

	// ++++++++++++++ Open tree and load branches ++++++++++++++

	// Get file
	TFile *f1 = TFile::Open(input.c_str());
	cout<<"\nOpened tree:\t"<<input<<" "<<f1<<endl;

	// Get reader for tree
	TTreeReader treeReader("nearlineHistTree/eventTree",f1);

	// Get branches
	TTreeReaderValue<unsigned int> runNum(treeReader,"runNum");
	TTreeReaderValue<unsigned int> subRunNum(treeReader,"subRunNum");
	TTreeReaderValue<unsigned int> eventNum(treeReader,"eventNum");
	TTreeReaderValue<unsigned int> ctag(treeReader,"ctag");
	TTreeReaderValue<vector<int>> caloNum(treeReader,"caloNum");
	TTreeReaderValue<std::vector<double>> energy(treeReader,"energy");
	TTreeReaderValue<std::vector<double>> times(treeReader,"time");
	TTreeReaderValue<std::vector<double>> x(treeReader,"x");
	TTreeReaderValue<std::vector<double>> y(treeReader,"y");


	// ++++++++++++++ Book histograms ++++++++++++++
	TH1D *hy = new TH1D("hy", ";y [mm];Clusters", 150, 0, 150);

	vector<TH1D *> hy_calos;// vector<unsigned int> tot_ctags;

	for(int i_calo = 0; i_calo < 24; i_calo++) {

		TH1D *hy_tmp = (TH1D*) hy->Clone();
		hy_tmp->SetName( ("hy_"+to_string(i_calo+1)).c_str() );
		hy_calos.push_back(hy_tmp);

	}

	// ++++++++++++++ Loop thro events ++++++++++++++

	//int nFill_tmp = treeReader.size(); double x_fill[nFill_tmp]; double y_clu[nFill_tmp]; double zeros[nFill_tmp];
	int counter = 0;
	unsigned int run;

	// For DQC purposess
	vector<double> subRuns; vector<double> ctags; 

	while (treeReader.Next()){

		run = *runNum;

		//tot_ctag = tot_ctag + *ctag;

		//tot_ctags.at(caloNum-1).push_backtot_ctag

	  // Get leaves
		vector<int> caloNum_ = *caloNum;
		vector<double> x_ = *x;
		vector<double> y_ = *y;
		vector<double> energy_ = *energy;
		vector<double> times_ = *times;

	  // Number of clusters in this fill

	  // This could be any of the vectors, caloNum has no special significance 
		int nClu = caloNum_.size(); 

		ctags.push_back(double(*ctag)); subRuns.push_back(double(*subRunNum));

		// Start run 37884 at subrun 280 

		if(run == 37884 && *subRunNum < 280) continue;



		//x_fill[nFill] = double(nFill); y_clu[nFill] = double(nClu); zeros[n_fill] = 0.;

	  // Loop through clusters
		for(int i_clu = 0; i_clu < nClu; i_clu++) { 

	     // Get cluster level variables
			int caloNum =  caloNum_.at(i_clu);
			double xmm = x_.at(i_clu) * 25;
			double ymm = y_.at(i_clu) * 25; 
			double energy = energy_.at(i_clu);
			double time = times_.at(i_clu);

	     // Apply CTAG cuts
			// if(energy > 1700 && energy < 6000 && time > 24000) {
			if(energy > eLoCut && energy < 6000 && time > 24000) {

	    	// Fill y-position for individual calos
				hy_calos.at(caloNum-1)->Fill(ymm);

			}

		}

		counter++;

	} // Exit tree

	// Plot clusters per fill 
	int n_subrun = subRuns.size();
	double x_subrun[n_subrun]; double y_ctag[n_subrun]; double zeros[n_subrun];

	for (int i_subrun = 0; i_subrun < n_subrun; i_subrun++ ) {

		x_subrun[i_subrun] = double(subRuns.at(i_subrun)); 
		y_ctag[i_subrun] = double(ctags.at(i_subrun));
		zeros[i_subrun] = 0.;

	}

	TGraphErrors *ctag_vs_subrun = new TGraphErrors(n_subrun, x_subrun, y_ctag, zeros, zeros);

	DrawTGraphErrors(ctag_vs_subrun, ";Sub-run;CTAG / fill", "../Images/Data/VCOD/ctag_vs_subrun_"+to_string(run));


	// ++++++++++++++ Write to file ++++++++++++++

	TFile *f2 = new TFile(output.c_str(), "RECREATE");
	hy->Write();
	f2->cd(); f2->mkdir("PerCalo"); f2->cd("PerCalo");


	vector<double> yPos; vector<double> eyPos; 

	for(int i_calo = 0; i_calo < hy_calos.size(); i_calo++) {

		// cout<<"\nCalo:\t"<<i_calo+1<<endl;
		// cout<<"Mean y-position:\t"<<hy_calos.at(i_calo)->GetMean()<<"+/-"<<hy_calos.at(i_calo)->GetMeanError()<<endl;
		// cout<<"Total ctags:\t"<<hy_calos.at(i_calo)->GetEntries()<<endl;

		yPos.push_back(hy_calos.at(i_calo)->GetMean()); 
		eyPos.push_back(hy_calos.at(i_calo)->GetMeanError());

		hy_calos.at(i_calo)->Write();

	}

	cout<<"\nWritten histograms to:\t"<<output<<" "<<f2<<endl;

	// Need this to avoid seg fault after closing files
	// double yPos = hy->GetMean(); double eyPos = hy->GetMeanError();

	f1->Close();
	f2->Close();

	return make_tuple(yPos, eyPos);//, theta);//, tot_ctag);

}



void DrawVCOD(TGraphErrors *graph, string title, string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	//c->SetRightMargin(0.20);

	graph->SetTitle(title.c_str());
	graph->GetXaxis()->SetTitleSize(.04);
	graph->GetYaxis()->SetTitleSize(.04);
  	graph->GetXaxis()->SetTitleOffset(1.1);
  	graph->GetYaxis()->SetTitleOffset(1.25);
  	graph->GetXaxis()->CenterTitle(true);
	graph->GetYaxis()->CenterTitle(true);
	graph->GetYaxis()->SetMaxDigits(4);
	graph->SetMarkerStyle(20); //  Full circle

	graph->Draw("AP");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

	
	// Mark the quads
	// From diagram in TDR pg. 406  
	TLine *Q1l = new TLine(GetTheta(3),0,GetTheta(6),0);
	TPaveText *Q1t = new TPaveText(GetTheta(3),0.025,GetTheta(6),0.025);
	TLine *Q2l = new TLine(GetTheta(9),0,GetTheta(12),0);
	TPaveText *Q2t = new TPaveText(GetTheta(9),0.025,GetTheta(12),0.025);
	TLine *Q3l = new TLine(GetTheta(15),0,GetTheta(18),0);
	TPaveText *Q3t = new TPaveText(GetTheta(15),0.025,GetTheta(18),0.025);
	TLine *Q4l = new TLine(GetTheta(21),0,GetTheta(24),0);
	TPaveText *Q4t = new TPaveText(GetTheta(21),0.025,GetTheta(24),0.025);

	Q1l->SetLineWidth(3); Q1l->SetLineStyle(2); Q1l->SetLineColor(kBlue); 
	Q2l->SetLineWidth(3); Q2l->SetLineStyle(2); Q2l->SetLineColor(kOrange-3); 
	Q3l->SetLineWidth(3); Q3l->SetLineStyle(2); Q3l->SetLineColor(kGreen+3); 
	Q4l->SetLineWidth(3); Q4l->SetLineStyle(2); Q4l->SetLineColor(kMagenta+2); 

	Q1t->SetTextSize(26); Q2t->SetTextSize(26); Q3t->SetTextSize(26); Q4t->SetTextSize(26);
	Q1t->SetTextFont(44); Q2t->SetTextFont(44); Q3t->SetTextFont(44); Q4t->SetTextFont(44);
	Q1t->SetFillColor(0); Q2t->SetFillColor(0); Q3t->SetFillColor(0); Q4t->SetFillColor(0);
	Q1t->SetTextColor(kBlue); Q2t->SetTextColor(kOrange-3); Q3t->SetTextColor(kGreen+3); Q4t->SetTextColor(kMagenta+2);

	Q1t->AddText("Q1"); Q2t->AddText("Q2"); Q3t->AddText("Q3"); Q4t->AddText("Q4"); 
	Q1l->Draw("same"); Q2l->Draw("same"); Q3l->Draw("same"); Q4l->Draw("same");
	Q1t->Draw("same"); Q2t->Draw("same"); Q3t->Draw("same"); Q4t->Draw("same"); 

	// Draw the sim 
	//TFile *simFile = TFile::Open("../Plots/MC/ClosedOrbit/y_vs_theta.root"); 
	//TGraphErrors *sim = (TGraphErrors*)simFile->Get("y_vs_theta"); 
	//sim->SetLineColor(kRed); sim->SetMarkerColor(kRed); sim->SetLineWidth(3);
//
//	////sim->Draw("L same");
//
//	//TLegend *leg = new TLegend(0.11,0.69,0.33,0.89); // 0.81,0.35,0.99,0.65);
//  	//leg->SetBorderSize(0);
//
//  	//leg->AddEntry(graph, "Data");
  	//leg->AddEntry(sim, "BD sim");
 leg->AddEntry(Q1, "Q1");
  leg->AddEntry(Q2, "Q2");
  leg->AddEntry(Q3, "Q3");
  leg->AddEntry(Q4, "Q4");

  	//leg->Draw("same");

}*/
