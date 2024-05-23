/*

Samuel Grant

Produce data/sim ratios of theta_y, used for reweighting theta_y and evaluating the impact of the different vertical angle widths.

*/

#include <iostream>

#include "../Common/RootInclude.h"
#include "../Common/Utils.h"
#include "../Common/FancyDraw.h"

using namespace std;

void DrawManyTH1(vector<TH1D*> h_, string title, string fname, double xmin = 0, double xmax = 1, double ymin = 0, double ymax = 1) {

	TCanvas *c = new TCanvas("c","c",800,600);

	Double_t red = 0.00;
	Double_t green = 0.0;//0.25;
	Double_t blue = 1.00;

	for (int i(0); i<h_.size(); i++) { 

		Int_t ci = TColor::GetFreeColorIndex();
		//TColor *color = new TColor(ci, red+i*0.03, green, blue-i*0.025);
		TColor *color = new TColor(ci, red+i*0.075, green, blue-i*0.07);
		
		h_.at(i)->SetLineWidth(1);
		h_.at(i)->SetLineColor(ci);

		gPad->Update();


      	if(i==0) {

			h_.at(i)->SetTitle(title.c_str());
			h_.at(i)->GetXaxis()->SetTitleSize(.04);
			h_.at(i)->GetYaxis()->SetTitleSize(.04);
			h_.at(i)->GetXaxis()->SetTitleOffset(1.1);
			h_.at(i)->GetYaxis()->SetTitleOffset(1.1);
			h_.at(i)->GetXaxis()->CenterTitle(true);
			h_.at(i)->GetYaxis()->CenterTitle(true);
			h_.at(i)->GetYaxis()->SetMaxDigits(4);
			h_.at(i)->SetStats(0);
			h_.at(i)->GetXaxis()->SetRangeUser(xmin,xmax);
			h_.at(i)->GetYaxis()->SetRangeUser(ymin,ymax);
      		h_.at(i)->Draw("HIST");

      	} else {

      		h_.at(i)->Draw("HIST SAME");

      	}
  	}

	//c->SetLogy();	

	//c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".pdf").c_str());

	delete c;

	return;

}

void DrawTH1(TH1D *hist, std::string title, std::string fname, double ymin, double ymax) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());

	gStyle->SetOptStat(2210);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.15);
	hist->GetYaxis()->SetTitleOffset(1.15);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetZaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);

	hist->GetYaxis()->SetRangeUser(ymin, ymax);

	hist->Draw("E");

	//->SetLogy();
	
	c->SaveAs((fname+".pdf").c_str());
	//c->SaveAs((fname+".C").c_str());

	delete c;

	return;
}

void DrawTwoTH1(TH1D *h1, TH1D *h2, std::string title, std::string fname, double xmin, double xmax) {

	TCanvas *c = new TCanvas("c","c",800,600);

	h1->SetTitle(title.c_str());

	gStyle->SetOptStat(0);
			
	h1->GetXaxis()->SetTitleSize(.04);
	h1->GetYaxis()->SetTitleSize(.04);
	h1->GetXaxis()->SetTitleOffset(1.15);
	h1->GetYaxis()->SetTitleOffset(1.15);
	h1->GetXaxis()->CenterTitle(1);
	h1->GetYaxis()->CenterTitle(1);
	h1->GetZaxis()->CenterTitle(1);
	h1->GetYaxis()->SetMaxDigits(4);

	h1->GetXaxis()->SetRangeUser(xmin, xmax);

	h1->SetLineColor(kBlue);
	h2->SetLineColor(kRed);

	h1->Draw("HIST");
	h2->Draw("HIST SAME");

	//->SetLogy();
	
	c->SaveAs((fname+".pdf").c_str());
	//c->SaveAs((fname+".C").c_str());

	delete c;

	return;
}

void DrawRatioPlot1D(TH1D *h1, TH1D *h2, std::string dataset, std::string title, std::string fname, double xmin, double xmax) { 

	// Mother canvas
	TCanvas *c = new TCanvas("c", "c", 800, 600);

	c->Draw(); 

	// Main pad, not sure if this is needed anymore... 
	TPad *p1 = new TPad("p1", "p1", 0., 0., 1., 1.); //, .89);
	p1->Draw();
	p1->cd();

	gStyle->SetOptStat(0);

	//h1_decays->SetTitle(title);	
	h1->GetXaxis()->SetTitleSize(.04);
	h1->GetYaxis()->SetTitleSize(.04);
	h1->GetXaxis()->SetTitleOffset(1.1);
	h1->GetYaxis()->SetTitleOffset(1.1);
	h1->GetXaxis()->CenterTitle(1);
	h1->GetYaxis()->CenterTitle(1);
	h1->GetYaxis()->SetMaxDigits(4);

	h1->SetLineColor(kBlue);
	h2->SetLineColor(kRed);
	h1->SetLineWidth(2);
	h2->SetLineWidth(2);
	h1->SetMarkerColor(kBlue);
	h2->SetMarkerColor(kRed);

	// TRatioPlot is a nightmare.
	TRatioPlot *rp = new TRatioPlot(h1, h2);

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
	rp->GetUpperRefXaxis()->SetRangeUser(xmin, xmax); 
	rp->GetLowerRefXaxis()->SetRangeUser(xmin, xmax); 

	c->Update();

	TLegend *l = new TLegend(0.12, 0.79, .40, .89);
	l->SetBorderSize(0);
	l->SetTextSize(24);
	l->SetTextFont(44);
	l->AddEntry(h1, ("Data: "+dataset).c_str());
	l->AddEntry(h2, "Sim: truth vertices");
	l->Draw("SAME");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete p1;
	delete l;
	delete rp;
	delete c;

	return; 

}

void Run(string dataset = "Run-1a", int rebin = 1) {	
	
	// Define binning 
	string binning = to_string(int(10*rebin));

	// Get input files
	// Inputs have been superceded by the vertical angle base histogams compared to the thesis version 
	string finNameSimAllDecays = "../../Plots/Sim/5.4e-18/BaseHistograms/edmPlots_allDecays_LAB_250MeV_noQ_randCorr.root"; 
	string finNameSimReco = "../../Plots/Sim/5.4e-18/BaseHistograms/edmPlots_trackReco_LAB_250MeV_BQ_randCorr.root"; 
	string finNameSimTruth = "../../Plots/Sim/5.4e-18/BaseHistograms/edmPlots_trackTruth_LAB_250MeV_BQ_randCorr.root"; 
	string finNameData = "../../Plots/Data/Run-1/BaseHistograms/edmPlots_"+dataset+"_250MeV_randCorr_BQ.root"; 
	if(dataset=="Run-1d") finNameData = "../../Plots/Data/Run-1/BaseHistograms/edmPlots_"+dataset+"_50usStartTime_250MeV_randCorr_BQ.root"; 

	TFile *finSimReco = TFile::Open(finNameSimReco.c_str());
	TFile *finSimTruth = TFile::Open(finNameSimTruth.c_str());
	TFile *finSimAllDecays = TFile::Open(finNameSimAllDecays.c_str());
	TFile *finData = TFile::Open(finNameData.c_str());

	cout<<"----> Opened files:\n"<<finNameSimReco<<", "<<finSimReco<<"\n"<<finNameSimTruth<<", "<<finSimTruth<<"\n"<<finNameSimAllDecays<<", "<<finSimAllDecays<<"\n"<<finNameData<<", "<<finData<<endl;

	// Book & setup output
	string foutName = "../../Plots/Sim/VerticalAngleReweight/verticalAngleDataSimRatios."+dataset+".root";
	TFile *fout = new TFile(foutName.c_str(), "RECREATE");
	fout->mkdir("ThetaYDataSimRatio"); fout->cd("ThetaYDataSimRatio"); // directory

	// ---------- Illustration of theta_y in momentum slices for all decays ---------- 

	// Get all decays histogram
	TH2D *h_simAllDecays = (TH2D*)finSimAllDecays->Get("SimultaneousAnalysis/ThetaY_vs_Momentum_NoCuts");
	
	// Rebin and normalise
	h_simAllDecays->RebinX(rebin);
	h_simAllDecays->Scale(1./h_simAllDecays->GetMaximum());

	// Container for projections per momentum slice
	vector<TH1D*> h_simAllDecays_projY_; 

	// Counter
	int count = 0;

	// Loop through momentum bins
	for(int i_bin(0); i_bin<h_simAllDecays->GetNbinsX(); i_bin++) { 

		// Get projection
		TH1D *h_simAllDecays_projY = (TH1D*)h_simAllDecays->ProjectionY(Form("py_simAllDecays_%d",i_bin+1), i_bin+1, i_bin+1); // first and last bin

		// Store if there are entries in this momentum bin
		if(h_simAllDecays_projY->GetEntries() != 0) {
			h_simAllDecays_projY_.push_back(h_simAllDecays_projY);
			// Iterate counter
			count++;
		}

	}

	// Overlay the projections 
	DrawManyTH1(h_simAllDecays_projY_, "All decays / "+binning+" MeV;#theta_{y} [mrad];Normalised entries", "../../Images/Sim/VerticalAngleReweight/Projections/h1_thetaY_"+binning+"MeV_allDecays_LAB_250MeV_noQ_randCorr", -200, 200, 0, 1.1);

	// ----------------------------------------------------------------------------------

	// Now for tracks 

	// Loop thro' stations 
	vector<string> stn_ = {"S12", "S18", "S12S18"};

	for(auto& stn : stn_) { 

		TH2D *h_simReco = (TH2D*)finSimReco->Get(("SimultaneousAnalysis/"+stn+"_ThetaY_vs_Momentum_VertexCuts").c_str());
		TH2D *h_simTruth = (TH2D*)finSimTruth->Get(("SimultaneousAnalysis/"+stn+"_ThetaY_vs_Momentum_VertexCuts").c_str());
		TH2D *h_data = (TH2D*)finData->Get(("SimultaneousAnalysis/"+stn+"_ThetaY_vs_Momentum_VertexCuts").c_str()); 

		cout<<"\n---> Got histograms for "<<stn<<": "<<", "<<h_simReco<<", "<<h_simTruth<<", "<<h_data<<endl;

		// Rebin
		h_simReco->RebinX(rebin);
		h_simTruth->RebinX(rebin);
		h_data->RebinX(rebin);

		// Normalise
		if (h_simReco->GetSumw2N() == 0) h_simReco->Sumw2(kTRUE);
		if (h_simTruth->GetSumw2N() == 0) h_simTruth->Sumw2(kTRUE);
 		if (h_data->GetSumw2N() == 0) h_data->Sumw2(kTRUE);

		h_simReco->Scale(1./h_simReco->GetMaximum());
		h_simTruth->Scale(1./h_simTruth->GetMaximum());
		h_data->Scale(1./h_data->GetMaximum());

		// Slice momentum and project

		// Containers
		vector<TH1D*> h_simTruth_projY_;
		vector<TH1D*> h_simReco_projY_;
		vector<TH1D*> h_data_projY_; 
		vector<TH1D*> h_ratio_; 

		// Momentum bin loop
		for(int i_bin(0); i_bin<h_simReco->GetNbinsX(); i_bin++) { 
			
			// Project
			TH1D *h_simReco_projY = (TH1D*)h_simReco->ProjectionY(Form("py_simReco_%d",i_bin+1), i_bin+1, i_bin+1); // first and last bin
			TH1D *h_simTruth_projY = (TH1D*)h_simTruth->ProjectionY(Form("py_simTruth_%d",i_bin+1), i_bin+1, i_bin+1); 
			TH1D *h_data_projY = (TH1D*)h_data->ProjectionY(Form("py_data_%d",i_bin+1), i_bin+1, i_bin+1); 

			// Store
			if(h_simReco_projY->GetEntries() != 0) h_simReco_projY_.push_back(h_simReco_projY);
			if(h_simTruth_projY->GetEntries() != 0) h_simTruth_projY_.push_back(h_simTruth_projY);
			if(h_data_projY->GetEntries() != 0) h_data_projY_.push_back(h_data_projY);

			// Draw reco and data in analysis range on the same plot
			string lowEdge = to_string(int(h_simTruth->GetXaxis()->GetBinLowEdge(i_bin+1)));
			string upEdge = to_string(int(h_simTruth->GetXaxis()->GetBinUpEdge(i_bin+1)));
			string range = lowEdge+"_"+upEdge+"MeV";

			// Normalise again, why?
			if (h_data_projY->GetSumw2N() == 0) h_data_projY->Sumw2(kTRUE);
			if (h_simReco_projY->GetSumw2N() == 0) h_simReco_projY->Sumw2(kTRUE);
 			if (h_simTruth_projY->GetSumw2N() == 0) h_simTruth_projY->Sumw2(kTRUE);

			h_data_projY->Scale(1./h_data_projY->GetMaximum());
			h_simTruth_projY->Scale(1./h_simTruth_projY->GetMaximum());
			h_simReco_projY->Scale(1./h_simReco_projY->GetMaximum());

			// Draw comparisons
			// DrawTwoTH1(h_data_projY, h_simReco_projY, lowEdge+"-"+upEdge+" MeV;#theta_{y} [mrad];Normalised entries", "../../Images/Sim/VerticalAngleReweight/Projections/"+stn+"_thetaY_slice_"+range+"_trackReco_"+dataset, -60, 60);
			// DrawRatioPlot1D(h_data_projY, h_simReco_projY, dataset, lowEdge+"-"+upEdge+" MeV;#theta_{y} [mrad];Normalised entries", "../../Images/Sim/VerticalAngleReweight/Projections/"+stn+"_thetaY_ratio_slice_"+range+"_trackReco_"+dataset, -60, 60);

			// DrawTwoTH1(h_data_projY, h_simTruth_projY, lowEdge+"-"+upEdge+" MeV;#theta_{y} [mrad];Normalised entries", "../../Images/Sim/VerticalAngleReweight/Projections/"+stn+"_thetaY_slice_"+range+"_trackTruth_"+dataset, -60, 60);
			DrawRatioPlot1D(h_data_projY, h_simTruth_projY, dataset, lowEdge+"-"+upEdge+" MeV;#theta_{y} [mrad];Normalised entries", "../../Images/Sim/VerticalAngleReweight/Projections/"+stn+"_thetaY_ratio_"+range+"_trackTruth_"+dataset, -60, 60);
			
			// data/sim ratio
			// Use comparison with between data and truth tracks
			// I think an argument could be made for reco as well...

			TH1D *h_ratio = (TH1D*)h_data_projY->Clone((stn+"_h_ratio_"+range).c_str()); 
			h_ratio->Divide(h_simReco_projY); 
			h_ratio->Write();

			// DrawTH1(h_ratio, lowEdge+"-"+upEdge+" MeV;#theta_{y} [mrad];Ratio", "../../Images/Sim/VerticalAngleReweight/Ratios/"+stn+"_thetaY_ratio_slice_"+range+"_trackTruth_"+dataset, 0, 1.5);
			
			// Store
			h_ratio_.push_back(h_ratio);
		}

		// Draw for every station
		DrawManyTH1(h_simReco_projY_, "Reco vertices / "+binning+" MeV;#theta_{y} [mrad];Normalised entries", "../../Images/Sim/VerticalAngleReweight/Projections/"+stn+"_thetaY_"+binning+"MeVslices_trackReco_WORLD_250MeV_BQ_noVertCorr", -60, 60, 0, 1.1);
		DrawManyTH1(h_simTruth_projY_, "Truth vertices / "+binning+" MeV;#theta_{y} [mrad];Normalised entries", "../../Images/Sim/VerticalAngleReweight/Projections/"+stn+"_thetaY_"+binning+"MeVslices_trackTruth_WORLD_250MeV_BQ_noVertCorr", -60, 60, 0, 1.1);
		DrawManyTH1(h_data_projY_, dataset+" / "+binning+" MeV;#theta_{y} [mrad];Normalised entries", "../../Images/Sim/VerticalAngleReweight/Projections/"+stn+"_thetaY_"+binning+"MeVslices_"+dataset+"_BQ_noVertCorr", -60, 60, 0, 1.1);
		// DrawManyTH1(h_ratio_, dataset+" / "+binning+" MeV;#theta_{y} [mrad];Normalised entries", "../../Images/Sim/VerticalAngleReweight/"+stn+"_thetaY_ratio_trackTruth_LAB_250MeV_BQ_randCorr", -60, 60, 0, 1.1);
	}

	finData->Close();
	finSimReco->Close();	
	finSimTruth->Close();
	finSimAllDecays->Close();

	fout->Close();

	cout<<"\n---> Written ROOT file "<<foutName<<", "<<fout<<endl;

	return;

}

// Make ratios data/sim in momentum bins for reweighting

int main() { 

	Run("Run-1a", 25); // rebin from 10 to 250 MeV
	Run("Run-1b", 25); // rebin from 10 to 250 MeV
	Run("Run-1c", 25); // rebin from 10 to 250 MeV
	Run("Run-1d", 25); // rebin from 10 to 250 MeV

	return 0;

}