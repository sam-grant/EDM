// ======================================================= //
// Toy quad scan for radial field measurement

// Perform measurement of higher order terms 

// Sam Grant -- October 2020
// ======================================================= //

// C++ includes
#include <iostream>
#include <vector>
#include<numeric>

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

CTAGS_SIGMAS_SUBRUNS ctags_sigmas_subruns;

// ==================== CALC Y0, Y1 AND Y2 -- APPLY SMEARING ====================
double GetY0(TRandom3 *rndm, double sigmaY, double n, double Br_0, bool smear) {
	double y_0 = R_0/n * Br_0 * 1e-6;
	if(smear) y_0 = rndm->Gaus(y_0,sigmaY);
	return y_0;

}
double GetY1(TRandom3 *rndm, double sigmaY, double n, double Br_1, double theta, double phi1, bool smear) {
	double y_1 = R_0/(1-n) * Br_1 * cos(theta + phi1) * 1e-6;
	if(smear) y_1 = rndm->Gaus(y_1,sigmaY);
	return y_1;
}

double GetY2(TRandom3 *rndm, double sigmaY, double n, double Br_2, double theta, double phi2, bool smear ) {
	double y_2 = R_0/(4-n) * Br_2 * cos(2*theta + phi2) * 1e-6;
	if(smear) y_2 = rndm->Gaus(y_2,sigmaY);
	return y_2;
}

// ==================== APPROX THETA ====================
double GetTheta(int caloNum) { 
	return 2*TMath::Pi() * caloNum/24;
}
// ==================== MAIN, RUN EXPERIMENTS ====================

// Get corresponding terms (y postion) at theta
tuple<double, vector<double> > GetTermsAtTheta(TRandom3 *rndm, int i_calo, int i_subrun, bool smear) {

	// Just try to draw the function

	double Br_0 = 1; double Br_1 = Br_0; double Br_2 = Br_0;

	double phi = TMath::Pi() / 2; double phi1 = phi; double phi2 = phi;

	double Br_app = 30.;
	double Br_bkg = 8.;
	double Br_tot = Br_app + Br_bkg;
	double QHV = 18.;


	// Loop around the ring
	//for(int i_calo = 1; i_calo < 25; i_calo++) {

	CTAGS_SIGMAS_SUBRUNS ctags_sigmas_subruns_split(i_calo);

			// 100 sub-runs
	double sigmaY = ctags_sigmas_subruns_split.SIGMAS[i_subrun];
	int subruns = ctags_sigmas_subruns_split.SUBRUNS[i_subrun];
	int ctags = ctags_sigmas_subruns_split.CTAGS[i_subrun];

	double theta = GetTheta(i_calo);

	double n = 0.108/18.3 * QHV;

	double y0 = GetY0(rndm, sigmaY, n, Br_tot, smear);
	double y1 = GetY1(rndm, sigmaY, n, Br_tot, theta, phi1, smear);
	double y2 = GetY2(rndm, sigmaY, n, Br_tot, theta, phi2, smear); 

	cout<<"\n++++++++++++++ Calo "<<i_calo<<"++++++++++++++"<<endl;
	cout<<"SUBRUN:\t"<<ctags_sigmas_subruns_split.SUBRUNS[i_subrun]<<endl;
	cout<<"CTAG:\t"<<ctags_sigmas_subruns_split.CTAGS[i_subrun]<<endl;
	cout<<"SIGMA:\t"<<ctags_sigmas_subruns_split.SIGMAS[i_subrun]<<endl;
	cout<<"THETA:\t"<<theta * (180/TMath::Pi())<<endl;
	cout<<"y:\t"<<y0+y1+y2<<" mm"<<endl;

	vector<double> y_;
	y_.push_back(y0);
	y_.push_back(y1);
	y_.push_back(y2);

	return make_tuple(theta, y_);

}

int main() {

	bool smear = true;

	TRandom3 *rndm = new TRandom3(12345);

	for ( int i_subrun = 0; i_subrun < N_SUBRUNS; i_subrun++ ) { 

		//if(i_subrun != 3) continue;

		int n = N_CALO;
		double x[n];
		double y0[n];
		double y1[n];
		double y2[n];
		double yTot[n];
		double ey[n];
		double zeros[n];

		for ( int i_calo = 1; i_calo < N_CALO+1; i_calo++ ) { 

			//if(i_calo!=1) continue;
			CTAGS_SIGMAS_SUBRUNS ctags_sigmas_subruns_split(i_calo);

			tuple<double, vector<double> > termsAtTheta = GetTermsAtTheta(rndm, i_calo, i_subrun, smear);

			double theta = get<0>(termsAtTheta);
			theta = theta * (180/TMath::Pi());
			vector<double> y_ = get<1>(termsAtTheta);

			// For TGraph
			x[i_calo-1] = theta;
			ey[i_calo-1] = ctags_sigmas_subruns_split.SIGMAS[i_subrun];
			zeros[i_calo-1] = 0;
			y0[i_calo-1] = y_.at(0);
			y1[i_calo-1] = y_.at(1);
			y2[i_calo-1] = y_.at(2);
			yTot[i_calo-1] = y_.at(0) + y_.at(1) + y_.at(2); //accumulate(y_.begin(), y_.end(), 0);
			cout<<"y check:\t"<<yTot[i_calo-1]<<" mm"<<endl;

		}

		TGraphErrors *gr0 = new TGraphErrors(n, x, y0, zeros, ey);
		TGraphErrors *gr1 = new TGraphErrors(n, x, y1, zeros, ey);
		TGraphErrors *gr2 = new TGraphErrors(n, x, y2, zeros, ey);
		TGraphErrors *grTot = new TGraphErrors(n, x, yTot, zeros, ey);

		vector<TGraphErrors *> gr_; 
		vector<string> names_;

		gr_.push_back(gr0); gr_.push_back(gr1); gr_.push_back(gr2); gr_.push_back(grTot);
		names_.push_back("1st order"); names_.push_back("2nd order"); names_.push_back("3rd order"); names_.push_back("Total");
		string subruns = to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun]); 
		DrawManyTGraphErrors(gr_, names_, subruns+" sub-runs;#theta [deg];#LTy#GT [mm]", "../Images/MC/ToyRadialFieldScan/HigherOrder/30ppm18kV/y_vs_theta_NSUBRUNS_"+subruns, -1, 3.5);

	}

	return 0;



}



/*	for( int i_entry = 0; i_entry < n; i_entry++ ) {

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
	vector<string> names_;

	gr_.push_back(gr0); gr_.push_back(gr1); gr_.push_back(gr2); gr_.push_back(grTot);
	names_.push_back("1st order"); names_.push_back("2nd order"); names_.push_back("3rd order"); names_.push_back("Total");
	DrawManyTGraphErrors(gr_, names_, ";#theta [deg];#LTy#GT [mm]", "../Images/MC/ToyRadialFieldScan/HigherOrder/30ppm_18kV", -1, 3.5);

	return 0; */

