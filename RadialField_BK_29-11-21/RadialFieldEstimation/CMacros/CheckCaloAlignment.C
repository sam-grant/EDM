#include <iostream>
#include <vector>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

using namespace std;

int n_calo = 24;

void DrawGraph(TGraphErrors *graph, std::string title, std::string fname) {

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
	graph->Draw("APL");
	//c->SetGridx();

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawHist(TH1D *hist, std::string title, std::string fname) { 

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
	hist->SetLineColor(1);
	hist->SetFillStyle(3001);
	hist->SetFillColor(kBlack);
	hist->Draw("HIST");

	////////

    TString mean = Round(hist->GetMean(), 1);
  	TString mean_err = Round(hist->GetMeanError(), 1);

    TString rms = Round(hist->GetRMS(), 2);
  	TString rms_err = Round(hist->GetRMSError(), 1);

	TPaveText *names = new TPaveText(0.65,0.69,0.70,0.89,"NDC");
	names->SetTextAlign(13);
	names->AddText("#LTy#GT [mm]");
	names->AddText("#sigma [mm]");
  	names->SetTextSize(20); // 26
	names->SetTextFont(44);
	names->SetFillColor(0);

	TPaveText *values = new TPaveText(0.70,0.69,0.89,0.89,"NDC");
	values->SetTextAlign(33);
	values->AddText(mean+"#pm"+mean_err);
	values->AddText(rms+"#pm"+rms_err);
  	values->SetTextSize(20); // 26
	values->SetTextFont(44);
	values->SetFillColor(0);

	values->Draw("same");
	names->Draw("same");

	////////

	//c->SetRightMargin(0.13);
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;

}

void DrawGraphs(TGraphErrors *graph1, TGraphErrors *graph2, TFile *output, string name1, string name2, std::string title, std::string fname, double ymin, double ymax) {

	output->cd("graphs");

	TCanvas *c = new TCanvas("c","c",800,600);

	graph1->SetTitle(title.c_str());
	graph1->GetXaxis()->SetTitleSize(.04);
	graph1->GetYaxis()->SetTitleSize(.04);
	graph1->GetXaxis()->SetTitleOffset(1.1);
	graph1->GetYaxis()->SetTitleOffset(1.2);
	graph1->GetXaxis()->CenterTitle(true);
	graph1->GetYaxis()->CenterTitle(true);
	graph1->GetYaxis()->SetMaxDigits(4);
	graph1->SetMarkerStyle(20); //  Full circle
	graph1->GetYaxis()->SetRangeUser(ymin, ymax);
	graph1->Draw("AP");
	graph2->SetMarkerStyle(24);
	graph2->Draw("P same");
	//c->SetGridx();

	TLegend *leg = new TLegend(0.59,0.79,0.89,0.89);
	leg->SetNColumns(2);
	graph1->SetName(name1.c_str());
	graph2->SetName(name2.c_str());
	gPad->Update();
	leg->SetBorderSize(0);
	leg->SetTextFont(42);

	leg->AddEntry(graph1,name1.c_str());
	leg->AddEntry(graph2,name2.c_str());

	leg->Draw("same");

	c->SetName("gr_comp");
	c->Write();

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void Difference(TGraphErrors *graph1, TGraphErrors *graph2, TFile *output, string dataset, string name) {//td::string title, std::string fname) {


//";Calo number;Run4(#LTy_{n}#GT #minus #LTy_{1}#GT) #minus Run1a(#LTy_{n}#GT #minus #LTy_{1}#GT) [mm]", "../Images/CaloAlignment/Diff_"+dataset);
	TH1D *hist = new TH1D("hist", "", 20, -1, 1);

	vector<double> x_; vector<double> ex_;
	vector<double> y_; vector<double> ey_;

	for(int i = 0; i<graph1->GetN(); i++) {

		x_.push_back(graph1->GetX()[i]); ex_.push_back(0);
		y_.push_back(graph1->GetY()[i] - graph2->GetY()[i]);
		ey_.push_back(sqrt(pow(graph1->GetEY()[i], 2) + pow(graph2->GetEY()[i], 2)));

		hist->Fill(graph1->GetY()[i] - graph2->GetY()[i]);

	}

	TGraphErrors *graph = GenerateTGraphErrors(x_, y_, ex_, ey_);


	DrawGraph(graph, ";Calo number;(#LTy_{n}#GT #minus #LTy_{n+1}#GT)_{Run-4} #minus (#LTy_{n}#GT #minus #LTy_{n+1}#GT)_{"+name+"} [mm]", "../Images/CaloAlignment/grDiff_"+dataset);//, fname); 
	graph->SetName("gr_diff");
	output->cd("graphs");
	graph->Write();

	DrawHist(hist, ";(#LTy_{n}#GT #minus #LTy_{n+1}#GT)_{Run-4} #minus (#LTy_{n}#GT #minus #LTy_{n+1}#GT)_{"+name+"} [mm];Calos / 0.1 mm", "../Images/CaloAlignment/hDiff_"+dataset);
	output->cd("hists");
	hist->SetName("h_diff");
	hist->Write();

	return;

}
/*
// Compare the difference between the mean 
TGraphErrors *CompRelativePositions(string dataset) { 

	string inputName = "../Plots/CaloY_vs_Run_"+dataset+".root";

	TFile *input = TFile::Open(inputName.c_str());

	cout<<"Got input file: "<<inputName<<", "<<input<<endl;

	// Check differences between calo 1 and all others

	// First dataset

	double y_[n_calo-1]; double ey_[n_calo-1];
	double x_[n_calo-1]; double ex_[n_calo-1];

	// Make sure everything is set to zero
	std::fill_n(y_, n_calo-1, 0);
	std::fill_n(x_, n_calo-1, 0);
	std::fill_n(ex_, n_calo-1, 0);
	std::fill_n(ey_, n_calo-1, 0);

	TGraphErrors *gr_calo_1 = (TGraphErrors*)input->Get("PerCalo/y_vs_run_1");// ->GetN();

	int n = gr_calo_1->GetN();

	int count_run = 0;

	for(int i_run = 0; i_run < n; i_run++) { 

		double y1 = gr_calo_1->GetY()[i_run];
		double e1 = gr_calo_1->GetEY()[i_run];

		int count_calo = 0;

		for(int i_calo = 2; i_calo < n_calo+1; i_calo++) {

			TGraphErrors *gr_calo_next = (TGraphErrors*)input->Get(("PerCalo/y_vs_run_"+to_string(i_calo)).c_str());

			double y2 = gr_calo_next->GetY()[i_run];
			double e2 = gr_calo_next->GetEY()[i_run];

			if(y1==0 || y2==0 || e1 > 1 || e2 > 1) continue;

			y_[count_calo] += y2 - y1;
			ey_[count_calo] += pow(e1,2) + pow(e2,2);

			count_calo++;

		}

		count_run++;

	} 

	// Set results 
	for(int i_calo = 0; i_calo < n_calo; i_calo++) {
		y_[i_calo] = y_[i_calo] / count_run;
		//cout<<sqrt(ey_[i_calo])<<endl;
		ey_[i_calo] = sqrt(ey_[i_calo]) / count_run;
		x_[i_calo] = i_calo+2;
		ex_[i_calo] = 0; 
		// cout<<"Calo "<<x_[i_calo]<<" "<<y_[i_calo]<<"±"<<ey_[i_calo]<<endl;
	}

	input->Close();

	return new TGraphErrors(n_calo-1, x_, y_, ex_, ey_);

}
*/

// Compare the difference between the mean 
TGraphErrors *CompRelativePositions(string dataset) { 

	string inputName = "../Plots/CaloY_vs_Run_"+dataset+".root";

	TFile *input = TFile::Open(inputName.c_str());

	cout<<"Got input file: "<<inputName<<", "<<input<<endl;

	// Check differences between adjacent calos

	double y_[n_calo-1]; double ey_[n_calo-1];
	double x_[n_calo-1]; double ex_[n_calo-1];

	// Make sure everything is set to zero
	std::fill_n(y_, n_calo-1, 0);
	std::fill_n(x_, n_calo-1, 0);
	std::fill_n(ex_, n_calo-1, 0);
	std::fill_n(ey_, n_calo-1, 0);

	// Just use number of runs in calo 1
	TGraphErrors *gr_calo1 = (TGraphErrors*)input->Get("PerCalo/y_vs_run_1");
	int n = gr_calo1->GetN();

	int count_run = 0;

	for(int i_run = 0; i_run < n; i_run++) { 


		int count_calo = 0;

		// Take pairs of calos, ending at 23-24
		for(int i_calo = 1; i_calo < n_calo; i_calo++) {

			TGraphErrors *gr_calo = (TGraphErrors*)input->Get(("PerCalo/y_vs_run_"+to_string(i_calo)).c_str());
			TGraphErrors *gr_calo_next = (TGraphErrors*)input->Get(("PerCalo/y_vs_run_"+to_string(i_calo+1)).c_str());

			double y1 = gr_calo->GetY()[i_run];
			double e1 = gr_calo->GetEY()[i_run];

			double y2 = gr_calo_next->GetY()[i_run];
			double e2 = gr_calo_next->GetEY()[i_run];

			if(y1==0 || y2==0 || e1 > 1 || e2 > 1) continue;

			y_[count_calo] += y2 - y1;
			ey_[count_calo] += pow(e1,2) + pow(e2,2);

			count_calo++;

		}

		count_run++;

	} 

	// Set results 
	for(int i_calo = 0; i_calo < n_calo; i_calo++) {
		y_[i_calo] = y_[i_calo] / count_run;
		//cout<<sqrt(ey_[i_calo])<<endl;
		ey_[i_calo] = sqrt(ey_[i_calo]) / count_run;
		x_[i_calo] = i_calo+1;
		ex_[i_calo] = 0; 
		// cout<<"Calo "<<x_[i_calo]<<" "<<y_[i_calo]<<"±"<<ey_[i_calo]<<endl;
	}

	input->Close();

	return new TGraphErrors(n_calo-1, x_, y_, ex_, ey_);

}

int main(int argc, char *argv[]) {  

	string dataset = argv[1]; // "gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2"; // argv[1];

	string outputName = "../Plots/CaloAlignment_"+dataset+".root";
	TFile *output = new TFile(("../Plots/CaloAlignment_"+dataset+".root").c_str(), "RECREATE");
	output->mkdir("graphs");
	output->mkdir("hists");

	string name;
	if(dataset == "gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2") name = "Run-1a";
	else if(dataset == "gm2pro_daq_full_run1_9d_5040A_GLdocDB17018-v3") name = "Run-1b";
	else if(dataset == "gm2pro_daq_full_run1_HighKick_5042B_GLdocDB20949-v3") name = "Run-1c";
	else if(dataset == "gm2pro_daq_full_run1_EndGame_5042B_GLdocDB20839-v1") name = "Run-1d";
	else if(dataset == "gm2pro_daq_offline_dqc_run2B") name = "Run-2b"; 
 	else if(dataset == "gm2pro_daq_offline_dqc_run2C") name = "Run-2c";
 	else if(dataset == "gm2pro_daq_offline_dqc_run2D") name = "Run-2d";
 	else if(dataset == "gm2pro_daq_offline_dqc_run2E") name = "Run-2e";
 	else if(dataset == "gm2pro_daq_offline_dqc_run2F") name = "Run-2f";
 	else if(dataset == "gm2pro_daq_offline_dqc_run2G") name = "Run-2g";
 	else if(dataset == "gm2pro_daq_offline_dqc_run2H") name = "Run-2h";
 	else if(dataset == "gm2pro_daq_offline_dqc_run3N_5207A") name = "Run-3N";
 	else if(dataset == "gm2pro_daq_offline_dqc_run3O_5207A") name = "Run-3O";
 	else if(dataset == "Run4_2021_Nearline") name = "Run-4";
 	else if(dataset == "Run5_Nearline") name = "Run-5";
 	
	//CompRelativePositions("Run4_2021");//, "gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2");
	TGraphErrors *gr1 = CompRelativePositions("Run4_2021");
	TGraphErrors *gr2 = CompRelativePositions(dataset);

	DrawGraphs(gr1, gr2, output, "Run-4", name, ";Calo number, n;#LTy_{n+1}#GT #minus #LTy_{n}#GT [mm]", "../Images/CaloAlignment/Comp_"+dataset, -1, 2);

	Difference(gr1, gr2, output, dataset, name);//";Calo number;Run4(#LTy_{n}#GT #minus #LTy_{1}#GT) #minus Run1a(#LTy_{n}#GT #minus #LTy_{1}#GT) [mm]", "../Images/CaloAlignment/Diff_"+dataset);

	output->Close();

	cout<<"Written "<<outputName<<" "<<output<<endl;

	return 0;

}