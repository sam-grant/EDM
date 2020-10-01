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

using namespace std;

int main() {

	// =========== Initialise parameters =========== 
	const int N_quad = 2;
	const int N_field = 4;
	const float Br_res = 8; // ppm, the size of the field that would kill our measurement

	float QHV[N_quad] = {16, 20}; // Two quad settings, kV
	float Br_app[N_field] = {-30, -10, 10, 30}; // Applied radial field, ppm

	// =========== Field setting loop =========== 
	for ( int i_field = 0; i_field < N_field; i_field++ ) {

		// Printout
		cout<<"\nScan number:\t"<<i_field<<endl;
		cout<<"Br setting:\t"<<Br_app[i_field]<<" ppm"<<endl; 
		cout<<"True Br:\t"<<Br_app[i_field]-Br_res<<" ppm"<<endl;

		// Average vertical position
		vector<float> y;

		// =========== Quad setting loop ==========
		for ( int i_quad = 0; i_quad < N_quad; i_quad++ ) {

			// Printout
			cout<<"QHV "<<i_quad<<":\t\t"<<QHV[i_quad]<<" kV"<<endl;



		}
	} 


	 

	return 0;
}