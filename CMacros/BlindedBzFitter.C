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

#include "../Blinding/Blinders.hh"
#include "FancyDraw.h"

double xmin = 7*G2PERIOD;
double xmax = 70*G2PERIOD;

// SETUP BLINDING

using namespace blinding;

bool unblind = true;

double R = 3.5; // ppm shift
double boxWidth = 0.25;
double gausWidth = 0.7;

Blinders::fitType ftype = Blinders::kOmega_a;
Blinders getBlinded( ftype, "Blinding string", boxWidth, gausWidth );

// CONSTANTS
double e = 1.6e-19; // J
double aMu = 11659208.9e-10; 
double mMu = 105.6583715; // u
double mMuKg = mMu * 1.79e-30; // kg
double B = 1.451269; // T
double c = 299792458.; // m/s
double cm2m = 100.0; // cm -> m
double hbar = 1.05457e-34;
double pmagic = mMu/std::sqrt(aMu);
double gmagic = std::sqrt( 1.+1./aMu );
double beta   = std::sqrt( 1.-1./(gmagic*gmagic) );
double d0 = 1.9e-19; // BNL edm limit in e.cm
double ppm = 1e-6;
double alpha = 0.13; // asymmetry factor
//double TESTEDM = d0 / 2.; 

double blinded_edm_value(bool unblind) {

  // returns a blinded input edm value. returned dMu will be unphysical. it will be in the range of +- 3*d0 centred around 10*d0

  // How far from the ref value are we
  double omega_diff;
  if(!unblind) { // unblinded verions
    omega_diff = ((getBlinded.paramToFreq(R) / getBlinded.referenceValue()) - 1) / ppm;
  } else if(unblind) {
    Blinders myBlinder( ftype ); // Just to print out the warning
    // I think that you have to reapply the new blinding to the blinded plot to unblind it. 
    //omega_diff = (myBlinder.paramToFreq(R) / myBlinder.referenceValue() - 1) / ppm;
    omega_diff = 0.0;
  }

  double dMu_blind = omega_diff * d0; // this is the blinded dMu in e.cm
  
  return dMu_blind;
  
}

// For sanity check d_mu plot
double blinded_edm_value(std::string tmp) {
  
  //
  // returns a blinded input edm value. returned dMu will be unphysical. it will be in the range of +- 3*d0 centred around 10*d0
  //

  //Blinders myBlinder( ftype );
  Blinders getBlinded( ftype, tmp.c_str(), boxWidth, gausWidth );

  double omega_blind = getBlinded.paramToFreq(R); // this is the blinded omegaA value
  double omega_ref   = getBlinded.referenceValue(); // this is the reference omegaA value
  // How far from the ref value are we
  double omega_diff  =  ((omega_blind / omega_ref) - 1) / ppm; // this is (omega_blind - omega_ref) in units of ppm
  double dMu_blind   = omega_diff * d0; // this is the blinded dMu in e.cm
  
  return dMu_blind;

}

double GetDelta(double dMu) {
  double eta = ((4 * mMuKg * c * dMu)/ (hbar * cm2m) );
  double dMu_tmp = (hbar * cm2m * eta) / (4 * mMuKg * c);
  std::cout<<"eta_check:\t"<<eta<<std::endl;
  std::cout<<"dMu_check:\t"<<dMu_tmp<<std::endl;
  double tan_delta = (eta * beta) / (2 * aMu);
  double delta = atan(tan_delta);
  return delta;
}

double EDMFunc( double *x, double *p )  {
  double time = x[0];// + p[3]; // time offset
  return (-p[0] * cos(p[1]* time + p[2]));
}

////////////////////////////////////


double FiveParFunc(double *x, double *par) {
 	return par[0] * exp(-x[0]/par[1]) * (1 - (par[2] * cos((par[3] * x[0]) + par[4])));
}


void FitFivePar(TGraphErrors *graph, double par0, double par1, double par2, double par3, double par4, double min, double max) {
  
	TF1 *func = new TF1("FiveParFunc", FiveParFunc, min, max, 5);

	func->SetParameter(0, par0); // N0
	func->SetParameter(1, par1); // tau
	func->SetParameter(2, par2); // A
	func->FixParameter(3, par3); // Omega
	//func->SetParameter(4, par4);
  	//func->SetParLimits(4, -TMath::Pi(), TMath::Pi());

  	graph->Fit(func, "MR"); // ,"MR");

  	std::cout << "\nChi^2/ndf...\t:" << func->GetChisquare() / func->GetNDF() << std::endl;

  	return;

}



double BzFunc(double *x, double *par) {
	return  (par[0] * cos((par[1]*x[0]) + par[2])) + (par[3] * sin((par[4]*x[0]) + par[5])) + par[6]; 
}

void FitBz(TGraphErrors *graph, double par0, double par1, double par2, double par3, double par4, double par5, double par6, double min, double max) {

	TF1 *func = new TF1("BzFunc", BzFunc, min, max, 7);

	//func->SetParLimits(0, par0/4, par0);
	// A_Bz
	func->SetParameter(0, par0);
	//func->SetParLimits(0, par0-par0*0.5, par0+par0*0.5);
	 
	func->FixParameter(1, par1); // omega_a
	func->FixParameter(2, par2); // phi
	func->SetParameter(3, 0); // A_EDM
	func->FixParameter(4, par4); // omega_a
	func->FixParameter(5, par5); // phi
	func->SetParameter(6, par6); // C

  	graph->Fit(func, "MR"); // ,"MR");

  	std::cout << "\nChi^2/ndf...\t:" << func->GetChisquare() / func->GetNDF() << std::endl;
  	//std::cout << "\nN...\t:" << graph->GetEn << std::endl;
	return;

}

TGraphErrors *ConvertToTGraphErrors(TH1D *hist) {

	int n = hist->GetNbinsX();
	double x[n]; double ex[n];
  	double y[n]; double ey[n];

  	for(int i = 0; i < n; i++) {

  		x[i] = hist->GetBinCenter(i+1);
  		ex[i] = 0; 
  		y[i] = hist->GetBinContent(i+1); 
      	ey[i] = hist->GetBinError(i+1); 

  	}

  	return new TGraphErrors(n, x, y, ex, ey);

}

void DrawWiggleFit(TGraphErrors *graph, TF1 *func, string title, string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	gStyle->SetStatFormat("6.3g");
  	graph->Draw();
  	gPad->Update();
  	gStyle->SetStatY(0.89);
  	gStyle->SetStatX(0.49);
  	gStyle->SetStatBorderSize(0);
  	gStyle->SetOptFit(111);

	graph->SetTitle(title.c_str());
	graph->GetXaxis()->SetTitleSize(.04);
	graph->GetYaxis()->SetTitleSize(.04);
	graph->GetXaxis()->SetTitleOffset(1.1);
	graph->GetYaxis()->SetTitleOffset(1.25);
	graph->GetXaxis()->CenterTitle(true);
	graph->GetYaxis()->CenterTitle(true);
	graph->GetYaxis()->SetMaxDigits(4);
	graph->SetMarkerStyle(20); //  Full circle
	graph->Draw("AP");

	func->SetLineWidth(3);
	func->SetLineColor(kRed);
	func->SetNpx(1e4);	

	gPad->Update();
	gStyle->SetOptFit(20222); 

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawLineFit(TGraphErrors *graph, TF1 *func, string title, string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	gStyle->SetStatFormat("6.3g");
  	graph->Draw();
  	gPad->Update();
  	gStyle->SetStatY(0.89);
  	gStyle->SetStatX(0.69);
  	gStyle->SetStatBorderSize(0);
  	gStyle->SetOptFit(111);

	graph->SetTitle(title.c_str());
	graph->GetXaxis()->SetTitleSize(.04);
	graph->GetYaxis()->SetTitleSize(.04);
	graph->GetXaxis()->SetTitleOffset(1.1);
	graph->GetYaxis()->SetTitleOffset(1.25);
	graph->GetXaxis()->CenterTitle(true);
	graph->GetYaxis()->CenterTitle(true);
	graph->GetYaxis()->SetMaxDigits(4);
	graph->SetMarkerStyle(20); //  Full circle
	graph->Draw("AP");

	func->SetLineWidth(3);
	func->SetLineColor(kRed);
	func->SetNpx(1e4);	

	gPad->Update();
	gStyle->SetOptFit(20222); 

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void FoldWiggle(TGraphErrors *gr) {

	// Gleb method 
	int right = 0;
	int left = 0;
	int i_section = 0; 

	for(int i_point = 0; i_point < gr->GetN(); i_point++) { 

		int x = gr->GetPointX(i_point);
		int y = gr->GetPointY(i_point);
		

		// cout<<x<<" "<<y<<endl;

	}

	return;
}

void MomentumBinnedAnalysis(TFile *input, const double phi) { 

	vector<TGraphErrors*> gr_;

	vector<double> c_; 
	vector<double> ec_;
	vector<double> mom_;
	vector<double> ABz_;
	vector<double> eABz_;

	double pmin = 700; double pmax = 800;

	int count = 0;

  	for(int i_cut = 0; i_cut < 17; i_cut++) {

  		TH2D *h2_thetaY_mod = (TH2D*)input->Get(("ThetaY_vs_Time_Modulo_"+to_string(int(pmin))+"_"+to_string(int(pmax))).c_str());
  		TH1D *px_thetaY_mod = (TH1D*)h2_thetaY_mod->ProfileX();
  		TGraphErrors *gr_thetaY_mod = ConvertToTGraphErrors(px_thetaY_mod);

  		FitBz(gr_thetaY_mod, 0.17, OMEGA_A*1e3, phi, 0, OMEGA_A*1e3, phi, 0.5, 0, G2PERIOD);
  		gr_.push_back(gr_thetaY_mod);

  		//cout<<gr_thetaY_mod->GetFunction("BzFunc")->GetParameter(6)<<endl;
  		c_.push_back(gr_thetaY_mod->GetFunction("BzFunc")->GetParameter(6));
  		ec_.push_back(gr_thetaY_mod->GetFunction("BzFunc")->GetParError(6));
  		ABz_.push_back(gr_thetaY_mod->GetFunction("BzFunc")->GetParameter(0));
  		eABz_.push_back(gr_thetaY_mod->GetFunction("BzFunc")->GetParError(0));

  		mom_.push_back((pmin+pmax)/2);

  		pmin = pmin + 100; 
     	pmax = pmax + 100; 

     	delete h2_thetaY_mod;
     	delete px_thetaY_mod;
     	delete gr_thetaY_mod;

     	count++;
  	}

  	int n = c_.size();

  	double c[n]; double ec[n];
  	double p[n]; double ep[n];
  	double ABz[n]; double eABz[n];

  	for(int i_point = 0; i_point < n; i_point++) { 

  		p[i_point] = mom_.at(i_point); ep[i_point] = 0.;
  		c[i_point] = c_.at(i_point); ec[i_point] = ec_.at(i_point);
  		ABz[i_point] = ABz_.at(i_point); eABz[i_point] = eABz_.at(i_point); 

  	}

  	TGraphErrors *c_vs_p = new TGraphErrors(n, p, c, ep, ec);
  	TGraphErrors *ABz_vs_p = new TGraphErrors(n, p, ABz, ep, eABz);

  	ABz_vs_p->Fit("pol0");
  	TF1 *fit = ABz_vs_p->GetFunction("pol0");
  	fit->SetParName(0, "#LTA_{B_{z}}#GT [ppm]");

  	double avgBz = fit->GetParameter(0);
  	ABz_vs_p->GetYaxis()->SetRangeUser(0., avgBz+.25);



  	DrawTGraphErrors(c_vs_p, ";p [MeV]: in range p #minus 50 < p < p #plus 50 MeV;c [mrad]", "../Images/MC/BzSim/1700ppm/C_vs_Momentum");
  	// DrawTGraphErrors(ABz_vs_p, ";p [MeV]: in range p #minus 50 < p < p #plus 50 MeV;c [mrad]", "../Images/MC/BzSim/1700ppm/ABz_vs_Momentum");
  	DrawLineFit(ABz_vs_p, fit, ";p [MeV]: in range p #minus 50 < p < p #plus 50 MeV;A_{Bz} [mrad]", "../Images/MC/BzSim/1700ppm/ABz_vs_Momentum");

  	return;
}


int main() {

	if (unblind) {
      std::cout << "\n========= UNBLINDED ==========" << "\n";
    }
  
	bool sanityPlots = false;//true;

	string config = "BzSim"; 
	string field = "1700ppm";//"82ppm"; // 
	// Read file
	TFile *input = TFile::Open(("../Plots/MC/"+config+"/simPlots.Bz."+field+".root").c_str());
	cout << "\nRead input...\t\t: " << input << endl;

	// Get histograms
	TH1D *h1_wiggle = (TH1D*)input->Get("Wiggle");
	TH1D *h1_wiggle_full = (TH1D*)input->Get("Wiggle_Full");
	TH1D *h1_wiggle_mod = (TH1D*)input->Get("Wiggle_Modulo");
	TH1D *h1_wiggle_mod_full = (TH1D*)input->Get("Wiggle_Modulo_Full");
	//TH1D *h1_wiggle_mod_shift = (TH1D*)input->Get("Wiggle_Modulo_Shift");

	TH2D *h2_thetaY_mod = (TH2D*)input->Get("ThetaY_vs_Time_Modulo");
	//TH2D *h2_thetaY_mod_shift = (TH2D*)input->Get("ThetaY_vs_Time_Modulo_Shift");

	cout << "Got histograms...\n: ";
	cout << h1_wiggle << endl;
	cout << h1_wiggle_full << endl;
	cout << h1_wiggle_mod << endl;
	//cout << h1_wiggle_mod_shift << endl;
	cout << h2_thetaY_mod << endl;

	// Make profiles
	TH1D *px_thetaY_mod = h2_thetaY_mod->ProfileX();
	//TH1D *px_thetaY_mod_shift = h2_thetaY_mod_shift->ProfileX();

	cout << "Generated x-profile...\n: ";
	cout << px_thetaY_mod << endl; 

	// Rebin
	
	cout << "\nNBins before rebin...\t\t: " << px_thetaY_mod->GetNbinsX() << endl;
	cout << "Binwidth before rebin...\t: " << px_thetaY_mod->GetXaxis()->GetBinWidth(1) << "\n" << endl;
	//px_thetaY_mod->Rebin(2);
	cout << "NBins post rebin...\t: " << px_thetaY_mod->GetNbinsX() << endl;
	cout << "Binwidth post rebin...\t: " << px_thetaY_mod->GetXaxis()->GetBinWidth(1) << "\n" << endl;
	

	TGraphErrors *gr_wiggle = ConvertToTGraphErrors(h1_wiggle);
	TGraphErrors *gr_wiggle_full = ConvertToTGraphErrors(h1_wiggle_full);
	TGraphErrors *gr_wiggle_mod = ConvertToTGraphErrors(h1_wiggle_mod);
	TGraphErrors *gr_wiggle_mod_full = ConvertToTGraphErrors(h1_wiggle_mod_full);
	TGraphErrors *gr_thetaY_mod = ConvertToTGraphErrors(px_thetaY_mod);
	//TGraphErrors *gr_thetaY_mod_shift = ConvertToTGraphErrors(px_thetaY_mod_shift);

	// Draw all base plots
	if(sanityPlots) { 

		DrawTH1(h1_wiggle,"h1_wiggle","../Images/MC/BzSim/"+field+"/h1_wiggle");
		DrawTH1(h1_wiggle_full,"h1_wiggle","../Images/MC/BzSim/"+field+"/h1_wiggle_full");
		DrawTH1(h1_wiggle_mod,"h1_wiggle_mod","../Images/MC/BzSim/"+field+"/h1_wiggle_mod");
		DrawTGraphErrors(gr_wiggle,"gr_wiggle","../Images/MC/BzSim/"+field+"/gr_wiggle");
		DrawTGraphErrors(gr_wiggle_full,"gr_wiggle_full","../Images/MC/BzSim/"+field+"/gr_wiggle_full");
		DrawTGraphErrors(gr_wiggle_mod,"gr_wiggle_mod","../Images/MC/BzSim/"+field+"/gr_wiggle_mod");
		//DrawTGraphErrors(gr_wiggle_mod_shift,"gr_wiggle_mod_shift","../Images/MC/BzSim/"+field+"/gr_wiggle_mod_shift");
		DrawTH2(h2_thetaY_mod,"h2_thetaY_mod","../Images/MC/BzSim/"+field+"/h2_thetaY_mod");
		//DrawTH2(h2_thetaY_mod_shift,"h2_thetaY_mod_shift","../Images/MC/BzSim/"+field+"/h2_thetaY_mod_shift");
		DrawTH1(px_thetaY_mod,"px_thetaY_mod","../Images/MC/BzSim/"+field+"/px_thetaY_mod");
		DrawTGraphErrors(gr_thetaY_mod, "gr_thetaY_mod", "../Images/MC/BzSim/"+field+"/gr_thetaY_mod");

	}

	// Fit full wiggle
	FitFivePar(gr_wiggle_full, 1300, 64, 0.35, OMEGA_A*1e3, 0, xmin, xmax);

	//gr_wiggle_full->GetXaxis()->SetRangeUser(xmin, xmax);
	
	TF1 *wiggle = gr_wiggle_full->GetFunction("FiveParFunc");

	wiggle->SetParName(0,"N_{0}");
	wiggle->SetParName(1,"#tau [#mus]");
	wiggle->SetParName(2,"A");
	wiggle->SetParName(3,"#omega_{a} (fixed) [MHz]");
	wiggle->SetParName(4,"#phi [rad]");

	DrawWiggleFit(gr_wiggle_full, wiggle,";Time [#mus];Tracks / 149 ns","../Images/MC/BzSim/"+field+"/fit_wiggle");

	// Now fold the wiggle over 20*T_g-2 on the x-axis

	FoldWiggle(gr_wiggle_full);

	// Now fit the modulo wiggle

	// No shift 
	FitFivePar(gr_wiggle_mod, 1300, 64, 0.35, OMEGA_A*1e3, 0, 0, G2PERIOD);
	cout<<"G2PERIOD\t"<<G2PERIOD<<endl;
	TF1 *modWiggle = gr_wiggle_mod->GetFunction("FiveParFunc");
	modWiggle->SetParName(0,"N_{0}");
	modWiggle->SetParName(1,"#tau [#mus]");
	modWiggle->SetParName(2,"A");
	modWiggle->SetParName(3,"#omega_{a} (fixed) [MHz]");
	modWiggle->SetParName(4,"#phi [rad]");
	DrawWiggleFit(gr_wiggle_mod, modWiggle,";t_{g#minus2}^{mod} [#mus];Tracks / 149 ns","../Images/MC/BzSim/"+field+"/fit_mod_wiggle");

	// ======= SET PHASE =======
	const double phi = modWiggle->GetParameter(4);

	// Shift the phase 90 deg
    double phi_edm = phi + M_PI/2.; 
    // Find a zero crossing 
    double t0 = phi * G2PERIOD / (2*M_PI);
    double zeroCrossing = 8*G2PERIOD - t0;

	// ================== get blinded A_EDM ================== 

    double dMu_blind = blinded_edm_value(unblind);  //1.6e-19*30;//
    std::cout<<"dMu_blind:\t"<<dMu_blind<<std::endl;
    double delta_blind = GetDelta(dMu_blind);
    double omega_a = getBlinded.referenceValue(); 
    double tan_A_edm = tan(delta_blind) / gmagic;

    double A_edm = alpha*atan(tan_A_edm) * 1e3; // 0.13 is asymmetry factor

   // ================== Third, inject blinded A_EDM into modulo plot ==================

    // Define blinded EDM oscillation
    TF1* edmFunc = new TF1("edmFunc",EDMFunc,zeroCrossing,zeroCrossing+G2PERIOD,3);
    edmFunc->SetParNames("A_{EDM blinded}","#omega_{a BNL}","#phi");//,"offset");
    edmFunc->SetParameters(A_edm,omega_a,phi_edm);//,xmin);
    edmFunc->SetNpx(50000);

    // Inject into modulo

    int n = gr_thetaY_mod->GetN();//binsX();
    //int nEntries = ThetaY_vs_Time_Modulo_Prof->GetEntries();

    double x[n];
    double ex[n];
    double y[n];
    double ey[n];

    for (int i(0); i<n; i++) {

      double time = gr_thetaY_mod->GetPointX(i);
      double theta_y = gr_thetaY_mod->GetPointY(i);
      double theta_y_shift = edmFunc->Eval(time);

      x[i] = time;
      ex[i] = 0;
      y[i] = theta_y + theta_y_shift;
      ey[i] = gr_thetaY_mod->GetErrorY(i);

    }

    TGraphErrors *gr_thetaY_mod_blind = new TGraphErrors(n, x, y, ex, ey);


	// ======= Fit for A_Bz =====
	// Bz should be 1700 ppm or 0.17 mrad
	FitBz(gr_thetaY_mod_blind, 0.17, OMEGA_A*1e3, phi, 0, OMEGA_A*1e3, phi, 0.5, 0, G2PERIOD);
	TF1 *BzWiggle = gr_thetaY_mod_blind->GetFunction("BzFunc");
	BzWiggle->SetParName(0,"A_{Bz} [mrad]");
	BzWiggle->SetParName(1,"#omega_{a} (fixed) [MHz]");
	BzWiggle->SetParName(2,"#phi (fixed) [rad]");
	BzWiggle->SetParName(3,"A_{EDM}^{Blind} [mrad]");
	BzWiggle->SetParName(4,"#omega_{a} (fixed) [MHz]");
	BzWiggle->SetParName(5,"#phi (fixed) [rad]");
	BzWiggle->SetParName(6,"C [mrad]");
	DrawWiggleFit(gr_thetaY_mod_blind, BzWiggle,";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad]","../Images/MC/BzSim/"+field+"/fit_blind_Bz");

	cout<<"Number of tracks in fit:\t"<<h1_wiggle_mod->GetEntries()<<endl;

	// Momentum binned 
	cout<<"\nPerforming momentum binned analysis"<<endl;
	MomentumBinnedAnalysis(input, phi);

	return 0;
}
