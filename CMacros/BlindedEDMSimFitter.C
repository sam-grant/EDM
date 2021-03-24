#include <iostream>

#include "FancyDraw.h"
#include "Utils.h"
#include "RootInclude.h"

#include "../Blinding/Blinders.hh"

using namespace blinding;

std::string config = "5.4e-18";
std::string qual = "vertCorr_eQ_eQ";

bool unblind = true; //false; //true;

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
double alpha = 0.10; //0.13; // asymmetry factor

double blinded_edm_value(bool unblind) {

  // returns a blinded input edm value. returned dMu will be unphysical. it will be in the range of +- 3*d0 centred around 10*d0

  // How far from the ref value are we
  double omega_diff;
  if(!unblind) { // Blinded verions
    omega_diff = ((getBlinded.paramToFreq(R) / getBlinded.referenceValue()) - 1) / ppm;
  } else if(unblind) {
    Blinders myBlinder( ftype ); // Just to print out the warning
    // You have to subtract the overlaid function to properly unblind the result
    omega_diff = 0.0;
  }

  double dMu_blind = omega_diff * d0; // this is the blinded dMu in e.cm
  
  return dMu_blind;
  
}

// For sanity check d_mu plot
double blinded_edm_value(std::string tmp) {

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

  	graph->Fit(func, "MR"); 

  	return;

}

double EDMFunc( double *x, double *p )  {
  double time = x[0];// + p[3]; // time offset
  return (-p[0] * cos(p[1]* time + p[2]));
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

TGraphErrors *BlindedModuloGraph(TFile *input, TGraphErrors *gr_thetaY_mod) { 

	// ================== First, fit N(t) for the phase ==================

    TH1D *h1_wiggle_mod = (TH1D*)input->Get("Wiggle_Modulo");
    TGraphErrors *gr_wiggle_mod = ConvertToTGraphErrors(h1_wiggle_mod);

    FitFivePar(gr_wiggle_mod, 1300, 64, 0.35, OMEGA_A*1e3, 0, 0, G2PERIOD);
    TF1 *modWiggle = gr_wiggle_mod->GetFunction("FiveParFunc");

    // Get phi
    double phi_omega = modWiggle->GetParameter(4);
    // Shift the phase 90 deg
    double phi_edm = phi_omega + M_PI/2.; 

    // Find a zero crossing 
    double t0 = phi_omega * G2PERIOD / (2*M_PI);
    double zeroCrossing = 8*G2PERIOD - t0;

    delete h1_wiggle_mod; delete gr_wiggle_mod; 

    // ================== Second, get blinded A_EDM ================== 

    double dMu_blind = blinded_edm_value(unblind);  
    std::cout<<"dMu_blind:\t"<<dMu_blind<<std::endl;
    double delta_blind = GetDelta(dMu_blind);
    double omega_a = getBlinded.referenceValue(); 
    double tan_A_edm = tan(delta_blind) / gmagic;
    double A_edm = alpha*atan(tan_A_edm) * 1e3; 

    // ================== Third, inject blinded A_EDM into modulo plot ==================

    // Define blinded EDM oscillation
    TF1 *blindEDMFunc = new TF1("blindEDMFunc",EDMFunc,zeroCrossing,zeroCrossing+G2PERIOD,3);
    blindEDMFunc->SetParNames("A_{EDM}^{BLIND}","#omega_{a}^{FIXED}","#phi");//,"offset");
    blindEDMFunc->SetParameters(A_edm,omega_a,phi_edm);//,xmin);
    blindEDMFunc->SetNpx(50000);

    DrawTF1(blindEDMFunc,";Time [#mus];#LT#theta_{y}#GT [mrad]","../Images/MC/dMu/"+config+"/Blinded/blindEDMFunc_"+qual+"_"+to_string(unblind));

    // Inject function into modulo plot

    // Sanity check
    // TH1D *h_sanityCheck = new TH1D("","",100,0,14);
    // for (int i(0); i<10e3; i++) htmp->Fill(blinded_edm_value(std::to_string(i))*1e19);
    // DrawTH1(htmp,"","../Images/BlindedFits/"+config+"dMu");

    int n = gr_thetaY_mod->GetN();

    double x[n]; double ex[n];
    double y[n]; double ey[n];

    for (int i(0); i<n; i++) {

      double time = gr_thetaY_mod->GetPointX(i);
      double theta_y = gr_thetaY_mod->GetPointY(i);
      double theta_y_shift = blindEDMFunc->Eval(time);

      x[i] = time;
      ex[i] = 0;
      y[i] = theta_y + theta_y_shift;
      ey[i] = gr_thetaY_mod->GetErrorY(i);

    }

    delete blindEDMFunc;

	return new TGraphErrors(n, x, y, ex, ey);

}

TGraphErrors *GenerateTGraphErrors(std::vector<double> x_, std::vector<double> y_, std::vector<double> ex_, std::vector<double> ey_) {

	int n = x_.size();
	double x[n]; double ex[n];
	double y[n]; double ey[n];

	for(int i = 0; i < n; i++) {
		x[i] = x_.at(i); ex[i] = ex_.at(i);
		y[i] = y_.at(i); ey[i] = ey_.at(i);
	}

	return new TGraphErrors(n, x, y, ex, ey);

}

void OverlayGraphs(std::vector<TGraphErrors*> graphs, std::vector<string> names, std::string title, std::string fname, double ymin, double ymax ) {

	TCanvas *c = new TCanvas("c","c",800,600);
	//c->SetRightMargin(0.20);

	//TLegend *l = new TLegend(0.81,0.35,0.99,0.65);
	//TLegend *l = new TLegend(0.81,0.15,0.99,0.85);
	//TLegend *l = new TLegend(0.79,0.69,0.89,0.89);
	TLegend *l = new TLegend(0.55,0.79,0.89,0.89);
	l->SetNColumns(3);
	l->SetBorderSize(0);

	graphs.at(0)->SetTitle(title.c_str());
	graphs.at(0)->GetXaxis()->SetTitleSize(.04);
	graphs.at(0)->GetYaxis()->SetTitleSize(.04);
	graphs.at(0)->GetXaxis()->SetTitleOffset(1.1);
	graphs.at(0)->GetYaxis()->SetTitleOffset(1.1);
	graphs.at(0)->GetXaxis()->CenterTitle(true);
	graphs.at(0)->GetYaxis()->CenterTitle(true);
	graphs.at(0)->GetYaxis()->SetMaxDigits(4);
	graphs.at(0)->GetYaxis()->SetRangeUser(ymin,ymax);

	int nGraphs = graphs.size();

	//gStyle->SetPalette(kBird);
	graphs.at(0)->SetMarkerColor(kBlack);
	graphs.at(1)->SetMarkerColor(kBlue);
	graphs.at(2)->SetMarkerColor(kRed);

	for(int i = 0; i < nGraphs; i++) {
    	graphs.at(i)->SetMarkerStyle(20);
    	//graphs.at(i)->SetMarkerColor(i+1);
    	l->AddEntry(graphs.at(i), (names.at(i)).c_str());
      	if(i==0) graphs.at(i)->Draw("AP");
      	else graphs.at(i)->Draw("P SAME");
  	}

	l->Draw("same");
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void SimultaneousAnalysis(TFile *input, TFile *output) { 

	TH2D *moduloHist = (TH2D*)input->Get("ThetaY_vs_Time_Modulo");
	TH2D *moduloHistS0 = (TH2D*)input->Get("S0_ThetaY_vs_Time_Modulo");
	TH2D *moduloHistS12 = (TH2D*)input->Get("S12_ThetaY_vs_Time_Modulo");
	TH2D *moduloHistS18 = (TH2D*)input->Get("S18_ThetaY_vs_Time_Modulo");
	TH2D *moduloHistS12S18 = (TH2D*)moduloHistS12->Clone("moduloHistS12S18"); 
	moduloHistS12S18->Add(moduloHistS18);

	TH2D *hists[] = {moduloHist, moduloHistS0, moduloHistS12, moduloHistS18, moduloHistS12S18};

	std::vector<string> names = {"S0S12S18", "S0", "S12", "S18", "S12S18"};

	int counter = 0;

	for(auto &hist: hists) { 

		string name = names.at(counter);

		std::cout<<"Got modulo for "<<name<<std::endl;

		int nEntries = hist->GetEntries();

		TH1D *moduloProf = hist->ProfileX();
		std::cout << "Generated x-profile...\t: " << moduloProf << std::endl;



		TGraphErrors *moduloGraph = BlindedModuloGraph(input, ConvertToTGraphErrors(moduloProf)); // 	;
		moduloGraph->GetYaxis()->SetRangeUser(-.425, .425);
		// Fit
		SimpleSinFit(moduloGraph, 0.15, OMEGA_A * 1e3, 0);

		std::cout<<"A_EDM:\t"<<moduloGraph->GetFunction("SimpleSinFunc")->GetParameter(0)<<std::endl;
	
		DrawSimpleSinFit(moduloGraph, name+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/dMu/"+config+"/Blinded/"+name+"_ModuloFit_"+qual+"_"+to_string(unblind)).c_str(), double(nEntries),unblind);

		moduloGraph->SetName((name+"_fit").c_str());
		moduloGraph->Write();

		delete hist;

		counter++;

	}

	return; 

}

void MomentumBinnedAnalysis(TFile *input, TFile *output) { 

	vector<TGraphErrors*> cGraphs_; vector<TGraphErrors*> AEDMGraphs_;

  	std::vector<string> names_ = { "S0", "S12", "S18" };

  	for(int i_stn = 0; i_stn < names_.size(); i_stn++) {

  		string name = names_.at(i_stn);

  		int pmin = 0.; 
  		int pmax = 100.;

  		std::vector<double> c_;
  		std::vector<double> ec_;
  		std::vector<double> p_;
  		std::vector<double> ep_;
  		std::vector<double> AEDM_;
  		std::vector<double> eAEDM_;

		pmin = 0.; 
  		pmax = 100.;

  		for(int i_cut = 0; i_cut < 50; i_cut++) {

  			std::string momSlice = std::to_string(pmin)+"_"+std::to_string(pmax);
  			int p = (pmax+pmin)/2;

  			TH2D *moduloHist = (TH2D*)input->Get((name+"_ThetaY_vs_Time_Modulo_"+momSlice).c_str());
  			if(moduloHist == 0) {
  				pmin = pmin + 100;
				pmax = pmax + 100;
  				continue;
  			}

  			int nEntries = moduloHist->GetEntries();

  			TH1D *moduloProf = moduloHist->ProfileX();

  			TGraphErrors *moduloGraph = ConvertToTGraphErrors(moduloProf);

			SimpleSinFit(moduloGraph, 0.17, OMEGA_A * 1e3, 0);

			DrawSimpleSinFit(moduloGraph, name+", "+std::to_string(pmin)+" < p [MeV] < "+std::to_string(pmax)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/dMu/"+config+"/Blinded/"+name+"_ModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), true);

			output->cd("MomentumBinnedAnalysis/ModuloFits");

			moduloGraph->SetName((name+"_fit_"+std::to_string(pmin)+"_"+std::to_string(pmax)).c_str());
			moduloGraph->Write();

			p_.push_back(p);
			ep_.push_back(pmax - p);
			c_.push_back(moduloGraph->GetFunction("SimpleSinFunc")->GetParameter(2));
			ec_.push_back(moduloGraph->GetFunction("SimpleSinFunc")->GetParError(2));
			AEDM_.push_back(moduloGraph->GetFunction("SimpleSinFunc")->GetParameter(0));
			eAEDM_.push_back(moduloGraph->GetFunction("SimpleSinFunc")->GetParError(0));

			pmin = pmin + 100;
			pmax = pmax + 100;

			delete moduloProf; delete moduloHist;

  		}

  		TGraphErrors *c_vs_p = GenerateTGraphErrors(p_, c_, ep_, ec_);
  		TGraphErrors *AEDM_vs_p = GenerateTGraphErrors(p_, AEDM_, ep_, eAEDM_);

  		c_vs_p->GetXaxis()->SetRangeUser(0,3000);
  		AEDM_vs_p->GetXaxis()->SetRangeUser(0,3000);

  		DrawTGraphErrors(c_vs_p, name+";p [MeV]: in range p #minus 50 < p < p #plus 50 MeV;c [mrad]", ("../Images/MC/dMu/"+config+"/Blinded/MomBinnedAna/"+name+"_c_vs_p_"+qual).c_str());
  		DrawTGraphErrors(AEDM_vs_p, name+";p [MeV]: in range p #minus 50 < p < p #plus 50 MeV;A_{EDM} [mrad]", ("../Images/MC/dMu/"+config+"/Blinded/MomBinnedAna/"+name+"_AEDM_vs_p_"+qual).c_str());

  		cGraphs_.push_back(c_vs_p);
  		AEDMGraphs_.push_back(AEDM_vs_p);

  		output->cd("MomentumBinnedAnalysis/ParameterScans");
  		c_vs_p->SetName((name+"_c_vs_p").c_str());
  		AEDM_vs_p->SetName((name+"_AEDM_vs_p").c_str());
  		c_vs_p->Write();
		AEDM_vs_p->Write();

  	}
  	
  	double c_ymin; double c_ymax;
  	double A_ymin; double A_ymax;
  	if(qual=="eQ" || qual=="vertCorr_eQ") { 
  		c_ymin = -0.6; c_ymax = 0.15;
  		A_ymin = 0.0; A_ymax = 0.35;
  	} else if(qual=="noQ"  || qual=="vertCorr_noQ") { 
  		c_ymin = -2; c_ymax = 2;
  		A_ymin = -2; A_ymax = 2;
  	} else if(qual=="pValQ"  || qual=="vertCorr_pValQ") { 
  		c_ymin = -2.5; c_ymax = 1.25;
  		A_ymin = -2; A_ymax = 2;
  	} else if(qual=="vertCorr_eQ_eQ") { 
  		c_ymin = -0.065; c_ymax = 0.05;
  		A_ymin = -0.05; A_ymax = 0.4;
  	}

  	OverlayGraphs(cGraphs_, names_, "", ("../Images/MC/dMu/"+config+"/Blinded/MomBinnedAna/c_vs_p_overlay_"+qual).c_str(), c_ymin, c_ymax);
  	OverlayGraphs(AEDMGraphs_, names_, "", ("../Images/MC/dMu/"+config+"/Blinded/MomBinnedAna/AEDM_vs_p_overlay_"+qual).c_str(), A_ymin, A_ymax);


	return; 
}

int main() {

	bool write = true;
	// Read file
	std::string inputName = "../Plots/MC/dMu/"+config+"/dMuSim_"+qual+".root";
	TFile *input = TFile::Open(inputName.c_str());

	std::string outputName = "../Plots/MC/dMu/"+config+"/dMuSim_BlindedFits_"+qual+"_"+std::to_string(unblind)+".root"; 
	if(!write) outputName = "delete_me.root";

	TFile *output = new TFile(outputName.c_str(), "RECREATE");

	output->mkdir("SimultaneousAnalysis");
	output->cd("SimultaneousAnalysis");

	SimultaneousAnalysis(input, output);

	output->mkdir("MomentumBinnedAnalysis");
	output->mkdir("MomentumBinnedAnalysis/ModuloFits");
	output->mkdir("MomentumBinnedAnalysis/ParameterScans");

	MomentumBinnedAnalysis(input, output);

	input->Close();
	output->Close();

	std::cout<<"\nWritten plots to root file:\n"<<outputName<<std::endl;

	return 0;


}
