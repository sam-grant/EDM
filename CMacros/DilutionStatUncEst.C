

/*S18, 0, 1011877
S12S18, 0, 2041272
S0S12S18, 0, 3094254
S12, 1, 1924801
S18, 1, 1894967
S12S18, 1, 3819768
S0S12S18, 1, 5792064
S12, 2, 2710246
S18, 2, 2668969
S12S18, 2, 5379215
S0S12S18, 2, 8156705
S12, 3, 3464365
S18, 3, 3411592
S12S18, 3, 6875957
S0S12S18, 3, 10427824
S12, 4, 4853159
S18, 4, 4778279
S12S18, 4, 9631438
S0S12S18, 4, 13183305
*/

#include <numeric>
#include <algorithm>
#include "Utils.h"

void DrawGraph(TGraphErrors *gr, TF1 *f1,  std::string title, std::string fname) {

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

	//gr->GetXaxis()->SetRangeUser(gr->GetX()[0]-100, gr->GetX()[gr->GetN()-1]+100);
	gr->Draw("AP");

	TLegend *l = new TLegend(.24, .79, .50, .89);
	l->SetNColumns(2);
	l->SetBorderSize(0);
	l->SetTextSize(28);
	l->SetTextFont(44);

	l->AddEntry(gr, "Sim");
	l->AddEntry(f1, "#frac{a}{#sqrt{N}}");
	//l->SetTextSize(23);

	l->Draw("SAME");


  	TPaveText *names = new TPaveText(0.55,0.73,0.69,0.89,"NDC");

  	names->SetTextAlign(13);
  	names->AddText("#chi^{2}/ndf");
  	names->AddText("a");
  	//names->AddText("b"); 


  	TPaveText *values = new TPaveText(0.75,0.75,0.89,0.89,"NDC");
 	values->SetTextAlign(33);
  	values->AddText(Round(f1->GetChisquare()/f1->GetNDF(), 3));
  	values->AddText("(2.03#pm0.02)#times10^{4}");//f1->GetParameter(0), 3)+"#pm"+Round(f1->GetParError(0), 1));//"(3.6#pm0.3)#times10^{4}");////
   	//values->AddText("#minus0.4#pm0.7");//f1->GetParameter(1), 1)+"#pm"+Round(f1->GetParError(1), 1));//"#minus5.0#pm0.9");//Round(f1->GetParameter(1), 1)+"#pm"+Round(f1->GetParError(1), 1));

  	names->SetTextSize(26);
  	names->SetTextFont(44);
  	names->SetFillColor(0);
  	values->SetFillColor(0);
  	values->SetTextFont(44);
  	values->SetTextSize(26);


  	names->Draw("SAME");
  	values->Draw("SAME");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

TGraph *GetDeltaVsN(vector<int> N_, vector<double> delta_) { 

	TGraph *gr = new TGraph();
  	for(int i = 0; i < N_.size(); i++) gr->SetPoint(i, N_.at(i), delta_.at(i)*100);
  	return gr; 

}

/*	vector<double> y_ = {100, 6.44, 5.48};
	vector<double> x_ = {0, 1.04e07, 1.32e07};

	for(int i(0); i<x_.size(); i++) gr->SetPoint(i, x_.at(i), y_.at(i));

	TF1 *f1 = new TF1("f1", "[0]/sqrt(x)", -1e6, 1.32e07);
	f1->SetParameter(0, 22079.3);
	f1->SetParLimits(0, 2.2e4, 2.3e4);
	
	gr->Fit(f1);

	DrawTGraph(gr, f1, ";Number of tracks;Percentage error [%]", "../Images/MC/dMu/DilutionUncertaintyEstimates/Run_1d_graph");

	double p0 = f1->GetParameter(0);

	double target = 6.44/2;

	double N = pow(p0/target, 2);

	double inc = N-x_.at(x_.size()-1);

	double per1000 = 300e3;
	int nJob = (inc/per1000)*1000;

	cout<<"Tracks required to reach "<<target<<" percent error: "<<N<<endl;
	cout<<"This is "<<inc<<" more, "<<inc/x_.at(x_.size()-1)<<" times as current"<<endl;
	cout<<"We need "<<nJob<<" more jobs"<<endl;
*/







void Overlay(vector<TGraph*> gr_, string title, string fname, vector<string> names_) {

	TCanvas *c = new TCanvas("c","c",800,600);
	c->SetRightMargin(0.20);

	//TLegend *l = new TLegend(0.81,0.35,0.99,0.65);
	TLegend *l = new TLegend(0.81,0.15,0.99,0.85);
	l->SetBorderSize(0);

	gr_.at(0)->SetTitle(title.c_str());
	gr_.at(0)->GetXaxis()->SetTitleSize(.04);
	gr_.at(0)->GetYaxis()->SetTitleSize(.04);
	gr_.at(0)->GetXaxis()->SetTitleOffset(1.1);
	gr_.at(0)->GetYaxis()->SetTitleOffset(1.1);
	gr_.at(0)->GetXaxis()->CenterTitle(true);
	gr_.at(0)->GetYaxis()->CenterTitle(true);
	gr_.at(0)->GetYaxis()->SetMaxDigits(4);
	//gr_.at(0)->GetYaxis()->SetRangeUser(ymin,ymax);

	int nGraphs = gr_.size();

	

	gStyle->SetPalette(kBird);

	for(int i = 0; i < nGraphs; i++) {
    	gr_.at(i)->SetMarkerStyle(20);
    	l->AddEntry(gr_.at(i), (names_.at(i)).c_str());
      	if(i==0) gr_.at(i)->Draw("AP PLC PMC");
      	else gr_.at(i)->Draw("P PLC PMC SAME");
  	}

	l->Draw("same");
	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

double average(std::vector<double> const& v){

    if(v.empty()){
        return 0;
    }

    auto const count = static_cast<double>(v.size());
    return std::reduce(v.begin(), v.end()) / count;
}

double range(std::vector<double> const& v) { 

	double max = *max_element(v.begin(), v.end()); 
	double min = *min_element(v.begin(), v.end()); 
	
	cout<<max<<", "<<min<<endl;
	return max - min;

}

TGraphErrors *GetTotGraph(vector<TGraph*> gr_) {

	TGraphErrors *gr = new TGraphErrors();

	for (int i(0); i<gr_.at(0)->GetN(); i++) {

		double x = gr_.at(0)->GetX()[i]; double ex = 0; 

		vector<double> y_;

		for (auto& gr : gr_) y_.push_back(gr->GetY()[i]);

		// Get mean 
		double y = average(y_);
		// Get range
		double ey = range(y_)/2;

		gr->SetPoint(i, x, y);
		gr->SetPointError(i, ex, ey);
	}

	return gr;
}

void DilutionStatUncEst() { 

//	// Input data
//	vector<int> N_ = {3094254, 5792064, 8156705, 10427824, 13183305};
//
//	// Fractional errors
//	vector<double> delta1a_ = {3.09E-19/1.84E-18, 1.26E-19/1.40E-18, 9.23E-20/1.32E-18, 8.96E-20/1.36E-18, 7.62E-20/1.34E-18}; 
//	vector<double> delta1b_ = {3.01E-19/1.75E-18, 1.13E-19/1.28E-18, 8.29E-20/1.19E-18, 8.04E-20/1.24E-18, 6.83E-20/1.23E-18};
//	vector<double> delta1c_ = {4.27E-19/2.59E-18, 1.81E-19/2.14E-18, 1.35E-19/1.97E-18, 1.30E-19/2.08E-18, 1.11E-19/2.10E-18};
//	vector<double> delta1d_ = {3.73E-19/2.20E-18, 1.55E-19/1.76E-18, 1.14E-19/1.61E-18, 1.11E-19/1.72E-18, 9.38E-20/1.73E-18};


	// Input data
	vector<int> N_ = {5792064, 8156705, 10427824, 13183305};

	// Fractional errors
	vector<double> delta1a_ = {1.26E-19/1.40E-18, 9.23E-20/1.32E-18, 8.96E-20/1.36E-18, 7.62E-20/1.34E-18}; 
	vector<double> delta1b_ = {1.13E-19/1.28E-18, 8.29E-20/1.19E-18, 8.04E-20/1.24E-18, 6.83E-20/1.23E-18};
	vector<double> delta1c_ = {1.81E-19/2.14E-18, 1.35E-19/1.97E-18, 1.30E-19/2.08E-18, 1.11E-19/2.10E-18};
	vector<double> delta1d_ = {1.55E-19/1.76E-18, 1.14E-19/1.61E-18, 1.11E-19/1.72E-18, 9.38E-20/1.73E-18};


	vector<TGraph *> gr_ = {GetDeltaVsN(N_, delta1a_), GetDeltaVsN(N_, delta1b_), GetDeltaVsN(N_, delta1c_), GetDeltaVsN(N_, delta1d_)};

	Overlay(gr_, ";Number of tracks;Dilution uncertainty [%]", "../Images/MC/dMu/DilutionUncertaintyEstimates/DataSetOverlay", {"Run-1a", "Run-1b", "Run-1c", "Run-1d"});

	TGraphErrors *grTot = GetTotGraph(gr_);

	TF1 *f1 = new TF1("f1", "[0]/sqrt(x)", N_.at(0), N_.at(N_.size()-1));
	f1->SetParameter(0, 2.0e+04);//3.55676e+04);
	//f1->SetParameter(1, -5);//-5.03528e+00);
	grTot->Fit(f1, "R");

	DrawGraph(grTot, f1, ";Number of tracks;Dilution uncertainty [%]", "../Images/MC/dMu/DilutionUncertaintyEstimates/TotalFit");

	return;
}