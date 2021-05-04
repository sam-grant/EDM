#include <iostream>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

using namespace std;

string config = "1700ppm";
double delta_prime = 1.7; // mrad
string qual = "eQ";

TGraphErrors *DilutionGraph(TFile *input) { 

	cout<<"Getting dilution graph"<<endl;

	int step = 200;
  	int pmin = 0.; 
  	int pmax = 200.;

  	vector<double> p_; vector<double> ep_;
  	vector<double> AEDM_; vector<double> eAEDM_;
  	vector<double> dBz_; vector<double> edBz_;

  	for ( int i_slice = 0; i_slice < 15; i_slice++ ) { 

  		TH2D *moduloHist = (TH2D*)input->Get(("S0S12S18_ThetaY_vs_Time_Modulo_"+std::to_string(pmin)+"_"+std::to_string(pmax)).c_str());

  		if(moduloHist == 0) {
  			pmin = pmin + step;
			pmax = pmax + step;
  			continue;
  		}

  		cout<<pmin<<" < p < "<<pmax<<endl;

  		cout<<moduloHist<<endl;

  		int nEntries = moduloHist->GetEntries();

  		TH1D *moduloProf = moduloHist->ProfileX();

  		TGraphErrors *moduloGraph = ConvertToTGraphErrors(moduloProf);

		SimpleSinFit(moduloGraph, 0.17, OMEGA_A * 1e3, 0);

      	FitBz(moduloGraph, 0.17, OMEGA_A*1e3, phi, 0, OMEGA_A*1e3, phi, 0.5, 0, G2PERIOD);

		double p = (pmax + pmin) / 2;

		p_.push_back(p);
		ep_.push_back(pmax - p);

		//cout<<moduloGraph->GetFunction("SimpleSinFunc")->GetParameter(0)<<endl;

		AEDM_.push_back(moduloGraph->GetFunction("SimpleSinFunc")->GetParameter(0));
		eAEDM_.push_back(moduloGraph->GetFunction("SimpleSinFunc")->GetParError(0));

		dBz_.push_back(moduloGraph->GetFunction("SimpleSinFunc")->GetParameter(0) / delta_prime);
		edBz_.push_back(moduloGraph->GetFunction("SimpleSinFunc")->GetParError(0) / delta_prime);

		pmin = pmin + step ;
		pmax = pmax + step;

		delete moduloProf; delete moduloHist;

  	}

  	TGraphErrors *AEDM_vs_p = GenerateTGraphErrors(p_, AEDM_, ep_, eAEDM_);
  	TGraphErrors *dBz_vs_p = GenerateTGraphErrors(p_, dBz_, ep_, edBz_);

  	AEDM_vs_p->GetXaxis()->SetRangeUser(0,3000);
  	dBz_vs_p->GetXaxis()->SetRangeUser(0,3000);

  	DrawTGraphErrors(AEDM_vs_p, ";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;A_{EDM} [mrad]", ("../Images/MC/BzSim/"+config+"/Unblinded/DilutionFunction/AEDM_vs_p_"+qual).c_str());
  	DrawTGraphErrors(dBz_vs_p, ";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;dB_{z}", ("../Images/MC/BzSim/"+config+"/Unblinded/DilutionFunction/dBz_vs_p_"+qual).c_str());

	return dBz_vs_p; 
}

double DilutionFunction(double *x, double *par) {
  return (par[0] * x[0] * x[0]) + (par[1] * x[0]) + par[2]; 
}

void FitDilutionFunction(TGraphErrors *AEDM_vs_p) { 

	TF1 *f_dBz = new TF1("DilutionFunction", DilutionFunction, 1000, 24000, 3);

	AEDM_vs_p->Fit(f_dBz);

	DrawTGraphErrors(AEDM_vs_p, ";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;A_{EDM} [mrad]", ("../Images/MC/BzSim/"+config+"/Unblinded/DilutionFunction/fit_AEDM_vs_p_"+qual).c_str());

	return; 

}

int main() { 

	string inputName = "../Plots/MC/BzSim/1700ppm/BzSim_dilutionFunc_eQ.root";
	TFile *input = TFile::Open(inputName.c_str());

	cout<<"Input file "<<inputName<<"\t"<<input<<endl;

	TGraphErrors *AEDM_vs_p = DilutionGraph(input);

	//FitDilutionFunction(AEDM_vs_p);

	return 0; 

}