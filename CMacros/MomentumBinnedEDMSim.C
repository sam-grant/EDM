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

	bool quality = false; // true;

	std::string qualString;
	if(quality) qualString = "_pValQ";
	else qualString = "_test_noQ";

	// Read file
	TFile *input = TFile::Open(("../Plots/MC/dMu/5.4e-18/momScan"+qualString+".root").c_str());
	//TFile *input = TFile::Open("../Plots/MC/5.4e-18/moduloPlotsNoQ.root");
	cout << "\nRead input...\t\t: " << input << endl;

	// Store TGraphs in ROOT format
  	TFile *output = new TFile("../Plots/MC/dMu/5.4e-18/MomScan.root","RECREATE");
  	output->cd();

  	cout << "Made output" << endl;

	std::string names[] = {"S0", "S12", "S18"};//, "S12S18"};

	for(string &name: names) {

		cout << name <<endl;

		int n_slice = 7;
		//if(quality) n_slice = 6;
		//else n_slice = 7;

		//TH2D *moduloHist; 
		//TH1D *moduloProf;
		// Holders
		double A[n_slice];
		double A_err[n_slice];
		double w[n_slice];
		double w_err[n_slice];
		double c[n_slice];
		double c_err[n_slice];
		double mom[n_slice];
		double mom_err[n_slice];

		cout<<"Hello"<<endl;

		for ( int i_slice = 0; i_slice < n_slice; i_slice++ ) { 

			cout<<"Hello"<<endl;

			int step = 500;
			double lo = i_slice*step; 
        	double hi = step + i_slice*step;
        	string cut = to_string(int(lo))+"<p<"+to_string(int(hi))+" MeV";

        	cout<<"\n"<<cut<<endl;
        	std::cout<<"Getting hist"<<std::endl;
        	TH2D *moduloHist = (TH2D*)input->Get((name+"_ThetaY_vs_Time_Modulo_"+to_string(i_slice)).c_str());
        	std::cout<<"Got hist\t"<<moduloHist<<std::endl;
        	TH1D *moduloProf = moduloHist->ProfileX();

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

  			int nEntries = moduloHist->GetEntries();

  			//delete moduloProf; delete moduloHist;

			TGraphErrors *moduloGraph = new TGraphErrors(n,x,y,ex,ey);

			// Fit
			SimpleSinFit(moduloGraph, 0.15, OMEGA_A * 1e3, 0);

			std::cout<<"A_EDM:\t"<<moduloGraph->GetFunction("SimpleSinFunc")->GetParameter(0)<<std::endl;
	
			DrawSimpleSinFit(moduloGraph, name+", "+cut+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/dMu/5.4e-18/Unblinded/MomScan/"+name+"ModuloFit_"+to_string(int(lo))+".p."+to_string(int(hi))+qualString).c_str(), double(nEntries), true);

			// Get function
			TF1 *func = moduloGraph->GetFunction("SimpleSinFunc");

			// Collect 
			A[i_slice] = func->GetParameter(0);
			A_err[i_slice] = func->GetParError(0);
		
			c[i_slice] = func->GetParameter(2);
			c_err[i_slice] = func->GetParError(2);
		
			mom[i_slice] = hi-(step/2);
			mom_err[i_slice] = (step)/2;

		}

		//delete moduloHist; delete moduloProf;

		TGraphErrors *A_vs_mom = new TGraphErrors(n_slice,mom,A,mom_err,A_err);
		TGraphErrors *c_vs_mom = new TGraphErrors(n_slice,mom,c,mom_err,c_err);

		A_vs_mom->GetXaxis()->SetRangeUser(0,3500);
		c_vs_mom->GetXaxis()->SetRangeUser(0,3500);
	
  		DrawTGraphErrors(c_vs_mom, name+";p [MeV]: in range p #minus 50 < p < p #plus 50 MeV;c [mrad]", ("../Images/MC/dMu/5.4e-18/Unblinded/MomScan/"+name+"_c_vs_p"+qualString).c_str());
  		// DrawTGraphErrors(ABz_vs_p, ";p [MeV]: in range p #minus 50 < p < p #plus 50 MeV;c [mrad]", "../Images/MC/BzSim/1700ppm/ABz_vs_Momentum");
  		DrawTGraphErrors(A_vs_mom, name+";p [MeV]: in range p #minus 50 < p < p #plus 50 MeV;A_{EDM} [mrad]", ("../Images/MC/dMu/5.4e-18/Unblinded/MomScan/"+name+"_AEDM_vs_p"+qualString).c_str());

  		std::cout<<"End loop"<<std::endl;
  		// Store TGraphs in ROOT format
  		//TFile *output = new TFile("../Plots/MC/dMu/5.4e-18/MomScan.root","RECREATE");

  		//output->cd();

  		c_vs_mom->SetName((name+"_c_vs_mom").c_str());
  		A_vs_mom->SetName((name+"_A_vs_mom").c_str());

  		c_vs_mom->Write();
  		A_vs_mom->Write();

  	}

  	//output->Write();
  	output->Close();;

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
