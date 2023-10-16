/*

Samuel Grant

Produce plots of theta_y in slices of y

*/

#include <iostream>

#include "../RootInclude.h"
#include "../Utils.h"

using namespace std;

void DrawRatioPlot1D(TH2D *h2, TH1D *h1_decays, TH1D *h1_tracks, string config, string slice, std::string stn = "") { 

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

	rp->GetLowerRefYaxis()->CenterTitle(1);
	rp->GetLowerRefXaxis()->CenterTitle(1);
	rp->GetUpperRefYaxis()->CenterTitle(1);

	rp->GetLowerRefYaxis()->SetRangeUser(0, 1.5); 
	rp->GetUpperRefXaxis()->SetRangeUser(-100, 100); 
	rp->GetLowerRefXaxis()->SetRangeUser(-100, 100); 

	c->Update();

	c->cd(0); 

	TPad *p2 = new TPad("p2", "p2", .69, .69, .99, .99);
	p2->Draw();
	p2->cd();
	gStyle->SetPalette(kRainBow);

	h2->GetXaxis()->CenterTitle(1);
	h2->GetYaxis()->CenterTitle(1);

	h2->SetTitle(";y [mm];#theta_{y} [mm]");
	//h2->GetXaxis()->SetRangeUser(-60, 60);

	h2->Draw("COL");

	c->cd(0);

	TLegend *l = new TLegend(0.12, 0.79, .40, .89);
	l->SetBorderSize(0);
	l->SetTextSize(24);
	l->SetTextFont(44);
	l->AddEntry(h1_decays, "All decays");
	l->AddEntry(h1_tracks, "Reco vertices");
	l->Draw("SAME");

	//c->SaveAs(("../../Images/Sim/Acceptance/"+config+"/"+stn+"_RatioPlot"+slice+".C").c_str());
	c->SaveAs(("../../Images/Sim/Acceptance/"+config+"/"+stn+"_RatioPlot"+slice+".pdf").c_str());
	c->SaveAs(("../../Images/Sim/Acceptance/"+config+"/"+stn+"_RatioPlot"+slice+".png").c_str());

	delete p1;
	delete p2;
	delete l;
	delete rp;
	delete c;

	return; 

}

TGraphErrors *GetRatioGraph(TH1D *h1, TH1D *h2) {

	TGraphErrors *gr = new TGraphErrors();

	cout<<"here"<<endl;
	int counter = 0;

	for(int i(0); i<h1->GetNbinsX(); i++) {

		double x = h1->GetBinCenter(i+1);
		double y1 = h1->GetBinContent(i+1);
		double y2 = h2->GetBinContent(i+1);

		double e1 = h1->GetBinError(i+1);
		double e2 = h2->GetBinError(i+1);

		double r = y2/y1;

		double er = r * sqrt( pow((e1/y1),2) + pow((e2/y2),2) );

		if(isnan(r) || r == 0 || isnan(er) || er == 0) continue;

		gr->SetPoint(counter, x, r);
		gr->SetPointError(counter, 0., er);

		counter++;

	}

	return gr;

}

void Ratios(TH2D *h2_thetaY_vs_Y_decays, TH1D *h1_thetaY_decays, TH1D *h1_thetaY_tracks, std::string config, std::string slice = "", std::string stn = "") {

	cout<<"----> "<<config<<" "<<slice<<endl;

	// Normalise projections to max bin
 	cout<<"----> Normalising to max bin"<<endl;

 	cout<<h1_thetaY_decays<<", "<<h1_thetaY_tracks<<endl;

 	if (h1_thetaY_decays->GetSumw2N() == 0) h1_thetaY_decays->Sumw2(kTRUE);
 	if (h1_thetaY_tracks->GetSumw2N() == 0) h1_thetaY_tracks->Sumw2(kTRUE);

 	h1_thetaY_decays->Scale(1./h1_thetaY_decays->GetMaximum());
 	h1_thetaY_tracks->Scale(1./h1_thetaY_tracks->GetMaximum());

  	cout<<"----> Drawing ratio plot"<<endl;

  	DrawRatioPlot1D(h2_thetaY_vs_Y_decays, h1_thetaY_decays, h1_thetaY_tracks, config, slice, stn);

 	// Get ratio graph manually
 	TGraphErrors *rg = GetRatioGraph(h1_thetaY_tracks, h1_thetaY_decays);

	// What the heck? We don't use this do we?
 	TF1 *fit = new TF1("AcceptanceFunc", "1/([0]*exp(-0.5*((x-[1])/[2])**2))", -60, 60);//, 3);
 	fit->SetParameter(0, 1.00457);
  	fit->SetParameter(1, 8.91755e-01);
 	fit->SetParameter(2, 2.70153e+01);

 	//TF1 *fit = new TF1("fit", "([0]+[1]*x**2)**(3/2)", -60, 60);//, 3);
 	rg->Fit(fit);//"gaus");//	, "R");

 	cout<<fit->GetChisquare()/fit->GetNDF()<<endl;

	return;

}

void Run(string momSlice, int rebin = 1) {	

	// Get input, always use truth
	TString finName = "../../Plots/Sim/Acceptance/BaseHistograms/trackerAcceptancePlots.truth.root";
	TFile *fin = TFile::Open(finName);

	cout<<"----> Opened file "<<finName<<", "<<fin<<endl;

	// Book output
	TString foutName = "../../Plots/Sim/Acceptance/AcceptanceMaps/acceptanceMaps.thetaYvsY.truth.root";
	TFile *fout = new TFile(foutName, "RECREATE");

	// Setup output directories
	fout->mkdir("AcceptanceWeighting");
	fout->mkdir("AcceptanceWeighting/AllMom");
	fout->mkdir("AcceptanceWeighting/MomBins");

	// Loop thro' stations
	vector<string> stn_ = {"S12S18", "S12", "S18"};

	for(auto& stn : stn_) { 

		cout<<"----> Running "<<stn<<endl;

	  	TH2D *h2_thetaY_vs_Y_decays = (TH2D*)fin->Get((momSlice+"/AllDecays/ThetaY_vs_Y").c_str());
	  	TH2D *h2_thetaY_vs_Y_tracks = (TH2D*)fin->Get((momSlice+"/Tracks/"+stn+"_ThetaY_vs_Y").c_str()); 

	 	cout<<"----> Got histograms: "<<h2_thetaY_vs_Y_decays<<", "<<h2_thetaY_vs_Y_tracks<<endl;

	 	// Draw
	 	cout<<"----> Drawing base histograms"<<endl;

	  	string dir = "AllMom";
	  	fout->cd(("AcceptanceWeighting/"+dir).c_str());

		// Create acceptance map over specified momemtum range
		TH2D *acceptanceWeightingMapY = AcceptanceWeightingMap(h2_thetaY_vs_Y_decays, h2_thetaY_vs_Y_tracks, stn, rebin); 
		acceptanceWeightingMapY->Write();

		cout<<"----> Created weight maps " << acceptanceWeightingMapY << endl; // ", " << acceptanceWeightingMapR << ", " << acceptanceWeightingMapPhi << " for all momentum"<<endl;
		
		// Draw
		DrawAcceptanceWeightingMap(acceptanceWeightingMapY, stn+";y [mm];#theta_{y} [mrad]", "../../Images/Sim/Acceptance/AcceptanceMaps/"+stn+"_AcceptanceMapY_"+momSlice, "COLZ");
		DrawAcceptanceWeightingMap(acceptanceWeightingMapY, stn+";y [mm];#theta_{y} [mrad]", "../../Images/Sim/Acceptance/AcceptanceMaps/"+stn+"_AcceptanceSurfaceY_"+momSlice, "SURF2");

		// Reproduce as 2D graphs for interpolation
		TGraph2D *acceptanceWeightingGraphY = ConvertToTGraph2D(acceptanceWeightingMapY);
		DrawAcceptanceWeightingGraph(acceptanceWeightingGraphY, stn+";y [mm];#theta_{y} [mrad];Acceptance weighting", "../../Images/Sim/Acceptance/AcceptanceMaps/"+stn+"_AcceptanceGraphY_"+momSlice);
		string graph2DName = stn+"_WeightGraphY";
		acceptanceWeightingGraphY->SetName(graph2DName.c_str());
		acceptanceWeightingGraphY->Write();

		// ------------------------------------------------------------------------ // 

	 	// Acceptance maps in momentum bins
	  	int step = 250; 
	  	int nSlices = PMAX/step;

	  	dir = "MomBins";
		fout->cd(("AcceptanceWeighting/"+dir).c_str());	

	 	for (int i_slice = 0; i_slice < nSlices; i_slice++) { 

	 		int lo = i_slice*step; 
	    	int hi = step + lo;

	 		string stepStr = to_string(lo)+"_"+to_string(hi);

	 		cout<<stepStr<<endl;

	 		TH2D *h2_thetaY_vs_Y_decays_slice = (TH2D*)fin->Get((momSlice+"/AllDecays/MomBins/ThetaY_vs_Y_"+stepStr).c_str());
	  		TH2D *h2_thetaY_vs_Y_tracks_slice = (TH2D*)fin->Get((momSlice+"/Tracks/MomBins/"+stn+"_ThetaY_vs_Y_"+stepStr).c_str()); 

			string title = to_string(lo)+" < p [Mev] < "+to_string(hi);

			TH2D *acceptanceWeightingMapY_momSlice = AcceptanceWeightingMap(h2_thetaY_vs_Y_decays_slice, h2_thetaY_vs_Y_tracks_slice, stn, rebin,  stepStr, title); 

			acceptanceWeightingMapY_momSlice->Draw("COLZ");
			acceptanceWeightingMapY_momSlice->Write();

			cout << "----> Creating regular weight maps " << acceptanceWeightingMapY_momSlice << " for momentum bin: " << lo << " < p [MeV] < " << hi << endl;

			DrawAcceptanceWeightingMap(acceptanceWeightingMapY_momSlice, to_string(lo)+" < p [MeV] < "+to_string(hi), "../../Images/Sim/Acceptance/AcceptanceMaps/MomBins/"+stn+"_AcceptanceMapY_"+stepStr, "COLZ");
			DrawAcceptanceWeightingMap(acceptanceWeightingMapY_momSlice, to_string(lo)+" < p [MeV] < "+to_string(hi), "../../Images/Sim/Acceptance/AcceptanceMaps/MomBins/"+stn+"_AcceptanceSurfaceY_"+stepStr, "SURF2");

			TGraph2D *acceptanceWeightingGraphY_momSlice = ConvertToTGraph2D(acceptanceWeightingMapY_momSlice);
			if(acceptanceWeightingMapY_momSlice->GetEntries()!=0) DrawAcceptanceWeightingGraph(acceptanceWeightingGraphY_momSlice, stn+";y [mm];#theta_{y} [mrad];Acceptance weighting", "../../Images/Sim/Acceptance/AcceptanceMaps/MomBins/"+stn+"_AcceptanceGraphY_"+stepStr);
			graph2DName = stn+"_WeightGraphY_"+stepStr;
			acceptanceWeightingGraphY_momSlice->SetName(graph2DName.c_str());
			acceptanceWeightingGraphY_momSlice->Write();

	 	}

 	} // stn loop

	fin->Close();
	fout->Close();

	cout<<"\n------------------------------------------\nWritten ROOT file "<<foutName<<", "<<fout<<endl;

	return;

}

int main() { 

	// theta_y vs y acceptance maps
	// 0-3127 MeV part is really just for illustration

	Run("0_3127_MeV", 1);
	// Run("1000_2500_MeV", 1);

	return 0;

}

