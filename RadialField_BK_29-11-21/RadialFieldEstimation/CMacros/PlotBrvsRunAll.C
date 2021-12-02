#include <iostream>
#include <vector>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

void DrawBrVsRun(TGraphErrors *statErr, TGraphErrors *allErr, std::string title, std::string fname) {

  TCanvas *c = new TCanvas("c","c",800,600);

  allErr->SetTitle(title.c_str());
  allErr->GetXaxis()->SetTitleSize(.04);
  allErr->GetYaxis()->SetTitleSize(.04);
  allErr->GetXaxis()->SetTitleOffset(1.1);
  allErr->GetYaxis()->SetTitleOffset(1.2);
  allErr->GetXaxis()->CenterTitle(true);
  allErr->GetYaxis()->CenterTitle(true);
  allErr->GetYaxis()->SetMaxDigits(4);
  allErr->SetMarkerStyle(20); //  Full circle
  statErr->SetMarkerStyle(20); //  Full circle
  allErr->SetMarkerColor(kBlack);
  statErr->SetMarkerColor(kBlack);

  allErr->SetFillColor(kRed);
  //allErr->SetFillStyle(3001);

  statErr->SetFillColor(kBlue);
  //statErr->SetFillStyle(3001);

  allErr->Draw("A3");
  statErr->Draw("P3 SAME");

  TLegend *leg = new TLegend(.15, 0.69, .45, .89);
  leg->SetBorderSize(0);

  //allErr->SetMarkerColor(kRed);
  leg->AddEntry(statErr, "Uncorrelated errors");
  leg->AddEntry(allErr, "Correlated errors");
  leg->Draw("same");

  //c->SetGridx();

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}


int main() { /// int argc, char *argv[]) {

//

	string files[] = { "gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2_15921_15991"
		, "gm2pro_daq_full_run1_HighKick_5042B_GLdocDB20949-v3_16113_16234"
		, "gm2pro_daq_full_run1_9d_5040A_GLdocDB17018-v3_16355_16514"
		, "gm2pro_daq_full_run1_EndGame_5042B_GLdocDB20839-v1_17065_17527"
		, "gm2pro_daq_offline_dqc_run2B_24576_24636"
		, "gm2pro_daq_offline_dqc_run2C_24683_25045"
		, "gm2pro_daq_offline_dqc_run2D_25894_26383"
		, "gm2pro_daq_offline_dqc_run2E_26478_26611"
		, "gm2pro_daq_offline_dqc_run2F_26675_26803"
		, "gm2pro_daq_offline_dqc_run2G_26999_27042"
		, "gm2pro_daq_offline_dqc_run2H_27166_27212"
		, "gm2pro_daq_offline_dqc_run3N_5207A_34184_34618"
		, "gm2pro_daq_offline_dqc_run3O_5207A_34702_34920"
		, "Run4_Nearline_2021_37970_42811"
		, "Run5_Nearline_45581_45586" }; 

	//string names[] = { "1a", "1b", "1c", "1d", "2b", "2c", "2d", "2e", "2f", "2g", "2h", "3N", "3O", "4", "5" };

	int n = sizeof(files)/sizeof(files[0]);

	vector<double> x_; vector<double> ex_;
	vector<double> y_; vector<double> eyAll_; vector<double> eyStat_; 

	for(int i_file = 0; i_file < n; i_file++) {

		TFile *input = TFile::Open(("../Plots/radialFieldEstimationPlots_"+files[i_file]+".root").c_str());

		TGraphErrors *gr_statErr = (TGraphErrors*)input->Get("CaloAveragePlots/gr_AvgBrVsRun_StatErr");
		TGraphErrors *gr_allErr = (TGraphErrors*)input->Get("CaloAveragePlots/gr_AvgBrVsRun_AllErr");

		for(int i_point = 0; i_point < gr_statErr->GetN(); i_point++) {

			x_.push_back(gr_statErr->GetX()[i_point]);
			ex_.push_back(0.);
			y_.push_back(gr_statErr->GetY()[i_point]);
			eyStat_.push_back(gr_statErr->GetEY()[i_point]);
			eyAll_.push_back(gr_allErr->GetEY()[i_point]);

		}

	}


	TGraphErrors *grStat = GenerateTGraphErrors(x_, y_, ex_, eyStat_); 
	TGraphErrors *grAll = GenerateTGraphErrors(x_, y_, ex_, eyAll_); 

  DrawBrVsRun(grStat, grAll, ";Run number;#LTB_{r}#GT [ppm]", "../Images/EstimateRadialField/BrVsAllRuns");

	return 0;


}