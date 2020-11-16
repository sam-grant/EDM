#ifndef ToyRadialFieldScan_h
#define ToyRadialFieldScan_h

// ROOT includes
#include "TFile.h"
#include "TH1.h"

using namespace std;

// ==================== GLOBALS ====================


const double BR_BKG = 8; // ppm, the size of the field that would kill our measurement
const int N_EXP = 1000;

// New settings proposal

// Config A -- All settings, ideal scenario, 6 hour measurement
const int N_QHV = 4;
const int N_FIELD = 6;
const double QHV[N_QHV] = {14, 16, 18, 20}; //  quad settings, kV
const double BR_APP[N_FIELD] = {-50, -30, -10, 10, 30, 50}; // Applied radial field, ppm
//
//// Config B -- All field settings without 20 kV (in case untenable)
//const int N_QHV = 3;
//const int N_FIELD = 6;
//const double QHV[N_QHV] = {14, 16, 18}; //  quad settings, kV
//const double BR_APP[N_FIELD] = {-50, -30, -10, 10, 30, 50}; // Applied radial field, ppm
//
//// Config C -- All field settings without 14 kV (in case untenable)
//const int N_QHV = 3;
//const int N_FIELD = 6;
//const double QHV[N_QHV] = {16, 18, 20}; //  quad settings, kV
//const double BR_APP[N_FIELD] = {-50, -30, -10, 10, 30, 50}; // Applied radial field, ppm
//
//// Config D -- All quad settings without high/low field settings, to check if we need them
//const int N_QHV = 4;
//const int N_FIELD = 4;
//const double QHV[N_QHV] = {14, 16, 18, 20}; //  quad settings, kV
//const double BR_APP[N_FIELD] = {-30, -10, 10, 30}; // Applied radial field, ppm
//
//// Config E -- No 20 kV, no high/low field
//const int N_QHV = 3;
//const int N_FIELD = 4;
//const double QHV[N_QHV] = {14, 16, 18}; //  quad settings, kV
//const double BR_APP[N_FIELD] = {-30, -10, 10, 30}; // Applied radial field, ppm
//
//// Config F -- No 14 kV, no high/low field
// const int N_QHV = 3;
// const int N_FIELD = 4;
// const double QHV[N_QHV] = {16, 18, 20}; //  quad settings, kV
// const double BR_APP[N_FIELD] = {-30, -10, 10, 30}; // Applied radial field, ppm

const int N_SUBRUNS = 13; // Lucky number
const int SUBRUN_INTERVAL = 25;
const double R_0 = 7112.; // Magic radius

// ==================== LOAD CTAGS, SIGMAS, AND SUBRUNS FOR ALL CALOS ====================

class CTAGS_SIGMAS_SUBRUNS { 

public: 

	// Public variables
	int SUBRUNS[N_SUBRUNS];
	double CTAGS[N_SUBRUNS];
	double SIGMAS[N_SUBRUNS];

	// Member functions declaration

	// All calos
	CTAGS_SIGMAS_SUBRUNS();
	// Per calo
	CTAGS_SIGMAS_SUBRUNS(int caloNum);
	
};

 // Constructor 1
 CTAGS_SIGMAS_SUBRUNS::CTAGS_SIGMAS_SUBRUNS() {

 	TFile *file = TFile::Open("../Plots/Data/MeanCaloPos/CTAG_SUBRUN_SIGMA_15921.root");
 	// Load histograms
	TH1D *CTAG_vs_SUBRUN = (TH1D*)file->Get("CTAG_vs_SUBRUN"); 
	TH1D *SIGMA_vs_SUBRUN = (TH1D*)file->Get("SIGMA_vs_SUBRUN"); 

 	int counter = 0; 

	for (int i_subrun = SUBRUN_INTERVAL; i_subrun <= N_SUBRUNS*SUBRUN_INTERVAL; i_subrun = i_subrun + SUBRUN_INTERVAL) { 

		SUBRUNS[counter] = i_subrun; 
		CTAGS[counter] = CTAG_vs_SUBRUN->GetBinContent(i_subrun);
		SIGMAS[counter] = SIGMA_vs_SUBRUN->GetBinContent(i_subrun);

		counter++;

	}

 } 

 // Constructor 2
 CTAGS_SIGMAS_SUBRUNS::CTAGS_SIGMAS_SUBRUNS(int caloNum) {

 	TFile *file = TFile::Open("../Plots/Data/MeanCaloPos/Split/CTAG_SUBRUN_SIGMA_15921.root");

 	// Load histograms per calo
	TH1D *CTAG_vs_SUBRUN = (TH1D*)file->Get( ("C"+to_string(caloNum)+"_CTAG_vs_SUBRUN").c_str() ); 
	TH1D *SIGMA_vs_SUBRUN = (TH1D*)file->Get( ("C"+to_string(caloNum)+"_SIGMA_vs_SUBRUN").c_str() ); 

	int counter = 0; 

	for (int i_subrun = SUBRUN_INTERVAL; i_subrun <= N_SUBRUNS*SUBRUN_INTERVAL; i_subrun = i_subrun + SUBRUN_INTERVAL) { 

		SUBRUNS[counter] = i_subrun; 
		CTAGS[counter] = CTAG_vs_SUBRUN->GetBinContent(i_subrun);
		SIGMAS[counter] = SIGMA_vs_SUBRUN->GetBinContent(i_subrun);

		counter++;

	}

 }

#endif

// Config 1
// const int N_QHV = 2;
// const int N_FIELD = 2;
// const double QHV[N_QHV] = {16, 20}; //  quad settings, kV
// const double BR_APP[N_FIELD] = {-30, 30}; // Applied radial field, ppm
// Config 2
// const int N_QHV = 2;
// const int N_FIELD = 4;
// const double QHV[N_QHV] = {16, 20}; //  quad settings, kV
// const double BR_APP[N_FIELD] = {-30, -10, 10, 30}; // Applied radial field, ppm
// Config 3
// const int N_QHV = 2;
// const int N_FIELD = 2;
// const double QHV[N_QHV] = {16, 20}; //  quad settings, kV
// const double BR_APP[N_FIELD] = {-50, 50}; // Applied radial field, ppm
// Config 4
// const int N_QHV = 2;
// const int N_FIELD = 5;
// const double QHV[N_QHV] = {16, 20}; //  quad settings, kV
// const double BR_APP[N_FIELD] = {-50, -25, 0, 25, 50}; // Applied radial field, ppm

// Config 5
// const int N_QHV = 2;
// const int N_FIELD = 2;
// const double QHV[N_QHV] = {16, 18.3}; //  quad settings, kV
// const double BR_APP[N_FIELD] = {-30, 30}; // Applied radial field, ppm
// Config 6
// const int N_QHV = 2;
// const int N_FIELD = 4;
// const double QHV[N_QHV] = {16, 18.3}; //  quad settings, kV
// const double BR_APP[N_FIELD] = {-30, -10, 10, 30}; // Applied radial field, ppm
// Config 7
// const int N_QHV = 2;
// const int N_FIELD = 2;
// const double QHV[N_QHV] = {16, 18.3}; //  quad settings, kV
// const double BR_APP[N_FIELD] = {-50, 50}; // Applied radial field, ppm
// Config 8
// const int N_QHV = 2;
// const int N_FIELD = 5;
// const double QHV[N_QHV] = {16, 18.3}; //  quad settings, kV
// const double BR_APP[N_FIELD] = {-50, -25, 0, 25, 50}; // Applied radial field, ppm


// Config 9
// const int N_QHV = 3;
// const int N_FIELD = 3;
// const double QHV[N_QHV] = {16, 18, 20}; //  quad settings, kV
// const double BR_APP[N_FIELD] = {-30, 30}; // Applied radial field, ppm
// Config 10
// const int N_QHV = 3;
// const int N_FIELD = 4;
// const double QHV[N_QHV] = {16, 18, 20}; //  quad settings, kV
// const double BR_APP[N_FIELD] = {-30, -10, 10, 30}; // Applied radial field, ppm
// Config 11
// const int N_QHV = 3;
// const int N_FIELD = 2;
// const double QHV[N_QHV] = {16, 18, 20}; //  quad settings, kV
// const double BR_APP[N_FIELD] = {-50, 50}; // Applied radial field, ppm
// Config 12
// const int N_QHV = 3;
// const int N_FIELD = 5;
// const double QHV[N_QHV] = {16, 18, 20}; //  quad settings, kV
// const double BR_APP[N_FIELD] = {-50, -25, 0, 25, 50}; // Applied radial field, ppm
// Config 13
// const int N_QHV = 2;
// const int N_FIELD = 4;
// const double QHV[N_QHV] = {14, 18}; //  quad settings, kV
// const double BR_APP[N_FIELD] = {-30, -10, 10, 30}; // Applied radial field, ppm
// Config 14
/*const int N_QHV = 3;
const int N_FIELD = 4;
const double QHV[N_QHV] = {14.3, 16.3, 18.3}; //  quad settings, kV
const double BR_APP[N_FIELD] = {-30, -10, 10, 30}; // Applied radial field, ppm*/
// Config 15 
// const int N_QHV = 2;
// const int N_FIELD = 4;
// const double QHV[N_QHV] = {14.3, 18.3}; //  quad settings, kV
// const double BR_APP[N_FIELD] = {-30, -10, 10, 30}; // Applied radial field, ppm
// Config 16 
// const int N_QHV = 3;
// const int N_FIELD = 4;
// const double QHV[N_QHV] = {14.3, 16.3, 18.3}; //  quad settings, kV
// const double BR_APP[N_FIELD] = {-30, -10, 10, 30}; // Applied radial field, ppm