#include <iostream>

#include "FancyDraw.h"
#include "Utils.h"

#include "RootInclude.h"


double xmin = 7*G2PERIOD;
double xmax = 70*G2PERIOD;
//double xmax = 70*G2PERIOD;

using namespace std;

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

void DrawFit(TGraphErrors *graph, string title, string fname) {

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

	TF1 *fit = graph->GetFunction("pol0");
	fit->SetLineWidth(3);
	fit->SetLineColor(kRed);
	fit->SetNpx(1e4);	//
	fit->Draw("SAME");

	gPad->Update();
	gStyle->SetOptFit(20222); 
	//c->SetLogy();

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}


int main() {

	
	string config = "BzSim"; 
	string field = "1700ppm";

	// Read file
	TFile *input = TFile::Open(("../Plots/MC/"+config+"/simPlots.Bz."+field+".root").c_str());
	cout << "\nRead input...\t\t: " << input << endl;

	// Get wiggle & phase
	TH1D *h1_wiggle_mod = (TH1D*)input->Get("Wiggle_Modulo");
	TGraphErrors *gr_wiggle_mod = ConvertToTGraphErrors(h1_wiggle_mod);
	FitFivePar(gr_wiggle_mod, 1300, 64, 0.35, OMEGA_A*1e3, 0, 0, G2PERIOD);
	const double phi = gr_wiggle_mod->GetFunction("FiveParFunc")->GetParameter(4);

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

  	DrawTGraphErrors(c_vs_p, ";p [MeV]: in range p #minus 50 < p < p #plus 50 MeV;c [mrad]", "../Images/MC/BzSim/1700ppm/C_vs_Momentum");
  	// DrawTGraphErrors(ABz_vs_p, ";p [MeV]: in range p #minus 50 < p < p #plus 50 MeV;c [mrad]", "../Images/MC/BzSim/1700ppm/ABz_vs_Momentum");
  	DrawFit(ABz_vs_p, ";p [MeV]: in range p #minus 50 < p < p #plus 50 MeV;A_{Bz} [mrad]", "../Images/MC/BzSim/1700ppm/ABz_vs_Momentum");


  	return 0; 

  }

  /*
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
	//FitFivePar(gr_wiggle, 5e3, 64, 1e3, OMEGA_A*1e3, 0);
	//gr_wiggle->GetXaxis()->SetRangeUser(xmin, xmax);
	//DrawFit(gr_wiggle,"fit_wiggle","../Images/MC/BzSim/"+field+"/fit_wiggle");

	TF1 *wiggle = new TF1("wiggle","[0] * exp(-x/[1]) * (1 - ([2] *  cos(([3] * x) + [4])))", xmin, xmax);
	wiggle->SetParameter(0, 1300);
	wiggle->SetParameter(1, 64);
	wiggle->SetParameter(2, 0.35);
	wiggle->SetParameter(3,OMEGA_A*1e3);
	wiggle->SetParameter(4, 0);

	TCanvas *c = new TCanvas("c","c",800,600);
	wiggle->SetNpx(10e3);
	gr_wiggle->GetXaxis()->SetRangeUser(xmin, xmax);
	gr_wiggle->Draw();
	wiggle->Draw("same");
	c->SaveAs("../Images/MC/BzSim/"+field+"/tmp_wiggle.png");

	// Fit full wiggle
	FitFivePar(gr_wiggle_full, 1300, 64, 0.35, OMEGA_A*1e3, 0, xmin, xmax);

	//gr_wiggle_full->GetXaxis()->SetRangeUser(xmin, xmax);
	
	TF1 *wiggle = gr_wiggle_full->GetFunction("FiveParFunc");

	wiggle->SetParName(0,"N_{0}");
	wiggle->SetParName(1,"#tau [#mus]");
	wiggle->SetParName(2,"A");
	wiggle->SetParName(3,"#omega_{a} (fixed) [MHz]");
	wiggle->SetParName(4,"#phi [rad]");

	DrawFit(gr_wiggle_full, wiggle,";Time [#mus];Tracks / 149 ns","../Images/MC/BzSim/"+field+"/fit_wiggle");

	// Now fold the wiggle over 20*T_g-2 on the x-axis

	FoldWiggle(gr_wiggle_full);



	//return 0;

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
	DrawFit(gr_wiggle_mod, modWiggle,";t_{g#minus2}^{mod} [#mus];Tracks / 149 ns","../Images/MC/BzSim/"+field+"/fit_mod_wiggle");

		// ======= SET PHASE =======
	const double phi = modWiggle->GetParameter(4);
	// ======= Fit for A_Bz =====
	// Bz should be 1700 ppm or 0.17 mrad
	FitBz(gr_thetaY_mod, 0.17, OMEGA_A*1e3, phi, 0, OMEGA_A*1e3, phi, 0.5, 0, G2PERIOD);
	TF1 *BzWiggle = gr_thetaY_mod->GetFunction("BzFunc");
	BzWiggle->SetParName(0,"A_{Bz} [mrad]");
	BzWiggle->SetParName(1,"#omega_{a} (fixed) [MHz]");
	BzWiggle->SetParName(2,"#phi (fixed) [rad]");
	BzWiggle->SetParName(3,"A_{EDM} [mrad]");
	BzWiggle->SetParName(4,"#omega_{a} (fixed) [MHz]");
	BzWiggle->SetParName(5,"#phi (fixed) [rad]");
	BzWiggle->SetParName(6,"C [mrad]");
	DrawFit(gr_thetaY_mod, BzWiggle,";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad]","../Images/MC/BzSim/"+field+"/fit_Bz");

	cout<<"Number of tracks in fit:\t"<<h1_wiggle_mod->GetEntries()<<endl;
	return 0;

}

*/