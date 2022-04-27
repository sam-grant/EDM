/* 

*/

#include <iostream>

#include "RootInclude.h"
//#include "FancyDraw.h"
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

void DrawFancyRatioPlot(TH2D *h2, TH1D *h1_decays, TH1D *h1_tracks, string stn, string axtitle, std::string fname) { 

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
	gStyle->SetPalette(kRainBow);

	h2->GetXaxis()->CenterTitle(1);
	h2->GetYaxis()->CenterTitle(1);

	//h2->SetTitle(";y [mm];#theta_{y} [mm]");

	h2->Draw("COL");

	c->cd(0);

	TLegend *l = new TLegend(0.12, 0.79, .40, .89);
	l->SetBorderSize(0);
	l->SetTextSize(24);
	l->SetTextFont(44);
	l->AddEntry(h1_decays, "All decays");
	l->AddEntry(h1_tracks, "Reco vertices");
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


void Run() {	

	TString finName = "../Plots/MC/Acceptance/Plots/trackerAcceptancePlots.truth.root";
	TFile *fin = TFile::Open(finName);

	cout<<"----> Opened file "<<finName<<", "<<fin<<endl;

	TString foutName = "delete_me.root";//../Plots/MC/Acceptance/Plots/acceptanceWeightingPlots."+config+".test.root";
	TFile *fout = new TFile(foutName, "RECREATE");

	fout->mkdir("AcceptanceWeighting");
	fout->mkdir("AcceptanceWeighting/AllMom");
	fout->mkdir("AcceptanceWeighting/MomBins");

	vector<string> stn_ = {"S12"};//"S12S18", "S12", "S18"};

	// Get basic decay histograms 
	TH1D *h1_Y_decays = (TH1D*)fin->Get("AllDecays/Main/Y");
	TH2D *h2_thetaY_vs_Y_decays = (TH2D*)fin->Get("AllDecays/Main/ThetaY_vs_Y");

	cout<<"----> Got base decay histograms"<<endl;

	for(auto& stn : stn_) { 

		cout<<"----> Running "<<stn<<endl;


		// Calculate the acceptance weights in 5 mm slices of vertical position 

		TH1D *h1_Y_tracks = (TH1D*)fin->Get(("Tracks/Main/"+stn+"_Y").c_str());
		TH1D *h1_Y_ratio = Ratio(h1_Y_tracks, h1_Y_decays);

		cout<<"---> Made y-position ratio: "<<h1_Y_ratio<<endl;

		// Normalise to max RATIO
		int maxRatioBinY = h1_Y_ratio->GetMaximumBin();

		h1_Y_ratio->Scale(1./h1_Y_ratio->GetBinContent(maxRatioBinY)); 
		h1_Y_decays->Scale(1./h1_Y_decays->GetBinContent(maxRatioBinY)); 
		h1_Y_tracks->Scale(1./h1_Y_tracks->GetBinContent(maxRatioBinY)); 

		// Draw ratio plot 
		DrawBasicRatioPlot(h1_Y_decays, h1_Y_tracks, stn, "Vertical decay position, y [mm]", "../Images/MC/Acceptance/1DRatios/VerticalPosition/"+stn+"_VerticalDecayPositionRatio"); //h1_thetaY_tracks, fname, slice, stn);

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
				TH2D *h2_thetaY_vs_Y_decays_slice = (TH2D*)fin->Get(("AllDecays/VertPosBins/ThetaY_vs_Y_"+stepStr).c_str());
				cout<<stepStr<<endl;
				cout<<h2_thetaY_vs_Y_decays_slice<<endl;
				h2_thetaY_vs_Y_decays_slice->GetXaxis()->SetRangeUser(-45, 45);
				h2_thetaY_vs_Y_decays_slice->GetYaxis()->SetRangeUser(-45, 45);

	    	// Get theta_y histograms
	    	TH1D *h1_thetaY_decays = (TH1D*)fin->Get(("AllDecays/VertPosBins/ThetaY_"+stepStr).c_str());
	    	TH1D *h1_thetaY_tracks = (TH1D*)fin->Get(("Tracks/VertPosBins/S12S18_ThetaY_"+stepStr).c_str());

	    	// Get ratio
	    	TH1D *h1_thetaY_ratio = Ratio(h1_thetaY_tracks, h1_thetaY_decays);

				cout<<"---> Made vertical angle ratio: "<<h1_thetaY_ratio<<endl;

				// Normalise to max RATIO
				int maxRatioBinThetaY = h1_thetaY_ratio->GetMaximumBin();

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
				//cout<<endl;

				// Draw ratio plot 

				// Axis title doesn't work but that's fine
				DrawFancyRatioPlot(h2_thetaY_vs_Y_decays_slice, h1_thetaY_decays, h1_thetaY_tracks, stn, "Vertical decay angle, #theta_{y} [mrad]", "../Images/MC/Acceptance/1DRatios/VerticalAngle/"+stn+"_VerticalDecayAngleRatio_"+stepStr);
			
				verticalAngleWeights_.push_back(verticalAngleWeightsSlice_);

		} // vertical position slice loop

		cout<<"\n----> Finished getting weights, constructing map"<<endl;

		// Start with tracks theta_y / y 
		TH2D *h2_thetaY_vs_Y_tracks = (TH2D*)fin->Get(("Tracks/Main/"+stn+"_ThetaY_vs_Y").c_str());

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

			cout<<"\n"<<i_weight<<", "<<verticalPosWeight<<endl;	

			// The index of the vertical angle weight vector
			int j_weight = 0; 

			// now loop through j and get the weights, for an i coord where know that there are non-zero bins

			for(int j(0); j<h2_thetaY_vs_Y_tracks->GetNbinsY(); j++) { 

				double binCont = h2_thetaY_vs_Y_tracks->GetBinContent(i+1,j+1);

				// Skip empty bins, do not iterate j_weight
				if(binCont==0) continue;

				vector<double> verticalAngleWeightsSlice_ = verticalAngleWeights_.at(i_weight);
				double verticalAngleWeight = verticalAngleWeightsSlice_.at(j_weight);

				cout<<j_weight<<", "<<verticalAngleWeight<<endl;	

				h2_map->SetBinContent(i_map+1, j+1, verticalPosWeight*verticalAngleWeight);

				j_weight++;

			}

			i_weight++;
			i_map++;

		}
		

			//double binCont = h2_thetaY_vs_Y_tracks->GetBinContent(i_binAboveZero+1,j_binAboveZero+1);

			//if(h2_thetaY_vs_Y_tracks->GetBinContent(i_binAboveZero+1,j_binAboveZero+1) == 0) continue;




/*
			

			cout<<i_verticalPos<<", "<<verticalPosWeight<<endl;	

			cout<<"Vertical angle weights\n"<<endl;

			h2_thetaY_vs_Y_decays->GetXaxis()->GetBinLowEdge(h2_thetaY_vs_Y_decays->FindFirstBinAbove(0));

			

				double x = h2_thetaY_vs_Y_tracks->GetXaxis()->GetBinCenter(i+1);
				double y = h2_thetaY_vs_Y_tracks->GetYaxis()->GetBinCenter(j+1);
				double binCont = h2_thetaY_vs_Y_tracks->GetBinContent(i+1,j+1);

				if(binCont==0) continue;

				vector<double> verticalAngleWeightsSlice_ = verticalAngleWeights_.at(i_verticalPos);
				double verticalAngleWeight = verticalAngleWeightsSlice_.at(j_verticalAngle);

				cout<<j_verticalAngle<<", "<<verticalAngleWeight<<endl;	

				//cout<<x<<", "<<y<<", "<<binCont<<endl;

				h2_map->SetBinContent(i+1, j+1, verticalPosWeight);//binCont*verticalPosWeight*verticalAngleWeight);

				y_contents_sum = binCont + y_contents_sum;
				j_verticalAngle++;

			}

			if(y_contents_sum!=0) continue;

			i_verticalPos++; // only if bin content is not zero.

		}*/


/*		int i_binAboveZero = 0;

		for(int i(0); i<h2_thetaY_vs_Y_tracks->GetNbinsX(); i++) { 
		
			int j_binAboveZero = 0;

			//double binCont = h2_thetaY_vs_Y_tracks->GetBinContent(i_binAboveZero+1,j_binAboveZero+1);

			//if(h2_thetaY_vs_Y_tracks->GetBinContent(i_binAboveZero+1,j_binAboveZero+1) == 0) continue;





			double verticalPosWeight = verticalPosWeights_.at(i_verticalPos);

			cout<<i_verticalPos<<", "<<verticalPosWeight<<endl;	

			cout<<"Vertical angle weights\n"<<endl;

			h2_thetaY_vs_Y_decays->GetXaxis()->GetBinLowEdge(h2_thetaY_vs_Y_decays->FindFirstBinAbove(0));

			for(int j(0); j<h2_thetaY_vs_Y_tracks->GetNbinsY(); j++) { 

				double x = h2_thetaY_vs_Y_tracks->GetXaxis()->GetBinCenter(i+1);
				double y = h2_thetaY_vs_Y_tracks->GetYaxis()->GetBinCenter(j+1);
				double binCont = h2_thetaY_vs_Y_tracks->GetBinContent(i+1,j+1);

				if(binCont==0) continue;

				vector<double> verticalAngleWeightsSlice_ = verticalAngleWeights_.at(i_verticalPos);
				double verticalAngleWeight = verticalAngleWeightsSlice_.at(j_verticalAngle);

				cout<<j_verticalAngle<<", "<<verticalAngleWeight<<endl;	

				//cout<<x<<", "<<y<<", "<<binCont<<endl;

				h2_map->SetBinContent(i+1, j+1, verticalPosWeight);//binCont*verticalPosWeight*verticalAngleWeight);

				y_contents_sum = binCont + y_contents_sum;
				j_verticalAngle++;

			}

			if(y_contents_sum!=0) continue;

			i_verticalPos++; // only if bin content is not zero.

		}
*/

		DrawAcceptanceWeightingMap(h2_map, "", "../Images/MC/Acceptance/Maps/2DMap", "COLZ TEXT");
		DrawAcceptanceWeightingMap(h2_map, "", "../Images/MC/Acceptance/Maps/Surface", "SURF2");




		// Now for the hard part. Would be nice if we could use pandas for this.


 	} // stn loop

	fin->Close();
	fout->Close();

	cout<<"\n------------------------------------------\nWritten ROOT file "<<foutName<<", "<<fout<<endl;

	return;

}

void AcceptanceMaps2() { 

    Run();

    return;
}