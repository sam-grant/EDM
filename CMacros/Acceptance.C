/*Produce theta_y(y) acceptance function for EDM analysis*/

#include <iostream>

#include "RootInclude.h"
//#include "FancyDraw.h"
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

// OLD
void DrawAcceptanceFit(TGraphErrors *graph, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	graph->SetTitle(title.c_str());
	graph->GetXaxis()->SetTitleSize(.04);
	graph->GetYaxis()->SetTitleSize(.04);
	graph->GetXaxis()->SetTitleOffset(1.1);
	graph->GetYaxis()->SetTitleOffset(1.2);
	graph->GetXaxis()->CenterTitle(true);
	graph->GetYaxis()->CenterTitle(true);
	graph->GetYaxis()->SetMaxDigits(4);
	graph->SetMarkerStyle(20); //  Full circle
	graph->Draw("AP");


	TF1 *fit = (TF1*)graph->GetFunction("AcceptanceFunc");

	TLegend *leg = new TLegend(0.325,0.75,0.80,0.85);
	leg->SetNColumns(2);
	leg->SetBorderSize(0);
	leg->SetTextSize(26);
	leg->SetTextFont(44);
	leg->AddEntry(graph, "Sim");
	leg->AddEntry(fit, "(ke^{#minus0.5#upoint(#frac{x-#mu}{#sigma})^{2}})^{-1}");
	leg->Draw("SAME");

	//  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE
	//   1  p0           1.00408e+00   1.95515e-03   6.23987e-06   2.18294e-01
	//   2  p1           9.13656e-01   7.10805e-02   2.81455e-04   5.75171e-03
	//   3  p2           2.70907e+01   8.81679e-02   2.80363e-04   6.95623e-03
	
  	TPaveText *names = new TPaveText(0.35,0.50,0.50,0.70,"NDC");
  	names->SetTextAlign(13);
  	names->AddText("#chi^{2}/ndf");
  	names->AddText("k");
  	names->AddText("#mu");
  	names->AddText("#sigma");

  	TPaveText *values = new TPaveText(0.50,0.50,0.65,0.70,"NDC");
 	values->SetTextAlign(33);
  	values->AddText(Round(fit->GetChisquare()/fit->GetNDF(), 3));
  	values->AddText("1.004#pm0.002");
  	values->AddText("0.91#pm0.07");
  	values->AddText("27.09#pm0.09");

  	names->SetTextSize(26);
  	names->SetTextFont(44);
  	names->SetFillColor(0);
  	values->SetFillColor(0);
  	values->SetTextFont(44);
  	values->SetTextSize(26);

  	names->Draw("SAME");
  	values->Draw("SAME");
	//c->SetGridx();

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

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

	gStyle->SetPalette(55);
	c->SetRightMargin(0.13);

	// Renormalise
/*	if(renormalise) {
		map->Scale(1./(map->GetBinContent(map->GetMaximumBin())));
		map->GetZaxis()->SetTitle("Inverse acceptance weighting (normalised)");
	} else {
		map->GetZaxis()->SetTitle("Inverse acceptance weighting");
	}*/

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


	// Seg fault if this isn't hard coded?
	//c->SaveAs("../Images/MC/Acceptance/BaseHistograms/surf_ratio.pdf");	

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	// Draw once as a coarse binned correlation map
	
/*	ratio->Draw("COLZ TEXT 2");
	*/

	

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

	gStyle->SetPalette(55);
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

TH2D *AcceptanceWeightingMap(TH2D *h2_thetaY_vs_Y_decays, TH2D *h2_thetaY_vs_Y_tracks, int rebin, string dir, string stepStr = "", string title = "", string stn = "") {

	if(stepStr != "") stepStr = "_"+stepStr;

	// Clone before rebinning 
	TH2D *h2_thetaY_vs_Y_decays_clone = (TH2D*)h2_thetaY_vs_Y_decays->Clone(("h2_thetaY_vs_Y_decays_clone"+stepStr).c_str());
	TH2D *h2_thetaY_vs_Y_tracks_clone = (TH2D*)h2_thetaY_vs_Y_tracks->Clone(("h2_thetaY_vs_Y_decays_clone"+stepStr).c_str());

	// Draw normalised hists
	//DrawTH2(h2_thetaY_vs_Y_decays_clone, ("All decays: "+title+";y [mm];#theta_{y} [mrad]").c_str(), "../Images/MC/Acceptance/"+dir+"/h2_thetaY_vs_Y_decays"+stepStr);
	//DrawTH2(h2_thetaY_vs_Y_tracks_clone, ("Tracks: "+title+";y [mm];#theta_{y} [mrad]").c_str(), "../Images/MC/Acceptance/"+dir+"/h2_thetaY_vs_Y_tracks"+stepStr);

	// cout<<"*********\nBinwidthX = "<<h2_thetaY_vs_Y_decays_clone->GetXaxis()->GetBinWidth(1)<<endl;
	// cout<<"BinwidthY = "<<h2_thetaY_vs_Y_decays_clone->GetYaxis()->GetBinWidth(1)<<endl;
	// cout<<"*********\nBinsX = "<<h2_thetaY_vs_Y_decays_clone->GetNbinsX()<<endl;
	// cout<<"nBinsY = "<<h2_thetaY_vs_Y_decays_clone->GetNbinsY()<<endl;

	// Rebin before normalising
	h2_thetaY_vs_Y_decays_clone->RebinX(rebin);
	h2_thetaY_vs_Y_decays_clone->RebinY(rebin);
	h2_thetaY_vs_Y_tracks_clone->RebinX(rebin);
	h2_thetaY_vs_Y_tracks_clone->RebinY(rebin);

	// Create structure to store sum of squares of weights.
	if (h2_thetaY_vs_Y_decays_clone->GetSumw2N() == 0) h2_thetaY_vs_Y_decays_clone->Sumw2(kTRUE);
 	if (h2_thetaY_vs_Y_tracks_clone->GetSumw2N() == 0) h2_thetaY_vs_Y_tracks_clone->Sumw2(kTRUE);

	//cout<<"finised rebin"<<endl;

	// Normalise
	h2_thetaY_vs_Y_decays_clone->Scale(1./(h2_thetaY_vs_Y_decays_clone->GetBinContent(h2_thetaY_vs_Y_decays_clone->GetMaximumBin())));
	h2_thetaY_vs_Y_tracks_clone->Scale(1./(h2_thetaY_vs_Y_tracks_clone->GetBinContent(h2_thetaY_vs_Y_tracks_clone->GetMaximumBin())));

	// Draw hists
   	h2_thetaY_vs_Y_decays_clone->GetXaxis()->SetRangeUser(-60, 60);
   	h2_thetaY_vs_Y_decays_clone->GetYaxis()->SetRangeUser(-100, 100);
   	h2_thetaY_vs_Y_tracks_clone->GetXaxis()->SetRangeUser(-60, 60);
   	h2_thetaY_vs_Y_tracks_clone->GetYaxis()->SetRangeUser(-100, 100);

	//DrawTH2(h2_thetaY_vs_Y_decays_clone, (title+";y [mm];#theta_{y} [mrad]").c_str(), "../Images/Data/Acceptance/"+dir+"/h2_thetaY_vs_Y_decays"+stepStr);
	//DrawTH2(h2_thetaY_vs_Y_tracks_clone, (title+";y [mm];#theta_{y} [mrad]").c_str(), "../Images/Data/Acceptance/"+dir+"/h2_thetaY_vs_Y_tracks"+stepStr);

	// cout<<"finised drawing"<<endl;

	TH2D *ratio = (TH2D*)h2_thetaY_vs_Y_tracks_clone->Clone((stn+"WeightMap"+stepStr).c_str());
	ratio->Divide(h2_thetaY_vs_Y_decays_clone);
	
	return ratio;

}

void DrawRatioPlot1D(TH2D *h2, TH1D *h1_decays, TH1D *h1_tracks, string config, string slice) { 

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

	c->Update();

	c->cd(0); 

	TPad *p2 = new TPad("p2", "p2", .69, .69, .99, .99);
	p2->Draw();
	p2->cd();
	gStyle->SetPalette(kRainBow);

	h2->GetXaxis()->CenterTitle(1);
	h2->GetYaxis()->CenterTitle(1);

	h2->SetTitle(";y [mm];#theta_{y} [mm]");
	h2->Draw("COL");

	c->cd(0);

	TLegend *l = new TLegend(0.12, 0.79, .40, .89);
	l->SetBorderSize(0);
	l->SetTextSize(24);
	l->SetTextFont(44);
	l->AddEntry(h1_decays, "All decays");
	l->AddEntry(h1_tracks, "Reco vertices");
	l->Draw("SAME");

	c->SaveAs(("../Images/MC/Acceptance/"+config+"/RatioPlot"+slice+".C").c_str());
	c->SaveAs(("../Images/MC/Acceptance/"+config+"/RatioPlot"+slice+".pdf").c_str());
	c->SaveAs(("../Images/MC/Acceptance/"+config+"/RatioPlot"+slice+".png").c_str());

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

void Ratios(TH2D *h2_thetaY_vs_Y_decays, TH1D *h1_thetaY_decays, TH1D *h1_thetaY_tracks, std::string config, std::string slice = "") {

	cout<<"----> "<<config<<" "<<slice<<endl;

	// Normalise projections to max bin
 	cout<<"----> Normalising to max bin"<<endl;

 	cout<<h1_thetaY_decays<<", "<<h1_thetaY_tracks<<endl;

 	if (h1_thetaY_decays->GetSumw2N() == 0) h1_thetaY_decays->Sumw2(kTRUE);
 	if (h1_thetaY_tracks->GetSumw2N() == 0) h1_thetaY_tracks->Sumw2(kTRUE);

 	h1_thetaY_decays->Scale(1./h1_thetaY_decays->GetMaximum());
 	h1_thetaY_tracks->Scale(1./h1_thetaY_tracks->GetMaximum());

  	cout<<"----> Drawing ratio plot"<<endl;

  	DrawRatioPlot1D(h2_thetaY_vs_Y_decays, h1_thetaY_decays, h1_thetaY_tracks, config, slice);

 	// Get ratio graph manually since TRatioPlot is shit.
 	TGraphErrors *rg = GetRatioGraph(h1_thetaY_tracks, h1_thetaY_decays);

 	TF1 *fit = new TF1("AcceptanceFunc", "1/([0]*exp(-0.5*((x-[1])/[2])**2))", -60, 60);//, 3);
 	fit->SetParameter(0, 1.00457);
  	fit->SetParameter(1, 8.91755e-01);
  	fit->SetParameter(2, 2.70153e+01);

 	//TF1 *fit = new TF1("fit", "([0]+[1]*x**2)**(3/2)", -60, 60);//, 3);
 	rg->Fit(fit);//"gaus");//	, "R");

 	cout<<fit->GetChisquare()/fit->GetNDF()<<endl;

 	if(slice == "") DrawAcceptanceFit(rg, ";#theta_{y} [mrad];Acceptance weighting", "../Images/MC/Acceptance/"+config+"/RatioGraph"+slice);

	return;
}

void Run(string config, int rebin = 1) {	

	TString finName = "../Plots/MC/Acceptance/Plots/trackerAcceptancePlots."+config+".root";
	TFile *fin = TFile::Open(finName);

	cout<<"----> Opened file "<<finName<<", "<<fin<<endl;

	TString foutName = "../Plots/MC/Acceptance/Plots/acceptanceWeightingPlots."+config+".root";
	TFile *fout = new TFile(foutName, "RECREATE");

	// TODO add array for all stations
	string stn = "S12S18";

  	TH2D *h2_thetaY_vs_Y_decays = (TH2D*)fin->Get("AllDecays/Main/ThetaY_vs_Y");
  	TH2D *h2_thetaY_vs_Y_tracks = (TH2D*)fin->Get(("Tracks/Main/"+stn+"_ThetaY_vs_Y").c_str()); 
  	TH1D *h1_thetaY_decays = (TH1D*)fin->Get("AllDecays/Main/ThetaY");
	TH1D *h1_thetaY_tracks = (TH1D*)fin->Get(("Tracks/Main/"+stn+"_ThetaY").c_str());

 	cout<<"----> Got histograms: "<<h2_thetaY_vs_Y_decays<<", "<<h2_thetaY_vs_Y_tracks<<", "<<h1_thetaY_decays<<", "<<h1_thetaY_tracks<<endl;

 	// Draw
 	cout<<"----> Drawing base histograms"<<endl;

   	string dir = "AllMom";
   	fout->mkdir("AcceptanceWeighting");
   	fout->mkdir(("AcceptanceWeighting/"+dir).c_str());
   	fout->cd(("AcceptanceWeighting/"+dir).c_str());

	TH2D *acceptanceWeightingMap = AcceptanceWeightingMap(h2_thetaY_vs_Y_decays, h2_thetaY_vs_Y_tracks, rebin, config+"/2DRatios/Simultaneous", "", ""); 
	
	cout<<"----> Created regular weight map " << acceptanceWeightingMap << " for all momentum"<<endl;
	
	DrawAcceptanceWeightingMap(acceptanceWeightingMap, "", "../Images/MC/Acceptance/"+config+"/2DRatios/Simultaneous/AcceptanceMap", "COLZ TEXT");
	DrawAcceptanceWeightingMap(acceptanceWeightingMap, "", "../Images/MC/Acceptance/"+config+"/2DRatios/Simultaneous/AcceptanceSurface", "SURF2");

	acceptanceWeightingMap->Write();

	// ------------------------------------------------------------------------ // 

 	// Get acceptance weighting in momentum bins
   	int step = 250; 
  	int nSlices = PMAX/step;

  	dir = "MomBins";

	fout->mkdir(("AcceptanceWeighting/"+dir).c_str());
	fout->cd(("AcceptanceWeighting/"+dir).c_str());	

 	for (int i_slice = 0; i_slice < nSlices; i_slice++) { 

 		int lo = i_slice*step; 
    	int hi = step + lo;

 		std::string stepStr = to_string(lo)+"_"+to_string(hi);

 		TH2D *h2_thetaY_vs_Y_decays_slice = (TH2D*)fin->Get(("AllDecays/MomBins/ThetaY_vs_Y_"+stepStr).c_str());
  		TH2D *h2_thetaY_vs_Y_tracks_slice = (TH2D*)fin->Get(("Tracks/MomBins/"+stn+"_ThetaY_vs_Y_"+stepStr).c_str()); 
  		TH1D *h1_thetaY_decays_slice = (TH1D*)fin->Get(("AllDecays/MomBins/ThetaY_"+stepStr).c_str());
		TH1D *h1_thetaY_tracks_slice = (TH1D*)fin->Get(("Tracks/MomBins/"+stn+"_ThetaY_"+stepStr).c_str());

		string title = to_string(lo)+" < p [Mev] < "+to_string(hi);

		TH2D *acceptanceWeightingMap = AcceptanceWeightingMap(h2_thetaY_vs_Y_decays_slice, h2_thetaY_vs_Y_tracks_slice, rebin, config+"/2DRatios/MomentumBinned", stepStr, title); 

		cout<<"----> Creating regular weight map  " << acceptanceWeightingMap << " for momentum bin: "<<lo<<" < p [MeV] < "<<hi<<endl;

		DrawAcceptanceWeightingMap(acceptanceWeightingMap, to_string(lo)+" < p [MeV] < "+to_string(hi), "../Images/MC/Acceptance/"+config+"/2DRatios/MomentumBinned/AcceptanceMap_"+stepStr, "COLZ TEXT");
		DrawAcceptanceWeightingMap(acceptanceWeightingMap, to_string(lo)+" < p [MeV] < "+to_string(hi), "../Images/MC/Acceptance/"+config+"/2DRatios/MomentumBinned/AcceptanceSurface_"+stepStr, "SURF2");

		acceptanceWeightingMap->Write();

 	}

	fin->Close();
	fout->Close();

	cout<<"\n------------------------------------------\nWritten ROOT file "<<foutName<<", "<<fout<<endl;


 	return; 

 	// We do not need to keep re-running this stuff since it's just an illustration of what happens when you step through vertical position slices

 	// Now make ratios in slices of y
 	// No need to to write these to ROOT

  	// Reset range for decays histogram
	double xmin = h2_thetaY_vs_Y_decays->GetXaxis()->GetBinLowEdge(h2_thetaY_vs_Y_decays->FindFirstBinAbove(0));
	double ymin = h2_thetaY_vs_Y_decays->GetXaxis()->GetBinLowEdge(h2_thetaY_vs_Y_decays->FindFirstBinAbove(0));
	double xmax = h2_thetaY_vs_Y_decays->GetXaxis()->GetBinUpEdge(h2_thetaY_vs_Y_decays->FindLastBinAbove(0));
	double ymax = h2_thetaY_vs_Y_decays->GetXaxis()->GetBinUpEdge(h2_thetaY_vs_Y_decays->FindLastBinAbove(0));
	
	h2_thetaY_vs_Y_decays->GetXaxis()->SetRangeUser(xmin, xmax);
	h2_thetaY_vs_Y_decays->GetYaxis()->SetRangeUser(ymin, ymax);

 	Ratios(h2_thetaY_vs_Y_decays, h1_thetaY_decays, h1_thetaY_tracks, "1DRatios/Simultaneous");

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

 		Ratios(h2_thetaY_vs_Y_decays_slice, h1_thetaY_decays_slice, h1_thetaY_tracks_slice, config+"/1DRatios/VertPosBinned", "_"+stepStr);
 	}

	return;

}

void RunData(string config, int rebin = 1) {	

	int step = GetStep(config);

	// Sim
	TString finNameSim = "../Plots/MC/Acceptance/Plots/trackerAcceptancePlots.truth.root";
	TFile *finSim = TFile::Open(finNameSim);

	// Data
	TString finNameData = "../Plots/Data/dMu/Run-1/Plots/trackerAcceptancePlots_"+config+".root";
	TFile *finData = TFile::Open(finNameData);

	cout<<"----> Opened files "<<finNameSim<<" and "<<finNameData<<": "<<finSim<<", "<<finData<<endl;

	TString foutName = "../Plots/Data/dMu/Run-1/Plots/acceptanceWeightingPlots_"+config+".root";
	TFile *fout = new TFile(foutName, "RECREATE");

	// TODO add array for all stations
	vector<string> stn_ = {"S12", "S18", "S12S18"};

	for(auto& stn : stn_) { 

  	TH2D *h2_thetaY_vs_Y_decays = (TH2D*)finSim->Get("AllDecays/Main/ThetaY_vs_Y");
  	TH2D *h2_thetaY_vs_Y_tracks = (TH2D*)finData->Get(("Tracks/Main/"+stn+"_ThetaY_vs_Y").c_str()); 
  	TH1D *h1_thetaY_decays = (TH1D*)finSim->Get("AllDecays/Main/ThetaY");
		TH1D *h1_thetaY_tracks = (TH1D*)finData->Get(("Tracks/Main/"+stn+"_ThetaY").c_str());

 		cout<<"----> Got histograms: "<<h2_thetaY_vs_Y_decays<<", "<<h2_thetaY_vs_Y_tracks<<", "<<h1_thetaY_decays<<", "<<h1_thetaY_tracks<<endl;

 		// Draw
 		cout<<"----> Drawing base histograms"<<endl;

  	string dir = "AllMom";
  	fout->mkdir("AcceptanceWeighting");
  	fout->mkdir(("AcceptanceWeighting/"+dir).c_str());
  	fout->cd(("AcceptanceWeighting/"+dir).c_str());

		TH2D *acceptanceWeightingMap = AcceptanceWeightingMap(h2_thetaY_vs_Y_decays, h2_thetaY_vs_Y_tracks, rebin, config+"/2DRatios/Simultaneous", "", "", stn+"_"); 
	
		cout<<"----> Created regular weight map " << acceptanceWeightingMap << " for all momentum"<<endl;
	
		DrawAcceptanceWeightingMap(acceptanceWeightingMap, "", "../Images/Data/Acceptance/"+config+"/2DRatios/Simultaneous/"+stn+"_AcceptanceMap", "COLZ TEXT");
		DrawAcceptanceWeightingMap(acceptanceWeightingMap, "", "../Images/Data/Acceptance/"+config+"/2DRatios/Simultaneous/"+stn+"_AcceptanceSurface", "SURF2");

		acceptanceWeightingMap->Write();

		// ------------------------------------------------------------------------ // 

	 	// Get acceptance weighting in momentum bins
  	int nSlices = PMAX/step;

  	dir = "MomBins";

		fout->mkdir(("AcceptanceWeighting/"+dir).c_str());
		fout->cd(("AcceptanceWeighting/"+dir).c_str());	

 		for (int i_slice = 0; i_slice < nSlices; i_slice++) { 

 			int lo = i_slice*step; 
    	int hi = step + lo;

 			std::string stepStr = to_string(lo)+"_"+to_string(hi);

 			TH2D *h2_thetaY_vs_Y_decays_slice = (TH2D*)finSim->Get(("AllDecays/MomBins/ThetaY_vs_Y_"+stepStr).c_str());
  		TH2D *h2_thetaY_vs_Y_tracks_slice = (TH2D*)finData->Get(("Tracks/MomBins/"+stn+"_ThetaY_vs_Y_"+stepStr).c_str()); 
  		TH1D *h1_thetaY_decays_slice = (TH1D*)finSim->Get(("AllDecays/MomBins/ThetaY_"+stepStr).c_str());
			TH1D *h1_thetaY_tracks_slice = (TH1D*)finData->Get(("Tracks/MomBins/"+stn+"_ThetaY_"+stepStr).c_str());

			string title = to_string(lo)+" < p [Mev] < "+to_string(hi);

			TH2D *acceptanceWeightingMap = AcceptanceWeightingMap(h2_thetaY_vs_Y_decays_slice, h2_thetaY_vs_Y_tracks_slice, rebin, config+"/2DRatios/MomentumBinned", stepStr, title, stn+"_"); 

			cout<<"----> Creating regular weight map  " << acceptanceWeightingMap << " for momentum bin: "<<lo<<" < p [MeV] < "<<hi<<endl;

			DrawAcceptanceWeightingMap(acceptanceWeightingMap, to_string(lo)+" < p [MeV] < "+to_string(hi), "../Images/Data/Acceptance/"+config+"/2DRatios/MomentumBinned/"+stn+"_AcceptanceMap_"+stepStr, "COLZ TEXT");
			DrawAcceptanceWeightingMap(acceptanceWeightingMap, to_string(lo)+" < p [MeV] < "+to_string(hi), "../Images/Data/Acceptance/"+config+"/2DRatios/MomentumBinned/"+stn+"_AcceptanceSurface_"+stepStr, "SURF2");

			acceptanceWeightingMap->Write();

 		}

 	}

	finSim->Close();
	finData->Close();
	fout->Close();

	cout<<"\n------------------------------------------\nWritten ROOT file "<<foutName<<", "<<fout<<endl;


 	return; 


}

int main() { 

	//Run("truth", 4);
	//Run("reco", 4);

	RunData("Run-1d_250MeV_BQ", 4);

	return 0;
}