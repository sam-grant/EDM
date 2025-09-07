#include "Utils.h"

void DrawTH1(TH1D *hist, int a, int b, TString title, string fname, TString mean = "") {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title);

	hist->SetStats(0);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.1);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);
	hist->SetLineWidth(2);
	hist->SetLineColor(1);

	//c->SetRightMargin(0.13);

	hist->Draw("HIST");
	

	//TPaveText *names = new TPaveText(0.575,0.75,0.75,0.88,"NDC"); // 1/QHV
	TPaveText *names = new TPaveText(0.575,0.75,0.75,0.88,"NDC"); // 1/QHV
	//TPaveText *names = new TPaveText(0.11,0.75,0.285,0.88,"NDC"); // 1/QHV
	names->SetTextAlign(13);
	names->AddText("#LTy#GT [mm]");
	names->AddText("#sigma_{y} [mm]");


	TPaveText *values = new TPaveText(0.75,0.75,0.89,0.88,"NDC");
	//TPaveText *values = new TPaveText(0.285,0.75,0.43,0.88,"NDC");
	values->SetTextAlign(33);
	if(mean=="") values->AddText(Round(hist->GetMean(), a)+"#pm"+Round(hist->GetMeanError(),1));
	else values->AddText(mean);
	values->AddText(Round(hist->GetRMS(), b)+"#pm"+Round(hist->GetRMSError(), 1));

	names->SetTextSize(22);
	names->SetTextFont(44);
	names->SetFillColor(0);
	values->SetFillColor(0);
	values->SetTextFont(44);
	values->SetTextSize(22);

	names->Draw("same");
	values->Draw("same");

	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}

void CaloAvgYPlot() { 

	TFile *fin = TFile::Open("../Plots/Data/RadialFieldEstimation/RadialFieldEstimation/radialFieldEstimationPlots_gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2_15921_15991_empiricalMethod.root");

	TH1D *h = (TH1D*)fin->Get("CaloAveragePlots/h_AvgCaloYTot");

	DrawTH1(h, 6, 6, ";Vertical cluster position, y [mm];Clusters / mm", "../Images/Data/CaloAvgYPlot");

	fin->Close();

	return; 

}