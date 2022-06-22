#include <iostream>

#include "RootInclude.h"

double M_POS = 0.51099895; // MeV
double M_MU = 105.6583715; // MeV
double A_MU = 11659208.9e-10; 
double GMAGIC = std::sqrt( 1.+1./A_MU );
double PMAX = M_MU * GMAGIC; // 3127.1144

bool boost = false;

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
		// Ensure errors are dealt with correctly
		hists_.at(i)->Sumw2();
		int integral = hists_.at(i)->Integral();
		hists_.at(i)->Scale(1/integral);//hists_.at(i)->Integral()));
	}

	return;
}

void NormaliseHistsByMax(vector<TH1F*> hists_) {

	for(int i = 0; i < hists_.size(); i++) {
		// Ensure errors are dealt with correctly
		hists_.at(i)->Sumw2();
		// Scale hist
		double max = hists_.at(i)->GetMaximum();
		hists_.at(i)->Scale(1/max);
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
	else if(!topLegend) l = new TLegend(0.39,0.19,0.69,0.24);

	l = new TLegend(0.725,0.70,0.89,0.89);
	//l->SetNColumns(3);
	//l->SetTextFont(42);
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
			hists_.at(1)->Sumw2();
			hists_.at(1)->Scale(2 * 0.266991);//GetMaximum()
		}
	}

	double y_min = FindYMin(hists_);
	double y_max = FindYMax(hists_);

	y_max = y_max + abs(y_max)*0.1;
	y_min = y_min - abs(y_min)*0.1;

	hists_.at(0)->GetYaxis()->SetRangeUser(y_min,y_max);

  	hists_.at(0)->SetLineColor(kBlack);
  	hists_.at(1)->SetLineColor(kRed);
  	hists_.at(2)->SetLineColor(kBlue);

   hists_.at(0)->SetMarkerColor(kBlack);
  	hists_.at(1)->SetMarkerColor(kRed);
  	hists_.at(2)->SetMarkerColor(kBlue);

	for(int i = 0; i < n; i++) {

		hists_.at(i)->SetLineWidth(3);

    	l->AddEntry(hists_.at(i), (names.at(i)).c_str());

      if(i==0) hists_.at(i)->Draw("E");
      else hists_.at(i)->Draw("E SAME");
  	}

	l->Draw("same");
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void FitAsym(TH1F *hist, bool edm, string boostLabel) { 

	TF1 *fitFunc; 
	// Convert momentum to lambda
	hist->GetXaxis()->SetLimits(0,1);

	string config = "";

	if(edm) {
		config += "EDM";
		if(!boost) {
			fitFunc = new TF1("fitFunc", "0.5 * (1/0.266991) * (sqrt(x * (1-x)) * (1 + 4*x) ) / (5 + 5*x - 4*x*x)", 0, 1);
			config += " (LAB)";
		} else if(boost) {
			fitFunc = new TF1("fitFunc", "(2*x-1) / (3-2*x)", 0, 1);
			config += " (MRF)";
		}
	} else if(!edm) {
		config += "g-2"; 

		// No need to rebin
		//hist->Rebin(15); // EDM hist has already been rebinned at this level.
		hist->Scale(1./hist->GetMaximum());
		if(!boost) {
			fitFunc = new TF1("fitFunc", "(-1-x+8*x*x)/(5+5*x-4*x*x)", 0, 1);
			config += " (LAB)";
		} else if(boost) {
			fitFunc = new TF1("fitFunc", "(2*x-1) / (3-2*x)", 0, 1);
			config += " (MRF)";
		}
	} 

	cout<<"... Fitting asymmetry for "<<config<<" with function "<<fitFunc<<endl;

	hist->Fit(fitFunc);

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(";#lambda = p/p_{max}; Normalised events");

	hist->SetStats(0);

	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.1);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);
	hist->SetLineWidth(3);
	hist->SetLineColor(1);

	hist->Draw("E");

	fitFunc->SetLineWidth(3);
	fitFunc->Draw("same");

	TLegend *leg = new TLegend(.15, .69, .49, .89);
	leg->SetBorderSize(0);
	leg->AddEntry(hist, "Decay asymmetry, A(#lambda)");//, "+config).c_str());

	string legEntry = "";
	string fname = "../Images/";

	if(edm) {
		fname += "edm/hFit_A";
		if(!boost) legEntry += "#frac{#sqrt{#lambda(1-#lambda)}(1+4#lambda)}{5+5#lambda-4#lambda^{2}}";
		else legEntry += "#frac{2#lambda-1}{3-2#lambda}"; 
	} else { 
		fname += "g2/hFit_A";
		if(!boost) legEntry += "#frac{-1-#lambda+8#lambda^{2}}{5+5#lambda-4#lambda^{2}}";
		else legEntry += "#frac{2#lambda-1}{3-2#lambda}";
	}

	fname += "_"+boostLabel;

	leg->AddEntry(fitFunc, legEntry.c_str());

	leg->Draw("SAME");

	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());


	return;

}

void DrawDeltaThetaHist(TH1F *h1, string boostLabel) { 

	// Clone hist

	cout<<"\nDrawing deltaTheta hist."<<endl;

	string fname = "../Images/edm/deltaTheta_"+boostLabel;
	string title = boostLabel+";#delta#upoint#theta [rad^{2}];Entries";

	TH1F *h2 = (TH1F*)h1->Clone("h2");

	for(int i = 0; i<h1->GetXaxis()->GetNbins(); i++) {
		float binCent = h1->GetBinCenter(i+1);
		if(h1->GetBinCenter(i+1) < 1e-4) h1->SetBinContent(i+1,0);
	}

	for(int i = 0; i<h2->GetXaxis()->GetNbins(); i++) {
		float binCent = h2->GetBinCenter(i+1);
		if(h2->GetBinCenter(i+1) > 0) h2->SetBinContent(i+1,0);
	}

	TCanvas *c = new TCanvas("c","c",800,600);

	h1->SetTitle(title.c_str());
	h1->GetXaxis()->SetTitleSize(.04);
	h1->GetYaxis()->SetTitleSize(.04);
	h1->GetXaxis()->SetTitleOffset(1.1);
	h1->GetYaxis()->SetTitleOffset(1.1);
	h1->GetXaxis()->CenterTitle(true);
	h1->GetYaxis()->CenterTitle(true);
	h1->GetYaxis()->SetMaxDigits(4);
	h1->SetStats(0);

  	h1->SetLineColor(kBlue);
  	h2->SetLineColor(kRed);
  	h1->SetFillColor(kBlue);
  	h2->SetFillColor(kRed);
   h1->SetMarkerColor(kBlue);
  	h2->SetMarkerColor(kRed);


  	h1->GetXaxis()->SetRangeUser(-0.01, 0.01);//h1->GetBinCenter(h1->FindFirstBinAbove(0)));
  	// h1->SetMaximum(5.0e6);
  	// h2->GetXaxis()->SetRangeUser(h2->GetBinCenter(h2->FindLastBinAbove(0)), 0);

   h1->Draw("E");
   h2->Draw("E ][ SAME");
   //h2->Draw("HIST");// SAME");

	TLegend *l = new TLegend(0.69,0.69,0.89,0.89);

	//l->SetNColumns(2);
	l->SetTextFont(42);
	l->SetBorderSize(0);

   l->AddEntry(h1,"Aligned");
   l->AddEntry(h2,"Antialigned");

   //l->SetNColumns(2);

	l->Draw("SAME");

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
	DrawHemisphereHists(h_N_f, h_N_b, "cos(#alpha)", ";e^{+} momentum [MeV];Entries", ("../Images/g2/ForwardsBackwards_"+boostLabel).c_str());

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

		float eA = sqrt((1-pow(A,2))/(N_1+N_2));

		if(N==0) continue;

		A_.push_back(A);
		p_.push_back(p_1);
		zeros_.push_back(0.);

		h_N->SetBinContent(i_bin+1, N);
		h_A->SetBinContent(i_bin+1, A);
		h_NA2->SetBinContent(i_bin+1, NA2);

		h_A->SetBinError(i_bin+1, eA);

	}

	vector<TH1F*> hists_ = {h_N, h_A, h_NA2};
	vector<string> labels_ = {"N", "A", "NA^{2}"};

	DrawManyHists(hists_, labels_, ";e^{+} momentum [MeV]; Events", "../Images/g2/DiffDecayAsymHists_"+boostLabel,  false, false, false, true);
	DrawManyHists(hists_, labels_, ";e^{+} momentum [MeV]; Normalised events", "../Images/g2/NormDiffDecayAsymHists_"+boostLabel, false, true, true, true);

	//h_A->Scale(1./h_A->GetMaximum());
	FitAsym(h_A, false, boostLabel);

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
	// TH1F *h_A = new TH1F("h_A",";Track momentum [MeV];Entries",300,0,3000);
	// TH1F *h_N = new TH1F("h_N",";Track momentum [MeV];Entries",300,0,3000);
	// TH1F *h_NA2 = new TH1F("h_NA2",";Track momentum [MeV];Entries",300,0,3000); 

	TH1F *h_A = new TH1F("h_A",";Track momentum [MeV];Entries",int(PMAX/10),0,int(PMAX*boostFactor));//300,0,PMAX);
	TH1F *h_N = new TH1F("h_N",";Track momentum [MeV];Entries",int(PMAX/10),0,int(PMAX*boostFactor));//300,0,PMAX);
	TH1F *h_NA2 = new TH1F("h_NA2",";Track momentum [MeV];Entries",int(PMAX/10),0,int(PMAX*boostFactor));//300,0,PMAX); 

	vector<TH1F*> hists_ = {h_N, h_A, h_NA2};

	vector<string> labels_ = {"N(#lambda)", "A(#lambda)", "NA^{2}(#lambda)"};

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
		// Same as ratio method
		float eA = sqrt((1-pow(A,2))/(N_1+N_2));

		if(N==0) continue;

		//if(A < 0) continue;

		A_.push_back(A);
		p_.push_back(p_1);
		zeros_.push_back(0.);

		h_N->SetBinContent(i_bin+1, N);
		h_A->SetBinContent(i_bin+1, A);
		h_NA2->SetBinContent(i_bin+1, NA2);

		h_A->SetBinError(i_bin+1, eA);

	}

	// Rebin out the noise 
	Int_t n_rebin = 15;
	cout<<"...Re-binning EDM hists by "<<n_rebin<<endl;

	h_N->Rebin(n_rebin);
	h_A->Rebin(n_rebin);
	h_NA2->Rebin(n_rebin);

	bool topLegend = false;
	if(boost) topLegend = true;

	DrawManyHists(hists_, labels_, ";#lambda = p/p_{max}; Events", "../Images/edm/DiffDecayAsymHists_"+boostLabel, true, false, false, topLegend);
	DrawManyHists(hists_, labels_, ";#lambda = p/p_{max}; Normalised events", "../Images/edm/NormDiffDecayAsymHists_"+boostLabel, true, true, true, topLegend);


	// Perform fit
	if(!boost) h_A->GetYaxis()->SetRangeUser(0,.70);
	FitAsym(h_A, true, boostLabel);
	
	delete h_N;
	delete h_A;
	delete h_NA2;

	return;
	
}

int main() { 

	string boostLabel = "";

	if(boost) boostLabel += "MRF_TEST";
	else if(!boost) boostLabel += "LAB_TEST";

	string fname = "../Plots/decayNTuplePlots_Full_"+boostLabel+".root";
	TFile *fin = TFile::Open(fname.c_str()); 

	cout<<"...Start\n**********************************\nFrame is "<<boostLabel<<". File is "<<fname<<", "<<fin<<"\n**********************************"<<endl;

	cout<<"Got file "<<fname<<", "<<fin<<endl;

	cout<<"**********************************\nRunning g-2 asymmetry\n**********************************"<<endl;

	RunG2Asym(fin, boostLabel);

	cout<<"**********************************\nRunning EDM asymmetry\n**********************************"<<endl;

	DrawDeltaThetaHist((TH1F*)fin->Get("angles/h_deltaTheta"), boostLabel); 

	RunEDMAsym(fin, boostLabel);

	cout<<"\n**********************************\nEnd.\n**********************************"<<endl;

	return 0;

}

/*void DrawTH1(TH1F *hist, std::string title, std::string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	hist->SetTitle(title.c_str());

	//hist->SetStats(0);
	gStyle->SetOptStat(2210);
			
	hist->GetXaxis()->SetTitleSize(.04);
	hist->GetYaxis()->SetTitleSize(.04);
	hist->GetXaxis()->SetTitleOffset(1.1);
	hist->GetYaxis()->SetTitleOffset(1.1);
	hist->GetXaxis()->CenterTitle(1);
	hist->GetYaxis()->CenterTitle(1);
	hist->GetYaxis()->SetMaxDigits(4);
	//hist->SetLineWidth(3);
	hist->SetLineColor(1);

	//c->SetRightMargin(0.13);

	hist->Draw("E");
	
	c->SaveAs((fname+".C").c_str());
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());

	delete c;

	return;
}*/