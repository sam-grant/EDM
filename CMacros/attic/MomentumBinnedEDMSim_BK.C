#include <iostream>

#include "FancyDraw.h"
#include "Utils.h"

#include "TFile.h"
#include "TMath.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TProfile.h"
#include "TF1.h"
#include "TDirectory.h"
#include "TObject.h"
#include "TGraphErrors.h"
#include "TCanvas.h"
#include "TLegend.h"
#include "TPaveStats.h"
#include "TPaveText.h"
#include "TVirtualFFT.h"


using namespace std;

int main() {

	bool quality = true; // true;

	std::string qualString;
	if(quality) qualString = "_pValQ";
	else qualString = "_test_noQ";

	// Read file
	TFile *input = TFile::Open(("../Plots/MC/dMu/5.4e-18/momScan"+qualString+".root").c_str());
	//TFile *input = TFile::Open("../Plots/MC/5.4e-18/moduloPlotsNoQ.root");
	cout << "\nRead input...\t\t: " << input << endl;

	TH2D *moduloHist;
	TH1D *moduloProf;
	TGraphErrors *moduloGraph;

	// Function
	TF1 *func;

	int n_slice;
	if(quality) n_slice = 6;
	else n_slice = 7;

	// Holders
	double A[n_slice];
	double A_err[n_slice];
	double w[n_slice];
	double w_err[n_slice];
	double C[n_slice];
	double C_err[n_slice];
	double mom[n_slice];
	double mom_err[n_slice];

	for ( int i_slice = 0; i_slice < n_slice; i_slice++ ) { 

		int step = 500;
		double lo = i_slice*step; 
        double hi = step + i_slice*step;
        string cut = to_string(int(lo))+"<p<"+to_string(int(hi))+" MeV";

        cout<<"\n"<<cut<<endl;

		moduloHist = (TH2D*)input->Get(("ThetaY_vs_Time_Modulo_"+to_string(i_slice)).c_str());
		//if(moduloHist==0) continue;

		cout << "Got modulo hist...\t: " << moduloHist <<endl;

		// Make profile
		moduloProf = moduloHist->ProfileX();
		cout << "Generated x-profile...\t: " << moduloProf << endl; 

		// Convert to TGraph
		int n = moduloProf->GetNbinsX();
		double x[n];
	  	double ex[n];
	  	double y[n];
	  	double ey[n];
	
	  	for(int i = 0; i < n; i++) {
	
	  		x[i] = moduloProf->GetBinCenter(i+1);
	  		ex[i] = 0; 
	  		y[i] = moduloProf->GetBinContent(i+1); 
	      	ey[i] = moduloProf->GetBinError(i+1); 
	
	  	}
	
		moduloGraph = new TGraphErrors(n,x,y,ex,ey);
		cout << "Generated TGraph...\t: " << moduloGraph << endl;
//	
		// Fit
		SimpleSinFit(moduloGraph, 0.15, OMEGA_A * 1e3, 0);
	
		DrawSimpleSinFit(moduloGraph, cut+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad]", ("../Images/MC/dMu/5.4e-18/Unblinded/MomScan/ModuloFit_"+to_string(int(lo))+".p."+to_string(int(hi))+qualString).c_str(), double(moduloProf->GetEntries()), false);

		// Get function
		func = moduloGraph->GetFunction("SimpleSinFunc");

		// Collect 
		A[i_slice] = func->GetParameter(0);
		A_err[i_slice] = func->GetParError(0);
		
		C[i_slice] = func->GetParameter(2);
		C_err[i_slice] = func->GetParError(2);
		
		mom[i_slice] = hi-(step/2);
		mom_err[i_slice] = (step)/2;

	}

	TGraphErrors *A_vs_mom = new TGraphErrors(n_slice,mom,A,mom_err,A_err);
	TGraphErrors *c_vs_mom = new TGraphErrors(n_slice,mom,C,mom_err,C_err);

	A_vs_mom->GetXaxis()->SetRangeUser(0,3500);
	c_vs_mom->GetXaxis()->SetRangeUser(0,3500);
	
  	DrawTGraphErrors(c_vs_mom, ";p [MeV]: in range p #minus 50 < p < p #plus 50 MeV;c [mrad]", ("../Images/MC/dMu/5.4e-18/Unblinded/MomScan/c_vs_p"+qualString).c_str());
  	// DrawTGraphErrors(ABz_vs_p, ";p [MeV]: in range p #minus 50 < p < p #plus 50 MeV;c [mrad]", "../Images/MC/BzSim/1700ppm/ABz_vs_Momentum");
  	DrawTGraphErrors(A_vs_mom, ";p [MeV]: in range p #minus 50 < p < p #plus 50 MeV;A_{EDM} [mrad]", ("../Images/MC/dMu/5.4e-18/Unblinded/MomScan/AEDM_vs_p"+qualString).c_str());

  	// Store TGraphs in ROOT format
  	TFile *output = new TFile("../Plots/MC/dMu/5.4e-18/MomScan.root","RECREATE");

  	output->cd();

  	c_vs_mom->SetName("c_vs_mom");
  	A_vs_mom->SetName("A_vs_mom");

  	c_vs_mom->Write();
  	A_vs_mom->Write();

  	output->Close();

  	std::cout<<"Written graphs to ../Plots/MC/dMu/5.4e-18/MomScan.root"<<std::endl;

	return 0;
}


// Sanity plots
//TH2D *ThetaY_vs_Time_Modulo_Fine;
//TH1D *TrackMomentum;
//TH1D *ThetaY_vs_Time_ProjX;
//TH1D *ThetaY_vs_Time_ProjY;
//TH1D *ThetaY_vs_Time_Modulo_Fine_ProjX;
//TH1D *ThetaY_vs_Time_Modulo_Fine_ProjY;

     
// ============== Sanity plots ==============
     
//ThetaY_vs_Time_Modulo_Fine = (TH2D*)input->Get(("ThetaY_vs_Time_Modulo_Fine_"+to_string(i_slice)).c_str());
//DrawTH2(ThetaY_vs_Time_Modulo_Fine, cut, ("../Images/MC/5.4e-18/MomScan/ThetaY_vs_Time_Modulo_2D_"+to_string(i_slice)+qualString).c_str());
	
//TrackMomentum = (TH1D*)input->Get(("TrackMom_"+to_string(i_slice)).c_str()); // ->ProjectionY();
//DrawTH1(TrackMomentum, cut, ("../Images/MC/5.4e-18/MomScan/TrackMom_"+to_string(i_slice)+qualString).c_str());
//ThetaY_vs_Time_ProjX = ((TH2D*)input->Get(("ThetaY_vs_Time_"+to_string(i_slice)).c_str()))->ProjectionX();
//DrawTH1(ThetaY_vs_Time_ProjX, cut, ("../Images/MC/5.4e-18/MomScan/ThetaY_vs_Time_ProjX_"+to_string(i_slice)+qualString).c_str());
//ThetaY_vs_Time_ProjY = ((TH2D*)input->Get(("ThetaY_vs_Time_"+to_string(i_slice)).c_str()))->ProjectionY();
//DrawTH1(ThetaY_vs_Time_ProjY, cut, ("../Images/MC/5.4e-18/MomScan/ThetaY_vs_Time_ProjY_"+to_string(i_slice)+qualString).c_str());
//ThetaY_vs_Time_Modulo_Fine_ProjX = ((TH2D*)input->Get(("ThetaY_vs_Time_Modulo_Fine_"+to_string(i_slice)).c_str()))->ProjectionX();
//DrawTH1(ThetaY_vs_Time_Modulo_Fine_ProjX, cut, ("../Images/MC/5.4e-18/MomScan/ThetaY_vs_Time_Modulo_ProjX_"+to_string(i_slice)+qualString).c_str());
//ThetaY_vs_Time_Modulo_Fine_ProjY = ((TH2D*)input->Get(("ThetaY_vs_Time_Modulo_Fine_"+to_string(i_slice)).c_str()))->ProjectionY();
//DrawTH1(ThetaY_vs_Time_Modulo_Fine_ProjY, cut, ("../Images/MC/5.4e-18/MomScan/ThetaY_vs_Time_Modulo_ProjY_"+to_string(i_slice)+qualString).c_str());
// ==========================================
