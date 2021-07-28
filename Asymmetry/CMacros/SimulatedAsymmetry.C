#include <iostream>

#include "RootInclude.h"

double M_POS = 0.51099895; // MeV
double M_MU = 105.6583715; // MeV
double A_MU = 11659208.9e-10; 
double GMAGIC = std::sqrt( 1.+1./A_MU );
double PMAX = 1.01 * M_MU * GMAGIC; // 3127.1144

bool boost = true;

using namespace std;

double FindYMin(vector<TH1F*> hists_) { 

	double y_min = 0; 

	for(auto hist : hists_) { 

		double min = hist->GetMinimum();
		if(min < y_min) y_min = min;

	}

	return y_min;

}


double FindYMax(vector<TH1F*> hists_) { 

	double y_max = -1; 

	for(auto hist : hists_) { 

		double max = hist->GetMaximum();
		if(max > y_max) y_max = max;

	}

	return y_max;

}

double GetBoostFactor(bool boost) { 

   double boostFactor = 0;

   if(boost) { 
      // Factor of two is just to make sure we're not chopping the tops off the vertcial angle at low momentum 
      boostFactor = (1/(2*GMAGIC)); 
   }
   else if(!boost) {
      boostFactor = 1.0;
      
   }

   return boostFactor;

}

void NormaliseHistsByIntegral(vector<TH1F*> hists_) {

	for(int i = 0; i < hists_.size(); i++) {
		hists_.at(i)->Scale(1/(hists_.at(i)->Integral()));
	}

	return;
}

void NormaliseHistsByMax(vector<TH1F*> hists_) {

	for(int i = 0; i < hists_.size(); i++) {

		double sf = hists_.at(i)->GetMaximum();

		cout<<"Hist\t"<<hists_.at(i)->GetName()<<endl;
		cout<<"Scale factor\t"<<sf<<endl;

		hists_.at(i)->Scale(1./sf);
	}

	return;
}


void DrawHemisphereHists(TH1F *h_1, TH1F *h_2, string legendParam, string title, string fname) { //, bool upDown) { 

	cout<<"...Drawing hemisphere hists"<<endl;

	vector<TH1F*> hists_ = {h_1, h_2};

	double ymin = FindYMin(hists_);
	double ymax = FindYMax(hists_);

	TCanvas *c = new TCanvas("c","c",800,600);

	hists_.at(0)->GetXaxis()->SetTitleSize(.04);
	hists_.at(0)->GetYaxis()->SetTitleSize(.04);
	hists_.at(0)->GetXaxis()->SetTitleOffset(1.1);
	hists_.at(0)->GetYaxis()->SetTitleOffset(1.1);
	hists_.at(0)->GetXaxis()->CenterTitle(true);
	hists_.at(0)->GetYaxis()->CenterTitle(true);
	hists_.at(0)->GetYaxis()->SetMaxDigits(4);
	hists_.at(0)->SetTitle(title.c_str());
	hists_.at(0)->SetStats(0);

	hists_.at(0)->GetYaxis()->SetRangeUser(ymin, ymax);

	hists_.at(0)->SetLineColor(kBlack); 
	hists_.at(1)->SetLineColor(kRed);

	hists_.at(0)->Draw("HIST");
	hists_.at(1)->Draw("HIST SAME");

	TLegend *l;

	if(!boost) l = new TLegend(0.69,0.69,0.89,0.89);
	else if(boost) l = new TLegend(0.15,0.69,0.35,0.89);

	l->SetTextFont(42);
	l->SetBorderSize(0);

	l->AddEntry(hists_.at(0), (legendParam+" > 0").c_str());
	l->AddEntry(hists_.at(1), (legendParam+" < 0").c_str());

	//"#delta#upoint#theta < 0");

	l->Draw("SAME");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	return;

}

void DrawManyHists(std::vector<TH1F*> hists_, std::vector<string> names, std::string title, std::string fname, bool edm, bool norm, bool normByMax, bool topLegend) {

	cout<<"...Drawing hists"<<endl;

	TCanvas *c = new TCanvas("c","c",800,600);

	TLegend *l;
	if(topLegend) l = new TLegend(0.39,0.79,0.69,0.85);
	else if(!topLegend) l = new TLegend(0.39,0.19,0.69,0.25);

	l->SetNColumns(3);
	l->SetTextFont(42);
	l->SetBorderSize(0);

	hists_.at(0)->SetTitle(title.c_str());
	hists_.at(0)->GetXaxis()->SetTitleSize(.04);
	hists_.at(0)->GetYaxis()->SetTitleSize(.04);
	hists_.at(0)->GetXaxis()->SetTitleOffset(1.1);
	hists_.at(0)->GetYaxis()->SetTitleOffset(1.1);
	hists_.at(0)->GetXaxis()->CenterTitle(true);
	hists_.at(0)->GetYaxis()->CenterTitle(true);
	hists_.at(0)->GetYaxis()->SetMaxDigits(4);
	hists_.at(0)->SetStats(0);

	int n = hists_.size();

	if(norm) { 
		if(normByMax) {
			NormaliseHistsByMax(hists_);
		} else if(!normByMax) {
			NormaliseHistsByIntegral(hists_);
		}
		if(edm) { 
			// Rescale A_EDM hist (hacky af)
			hists_.at(1)->Scale(2 * 0.266991);//GetMaximum()
		}
	}

	double y_min = FindYMin(hists_);
	double y_max = FindYMax(hists_);

	y_max = y_max + y_max*0.05;
	y_min = y_min + y_min*0.05;

	hists_.at(0)->GetYaxis()->SetRangeUser(y_min,y_max);

  	hists_.at(0)->SetLineColor(kBlack);
  	hists_.at(1)->SetLineColor(kRed);
  	hists_.at(2)->SetLineColor(kBlue);

	for(int i = 0; i < n; i++) {

    	l->AddEntry(hists_.at(i), (names.at(i)).c_str());

      //if(i==0) hists_.at(i)->Draw("E");
      //else hists_.at(i)->Draw("E SAME");

      if(i==0) hists_.at(i)->Draw("HIST");
      else hists_.at(i)->Draw("HIST SAME");
  	}

	l->Draw("same");
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}


void RunG2Asym(TFile *fin, string boostLabel) { 

	TH1F *h_N_f = (TH1F*)fin->Get("g2Asym/h_N_f");// forward
	TH1F *h_N_b = (TH1F*)fin->Get("g2Asym/h_N_b");; // backwards

	cout<<"...Got forward/backward hists "<<h_N_f<<", "<<h_N_b<<endl;

	// Draw them
	DrawHemisphereHists(h_N_f, h_N_b, "cos(#alpha)", ";Track momentum [MeV];Entries", ("../Images/g2/ForwardsBackwards_"+boostLabel).c_str());

	// Get boost factor (momentum scaling)
	double boostFactor = GetBoostFactor(boost);

	// Book histograms
	TH1F *h_A = new TH1F("h_A",";Track momentum [MeV];Entries",int(PMAX/10),0,int(PMAX*boostFactor)); 
	TH1F *h_N = new TH1F("h_N",";Track momentum [MeV];Entries",int(PMAX/10),0,int(PMAX*boostFactor)); 
	TH1F *h_NA2 = new TH1F("h_NA2",";Track momentum [MeV];Entries",int(PMAX/10),0,int(PMAX*boostFactor)); 

	vector<double> A_; vector<double> p_; vector<double> zeros_;

	for(int i_bin = 0; i_bin < h_N_f->GetXaxis()->GetNbins(); i_bin++) { 

		double p_1 = h_N_f->GetXaxis()->GetBinCenter(i_bin+1);
		double p_2 = h_N_b->GetXaxis()->GetBinCenter(i_bin+1);

		double N_1 = h_N_f->GetBinContent(i_bin+1);
		double N_2 = h_N_b->GetBinContent(i_bin+1);

		float N = N_1+N_2;
		float A = (N_1 - N_2) / (N_1 + N_2); 
		float NA2 = N * pow(A,2);

		if(N==0) continue;

		A_.push_back(A);
		p_.push_back(p_1);
		zeros_.push_back(0.);

		h_N->SetBinContent(i_bin+1, N);
		h_A->SetBinContent(i_bin+1, A);
		h_NA2->SetBinContent(i_bin+1, NA2);

	}

	vector<TH1F*> hists_ = {h_N, h_A, h_NA2};
	vector<string> labels_ = {"N", "A", "NA^{2}"};

	DrawManyHists(hists_, labels_, boostLabel+";Track momentum [MeV]; Events", "../Images/g2/DiffDecayAsymHists_"+boostLabel,  false, false, false, true);
	DrawManyHists(hists_, labels_, boostLabel+";Track momentum [MeV]; Normalised events", "../Images/g2/NormDiffDecayAsymHists_"+boostLabel, false, true, true, true);

	delete h_N;
	delete h_A;
	delete h_NA2;

	return;

}

void RunEDMAsym(TFile *fin, string boostLabel) { 

	TH1F *h_N_1 = (TH1F*)fin->Get("edmAsym/h_deltaTheta_plus"); // same hemipshere
	TH1F *h_N_2 = (TH1F*)fin->Get("edmAsym/h_deltaTheta_minus"); // different hemisphere

	cout<<"...Got up/down hists "<<h_N_1<<", "<<h_N_2<<endl;

	// Draw them
	DrawHemisphereHists(h_N_1, h_N_2, "#delta#upoint#theta", ";Track momentum [MeV];Entries", ("../Images/edm/UpDown_"+boostLabel).c_str());

	// Get boost factor (momentum scaling)
	double boostFactor = GetBoostFactor(boost);

	// Book histograms and adjust bins to cut off negative A
	TH1F *h_A = new TH1F("h_A",";Track momentum [MeV];Entries",300,0,3000);
	TH1F *h_N = new TH1F("h_N",";Track momentum [MeV];Entries",300,0,3000);
	TH1F *h_NA2 = new TH1F("h_NA2",";Track momentum [MeV];Entries",300,0,3000); 

	vector<TH1F*> hists_ = {h_N, h_A, h_NA2};

	vector<string> labels_ = {"N", "A", "NA^{2}"};

	vector<double> A_; vector<double> p_; vector<double> zeros_;

	for(int i_bin = 0; i_bin < h_N_1->GetXaxis()->GetNbins(); i_bin++) { 

		double p_1 = h_N_1->GetXaxis()->GetBinCenter(i_bin+1);
		double p_2 = h_N_2->GetXaxis()->GetBinCenter(i_bin+1);

		double N_1 = h_N_1->GetBinContent(i_bin+1);//h_N_1->GetBin(p_1));
		double N_2 = h_N_2->GetBinContent(i_bin+1);//h_N_2->GetBin(p_2));

		float N = N_1+N_2;
		float A = (N_1 - N_2) / (N_1 + N_2); 
		float NA2 = N * pow(A,2);

		//if(A < 0) cout<<"A is negative at "<<A<<endl;

		if(N==0) continue;

		//if(A < 0) continue;

		A_.push_back(A);
		p_.push_back(p_1);
		zeros_.push_back(0.);

		h_N->SetBinContent(i_bin+1, N);
		h_A->SetBinContent(i_bin+1, A);
		h_NA2->SetBinContent(i_bin+1, NA2);

	}

	// Rebin out the noise 
	Int_t n_rebin = 15;
	cout<<"...Re-binning EDM hists by "<<n_rebin<<endl;

	h_N->Rebin(n_rebin);
	h_A->Rebin(n_rebin);
	h_NA2->Rebin(n_rebin);

	bool topLegend = false;
	if(boost) topLegend = true;

	DrawManyHists(hists_, labels_, boostLabel+";Track momentum [MeV]; Events", "../Images/edm/DiffDecayAsymHists_"+boostLabel, true, false, false, topLegend);
	DrawManyHists(hists_, labels_, boostLabel+";Track momentum [MeV]; Normalised events", "../Images/edm/NormDiffDecayAsymHists_"+boostLabel, true, true, true, topLegend);

	delete h_N;
	delete h_A;
	delete h_NA2;

	return;
	
}

int main() { 

	string boostLabel = "";

	if(boost) boostLabel += "MRF";
	else if(!boost) boostLabel += "LAB";

	string fname = "../Plots/decayNTuplePlots_Full_"+boostLabel+".root";
	TFile *fin = TFile::Open(fname.c_str()); 

	cout<<"...Start\n**********************************\nFrame is "<<boostLabel<<". File is "<<fname<<", "<<fin<<"\n**********************************"<<endl;


	cout<<"Got file "<<fname<<", "<<fin<<endl;


	cout<<"**********************************\nRunning g-2 asymmetry\n**********************************"<<endl;

	RunG2Asym(fin, boostLabel);

	cout<<"**********************************\nRunning EDM asymmetry\n**********************************"<<endl;

	RunEDMAsym(fin, boostLabel);


	return 0;

}