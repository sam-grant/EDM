#include "Utils.h"

double DoubleExponentialFunc(double *x, double *par) {

	double c = par[0];
	double A = par[1]; 
	double tauA = par[2];
	double B = par[3];
	double tauB = par[4];

  	return c - (A/tauA)*TMath::Exp(-x[0]/tauA) - (B/tauB)*TMath::Exp(-x[0]/tauB);

}

void DoubleExponentialFit(TGraphErrors *graph, double p0, double p1, double p2, double p3, double p4, double xmin, double xmax) {
  
  TF1 *fit = new TF1("DoubleExponentialFunc", DoubleExponentialFunc, xmin, xmax, 5);

  //fit->SetParameters(p0, p1, p2, p3, p4);
  //fit->FixParameter(0, p0);
  //fit->FixParameter(1, p1);
  fit->FixParameter(2, p2); // tauA
  //fit->FixParameter(3, p3);
  fit->FixParameter(4, p4); // tauB

  graph->Fit(fit, "MR");

  return;

}

void DrawGraph(TGraphErrors *graph, std::string dataset, std::string title, std::string fname) {

	TF1 *fit = (TF1*)graph->GetFunction("DoubleExponentialFunc");

  double chi2ndf = fit->GetChisquare() / fit->GetNDF();
  double par0 = fit->GetParameter(0); double err0 = fit->GetParError(0);
  double par1 = fit->GetParameter(1); double err1 = fit->GetParError(1);
  double par2 = fit->GetParameter(2); double err2 = fit->GetParError(2);
  double par3 = fit->GetParameter(3); double err3 = fit->GetParError(3);
  double par4 = fit->GetParameter(4); double err4 = fit->GetParError(4);

	TLegend *leg = new TLegend(0.30,0.15,.89,0.25);
  leg->SetBorderSize(0);
  leg->SetNColumns(2);
  leg->AddEntry(graph, (dataset+" ").c_str());
  leg->AddEntry(fit,"c#minus(A/#tau_{A})e^{-t/#tau_{A}}#minus(B/#tau_{B})e^{-t/#tau_{B}}");

	TPaveText *names = new TPaveText(0.11,0.60,0.25,0.89,"NDC"); 
	names->SetTextAlign(13);
	names->AddText("#chi^{2}/ndf"); 
	names->AddText("c [mrad]"); 
	names->AddText("A [mrad]"); 
	names->AddText("#tau_{A} [#mus]"); 
	names->AddText("B [mrad]"); 
	names->AddText("#tau_{B} [#mus]"); 

	names->SetTextSize(26);
	names->SetTextFont(44);
	names->SetFillColor(0);

	TPaveText *values = new TPaveText(0.35,0.60,0.50,0.89,"NDC");
	values->SetTextAlign(33);
	values->AddText(Round(chi2ndf, 3));
	values->AddText(Round(par0, 3)+"#pm"+Round(err0, 1)); 
	values->AddText(Round(par1, 3)+"#pm"+Round(err1, 1)); 
	values->AddText(Round(par2, 3)+"#pm"+Round(err2, 1)); 
	values->AddText(Round(par3, 3)+"#pm"+Round(err3, 1)); 
	values->AddText(Round(par4, 3)+"#pm"+Round(err4, 1)); 

	values->SetTextSize(26);
	values->SetTextFont(44);
	values->SetFillColor(0);

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

 // graph->GetYaxis()->SetRangeUser(-2.5, 2.5);
  //graph->GetXaxis()->SetRangeUser(750, 2500);

  graph->Draw("AP");

  names->Draw("SAME");
  values->Draw("SAME");
  leg->Draw("SAME");

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}

void Run(std::string dataset) { 

	double OMEGA_A = 0.00143934; // kHz from gm2const
	double G2PERIOD = (2 * TMath::Pi() / OMEGA_A) * 1e-3; // 4.3653239 us 

	// TString finName = "../Plots/Data/dMu/Run-1/Plots/edmPlots_"+dataset+"_125MeV_BQ.root";
	TString finName = "../Plots/Data/dMu/Run-1/Plots/verticalOffsetHists_"+dataset+".root";
	TFile *fin = TFile::Open(finName);

	cout<<"Got input file "<<finName<<", "<<fin<<endl;

	TString foutName = "../Plots/Data/dMu/Run-1/Fits/VerticalOffsetVsTime_"+dataset+".root";
	TFile *fout = new TFile(foutName, "RECREATE");

	cout<<"Got output file "<<foutName<<", "<<fout<<endl;

	vector<string> stn_ = {"S12", "S18", "S12S18"};

	for(auto& stn : stn_) { 

		// TString h2Name = "MainPlots/"+stn+"_ThetaY_vs_Time";
		TString h2Name = "VerticalOffsetPlots/"+stn+"_ThetaY_vs_Time";
		TH2D *h2 = (TH2D*)fin->Get(h2Name);

		cout<<"Got 2D hist "<<h2Name<<", "<<h2<<endl;

		TH1D *px = h2->ProfileX();

		int nBins = px->GetNbinsX();
		double binWidth = px->GetBinWidth(1);

		cout<<"Made profile "<<px<<" with "<<px->GetNbinsX()<<" bins and binwidth "<<px->GetBinWidth(1)<<endl;

		// Rebinning 
		if(false) {
			px->RebinX(30); //G2PERIOD/px->GetBinWidth(1));
			cout<<"Rebinned profile "<<px<<" with "<<px->GetNbinsX()<<" bins and binwidth "<<px->GetBinWidth(1)<<endl;
		}

		TGraphErrors *gr = ConvertToTGraphErrors(px);

		cout<<"Made graph "<<gr<<endl;

		cout<<"Fitting"<<endl;

		double xmin = gr->GetX()[0];
		double xmax = gr->GetX()[gr->GetN()-1];

		if(dataset=="Run-1a") DoubleExponentialFit(gr, 0, 0, 59.6, 0, 6.57, xmin, xmax);
		if(dataset=="Run-1b") DoubleExponentialFit(gr, 0, 0, 44.6, 0, 6.43, xmin, xmax);
		if(dataset=="Run-1c") DoubleExponentialFit(gr, 0, 0, 79.8, 0, 6.99, xmin, xmax);
		if(dataset=="Run-1d") DoubleExponentialFit(gr, 0, 0, 79.8, 0, 7.34, xmin, xmax);

		DrawGraph(gr, dataset, stn+";Decay time [#mus];#LT#theta_{y}#GT [mrad] / 4.365 #mus", "../Images/Data/dMu/Run-1/ThetaYvsTime/"+stn+"_ThetaYvsTimeFit_"+dataset+"_BQ");


	}

	fin->Close();
	fout->Close();

	return; 

}

void VerticalOffsetVsTime() { 

	Run("Run-1a");
	Run("Run-1b");
	Run("Run-1c");
	Run("Run-1d");

	return;
}
