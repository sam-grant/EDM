#include <iostream>

#include "RootInclude.h"
#include "Utils.h"
#include "FancyDraw.h"

using namespace std;

double DoubleExponentialFunc(double *x, double *par) {

  double A = par[0]; 
  double tauA = par[1];
  double B = par[2];
  double tauB = par[3];
  double c = par[4];

  return (A/tauA)*TMath::Exp(-x[0]/tauA) + (B/tauB)*TMath::Exp(-x[0]/tauB) + c;

}

void DoubleExponentialFit(TGraphErrors *graph, double p1, double e1, double p3, double e3, double xmin, double xmax) {
  
  TF1 *fit = new TF1("DoubleExponentialFunc", DoubleExponentialFunc, xmin, xmax, 5);

  // Keep these fixed to Mottys values
  fit->FixParameter(1, p1); // tauA
  fit->FixParameter(3, p3); // tauB

  graph->Fit(fit, "QMR");

  return;

}

void DrawFitGraph(TGraphErrors *graph, std::string dataset, std::string title, std::string fname, double xmin, double xmax, int pLo, int pHi) {

  TF1 *fit = (TF1*)graph->GetFunction("DoubleExponentialFunc");

  double chi2ndf = fit->GetChisquare() / fit->GetNDF();
  double par0 = fit->GetParameter(0); double err0 = fit->GetParError(0);
  double par1 = fit->GetParameter(1); double err1 = fit->GetParError(1);
  double par2 = fit->GetParameter(2); double err2 = fit->GetParError(2);
  double par3 = fit->GetParameter(3); double err3 = fit->GetParError(3);
  double par4 = fit->GetParameter(4); double err4 = fit->GetParError(4);

  // TLegend *leg = new TLegend(0.30,0.15,.89,0.25);
  // TLegend *leg = new TLegend(0.30,0.15,.89,0.20);
  TLegend *leg = new TLegend(0.21,0.15,.79,0.20);
  leg->SetBorderSize(0);
  leg->SetNColumns(2);
  leg->AddEntry(graph, ("Data: "+dataset+" ").c_str());
  leg->AddEntry(fit,"(A/#tau_{A})e^{-t/#tau_{A}}#plus(B/#tau_{B})e^{-t/#tau_{B}}#plusc");

  TPaveText *names = new TPaveText(0.15,0.60,0.25,0.89,"NDC"); 
  names->SetTextAlign(13);
  names->AddText("#chi^{2}/ndf"); 
  names->AddText("A [mrad]"); 
  names->AddText("#tau_{A} [#mus]"); 
  names->AddText("B [mrad]"); 
  names->AddText("#tau_{B} [#mus]"); 
  names->AddText("c [mrad]"); 

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

  TPaveText *cuts = new TPaveText(0.60,0.70,0.80,0.80,"NDC");
  cuts->SetTextAlign(22);
  cuts->AddText((to_string(pLo)+" < p [MeV] < "+to_string(pHi)).c_str());

  cuts->SetTextSize(26);
  cuts->SetTextFont(44);
  cuts->SetFillColor(0);

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

  graph->GetYaxis()->SetRangeUser(par4-.5, par4+.75);
  graph->GetXaxis()->SetRangeUser(xmin+G2PERIOD/2, 300);
  //graph->GetXaxis()->SetRangeUser(0, xmax);

  graph->Draw("AP");

  names->Draw("SAME");
  values->Draw("SAME");
  cuts->Draw("SAME");
  leg->Draw("SAME");

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}

/*void DrawFitGraph(TGraphErrors *graph, std::string dataset, std::string title, std::string fname, double xmin, double xmax, int pLo, int pHi) {

  TF1 *fit = (TF1*)graph->GetFunction("DoubleExponentialFunc");

  double chi2ndf = fit->GetChisquare() / fit->GetNDF();
  double par0 = fit->GetParameter(0); double err0 = fit->GetParError(0);
  double par1 = fit->GetParameter(1); double err1 = fit->GetParError(1);
  double par2 = fit->GetParameter(2); double err2 = fit->GetParError(2);
  double par3 = fit->GetParameter(3); double err3 = fit->GetParError(3);
  double par4 = fit->GetParameter(4); double err4 = fit->GetParError(4);

  // TLegend *leg = new TLegend(0.30,0.15,.89,0.25);
  // TLegend *leg = new TLegend(0.30,0.15,.89,0.20);
  TLegend *leg = new TLegend(0.21,0.15,.79,0.20);
  leg->SetBorderSize(0);
  leg->SetNColumns(2);
  leg->AddEntry(graph, ("Data: "+dataset+" ").c_str());
  leg->AddEntry(fit,"(A/#tau_{A})e^{-t/#tau_{A}}#plus(B/#tau_{B})e^{-t/#tau_{B}}#plusc");

  TPaveText *names = new TPaveText(0.15,0.60,0.25,0.89,"NDC"); 
  names->SetTextAlign(13);
  names->AddText("#chi^{2}/ndf"); 
  names->AddText("A [mrad]"); 
  names->AddText("#tau_{A} [#mus]"); 
  names->AddText("B [mrad]"); 
  names->AddText("#tau_{B} [#mus]"); 
  names->AddText("c [mrad]"); 

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

  TPaveText *cuts = new TPaveText(0.60,0.70,0.80,0.80,"NDC");
  cuts->SetTextAlign(22);
  cuts->AddText((to_string(pLo)+" < p [MeV] < "+to_string(pHi)).c_str());

  cuts->SetTextSize(26);
  cuts->SetTextFont(44);
  cuts->SetFillColor(0);

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

  graph->GetYaxis()->SetRangeUser(par4-.5, par4+.75);
  graph->GetXaxis()->SetRangeUser(xmin+G2PERIOD/2, xmax);
  //graph->GetXaxis()->SetRangeUser(0, xmax);

  graph->Draw("AP");

  names->Draw("SAME");
  values->Draw("SAME");
  cuts->Draw("SAME");
  leg->Draw("SAME");

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}*/

void DrawAllParameters(vector<double> p_, vector<double> A_, vector<double> eA_, vector<double> B_, vector<double> eB_, vector<double> c_, vector<double> ec_, std::string dataset, std::string title, std::string fname) { // , double ymin, double ymax) { 

  vector<double> zeros_;
  for(auto& i : p_) zeros_.push_back(0.);

  TGraphErrors *gr_A = GenerateTGraphErrors(p_, A_, zeros_, eA_);
  TGraphErrors *gr_B = GenerateTGraphErrors(p_, B_, zeros_, eB_);
  TGraphErrors *gr_C = GenerateTGraphErrors(p_, c_, zeros_, ec_);

  TCanvas *c = new TCanvas("c","c",800,600);

  gr_A->SetTitle(title.c_str());
  gr_A->GetXaxis()->SetTitleSize(.04);
  gr_A->GetYaxis()->SetTitleSize(.04);
  gr_A->GetXaxis()->SetTitleOffset(1.1);
  gr_A->GetYaxis()->SetTitleOffset(1.2);
  gr_A->GetXaxis()->CenterTitle(true);
  gr_A->GetYaxis()->CenterTitle(true);
  gr_A->GetYaxis()->SetMaxDigits(4);
  
  gr_A->SetMarkerStyle(20); //  Full circle
  gr_B->SetMarkerStyle(20);
  gr_C->SetMarkerStyle(20);

  gr_A->SetMarkerColor(kBlack); 
  gr_B->SetMarkerColor(kRed);
  gr_C->SetMarkerColor(kBlue);

  gr_A->SetLineColor(kBlack); 
  gr_B->SetLineColor(kRed);
  gr_C->SetLineColor(kBlue);


  double ymin = 1e6;
  double ymax = -1e6;
  vector<TGraphErrors*> gr_ = {gr_A, gr_B, gr_C};

  for (auto& gr : gr_) {

    int n = gr->GetN();

    for (int i(0); i<n; i++) { 

      double y = gr->GetY()[i];
      double ey = gr->GetEY()[i];

      if(y-ey < ymin) ymin = y-ey;
      if(y+ey > ymax) ymax = y+ey;

    }

  }

  ymax = ymax + abs(ymax*0.25);
  ymin = ymin - abs(ymin*0.25);

  gr_A->GetYaxis()->SetRangeUser(ymin, ymax);

  gr_A->Draw("AP");
  gr_B->Draw("P SAME");
  gr_C->Draw("P SAME");

  TLegend *leg = new TLegend(0.625, 0.75, 0.875, 0.89);
  leg->SetBorderSize(0);
  leg->SetNColumns(3);

  leg->SetHeader(("Data: "+dataset).c_str(), "C");
  leg->AddEntry(gr_A, "A");
  leg->AddEntry(gr_B, "B");
  leg->AddEntry(gr_C, "c");

  leg->Draw("SAME");

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}

void DrawSingleParameter(vector<double> x_, vector<double> y_, vector<double> ey_, std::string dataset, std::string title, std::string fname, double ymin, double ymax) { 

  vector<double> zeros_;
  for(auto& i : x_) zeros_.push_back(0.);

  TGraphErrors *gr = GenerateTGraphErrors(x_, y_, zeros_, ey_);

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
  gr->SetMarkerColor(kBlack); 

  gr->GetYaxis()->SetRangeUser(ymin, ymax);

  gr->Draw("AP");

  gPad->Update();

  TLine *zero = new TLine(gPad->GetUxmin(), 0, gPad->GetUxmax(), 0);
  //zero->SetLineWidth(3);
  zero->SetLineColor(kGray);
  zero->SetLineStyle(2);
  zero->Draw();

  gr->Draw("P SAME");

  TLegend *leg = new TLegend(0.65, 0.75, 0.85, 0.89);
  leg->SetBorderSize(0);
  
  leg->AddEntry(gr, dataset.c_str());

  leg->Draw("SAME");

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}

void FitDataset(TGraphErrors *gr, std::string dataset, double xmin = 7*G2PERIOD, double xmax = 70*G2PERIOD) {

  // Params reported by Mott.
  if(dataset=="Run-1a") DoubleExponentialFit(gr, 59.6, 1.4, 6.57, 0.07, xmin, xmax);
  if(dataset=="Run-1b") DoubleExponentialFit(gr, 44.6, 1.1, 6.43, 0.09, xmin, xmax);
  if(dataset=="Run-1c") DoubleExponentialFit(gr, 79.8, 1.0, 6.99, 0.05, xmin, xmax);
  if(dataset=="Run-1d") DoubleExponentialFit(gr, 79.8, 0.6, 7.34, 0.04, xmin, xmax);

  return; 

}

void Run(std::string dataset, int step, bool write) {

  // Set output file
  TString foutName = "../Plots/Data/dMu/Run-1/Fits/verticalOffsetFits_"+dataset+"_"+to_string(step)+"MeV_BQ.root";
  if(!write) foutName = "delete_me.root";

  TFile *fout = new TFile(foutName, "RECREATE");
  fout->mkdir("MainPlots"); fout->mkdir("MomBinnedAna");

  cout<<"Created output file"<<endl;

  // Ignore the first point, I don't trust
  double xmin = 2*G2PERIOD; // gr->GetX()[10];
  double xmax = 150*G2PERIOD; // 300; //gr->GetX()[gr->GetN()-1];

  // TString finName = "../Plots/Data/dMu/Run-1/Plots/edmPlots_"+dataset+"_125MeV_BQ.root";
  TString finName = "../Plots/Data/dMu/Run-1/Plots/verticalOffsetHists_"+dataset+"_"+to_string(step)+"MeV_BQ.root";
  TFile *fin = TFile::Open(finName);

  cout<<"Reading input file "<<finName<<", "<<fin<<endl;

  vector<string> stn_ = {"S12", "S18", "S12S18"};

  // Slice momentum
  int nSlices = PMAX/step;

  for(auto& stn : stn_) { 

    // TString h2Name = "MainPlots/"+stn+"_ThetaY_vs_Time";
    TString h2Name = "MainPlots/"+stn+"_ThetaY_vs_Time";
    TH2D *h2 = (TH2D*)fin->Get(h2Name);

    cout<<"Got 2D hist "<<h2Name<<", "<<h2<<endl;

    TH1D *px = h2->ProfileX();

    int nBins = px->GetNbinsX();
    double binWidth = px->GetBinWidth(1);

    // cout<<"Made profile "<<px<<" with "<<px->GetNbinsX()<<" bins and binwidth "<<px->GetBinWidth(1)<<endl;

    // Rebinning. Currently not using.
    if(false) {
      px->RebinX(30); //G2PERIOD/px->GetBinWidth(1));
      cout<<"Rebinned profile "<<px<<" with "<<px->GetNbinsX()<<" bins and binwidth "<<px->GetBinWidth(1)<<endl;
    }

    TGraphErrors *gr = ConvertToTGraphErrors(px);
    FitDataset(gr, dataset, xmin, xmax);
    DrawFitGraph(gr, dataset, stn+";Decay time [#mus];#LT#theta_{y}#GT [mrad] / 4.365 #mus", "../Images/Data/dMu/Run-1/VerticalOffset/MainPlots/"+stn+"_ThetaYvsTimeFit_"+dataset+"_BQ", xmin, xmax, 750, 2750);

    // To be honest, everything below this point if kind of useless. 

    // Get residual
    TF1 *fit = (TF1*)gr->GetFunction("DoubleExponentialFunc");
    TH1D *h_res = GetResidual(px, fit);

    // Get FFT 
    TH1D *h_FFT = GetFFT(h_res);

    DrawTH1(h_res, stn+";Decay time [#mus];Fit residual [mrad]",  "../Images/Data/dMu/Run-1/VerticalOffset/MainPlots/"+stn+"_ThetaYvsTimeFitResidual_"+dataset+"_BQ");
    // DrawTH1(h_FFT, stn+";Frequency [MHz];FFT magnitude", "../Images/Data/dMu/Run-1/VerticalOffset/MainPlots/"+stn+"_ThetaYvsTimeFitResidualFFT_"+dataset+"_BQ");

    fout->cd("MainPlots");
    gr->SetName((stn+"_ThetaY_vs_Time_Fit").c_str());
    gr->Write();

    fout->cd("MomBinnedAna"); 

    // Holders for parameters
    vector<double> p_; 
    vector<double> A_; vector<double> B_; vector<double> c_;
    vector<double> eA_; vector<double> eB_; vector<double> ec_;

    // Momentum slices
    for ( int i_slice = 0; i_slice < nSlices; i_slice++ ) { 

      int lo = 0 + i_slice*step; 
      int hi = step + i_slice*step;

      TString h2SliceName = "MomSlices/"+stn+"_ThetaY_vs_Time_"+std::to_string(lo)+"_"+std::to_string(hi);
      TH2D *h2Slice = (TH2D*)fin->Get(h2SliceName);
      TH1D *pxSlice = h2Slice->ProfileX();
      TGraphErrors *grSlice = ConvertToTGraphErrors(pxSlice);
      FitDataset(grSlice, dataset, xmin, xmax);

      grSlice->SetName((stn+"_ThetaY_vs_Time_Fit_"+std::to_string(lo)+"_"+std::to_string(hi)).c_str());
      grSlice->Write();
      DrawFitGraph(gr, dataset, stn+", "+std::to_string(lo)+" < p [MeV] < "+std::to_string(hi)+";Decay time [#mus];#LT#theta_{y}#GT [mrad] / 4.365 #mus", "../Images/Data/dMu/Run-1/VerticalOffset/MomBinnedAna/"+stn+"_ThetaYvsTimeFit_"+dataset+"_"+std::to_string(lo)+"_"+std::to_string(hi)+"_BQ", xmin, xmax, lo, hi);

      TF1 *fit = grSlice->GetFunction("DoubleExponentialFunc");

      if(fit!=0) { 
        double p = (hi+lo)/2;
        if(p<500 || p>2800) continue;
        p_.push_back(p);
        A_.push_back(fit->GetParameter(0)); eA_.push_back(fit->GetParError(0));  
        B_.push_back(fit->GetParameter(2)); eB_.push_back(fit->GetParError(2));  
        c_.push_back(fit->GetParameter(4)); ec_.push_back(fit->GetParError(4));  
      }

    }

    DrawAllParameters(p_, A_, eA_, B_, eB_, c_, ec_, dataset, stn+";Decay vertex momentum [MeV];Parameter value [mrad]", "../Images/Data/dMu/Run-1/VerticalOffset/MainPlots/"+stn+"_ParametersVsMomentum_"+dataset+"_BQ");//, -125, +75);
    DrawSingleParameter(p_, c_, ec_, dataset, stn+";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad]", "../Images/Data/dMu/Run-1/VerticalOffset/MainPlots/"+stn+"_AverageVerticalOffsetVsMomentum_"+dataset+"_BQ", -1.5, +2.5);

  }

  fin->Close();
  fout->Close();

  cout<<"Written results to output file "<<foutName<<", "<<fout<<endl;
  return;

}

int main() { 

  Run("Run-1a", 250, true);
  Run("Run-1b", 250, true);
	Run("Run-1c", 250, true);
	Run("Run-1d", 250, true);

  return 0;

}
