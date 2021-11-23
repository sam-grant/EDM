/*

- Weight integrals by momentum.

  ~ Normalise the momentum dist with the same binning so that it has unit area.
  ~ Apply these bin values as weighting to the bins in the dilution plot.
  ~ Then either: average all the bins or refit and integrate.

*/


#include <iostream>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

using namespace std;

void DrawIntegrals(std::vector<TH1D*> h_, std::string title, std::string fname, double ymin, double ymax) {

	vector<TString> labels_ = {"Accepted decays", "Reco vertices (#geq 12 planes hit)", "Reco vertices (vertex quality)"};

	vector<int> colours_ = {1,2,8};

	TCanvas *c = new TCanvas("c","c",800,600);

	//TLegend *l = new TLegend(0.025, 0.91, 0.975, 0.99); 
	//l->SetNColumns(3);
	//l->SetBorderSize(0);
	
	//l->SetTextSize(22);
	//l->SetTextFont(44);

	cout<<h_.at(0)<<endl;

	h_.at(0)->SetStats(0);
	h_.at(0)->GetXaxis()->SetTitleSize(.04);
	h_.at(0)->GetYaxis()->SetTitleSize(.04);
	h_.at(0)->GetXaxis()->SetTitleOffset(1.1);
	h_.at(0)->GetYaxis()->SetTitleOffset(1.15);
	h_.at(0)->GetXaxis()->CenterTitle(true);
	h_.at(0)->GetYaxis()->CenterTitle(true);
	h_.at(0)->GetYaxis()->SetMaxDigits(4);	
	h_.at(0)->GetYaxis()->SetRangeUser(ymin, ymax);

	h_.at(0)->Draw("HIST");

/*	for(int i = 0; i<h_.size(); i++) {

		h_.at(i)->SetLineColor(colours_.at(i));
		h_.at(i)->SetLineWidth(3);
		//l->AddEntry(h_.at(i), labels_.at(i));

		if(i==0) h_.at(i)->Draw("HIST");
		else h_.at(i)->Draw("HIST SAME");

	}
*/
   	//l->Draw("SAME");

   	c->SaveAs((fname+".pdf").c_str());
   	c->SaveAs((fname+".png").c_str());
   	c->SaveAs((fname+".C").c_str());

   	delete c;

	return;


} 

vector<TH1D*> GetDilutionHists() { 
	
	vector<TH1D*> dilutionHists_; 

	TString inFileName = "../Plots/MC/dMu/Dilution/dilutionCurves.root";
	TFile *inFile = TFile::Open(inFileName);

	cout<<"Open file "<<inFileName<<" "<<inFile<<endl;

   	vector<TGraphErrors*> gr_;
   	gr_.push_back((TGraphErrors*)inFile->Get("DilutionFits/AQ/Decays/250MeV/d_vs_p/acceptedDecaysControl"));
   	gr_.push_back((TGraphErrors*)inFile->Get("DilutionFits/CQ/Tracks/250MeV/d_vs_p/trackRecoControl"));
   	gr_.push_back((TGraphErrors*)inFile->Get("DilutionFits/BQ/Tracks/250MeV/d_vs_p/trackRecoControl"));

	// Check for seg faults
	cout<<"Got dilution graphs: ";
	for(auto& gr : gr_) cout<<gr<<" ";
	cout<<endl;

	for(auto& gr : gr_) {

		int nBins = gr->GetN();

		TH1D *h = new TH1D("","",nBins, 750, 2500);

		for(int i = 0; i<nBins; i++) {
			h->SetBinContent(i+1, gr->GetY()[i]);
			h->SetBinError(i+1, gr->GetEY()[i]);
		}

		dilutionHists_.push_back(h);

	}

	// Check for seg faults
	cout<<"Produced dilution hists: ";
	for(auto& dh : dilutionHists_ ) {
		cout<<dh<<" ";
		cout<<dh->GetEntries()<<" ";
	}
	cout<<endl;

	inFile->Close();

	return dilutionHists_;

}

vector<TH1D*> GetMomentumHists() { 

	vector<TH1D*> momentumHists_; 

	vector<TString> inFileNames_;

	inFileNames_.push_back("edmFits_unblinded_acceptedDecaysControl_AAR_250MeV_AQ.root");
	inFileNames_.push_back("edmFits_unblinded_trackRecoControl_AAR_250MeV_CQ.root");	
	inFileNames_.push_back("edmFits_unblinded_trackRecoControl_AAR_250MeV_BQ.root"); 

	vector<TGraphErrors*> gr_;

	cout<<"Getting momentum graphs ";

	for(auto& inFileName : inFileNames_) {

		inFileName = "../Plots/MC/dMu/5.4e-18/Fits/"+inFileName;
		TFile *f = TFile::Open(inFileName);

		TString grn = "MomentumBinnedAnalysis/ParameterScans/MomSlices/";

		TGraphErrors *gr = (TGraphErrors*)f->Get(grn+"S0S12S18_N_vs_p");
		if(gr==0) gr = (TGraphErrors*)f->Get(grn+"N_vs_p");

		cout<<gr<<" ";

		int nBins = gr->GetN();

		TH1D *h = new TH1D("","",nBins, 0, PMAX);

		for(int i = 0; i<nBins; i++) {
			h->SetBinContent(i+1, gr->GetY()[i]);
			h->SetBinError(i+1, gr->GetY()[i]);
		}

		momentumHists_.push_back(h);

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

   	DrawTH1(dilutionHists_.at(1), "", "../tmp/tmp");
//   	DrawIntegrals(dilutionHists_, "", "../tmp/RelativeDilution", 0, 10);


	return 0;

}
