#include <iostream>

#include "RootInclude.h"
#include "Utils.h"

using namespace std;

string GetQual(string config) {

  // AQ: just a time cut in the case of "decays". Additional p-val and hitVol cut for vertices
  // BQ: full vertex cuts
  // CQ: time cut plus 12 planes hit cut

  if(config.find("_AQ") != std::string::npos) { 
    return "AQ";
  } else if(config.find("_BQ") != std::string::npos) { 
    return "BQ";
  } else if(config.find("_CQ") != std::string::npos) { 
    return "CQ";
  } else { 
    cerr<<"Qual is unknown";
    return "";
  }

}

int GetStep(string config) { 

  if(config.find("500MeV") != std::string::npos) { 
    return 500;
  } else if(config.find("250MeV") != std::string::npos) { 
    return 250;
  } else if(config.find("200MeV") != std::string::npos) { 
    return 200;
  } else if(config.find("125MeV") != std::string::npos) { 
    return 125;
  } else { 
    cerr<<"Step size is unknown";
    return -1;
  }

}

void DrawAcceptanceWeightingMap(TH2D *map, string title, string fname, TString drawOption) { //";Decay y-position [mm];#theta_{y} [mrad];Ratio", "../Images/MC/Acceptance/BaseHistograms/h2_thetaY_vs_Y_ratio");

	TCanvas *c = new TCanvas("c","c",800,600);

	map->SetTitle(title.c_str());
	map->SetStats(0);
	
	map->GetXaxis()->SetTitleSize(.04);
	map->GetYaxis()->SetTitleSize(.04);

	map->GetXaxis()->CenterTitle(1);
	map->GetYaxis()->CenterTitle(1);
	map->GetYaxis()->SetMaxDigits(4);

	map->GetZaxis()->SetTitle("Inverse acceptance weighting");

	gStyle->SetPalette(kRainBow);
	c->SetRightMargin(0.13);

	if(drawOption == "SURF2") {
		map->GetXaxis()->SetTitleOffset(1.5);
		map->GetYaxis()->SetTitleOffset(1.6);
	} else{ 
		map->GetXaxis()->SetTitleOffset(1.1);
		map->GetYaxis()->SetTitleOffset(1.1);
		gStyle->SetPaintTextFormat("4.2f");
		gPad->Update();
	}

	map->GetZaxis()->CenterTitle(1);

	map->GetXaxis()->SetRangeUser(-60, 60);
	map->GetYaxis()->SetRangeUser(-100, 100);
	map->Draw(drawOption);

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;
}


void DrawTH2(TH2D *hist, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());

	hist->SetStats(0);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.1);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);

	hist->GetYaxis()->SetRangeUser(-100,100);

	gStyle->SetPalette(kRainBow);
	c->SetRightMargin(0.13);

	hist->Draw("COLZ");

	// For some reason you need to update the pad when dealing with cloned histograms
	c->Update();
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

TH2D *AcceptanceWeightingMap(TH2D *h2_thetaY_vs_Y_decays, TH2D *h2_thetaY_vs_Y_tracks, int rebin, string dir, string par = "Y", string stepStr = "", string title = "", string stn = "") {

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
  h2_thetaY_vs_Y_decays_clone->GetXaxis()->SetRangeUser(-60, 60);
  h2_thetaY_vs_Y_decays_clone->GetYaxis()->SetRangeUser(-100, 100);
  h2_thetaY_vs_Y_tracks_clone->GetXaxis()->SetRangeUser(-60, 60);
  h2_thetaY_vs_Y_tracks_clone->GetYaxis()->SetRangeUser(-100, 100);

	DrawTH2(h2_thetaY_vs_Y_decays_clone, (title+";y [mm];#theta_{y} [mrad]").c_str(), "../Images/MC/Acceptance/"+dir+"/h2_thetaY_vs_Y_decays_normTest"+stepStr);
	DrawTH2(h2_thetaY_vs_Y_tracks_clone, (title+";y [mm];#theta_{y} [mrad]").c_str(), "../Images/MC/Acceptance/"+dir+"/h2_thetaY_vs_Y_tracks_normTest"+stepStr);

	// cout<<"finised drawing"<<endl;

	TH2D *ratio = (TH2D*)h2_thetaY_vs_Y_tracks_clone->Clone((stn+"_WeightMap"+par+stepStr).c_str());
	ratio->Divide(h2_thetaY_vs_Y_decays_clone);

	//int x, y, z;
	//ratio->GetBinXYZ(ratio->GetMaximumBin(), x, y, z);
	ratio->Scale(1./ratio->GetBinContent(ratio->GetMaximumBin()));
	
	return ratio;

}

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

	//c->SaveAs(("../Images/MC/Acceptance/"+config+"/"+stn+"_RatioPlot"+slice+".C").c_str());
	c->SaveAs(("../Images/MC/Acceptance/"+config+"/"+stn+"_RatioPlot"+slice+".pdf").c_str());
	c->SaveAs(("../Images/MC/Acceptance/"+config+"/"+stn+"_RatioPlot"+slice+".png").c_str());

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

		// These are correlated unfortunately
		// Aren't they 100% correlated
		// It's the same events...

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

 	// Get ratio graph manually since TRatioPlot is shit.
 	TGraphErrors *rg = GetRatioGraph(h1_thetaY_tracks, h1_thetaY_decays);

 	TF1 *fit = new TF1("AcceptanceFunc", "1/([0]*exp(-0.5*((x-[1])/[2])**2))", -60, 60);//, 3);
 	fit->SetParameter(0, 1.00457);
  fit->SetParameter(1, 8.91755e-01);
  fit->SetParameter(2, 2.70153e+01);

 	//TF1 *fit = new TF1("fit", "([0]+[1]*x**2)**(3/2)", -60, 60);//, 3);
 	rg->Fit(fit);//"gaus");//	, "R");

 	cout<<fit->GetChisquare()/fit->GetNDF()<<endl;

	return;
}


void Run(string config, string momSlice, int rebin = 1) {	

	TString finName = "../Plots/MC/Acceptance/Plots/trackerAcceptancePlots."+config+".root";
	TFile *fin = TFile::Open(finName);

	cout<<"----> Opened file "<<finName<<", "<<fin<<endl;

	TString foutName = "../Plots/MC/Acceptance/Plots/acceptanceWeightingPlots."+config+".root";
	//foutName = "test.root";
	TFile *fout = new TFile(foutName, "RECREATE");

	fout->mkdir("AcceptanceWeighting");
	fout->mkdir("AcceptanceWeighting/AllMom");
	fout->mkdir("AcceptanceWeighting/MomBins");

	vector<string> stn_ = {"S12S18", "S12", "S18"};

	for(auto& stn : stn_) { 

		cout<<"----> Running "<<stn<<endl;

		TH1D *h1_thetaY_decays = (TH1D*)fin->Get((momSlice+"/AllDecays/Main/ThetaY").c_str());
		TH1D *h1_thetaY_tracks = (TH1D*)fin->Get((momSlice+"/Tracks/Main/"+stn+"_ThetaY").c_str());

	  TH2D *h2_thetaY_vs_Y_decays = (TH2D*)fin->Get((momSlice+"/AllDecays/Main/ThetaY_vs_Y").c_str());
	  TH2D *h2_thetaY_vs_Y_tracks = (TH2D*)fin->Get((momSlice+"/Tracks/Main/"+stn+"_ThetaY_vs_Y").c_str()); 

	  TH2D *h2_thetaY_vs_R_decays = (TH2D*)fin->Get((momSlice+"/AllDecays/Main/ThetaY_vs_R").c_str());
	  TH2D *h2_thetaY_vs_R_tracks = (TH2D*)fin->Get((momSlice+"/Tracks/Main/"+stn+"_ThetaY_vs_R").c_str()); 

	  TH2D *h2_thetaY_vs_Phi_decays = (TH2D*)fin->Get((momSlice+"/AllDecays/Main/ThetaY_vs_Phi").c_str());
	  TH2D *h2_thetaY_vs_Phi_tracks = (TH2D*)fin->Get((momSlice+"/Tracks/Main/"+stn+"_ThetaY_vs_Phi").c_str()); 

	 	cout<<"----> Got histograms: "<<h2_thetaY_vs_Y_decays<<", "<<h2_thetaY_vs_Y_tracks<<", "<<h1_thetaY_decays<<", "<<h1_thetaY_tracks<<", "<<h2_thetaY_vs_R_decays<<", "<<h2_thetaY_vs_R_tracks<<", "<<h2_thetaY_vs_Phi_decays<<", "<<h2_thetaY_vs_Phi_tracks<<endl;

	 	// Draw
	 	cout<<"----> Drawing base histograms"<<endl;

	  string dir = "AllMom";
	  fout->cd(("AcceptanceWeighting/"+dir).c_str());

	  // TH2D *h2_thetaY_vs_Y_decays, TH2D *h2_thetaY_vs_Y_tracks, int rebin, string dir, string stepStr = "", string title = "", string stn = ""
		TH2D *acceptanceWeightingMapY = AcceptanceWeightingMap(h2_thetaY_vs_Y_decays, h2_thetaY_vs_Y_tracks, rebin, config+"/2DRatios/Simultaneous", "Y", "", "", stn); 
		TH2D *acceptanceWeightingMapR = AcceptanceWeightingMap(h2_thetaY_vs_R_decays, h2_thetaY_vs_R_tracks, rebin, config+"/2DRatios/Simultaneous", "R", "", "", stn); 
		TH2D *acceptanceWeightingMapPhi = AcceptanceWeightingMap(h2_thetaY_vs_Phi_decays, h2_thetaY_vs_Phi_tracks, rebin, config+"/2DRatios/Simultaneous", "R", "", "", stn); 
		
		cout<<"----> Created weight maps " << acceptanceWeightingMapY << ", " << acceptanceWeightingMapR << ", " << acceptanceWeightingMapPhi << " for all momentum"<<endl;
		
		DrawAcceptanceWeightingMap(acceptanceWeightingMapY, stn+";Vertical decay postion [mm];#theta_{y} [mrad]", "../Images/MC/Acceptance/"+config+"/2DRatios/Simultaneous/"+stn+"_AcceptanceMapY_"+momSlice, "COLZ");
		DrawAcceptanceWeightingMap(acceptanceWeightingMapY, stn+";Vertical decay postion [mm];#theta_{y} [mrad]", "../Images/MC/Acceptance/"+config+"/2DRatios/Simultaneous/"+stn+"_AcceptanceSurfaceY_"+momSlice, "SURF2");

		DrawAcceptanceWeightingMap(acceptanceWeightingMapR, stn+";Radial decay position [mm];#theta_{y} [mrad]", "../Images/MC/Acceptance/"+config+"/2DRatios/Simultaneous/"+stn+"_AcceptanceMapR_"+momSlice, "COLZ");
		DrawAcceptanceWeightingMap(acceptanceWeightingMapR, stn+";Radial decay position [mm];#theta_{y} [mrad]", "../Images/MC/Acceptance/"+config+"/2DRatios/Simultaneous/"+stn+"_AcceptanceSurfaceR_"+momSlice, "SURF2");

		DrawAcceptanceWeightingMap(acceptanceWeightingMapPhi, stn+";Azimuthal decay angle [rad];#theta_{y} [mrad]", "../Images/MC/Acceptance/"+config+"/2DRatios/Simultaneous/"+stn+"_AcceptanceMapPhi_"+momSlice, "COLZ");
		DrawAcceptanceWeightingMap(acceptanceWeightingMapPhi, stn+";Azimuthal decay angle [rad];#theta_{y} [mrad]", "../Images/MC/Acceptance/"+config+"/2DRatios/Simultaneous/"+stn+"_AcceptanceSurfacePhi_"+momSlice, "SURF2");

		acceptanceWeightingMapY->Write();
		acceptanceWeightingMapR->Write();
		acceptanceWeightingMapPhi->Write();

/*	}

	fin->Close();
	fout->Close();

	cout<<"\n------------------------------------------\nWritten ROOT file "<<foutName<<", "<<fout<<endl;

	return;
*/
		// ------------------------------------------------------------------------ // 

	 	// Get acceptance weighting in momentum bins
	  int step = 250; 
	  int nSlices = PMAX/step;

	  dir = "MomBins";
		fout->cd(("AcceptanceWeighting/"+dir).c_str());	

	 	for (int i_slice = 0; i_slice < nSlices; i_slice++) { 

	 		int lo = i_slice*step; 
	    int hi = step + lo;

	 		std::string stepStr = to_string(lo)+"_"+to_string(hi);

	  	TH1D *h1_thetaY_decays_slice = (TH1D*)fin->Get((momSlice+"/AllDecays/MomBins/ThetaY_"+stepStr).c_str());
			TH1D *h1_thetaY_tracks_slice = (TH1D*)fin->Get((momSlice+"/Tracks/MomBins/"+stn+"_ThetaY_"+stepStr).c_str());

	 		TH2D *h2_thetaY_vs_Y_decays_slice = (TH2D*)fin->Get((momSlice+"/AllDecays/MomBins/ThetaY_vs_Y_"+stepStr).c_str());
	  	TH2D *h2_thetaY_vs_Y_tracks_slice = (TH2D*)fin->Get((momSlice+"/Tracks/MomBins/"+stn+"_ThetaY_vs_Y_"+stepStr).c_str()); 
	 		
	 		TH2D *h2_thetaY_vs_R_decays_slice = (TH2D*)fin->Get((momSlice+"/AllDecays/MomBins/ThetaY_vs_R_"+stepStr).c_str());
	  	TH2D *h2_thetaY_vs_R_tracks_slice = (TH2D*)fin->Get((momSlice+"/Tracks/MomBins/"+stn+"_ThetaY_vs_R_"+stepStr).c_str()); 

	 		TH2D *h2_thetaY_vs_Phi_decays_slice = (TH2D*)fin->Get((momSlice+"/AllDecays/MomBins/ThetaY_vs_Phi_"+stepStr).c_str());
	  	TH2D *h2_thetaY_vs_Phi_tracks_slice = (TH2D*)fin->Get((momSlice+"/Tracks/MomBins/"+stn+"_ThetaY_vs_Phi_"+stepStr).c_str()); 

			string title = to_string(lo)+" < p [Mev] < "+to_string(hi);

			TH2D *acceptanceWeightingMapY_momSlice = AcceptanceWeightingMap(h2_thetaY_vs_Y_decays_slice, h2_thetaY_vs_Y_tracks_slice, rebin, config+"/2DRatios/MomentumBinned", "Y", stepStr, title, stn); 
			TH2D *acceptanceWeightingMapR_momSlice = AcceptanceWeightingMap(h2_thetaY_vs_R_decays_slice, h2_thetaY_vs_R_tracks_slice, rebin, config+"/2DRatios/MomentumBinned", "R", stepStr, title, stn); 
			TH2D *acceptanceWeightingMapPhi_momSlice = AcceptanceWeightingMap(h2_thetaY_vs_Phi_decays_slice, h2_thetaY_vs_Phi_tracks_slice, rebin, config+"/2DRatios/MomentumBinned", "Phi", stepStr, title, stn); 

			cout<<"----> Creating regular weight maps " << acceptanceWeightingMapY_momSlice << ", " << acceptanceWeightingMapR_momSlice << " for momentum bin: "<<lo<<" < p [MeV] < "<<hi<<endl;

			DrawAcceptanceWeightingMap(acceptanceWeightingMapY_momSlice, to_string(lo)+" < p [MeV] < "+to_string(hi), "../Images/MC/Acceptance/"+config+"/2DRatios/MomentumBinned/"+stn+"_AcceptanceMapY_"+stepStr, "COLZ");
			DrawAcceptanceWeightingMap(acceptanceWeightingMapY_momSlice, to_string(lo)+" < p [MeV] < "+to_string(hi), "../Images/MC/Acceptance/"+config+"/2DRatios/MomentumBinned/"+stn+"_AcceptanceSurfaceY_"+stepStr, "SURF2");

			DrawAcceptanceWeightingMap(acceptanceWeightingMapR_momSlice, to_string(lo)+" < p [MeV] < "+to_string(hi), "../Images/MC/Acceptance/"+config+"/2DRatios/MomentumBinned/"+stn+"_AcceptanceMapR_"+stepStr, "COLZ");
			DrawAcceptanceWeightingMap(acceptanceWeightingMapR_momSlice, to_string(lo)+" < p [MeV] < "+to_string(hi), "../Images/MC/Acceptance/"+config+"/2DRatios/MomentumBinned/"+stn+"_AcceptanceSurfaceR_"+stepStr, "SURF2");

			DrawAcceptanceWeightingMap(acceptanceWeightingMapPhi_momSlice, to_string(lo)+" < p [MeV] < "+to_string(hi), "../Images/MC/Acceptance/"+config+"/2DRatios/MomentumBinned/"+stn+"_AcceptanceMapPhi_"+stepStr, "COLZ");
			DrawAcceptanceWeightingMap(acceptanceWeightingMapPhi_momSlice, to_string(lo)+" < p [MeV] < "+to_string(hi), "../Images/MC/Acceptance/"+config+"/2DRatios/MomentumBinned/"+stn+"_AcceptanceSurfacePhi_"+stepStr, "SURF2");


			acceptanceWeightingMapY->Write();
			acceptanceWeightingMapR->Write();
			acceptanceWeightingMapPhi->Write();

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

	  	for ( int i_slice = 0; i_slice < nSlices; i_slice++ ) { 

	    	int lo = -45 + i_slice*step; 
	    	int hi = step + lo;

	    	std::string stepStr = to_string(lo)+"_"+to_string(hi);

	    	TH2D *h2_thetaY_vs_Y_decays_slice = (TH2D*)fin->Get(("AllDecays/VertPosBins/ThetaY_vs_Y_"+stepStr).c_str());
			
				h2_thetaY_vs_Y_decays_slice->GetXaxis()->SetRangeUser(-45, 45);
				h2_thetaY_vs_Y_decays_slice->GetYaxis()->SetRangeUser(ymin, ymax);

	    	TH1D *h1_thetaY_decays_slice = (TH1D*)fin->Get(("AllDecays/VertPosBins/ThetaY_"+stepStr).c_str());
	    	TH1D *h1_thetaY_tracks_slice = (TH1D*)fin->Get(("Tracks/VertPosBins/S12S18_ThetaY_"+stepStr).c_str());

	 			Ratios(h2_thetaY_vs_Y_decays_slice, h1_thetaY_decays_slice, h1_thetaY_tracks_slice, config+"/1DRatios/VertPosBinned", "_"+stepStr, stn);

	 		}*/

 	} // stn loop

	fin->Close();
	fout->Close();

	cout<<"\n------------------------------------------\nWritten ROOT file "<<foutName<<", "<<fout<<endl;

	return;

}

int main() { 

    Run("truth", "0_3127_MeV", 1);
	//Run("reco", 4);

	//RunData("Run-1d_250MeV_BQ", 4);
    return 0;
}