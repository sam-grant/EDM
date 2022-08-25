#include <iostream>
#include <vector>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

bool removeBadCalos = false;//true;//false;//true;//false;//true;
int n_calo = 24;

void FitRefPos(TFile *input, TFile *output, string dataset) { 

	if(dataset != "Run4_2021") { //} || dataset != "Run4_Jan") { 
		cout<<"Not using correct dataset, returning"<<endl;
		return;
	}

	TGraphErrors *gr_tot = (TGraphErrors*)input->Get("CaloAverage/y_vs_run");

	int n_point = gr_tot->GetN();

	if(removeBadCalos) { 

		vector<double> x_; vector<double> ex_;
		vector<double> y_; vector<double> ey_;

		for(int i_run = 0; i_run < n_point; i_run++) { 

			// Start at 38100
			//if(gr_tot->GetX()[i_run] <= 38100 || gr_tot->GetX()[i_run] >= 42600) continue;

			double y = 0;
			double ey = 0;
			int counter = 0;

			for(int i_calo = 1; i_calo < n_calo+1; i_calo++) {

				if(i_calo == 5 || i_calo == 9) continue;

				TGraphErrors *gr_calo = (TGraphErrors*)input->Get(("PerCalo/y_vs_run_"+to_string(i_calo)).c_str());

				y += gr_calo->GetY()[i_run];

				// This is the simplest solution and therefore the best.
				// Alt is to run over the nearline trees again.
				ey = sqrt( pow(ey, 2) + pow(gr_calo->GetEY()[i_run], 2) );

				counter++;

			}

			y = y / counter;
			ey = ey / counter;

			//if(ey>=1) continue;

			x_.push_back(gr_tot->GetX()[i_run]);
			ex_.push_back(0);
			y_.push_back(y);
			ey_.push_back(ey);

		}

		gr_tot = GenerateTGraphErrors(x_, y_, ex_, ey_);

	}

	n_point = gr_tot->GetN();
	double xmin = gr_tot->GetX()[0]; 
	double xmax = gr_tot->GetX()[n_point-1];

	//cout<<xmin<<", "<<xmax<<endl;

	TF1 *fit = new TF1("RefPos", "[0]", xmin, xmax);//11);
    gr_tot->Fit(fit, "R");

    gr_tot->GetYaxis()->SetRangeUser(73.5, 75.5);

    // Drawing

    TCanvas *c = new TCanvas("c","c",800,600);

    gStyle->SetStatFormat("6.3g");
    gr_tot->Draw();
    gPad->Update();
    gStyle->SetOptFit(0);
    gr_tot->SetTitle(";Run number;#LTy#GT / run [mm]");
    gr_tot->GetXaxis()->SetTitleSize(.04);
    gr_tot->GetYaxis()->SetTitleSize(.04);
    gr_tot->GetXaxis()->SetTitleOffset(1.1);
    gr_tot->GetYaxis()->SetTitleOffset(1.25);
    gr_tot->GetXaxis()->CenterTitle(true);
    gr_tot->GetYaxis()->CenterTitle(true);
    gr_tot->GetYaxis()->SetMaxDigits(4);
    gr_tot->SetMarkerStyle(20); //  Full circle
    gr_tot->Draw("AP");
    fit->Draw("same");

    string fname = "../Images/RefPos/Fit_"+dataset;
    if(removeBadCalos) fname = "../Images/RefPos/Fit_NoBadCalos_"+dataset;

	////////

  	TString chi2 = Round(fit->GetChisquare() / fit->GetNDF(), 3);
    TString mean = Round(fit->GetParameter(0), 5);
  	TString mean_err = Round(fit->GetParError(0), 1);

	TPaveText *names = new TPaveText(0.55,0.69,0.65,0.88,"NDC");
	names->SetTextAlign(13);
	names->AddText("#chi^{2}/ndf");
	names->AddText("#LTy#GT [mm]");
  	names->SetTextSize(20); // 26
	names->SetTextFont(44);
	names->SetFillColor(0);

	TPaveText *values = new TPaveText(0.65,0.69,0.89,0.89,"NDC");
	values->SetTextAlign(33);
	values->AddText(chi2);
	values->AddText(mean+"#pm"+mean_err);
  	values->SetTextSize(20); // 26
	values->SetTextFont(44);
	values->SetFillColor(0);

	values->Draw("same");
	names->Draw("same");

	////////

    c->SaveAs((fname+".C").c_str());
  	c->SaveAs((fname+".png").c_str());
  	c->SaveAs((fname+".pdf").c_str());

  	output->cd("CaloAvg");
  	gr_tot->SetName("y_vs_run");
  	gr_tot->Write();

  	delete c;

	return;

} 

void RefPos1D(TFile *input, TFile *output, string dataset) {  

	if(dataset != "Run4_2021") {//} || dataset != "Run4_Jan") { 
		cout<<"Not using correct dataset, returning"<<endl;
		return;
	}

	TGraphErrors *gr_tot = (TGraphErrors*)input->Get("CaloAverage/y_vs_run");
	int n_point = gr_tot->GetN();

	TH1D *h_tot = new TH1D("h_tot", "", 12, 73, 76);

	for(int i_run = 0; i_run < n_point; i_run++) { 

		// Start at 38100 and end at 42600
		//if(gr_tot->GetX()[i_run] <= 38100 || gr_tot->GetX()[i_run] >= 42600) continue; 

		for (int i_calo = 1; i_calo < n_calo; i_calo++ ) {

			if(removeBadCalos && (i_calo == 5 || i_calo == 9)) continue;

			TH1D *h_calo = (TH1D*)input->Get(("PerCalo/h_yCaloRunAvg_"+to_string(i_calo)).c_str());

			h_tot->Fill(h_calo->GetMean());

		}

	}

    string fname = "../Images/RefPos/htot_"+dataset;
    if(removeBadCalos) fname = "../Images/RefPos/htot_NoBadCalos_"+dataset;

	TCanvas *c = new TCanvas("c","c",800,600);

	h_tot->SetStats(0);

	h_tot->GetXaxis()->SetTitleSize(.04);
	h_tot->GetYaxis()->SetTitleSize(.04);
	h_tot->GetXaxis()->SetTitleOffset(1.1);
	h_tot->GetYaxis()->SetTitleOffset(1.25);
	h_tot->GetXaxis()->CenterTitle(1);
	h_tot->GetYaxis()->CenterTitle(1);
	h_tot->GetYaxis()->SetMaxDigits(4);
	h_tot->SetLineColor(kBlack);

	h_tot->SetTitle(";#LTy#GT / run [mm];Runs / 0.25 mm");
	h_tot->SetFillStyle(3344);
	h_tot->SetFillColor(kBlack);
	h_tot->Draw("HIST");

    //TString mean = Round(h_tot->GetMean(), 5);
  	//TString mean_err = Round(h_tot->GetMeanError(), 1);

	//TPaveText *stats = new TPaveText(0.59,0.59,0.89,0.89,"NDC");
	//stats->SetTextAlign(33);
	//stats->AddText("#LTy#GT = "+mean+"0#pm"+mean_err+" mm");
  	//stats->SetTextSize(20); // 26
	//stats->SetTextFont(44);
	//stats->SetFillColor(0);
	// stats->Draw("same");

	////////

    TString mean = Round(h_tot->GetMean(), 5);
  	TString mean_err = Round(h_tot->GetMeanError(), 1);

    TString rms = Round(h_tot->GetRMS(), 3);
  	TString rms_err = Round(h_tot->GetRMSError(), 1);

	TPaveText *names = new TPaveText(0.60,0.69,0.65,0.89,"NDC");
	names->SetTextAlign(13);
	names->AddText("#LTy#GT [mm]");
	names->AddText("#sigma [mm]");
  	names->SetTextSize(20); // 26
	names->SetTextFont(44);
	names->SetFillColor(0);

	TPaveText *values = new TPaveText(0.65,0.69,0.89,0.89,"NDC");
	values->SetTextAlign(33);
	values->AddText(mean+"#pm"+mean_err);
	values->AddText(rms+"#pm"+rms_err);
  	values->SetTextSize(20); // 26
	values->SetTextFont(44);
	values->SetFillColor(0);

	values->Draw("same");
	names->Draw("same");

	////////
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

  	output->cd("CaloAvg");
  	h_tot->Write();

	delete c;

	return;
}

void OverlayRunAvgGraphs(TFile *input, string dataset) { 

	vector<TGraphErrors *> gr_calo_;
	vector<string> names_; 

	for (int i_calo = 1; i_calo < n_calo+1; i_calo++ ) {

		if(removeBadCalos && (i_calo == 5 || i_calo == 9)) continue;

		TGraphErrors *gr_calo = (TGraphErrors*)input->Get(("PerCalo/y_vs_run_"+to_string(i_calo)).c_str());
		names_.push_back(("Calo "+to_string(i_calo)).c_str());

		gr_calo_.push_back(gr_calo);

	}

	string fname = "../Images/RefPos/PerCaloYvsRun_"+dataset;
	if(removeBadCalos) fname = "../Images/RefPos/PerCaloYvsRun_NoBadCalos_"+dataset+"";

	double ymin = 71; double ymax = 78;

/*	if(dataset == "gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2") { 
		ymin = 74;
		ymax = 78;
	}
*/
	DrawManyTGraphErrors(gr_calo_, names_, ";Run number;#LTy_{calo}#GT / run [mm]", fname, ymin, ymax);

	return;

}

void OverlayRunAvgMeanSubGraphs(TFile *input, string dataset) { 

	vector<TGraphErrors *> gr_calo_;
	vector<string> names_; 

	for (int i_calo = 1; i_calo < n_calo+1; i_calo++ ) {

		if(removeBadCalos && (i_calo == 5 || i_calo == 9)) continue;

		TGraphErrors *gr_calo = (TGraphErrors*)input->Get(("PerCaloMeanSubtracted/meanSub_y_vs_run_"+to_string(i_calo)).c_str());
		names_.push_back(("Calo "+to_string(i_calo)).c_str());

		gr_calo_.push_back(gr_calo);

	}

	string fname = "../Images/RefPos/PerCaloMeanSubYvsRun_"+dataset;
	if(removeBadCalos) fname = "../Images/RefPos/PerCaloMeanSubYvsRun_NoBadCalos_"+dataset;

	double ymin = -2.5; double ymax = 2.5;

/*	if(dataset == "gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2") { 
		ymin = -.5;
		ymax = .5;
	}
*/
  	DrawManyTGraphErrors(gr_calo_, names_, ";Run number;#LTy_{calo}#GT / run #minus #LTy_{calo}#GT [mm]", fname, ymin, ymax);

	return;

}

int main() {

	string dataset = "Run4_2021"; 

  	string inputName = "../Plots/CaloY_vs_Run_"+dataset+".root";//+dataset+".root";
  	TFile *input = TFile::Open(inputName.c_str()); 

  	cout<<"Got input file "<<inputName<<" "<<input<<endl;

	string outputName = "../Plots/RefPos_"+dataset+".root";//+dataset+".root";
	if(removeBadCalos) outputName = "../Plots/RefPos_NoBadCalos_"+dataset+".root";

	TFile *output = new TFile(outputName.c_str(), "RECREATE");
	output->mkdir("CaloAvg"); //output->mkdir("PerCaloGraphs");

	

  	// Fit reference point 
  	FitRefPos(input, output, dataset);
  	RefPos1D(input, output, dataset);

  	// Overlay all calo graphs
  	OverlayRunAvgGraphs(input, dataset);
  	OverlayRunAvgMeanSubGraphs(input, dataset);

  	// OverlayRunAvgHists(input, dataset); 
  	// OverlayRunAvgMeanSubHists(input, dataset); 
  	
  	cout<<"Wrote output file "<<outputName<<" "<<output<<endl;
  	input->Close();
  	output->Close();
 
	return 0; 

}

/*
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

*/

