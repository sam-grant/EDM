#include "Utils.h"
#include "FancyDraw.h"

double FullEDMFuncB(double *x, double *par) {

	double EDM_A = ( par[0] * TMath::Cos((par[1] * x[0]) + par[2]) ) + ( par[3] * TMath::Sin((par[1] * x[0]) + par[2]) ) + par[4];
	double wiggle = par[5] * exp(-x[0]/par[6]) * (1  + (par[7] * TMath::Cos((par[1] * x[0]) + par[2])));

  	return EDM_A / wiggle; 

}


void FullEDMFitB(TGraphErrors *graph, double par0, double par1, double par2, double par3, double par4, double par5, double par6, double par7, double xmin, double xmax) {
  
  TF1 *func = new TF1("FullEDMFuncB", FullEDMFuncB, xmin, xmax, 8);

  func->SetParameter(0, par0); // A_g-2
  //func->SetParameter(1, par1); // Omega
  func->FixParameter(1, par1); // Omega
  //func->SetParameter(2, par2); // Phi
  func->FixParameter(2, par2);
  func->SetParameter(3, par3); // A_EDM
  func->SetParameter(4, par4); // c
  func->FixParameter(5, par5); // N_0
  func->FixParameter(6, par6); // tau*gamma
  func->FixParameter(7, par7); // A

  graph->Fit(func, "QMR"); // ,"MR");

  return;

}

void Run(string config, string slice) { 

	string finName = "../Plots/MC/dMu/5.4e-18/Plots/edmPlots_"+config+".root";
	TFile *fin = TFile::Open(finName.c_str());

	cout<<slice<<endl;
	//cout<<"\n---> Opened file "<<finName<<", "<<fin<<endl;

	TH1D *h1_wiggle_mod = (TH1D*)fin->Get(("MomentumBinnedAnalysis/Wiggle_Modulo_"+slice).c_str());
	TH2D *h2_thetaY_mod = (TH2D*)fin->Get(("MomentumBinnedAnalysis/ThetaY_vs_Time_Modulo_"+slice).c_str());

	//cout<<"\n---> Got 1D wiggle histogram "<<h1_wiggle_mod<<endl;
	//cout<<"\n---> Got 2D theta_y histogram "<<h2_thetaY_mod<<endl;

	TH1D *h1_thetaY_mod = h2_thetaY_mod->ProfileX();

	TGraphErrors *gr_wiggle_mod = ConvertToTGraphErrors(h1_wiggle_mod);
	TGraphErrors *gr_thetaY_mod = ConvertToTGraphErrors(h1_thetaY_mod);

	//cout<<"\n---> Produced graphs "<<gr_wiggle_mod<<", "<<gr_thetaY_mod<<endl;

	// Make two copies of theta_y oscillation 
	TGraphErrors *gr_thetaY_mod_A = gr_thetaY_mod;
	TGraphErrors *gr_thetaY_mod_B = gr_thetaY_mod;

	// Fit wiggle for phase
	FitFivePar(gr_wiggle_mod, 1300, 2.196981*GMAGIC, 0.35, OMEGA_A, 0, 0, G2PERIOD);

	TF1 *f_wiggle = (TF1*)gr_wiggle_mod->GetFunction("FiveParFunc");

	double chi2ndf = f_wiggle->GetChisquare() / f_wiggle->GetNDF();
	double N_0 = f_wiggle->GetParameter(0); double eN_0 = f_wiggle->GetParError(0);
	double tauGamma = f_wiggle->GetParameter(1); double eTauGamma = f_wiggle->GetParError(1);
	double A = f_wiggle->GetParameter(2); double eA = f_wiggle->GetParError(2);
	double phi = f_wiggle->GetParameter(4); double ePhi = f_wiggle->GetParError(4); 

	cout<<"\n---> Wiggle fit results: \nchi2ndf = "<<chi2ndf<<"\nN_0 = "<<N_0<<"±"<<eN_0<<"\nA = "<<A<<"±"<<eA<<"\ntauGamma = "<<tauGamma<<"±"<<eTauGamma<<" µs\nphi = "<<phi<<"±"<<ePhi<<" rad"<<endl;

	gr_wiggle_mod->GetXaxis()->SetRangeUser(0, G2PERIOD);
	DrawTGraphErrors(gr_wiggle_mod, ";t_{g-2}^{mod} [#mus];Decays", "../Images/MC/TestEDMFits/gr_wiggle_mod_"+slice);

	// Fit vertical angle with standard function 
	FullEDMFit(gr_thetaY_mod_A, 0, OMEGA_A, phi, 1.69, 0, 0, G2PERIOD);

	TF1 *f_edmFit_A = (TF1*)gr_thetaY_mod_A->GetFunction("FullEDMFunc");

	chi2ndf = f_edmFit_A->GetChisquare() / f_edmFit_A->GetNDF();
	double Ag2 = f_edmFit_A->GetParameter(0); double eAg2  = f_edmFit_A->GetParError(0);
	double AEDM = f_edmFit_A->GetParameter(3); double eAEDM = f_edmFit_A->GetParError(3);
	double c = f_edmFit_A->GetParameter(4); double ec = f_edmFit_A->GetParError(4);
	
	cout<<"\n---> EDM fit A results: \nchi2ndf = "<<chi2ndf<<"\nAg2 = "<<Ag2<<"±"<<eAg2<<" mrad\nAEDM = "<<AEDM<<"±"<<eAEDM<<" mrad\nc = "<<c<<"±"<<ec<<" mrad"<<endl;

	gr_thetaY_mod_A->GetXaxis()->SetRangeUser(0, G2PERIOD);
	DrawTGraphErrors(gr_thetaY_mod_A, ";t_{g-2}^{mod} [#mus];#theta_{y} [mrad]", "../Images/MC/TestEDMFits/gr_thetaY_mod_A_"+slice);

	// Now, we need to divide the EDM fit function by the number oscillation function
	N_0 = 1.;
	FullEDMFitB(gr_thetaY_mod_B, 0, OMEGA_A, phi, 1.69, c, N_0, tauGamma, A, 0, G2PERIOD);

	TF1 *f_edmFit_B = (TF1*)gr_thetaY_mod_B->GetFunction("FullEDMFuncB");

	chi2ndf = f_edmFit_B->GetChisquare() / f_edmFit_B->GetNDF();
	Ag2 = f_edmFit_B->GetParameter(0); eAg2  = f_edmFit_B->GetParError(0);
	AEDM = f_edmFit_B->GetParameter(3); eAEDM = f_edmFit_B->GetParError(3);
	c = f_edmFit_B->GetParameter(4); ec = f_edmFit_B->GetParError(4);

	cout<<"\n---> EDM fit B results: \nchi2ndf = "<<chi2ndf<<"\nAg2 = "<<Ag2<<"±"<<eAg2<<" mrad\nAEDM = "<<AEDM<<"±"<<eAEDM<<" mrad\nc = "<<c<<"±"<<ec<<" mrad"<<endl; // "\nAg2 = "<<Ag2<<"±"<<eAg2<<" mrad\nAEDM = "<<AEDM<<"±"<<eAEDM<<" mrad\nc = "<<c<<"±"<<ec<<" mrad"<<endl;

	gr_thetaY_mod_B->GetXaxis()->SetRangeUser(0, G2PERIOD);
	//DrawFullEDMFitSim(gr_thetaY_mod_B, ";t_{g-2}^{mod} [#mus];#theta_{y} [mrad]", "../Images/MC/TestEDMFits/gr_thetaY_mod_B_"+slice,  
	DrawTGraphErrors(gr_thetaY_mod_B, ";t_{g-2}^{mod} [#mus];#theta_{y} [mrad]", "../Images/MC/TestEDMFits/gr_thetaY_mod_B_"+slice);

	//gr_wiggle_mod->Draw("AP");

	// Fit A with standard function 

	fin->Close();

	return;

}


void TestEDMFit() { 

	Run("allDecays_WORLD_250MeV_AQ_noVertCorr_full", "1000_1250");
	Run("allDecays_WORLD_250MeV_AQ_noVertCorr_full", "1250_1500");
	Run("allDecays_WORLD_250MeV_AQ_noVertCorr_full", "1500_1750");
	Run("allDecays_WORLD_250MeV_AQ_noVertCorr_full", "2000_2250");
	Run("allDecays_WORLD_250MeV_AQ_noVertCorr_full", "2250_2500");

	return;
}