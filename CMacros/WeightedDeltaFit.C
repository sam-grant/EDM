#include <iostream>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

using namespace std;


//std::string dMu = "1.8e-18";

void DrawFit(TGraphErrors *gr, string config, string title, string fname, double ymin, double ymax, double x1, double y1, double x2, double y2) {

	cout<<"\nDrawing"<<endl;

	TCanvas *c = new TCanvas("c","c",800,600);

	// 0.47 wide, 0.15 high. 0.06 seperation from borders
	TLegend *l = new TLegend(x1, y1, x2, y2); 
	// Bottom right (shifted up by 0.1)
/*	if(dMu == "5.4e-18") {

	if(config == "trackReco_AAR_500MeV_AQ") l = new TLegend(0.36, 0.27, 0.83, 0.42); 
	// Top right
	else if(config == "truth_AAR_500MeV_AQ") l = new TLegend(0.36, 0.68, 0.83, 0.83); 
	// Top left
	else if(config == "truthAllDecays_AAR_500MeV_AQ") l = new TLegend(0.17, 0.68, 0.64, 0.83); 
	// Bottom centre
	else l = new TLegend(0.30, 0.27, 0.70, 0.42); 

	} else if(dMu == "1.8e-18") {

	if(config == "trackReco_AAR_500MeV_AQ") l = new TLegend(0.36, 0.27, 0.83, 0.42); 
	// Top right
	else if(config == "truth_AAR_500MeV_AQ") l = new TLegend(0.36, 0.68, 0.83, 0.83); 
	// Top centre
	else if(config == "truthAllDecays_AAR_500MeV_AQ") l = new TLegend(0.30, 0.68, 0.70, 0.83); 
	// Bottom centre
	else l = new TLegend(0.30, 0.27, 0.70, 0.42); 

	}*/

	l->SetBorderSize(0);

	TString fitRes = Round(gr->GetFunction("pol0")->GetParameter(0), 3.);
	TString fitResErr = Round(gr->GetFunction("pol0")->GetParError(0), 1.);

	l->AddEntry(gr, "Sim: reco vertices");
	l->AddEntry(gr->GetFunction("pol0"), "#LT#delta'#GT = "+fitRes+"#pm"+fitResErr+" mrad");

	gr->SetTitle(title.c_str());
	gr->GetXaxis()->SetTitleSize(.04);
	gr->GetYaxis()->SetTitleSize(.04);
	gr->GetXaxis()->SetTitleOffset(1.1);
	gr->GetYaxis()->SetTitleOffset(1.1);
	gr->GetXaxis()->CenterTitle(true);
	gr->GetYaxis()->CenterTitle(true);
	gr->GetYaxis()->SetMaxDigits(4);
	gr->GetYaxis()->SetRangeUser(ymin,ymax);

	gr->SetMarkerStyle(20);

	gr->Draw("AP");

	l->Draw("same");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;
}

double ParabolaFunc(double *x, double *par) {
   return par[0] * pow(x[0],2) + par[1] * x[0] + par[2];
}


void ParabolaFit(TGraphErrors *graph, string config, bool corr, double xmin, double xmax) { // double p0, double p1, double p2, 
  
   TF1 *fnc = new TF1("ParabolaFunc", ParabolaFunc, xmin, xmax, 3);

     if(config == "Tracks") {
      fnc->SetParameter(0, -6e-8);
      fnc->SetParameter(1, 2.0e-4);
      fnc->SetParameter(2, 0.05);
     }  else if(config == "Decays") { 
      fnc->SetParameter(0, -5.5e-8);
      fnc->SetParameter(1, 8.0e-5);
      fnc->SetParameter(2, 2.5e-1);
     } 

  graph->Fit(fnc, "R");    

  return;

}

TGraphErrors *CorrectDilution(string config, string dMu, double xmin, double xmax) {

	double delta_prime = 0;
	if(dMu=="5.4e-18") delta_prime = 1.7;
	else cerr<<"Limit not programmed";

	TFile *A_EDM_file = TFile::Open(("../Plots/MC/dMu/"+dMu+"/fits/dMuSim_unblinded_"+config+".root").c_str());
	TFile *d_EDM_file = TFile::Open("../Plots/MC/dMu/Dilution/dilutionCurves.root");


	// Get graph
	TGraphErrors *A_EDM_gr = (TGraphErrors*)A_EDM_file->Get("MomentumBinnedAnalysis/ParameterScans/MomSlices/S0S12S18_A_vs_p");
	// Get function 
	TGraphErrors *d_EDM_gr = (TGraphErrors*)d_EDM_file->Get("DilutionFits/B/Tracks/250MeV/d_vs_p/trackReco");
	// TF1 *d_EDM_fit = (TF1*)d_EDM_gr->GetFunction("ParabolaFunc");

	// Refit?
	TF1 *fit = new TF1("ParabolaFunc", ParabolaFunc, xmin, xmax, 3);
    fit->SetParameter(0, -6e-8);
    fit->SetParameter(1, 2.0e-4);
    fit->SetParameter(2, 0.05);

	// Get fit result pointer
	TFitResultPtr fitRes = d_EDM_gr->Fit(fit,"SR");//NQ");

	TMatrixD cor = fitRes->GetCorrelationMatrix();
	TMatrixD cov = fitRes->GetCovarianceMatrix();

	cor.Print();
	cov.Print();

	double var = fitRes->GetCovarianceMatrix()(0,0) + fitRes->GetCovarianceMatrix()(1,1) + fitRes->GetCovarianceMatrix()(2,2);

	cout<<"Varience\t"<<var<<endl;

	int n = A_EDM_gr->GetN();

	TGraphErrors *delta_gr = new TGraphErrors(); 

	bool sysUp = false; bool sysDown = false;

	for(int i = 0; i<n; i++) {

		for(int i_sys = 0; i_sys < 3; i_sys++) { 

			if(i_sys==0) {
				sysUp = false;
				sysDown= false;
			}
			if(i_sys==1) {
				sysUp = true;
				sysDown= false;
			}
			if(i_sys==2) {
				sysUp = false;
				sysDown= true;
			}		


			double p = A_EDM_gr->GetX()[i];
			double ep = A_EDM_gr->GetEX()[i];

			if( p < xmin) continue;
			if( p > xmax) continue;

			double d_EDM = fit->Eval(p);


			if( sysUp ) d_EDM += 0.01;
			if( sysDown ) d_EDM -= 0.01;

			double A_EDM = A_EDM_gr->GetY()[i];
			double eA_EDM = A_EDM_gr->GetEY()[i];

			double delta = A_EDM/d_EDM;

			double err_delta = delta * sqrt( pow((A_EDM/eA_EDM),2) + pow((var/d_EDM),2) );

			delta_gr->SetPoint(delta_gr->GetN(), p, delta);
			delta_gr->SetPointError(delta_gr->GetN()-1, ep, sqrt(err_delta));

			cout<<"For momentum "<<p<<": i_sys = "<<i_sys<<", delta = "<<delta<<endl;

		//counter++;
	
		}
	}



	return delta_gr;

}


void Fit(string config, string dMu, double xmin, double xmax, double ymin, double ymax, double x1, double y1, double x2, double y2) { //, TFile *output) {

	// Get file 
	string fname = "../Plots/MC/dMu/"+dMu+"/fits/dMuSim_unblinded_"+config+".root";
	TFile *fin = TFile::Open(fname.c_str());

	cout<<"\nOpened input file "<<fname<<", "<<fin<<endl;

	// Get graph
	string grn = "MomentumBinnedAnalysis/ParameterScans/MomSlices/delta_A_vs_p"; 
	TGraphErrors *gr = (TGraphErrors*)fin->Get(grn.c_str());

	cout<<"\nGot graph "<<grn<<", "<<gr<<endl;
	TF1 *fit = new TF1("pol0", "pol0",xmin,xmax);
	fit->SetParameter(0,1.7);
	// Now fit
	gr->Fit("pol0","R");

	cout<<"\nFitted with function "<<fit<<endl;//gr->GetFunction("pol0")<<endl;

	gr->GetXaxis()->SetRangeUser(xmin,xmax);

	DrawFit(gr, config, "", "../Images/MC/Dilution/dMu/"+dMu+"/WeightedFit_"+config, ymin, ymax, x1, y1, x2, y2);

	return; 
}

int main() { 

	TGraphErrors *gr = CorrectDilution("trackReco_AAR_250MeV_BQ", "5.4e-18", 750, 2500);

	DrawTGraphErrors(gr,"","../Images/tmp");

	//Fit("trackReco_AAR_250MeV_BQ", "5.4e-18", 750, 2500, 1.0, 2.4, 0.11, 0.75, 0.59, 0.89); 

/*	// All decays, 30x BNL, 500 MeV, AQ
	Fit("truthAllDecays_AAR_500MeV_AQ", "5.4e-18", 1.4, 2.2, 0.11, 0.75, 0.59, 0.89); 
	// Accepted decays, 30x BNL, 500 MeV, AQ
	Fit("truth_AAR_500MeV_AQ", "5.4e-18", 1.55, 1.95, 0.41, 0.75, 0.89, 0.89);  

	// Track reco, 30x BNL, 500 MeV, AQ
	Fit("trackReco_AAR_500MeV_AQ", "5.4e-18", 0.6, 2.6, 0.11, 0.75, 0.59, 0.89); 
	// Track truth, 30x BNL, 500 MeV, AQ
	Fit("trackTruth_AAR_500MeV_AQ", "5.4e-18", 0.8, 2.5, 0.11, 0.75, 0.59, 0.89);  

	// Track reco, 30x BNL, 500 MeV, BQ
	Fit("trackReco_AAR_500MeV_BQ", "5.4e-18", -3.5, 5., 0.11, 0.75, 0.59, 0.89); 
	// Track truth, 30x BNL, 500 MeV, BQ
	Fit("trackTruth_AAR_500MeV_BQ", "5.4e-18", -3, 5., 0.11, 0.75, 0.59, 0.89); 

	// All decays, 30x BNL, 500 MeV, AQ
	Fit("truthAllDecays_AAR_500MeV_AQ", "1.8e-18", 0.4, 0.9, 0.25, 0.70, 0.75, 0.85); */

	return 0;
}