// ======================================================= //
// Toy quad scan for radial field measurement


// Sam Grant -- October 2020
// ======================================================= //

// C++ includes
#include <iostream>
#include <vector>

// Custom includes
#include "FancyDraw.h"
#include "Utils.h"

// ROOT includes
#include "TFile.h"
#include "TH1.h"
#include "TGraphErrors.h"
#include "TRandom3.h"

int main() {

	// =========== Initialise parameters =========== 
	const int N_quad = 2;
	const int N_field = 4;
	const float Br_res = 8; // ppm, the size of the field that would kill our measurement
	const float sigma = 0.0247454; // [mm] 50 sub-runs worth of data, for mean calo pos y unc
	const float QHV[N_quad] = {16, 20}; // Two quad settings, kV
	const float Br_app[N_field] = {-30, -10, 10, 30}; // Applied radial field, ppm

	TRandom3 random;

	std::vector<TGraphErrors*> scans;
	// =========== Field setting loop =========== 
	for ( int i_field = 0; i_field < N_field; i_field++ ) {

		// Printout
		std::cout<<"\nScan number:\t"<<i_field<<std::endl;
		std::cout<<"Br setting:\t"<<Br_app[i_field]<<" ppm"<<std::endl; 
		std::cout<<"True Br:\t"<<Br_app[i_field]-Br_res<<" ppm"<<std::endl;

		float Br_true = Br_app[i_field]-Br_res;

		// Average vertical position
		float y[N_quad];
		float ey[N_quad];
		float x[N_quad];
		float ex[N_quad];

		// =========== Quad setting loop ==========
		for ( int i_quad = 0; i_quad < N_quad; i_quad++ ) {

			// Printout
			std::cout<<"QHV "<<i_quad<<":\t\t"<<QHV[i_quad]<<" kV"<<std::endl;

			float yPos =  Br_true / QHV[i_quad];
			// Calculate y 
			y[i_quad] = yPos;
			// Smear y_err
			// TODO: Need to generate some events and get a sigma out
			ey[i_quad] = 0.0247454; // // 50 sub-runs worth // abs(random.Gaus(yPos,0.0247454)); 
			// Need to smear li

			std::cout<<"y[i_quad]:\t"<<y[i_quad]<<std::endl;
			std::cout<<"ey[i_quad]:\t"<<ey[i_quad]<<std::endl;

			x[i_quad] = QHV[i_quad];
			ex[i_quad] = 0;


		}

		TGraphErrors *scan = new TGraphErrors(N_quad,x,y,ex,ey);
		scans.push_back(scan);
		

		//break;

	} 

	DrawManyTGraphErrors(scans, ";QHV [kV];#LTy#GT [mm]", "../Images/MC/ToyRadialFieldScan/Scans");


	TCanvas *c = new TCanvas();

	scans.at(1)->Draw("AP");
	//scans.at(1)->Draw("P SAME");
	//scans.at(2)->Draw("P SAME");
	//scans.at(3)->Draw("P SAME");

	c->SaveAs("test.png");
	 

	return 0;
}