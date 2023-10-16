/*

Samuel Grant

Produce ratio plots of theta_y in slices of y

*/

#include <iostream>

#include "../RootInclude.h"
#include "../Utils.h"

using namespace std;

void DrawRatioPlot1D(TH2D *h2, TH1D *h1_decays, TH1D *h1_tracks, string slice, string stn = "") { 

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

	c->SaveAs(("../../Images/Sim/Acceptance/VerticalAcceptanceIllustration/"+stn+"_RatioPlot"+slice+".pdf").c_str());

	delete p1;
	delete p2;
	delete l;
	delete rp;
	delete c;

	return; 

}

// Get ratio graph
TGraphErrors *GetRatioGraph(TH1D *h1, TH1D *h2) {

	TGraphErrors *gr = new TGraphErrors();

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

void Ratios(TH2D *h2_thetaY_vs_Y_decays, TH1D *h1_thetaY_decays, TH1D *h1_thetaY_tracks, string slice, std::string stn = "") {

	// Normalise projections to max bin
 	cout<<"----> Normalising to max bin"<<endl;

 	cout<<h1_thetaY_decays<<", "<<h1_thetaY_tracks<<endl;

 	if (h1_thetaY_decays->GetSumw2N() == 0) h1_thetaY_decays->Sumw2(kTRUE);
 	if (h1_thetaY_tracks->GetSumw2N() == 0) h1_thetaY_tracks->Sumw2(kTRUE);

 	h1_thetaY_decays->Scale(1./h1_thetaY_decays->GetMaximum());
 	h1_thetaY_tracks->Scale(1./h1_thetaY_tracks->GetMaximum());

  	cout<<"----> Drawing ratio plot"<<endl;

  	DrawRatioPlot1D(h2_thetaY_vs_Y_decays, h1_thetaY_decays, h1_thetaY_tracks, slice, stn);

	return;

}

void Run() {	

	// Get input, always use truth
	TString finName = "../../Plots/Sim/Acceptance/BaseHistograms/trackerAcceptancePlots.truth.root";
	TFile *fin = TFile::Open(finName);

	cout<<"----> Opened file "<<finName<<", "<<fin<<endl;

	// Loop thro' stations
	vector<string> stn_ = {"S12S18", "S12", "S18"};

	for(auto& stn : stn_) { 

		cout<<"----> Running "<<stn<<endl;

        int nSlices = 18;
        int step = 5; 

        for ( int i_slice = 0; i_slice < nSlices; i_slice++ ) { 

            int lo = -45 + i_slice*step; 
            int hi = step + lo;

            std::string stepStr = to_string(lo)+"_"+to_string(hi);

            TH2D *h2_thetaY_vs_Y_decays_slice = (TH2D*)fin->Get(("0_3127_MeV/AllDecays/VertPosBins/ThetaY_vs_Y_"+stepStr).c_str());
        
            h2_thetaY_vs_Y_decays_slice->GetXaxis()->SetRangeUser(-45, 45);

            TH1D *h1_thetaY_decays_slice = (TH1D*)fin->Get(("0_3127_MeV/AllDecays/VertPosBins/ThetaY_"+stepStr).c_str());
            TH1D *h1_thetaY_tracks_slice = (TH1D*)fin->Get(("0_3127_MeV/Tracks/VertPosBins/S12S18_ThetaY_"+stepStr).c_str());

            Ratios(h2_thetaY_vs_Y_decays_slice, h1_thetaY_decays_slice, h1_thetaY_tracks_slice, "_"+stepStr, stn);

        }

    }

	fin->Close();

	return;
            
}

int main() { 

	Run();

	return 0;

}
 		// We do not need to keep re-running this stuff since it's just an illustration of what happens when you step through vertical position slices

 		// Now make ratios in slices of y
 		// No need to to write these to ROOT

  	// Reset range for decays histogram
/*		double xmin = h2_thetaY_vs_Y_decays->GetXaxis()->GetBinLowEdge(h2_thetaY_vs_Y_decays->FindFirstBinAbove(0));
		double ymin = h2_thetaY_vs_Y_decays->GetXaxis()->GetBinLowEdge(h2_thetaY_vs_Y_decays->FindFirstBinAbove(0));
		double xmax = h2_thetaY_vs_Y_decays->GetXaxis()->GetBinUpEdge(h2_thetaY_vs_Y_decays->FindLastBinAbove(0));
		double ymax = h2_thetaY_vs_Y_decays->GetXaxis()->GetBinUpEdge(h2_thetaY_vs_Y_decays->FindLastBinAbove(0));
		
		h2_thetaY_vs_Y_decays->GetXaxis()->SetRangeUser(xmin, xmax);
		h2_thetaY_vs_Y_decays->GetYaxis()->SetRangeUser(ymin, ymax);

	 	Ratios(h2_thetaY_vs_Y_decays, h1_thetaY_decays, h1_thetaY_tracks, "1DRatios/Simultaneous", stn);

	 	// Vertical slices to prove that we need 2D acceptance
	  	step = 10; 
	  	nSlices = 9;


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

*/


