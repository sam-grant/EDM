#include <iostream>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

void DrawIntegrals(vector<TH1D*> h_, string title, string fname, double ymin, double ymax) {


	vector<string> labels_ = {"All decays", "Accepted decays", "Truth vertices", "Reco vertices"};
	vector<int> colours_ = {1,2,8,4};
	TCanvas *c = new TCanvas("c","c",800,600);
	// TLegend *l = new TLegend(0.59, 0.69, 0.89, 0.89); 
	//TLegend *l = new TLegend(0.15, 0.11, 0.89, 0.21); 
	TLegend *l = new TLegend(0.025, 0.91, 0.975, 0.99); 
	l->SetNColumns(4);
	l->SetBorderSize(0);
	
	l->SetTextSize(22);
	l->SetTextFont(44);

	h_.at(0)->SetStats(0);
	h_.at(0)->GetXaxis()->SetTitleSize(.04);
	h_.at(0)->GetYaxis()->SetTitleSize(.04);
	h_.at(0)->GetXaxis()->SetTitleOffset(1.1);
	h_.at(0)->GetYaxis()->SetTitleOffset(1.15);
	h_.at(0)->GetXaxis()->CenterTitle(true);
	h_.at(0)->GetYaxis()->CenterTitle(true);
	h_.at(0)->GetYaxis()->SetMaxDigits(4);	
	h_.at(0)->GetYaxis()->SetRangeUser(ymin, ymax);

	for(int i = 0; i<h_.size(); i++) {

		h_.at(i)->SetLineColor(colours_.at(i));
		h_.at(i)->SetLineWidth(3);
		l->AddEntry(h_.at(i), labels_.at(i).c_str());

		if(i==0) h_.at(i)->Draw("HIST");
		else h_.at(i)->Draw("HIST SAME");

	}

   	l->Draw("SAME");

   	c->SaveAs((fname+".pdf").c_str());
   	c->SaveAs((fname+".png").c_str());
   	c->SaveAs((fname+".C").c_str());

   	delete c;


	return;


} 



void Run(TFile *input) { 

	vector<TGraphErrors*> gr_;
	gr_.push_back((TGraphErrors*)input->Get("DilutionFits/A/Decays/250MeV/d_vs_p/truthAllDecays"));
	gr_.push_back((TGraphErrors*)input->Get("DilutionFits/A/Decays/250MeV/d_vs_p/truth"));
	gr_.push_back((TGraphErrors*)input->Get("DilutionFits/B/Tracks/250MeV/d_vs_p/trackTruth"));
	gr_.push_back((TGraphErrors*)input->Get("DilutionFits/B/Tracks/250MeV/d_vs_p/trackReco"));

	// Need to convert to TH1 in order to rebin
	vector<TH1D*> h_;

	cout<<gr_.at(0)<<endl;

	for(auto& gr : gr_) {

		int nBins = gr->GetN();

		TH1D *h = new TH1D("","",1, 0, 1);

		// Actually just the mean
		double weightedMean = 0;

		for(int i = 0; i<nBins; i++) { 

			weightedMean += gr->GetY()[i];

			// h->SetBinContent(i+1, gr->GetY()[i]);
			// h->SetBinError(i+1, gr->GetEY()[i]);

		}

		weightedMean = weightedMean/nBins;

		h->SetBinContent(1, weightedMean);

		// Squish into one bin
		//h->Rebin(nBins);

		// Push into vector
		h_.push_back(h);

		//delete h;



	}

	DrawIntegrals(h_, "", "../Images/MC/Dilution/dMu/5.4e-18/RelativeDilution",0,0.17);


   return;

}

vector<TH1D*> GetDilutionHists() { 

	vector<TH1D*> dilutionHists_; 

	TString inFileName = "../Plots/MC/dMu/Dilution/dilutionCurves.root";
	TFile *inFile = TFile::Open(inFileName);

	cout<<"Open file "<<inFileName<<" "<<inFile<<endl;

	vector<TGraphErrors*> gr_;
	gr_.push_back((TGraphErrors*)inFile->Get("DilutionFits/A/Decays/250MeV/d_vs_p/truthAllDecays"));
	gr_.push_back((TGraphErrors*)inFile->Get("DilutionFits/A/Decays/250MeV/d_vs_p/truth"));
	gr_.push_back((TGraphErrors*)inFile->Get("DilutionFits/B/Tracks/250MeV/d_vs_p/trackTruth"));
	gr_.push_back((TGraphErrors*)inFile->Get("DilutionFits/B/Tracks/250MeV/d_vs_p/trackReco"));

	// Check for seg faults
	cout<<"Got dilution graphs: ";
	for(auto& gr : gr_) cout<<gr<<" ";
	cout<<endl;

	for(auto& gr : gr_) {

		int nBins = gr->GetN();

		TH1D *h = new TH1D("","",nBins, 750, 2500);

		for(int i = 0; i<nBins; i++) {
			h->SetBinContent(i+1, gr->GetY()[i]);
			h->SetBinError(i+1, gr->GetY()[i]);
		}

		dilutionHists_.push_back(h);

	}

	// Check for seg faults
	cout<<"Produced dilution hists: ";
	for(auto& dh : dilutionHists_ ) cout<<dh<<" ";
	cout<<endl;

	inFile->Close();

	return dilutionHists_;

}

vector<TH1D*> GetMomentumHists() { 

	vector<TH1D*> momentumHists_; 

	vector<TString> inFileNames_ = {"dMuSim_unblinded_truthAllDecays_AAR_250MeV_AQ.root", "dMuSim_unblinded_truth_AAR_250MeV_AQ.root", "dMuSim_unblinded_trackTruth_AAR_250MeV_BQ.root", "dMuSim_unblinded_trackReco_AAR_250MeV_BQ.root"};

	//vector<TFile*> inFiles_; 

	vector<TGraphErrors*> gr_;

	cout<<"Getting momentum graphs ";
	for(auto& inFileName : inFileNames_) {

		inFileName = "../Plots/MC/dMu/5.4e-18/fits/"+inFileName;
		TFile *f = TFile::Open(inFileName);
		//inFiles_.push_back(TFile::Open(inFileName));
		TString grn = "MomentumBinnedAnalysis/ParameterScans/MomSlices/";

		TGraphErrors *gr = (TGraphErrors*)f->Get(grn+"S0S12S18_N_vs_p");
		if(gr==0) gr = (TGraphErrors*)f->Get(grn+"N_vs_p");

		cout<<gr<<" ";

		int nBins = gr->GetN();

		TH1D *h = new TH1D("","",nBins, 750, 2500);

		for(int i = 0; i<nBins; i++) {
			h->SetBinContent(i+1, gr->GetY()[i]);
			h->SetBinError(i+1, gr->GetY()[i]);
		}

		f->Close();

	}
	cout<<endl;

	return momentumHists_;

}
int main() { 

   	cout<<"\n***************************** Getting dilution histograms *****************************"<<endl;

   	vector<TH1D*> dilutionHists_ = GetDilutionHists();

   	cout<<"\n***************************** Getting momentum histograms *****************************"<<endl;

   	vector<TH1D*> momentumHists_ = GetMomentumHists();


   

	return 0;

}
