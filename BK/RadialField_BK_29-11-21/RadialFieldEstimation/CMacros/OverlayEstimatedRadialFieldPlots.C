#include <iostream>
#include <vector>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

using namespace std;

vector<TH1D*> GetBrHists() { 

	vector<TH1D*> h1_Br_;

	TFile *fin_run1 = TFile::Open("../Plots/radialFieldEstimationPlots_Run1_15921_17527.root");
	TFile *fin_run2 = TFile::Open("../Plots/radialFieldEstimationPlots_Run2_24683_27212.root"); 
	TFile *fin_run3 = TFile::Open("../Plots/radialFieldEstimationPlots_Run3_34702_34920.root");

	TH1D *h_run1 = (TH1D*)fin_run1->Get("CaloAverage/h1_Br");
	TH1D *h_run2 = (TH1D*)fin_run2->Get("CaloAverage/h1_Br");
	TH1D *h_run3 = (TH1D*)fin_run3->Get("CaloAverage/h1_Br");

	cout<<"h_run1\t"<<h_run1<<endl;
	h1_Br_.push_back(h_run1);
	h1_Br_.push_back(h_run2);
	h1_Br_.push_back(h_run3);

	return h1_Br_;

}

/*void RemoveZeroLines(vector<TH1D*> h1_Br_) {

	for (int i = 0; i<h1_Br_.size(); i++) { 

		TH1D *h = h1_Br_.at(i);

		for (int j = 0; j<h->GetNbinsX(); j++) { 

			if(h->GetBinContent(j+1) == 0) {
				h->SetBinContent(j+1, -100);
			}
		}
	}

	return;
}*/

void Overlay1DHists(vector<TH1D*> h1_Br_, string title, string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	h1_Br_.at(0)->SetTitle(title.c_str());

	gStyle->SetOptStat(0);
			
	h1_Br_.at(0)->GetXaxis()->SetTitleSize(.04);
	h1_Br_.at(0)->GetYaxis()->SetTitleSize(.04);
	h1_Br_.at(0)->GetXaxis()->SetTitleOffset(1.1);
	h1_Br_.at(0)->GetYaxis()->SetTitleOffset(1.1);
	h1_Br_.at(0)->GetXaxis()->CenterTitle(1);
	h1_Br_.at(0)->GetYaxis()->CenterTitle(1);
	h1_Br_.at(0)->GetYaxis()->SetMaxDigits(4);

	h1_Br_.at(0)->SetLineColor(kBlack);
	h1_Br_.at(1)->SetLineColor(kRed);
	h1_Br_.at(2)->SetLineColor(kBlue);

	h1_Br_.at(0)->SetLineWidth(3);
	h1_Br_.at(1)->SetLineWidth(3);
	h1_Br_.at(2)->SetLineWidth(3);

	h1_Br_.at(0)->SetMaximum(150);
	h1_Br_.at(0)->GetYaxis()->SetRangeUser(0,135);
	h1_Br_.at(0)->GetXaxis()->SetRangeUser(-15,35);
	h1_Br_.at(0)->Draw("][ HIST");
	h1_Br_.at(1)->Draw("][ HIST SAME");
	h1_Br_.at(2)->Draw("][ HIST SAME");

	// Legend
	TLegend *leg = new TLegend(0.55,0.65,0.89,0.89);
	for (int i = 0; i<h1_Br_.size(); i++) { 
	  //leg->AddEntry(h1_Br_.at(i),"#splitline{#bf{Run "+to_string(i)+"}}{Mean = "+to_string(h1_Br_.at(i)->GetMean())+" #pm "+to_string(h1_Br_.at(i)->GetMeanError())+" ppm}");
	 }
	leg->SetBorderSize(0);
	//leg->Draw("same")
	// Draw end lines back 
	gPad->Update();

	double h1_x1 = h1_Br_.at(0)->GetBinLowEdge(h1_Br_.at(0)->FindFirstBinAbove());
	double h1_y1 = h1_Br_.at(0)->GetBinContent(h1_Br_.at(0)->FindFirstBinAbove());
	TLine *h1_l1 = new TLine(h1_x1, 0, h1_x1, h1_y1);
	h1_l1->SetLineColor(kBlack);
	h1_l1->SetLineWidth(3);
	h1_l1->Draw("same");

	double h1_x2 = h1_Br_.at(0)->GetBinLowEdge(h1_Br_.at(0)->FindLastBinAbove()) + h1_Br_.at(0)->GetBinWidth(1);//Edge(h1_Br_.at(0)->FindLastBinAbove());;
	double h1_y2 = h1_Br_.at(0)->GetBinContent(h1_Br_.at(0)->FindLastBinAbove());
	TLine *h1_l2 = new TLine(h1_x2, 0, h1_x2, h1_y2);
	h1_l2->SetLineColor(kBlack);
	h1_l2->SetLineWidth(3);
	h1_l2->Draw("same");

	double h2_x1 = h1_Br_.at(1)->GetBinLowEdge(h1_Br_.at(1)->FindFirstBinAbove());
	double h2_y1 = h1_Br_.at(1)->GetBinContent(h1_Br_.at(1)->FindFirstBinAbove());
	TLine *h2_l1 = new TLine(h2_x1, 0, h2_x1, h2_y1);
	h2_l1->SetLineColor(kRed);
	h2_l1->SetLineWidth(3);
	h2_l1->Draw("same");

	double h2_x2 = h1_Br_.at(1)->GetBinLowEdge(h1_Br_.at(1)->FindLastBinAbove()) + h1_Br_.at(1)->GetBinWidth(1);//Edge(h1_Br_.at(0)->FindLastBinAbove());;
	double h2_y2 = h1_Br_.at(1)->GetBinContent(h1_Br_.at(1)->FindLastBinAbove());
	TLine *h2_l2 = new TLine(h2_x2, 0, h2_x2, h2_y2);
	h2_l2->SetLineColor(kRed);
	h2_l2->SetLineWidth(3);
	h2_l2->Draw("same");

	double h3_x1 = h1_Br_.at(2)->GetBinLowEdge(h1_Br_.at(2)->FindFirstBinAbove());
	double h3_y1 = h1_Br_.at(2)->GetBinContent(h1_Br_.at(2)->FindFirstBinAbove());
	TLine *h3_l1 = new TLine(h3_x1, 0, h3_x1, h3_y1);
	h3_l1->SetLineColor(kBlue);
	h3_l1->SetLineWidth(3);
	h3_l1->Draw("same");

	double h3_x2 = h1_Br_.at(2)->GetBinLowEdge(h1_Br_.at(2)->FindLastBinAbove()) + h1_Br_.at(2)->GetBinWidth(1);//Edge(h1_Br_.at(0)->FindLastBinAbove());;
	double h3_y2 = h1_Br_.at(2)->GetBinContent(h1_Br_.at(2)->FindLastBinAbove());
	TLine *h3_l2 = new TLine(h3_x2, 0, h3_x2, h3_y2);
	h3_l2->SetLineColor(kBlue);
	h3_l2->SetLineWidth(3);
	h3_l2->Draw("same");

	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}


int main() { 

	vector<TH1D*> h1_Br_ = GetBrHists();

	Overlay1DHists(h1_Br_, ";#LTB_{r}#GT [ppm];Entries", "../Images/hBr_overlay");

	return 0;
}
