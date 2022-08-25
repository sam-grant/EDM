/* 

*/

#include <iostream>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

using namespace std;

/////////////////////

void DrawBasicRatioPlot(TH1D *h1_decays, TH1D *h1_tracks, string stn, string axtitle, string fname) { 

	TCanvas *c = new TCanvas("c", "c", 800, 600);
	c->Draw();

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
	rp->GetXaxis()->SetTitle(axtitle.c_str());

	rp->GetLowerRefYaxis()->CenterTitle(1);
	rp->GetLowerRefXaxis()->CenterTitle(1);
	rp->GetUpperRefYaxis()->CenterTitle(1);

	rp->GetLowerRefYaxis()->SetRangeUser(0, 1.25); 
	rp->GetUpperRefXaxis()->SetRangeUser(-100, 100); 
	rp->GetLowerRefXaxis()->SetRangeUser(-100, 100); 

	c->Update();

	TLegend *l = new TLegend(0.12, 0.79, .40, .89);
	l->SetBorderSize(0);
	l->SetTextSize(24);
	l->SetTextFont(44);
	l->AddEntry(h1_decays, "All decays");
	l->AddEntry(h1_tracks, "Truth vertices");
	l->Draw("SAME");

	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete l;
	delete rp;
	delete c;

	return; 

}

void DrawFancyRatioPlot(TH2D *h2, TH1D *h1_decays, TH1D *h1_tracks, string stn, string axtitle, std::string fname, TH2D *h2_2 = 0) { 

	// Mother canvas
	TCanvas *c = new TCanvas("c", "c", 800, 600);//1600, 1200);

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

	rp->GetXaxis()->SetTitle(axtitle.c_str());

	rp->Draw();

	rp->GetUpperRefYaxis()->SetTitle("Normalised entries");
	
	rp->GetLowerRefYaxis()->SetTitle("Ratio");

	rp->GetLowerRefYaxis()->CenterTitle(1);
	rp->GetLowerRefXaxis()->CenterTitle(1);
	rp->GetUpperRefYaxis()->CenterTitle(1);

	rp->GetUpperRefYaxis()->SetRangeUser(0, h1_decays->GetMaximum()+h1_decays->GetMaximum()*0.1); 
	rp->GetLowerRefYaxis()->SetRangeUser(0, 1.5); 
	rp->GetUpperRefXaxis()->SetRangeUser(-100, 100); 
	rp->GetLowerRefXaxis()->SetRangeUser(-100, 100); 

	c->Update();

	c->cd(0); 

	TPad *p2 = new TPad("p2", "p2", .69, .69, .99, .99);

	p2->Draw();
	p2->cd();
	gStyle->SetPalette(kRainBow);//LightTemperature);

	h2->GetXaxis()->CenterTitle(1);
	h2->GetYaxis()->CenterTitle(1);
	h2->SetTitle(";Y [mm];#theta_{y} [mrad]");
	h2->GetYaxis()->SetTitleSize(0.06); 
	h2->GetXaxis()->SetTitleSize(0.06); 
	h2->GetXaxis()->SetTitleOffset(0.75);
	h2->GetYaxis()->SetTitleOffset(0.75);
	//h2->SetTitle(";y [mm];#theta_{y} [mm]");

	h2->Draw("COL");

	if(h2_2!=0) h2_2->Draw("COL SAME");

	c->cd(0);

	TLegend *l = new TLegend(0.12, 0.79, .40, .89);
	l->SetBorderSize(0);
	l->SetTextSize(24);//50);
	l->SetTextFont(44);
	l->AddEntry(h1_decays, "All decays");
	l->AddEntry(h1_tracks, "Truth vertices");
	l->Draw("SAME");

	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());


	delete p1;
	delete p2;
	delete l;
	delete rp;
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

	gStyle->SetPalette(kBird);
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
	map->GetZaxis()->SetTitle("Acceptance weighting");

	map->GetXaxis()->SetRangeUser(-60, 60);
	map->GetYaxis()->SetRangeUser(-100, 100);
	map->Draw(drawOption);

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;
}


TH1D *Ratio(TH1D *h1_tracks, TH1D *h1_decays) { 

	TH1D *h1_ratio = (TH1D*)h1_tracks->Clone("h1_ratio");
	h1_ratio->Divide(h1_decays);

	return h1_ratio; 

}

int FindMaximumBin(TH1D *h1_ratio) { 

	int maxBin = -1;
	//int nBins = h1_ratio->GetNbinsX();

	int firstBin = h1_ratio->FindFirstBinAbove(0);
	int lastBin = h1_ratio->FindLastBinAbove(0);

	double avgBinContent = 0;

	// Loop thro once, 
	// Try to avoid the tails
	// Need a smarter way to avoid the dodgy bins.

	double y_max = 0;

	// Find average bin contents

	int n_bins = 0;
	for(int i = firstBin; i<lastBin; i++) {
		double y_bin = h1_ratio->GetBinContent(i);
		avgBinContent = y_bin + avgBinContent; 
		n_bins++;
	}

	avgBinContent = avgBinContent / n_bins;

	// Find nominal maximum bin 

	maxBin = h1_ratio->GetMaximumBin();
	double maxBinContent = h1_ratio->GetMaximum();


	if(abs(maxBinContent - avgBinContent) > 2*avgBinContent) { 


		// Then the max bin is twice as large as the average bin and is therefore likely to be an edge case 

		// So find the next largest bin
		int n_bins = 0;
		for(int i = firstBin; i<lastBin; i++) {
			double y_bin = h1_ratio->GetBinContent(i);
			avgBinContent = y_bin + avgBinContent; 
			n_bins++;
		}



	} /*else return maxBin;


 

		if(y_bin > integral/3) continue;
	
		if(y_bin>y_max) {
			y_max = y_bin;
			maxBin = i;
		}

	}*/

	return maxBin;//maxBin;

}

void Run(TFile *fout, string momSlice = "0_3127_MeV") {	


	TString finName = "../Plots/MC/Acceptance/Plots/trackerAcceptancePlots.truth.momBinned.15mm.root";
	TFile *fin = TFile::Open(finName);

	cout<<"----> Opened file "<<finName<<", "<<fin<<endl;

	fout->mkdir(("AcceptanceWeightings/"+momSlice).c_str());
	fout->cd(("AcceptanceWeightings/"+momSlice).c_str());


	vector<string> stn_ = {"S12", "S18", "S12S18"};//, "S12", "S18"};

	// Get basic decay histograms 
	TH1D *h1_Y_decays = (TH1D*)fin->Get((momSlice+"/AllDecays/Main/Y").c_str());
	TH2D *h2_thetaY_vs_Y_decays = (TH2D*)fin->Get((momSlice+"/AllDecays/Main/ThetaY_vs_Y").c_str());

	cout<<"----> Got base decay histograms"<<endl;

	for(auto& stn : stn_) { 

		cout<<"----> Running "<<stn<<endl;

		// Calculate the acceptance weights in 5 mm slices of vertical position 

		TH1D *h1_Y_tracks = (TH1D*)fin->Get((momSlice+"/Tracks/Main/"+stn+"_Y").c_str());
		TH1D *h1_Y_ratio = Ratio(h1_Y_tracks, h1_Y_decays);

		//h1_Y_ratio->Write((stn+"_y_ratio").c_str());

		cout<<"---> Made y-position ratio: "<<h1_Y_ratio<<endl;

		// Normalise to max RATIO
		int maxRatioBinY = h1_Y_ratio->GetMaximumBin(); //FindMaximumBin(h1_Y_ratio);//->GetMaximumBin();

		h1_Y_ratio->Scale(1./h1_Y_ratio->GetBinContent(maxRatioBinY)); 
		h1_Y_decays->Scale(1./h1_Y_decays->GetBinContent(maxRatioBinY)); 
		h1_Y_tracks->Scale(1./h1_Y_tracks->GetBinContent(maxRatioBinY)); 

		// Draw ratio plot 
		DrawBasicRatioPlot(h1_Y_decays, h1_Y_tracks, stn, "y [mm]", "../Images/MC/Acceptance/1DRatios/VerticalPosition/test/"+stn+"_VerticalDecayPositionRatio_"+momSlice); //h1_thetaY_tracks, fname, slice, stn);

		// Draw overall ratio
		TH2D *h2_thetaY_vs_Y_decays= (TH2D*)fin->Get((momSlice+"/AllDecays/Main/ThetaY_vs_Y").c_str());
		h2_thetaY_vs_Y_decays->GetXaxis()->SetRangeUser(-45, 45);
		h2_thetaY_vs_Y_decays->GetYaxis()->SetRangeUser(-45, 45);

	    // Get theta_y histograms
	    TH1D *h1_thetaY_decays = (TH1D*)fin->Get((momSlice+"/AllDecays/Main/ThetaY").c_str());
	    TH1D *h1_thetaY_tracks = (TH1D*)fin->Get((momSlice+"/Tracks/Main/"+stn+"_ThetaY").c_str());

	   	// Get ratio
	   	TH1D *h1_thetaY_ratio = Ratio(h1_thetaY_tracks, h1_thetaY_decays);
	   	h1_thetaY_ratio->Write((stn+"_thetaY_ratio").c_str());

	   	// Normalise to max RATIO 
		int maxRatioBinThetaY = h1_thetaY_ratio->GetMaximumBin();

		h1_thetaY_ratio->Scale(1./h1_thetaY_ratio->GetBinContent(maxRatioBinThetaY)); 
		h1_thetaY_decays->Scale(1./h1_thetaY_decays->GetBinContent(maxRatioBinThetaY)); 
		h1_thetaY_tracks->Scale(1./h1_thetaY_tracks->GetBinContent(maxRatioBinThetaY)); 

		int max_thetaY_vs_Y = h2_thetaY_vs_Y_decays->GetMaximum();

		//h2_thetaY_vs_Y_decays->Scale(1./max_thetaY_vs_Y);// h2_thetaY_vs_Y_decays->GetMaximum());

		DrawFancyRatioPlot(h2_thetaY_vs_Y_decays, h1_thetaY_decays, h1_thetaY_tracks, stn, "#theta_{y} [mrad]", "../Images/MC/Acceptance/1DRatios/VerticalAngle/"+momSlice+"/test/"+stn+"_VerticalDecayAngleRatio");

		// In these same slices of y, we need weightings per 5 mrad vertical angle
	  	int y_step = 15;//5; 
	  	int y_slices = 6;//18; // verticalPosWeights_.size(); // 18 

	  	vector<vector<double>> verticalAngleWeights_;

	  	for ( int i(0); i < y_slices; i++ ) { 

	    	int lo = -45 + i*y_step; 
	    	int hi = y_step + lo;

	    	std::string stepStr = to_string(lo)+"_"+to_string(hi);
/*	    	std::string stepStr1 = to_string(lo)+"_"+to_string(hi-5);
	    	std::string stepStr2 = to_string(lo+5)+"_"+to_string(hi);*/

	    	// cout<<"\n---> step 0 "<<stepStr<<"\n---> step 1 "<<stepStr1<<"\n---> step 2 "<<stepStr2<<endl;

	    	// Illustration histogram
			TH2D *h2_thetaY_vs_Y_decays_slice = (TH2D*)fin->Get((momSlice+"/AllDecays/VertPosBins/ThetaY_vs_Y_"+stepStr).c_str());
			//TH2D *h2_thetaY_vs_Y_decays_slice_2 = (TH2D*)fin->Get((momSlice+"/AllDecays/VertPosBins/ThetaY_vs_Y_"+stepStr).c_str());
/*
			h2_thetaY_vs_Y_decays_slice->Add(h2_thetaY_vs_Y_decays_slice_2);
			h2_thetaY_vs_Y_decays_slice->Scale(1./h2_thetaY_vs_Y_decays->Integral());*/

			//int N_slice = h2_thetaY_vs_Y_decays_slice->GetEntries() + h2_thetaY_vs_Y_decays_slice_2->GetEntries();

			//h2_thetaY_vs_Y_decays_slice->Scale(1./(h2_thetaY_vs_Y_decays->Integral()N_slice))


			//h2_thetaY_vs_Y_decays_slice->Scale(1./h2_thetaY_vs_Y_decays->Integral());//Integral());
			//h2_thetaY_vs_Y_decays_slice_2->Scale(1./h2_thetaY_vs_Y_decays->Integral());

			//h2_thetaY_vs_Y_decays_slice->Add(h2_thetaY_vs_Y_decays_slice_2);

			//h2_thetaY_vs_Y_decays_slice->Add(h2_thetaY_vs_Y_decays_slice_2);

			h2_thetaY_vs_Y_decays_slice->GetXaxis()->SetRangeUser(-45, 45);
			h2_thetaY_vs_Y_decays_slice->GetYaxis()->SetRangeUser(-45, 45);
			h2_thetaY_vs_Y_decays_slice->GetZaxis()->SetRangeUser(h2_thetaY_vs_Y_decays->GetMinimum(), h2_thetaY_vs_Y_decays->GetMaximum());
			//h2_thetaY_vs_Y_decays_slice->Scale(1./h2_thetaY_vs_Y_decays->Integral());//max_thetaY_vs_Y);

	    	// Get theta_y histograms
	    	TH1D *h1_thetaY_decays_slice = (TH1D*)fin->Get((momSlice+"/AllDecays/VertPosBins/ThetaY_"+stepStr).c_str());
	    	TH1D *h1_thetaY_tracks_slice = (TH1D*)fin->Get((momSlice+"/Tracks/VertPosBins/"+stn+"_ThetaY_"+stepStr).c_str());

/*	    	TH1D *h1_thetaY_decays_slice_2 = (TH1D*)fin->Get((momSlice+"/AllDecays/VertPosBins/ThetaY_"+stepStr2).c_str());
	    	TH1D *h1_thetaY_tracks_slice_2 = (TH1D*)fin->Get((momSlice+"/Tracks/VertPosBins/"+stn+"_ThetaY_"+stepStr2).c_str());

	    	h1_thetaY_decays_slice->Add(h1_thetaY_decays_slice_2);
	    	h1_thetaY_tracks_slice->Add(h1_thetaY_tracks_slice_2);*/

	    	// Get ratio
	    	TH1D *h1_thetaY_ratio_slice = Ratio(h1_thetaY_tracks_slice, h1_thetaY_decays_slice);

	    	h1_thetaY_ratio_slice->Write((stn+"_thetaY_ratio_"+stepStr).c_str());

			cout<<"---> Made vertical angle ratio: "<<h1_thetaY_ratio<<endl;

			// Normalise to max RATIO 
			int maxRatioBinThetaY = h1_thetaY_ratio_slice->GetMaximumBin();

			h1_thetaY_ratio_slice->Scale(1./h1_thetaY_ratio_slice->GetBinContent(maxRatioBinThetaY)); 
			h1_thetaY_decays_slice->Scale(1./h1_thetaY_decays_slice->GetBinContent(maxRatioBinThetaY)); 
			h1_thetaY_tracks_slice->Scale(1./h1_thetaY_tracks_slice->GetBinContent(maxRatioBinThetaY)); 

			DrawFancyRatioPlot(h2_thetaY_vs_Y_decays_slice, h1_thetaY_decays_slice, h1_thetaY_tracks_slice, stn, "#theta_{y} [mrad]", "../Images/MC/Acceptance/1DRatios/VerticalAngle/"+momSlice+"/test/"+stn+"_VerticalDecayAngleRatio_"+stepStr);//, h2_thetaY_vs_Y_decays_slice_2);

		} // vertical position slice loop

/*
	  	for ( int i(0); i < y_slices; i++ ) { 

	    	int lo = -45 + i*y_step; 
	    	int hi = y_step + lo;

	    	std::string stepStr = to_string(lo)+"_"+to_string(hi);

	    	// Illustration histogram
			TH2D *h2_thetaY_vs_Y_decays_slice = (TH2D*)fin->Get((momSlice+"/AllDecays/VertPosBins/ThetaY_vs_Y_"+stepStr).c_str());
			h2_thetaY_vs_Y_decays_slice->GetXaxis()->SetRangeUser(-45, 45);
			h2_thetaY_vs_Y_decays_slice->GetYaxis()->SetRangeUser(-45, 45);
			h2_thetaY_vs_Y_decays_slice->GetZaxis()->SetRangeUser(h2_thetaY_vs_Y_decays->GetMinimum(), h2_thetaY_vs_Y_decays->GetMaximum());
			//h2_thetaY_vs_Y_decays_slice->Scale(1./h2_thetaY_vs_Y_decays->Integral());//max_thetaY_vs_Y);

	    	// Get theta_y histograms
	    	TH1D *h1_thetaY_decays_slice = (TH1D*)fin->Get((momSlice+"/AllDecays/VertPosBins/ThetaY_"+stepStr).c_str());
	    	TH1D *h1_thetaY_tracks_slice = (TH1D*)fin->Get((momSlice+"/Tracks/VertPosBins/"+stn+"_ThetaY_"+stepStr).c_str());

	    	// Get ratio
	    	TH1D *h1_thetaY_ratio_slice = Ratio(h1_thetaY_tracks_slice, h1_thetaY_decays_slice);

	    	h1_thetaY_ratio_slice->Write((stn+"_thetaY_ratio_"+stepStr).c_str());

			cout<<"---> Made vertical angle ratio: "<<h1_thetaY_ratio<<endl;

			// Normalise to max RATIO 
			int maxRatioBinThetaY = h1_thetaY_ratio_slice->GetMaximumBin();

			h1_thetaY_ratio_slice->Scale(1./h1_thetaY_ratio_slice->GetBinContent(maxRatioBinThetaY)); 
			h1_thetaY_decays_slice->Scale(1./h1_thetaY_decays_slice->GetBinContent(maxRatioBinThetaY)); 
			h1_thetaY_tracks_slice->Scale(1./h1_thetaY_tracks_slice->GetBinContent(maxRatioBinThetaY)); 

			DrawFancyRatioPlot(h2_thetaY_vs_Y_decays_slice, h1_thetaY_decays_slice, h1_thetaY_tracks_slice, stn, "#theta_{y} [mrad]", "../Images/MC/Acceptance/1DRatios/VerticalAngle/"+momSlice+"/test/"+stn+"_VerticalDecayAngleRatio_"+stepStr);

		} // vertical position slice loop*/

 	} // stn loop

	fin->Close();

	return;

}

void AcceptanceMaps2() { 

	TString foutName = "../Plots/MC/Acceptance/Plots/acceptanceWeightingPlots.truth.momBinned.root";
	TFile *fout = new TFile(foutName, "RECREATE");
	fout->mkdir("AcceptanceWeightings"); 

	// All momentum
	Run(fout);//

	fout->Close();

	cout<<"\n------------------------------------------\nWritten ROOT file "<<foutName<<", "<<fout<<endl;

    return;
}

/*
void Run(TFile *fout, string momSlice = "0_3127_MeV") {	


	TString finName = "../Plots/MC/Acceptance/Plots/trackerAcceptancePlots.truth.momBinned.root";
	TFile *fin = TFile::Open(finName);

	cout<<"----> Opened file "<<finName<<", "<<fin<<endl;

	fout->mkdir(("AcceptanceWeightings/"+momSlice).c_str());
	fout->cd(("AcceptanceWeightings/"+momSlice).c_str());


	vector<string> stn_ = {"S12", "S18", "S12S18"};//, "S12", "S18"};

	// Get basic decay histograms 
	TH1D *h1_Y_decays = (TH1D*)fin->Get((momSlice+"/AllDecays/Main/Y").c_str());
	TH2D *h2_thetaY_vs_Y_decays = (TH2D*)fin->Get((momSlice+"/AllDecays/Main/ThetaY_vs_Y").c_str());

	cout<<"----> Got base decay histograms"<<endl;

	for(auto& stn : stn_) { 

		cout<<"----> Running "<<stn<<endl;

		// Calculate the acceptance weights in 5 mm slices of vertical position 

		TH1D *h1_Y_tracks = (TH1D*)fin->Get((momSlice+"/Tracks/Main/"+stn+"_Y").c_str());
		TH1D *h1_Y_ratio = Ratio(h1_Y_tracks, h1_Y_decays);

		//h1_Y_ratio->Write((stn+"_y_ratio").c_str());

		cout<<"---> Made y-position ratio: "<<h1_Y_ratio<<endl;

		// Normalise to max RATIO
		int maxRatioBinY = h1_Y_ratio->GetMaximumBin(); //FindMaximumBin(h1_Y_ratio);//->GetMaximumBin();

		h1_Y_ratio->Scale(1./h1_Y_ratio->GetBinContent(maxRatioBinY)); 
		h1_Y_decays->Scale(1./h1_Y_decays->GetBinContent(maxRatioBinY)); 
		h1_Y_tracks->Scale(1./h1_Y_tracks->GetBinContent(maxRatioBinY)); 

		// Draw ratio plot 
		DrawBasicRatioPlot(h1_Y_decays, h1_Y_tracks, stn, "Vertical decay position, y [mm]", "../Images/MC/Acceptance/1DRatios/VerticalPosition/"+stn+"_VerticalDecayPositionRatio_"+momSlice); //h1_thetaY_tracks, fname, slice, stn);

		// Store vertical weightings in vector 
		vector<double> verticalPosWeights_;

		//cout<<"\n---> Vertical position weights\ny [mm], weight"<<endl;
		for(int i(0); i<h1_Y_ratio->GetNbinsX(); i++) {
			double weight = h1_Y_ratio->GetBinContent(i+1);
			if(weight==0) continue;
			//cout<<h1_Y_ratio->GetBinCenter(i+1)<<", "<<h1_Y_ratio->GetBinContent(i+1)<<endl;
			verticalPosWeights_.push_back(h1_Y_ratio->GetBinContent(i+1));
		}
		//cout<<endl;

		// In these same slices of y, we need weightings per 5 mrad vertical angle
	  	int y_step = 5; 
	  	int y_slices = verticalPosWeights_.size(); // 18 

	  	vector<vector<double>> verticalAngleWeights_;

	  	for ( int i(0); i < y_slices; i++ ) { 

	    	int lo = -45 + i*y_step; 
	    	int hi = y_step + lo;

	    	std::string stepStr = to_string(lo)+"_"+to_string(hi);

	    	// Illustration histogram
			TH2D *h2_thetaY_vs_Y_decays_slice = (TH2D*)fin->Get((momSlice+"/AllDecays/VertPosBins/ThetaY_vs_Y_"+stepStr).c_str());
			h2_thetaY_vs_Y_decays_slice->GetXaxis()->SetRangeUser(-45, 45);
			h2_thetaY_vs_Y_decays_slice->GetYaxis()->SetRangeUser(-45, 45);

	    	// Get theta_y histograms
	    	TH1D *h1_thetaY_decays = (TH1D*)fin->Get((momSlice+"/AllDecays/VertPosBins/ThetaY_"+stepStr).c_str());
	    	TH1D *h1_thetaY_tracks = (TH1D*)fin->Get((momSlice+"/Tracks/VertPosBins/"+stn+"_ThetaY_"+stepStr).c_str());

	    	// Get ratio
	    	TH1D *h1_thetaY_ratio = Ratio(h1_thetaY_tracks, h1_thetaY_decays);

	    	h1_thetaY_ratio->Write((stn+"_thetaY_ratio_"+stepStr).c_str());

			cout<<"---> Made vertical angle ratio: "<<h1_thetaY_ratio<<endl;

			// Normalise to max RATIO 
			int maxRatioBinThetaY = h1_thetaY_ratio->GetMaximumBin();// FindMaximumBin(h1_thetaY_ratio); // h1_thetaY_ratio->GetMaximumBin();////->GetMaximumBin();

			h1_thetaY_ratio->Scale(1./h1_thetaY_ratio->GetBinContent(maxRatioBinThetaY)); 
			h1_thetaY_decays->Scale(1./h1_thetaY_decays->GetBinContent(maxRatioBinThetaY)); 
			h1_thetaY_tracks->Scale(1./h1_thetaY_tracks->GetBinContent(maxRatioBinThetaY)); 

			vector<double> verticalAngleWeightsSlice_;

			//cout<<"\n---> Vertical angle weights\ntheta_y [mrad], weight"<<endl;
			for(int i(0); i<h1_thetaY_ratio->GetNbinsX(); i++) {
				double weight = h1_thetaY_ratio->GetBinContent(i+1);
				if(weight==0) continue;
				//cout<<h1_thetaY_ratio->GetBinCenter(i+1)<<", "<<h1_thetaY_ratio->GetBinContent(i+1)<<endl;
				verticalAngleWeightsSlice_.push_back(h1_thetaY_ratio->GetBinContent(i+1));
			}

			// Draw ratio plot 

			// Axis title doesn't work but that's fine
			DrawFancyRatioPlot(h2_thetaY_vs_Y_decays_slice, h1_thetaY_decays, h1_thetaY_tracks, stn, "Vertical decay angle, #theta_{y} [mrad]", "../Images/MC/Acceptance/1DRatios/VerticalAngle/"+momSlice+"/"+stn+"_VerticalDecayAngleRatio_"+stepStr);
			

				verticalAngleWeights_.push_back(verticalAngleWeightsSlice_);

		} // vertical position slice loop


		// This is the tricky part, C++ is not designed for this 
		// We need to fill a histogram based on these weights.

		cout<<"\n----> Finished getting weights, constructing map"<<endl;

		// Start with tracks theta_y / y 
		TH2D *h2_thetaY_vs_Y_tracks = (TH2D*)fin->Get((momSlice+"/Tracks/Main/"+stn+"_ThetaY_vs_Y").c_str());

		TH2D *h2_map = (TH2D*)h2_thetaY_vs_Y_tracks->Clone("h2_map");

		// Fill map with acceptance weightings
		
		// i_map gives the i bin coord to fill the hist
		int i_map = 0; 
		// i_weight is the vector index for the vertical position weights
		int i_weight = 0;

		for(int i(0); i<h2_thetaY_vs_Y_tracks->GetNbinsX(); i++) { 

			// Loop through y-slice once and decide if there are any entries, if not, iterate i_map and continue
			double y_sum = 0;
			for(int j(0); j<h2_thetaY_vs_Y_tracks->GetNbinsY(); j++) {
				double binCont = h2_thetaY_vs_Y_tracks->GetBinContent(i+1,j+1);
				y_sum = y_sum + binCont; 
			}

			if(y_sum==0) {
				i_map++;
				continue;
			} 

			double verticalPosWeight = verticalPosWeights_.at(i_weight);

			//cout<<"\n"<<i_weight<<", "<<verticalPosWeight<<endl;	

			// The index of the vertical angle weight vector
			int j_weight = 0; 

			// now loop through j and get the weights, for an i coord where we know that there are non-zero bins

			for(int j(0); j<h2_thetaY_vs_Y_tracks->GetNbinsY(); j++) { 

				double binCont = h2_thetaY_vs_Y_tracks->GetBinContent(i+1,j+1);

				// Skip empty bins, do not iterate j_weight
				if(binCont==0) continue;

				vector<double> verticalAngleWeightsSlice_ = verticalAngleWeights_.at(i_weight);
				double verticalAngleWeight = verticalAngleWeightsSlice_.at(j_weight);

				// Catch bad weightings
				//if(verticalAngleWeight<1e-1) verticalAngleWeight = verticalAngleWeightsSlice_.at(j_weight+1);

				//cout<<j_weight<<", "<<verticalAngleWeight<<endl;	

				h2_map->SetBinContent(i_map+1, j+1, verticalAngleWeight); // Just scale by vertical angle weight

				j_weight++;

			}

			i_weight++;
			i_map++;

		}

		DrawAcceptanceWeightingMap(h2_map, stn, "../Images/MC/Acceptance/Maps/"+stn+"_AcceptanceMap_"+momSlice, "COLZ TEXT");
		DrawAcceptanceWeightingMap(h2_map, stn, "../Images/MC/Acceptance/Maps/"+stn+"_AcceptanceSurface_"+momSlice, "SURF2");

		
		h2_map->Write((stn+"_AcceptanceMap").c_str());


 	} // stn loop

	fin->Close();

	return;

}*/