/* 

The singular goal here is to repoduce Joe's vertical angle acceptance ratio.

*/

#include <iostream>
#include "RootInclude.h"
//#include "FancyDraw.h"
#include "Utils.h"

using namespace std;

void DrawRatioPlot1D(TH2D *h2, TH1D *h1_decays, TH1D *h1_tracks, string fname, string slice, std::string stn = "") { 

	// Mother canvas
	TCanvas *c = new TCanvas("c", "c", 800, 600);

	c->Draw(); 

	// Main pad
	TPad *p1 = new TPad("p1", "p1", 0., 0., 1., 1.); //, .89);
	p1->Draw();
	p1->cd();

	gStyle->SetOptStat(0);

	//h1_decays->SetTitle(title);	
	h1_decays->GetXaxis()->SetTitleSize(.04);
	h1_decays->GetYaxis()->SetTitleSize(.04);
	h1_decays->GetXaxis()->SetTitleOffset(1.1);
	h1_decays->GetYaxis()->SetTitleOffset(1.1);
	h1_decays->GetXaxis()->CenterTitle(1);
	h1_decays->GetYaxis()->CenterTitle(1);
	h1_decays->GetYaxis()->SetMaxDigits(4);

	h1_decays->SetLineColor(kRed);
	h1_tracks->SetLineColor(kBlue);
	h1_decays->SetLineWidth(2);
	h1_tracks->SetLineWidth(2);
	h1_decays->SetMarkerColor(kRed);
	h1_tracks->SetMarkerColor(kBlue);

	// TRatioPlot is a nightmare.
	TRatioPlot *rp = new TRatioPlot(h1_tracks, h1_decays);

	// This must come before draw
	rp->SetH1DrawOpt("E");
	rp->SetH2DrawOpt("E");

	rp->Draw();

	rp->GetUpperRefYaxis()->SetTitle("Normalised entries");
	rp->GetLowerRefYaxis()->SetTitle("Ratio");
	rp->GetXaxis()->SetTitle("#theta_{y} [mrad]");

	//rp->Scale(1./rp->Integral());
	//rp->GetXaxis()->SetRangeUser(-60, 60);


	rp->GetLowerRefYaxis()->CenterTitle(1);
	rp->GetLowerRefXaxis()->CenterTitle(1);
	rp->GetUpperRefYaxis()->CenterTitle(1);

	rp->GetLowerRefYaxis()->SetRangeUser(0, 1.25); 
	rp->GetUpperRefXaxis()->SetRangeUser(-100, 100); 
	rp->GetLowerRefXaxis()->SetRangeUser(-100, 100); 

	c->Update();

	c->cd(0); 

	TPad *p2 = new TPad("p2", "p2", .69, .69, .99, .99);
	//p2->Draw();
	p2->cd();
	gStyle->SetPalette(kRainBow);

	h2->GetXaxis()->CenterTitle(1);
	h2->GetYaxis()->CenterTitle(1);

	h2->SetTitle(";y [mm];#theta_{y} [mm]");
	//h2->GetXaxis()->SetRangeUser(-60, 60);
	

	//h2->Draw("COL");

	c->cd(0);

	TLegend *l = new TLegend(0.12, 0.79, .40, .89);
	l->SetBorderSize(0);
	l->SetTextSize(24);
	l->SetTextFont(44);
	l->AddEntry(h1_decays, "All decays");
	l->AddEntry(h1_tracks, "Truth vertices");
	l->Draw("SAME");

	c->SaveAs(("../Images/MC/Acceptance/"+fname+".C").c_str());//config+"/"+stn+"_RatioPlot"+slice+".C").c_str());
	c->SaveAs(("../Images/MC/Acceptance/"+fname+".pdf").c_str());
	c->SaveAs(("../Images/MC/Acceptance/"+fname+".png").c_str());

	delete p1;
	delete p2;
	delete l;
	delete rp;
	delete c;

	return; 

}

void Ratios(TH2D *h2_thetaY_vs_Y_decays, TH1D *h1_thetaY_decays, TH1D *h1_thetaY_tracks, std::string fname, std::string slice = "", std::string stn = "") {

	cout<<"----> "<<fname<<" "<<slice<<endl;

	// Normalise projections to max bin
 	cout<<"----> Normalising to max bin"<<endl;

 	cout<<h1_thetaY_decays<<", "<<h1_thetaY_tracks<<endl;

 	if (h1_thetaY_decays->GetSumw2N() == 0) h1_thetaY_decays->Sumw2(kTRUE);
 	if (h1_thetaY_tracks->GetSumw2N() == 0) h1_thetaY_tracks->Sumw2(kTRUE);

 	h1_thetaY_decays->Scale(1./h1_thetaY_decays->GetMaximum());
 	h1_thetaY_tracks->Scale(1./h1_thetaY_tracks->GetMaximum());

  cout<<"----> Drawing ratio plot"<<endl;

  DrawRatioPlot1D(h2_thetaY_vs_Y_decays, h1_thetaY_decays, h1_thetaY_tracks, fname, slice, stn);

	return;

}


void Run() {	

	TString finName = "../Plots/MC/Acceptance/Plots/trackerAcceptancePlots.truth.JoePrice.root";
	TFile *fin = TFile::Open(finName);

	cout<<"----> Opened file "<<finName<<", "<<fin<<endl;

	TString foutName = "../Plots/MC/Acceptance/Plots/joePricePlots.root";
	TFile *fout = new TFile(foutName, "RECREATE");

	fout->mkdir("AcceptanceWeighting");
	fout->mkdir("AcceptanceWeighting/AllMom");
	fout->mkdir("AcceptanceWeighting/MomBins");

	string stn = "S12S18";

	cout<<"----> Running "<<stn<<endl; 

	TH2D *h2_thetaY_vs_Y_decays = (TH2D*)fin->Get("AllDecays/Main/ThetaY_vs_Y");

	TH1D *h1_Y_decays = (TH1D*)fin->Get("AllDecays/Main/Y");
	TH1D *h1_Y_tracks = (TH1D*)fin->Get(("Tracks/Main/"+stn+"_Y").c_str());

	TH1D *h1_R_decays = (TH1D*)fin->Get("AllDecays/Main/R");
	TH1D *h1_R_tracks = (TH1D*)fin->Get(("Tracks/Main/"+stn+"_R").c_str());

	Ratios(h2_thetaY_vs_Y_decays, h1_Y_decays, h1_Y_tracks, "JoePriceAcceptance/Y_ratio");
	Ratios(h2_thetaY_vs_Y_decays, h1_R_decays, h1_R_tracks, "JoePriceAcceptance/R_ratio");

	fin->Close();
	fout->Close();

	cout<<"\n------------------------------------------\nWritten ROOT file "<<foutName<<", "<<fout<<endl;

	return;

}

void JoePriceAcceptance() { 

    Run();

    return;
}