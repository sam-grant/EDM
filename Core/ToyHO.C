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
double GetY0(double sigmaY, double n, double Br_0) {
	return R_0/n * Br_0 * 1e-6;
}
double GetY1(double sigmaY, double n, double Br_1, double theta, double phi1) {
	return R_0/(1-n) * Br_1 * cos(theta + phi1) * 1e-6;
}
double GetY2(double sigmaY, double n, double Br_2, double theta, double phi2) {
	return R_0/(4-n) * Br_2 * cos(2*theta + phi2) * 1e-6;
}

// ==================== APPROX THETA ====================
double GetTheta(int caloNum) { 
	return 2*TMath::Pi() * caloNum/24;
}
// ==================== MAIN, RUN EXPERIMENTS ====================

// Get corresponding terms (y postion) at theta
vector<double> GetTerms(int i_calo, int i_subrun, int i_quad) {

	// Just try to draw the function

	double Br_0 = 1; double Br_1 = Br_0; double Br_2 = Br_0;

	double phi = TMath::Pi() / 2; double phi1 = phi; double phi2 = phi;

	double Br_app = 0.;
	double Br_bkg = 8.;
	double Br_tot = Br_app + Br_bkg;

	CTAGS_SIGMAS_SUBRUNS ctags_sigmas_subruns_split(i_calo);

	double sigmaY = ctags_sigmas_subruns_split.SIGMAS[i_subrun];
	int subruns = ctags_sigmas_subruns_split.SUBRUNS[i_subrun];
	int ctags = ctags_sigmas_subruns_split.CTAGS[i_subrun];

	double theta = GetTheta(i_calo);

	double n = 0.108/18.3 * QHV[i_quad];

	double y0 = GetY0(sigmaY, n, Br_tot);
	double y1 = GetY1(sigmaY, n, Br_tot, theta, phi1);
	double y2 = GetY2(sigmaY, n, Br_tot, theta, phi2); 

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

	return y_;

}

int main() {

	bool smear = false;//strue;

	TRandom3 *rndm = new TRandom3(12345);

	for ( int i_subrun = 0; i_subrun < N_SUBRUNS; i_subrun++ ) { 

		//if(i_subrun != 3) continue;

		int n = N_CALO;
		double x[n];
		double y0[n];
		double y1[n];
		double y2[n];
		double yTot1[n];
		double yTot2[n];
		double yTot[n];
		double eyTot[n];
		double ey[n];
		double zeros[n];

		for ( int i_calo = 1; i_calo < N_CALO+1; i_calo++ ) { 

			//if(i_calo!=1) continue;
			CTAGS_SIGMAS_SUBRUNS ctags_sigmas_subruns_split(i_calo);

			
			double theta = GetTheta(i_calo);
			theta = theta * (180/TMath::Pi());

			// For TGraph
			x[i_calo-1] = theta;
			double sigmaY = ctags_sigmas_subruns_split.SIGMAS[i_subrun];
			ey[i_calo-1] = sigmaY; 
			zeros[i_calo-1] = 0;

			vector<double> y_;
			// =========== Quad setting loop ==========
			for ( int i_quad = 0; i_quad < N_QHV; i_quad++ ) {
				
				vector<double> tmp_ = GetTerms(i_calo, i_subrun, i_quad);

				// y0[i_calo-1] = y_.at(0);
				// y1[i_calo-1] = y_.at(1);
				// y2[i_calo-1] = y_.at(2);

				double y = tmp_.at(0) + tmp_.at(1) + tmp_.at(2);

				if(smear) y = rndm->Gaus(y, sigmaY);

				y_.push_back(y);
				cout<<"y check:\t"<<y<<" mm"<<endl;

			}

			//vector<double> y0_ = y_.front(); vector<double> y1_ = y_.back();
			//double yDiff = 

			// Notes

			// 1. Plot the two that you are subtracting first 
			yTot1[i_calo-1] = y_.front();
			yTot2[i_calo-1] = y_.back();
			
			yTot[i_calo-1] = y_.front()-y_.back();
			eyTot[i_calo-1] = sqrt(2)*sigmaY;// - sigmaY);

		}

		//TGraphErrors *gr0 = new TGraphErrors(n, x, y0, zeros, ey);
		//TGraphErrors *gr1 = new TGraphErrors(n, x, y1, zeros, ey);
		//TGraphErrors *gr2 = new TGraphErrors(n, x, y2, zeros, ey);
		TGraphErrors *grTot1 = new TGraphErrors(n, x, yTot1, zeros, ey);
		TGraphErrors *grTot2 = new TGraphErrors(n, x, yTot2, zeros, ey);
		TGraphErrors *grTot = new TGraphErrors(n, x, yTot, zeros, eyTot);

		//vector<TGraphErrors *> gr_; 
		//vector<string> names_;

		//gr_.push_back(gr0); gr_.push_back(gr1); gr_.push_back(gr2); gr_.push_back(grTot);
		//names_.push_back("1st order"); names_.push_back("2nd order"); names_.push_back("3rd order"); names_.push_back("Total");
		string subruns = to_string(ctags_sigmas_subruns.SUBRUNS[i_subrun]);

		DrawTGraphErrors(grTot1, subruns+" sub-runs;#theta [deg];#LTy_{1}#GT [mm]", "../Images/MC/ToyRadialFieldScan/HigherOrder/30ppm18kV/y1_vs_theta_NSUBRUNS_"+subruns); 
		DrawTGraphErrors(grTot2, subruns+" sub-runs;#theta [deg];#LTy_{2}#GT [mm]", "../Images/MC/ToyRadialFieldScan/HigherOrder/30ppm18kV/y2_vs_theta_NSUBRUNS_"+subruns); 
		DrawTGraphErrors(grTot, subruns+" sub-runs;#theta [deg];#LTy_{1}#GT - #LTy_{2}#GT [mm]", "../Images/MC/ToyRadialFieldScan/HigherOrder/30ppm18kV/y_vs_theta_NSUBRUNS_"+subruns); 

		//DrawManyTGraphErrors(gr_, names_, subruns+" sub-runs;#theta [deg];#LTy#GT [mm]", "../Images/MC/ToyRadialFieldScan/HigherOrder/30ppm18kV/y_vs_theta_overlay_NSUBRUNS_"+subruns, -1, 3.5);
		
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

