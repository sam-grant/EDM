/*double Run(){
  
  TRandom3* rand = new TRandom3(0);

  double avgY = 0;
  int nbins = 32;

  int nTrials = 1000;
  int iTrial = 0;

  //datasize
  int n = 4.9E6; // 10.999638E6;//4.9E6; //E989 run 1a 10.999638E6;
  float nPerBin = n / float(nbins);
  
  //made up spread beam angles
  float sigma = 8.7E-3;//14.89; //10E-3; // 0.685 * 
  float sigY = sigma / sqrt(nPerBin);
    
  //histograms of fitted parameters
  float range = 5E-4;
  TH1F* A = new TH1F("A", ";A", 200, -range, range);
  TH1F* B = new TH1F("B", ";B", 200, -range, range);
  TH1F* C = new TH1F("C", ";C", 200, -range, range);

  TH1F* D = new TH1F("#delta A_{EDM}", "#sigma_{#theta_{y}} = 8.7 mrad, N_{trk} = 4.9 million;#delta A_{EDM} [rad];Trials", 200, 5.5e-06, 5.6e-06); // 6.348e-06, 6.35e-06);//);//6.3885e-06, 6.389e-06);
  
  //every 100
  vector<float> meanA;
  vector<float> meanB;
  vector<float> meanC;

  vector<float> sigA;
  vector<float> sigB;
  vector<float> sigC;

  vector<float> trial, trialE;

  while (iTrial < nTrials){
    vector<double> yValues;
    vector<double> yErrors;
    vector<double> xValues;
    vector<double> xErrors;
    
    //random number for each bin centred around avgY (assumes same entries in each bin)
    for (int ibin(0); ibin < nbins; ibin++){
      yValues.push_back(rand->Gaus(avgY, sigY));
      yErrors.push_back(sigY);
      xValues.push_back((float(ibin) + 0.5) / float(nbins));
      xErrors.push_back(0.0);
    }
    
    TGraphErrors* g = new TGraphErrors(nbins, xValues.data(), yValues.data(), xErrors.data(), yErrors.data());
    g->SetTitle("; x; <y>");
    g->SetMarkerStyle(8);
    
    TF1* f1 = new TF1("f1", "[0] + [1]*sin([3]*x) + [2]*cos([3]*x)", 0, 1.0);
    f1->SetParameters(0, 0.0001);
    f1->SetParameters(1, 0.0001);
    f1->SetParameters(2, 0.0001);
    f1->FixParameter(3, TMath::TwoPi());
    g->Fit(f1, "RQ");
    
    if (iTrial < 3){
      TCanvas* c1 = new TCanvas("c1", "", 800, 600);
      g->Draw("AP");
      c1->SaveAs(Form("../Images/tmp/tmp%i.png",iTrial));
      cout << f1->GetParameter(0) << ", " << f1->GetParameter(1) << " +/- " << f1->GetParError(1) << ", " << f1->GetParameter(2) << " +/- " << f1->GetParError(2) << "\n";
    }

    A->Fill(f1->GetParameter(1));
    B->Fill(f1->GetParameter(2));
    C->Fill(f1->GetParameter(0));
    D->Fill(f1->GetParError(2));

    //every 100 trials save mean and stddev of a, b an c
    if (iTrial > 0 && iTrial % 100 == 0){

      meanA.push_back(A->GetMean());
      meanB.push_back(B->GetMean());
      meanC.push_back(C->GetMean());
      
      sigA.push_back(A->GetStdDev() / sqrt(iTrial));
      sigB.push_back(B->GetStdDev() / sqrt(iTrial));
      sigC.push_back(C->GetStdDev() / sqrt(iTrial));

      trial.push_back(float(iTrial));
      trialE.push_back(0.0);
    }

    iTrial++;
  }

  TCanvas* c2 = new TCanvas("c2", "", 800, 600);

  A->Draw();
  c2->SaveAs("../Images/tmp/A.png");

  B->Draw();
  c2->SaveAs("../Images/tmp/B.png");

  C->Draw();
  c2->SaveAs("../Images/tmp/C.png");

  D->Draw();
  c2->SaveAs("../Images/tmp/D.png");

  TGraphErrors* mA = new TGraphErrors((int)trial.size(), trial.data(), meanA.data(), trialE.data(), sigA.data());
  mA->SetTitle("; trial; <A> #pm #sigma_{A}");
  mA->SetMarkerStyle(8);
  mA->SetMarkerColor(2);
  mA->SetLineColor(2);
  mA->Draw("AP");

  TGraphErrors* mB = new TGraphErrors((int)trial.size(), trial.data(), meanB.data(), trialE.data(), sigB.data());
  mB->SetTitle("; trial; Average #pm #sigma");
  mB->SetMarkerStyle(8);
  mB->SetMarkerColor(3);
  mB->SetLineColor(3);
  mB->Draw("P SAME");

  TGraphErrors* mC = new TGraphErrors((int)trial.size(), trial.data(), meanC.data(), trialE.data(), sigC.data());
  mC->SetTitle("; trial; <A> #pm #sigma_{A}");
  mC->SetMarkerStyle(8);
  mC->SetMarkerColor(4);
  mC->SetLineColor(4);
  mC->Draw("P SAME");

  TLegend* leg = new TLegend(0.8, 0.8, 0.89, 0.89);
  leg->SetBorderSize(0);
  leg->AddEntry(mA, "A", "PL");
  leg->AddEntry(mB, "B", "PL");
  leg->AddEntry(mC, "C", "PL");

  leg->Draw("SAME");

  c2->SaveAs("../Images/tmp/meanA_trial.png");
  c2->SaveAs("../Images/tmp/meanA_trial.C");
}*/

#include "Utils.h"
#include "FancyDraw.h"

void DrawGraph1(TGraphErrors *graph, TF1 *func, TString funcStr, TString title, TString fname) {

  TCanvas *c = new TCanvas("c","c",800,600);

  graph->SetTitle(title);
  graph->GetXaxis()->SetTitleSize(.04);
  graph->GetYaxis()->SetTitleSize(.04);
  graph->GetXaxis()->SetTitleOffset(1.1);
  graph->GetYaxis()->SetTitleOffset(1.2);
  graph->GetXaxis()->CenterTitle(true);
  graph->GetYaxis()->CenterTitle(true);
  graph->GetYaxis()->SetMaxDigits(4);
  graph->SetMarkerStyle(20); //  Full circle
  graph->Draw("AP");

  TLegend *leg = new TLegend(.59, .69, .89, .89);
  leg->SetBorderSize(0);
  leg->SetTextSize(26);
  leg->SetTextFont(44);

  leg->AddEntry(graph, "Sim");
  leg->AddEntry(func, funcStr);

  leg->Draw("SAME");

  c->SaveAs(fname+".pdf");
  c->SaveAs(fname+".png");
  c->SaveAs(fname+".C");

  delete c;

  return;

}

void DrawGraph2(TGraphErrors *graph, TF1 *func, TString funcStr, TString title, TString fname) {

  TCanvas *c = new TCanvas("c","c",800,600);

  graph->SetTitle(title);
  graph->GetXaxis()->SetTitleSize(.04);
  graph->GetYaxis()->SetTitleSize(.04);
  graph->GetXaxis()->SetTitleOffset(1.1);
  graph->GetYaxis()->SetTitleOffset(1.2);
  graph->GetXaxis()->CenterTitle(true);
  graph->GetYaxis()->CenterTitle(true);
  graph->GetYaxis()->SetMaxDigits(4);
  graph->SetMarkerStyle(20); //  Full circle
  graph->Draw("AP");

  TLegend *leg = new TLegend(.15, .69, .31, .89);
  leg->SetBorderSize(0);
  leg->SetTextSize(26);
  leg->SetTextFont(44);

  leg->AddEntry(graph, "Sim");
  leg->AddEntry(func, funcStr);

  leg->Draw("SAME");

/*  TPaveText *names = new TPaveText(0.59,0.55,0.69,0.89,"NDC");
  names->SetTextAlign(13);
  names->AddText("#chi^{2}/ndf"); 
  names->AddText("p_{0}"); 
  names->AddText("p_{1}"); 

  TPaveText *values = new TPaveText(0.69,0.55,0.89,0.89,"NDC");
  values->SetTextAlign(33);
  values->AddText(SciNotation(double(N))); 
  values->AddText(SciNotation(chi2ndf));
  values->AddText(SciNotation(par0));
  values->AddText(SciNotation(par1));
  values->AddText(SciNotation(par2));
  //txt->AddText(("#chi^{2}/ndf:\t\t"+std::to_string(SciNotation(double(chi2ndf))).c_str());
  //txt->AddText(("A_{EDM}:\t\t"+std::to_string(SciNotation(par0)).c_str());
  //txt->AddText(("#omega_{a}:\t\t"+std::to_string(SciNotation(par1)).c_str());
  //txt->AddText(("C:\t\t"+std::to_string(SciNotation(par2)).c_str());
  //txt->AddText("N:\t\t"+text);
  //txt->AddText("N:\t\t"+text);
  //txt-
  names->SetTextSize(26);
  names->SetTextFont(44);
  names->SetFillColor(0);
  values->SetFillColor(0);
  values->SetTextFont(44);
  values->SetTextSize(26);*/

  c->SaveAs(fname+".pdf");
  c->SaveAs(fname+".png");
  c->SaveAs(fname+".C");

  delete c;

  return;

}

double Run(int n, float sigma){

  double dAEDM = 0;
  
  TRandom3* rand = new TRandom3(0);

  double avgY = 0;
  int nbins = 32;

  int nTrials = 1000;
  int iTrial = 0;

  float nPerBin = n / float(nbins);

  float sigY = sigma / sqrt(nPerBin);
    
  //histograms of fitted parameters
  float range = 5E-4;

  while (iTrial < nTrials){

    vector<double> yValues;
    vector<double> yErrors;
    vector<double> xValues;
    vector<double> xErrors;
    
    //random number for each bin centred around avgY (assumes same entries in each bin)
    for (int ibin(0); ibin < nbins; ibin++){
      yValues.push_back(rand->Gaus(avgY, sigY));
      yErrors.push_back(sigY);
      xValues.push_back((float(ibin) + 0.5) / float(nbins));
      xErrors.push_back(0.0);
    }
    
    TGraphErrors* g = new TGraphErrors(nbins, xValues.data(), yValues.data(), xErrors.data(), yErrors.data());
    g->SetTitle("; x; <y>");
    g->SetMarkerStyle(8);
    
    TF1* f1 = new TF1("f1", "[0] + [1]*sin([3]*x) + [2]*cos([3]*x)", 0, 1.0);
    f1->SetParameters(0, 0.0001);
    f1->SetParameters(1, 0.0001);
    f1->SetParameters(2, 0.0001);
    f1->FixParameter(3, TMath::TwoPi());
    g->Fit(f1, "RQ");
    
    if (iTrial < 3){
      cout << f1->GetParameter(0) << ", " << f1->GetParameter(1) << " +/- " << f1->GetParError(1) << ", " << f1->GetParameter(2) << " +/- " << f1->GetParError(2) << "\n";
    }

    dAEDM = f1->GetParError(2);

    iTrial++;
  }

  return dAEDM;
}

/*
FNAL
*****************************************
Minimizer is Minuit / Migrad
Chi2                      =  3.22841e-25
NDf                       =           19
Edm                       =  7.42901e-41
NCalls                    =           13
p0                        =    0.0206334   +/-   1.5367e-10

Minimizer is Linear / Migrad
Chi2                      =  6.23465e-25
NDf                       =           18
p0                        =  7.06055e-14   +/-   8.6454e-14
p1                        =  0.000426408   +/-   7.21704e-12


BNL
****************************************
Minimizer is Minuit / Migrad
Chi2                      =   7.3719e-26
NDf                       =           19
Edm                       =            0
NCalls                    =           13
p0                        =    0.0141421   +/-   7.34316e-11

Minimizer is Linear / Migrad
Chi2                      =  1.75076e-24
NDf                       =           18
p0                        =  1.14884e-13   +/-   1.44875e-13
p1                        =  0.000666667   +/-   1.20939e-11

*/

void fitNoWiggle(){

  int N = 4.5E6; // 10999638;
  double SIGMA = 10E-3; // 14.59E-3;

  vector<double> dAEDM_; 
  vector<double> zeros_; 

  // Datasets up to 100 million in increments of 5 million
  vector<double> n_; 
  for(int i(1); i<21; i++) n_.push_back(i*5e6);

  for(auto& n : n_) { 

    zeros_.push_back(0.);
    dAEDM_.push_back(Run(int(n), SIGMA));

  }

  TGraphErrors *gr_dEDM_vs_n = GenerateTGraphErrors(n_, dAEDM_, zeros_, zeros_);

  TF1 *f1 = new TF1("f1", "[0]/sqrt(x)", gr_dEDM_vs_n->GetX()[0], gr_dEDM_vs_n->GetX()[gr_dEDM_vs_n->GetN()-1]);
  gr_dEDM_vs_n->Fit(f1, "R");

  // Round(f1->GetParameter(0), 3)+"#pm"+Round(f1->GetParError(0), 1)+"#upoint#frac{1}{#sqrt{N_{trk}}}"
  DrawGraph1(gr_dEDM_vs_n, f1, "p_{0}#upoint#frac{1}{#sqrt{N_{trk}}}", "#sigma#theta_{y} = 10 mrad;N_{trk};#deltaA_{EDM} [rad]", "../Images/tmp/gr_dEDM_vs_n_BNL");

  dAEDM_.clear();
  zeros_.clear();

  // Sigma up to 20 mrad in increments of 1 mrad
  vector<double> sigma_; 
  for(int i(1); i<21; i++) sigma_.push_back(i*1E-3);

  for(auto& sigma : sigma_) { 

    zeros_.push_back(0.);
    dAEDM_.push_back(Run(N, sigma));

  }

  TGraphErrors *gr_dEDM_vs_sigma = GenerateTGraphErrors(sigma_, dAEDM_, zeros_, zeros_);

  TF1 *f2 = new TF1("f2", "pol1", gr_dEDM_vs_sigma->GetX()[0], gr_dEDM_vs_sigma->GetX()[gr_dEDM_vs_n->GetN()-1]);
  f2->SetParameter(1, 0.00044721347);
/*  f1->SetParameter(0, 0);
  f1->SetParameter(1, 0);*/
  gr_dEDM_vs_sigma->Fit(f2, "R");

  //DrawGraph2(gr_dEDM_vs_sigma, f2, Round(f2->GetParameter(0),3)+"#plus"+Round(f2->GetParameter(1),3)+"#sigma#theta_{y}", "N_{trk} = 10 million;#sigma#theta_{y} [rad];#deltaA_{EDM} [rad]", "../Images/tmp/gr_dEDM_vs_sigma");
  DrawGraph2(gr_dEDM_vs_sigma, f2, "p_{0}#plusp_{1}#upoint#sigma#theta_{y}", "N_{trk} = 4.6 million;#sigma#theta_{y} [rad];#deltaA_{EDM} [rad]", "../Images/tmp/gr_dEDM_vs_sigma_BNL");


/*  double sigmaFNAL = 14.59e-3;
  double simg */

  return;


}