/*void DrawRatoPlot(TH2D *h2_decayR_vs_decayY_1, TH1D *h1_momentumY_1, TH1D *h1_momentumY_2, TString title, TString fname) { 

	TCanvas *c = new TCanvas("c", "c", 800, 800);


	gStyle->SetOptStat(0);
	h1_momentumY_1->SetTitle(title);
	h1_momentumY_1->SetStats(0);
	h1_momentumY_1->SetStats(0);		
	h1_momentumY_1->GetXaxis()->SetTitleSize(.04);
	h1_momentumY_1->GetYaxis()->SetTitleSize(.04);
	h1_momentumY_1->GetXaxis()->SetTitleOffset(1.1);
	h1_momentumY_1->GetYaxis()->SetTitleOffset(1.1);
	h1_momentumY_1->GetXaxis()->CenterTitle(1);
	h1_momentumY_1->GetYaxis()->CenterTitle(1);
	h1_momentumY_1->GetYaxis()->SetMaxDigits(4);
	h1_momentumY_1->SetLineColor(kBlue);
	h1_momentumY_2->SetLineColor(kRed);
	h1_momentumY_1->SetMarkerColor(kBlue);
	h1_momentumY_2->SetMarkerColor(kRed);


	//h1_momentumY_1->Sumw2();//cale(1./h1_momentumY_1->Integral());
	//h1_momentumY_2->Scale(1.9 / 2.) ; // 1./h1_momentumY_2->Integral());
	//h1_momentumY_1->Sumw2();
	//h1_momentumY_2->Sumw2();
	// h1_momentumY_1->Scale(1./h1_momentumY_1->Integral());//GetMaximum()); // Integral());
	// h1_momentumY_2->Scale(1./h1_momentumY_2->Integral());//GetMaximum());

	// Ratio plot
	TRatioPlot *rp = new TRatioPlot(h1_momentumY_2, h1_momentumY_1);
	rp->Draw();
	//rp->SetStats(0);
	rp->GetLowerRefYaxis()->SetRangeUser(0,1);
	//rp->GetLowerRefYaxis()->SetNdivisions(5, 2, 0, kTRUE);
	//rp->SetLineColor(kGray);
	//rp->SetMarkerColor(kGray);
	// rp->GetUpperRefYaxis()->SetTitle(("Decays / "+to_string(h1_momentumY_1->GetBinWidth(1))+" MeV").c_str());
	rp->GetUpperRefYaxis()->SetTitle("Decays / 0.14 MeV");
	rp->GetUpperRefXaxis()->SetTitle("Vertical momentum [MeV]");
	rp->GetLowerRefYaxis()->SetTitle("Ratio");
	rp->GetUpperRefYaxis()->SetRangeUser(0, h1_momentumY_1->GetMaximum() + h1_momentumY_1->GetMaximum()*0.1);
	rp->GetUpperRefYaxis()->CenterTitle(1);
	rp->GetLowerRefYaxis()->CenterTitle(1);
	rp->GetLowerRefXaxis()->CenterTitle(1);

	c->Update();


	
	c->SaveAs(fname+".C");
	c->SaveAs(fname+".pdf");
	c->SaveAs(fname+".png");

	delete c;

	return; 

}*/

#include <iostream>

#include "RootInclude.h"

using namespace std;

void DrawRatioPlot(TH2D *h2_decayX_vs_decayY_1, TH1D *h1_momentum_1, TH1D *h1_momentum_2, TString title, TString fname) { 

	// Mother canvas
	TCanvas *c = new TCanvas("c", "c", 800, 600);
	c->Draw(); 

	// Main pad
	TPad *p1 = new TPad("p1", "p1", 0., 0., 1., 1.); //, .89);
	p1->Draw();
	p1->cd();

	gStyle->SetOptStat(0);

	h1_momentum_1->SetTitle(title);	
	h1_momentum_1->GetXaxis()->SetTitleSize(.04);
	h1_momentum_1->GetYaxis()->SetTitleSize(.04);
	h1_momentum_1->GetXaxis()->SetTitleOffset(1.1);
	h1_momentum_1->GetYaxis()->SetTitleOffset(1.1);
	h1_momentum_1->GetXaxis()->CenterTitle(1);
	h1_momentum_2->GetXaxis()->CenterTitle(1);
	h1_momentum_1->GetYaxis()->CenterTitle(1);
	h1_momentum_1->GetYaxis()->SetMaxDigits(4);

	h1_momentum_1->SetLineColor(kBlack);
	h1_momentum_2->SetLineColor(kBlue);
	h1_momentum_1->SetLineWidth(2);
	h1_momentum_2->SetLineWidth(2);
	h1_momentum_1->SetMarkerColor(kBlack);
	h1_momentum_2->SetMarkerColor(kBlue);

	h1_momentum_1->SetOption("E");
	h1_momentum_2->SetOption("E");

	cout<<"Draw option "<<h1_momentum_2->GetOption()<<endl;
	c->Update();

	h1_momentum_1->Rebin(20);
	h1_momentum_2->Rebin(20);

	h1_momentum_1->Scale(1./h1_momentum_1->Integral());//Integral());//GetMaximum()); // Integral());
	h1_momentum_2->Scale(1./h1_momentum_2->Integral());
/*	
//1./h1_momentum_2->Integral());//GetMaximum());
	h1_momentum_1->Draw("E");
	h1_momentum_2->Draw("E");*/

	cout<<"Making ratio"<<endl;
	// quality over quantity 	
	TRatioPlot *rp = new TRatioPlot(h1_momentum_1, h1_momentum_2);
	rp->Draw();
	rp->GetXaxis()->SetTitle("Vertical momentum [MeV]");
	rp->GetLowerRefYaxis()->SetTitle("Ratio");
	rp->GetLowerRefYaxis()->SetRangeUser(0, 2.);//h1_momentumY_1->GetMaximum() + h1_momentumY_1->GetMaximum()*0.1);
	rp->GetLowerRefYaxis()->CenterTitle(1);
	rp->GetUpperRefYaxis()->CenterTitle(1);
	rp->GetXaxis()->CenterTitle(1);
	double ymax = 0;
	if(h1_momentum_1->GetMaximum() > h1_momentum_2->GetMaximum()) ymax = h1_momentum_1->GetMaximum() + .1*h1_momentum_1->GetMaximum();
	else ymax = h1_momentum_2->GetMaximum() + .1*h1_momentum_2->GetMaximum();
	rp->GetUpperRefYaxis()->SetRangeUser(0, ymax);
	c->Update();
/*	h1_momentum_1->Draw("HIST ][");
	h1_momentum_2->Draw("HIST ][ SAME ");*/
/*
	h1_momentum_1->Draw("HIST");
	h1_momentum_2->Draw("HIST SAME ");*/
	c->cd(0); 

	TPad *p2 = new TPad("p2", "p2", .69, .69, .99, .99);
	p2->Draw();
	p2->cd();
	gStyle->SetPalette(kRainBow);

	h2_decayX_vs_decayY_1->GetXaxis()->CenterTitle(1);
	h2_decayX_vs_decayY_1->GetYaxis()->CenterTitle(1);
	h2_decayX_vs_decayY_1->SetTitle(";x [mm];y [mm]");
	h2_decayX_vs_decayY_1->Draw("COL");

	c->cd(0);

	TLegend *l = new TLegend(0.11, 0.79, 0.21, .89);
	l->SetBorderSize(0);
	l->SetTextSize(26);
	l->SetTextFont(44);
	l->AddEntry(h1_momentum_1, "Accepted decays");
	l->AddEntry(h1_momentum_2, "Reco vertices"); //  (#geq12 planes hit)");
	l->Draw("SAME");

	c->SaveAs(fname+".C");
	c->SaveAs(fname+".pdf");
	c->SaveAs(fname+".png");

	delete c;

	return; 

}

void DrawPlot(TH2D *h2_decayX_vs_decayY_1, TH1D *h1_momentum_1, TH1D *h1_momentum_2, TString title, TString fname) { 

	// Mother canvas
	TCanvas *c = new TCanvas("c", "c", 800, 600);
	c->Draw(); 

	// Main pad
	TPad *p1 = new TPad("p1", "p1", 0., 0., 1., 1.); //, .89);
	p1->Draw();
	p1->cd();

	gStyle->SetOptStat(0);

	h1_momentum_1->SetTitle(title);	
	h1_momentum_1->GetXaxis()->SetTitleSize(.04);
	h1_momentum_1->GetYaxis()->SetTitleSize(.04);
	h1_momentum_1->GetXaxis()->SetTitleOffset(1.1);
	h1_momentum_1->GetYaxis()->SetTitleOffset(1.1);
	h1_momentum_1->GetXaxis()->CenterTitle(1);
	h1_momentum_1->GetYaxis()->CenterTitle(1);
	h1_momentum_1->GetYaxis()->SetMaxDigits(4);

	h1_momentum_1->SetLineColor(kBlack);
	h1_momentum_2->SetLineColor(kBlue);
	h1_momentum_1->SetLineWidth(2);
	h1_momentum_2->SetLineWidth(2);
	h1_momentum_1->SetMarkerColor(kBlack);
	h1_momentum_2->SetMarkerColor(kBlue);

	h1_momentum_1->Rebin(2);
	h1_momentum_2->Rebin(2);
/*	h1_momentum_1->SetOption("E");
	h1_momentum_2->SetOption("E");*/

	//h1_momentum_1->Scale(1./h1_momentum_1->GetMaximum());//Integral());//GetMaximum()); // Integral());
	//h1_momentum_2->Scale(1./h1_momentum_2->GetMaximum());//1./h1_momentum_2->Integral());//GetMaximum());

	h1_momentum_1->Draw("E");
	h1_momentum_2->Draw("E SAME ");
/*
	h1_momentum_1->Draw("HIST");
	h1_momentum_2->Draw("HIST SAME ");*/
	c->cd(0); 

	TPad *p2 = new TPad("p2", "p2", .69, .69, .99, .99);
	p2->Draw();
	p2->cd();
	gStyle->SetPalette(kRainBow);

	h2_decayX_vs_decayY_1->GetXaxis()->CenterTitle(1);
	h2_decayX_vs_decayY_1->GetYaxis()->CenterTitle(1);
	h2_decayX_vs_decayY_1->SetTitle(";x [mm];y [mm]");
	h2_decayX_vs_decayY_1->Draw("COL");

	c->cd(0);

	TLegend *l = new TLegend(0.15, 0.79, .40, .89);
	l->SetBorderSize(0);
	l->SetTextSize(26);
	l->SetTextFont(44);
	l->AddEntry(h1_momentum_1, "All decays");
	l->AddEntry(h1_momentum_2, "Reco vertices");
	l->Draw("SAME");

	c->SaveAs(fname+".C");
	c->SaveAs(fname+".pdf");
	c->SaveAs(fname+".png");

	delete c;

	return; 

}

/*
void RunX() {	

	TString fname1 = "../Plots/MC/dMu/5.4e-18/Plots/acceptancePlots_allDecays_AAR_10mm_AQ.root";
	TString fname2 = "../Plots/MC/dMu/5.4e-18/Plots/acceptancePlots_trackReco_AAR_10mm_BQ.root";

	TFile *fin1 = TFile::Open(fname1);
	TFile *fin2 = TFile::Open(fname2);

	cout<<"Files opened: "<<fname1<<", "<<fin1<<", "<<fname2<<", "<<fin2<<endl;

  	TH2D *h2_decayX_vs_decayY_1 = (TH2D*)fin1->Get("SanityPlots/DecayX_vs_DecayY"); 
  	TH2D *h2_decayX_vs_decayY_2 = (TH2D*)fin2->Get("SanityPlots/S0S12S18_DecayX_vs_DecayY"); 

  	// Radial momentum hists
  	TH1D *h1_momentumX_1 = (TH1D*)fin1->Get("SanityPlots/MomentumX"); 
  	TH1D *h1_momentumX_2 = (TH1D*)fin2->Get("SanityPlots/S0S12S18_MomentumX");
  	
  	DrawPlot(h2_decayX_vs_decayY_1, h1_momentumX_1, h1_momentumX_2, ";Radial momentum [MeV];Decays", "../Images/MC/dMu/5.4e-18/Acceptance/RadialMomentum");

	// y-position slices 
	int step = 10; // mm
  	int nSlices = 100/step;

  	// Slice momentum
  	for ( int i_slice = 0; i_slice < nSlices; i_slice++ ) {

  		int lo = -50 + i_slice*step;
    	int hi = -50 + step + i_slice*step;

    	TString slice = to_string(lo)+"_"+to_string(hi);

  		// For illustration
  		h2_decayX_vs_decayY_1 = (TH2D*)fin1->Get("RadialMomentumSlices/DecayX_vs_DecayY_2_"+slice); 
  		h2_decayX_vs_decayY_2 = (TH2D*)fin2->Get("RadialMomentumSlices/S0S12S18_DecayX_vs_DecayY_2_"+slice);

  		// Radial momentum hists
  		h1_momentumX_1 = (TH1D*)fin1->Get("RadialMomentumSlices/MomentumX_"+slice); 
  		h1_momentumX_2 = (TH1D*)fin2->Get("RadialMomentumSlices/S0S12S18_MomentumX_"+slice); 

  		DrawPlot(h2_decayX_vs_decayY_1, h1_momentumX_1, h1_momentumX_2, to_string(lo)+" < x [mm] < "+to_string(hi)+";Radial momentum [MeV];Decays", "../Images/MC/dMu/5.4e-18/Acceptance/RadialMomentum_"+slice);

  		//cout<<slice<<endl;
  		cout<<h1_momentumX_2->GetBinCenter(h1_momentumX_2->FindFirstBinAbove(0))<<", "<<h1_momentumX_2->GetBinCenter(h1_momentumX_2->FindLastBinAbove(0))<<endl;
  		//break;

	}


	fin1->Close();
	fin2->Close();

	return;

}*/


void RunMain() {	

	TString fname1 = "../Plots/MC/dMu/5.4e-18/Plots/acceptancePlots_allDecays_AAR_10mm_AQ.root";
	TString fname2 = "../Plots/MC/dMu/5.4e-18/Plots/acceptancePlots_trackReco_AAR_10mm_BQ.root";

	TFile *fin1 = TFile::Open(fname1);
	TFile *fin2 = TFile::Open(fname2);

	cout<<"Files opened: "<<fname1<<", "<<fin1<<", "<<fname2<<", "<<fin2<<endl;

  	TH2D *h2_decayX_vs_decayY_1 = (TH2D*)fin1->Get("SanityPlots/DecayX_vs_DecayY"); 
  	TH2D *h2_decayX_vs_decayY_2 = (TH2D*)fin2->Get("SanityPlots/S0S12S18_DecayX_vs_DecayY"); 

  	// Vertical momentum hists
  	TH1D *h1_momentumY_1 = (TH1D*)fin1->Get("SanityPlots/MomentumY"); 
  	TH1D *h1_momentumY_2 = (TH1D*)fin2->Get("SanityPlots/S0S12S18_MomentumY");

  	// Try to force default drawing style
/*  	h1_momentumY_1->Draw("E");
    h1_momentumY_2->Draw("E");	*/
  	DrawPlot(h2_decayX_vs_decayY_1, h1_momentumY_1, h1_momentumY_2, ";Vertical momentum [MeV];Decays", "../Images/MC/dMu/5.4e-18/Acceptance/Main/VerticalMomentum");

	// y-position slices 
	int step = 10; // mm
  	int nSlices = 100/step;

  	// Slice momentum
  	for ( int i_slice = 0; i_slice < nSlices; i_slice++ ) {

  		int lo = -50 + i_slice*step;
    	int hi = -50 + step + i_slice*step;

    	TString slice = to_string(lo)+"_"+to_string(hi);

  		// For illustration
  		h2_decayX_vs_decayY_1 = (TH2D*)fin1->Get("VerticalMomentumSlices/DecayX_vs_DecayY_1_"+slice); 
  		h2_decayX_vs_decayY_2 = (TH2D*)fin2->Get("VerticalMomentumSlices/S0S12S18_DecayX_vs_DecayY_1_"+slice);

  		// Vertical momentum hists
  		h1_momentumY_1 = (TH1D*)fin1->Get("VerticalMomentumSlices/MomentumY_"+slice); 
  		h1_momentumY_2 = (TH1D*)fin2->Get("VerticalMomentumSlices/S0S12S18_MomentumY_"+slice); 

  		DrawPlot(h2_decayX_vs_decayY_1, h1_momentumY_1, h1_momentumY_2, to_string(lo)+" < y [mm] < "+to_string(hi)+";Vertical momentum [MeV];Decays", "../Images/MC/dMu/5.4e-18/Acceptance/Main/VerticalMomentum_"+slice);

  		//cout<<slice<<endl;
  		//cout<<h1_momentumY_2->GetBinCenter(h1_momentumY_2->FindFirstBinAbove(0))<<", "<<h1_momentumY_2->GetBinCenter(h1_momentumY_2->FindLastBinAbove(0))<<endl;
  		//break;

	}


	fin1->Close();
	fin2->Close();

	return;

}

void RunControl() {	

	TString fname1 = "../Plots/MC/dMu/5.4e-18/Plots/acceptancePlots_acceptedDecaysControl_AAR_10mm_AQ.root";
	TString fname2 = "../Plots/MC/dMu/5.4e-18/Plots/acceptancePlots_trackRecoControl_AAR_10mm_CQ.root";

	TFile *fin1 = TFile::Open(fname1);
	TFile *fin2 = TFile::Open(fname2);

	cout<<"Files opened: "<<fname1<<", "<<fin1<<", "<<fname2<<", "<<fin2<<endl;

  	TH2D *h2_decayX_vs_decayY_1 = (TH2D*)fin1->Get("SanityPlots/DecayX_vs_DecayY"); 
  	TH2D *h2_decayX_vs_decayY_2 = (TH2D*)fin2->Get("SanityPlots/S0S12S18_DecayX_vs_DecayY"); 

  	// Vertical momentum hists
  	TH1D *h1_momentumY_1 = (TH1D*)fin1->Get("SanityPlots/MomentumY"); 
  	TH1D *h1_momentumY_2 = (TH1D*)fin2->Get("SanityPlots/S0S12S18_MomentumY");

  	DrawRatioPlot(h2_decayX_vs_decayY_1, h1_momentumY_1, h1_momentumY_2, ";Vertical momentum [MeV];Decays", "../Images/MC/dMu/5.4e-18/Acceptance/Control/VerticalMomentumControl");

	// y-position slices 
	int step = 10; // mm
  	int nSlices = 100/step;

  	// Slice momentum
  	for ( int i_slice = 0; i_slice < nSlices; i_slice++ ) {

  		int lo = -50 + i_slice*step;
    	int hi = -50 + step + i_slice*step;

    	TString slice = to_string(lo)+"_"+to_string(hi);

  		// For illustration
  		h2_decayX_vs_decayY_1 = (TH2D*)fin1->Get("VerticalMomentumSlices/DecayX_vs_DecayY_1_"+slice); 
  		h2_decayX_vs_decayY_2 = (TH2D*)fin2->Get("VerticalMomentumSlices/S0S12S18_DecayX_vs_DecayY_1_"+slice);

  		// Vertical momentum hists
  		h1_momentumY_1 = (TH1D*)fin1->Get("VerticalMomentumSlices/MomentumY_"+slice); 
  		h1_momentumY_2 = (TH1D*)fin2->Get("VerticalMomentumSlices/S0S12S18_MomentumY_"+slice); 

  		DrawRatioPlot(h2_decayX_vs_decayY_1, h1_momentumY_1, h1_momentumY_2, to_string(lo)+" < y [mm] < "+to_string(hi)+";Vertical momentum [MeV];Decays", "../Images/MC/dMu/5.4e-18/Acceptance/Control/VerticalMomentumControl_"+slice);

  		//cout<<slice<<endl;
  		//cout<<h1_momentumY_2->GetBinCenter(h1_momentumY_2->FindFirstBinAbove(0))<<", "<<h1_momentumY_2->GetBinCenter(h1_momentumY_2->FindLastBinAbove(0))<<endl;
  		//break;

	}


	fin1->Close();
	fin2->Close();

	return;

}

int main() { 

	RunMain();
	RunControl();

	return 0;
}