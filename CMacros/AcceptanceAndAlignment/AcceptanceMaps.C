/*

Samuel Grant

Produce theta_y vs y acceptance maps, to be used to weight the "all decays" sample. 

Note: 'maps' is a bit of misnomer in this case, they're not technically acceptance maps.

*/

#include <iostream>

#include "../Common/RootInclude.h"
#include "../Common/Utils.h"
#include "../Common/FancyDraw.h"

using namespace std;

// Draw acceptance weighting map (2D)
void DrawAcceptanceWeightingMap(TH2D *map, string title, string fname, TString drawOption) { //";Decay y-position [mm];#theta_{y} [mrad];Ratio", "../../Images/Sim/Acceptance/BaseHistograms/h2_thetaY_vs_Y_ratio");

	TCanvas *c = new TCanvas("c","c",800,600);

	map->SetTitle(title.c_str());
	map->SetStats(0);
	
	map->GetXaxis()->SetTitleSize(.04);
	map->GetYaxis()->SetTitleSize(.04);

	map->GetXaxis()->CenterTitle(1);
	map->GetYaxis()->CenterTitle(1);
	map->GetYaxis()->SetMaxDigits(4);

	map->GetZaxis()->SetTitle("Acceptance weighting");

	gStyle->SetPalette(53); 
	c->SetRightMargin(0.13);

	if(drawOption == "SURF2") {
		map->GetXaxis()->SetTitleOffset(1.5);
		map->GetYaxis()->SetTitleOffset(1.6);
	} else{ 
		map->GetXaxis()->SetTitleOffset(1.1);
		map->GetYaxis()->SetTitleOffset(1.1);
		gPad->Update();
	}

	map->GetZaxis()->CenterTitle(1);

	map->GetXaxis()->SetRangeUser(-60, 60);
	map->GetYaxis()->SetRangeUser(-100, 100);
	map->Draw(drawOption);

	c->SaveAs((fname+".pdf").c_str());

	delete c;

	return;

}

// Acceptance weighting graph (3D)
void DrawAcceptanceWeightingGraph(TGraph2D *gr, string title, string fname) { 
	
	TCanvas *c = new TCanvas("c","c",800,600);

	gStyle->SetPalette(53);
	gr->Draw("TRI1");
	c->Update();
	gr->SetTitle(title.c_str());
	gr->GetXaxis()->SetTitleSize(.04);
	gr->GetYaxis()->SetTitleSize(.04);
	gr->GetXaxis()->CenterTitle(1);
	gr->GetYaxis()->CenterTitle(1);
	gr->GetZaxis()->CenterTitle(1);
	gr->GetYaxis()->SetMaxDigits(4);
	gr->GetXaxis()->SetTitleOffset(1.95);
	gr->GetYaxis()->SetTitleOffset(1.95);
	gr->GetZaxis()->SetTitleOffset(1.25);

	gPad->Update();
	
	gr->Draw("TRI1");

	c->SaveAs((fname+".pdf").c_str());

	delete c;


}

// Make acceptance weighting map
TH2D *AcceptanceWeightingMap(TH2D *h2_thetaY_vs_Y_decays, TH2D *h2_thetaY_vs_Y_tracks, string stn = "", int rebin = 1, string stepStr = "", string title = "") { // TH2D *h2_thetaY_vs_Y_decays, TH2D *h2_thetaY_vs_Y_tracks, int rebin = 1, string dir = "", string par = "Y", string stepStr = "", string title = "", string stn = "") {

	string par = "Y"; // Could also be "R" or "Phi"
	if(stepStr != "") stepStr = "_"+stepStr;

	// Clone before rebinning 
	TH2D *h2_thetaY_vs_Y_decays_clone = (TH2D*)h2_thetaY_vs_Y_decays->Clone(("h2_thetaY_vs_Y_decays_clone"+stepStr).c_str());
	TH2D *h2_thetaY_vs_Y_tracks_clone = (TH2D*)h2_thetaY_vs_Y_tracks->Clone(("h2_thetaY_vs_Y_decays_clone"+stepStr).c_str());

	// Rebin before normalising
	h2_thetaY_vs_Y_decays_clone->RebinX(rebin);
	h2_thetaY_vs_Y_decays_clone->RebinY(rebin);
	h2_thetaY_vs_Y_tracks_clone->RebinX(rebin);
	h2_thetaY_vs_Y_tracks_clone->RebinY(rebin);

	// Create structure to store sum of squares of weights.
	if (h2_thetaY_vs_Y_decays_clone->GetSumw2N() == 0) h2_thetaY_vs_Y_decays_clone->Sumw2(kTRUE);
 	if (h2_thetaY_vs_Y_tracks_clone->GetSumw2N() == 0) h2_thetaY_vs_Y_tracks_clone->Sumw2(kTRUE);

	// Draw hists
 	if(false) { 
  
  		h2_thetaY_vs_Y_decays_clone->GetXaxis()->SetRangeUser(-60, 60);
  		h2_thetaY_vs_Y_decays_clone->GetYaxis()->SetRangeUser(-100, 100);
  		h2_thetaY_vs_Y_tracks_clone->GetXaxis()->SetRangeUser(-60, 60);
  		h2_thetaY_vs_Y_tracks_clone->GetYaxis()->SetRangeUser(-100, 100);

		DrawTH2(h2_thetaY_vs_Y_decays_clone, (title+";y [mm];#theta_{y} [mrad]").c_str(), "../../Images/Sim/Acceptance/AcceptanceMaps/h2_thetaY_vs_Y_decays_normTest"+stepStr);
		DrawTH2(h2_thetaY_vs_Y_tracks_clone, (title+";y [mm];#theta_{y} [mrad]").c_str(), "../../Images/Sim/Acceptance/AcceptanceMaps/h2_thetaY_vs_Y_tracks_normTest"+stepStr);

	}

	string ratioName = stn+"_WeightMap"+par+stepStr;

	cout<<"Setting name to "<<ratioName<<endl;

	TH2D *ratio = (TH2D*)h2_thetaY_vs_Y_tracks_clone->Clone(ratioName.c_str());
	ratio->Divide(h2_thetaY_vs_Y_decays_clone);

	cout<<"Name set to "<<ratio->GetName()<<endl;
	
	// ratio->SetName((stn+"_WeightMap"+par+stepStr).c_str());

	//int x, y, z;
	//ratio->GetBinXYZ(ratio->GetMaximumBin(), x, y, z);
	// You can just use "GetMaximum" in future... 
	//ratio->Scale(1./ratio->GetBinContent(ratio->GetMaximumBin()));

	ratio->Scale(1./ratio->GetMaximum()); 

	return ratio;

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