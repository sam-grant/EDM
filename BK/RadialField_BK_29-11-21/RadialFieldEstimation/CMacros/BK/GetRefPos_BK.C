#include <iostream>
#include <vector>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

// DEPRECATED

bool removeBadCalos = false;////false;//true;
int n_calo = 24;


void DrawManyTH1s(std::vector<TH1D*> hists, std::vector<string> names, std::string title, std::string fname, double xmin, double xmax, double ymin, double ymax, bool log, bool showMean) {

	int n_calo = 24;

	TCanvas *c = new TCanvas("c","c",800,600);
	c->SetRightMargin(0.20);

	//TLegend *l = new TLegend(0.81,0.35,0.99,0.65);
	TLegend *l = new TLegend(0.81,0.15,0.99,0.85);
	l->SetBorderSize(0);

	hists.at(0)->SetTitle(title.c_str());
	hists.at(0)->GetXaxis()->SetTitleSize(.04);
	hists.at(0)->GetYaxis()->SetTitleSize(.04);
	hists.at(0)->GetXaxis()->SetTitleOffset(1.1);
	hists.at(0)->GetYaxis()->SetTitleOffset(1.1);
	hists.at(0)->GetXaxis()->CenterTitle(true);
	hists.at(0)->GetYaxis()->CenterTitle(true);
	hists.at(0)->GetYaxis()->SetMaxDigits(4);
	hists.at(0)->GetXaxis()->SetRangeUser(xmin,xmax);
	//hists.at(0)->GetYaxis()->SetRangeUser(ymin,ymax);

	int nGraphs = hists.size();

	gStyle->SetPalette(kBird);

	TH1D *h_tot = (TH1D*)hists.at(0)->Clone();
	h_tot->SetLineColor(kRed);
	h_tot->SetFillStyle(3644);
	h_tot->SetFillColor(kRed);
  	//h_tot->SetLineStyle(2);
	l->AddEntry(h_tot,"Total");

	for(int i = 0; i < nGraphs; i++) {

		hists.at(i)->Scale(1./n_calo);

		h_tot->Add(hists.at(i));

    	hists.at(i)->SetStats(0);
    	hists.at(i)->SetLineWidth(1);

    	l->AddEntry(hists.at(i), (names.at(i)).c_str());

    	// Normalise
		//hists.at(i)->Integral());
    	
      	if(i==0) {
      		hists.at(i)->Draw("HIST PLC PMC");
      	} else {
      		hists.at(i)->Draw("HIST PLC PMC SAME");//PLC PMC SAME");
      	}

  	}

  	// Total hist 
  	h_tot->Scale(1./n_calo);//h_tot->Integral());
  	//h_tot->SetLineWidth(2);
  	
  	h_tot->Draw("HIST L2F SAME");

  	TPaveText *stats= new TPaveText(0.61,0.69,0.69,0.89,"NDC");
    TString mean = Round(h_tot->GetMean(), 5);
  	TString mean_err = Round(h_tot->GetMeanError(), 1);
  	TString rms = Round(h_tot->GetRMS(), 3);
  	TString rms_err = Round(h_tot->GetRMSError(), 1);
  	if(showMean) stats->AddText("#LTy_{total}#GT = "+mean+"#pm"+mean_err+" mm");
  	stats->AddText("#sigma_{total} = "+rms+"#pm"+rms_err+" mm");
  	stats->SetTextSize(20); // 26
	stats->SetTextFont(44);
	stats->SetFillColor(0);
  	stats->Draw("same");
  	//hists.at(0)->GetYaxis()->SetRangeUser(ymin,ymax);
  	//l->AddEntry(h_tot,"Total");

  	gPad->Update();
  	TLine *coverUpLine = new TLine(gPad->GetUxmin(), 0, gPad->GetUxmax(), 0);
  	coverUpLine->SetLineColor(kBlack);
  	coverUpLine->SetLineWidth(1);
  	coverUpLine->Draw("same");

	l->Draw("same");

	if(log) c->SetLogy();

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void OverlayRunAvgHists(TFile *input, string dataset) { 

	// Get total
	vector<string> names_; 

	vector<TH1D *> h_calo_; 

	//TH1D *h_tot = (TH1D*)input->Get("CaloAverage/h_yRunAvg"); 
	//h_tot->Rebin(4);
	//h_calo_.push_back(h_tot);//(TH1D*)input->Get("CaloAverage/h_yRunAvg"));
	//names_.push_back("Total");

	for (int i_calo = 1; i_calo < n_calo; i_calo++ ) {

		if(removeBadCalos && (i_calo == 5 || i_calo == 9)) continue;

		TH1D *h_calo = (TH1D*)input->Get(("PerCalo/h_yCaloRunAvg_"+to_string(i_calo)).c_str());
		h_calo->RebinX(8);
		h_calo_.push_back(h_calo);

		names_.push_back(("Calo "+to_string(i_calo)).c_str());

	}

	double xmin; double xmax; 
	double ymin; double ymax;

	if(dataset == "Run4_Jan") { 
		xmin = 71; xmax = 78;
		ymin = 0; ymax = 100; 
	} else if(dataset == "Run4_2021") {
		xmin = 70; xmax = 79;
		ymin = 0; ymax = 22;
	} else { 
		xmin = 74; xmax = 78;
		ymin = 0; ymax = 25;
	}

	string fname="OverlaidRunAvgHists_"+dataset;
	if(removeBadCalos) fname="OverlaidRunAvgHists_NoBadCalos_"+dataset;

	DrawManyTH1s(h_calo_, names_, ";#LTy_{calo}#GT [mm];Arb. Units", "../Images/"+fname, xmin, xmax, ymin, ymax, true, true);

	return;

}

void OverlayRunAvgMeanSubHists(TFile *input, string dataset) { 

	// Get total
	vector<string> names_; 

	vector<TH1D *> h_calo_;

	for (int i_calo = 1; i_calo < n_calo; i_calo++ ) {

		if(removeBadCalos && (i_calo == 5 || i_calo == 9)) continue;

		TH1D *h_calo = (TH1D*)input->Get(("PerCaloMeanSubtracted/h_yCaloMeanSubRunAvg_"+to_string(i_calo)).c_str());
		//cout<<h_calo<<endl;
		h_calo->RebinX(8);
		h_calo_.push_back(h_calo);

		names_.push_back(("Calo "+to_string(i_calo)).c_str());

	}

	double xmin; double xmax; 
	double ymin; double ymax;

	if(dataset == "Run4_Jan") { 
		xmin = 71; xmax = 78;
		ymin = 0; ymax = 100; 
	} else if(dataset == "Run4_2021") {
		xmin = -5; xmax = 5;
		ymin = 0; ymax = 25;
	} else { 
		xmin = -5; xmax = 5;
		ymin = 0; ymax = 25;
	}


	string fname="OverlaidRunAvgMeanSubHists_"+dataset;
	if(removeBadCalos) fname="OverlaidRunAvgMeanSubHists_NoBadCalos_"+dataset;
	DrawManyTH1s(h_calo_, names_, ";Mean subtracted #LTy_{calo}#GT [mm];Arb. Units", "../Images/"+fname, xmin, xmax, ymin, ymax, true, false);

	return;

}

void OverlayRunAvgGraphs(TFile *input, string dataset) { 

	vector<TGraphErrors *> gr_calo_;
	vector<string> names_; 

	for (int i_calo = 1; i_calo < n_calo; i_calo++ ) {

		if(removeBadCalos && (i_calo == 5 || i_calo == 9)) continue;

		TGraphErrors *gr_calo = (TGraphErrors*)input->Get(("PerCalo/y_vs_run_"+to_string(i_calo)).c_str());
		names_.push_back(("Calo "+to_string(i_calo)).c_str());

		gr_calo_.push_back(gr_calo);

	}

	string fname = "../Images/PerCaloYvsRun_"+dataset+"_recreate";
	if(removeBadCalos) fname = "../Images/PerCaloYvsRun_NoBadCalos_"+dataset+"_recreate";

	double ymin = 70; double ymax = 80;
	if(dataset == "gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2") { 
		ymin = 74;
		ymax = 78;
	}

	DrawManyTGraphErrors(gr_calo_, names_, ";Run number;#LTy_{Calo}#GT [mm]", fname, ymin, ymax);

	return;

}

void OverlayRunAvgMeanSubGraphs(TFile *input, string dataset) { 

	vector<TGraphErrors *> gr_calo_;
	vector<string> names_; 

	for (int i_calo = 1; i_calo < n_calo; i_calo++ ) {

		if(removeBadCalos && (i_calo == 5 || i_calo == 9)) continue;

		TGraphErrors *gr_calo = (TGraphErrors*)input->Get(("PerCaloMeanSubtracted/meanSub_y_vs_run_"+to_string(i_calo)).c_str());
		names_.push_back(("Calo "+to_string(i_calo)).c_str());

		gr_calo_.push_back(gr_calo);

	}

	string fname = "../Images/PerCaloMeanSubYvsRun_"+dataset+"_recreate";
	if(removeBadCalos) fname = "../Images/PerCaloMeanSubYvsRun_NoBadCalos_"+dataset+"_recreate";

	double ymin = -2.5; double ymax = 2.5;
	if(dataset == "gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2") { 
		ymin = -.5;
		ymax = .5;
	}

  	DrawManyTGraphErrors(gr_calo_, names_, ";Run number;Mean subtracted #LTy_{Calo}#GT [mm]", fname, ymin, ymax);

	return;

}

int main() {

	string dataset = "gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2";//Run4_2021";//"Run4_Jan"; // "Run4_2021"

  	string inputName = "../Plots/"+dataset+".root";//+dataset+".root";
  	TFile *input = TFile::Open(inputName.c_str()); 

  	cout<<"Got input file "<<inputName<<" "<<input<<endl;

  	// Get total TH1 for reference 
  	TH1D *h_tot_tmp = (TH1D*)input->Get("CaloAverage/h_yRunAvg");
  	h_tot_tmp->Rebin(4);
  	h_tot_tmp->GetXaxis()->SetRangeUser(74, 75);
  	DrawTH1(h_tot_tmp, "", "../Images/h_tot_tmp");

  	// Overlay all run average 1D hists
  	OverlayRunAvgGraphs(input, dataset);
  	OverlayRunAvgHists(input, dataset); 
  	OverlayRunAvgMeanSubHists(input, dataset); 
  	OverlayRunAvgMeanSubGraphs(input, dataset);

  	input->Close();
 
	return 0; 

}