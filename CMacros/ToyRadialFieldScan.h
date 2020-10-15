#ifndef ToyRadialFieldScan_h
#define ToyRadialFieldScan_h

// ROOT includes
#include "TFile.h"
#include "TH1.h"

using namespace std;

// ==================== GLOBALS ====================


const double BR_BKG = 8; // ppm, the size of the field that would kill our measurement
const int N_EXP = 1000;
// Config 1
// const int N_QHV = 2;
// const int N_FIELD = 4;
// const double QHV[N_QHV] = {16, 20}; // Two quad settings, kV
// const double BR_APP[N_FIELD] = {-30, -10, 10, 30}; // Applied radial field, ppm
// Config 2
// const int N_QHV = 2;
// const int N_FIELD = 4;
// const double QHV[N_QHV] = {16, 18.3}; // Two quad settings, kV
// const double BR_APP[N_FIELD] = {-30, -10, 10, 30}; // Applied radial field, ppm
// Config 3
const int N_QHV = 3;
const int N_FIELD = 4;
const double QHV[N_QHV] = {16, 18, 20}; // Quad settings, kV
const double BR_APP[N_FIELD] = {-30, -10, 10, 30}; // Applied radial field, ppm
// Config 4
// const int N_QHV = 2;
// const int N_FIELD = 11;
// const double QHV[N_QHV] = {16, 20}; // Quad settings, kV
// const double BR_APP[N_FIELD] = {-50, -40, -30, -20, -10, 0, 10, 20, 30, 40, 50}; // Applied radial field, ppm
// Config 5, Maximum field settings with realistic quad settings (from Jason C.)
// const int N_QHV = 2;
// const int N_FIELD = 11;
// const double QHV[N_QHV] = {16, 18.3}; // Two quad settings, kV
// const double BR_APP[N_FIELD] = {-50, -40, -30, -20, -10, 0, 10, 20, 30, 40, 50}; // Applied radial field, ppm
// Config 6, Maximum everything
// const int N_QHV = 3;
// const int N_FIELD = 11;
// const double QHV[N_QHV] = {16, 18, 20}; // Two quad settings, kV
// const double BR_APP[N_FIELD] = {-50, -40, -30, -20, -10, 0, 10, 20, 30, 40, 50}; // Applied radial field, ppm

const int N_SUBRUNS = 13; // Lucky number
const int SUBRUN_INTERVAL = 25;
const double R_0 = 7112.; // Magic radius

// ==================== LOAD CTAGS, SIGMAS, AND SUBRUNS ====================

class CTAGS_SIGMAS_SUBRUNS { 

public: 

	// Public variables
	int SUBRUNS[N_SUBRUNS];
	double CTAGS[N_SUBRUNS];
	double SIGMAS[N_SUBRUNS];

	// Member functions declaration
	CTAGS_SIGMAS_SUBRUNS();

};

 // Constructor
 CTAGS_SIGMAS_SUBRUNS::CTAGS_SIGMAS_SUBRUNS() {

 	TFile *file = TFile::Open("../Plots/Data/MeanCaloPos/CTAG_SUBRUN_SIGMA_15921.root");
 	// Load histograms
	TH1D *CTAG_vs_SUBRUN = (TH1D*)file->Get("CTAG_vs_SUBRUN"); 
	TH1D *SIGMA_vs_SUBRUN = (TH1D*)file->Get("SIGMA_vs_SUBRUN"); 

 	int counter = 0; 

	for (int i_subrun = SUBRUN_INTERVAL; i_subrun <= N_SUBRUNS*SUBRUN_INTERVAL; i_subrun = i_subrun + SUBRUN_INTERVAL) { 

		SUBRUNS[counter] = i_subrun; 
		CTAGS[counter] = CTAG_vs_SUBRUN->GetBinContent(i_subrun+1);
		SIGMAS[counter] = SIGMA_vs_SUBRUN->GetBinContent(i_subrun+1);

		counter++;

	}

 } 

// Store class member function as a global variable
CTAGS_SIGMAS_SUBRUNS ctags_sigmas_subruns;

#endif