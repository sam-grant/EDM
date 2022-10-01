#include "Utils.h"
#include "FancyDraw.h"

void Run(string config, int lo, int hi) { // string slice) { 

	string slice = to_string(lo)+"_"+to_string(hi);
	string sliceTitle = to_string(lo)+"-"+to_string(hi)+" MeV";

	string finName = "../Plots/MC/dMu/5.4e-18/Plots/edmPlots_"+config+".root";
	TFile *fin = TFile::Open(finName.c_str());

	cout<<"---> "<<slice<<endl;

	// Get phase
	TH1D *h1_wiggle_mod = (TH1D*)fin->Get("SimultaneousAnalysis/Wiggle_Modulo");

	//cout<<"\n---> Opened file "<<finName<<", "<<fin<<endl;

	TH1D *h1_wiggle_mod_slice = (TH1D*)fin->Get(("MomentumBinnedAnalysis/Wiggle_Modulo_"+slice).c_str());

	if(h1_wiggle_mod_slice->GetSumw2N() == 0) h1_wiggle_mod_slice->Sumw2(kTRUE);
	h1_wiggle_mod_slice->Scale(1./h1_wiggle_mod_slice->GetMaximum());

	TH2D *h2_thetaY_mod = (TH2D*)fin->Get(("MomentumBinnedAnalysis/ThetaY_vs_Time_Modulo_"+slice).c_str());

	//cout<<"\n---> Got 1D wiggle histogram "<<h1_wiggle_mod<<endl;
	//cout<<"\n---> Got 2D theta_y histogram "<<h2_thetaY_mod<<endl;

	TH1D *h1_thetaY_mod = h2_thetaY_mod->ProfileX();

	TGraphErrors *gr_wiggle_mod = ConvertToTGraphErrors(h1_wiggle_mod);
	TGraphErrors *gr_wiggle_mod_slice = ConvertToTGraphErrors(h1_wiggle_mod_slice);
	TGraphErrors *gr_thetaY_mod = ConvertToTGraphErrors(h1_thetaY_mod);

	//cout<<"\n---> Produced graphs "<<gr_wiggle_mod<<", "<<gr_thetaY_mod<<endl;

	// Make two copies of theta_y oscillation 
	TGraphErrors *gr_thetaY_mod_A = gr_thetaY_mod;
	TGraphErrors *gr_thetaY_mod_B = gr_thetaY_mod;

	// Fit main wiggle for phase
	FitFivePar(gr_wiggle_mod, 1300, TAU*GMAGIC, 0.35, OMEGA_A, 0, 0, G2PERIOD);

	TF1 *f_wiggle = (TF1*)gr_wiggle_mod->GetFunction("FiveParFunc");

	const double phi = f_wiggle->GetParameter(4); const double ePhi = f_wiggle->GetParError(4);

	cout<<"\n---> Main phase: "<<phi<<"±"<<ePhi<<" rad"<<endl;

	// Fit wiggle slice
	gr_wiggle_mod_slice->GetYaxis()->SetRangeUser(-0.05, 1.05);
	FitFivePar(gr_wiggle_mod_slice, 1300, TAU*GMAGIC, 0.35, OMEGA_A, 0, 0, G2PERIOD);

	TF1 *f_wiggle_slice = (TF1*)gr_wiggle_mod_slice->GetFunction("FiveParFunc");

	double chi2ndf = f_wiggle_slice->GetChisquare() / f_wiggle_slice->GetNDF();
	double N_0 = f_wiggle_slice->GetParameter(0); double eN_0 = f_wiggle_slice->GetParError(0);
	double tauGamma = f_wiggle_slice->GetParameter(1); double eTauGamma = f_wiggle_slice->GetParError(1);
	double A = f_wiggle_slice->GetParameter(2); double eA = f_wiggle_slice->GetParError(2);
	double phi_slice = f_wiggle_slice->GetParameter(4); double ePhi_slice = f_wiggle_slice->GetParError(4); 

	cout<<"\n---> Wiggle fit results: \nchi2ndf = "<<chi2ndf<<"\nN_0 = "<<N_0<<"±"<<eN_0<<"\nA = "<<A<<"±"<<eA<<"\ntauGamma = "<<tauGamma<<"±"<<eTauGamma<<" µs\nphi = "<<phi_slice<<"±"<<ePhi_slice<<" rad"<<endl;

	gr_wiggle_mod_slice->GetXaxis()->SetRangeUser(0, G2PERIOD);
	DrawTGraphErrors(gr_wiggle_mod_slice, sliceTitle+";t_{g-2}^{mod} [#mus];Normalised decays", "../Images/MC/TestEDMFits/gr_wiggle_mod_"+slice);

	// Fit vertical angle with standard function 
	FullEDMFit(gr_thetaY_mod_A, 0, OMEGA_A, phi, 1.69, 0, 0, G2PERIOD);

	TF1 *f_edmFit_A = (TF1*)gr_thetaY_mod_A->GetFunction("FullEDMFunc");

	chi2ndf = f_edmFit_A->GetChisquare() / f_edmFit_A->GetNDF();
	double Ag2 = f_edmFit_A->GetParameter(0); double eAg2  = f_edmFit_A->GetParError(0);
	double AEDM = f_edmFit_A->GetParameter(3); double eAEDM = f_edmFit_A->GetParError(3);
	double c = f_edmFit_A->GetParameter(4); double ec = f_edmFit_A->GetParError(4);
	
	cout<<"\n---> EDM fit A results: \nchi2ndf = "<<chi2ndf<<"\nAg2 = "<<Ag2<<"±"<<eAg2<<" mrad\nAEDM = "<<AEDM<<"±"<<eAEDM<<" mrad\nc = "<<c<<"±"<<ec<<" mrad"<<endl;

	gr_thetaY_mod_A->GetXaxis()->SetRangeUser(0, G2PERIOD);
	DrawTGraphErrors(gr_thetaY_mod_A, sliceTitle+";t_{g-2}^{mod} [#mus];#LT#theta_{y}#GT [mrad]", "../Images/MC/TestEDMFits/gr_thetaY_mod_A_"+slice);

	// Now, we need to divide the EDM fit function by the number oscillation function
	N_0 = 1.;
	FullEDMFitB(gr_thetaY_mod_B, 0, OMEGA_A, phi, 0.20, c, N_0, tauGamma, A, 0, G2PERIOD);

	TF1 *f_edmFit_B = (TF1*)gr_thetaY_mod_B->GetFunction("FullEDMFunc");

	chi2ndf = f_edmFit_B->GetChisquare() / f_edmFit_B->GetNDF();
	Ag2 = f_edmFit_B->GetParameter(0); eAg2  = f_edmFit_B->GetParError(0);
	AEDM = f_edmFit_B->GetParameter(3); eAEDM = f_edmFit_B->GetParError(3);
	c = f_edmFit_B->GetParameter(4); ec = f_edmFit_B->GetParError(4);



	cout<<"\n---> EDM fit B results: \nchi2ndf = "<<chi2ndf<<"\nAg2 = "<<Ag2<<"±"<<eAg2<<" mrad\nAEDM = "<<AEDM<<"±"<<eAEDM<<" mrad\nc = "<<c<<"±"<<ec<<" mrad"<<endl; // "\nAg2 = "<<Ag2<<"±"<<eAg2<<" mrad\nAEDM = "<<AEDM<<"±"<<eAEDM<<" mrad\nc = "<<c<<"±"<<ec<<" mrad"<<endl;

	gr_thetaY_mod_B->GetYaxis()->SetRangeUser(-.5, .5);//G2PERIOD);
	gr_thetaY_mod_B->GetXaxis()->SetRangeUser(0, G2PERIOD);
	//DrawFullEDMFitSim(gr_thetaY_mod_B, ";t_{g-2}^{mod} [#mus];#theta_{y} [mrad]", "../Images/MC/TestEDMFits/gr_thetaY_mod_B_"+slice,  
	DrawTGraphErrors(gr_thetaY_mod_B, sliceTitle+";t_{g-2}^{mod} [#mus];#LT#theta_{y}#GT  [mrad]", "../Images/MC/TestEDMFits/gr_thetaY_mod_B_"+slice);

	cout<<"\n---> AEDM * A = "<<AEDM*A<<endl; 
	//gr_wiggle_mod->Draw("AP");

	// Fit A with standard function 

	fin->Close();

	return;

}


void TestEDMFit() { 

	int step = 250; 
	int n_cuts = PMAX / step;

	for(int i_cut = 0; i_cut < n_cuts; i_cut++) {

    int lo = 0 + i_cut*step; 
    int hi = step + i_cut*step;

    string slice = to_string(lo)+"_"+to_string(hi);

		Run("allDecays_WORLD_250MeV_AQ_noVertCorr_full", lo, hi);

	}

	return;
}