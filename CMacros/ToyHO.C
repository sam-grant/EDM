// ======================================================= //
// Toy quad scan for radial field measurement

// Perform measurement of higher order terms 

// Sam Grant -- October 2020
// ======================================================= //

// C++ includes
#include <iostream>
#include <vector>

// Custom includes
#include "ToyRadialFieldScan.h"
#include "FancyDraw.h"
#include "Utils.h"

// ROOT includes
#include "TFile.h"
#include "TH1.h"
#include "TGraphErrors.h"
#include "TLegend.h"
#include "TRandom3.h"
#include "TFitResult.h"
#include "TMatrixD.h"

using namespace std;



// ==================== CALC Y0, Y1 AND Y2 -- APPLY SMEARING ====================
double GetY0(TRandom3 *rndm, double sigmaY, double n, double Br_0) {
	double y_0 = R_0/n * Br_0 * 1e-6;
	//return rndm->Gaus(y_0,sigmaY);
	return y_0;

}
double GetY1(TRandom3 *rndm, double sigmaY, double n, double Br_1, double theta, double phi1 ) {
	double y_1 = R_0/(1-n) * Br_1 * cos(theta + phi1) * 1e-6;
	//return rndm->Gaus(y_1,sigmaY);
	return y_1;
}

double GetY2(TRandom3 *rndm, double sigmaY, double n, double Br_2, double theta, double phi2 ) {
	double y_2 = R_0/(4-n) * Br_2 * cos(2*theta + phi2) * 1e-6;
	//return rndm->Gaus(y_2,sigmaY);
	return y_2;
}

// ==================== APPROX THETA ====================
double GetTheta(int caloNum) { 
	return (caloNum/24.5) * 2*TMath::Pi();
}
// ==================== MAIN, RUN EXPERIMENTS ====================

int main() {

	// Just try to draw the function

	double Br_0 = 1; double Br_1 = Br_0; double Br_2 = Br_0;

	double phi = TMath::Pi() / 2; double phi1 = phi; double phi2 = phi;

	vector<double> y0_; vector<double> y1_; vector<double> y2_; vector<double> yTot_;
	vector<double> theta_;
	vector<double> sigmaY_;

	double Br_app = 30.;
	double Br_bkg = 8;
	double Br_tot = Br_app + Br_bkg;
	double QHV = 14.;

	TRandom3 *rndm = new TRandom3(12345);

	// Loop around the ring
	for(int i_calo = 1; i_calo < 25; i_calo++) {

		CTAGS_SIGMAS_SUBRUNS ctags_sigmas_subruns_split(i_calo);

		cout<<"Loaded sigmas"<<endl;
		cout<<"Calo "<<i_calo<<endl;

		// 100 sub-runs
		double sigmaY = ctags_sigmas_subruns_split.SIGMAS[3];
		int subruns = ctags_sigmas_subruns_split.SUBRUNS[3];
		int ctags = ctags_sigmas_subruns_split.CTAGS[3];

		double theta = GetTheta(i_calo);

		double n = 0.108/18.3 * QHV;

		double y0 = GetY0(rndm, sigmaY, n, Br_tot);
		double y1 = GetY1(rndm, sigmaY, n, Br_tot, theta, phi1);
		double y2 = GetY2(rndm, sigmaY, n, Br_tot, theta, phi2); 

		y0_.push_back(y0);
		y1_.push_back(y1);
		y2_.push_back(y2);
		yTot_.push_back( y0 + y1 + y2 );
		theta_.push_back(theta);
		sigmaY_.push_back(sigmaY);


	}

	// Draw the fuckers 

	int n = yTot_.size();
	double x[n];
	double y0[n];
	double y1[n];
	double y2[n];
	double yTot[n];
	double ey[n];
	double zeros[n];

	for( int i_entry = 0; i_entry < n; i_entry++ ) {

		x[i_entry] = theta_.at(i_entry) * (180/TMath::Pi());
		y0[i_entry] = y0_.at(i_entry);
		y1[i_entry] = y1_.at(i_entry);
		y2[i_entry] = y2_.at(i_entry);
		yTot[i_entry] = yTot_.at(i_entry);
		ey[i_entry] = sigmaY_.at(i_entry);
		zeros[i_entry] = 0.;

	}


	TGraphErrors *gr0 = new TGraphErrors(n, x, y0, zeros, ey);
	TGraphErrors *gr1 = new TGraphErrors(n, x, y1, zeros, ey);
	TGraphErrors *gr2 = new TGraphErrors(n, x, y2, zeros, ey);
	TGraphErrors *grTot = new TGraphErrors(n, x, yTot, zeros, ey);

	vector<TGraphErrors *> gr_; 

	gr_.push_back(gr0); gr_.push_back(grTot);// gr_.push_back(gr2); gr_.push_back(grTot);

	DrawManyTGraphErrors(gr_, "test", "test", -3, 4);

/*	// Should be calo 1
	CTAGS_SIGMAS_SUBRUNS ctags_sigmas_subruns_split(1);

	double sigmaY = ctags_sigmas_subruns_split.SIGMAS[3];
	// ... this level of stats
	int subruns = ctags_sigmas_subruns_split.SUBRUNS[3];
	int ctags = ctags_sigmas_subruns_split.CTAGS[3];

	cout<<"++++++++++++++++++ Calo 1 ++++++++++++++++++"<<endl;
	cout<<"subruns:\t"<<subruns<<endl;
	cout<<"ctags:\t"<<ctags<<endl;
	cout<<"sigmaY:\t"<<sigmaY<<endl;

	CTAGS_SIGMAS_SUBRUNS ctags_sigmas_subruns;

	sigmaY = ctags_sigmas_subruns.SIGMAS[3];
	subruns = ctags_sigmas_subruns.SUBRUNS[3];
	ctags = ctags_sigmas_subruns.CTAGS[3];

	cout<<"++++++++++++++++++ All calos ++++++++++++++++++"<<endl;
	cout<<"subruns:\t"<<subruns<<endl;
	cout<<"ctags:\t"<<ctags<<endl;
	cout<<"sigmaY:\t"<<sigmaY<<endl;*/
	// should be all calos

	return 0; 

}