#include <iostream>

#include "RootInclude.h"
#include "FancyDraw.h"

using namespace std;

void DrawManyTH1(vector<TH1D*> hists_, string title, string fname, double ymin, double ymax) {

	TCanvas *c = new TCanvas("c","c",800,600);
	c->SetRightMargin(0.20);

	//TLegend *l = new TLegend(0.81,0.35,0.99,0.65);
	TLegend *l = new TLegend(0.81,0.15,0.99,0.85);
	l->SetBorderSize(0);

	hists_.at(0)->SetTitle(title.c_str());
	hists_.at(0)->GetXaxis()->SetTitleSize(.04);
	hists_.at(0)->GetYaxis()->SetTitleSize(.04);
	hists_.at(0)->GetXaxis()->SetTitleOffset(1.1);
	hists_.at(0)->GetYaxis()->SetTitleOffset(1.1);
	hists_.at(0)->GetXaxis()->CenterTitle(true);
	hists_.at(0)->GetYaxis()->CenterTitle(true);
	hists_.at(0)->GetYaxis()->SetMaxDigits(4);
	hists_.at(0)->GetYaxis()->SetRangeUser(ymin,ymax);
	hists_.at(0)->SetStats(0);

	int nGraphs = hists_.size();

	gStyle->SetPalette(kRainBow);//Bird);

	// l->SetHeader(legTitle.c_str(), "C");

	for(int i = 0; i < nGraphs; i++) {
    	l->AddEntry(hists_.at(i), hists_.at(i)->GetName());
    	hists_.at(i)->SetLineWidth(3);
      	if(i==0) hists_.at(i)->Draw("HIST PLC PMC");
      	else hists_.at(i)->Draw("HIST PLC PMC SAME");
  	}

	l->Draw("same");
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawGraph(vector<TH1D*> hists_, int sliceWidth, double ymin, bool useRMS, string title, string fname) { 

	int n = hists_.size();
	double x[n]; double ex[n];
	double y[n]; double ey[n];

	int count = 0;
	double p = sliceWidth/2.;

	// for(auto& h : hists_) { 

	for(int i = 0; i<n; i++) {

		TH1D *h = hists_.at(i);

		double RMS = h->GetRMS();
		double eRMS = h->GetRMSError();

		double eMean = h->GetMeanError();

		x[i] = p; ex[i] = sliceWidth/2.;

		if(useRMS) { 
			y[i] = RMS; ey[i] = eRMS;
		} else if(!useRMS) { 
			y[i] = eMean; ey[i] = 0.;
			cout<<eMean<<endl;
		}

		//cout<<"Error on the mean\t"<<eMean<<endl;
		//cout<<"RMS\t"<<RMS<<

		p += sliceWidth;

	}

	TGraphErrors *gr = new TGraphErrors(n, x, y, ex, ey);

	double offset = sliceWidth/2+10;
  	double xmax = gr->GetPointX(n-1)+offset;//(sliceWidth/2+100; 
  	double xmin = gr->GetPointX(0)-offset;
  	gr->GetXaxis()->SetRangeUser(xmin, xmax);

  	//gr->SetMinimum(ymin);//GetXaxis()->SetRangeUser(xmin, xmax); 

	TCanvas *c = new TCanvas("c","c",800,600);

	gr->SetTitle(title.c_str());
	gr->GetXaxis()->SetTitleSize(.04);
	gr->GetYaxis()->SetTitleSize(.04);
	gr->GetXaxis()->SetTitleOffset(1.1);
	gr->GetYaxis()->SetTitleOffset(1.2);
	gr->GetXaxis()->CenterTitle(true);
	gr->GetYaxis()->CenterTitle(true);
	gr->GetYaxis()->SetMaxDigits(4);
	gr->SetMarkerStyle(20); //  Full circle

	gr->Draw("AP");

	// TLine
	gPad->Update();
	TLine *line1 = new TLine(500,gPad->GetUymin(),500,gPad->GetUymax());
	line1->SetLineWidth(3);
	line1->SetLineStyle(2);
	line1->SetLineColor(kRed);
	//line1->Draw("same");

	TLine *line2 = new TLine(2900,gPad->GetUymin(),2900,gPad->GetUymax());
	line2->SetLineWidth(3);
	line2->SetLineStyle(2);
	line2->SetLineColor(kRed);
	//line2->Draw("same");

	// c->SetLogy();
	// c->SaveAs((fname+"_log.pdf").c_str());
	// c->SaveAs((fname+"_log.png").c_str());
	// c->SaveAs((fname+"_log.C").c_str());

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DoRebin(TH2D *hist, int newBinWidth) {
	int xBinWidth = hist->GetXaxis()->GetBinWidth(1);
	int rebin = newBinWidth/xBinWidth;
	hist->RebinX(rebin);
	return;
}

void SliceY(TH2D *hist, int sliceWidth, double ymin) { 

	//Clone input to stop overwrites
  	TH2D *hist_clone = (TH2D*)hist->Clone("hist_clone");

  	DoRebin(hist_clone, sliceWidth);

  	vector<TH1D *> slices_;

	// Loop through x-bins
	for(int i_bin = 0; i_bin < hist_clone->GetXaxis()->GetNbins(); i_bin++) { 

		// Set slice name 
		int loEdge = i_bin*sliceWidth;
		int hiEdge = (i_bin+1)*sliceWidth;
		TString sliceName = to_string(loEdge)+"-"+to_string(hiEdge)+" MeV";

		// Get slice
		TH1D *slice = hist_clone->ProjectionY(sliceName, i_bin+1, i_bin+1);
		slices_.push_back(slice);

	}

	// DrawManyTH1(slices_, ";True #minus reco #theta_{y} [mrad];Tracks", "../Images/MC/TrackerResolution/TrackerResSlicesOverlay_"+to_string(sliceWidth), 0, (sliceWidth/3.5)*1e3);
	// DrawGraph(slices_, sliceWidth, true, ";p [MeV]: in range p #minus "+to_string(sliceWidth/2)+" < p < p #plus "+to_string(sliceWidth/2)+";True #minus reco #theta_{y} RMS [mrad]", "../Images/MC/TrackerResolution/TrackerResRMSGraph_"+to_string(sliceWidth)); 

	DrawGraph(slices_, sliceWidth, ymin, false, ";p [MeV]: in range p #minus "+to_string(sliceWidth/2)+" < p < p #plus "+to_string(sliceWidth/2)+";True #minus reco #delta #LT#theta_{y}#GT [mrad]", "../Images/MC/TrackerResolution/TrackerResMeanErrorGraph_"+to_string(sliceWidth)); 


  	return;

}

void Run(TFile *fin) { 

	// Get hists
	TString h_name = "Plots/VerticalAngleResVsMom";
	TH2D *h_recoRes = (TH2D*)fin->Get("Plots/VerticalAngleResVsMom");
	TH2D *h_trueRes = (TH2D*)fin->Get("Plots/VerticalAngleResVsTrueMom");

	DrawTH2(h_recoRes, "", "../Images/MC/TrackerResolution/VerticalAngleResVsMom");
	DrawTH2(h_trueRes, "", "../Images/MC/TrackerResolution/VerticalAngleResVsTrMom");

	//SliceY(h_recoRes, 10);
	//SliceY(h_recoRes, 50);
	//SliceY(h_recoRes, 100);
	SliceY(h_recoRes, 200, 0); 
	SliceY(h_recoRes, 250, -0.01); 
	SliceY(h_recoRes, 500, .8); 

	return;

}

int main() {

	// Get file
	TString fname = "../Plots/MC/dMu/5.4e-18/plots/trackerResolution.root";
	TFile *fin = TFile::Open(fname);
	cout<<"\nOpened input "<<fname<<", "<<fin<<endl;

	Run(fin);

	return 0;

}