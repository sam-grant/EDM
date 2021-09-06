#include <iostream>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

using namespace std;

std::string dMu = "5.4e-18";
//std::string dMu = "1.8e-18";

void DrawFit(TGraphErrors *gr, string config, string title, string fname, double ymin, double ymax) {

	cout<<"\nDrawing"<<endl;

	TCanvas *c = new TCanvas("c","c",800,600);

	// 0.47 wide, 0.15 high. 0.06 seperation from borders
	TLegend *l; // l = new TLegend(0.22, 0.28, 0.77, 0.43); 
	// Bottom right (shifted up by 0.1)
	if(dMu == "5.4e-18") {

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



	}

	l->SetBorderSize(0);

	TString fitRes = Round(gr->GetFunction("pol0")->GetParameter(0), 3.);
	TString fitResErr = Round(gr->GetFunction("pol0")->GetParError(0), 1.);

	l->AddEntry(gr, "Sim");
	l->AddEntry(gr->GetFunction("pol0"), "Fit: #LT#delta'#GT = "+fitRes+"#pm"+fitResErr+" mrad");

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

void Fit(string config, double ymin, double ymax) { //, TFile *output) {

	// Get file 
	string fname = "../Plots/MC/dMu/"+dMu+"/fits/dMuSim_unblinded_"+config+".root";
	TFile *fin = TFile::Open(fname.c_str());

	cout<<"\nOpened input file "<<fname<<", "<<fin<<endl;

	// Get graph
	string grn = "MomentumBinnedAnalysis/ParameterScans/MomSlices/delta_A_vs_p"; 
	TGraphErrors *gr = (TGraphErrors*)fin->Get(grn.c_str());

	cout<<"\nGot graph "<<grn<<", "<<gr<<endl;

	// Now fit
	gr->Fit("pol0");

	cout<<"\nFitted with function "<<gr->GetFunction("pol0")<<endl;

	DrawFit(gr, config, "", "../Images/MC/Dilution/dMu/"+dMu+"/WeightedFit_"+config, ymin, ymax);

	return; 
}

int main() { 

	// 10xBNL
	// Fit("truthAllDecays_AAR_500MeV_AQ", 0.4, 0.9); 
	// 30xBNL
	Fit("truthAllDecays_AAR_500MeV_AQ", 1.4, 2.2); 

	// Fit("trackReco_AAR_500MeV_AQ", 0, 2.25); 
	// Fit("truth_AAR_500MeV_AQ", 1.55, 1.95); 


	// Fit("trackReco_AAR_200MeV_AQ", -18, 7); 
	// Fit("truth_AAR_200MeV_AQ", 0.8, 2.5); 
	// Fit("truthAllDecays_AAR_200MeV_AQ", 0.6, 2.3); 

	return 0;
}