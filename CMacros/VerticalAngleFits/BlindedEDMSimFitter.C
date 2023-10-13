/*

Samuel Grant

Primary fitting code for simulation histograms produced by /ReadNTup https://github.com/sam-grant/ReadNTup/tree/run-1_paper

This is the second step in the EDM analysis chain, and is where the blinding is applied. 

*/

#include <iostream>

#include "../Common/FancyDraw.h"
#include "../Common/Utils.h"
#include "../Common/RootInclude.h"
#include "../Common/EDMBlinding.h"

// Globals
double tmin = 7*G2PERIOD;
double tmax = 70*G2PERIOD;
double pmin = 0; 
double pmax = 3000; 

// Helper functions

bool MRF(std::string config) {
  string key = "MRF";
  if(config.find(key) != std::string::npos) { 
    return true;
  } else {
    return false;
  }
}

double ScaleFactor(bool mrf) { 
  if(mrf) return GMAGIC;
  else return 1.;
}

int GetStep(std::string config) {

  int step = 0;
  std::string key1 = "200MeV";
  std::string key2 = "500MeV";
  std::string key3 = "250MeV";
  std::string key4 = "125MeV";

  if(config.find(key1) != std::string::npos) { 
    step = 200;
  } else if(config.find(key2) != std::string::npos) { 
    step = 500;
  } else if(config.find(key3) != std::string::npos) { 
    step = 250;
  } else if(config.find(key4) != std::string::npos) { 
    step = 125;
  } else {
    step = 250;
  }

  return step;

}

string GetQual(std::string config) {

  int step = 0;

  vector<std::string> keys_ = {"AQ", "BQ", "CQ"};

  for(auto& key : keys_) { 

    if(config.find(key) != std::string::npos) { 
      return key;
    }
  }

  return "ERROR";

}

bool NoStations(std::string config) {

  string key = "allDecays_";

  if(config.find(key) != std::string::npos) {
    return true;
  } else {
    return false;
  }

}

string RecoLabel(std::string config) {

  string key1 = "allDecays_";
  string key2 = "trackTruth_";
  string key3 = "trackReco_";

  if(config.find(key1) != std::string::npos) return "all decays";
  else if(config.find(key2) != std::string::npos) return "truth vertices";
  else if(config.find(key3) != std::string::npos) return "reco vertices";
  else return "";


}

// !!! Need to create the source file for this !!!
TH2D *ReweightedHist(TH2D *h1, string ds, string slice, string stn = "S12S18") {

  TH2D *h1_rw = (TH2D*)h1->Clone("h1_rw");

  // File for reweighting
  TFile *f = TFile::Open(("../Plots/Sim/Acceptance/Plots/verticalAngleMomentumSlices."+ds+".root").c_str());

  // Could use some rewriting!
  string name;
  if(slice=="0_250") name = "ratios/"+stn+"_h_ratio_0";
  else if(slice=="250_500") name = "ratios/"+stn+"_h_ratio_1";
  else if(slice=="500_750") name = "ratios/"+stn+"_h_ratio_2";
  else if(slice=="750_1000") name = "ratios/"+stn+"_h_ratio_3";
  else if(slice=="1000_1250") name = "ratios/"+stn+"_h_ratio_4";
  else if(slice=="1250_1500") name = "ratios/"+stn+"_h_ratio_5";
  else if(slice=="1500_1750") name = "ratios/"+stn+"_h_ratio_6";
  else if(slice=="1750_2000") name = "ratios/"+stn+"_h_ratio_7";
  else if(slice=="2000_2250") name = "ratios/"+stn+"_h_ratio_8";
  else if(slice=="2250_2500") name = "ratios/"+stn+"_h_ratio_9";
  else if(slice=="2500_2750") name = "ratios/"+stn+"_h_ratio_10";
  else if(slice=="2750_3000") name = "ratios/"+stn+"_h_ratio_11";

  TH1D *h2 = (TH1D*)f->Get(name.c_str());

  // Loop thro' reweight 
  for(int i(0); i<h1->GetNbinsX(); i++) {

    for(int j(0); j<h1->GetNbinsY(); j++) { 

      double content = h1->GetBinContent(i+1, j+1);

      if(content==0) continue;

      double theta_y = h1->GetYaxis()->GetBinCenter(j+1);
      double weighting = h2->GetBinContent(h2->FindBin(theta_y));

      if(isnan(weighting) || weighting > 1) weighting = 1;

      content = content * weighting;

      h1_rw->SetBinContent(i+1, j+1, content);

    }

  }


  f->Close();

  return h1_rw;

}

// Folded wiggle (illustration only)
void FoldWiggle(TGraphErrors *gr, const double phi, std::string config, std::string dMu) { 

  int step = GetStep(config);
  std::string qual = GetQual(config);

  // Split TGraph and fit into sections based on t_mod
  std::vector<TGraphErrors*> gr_;
  std::vector<TF1*> f_;
  TF1 *f = gr->GetFunction("FiveParFunc");

  int t_mod = 70;
  int lo = 0; 
  int hi = t_mod;

  double t_max = gr->GetPointX(gr->GetN()-1);
  int folds = t_max / t_mod;

  int i_point = 0; 

  double fit_start_time = tmin;
  double fit_end_time = tmax;

  for (int i_fold = 0; i_fold < folds; i_fold++) { 

    TGraphErrors *gr_tmp = new TGraphErrors();
    
    int i_point_mod = 0; 

    while(gr->GetPointX(i_point) >= lo && gr->GetPointX(i_point) < hi) {

      double x = gr->GetPointX(i_point) - t_mod*i_fold;
      double ex = gr->GetErrorX(i_point);
      double y = gr->GetPointY(i_point);
      double ey = gr->GetErrorY(i_point);

      if(y == 0) { 
        i_point++;
        continue;
      }

      gr_tmp->SetPoint(i_point_mod, x, y);
      gr_tmp->SetPointError(i_point_mod, ex, ey); 

      i_point_mod++;
      i_point++;

    }

    if(i_fold != 0) fit_start_time = gr_tmp->GetPointX(0); 

    FitFivePar(gr_tmp, 1300, 64, 0.35, OMEGA_A*1e3, phi, fit_start_time, gr_tmp->GetPointX(i_point-1));

    gr_.push_back(gr_tmp);

    lo = lo + t_mod; 
    hi = hi + t_mod;

  }

  double ymin = 10; double ymax = 5e4;

  DrawFoldedWiggleSim(gr_, ";Time modulo "+std::to_string(t_mod)+" #mus;Tracks / 149 ns", "../../Images/Sim/"+dMu+"/VerticalAngleFitting/FoldedWiggle_"+to_string(t_mod)+"_"+config, 0, t_mod, ymin, ymax);

  return;

}

// Perform five paramter fit on modulo N(t) and retreive the g-2 phase
const double GetPhase(TFile *input, TFile *output, std::string config, std::string dMu) { 

  // Setup 
  int step = GetStep(config);
  std::string qual = GetQual(config);
  bool noStations = NoStations(config);
  std::string recoLabel = RecoLabel(config);

  // Use >1700 MeV positrons to get the phase (Modulo_A)
  cout<<"---> Getting phase"<<endl;

  TString wiggleName = "SimultaneousAnalysis/S0S12S18_Wiggle";
  TString wiggleModName = "SimultaneousAnalysis/S0S12S18_Wiggle_Modulo_A";

  if(noStations) {
    wiggleName = "SimultaneousAnalysis/Wiggle";
    wiggleModName = "SimultaneousAnalysis/Wiggle_Modulo_A";
  } 

  // Get histograms
  TH1D *h1_wiggle = (TH1D*)input->Get(wiggleName);
  TH1D *h1_wiggle_mod = (TH1D*)input->Get(wiggleModName);

  // Normalise
  if(h1_wiggle_mod->GetSumw2N() == 0) h1_wiggle_mod->Sumw2(kTRUE);
  h1_wiggle_mod->Scale(1./h1_wiggle_mod->GetMaximum());

  // Convert to TGraphErrors
  TGraphErrors *gr_wiggle = ConvertToTGraphErrors(h1_wiggle);
  TGraphErrors *gr_wiggle_mod = ConvertToTGraphErrors(h1_wiggle_mod);

  // Phase should be about zero in sim
  FitFivePar(gr_wiggle, 1300, TAU*GMAGIC, 0.35, OMEGA_A, 0, tmin, tmax);
  FitFivePar(gr_wiggle_mod, 1300, TAU*GMAGIC, 0.35, OMEGA_A, 0, 0, G2PERIOD);

  // Fit unmodulated wiggle
  TF1 *wiggle = gr_wiggle->GetFunction("FiveParFunc");

  // Hack together y-axis range for unmodulated wiggle
  double ymin = 1e9; double ymax = -1e9;

  for(int i(0); i<gr_wiggle->GetN(); i++) {

    double yminus = gr_wiggle->GetY()[i] - gr_wiggle->GetEY()[i];
    double yplus = gr_wiggle->GetY()[i] + gr_wiggle->GetEY()[i];

    if(ymin>yminus) ymin = yminus - 0.1*yminus;
    if(ymax<yplus) ymax = yplus + 0.1*yplus;

  }

  // Draw unmodulated wiggle
  DrawWiggle(gr_wiggle, ";Decay time [#mus];Tracks / 149 ns", "Sim", "../../Images/Sim/"+dMu+"/VerticalAngleFitting/fit_wiggle_"+config, double(h1_wiggle->GetEntries()), tmin, tmax, ymin, ymax);

  // Extract phase from modulated wiggle
  TF1 *modWiggle = gr_wiggle_mod->GetFunction("FiveParFunc");

  // Draw modualed wiggle
  DrawModWiggleSim(gr_wiggle_mod, ";t_{g#minus2}^{mod} [#mus];Normalised decays / 149.2 ns", "../../Images/Sim/"+dMu+"/VerticalAngleFitting/fit_mod_wiggle_"+config, recoLabel, double(h1_wiggle_mod->GetEntries()));

  const double phi = modWiggle->GetParameter(4);

  // Fold wiggle for illustration
  FoldWiggle(gr_wiggle, phi, config, dMu);
 
  // Write plots
  gr_wiggle->SetName("Wiggle");
  gr_wiggle->Write();
  gr_wiggle_mod->SetName("ModuloWiggle");
  gr_wiggle_mod->Write();

  // Return phase
  return modWiggle->GetParameter(4); 

}

// Produce a blinded TGraph, drawing on ../Common/EDMBlinding.h
TGraphErrors *BlindedModuloGraph(const double phi_omegaa, TF1 *wiggle, TGraphErrors *gr_thetaY_mod, bool weighted, std::string stn = "S0S12S18_", double momentum = -1) { 

  // First, shift phase

  // Shift the phase 90 deg (not needed anymore)
  // double phi_edm = phi_omega + M_PI/2.; 

  // Find a zero crossing 
  double t0 = phi_omegaa * G2PERIOD / (2*M_PI);
  double zeroCrossing = 8*G2PERIOD - t0;

  // Second, get blinded A_EDM 

  double dMu_blind = blinded_edm_value(false);  
  double delta_blind = GetDelta(dMu_blind);
  double delta_prime_blind = atan( tan(delta_blind) / gmagic) * 1e3; // mrad
  //double omega_a = getBlinded.referenceValue(); 

  // cout<<"\n----> reference omega_a = "<<omega_a<<endl;

  // Wiggle parameters
  double tauGamma = wiggle->GetParameter(1);
  double A = wiggle->GetParameter(2); // Not clear what this value should be for the blinding.

  // Third, inject blinded A_EDM into modulo plot 

  // Define blinded EDM oscillation
  TF1 *blindEDMFunc = new TF1("blindEDMFunc",EDMFuncB,zeroCrossing,zeroCrossing+G2PERIOD,5);

  blindEDMFunc->SetParNames("A_{EDM}^{BLIND}","#omega_{a}^{FIXED}","#phi", "#tau#gamma", "A");

  // Dilution is applied after
  blindEDMFunc->SetParameters(delta_prime_blind, OMEGA_A, phi_omegaa, tauGamma, A);

  blindEDMFunc->SetNpx(50000);

  // Best not to draw this. It's okay for simulation but it's not a good habit
  // DrawTF1(blindEDMFunc,";Time [#mus];#LT#theta_{y}#GT [mrad]","../../Images/Data/dMu/blindEDMFunc_test");

  if(weighted) return InjectBlindedModuloWithWeighting(gr_thetaY_mod, blindEDMFunc, stn, momentum);
  else return InjectBlindedModulo(gr_thetaY_mod, blindEDMFunc);

}

tuple<vector<double>, vector<double>, vector<double>, vector<double>> GetPulls(TGraphErrors *gr) {

  vector<double> pulls_; 
  vector<double> x_; 
  vector<double> ex_;
  vector<double> zeros_;  

  TF1 *fit = (TF1*)gr->GetFunction("FullEDMFuncB");

  for (int i(0); i<gr->GetN(); i++) { 

    double x = gr->GetX()[i];

    x_.push_back(x);

    double pull = (gr->GetY()[i] - fit->Eval(x)) / gr->GetEY()[i]; 
    pulls_.push_back(pull);

    ex_.push_back(gr->GetEX()[i]);
    zeros_.push_back(0);

  }

  return make_tuple(x_, pulls_, ex_, zeros_);

}

// Primary fitting code for the "Simultaneous Analysis" over all momentum bins 
void SimultaneousAnalysis(const double phi, TFile *input, TFile *output, std::string config, std::string dMu, double scaleFactor, bool unblind) { 

  // Helper variables 
  int step = GetStep(config);
  std::string qual = GetQual(config);
  std::string recoLabel = RecoLabel(config);
  std::vector<string> stn_ = {"S0_", "S12_", "S18_", "S12S18_", "S0S12S18_"};
  if(NoStations(config)) stn_ = {""};

  // Starting params
  double Ag2 = 0.; double Aedm = 1.70;
  string dname = "dMu";

  cout<<"---> SimultaneousAnalysis"<<endl;

  // Loop thro' stations
  for(auto& stn : stn_) { 

    // Get mod number oscillation in this range (Wiggle_Modulo_B)
    TH1D *h1_wiggle_mod = (TH1D*)input->Get(("SimultaneousAnalysis/"+stn+"Wiggle_Modulo_B").c_str());

    // Normalise 
    if(h1_wiggle_mod->GetSumw2N() == 0) h1_wiggle_mod->Sumw2(kTRUE);
    h1_wiggle_mod->Scale(1./h1_wiggle_mod->GetMaximum());

    // Convert to graph
    TGraphErrors *gr_wiggle_mod = ConvertToTGraphErrors(h1_wiggle_mod);

    // 5-par fit
    FitFivePar(gr_wiggle_mod, 1.0, TAU*GMAGIC, 0.35, OMEGA_A, 0, 0, G2PERIOD);

    // Get function
    TF1 *f_wiggle_mod = (TF1*)gr_wiggle_mod->GetFunction("FiveParFunc");

    // Retrieve parameters
    double N_0 = f_wiggle_mod->GetParameter(0); double eN_0 = f_wiggle_mod->GetParError(0);
    double tauGamma = f_wiggle_mod->GetParameter(1); double eTauGamma = f_wiggle_mod->GetParError(1);
    double A = f_wiggle_mod->GetParameter(2); double eA = f_wiggle_mod->GetParError(2);
    double phi_slice = f_wiggle_mod->GetParameter(4); double ePhi_slice = f_wiggle_mod->GetParError(4); 

    gr_wiggle_mod->SetName((stn+"Wiggle_Modulo_B").c_str()); 
    gr_wiggle_mod->Write();

    // Vertical angle fit

    // Get 2D histogram and convert to profle
    TH2D *h2_thetaY_mod = (TH2D*)input->Get(("SimultaneousAnalysis/"+stn+"ThetaY_vs_Time_Modulo").c_str());
    int nEntries = h2_thetaY_mod->GetEntries();
    TH1D *px_thetaY_mod = h2_thetaY_mod->ProfileX();

    // Apply blinding
    TGraphErrors *gr_thetaY_mod;
    if(!unblind) gr_thetaY_mod = BlindedModuloGraph(phi, f_wiggle_mod, ConvertToTGraphErrors(px_thetaY_mod), false);
    else gr_thetaY_mod = ConvertToTGraphErrors(px_thetaY_mod);

    // Fits
    FullEDMFitB(gr_thetaY_mod, 0, OMEGA_A, phi, 0.0375e-6, 0, 1.0, tauGamma, A, 0, G2PERIOD); // Numerator/Demoninator

    // Get function
    TF1 *f_thetaY = gr_thetaY_mod->GetFunction("FullEDMFuncB");

    // Hack together y-axis
    double c_thetaY = f_thetaY->GetParameter(4);
    double ymin_thetaY = c_thetaY-0.55; double ymax_thetaY =  c_thetaY+0.55;

    // Draw 
    DrawFullEDMFitSim(gr_thetaY_mod,  ";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 149.2 ns", ("../../Images/Sim/"+dMu+"/VerticalAngleFitting/SimultaneousAnalysis/"+stn+"edmFit_thetaY_"+config+"_"+to_string(unblind)).c_str(), "1000 < p [MeV] < 2500", recoLabel, double(nEntries), ymin_thetaY*scaleFactor, ymax_thetaY*scaleFactor, unblind);
    
    // Write
    gr_thetaY_mod->SetName((stn+"edmFit_thetaY").c_str());
    gr_thetaY_mod->Write();

    // Get fit pulls
    tuple<vector<double>, vector<double>, vector<double>, vector<double>> pull_tuple = GetPulls(gr_thetaY_mod);
    cout<<"DEBUG"<<endl;
    TGraphErrors *gr_pull = GenerateTGraphErrors(get<0>(pull_tuple), get<1>(pull_tuple), get<2>(pull_tuple), get<3>(pull_tuple));
    gr_pull->SetName((stn+"edmFit_pull_vs_t").c_str());
    gr_pull->SetTitle(";t_{g#minus2}^{mod} [#mus];Pull / 149.2 #mus");//.c_str());
    gr_pull->Write();

    TH1D *h_pull = new TH1D((stn+"edmFit_pull").c_str(), (stn+";Pull [#sigma]; Entries / 0.25 #sigma").c_str(), 40, -5, +5);
    for(auto& pull : get<1>(pull_tuple)) h_pull->Fill(pull);
    h_pull->Write();

    DrawTH1(h_pull, stn+";Pull [#sigma]; Entries / 0.25 #sigma", ("../../Images/Sim/"+dMu+"/VerticalAngleFitting/SimultaneousAnalysis/"+stn+"h_pull_"+config).c_str());

    // Get residuals
    TGraphErrors* gr_res = ConvertToTGraphErrors(GetResidual(px_thetaY_mod, f_thetaY));

    DrawTGraphErrors(gr_res, ";t_{g#minus2}^{mod} [#mus];Fit residual [mrad]", "../../Images/Sim/"+dMu+"/VerticalAngleFitting/SimultaneousAnalysis/"+stn+"gr_res_"+config);

    gr_res->SetName((stn+"edmFit_res").c_str());
    gr_res->Write();

    // Perform FFTs on unmodulated graphs

    TH2D *h2_thetaY_vs_t = (TH2D*)input->Get(("SimultaneousAnalysis/"+stn+"ThetaY_vs_Time").c_str());
    nEntries = h2_thetaY_vs_t->GetEntries();
    TH1D *h1_thetaY_vs_t = h2_thetaY_vs_t->ProfileX();

    // Blinding
    TGraphErrors *gr_thetaY_vs_t;
    if(!unblind) gr_thetaY_vs_t = BlindedModuloGraph(phi, f_wiggle_mod, ConvertToTGraphErrors(h1_thetaY_vs_t), false);
    else gr_thetaY_vs_t = ConvertToTGraphErrors(h1_thetaY_vs_t);
    gr_thetaY_vs_t->GetYaxis()->SetRangeUser(-.425, .425);

    // Make a copy for early time FFTs 
    TGraphErrors *gr_thetaY_vs_t_early = (TGraphErrors*)gr_thetaY_vs_t->Clone();

    // Fit 
    FullEDMFitB(gr_thetaY_vs_t, Ag2, OMEGA_A, phi, Aedm, 0, 1.0, tauGamma, A, 7*G2PERIOD, 70*G2PERIOD); // xmin, xmax);
    FullEDMFitB(gr_thetaY_vs_t_early, Ag2, OMEGA_A, phi, Aedm, 0, 1.0, tauGamma, A, 7*G2PERIOD, 15*G2PERIOD); 

    gr_thetaY_vs_t->SetName((stn+"edmFit_noMod").c_str());
    gr_thetaY_vs_t->Write();

    gr_thetaY_vs_t_early->SetName((stn+"edmFit_noMod_early").c_str());
    gr_thetaY_vs_t_early->Write();

    //DrawFullEDMFitSim(gr_thetaY_vs_t,  ";Decay time [#mus];#LT#theta_{y}#GT [mrad] / 149.2 ns", ("../../Images/Sim/"+dMu+"/VerticalAngleFitting/"+stn+"edmFit_thetaY_vs_t_"+config+"_"+to_string(unblind)).c_str(), "1000 < p [MeV] < 2500", recoLabel, double(nEntries), ymin_thetaY*scaleFactor, ymax_thetaY*scaleFactor, unblind);
    //DrawFullEDMFitSim(gr_thetaY_vs_t,  ";Decay time [#mus];#LT#theta_{y}#GT [mrad] / 149.2 ns", ("../../Images/Sim/"+dMu+"/VerticalAngleFitting/"+stn+"edmFit_thetaY_vs_t_"+config+"_"+to_string(unblind)).c_str(), "1000 < p [MeV] < 2500", recoLabel, double(nEntries), ymin_thetaY*scaleFactor, ymax_thetaY*scaleFactor, unblind);

    TF1 *func = gr_thetaY_vs_t->GetFunction("FullEDMFuncB");
    TF1 *func_early = gr_thetaY_vs_t_early->GetFunction("FullEDMFuncB");

    double c = func->GetParameter(4);
    double ymin = c-1.55; double ymax = c+1.55;

    // Get residuals

    // We have to convert back into a TH1D to preserve blinding
    h1_thetaY_vs_t = ConvertToTH1D(gr_thetaY_vs_t); 
    TH1D *FFT_h1_thetaY_vs_t = GetFFT(h1_thetaY_vs_t);
    TH1D *h1_res_thetaY_vs_t = GetResidual(h1_thetaY_vs_t, func);
    TH1D *h1_res_thetaY_vs_t_early = GetResidual(h1_thetaY_vs_t, func_early);

    // Ensure that residuals are do not fall outside time range
    for(int i(0); i<h1_res_thetaY_vs_t->GetXaxis()->GetNbins(); i++) { 

      double time = h1_res_thetaY_vs_t->GetXaxis()->GetBinCenter(i);

      if(time < tmin || time > tmax) {
        h1_res_thetaY_vs_t->SetBinContent(i+1, 0);//GetXaxis()->GetBinCenter(ibin);
        h1_res_thetaY_vs_t->SetBinError(i+1, 0);
      }

    }

    for(int i(0); i<h1_res_thetaY_vs_t_early->GetXaxis()->GetNbins(); i++) { 

      double time = h1_res_thetaY_vs_t_early->GetXaxis()->GetBinCenter(i);

      if(time < tmin || time > 15*G2PERIOD) {
        h1_res_thetaY_vs_t_early->SetBinContent(i+1, 0);//GetXaxis()->GetBinCenter(ibin);
        h1_res_thetaY_vs_t_early->SetBinError(i+1, 0);
      }

    }

    // Perform FFT
    TH1D *FFT_h1_res_thetaY_vs_t = GetFFT(h1_res_thetaY_vs_t);
    TH1D *FFT_h1_res_thetaY_vs_t_early = GetFFT(h1_res_thetaY_vs_t_early);

    // Sanity plots

    DrawTH1(h1_thetaY_vs_t, "h1_thetaY_vs_t;Frequency [MHz];FFT magnitude / "+to_string(h1_thetaY_vs_t->GetBinWidth(1))+" MHz", "../../Images/Sim/"+dMu+"/VerticalAngleFitting/SimultaneousAnalysis/"+stn+"h1_thetaY_vs_t");
    h1_thetaY_vs_t->SetName((stn+"h1_thetaY_vs_t").c_str());
    h1_thetaY_vs_t->Draw("HIST");
    h1_thetaY_vs_t->Write();

    DrawTH1(FFT_h1_thetaY_vs_t, "FFT_h1_thetaY_vs_t;Frequency [MHz];FFT magnitude / "+to_string(FFT_h1_thetaY_vs_t->GetBinWidth(1))+" MHz", "../../Images/Sim/"+dMu+"/VerticalAngleFitting/SimultaneousAnalysis/"+stn+"FFT_h1_thetaY_vs_t");
    FFT_h1_thetaY_vs_t->SetName((stn+"FFT_h1_thetaY_vs_t").c_str());
    FFT_h1_thetaY_vs_t->Draw("HIST");
    FFT_h1_thetaY_vs_t->Write();

    // Residuals

    DrawTH1(h1_res_thetaY_vs_t, "h1_res_thetaY_vs_t;Decay time [#mus];Residual [mrad] / "+to_string(h1_res_thetaY_vs_t->GetBinWidth(1))+" #mus",  "../../Images/Sim/"+dMu+"/VerticalAngleFitting/SimultaneousAnalysis/"+stn+"h1_res_thetaY_vs_t");
    h1_res_thetaY_vs_t->SetName((stn+"h1_res_thetaY_vs_t").c_str());
    h1_res_thetaY_vs_t->Draw("HIST");
    h1_res_thetaY_vs_t->Write();

    DrawTH1(h1_res_thetaY_vs_t_early, "h1_res_thetaY_vs_t_early;Decay time [#mus];Residual [mrad] / "+to_string(h1_res_thetaY_vs_t_early->GetBinWidth(1))+" #mus",  "../../Images/Sim/"+dMu+"/VerticalAngleFitting/SimultaneousAnalysis/"+stn+"h1_res_thetaY_vs_t_early");
    h1_res_thetaY_vs_t_early->SetName((stn+"h1_res_thetaY_vs_t_early").c_str());
    h1_res_thetaY_vs_t_early->Draw("HIST");
    h1_res_thetaY_vs_t_early->Write();

    // Residual FFTs

    DrawTH1(FFT_h1_res_thetaY_vs_t, "FFT_h1_res_thetaY_vs_t;Frequency [MHz];FFT magnitude / "+to_string(FFT_h1_res_thetaY_vs_t->GetBinWidth(1))+" MHz",  "../../Images/Sim/"+dMu+"/VerticalAngleFitting/SimultaneousAnalysis/"+stn+"FFT_h1_res_thetaY_vs_t");
    FFT_h1_res_thetaY_vs_t->SetName((stn+"FFT_h1_res_thetaY_vs_t").c_str());
    FFT_h1_res_thetaY_vs_t->Write();

    DrawTH1(FFT_h1_res_thetaY_vs_t_early, "FFT_h1_res_thetaY_vs_t_early;Frequency [MHz];FFT magnitude / "+to_string(FFT_h1_res_thetaY_vs_t_early->GetBinWidth(1))+" MHz",  "../../Images/Sim/"+dMu+"/VerticalAngleFitting/SimultaneousAnalysis/"+stn+"FFT_h1_res_thetaY_vs_t_early");
    FFT_h1_res_thetaY_vs_t_early->SetName((stn+"FFT_h1_res_thetaY_vs_t_early").c_str());
    FFT_h1_res_thetaY_vs_t_early->Write();

  }

  return; 

}

// Primary fitting code for the "Momentum Binned Analysis" over all momentum bins 
void MomentumBinnedAnalysis(const double phi, TFile *input, TFile *output, std::string config, std::string dMu, double scaleFactor, bool unblind, string dataset, string station, bool reweight) { 

  // Helper variables
  int step = GetStep(config);
  std::string qual = GetQual(config);
  std::string recoLabel = RecoLabel(config);
  bool mrf = MRF(config);
  vector<string> stn_ = { "S0_", "S12_", "S18_", "S12S18_", "S0S12S18_"}; 
  if(NoStations(config)) stn_ = {""};

  int n_cuts = PMAX / step;
  int lo = -1; 
  int hi = -1;
  int i_cut_config = -1;
  double Ag2 = .0; double Aedm = .35;
  string dname = "dMu"; 

  cout<<"---> MomentumBinnedAnalysis"<<endl;

  for(int i_stn = 0; i_stn < stn_.size(); i_stn++) {

    TGraphErrors* AEDM_vs_p_thetaY;
    TGraphErrors* Ag2_vs_p_thetaY;
    TGraphErrors* c_vs_p_thetaY;
    TGraphErrors* AEDM_vs_p_A;
    TGraphErrors* Ag2_vs_p_A;
    TGraphErrors* c_vs_p_A;
    TGraphErrors* thetaY_RMS_vs_p;
    TGraphErrors* Y_RMS_vs_p;
    TGraphErrors* pY_RMS_vs_p;
    TGraphErrors* N_vs_p;
    TGraphErrors* eAEDM_vs_p_thetaY;
    TGraphErrors* eAEDM_vs_p_A;
    TGraphErrors* thetaYMaxDiff_vs_p;
    TGraphErrors* AEDMOverMaxDiff_vs_p;
    TGraphErrors* AEDMOverThetaYRMS_vs_p;

    std::vector<double> p_;
    std::vector<double> ep_;

    // Theta Y mod
    std::vector<double> c_thetaY_;
    std::vector<double> ec_thetaY_;
    std::vector<double> AEDM_thetaY_;
    std::vector<double> eAEDM_thetaY_;
    std::vector<double> Ag2_thetaY_;
    std::vector<double> eAg2_thetaY_;

    // Asymmetry mod
    std::vector<double> c_A_;
    std::vector<double> ec_A_;
    std::vector<double> AEDM_A_;
    std::vector<double> eAEDM_A_;
    std::vector<double> Ag2_A_;
    std::vector<double> eAg2_A_;

    // Extra scans
    vector<double> thetaY_RMS_;
    vector<double> e_thetaY_RMS_;
    vector<double> Y_RMS_;
    vector<double> e_Y_RMS_;
    vector<double> pY_RMS_;
    vector<double> e_pY_RMS_;
    vector<double> N_;
    vector<double> zeros_;
    vector<double> thetaYMaxDiff_;
    vector<double> e_thetaYMaxDiff_;
    vector<double> AEDMOverMaxDiff_;
    vector<double> e_AEDMOverMaxDiff_;
    vector<double> AEDMOverThetaYRMS_;
    vector<double> e_AEDMOverThetaYRMS_;

    string stn = stn_.at(i_stn);

    // ============ Momentum slices ============
    i_cut_config = 0; 

    int count = 0;

    for(int i_cut = 0; i_cut < n_cuts; i_cut++) {

      // ---> Sort out momentum binning 

      lo = 0 + i_cut*step; 
      if(mrf) lo = 0 + (i_cut * step * (1 / (2*GMAGIC))); 
      hi = step + i_cut*step;
      if(mrf) hi = (step * (1 / (2*GMAGIC)))  + (i_cut * step * (1 / (2*GMAGIC)));

      // Get momentum slice string and histogram
      std::string momSlice = std::to_string(lo)+"_"+std::to_string(hi);

      std::string pHistName = "MomentumBinnedAnalysis/"+stn+"Momentum_"+momSlice;
      TH1D *pHist = (TH1D*)input->Get((pHistName).c_str());

      // Push these into vector once checks are complete
      double p = pHist->GetMean(); 
      double ep = pHist->GetMeanError();

      // Fit number oscillation in this in this momentum bin 

      string h1_wiggle_mod_name = "MomentumBinnedAnalysis/"+stn+"Wiggle_Modulo_"+momSlice;
      TH1D *h1_wiggle_mod = (TH1D*)input->Get(h1_wiggle_mod_name.c_str());

      // Normalise and convert to graph

      if(h1_wiggle_mod->GetSumw2N() == 0) h1_wiggle_mod->Sumw2(kTRUE);
      h1_wiggle_mod->Scale(1./h1_wiggle_mod->GetMaximum());

      TGraphErrors *gr_wiggle_mod = ConvertToTGraphErrors(h1_wiggle_mod);

      // 5-par fit
      FitFivePar(gr_wiggle_mod, 1.0, TAU*GMAGIC, 0.35, OMEGA_A, 0, 0, G2PERIOD);

      TF1 *f_wiggle_mod = (TF1*)gr_wiggle_mod->GetFunction("FiveParFunc");

      double N_0 = f_wiggle_mod->GetParameter(0); double eN_0 = f_wiggle_mod->GetParError(0);
      double tauGamma = f_wiggle_mod->GetParameter(1); double eTauGamma = f_wiggle_mod->GetParError(1);
      double A = f_wiggle_mod->GetParameter(2); double eA = f_wiggle_mod->GetParError(2);
      double phi_slice = f_wiggle_mod->GetParameter(4); double ePhi_slice = f_wiggle_mod->GetParError(4); 

      DrawModWiggleSim(gr_wiggle_mod, ";t_{g#minus2}^{mod} [#mus];Normalised decays / 149.2 ns", ("../../Images/Sim/"+dMu+"/VerticalAngleFitting/MomentumBinnedAnalysis/"+stn+"fit_mod_wiggle_"+momSlice+"_"+config+"_"+to_string(unblind)).c_str(), recoLabel, double(h1_wiggle_mod->GetEntries()), to_string(lo)+" < p [MeV] < "+to_string(hi));    

      output->cd("MomentumBinnedAnalysis/ModuloFits");

      gr_wiggle_mod->SetName((stn+"wiggleFit_"+momSlice).c_str());
      gr_wiggle_mod->Write();

      // Vertical angle fitting

      string h2_thetaY_mod_name = "MomentumBinnedAnalysis/"+stn+"ThetaY_vs_Time_Modulo_"+momSlice;
      TH2D *h2_thetaY_mod = (TH2D*)input->Get(h2_thetaY_mod_name.c_str());

      if(h2_thetaY_mod==0) continue;

      int nEntries = h2_thetaY_mod->GetEntries();

      // Skipping empty bins (reweighted plots have entries but they're all zeros.)
      if(nEntries == 0 || h2_thetaY_mod->GetRMS() == 0) continue;

      // Push momentum into vector
      p_.push_back(p);
      ep_.push_back(ep);

      // Reweight again 
      if(reweight) h2_thetaY_mod = ReweightedHist(h2_thetaY_mod, dataset, momSlice, station);

      // Make profile
      TH1D *px_thetaY_mod = h2_thetaY_mod->ProfileX();

      // Blind
      TGraphErrors *gr_thetaY_mod;
      cout<<"\n Blinding"<<endl;
      if(!unblind) {
        gr_thetaY_mod = BlindedModuloGraph(phi, f_wiggle_mod, ConvertToTGraphErrors(px_thetaY_mod), true, stn, p);
      } else gr_thetaY_mod = ConvertToTGraphErrors(px_thetaY_mod);

      // Fits  
      FullEDMFitB(gr_thetaY_mod, Ag2, OMEGA_A, phi, Aedm, 0, 1.0, tauGamma, A, 0, G2PERIOD); // Numerator/demoninator

      gr_thetaY_mod->SetTitle( (stn+", "+std::to_string(lo)+" < p [MeV] < "+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 149.2 ns").c_str() );
      gr_thetaY_mod->Draw("AP");

      double c_tmp = gr_thetaY_mod->GetFunction("FullEDMFuncB")->GetParameter(4);
      double ymin_tmp = c_tmp-1; double ymax_tmp = c_tmp+1;
      
      DrawFullEDMFitSim(gr_thetaY_mod, ";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 149.2 ns", ("../../Images/Sim/"+dMu+"/VerticalAngleFitting/MomentumBinnedAnalysis/"+stn+"edmFit_thetaY_"+momSlice+"_"+config+"_"+to_string(unblind)).c_str(), std::to_string(lo)+" < p [MeV] < "+std::to_string(hi), recoLabel, double(nEntries), ymin_tmp, ymax_tmp, unblind);

      // For some reason this is needed twice?
      output->cd("MomentumBinnedAnalysis/ModuloFits");

      gr_thetaY_mod->SetName((stn+"moduloFit_thetaY_"+momSlice).c_str());
      gr_thetaY_mod->Write();

      // Store parameters for each fit
      c_thetaY_.push_back(gr_thetaY_mod->GetFunction("FullEDMFuncB")->GetParameter(4));
      ec_thetaY_.push_back(gr_thetaY_mod->GetFunction("FullEDMFuncB")->GetParError(4));
      AEDM_thetaY_.push_back(gr_thetaY_mod->GetFunction("FullEDMFuncB")->GetParameter(3));
      eAEDM_thetaY_.push_back(gr_thetaY_mod->GetFunction("FullEDMFuncB")->GetParError(3));
      Ag2_thetaY_.push_back(gr_thetaY_mod->GetFunction("FullEDMFuncB")->GetParameter(0));
      eAg2_thetaY_.push_back(gr_thetaY_mod->GetFunction("FullEDMFuncB")->GetParError(0));


      // Clean up pointers
      delete h2_thetaY_mod;
      delete px_thetaY_mod;
      delete gr_thetaY_mod;

      // Store more important parameters in each momentum slice

      std::string thetaYHistName = "MomentumBinnedAnalysis/"+stn+"ThetaY_"+momSlice;
      TH1D *thetaYHist = (TH1D*)input->Get((thetaYHistName).c_str());

      double thetaYRMS = thetaYHist->GetRMS();
      double e_thetaYRMS = thetaYHist->GetRMSError();

      thetaY_RMS_.push_back(thetaYRMS);
      e_thetaY_RMS_.push_back(e_thetaYRMS); 

      std::string yHistName = "MomentumBinnedAnalysis/"+stn+"Y_"+momSlice;
      TH1D *yHist = (TH1D*)input->Get((yHistName).c_str());

      Y_RMS_.push_back(yHist->GetRMS());
      e_Y_RMS_.push_back(yHist->GetRMSError());

      std::string pYHistName = "MomentumBinnedAnalysis/"+stn+"MomentumY_"+momSlice;
      TH1D *pYHist = (TH1D*)input->Get((pYHistName).c_str());

      pY_RMS_.push_back(pYHist->GetRMS());
      e_pY_RMS_.push_back(pYHist->GetRMSError());

      N_.push_back(yHist->GetEntries());
      zeros_.push_back(0);

      double thetaYMin = thetaYHist->GetBinCenter(thetaYHist->FindFirstBinAbove(0,1));
      double thetaYMax = thetaYHist->GetBinCenter(thetaYHist->FindLastBinAbove(0,1));

      double e_thetaYMin = thetaYHist->GetBinWidth(thetaYHist->FindFirstBinAbove(0,1));
      double e_thetaYMax = thetaYHist->GetBinWidth(thetaYHist->FindLastBinAbove(0,1));

      double thetaYMaxDiff = thetaYMax - thetaYMin; 
      double e_thetaYMaxDiff = sqrt( pow(e_thetaYMax,2) + pow(e_thetaYMin,2) );

      thetaYMaxDiff_.push_back(thetaYMaxDiff);
      e_thetaYMaxDiff_.push_back(e_thetaYMaxDiff);

      double AEDMOverMaxDiff = AEDM_thetaY_.at(count) / thetaYMaxDiff;
      double e_AEDMOverMaxDiff = AEDMOverMaxDiff * sqrt( pow( (eAEDM_thetaY_.at(count)/AEDM_thetaY_.at(count)), 2) + pow( (e_thetaYMaxDiff/thetaYMaxDiff), 2) );

      AEDMOverMaxDiff_.push_back(AEDMOverMaxDiff);
      e_AEDMOverMaxDiff_.push_back(e_AEDMOverMaxDiff);

      double AEDMOverThetaYRMS = AEDM_thetaY_.at(count) / thetaYRMS;
      double e_AEDMOverThetaYRMS = AEDMOverThetaYRMS * sqrt( pow( (eAEDM_thetaY_.at(count)/AEDM_thetaY_.at(count)), 2) + pow( (e_thetaYRMS/thetaYRMS), 2) );

      AEDMOverThetaYRMS_.push_back(AEDMOverThetaYRMS);
      e_AEDMOverThetaYRMS_.push_back(e_AEDMOverThetaYRMS);

      count++;

    } // Mom slices

    output->cd("MomentumBinnedAnalysis/ParameterScans");

    // Draw parameters versus momentum 

    c_vs_p_thetaY = GenerateTGraphErrors(p_, c_thetaY_, ep_, ec_thetaY_);
    AEDM_vs_p_thetaY = GenerateTGraphErrors(p_, AEDM_thetaY_, ep_, eAEDM_thetaY_);
    Ag2_vs_p_thetaY = GenerateTGraphErrors(p_, Ag2_thetaY_, ep_, eAg2_thetaY_);

    DrawScanGraph(c_vs_p_thetaY, stn+";Decay vertex momentum [MeV];c [mrad] / "+to_string(step)+" MeV", ("../../Images/Sim/"+dMu+"/VerticalAngleFitting/MomentumBinnedAnalysis/"+stn+"c_vs_p_thetaY_"+config+"_"+to_string(unblind)).c_str(), step, false);
    DrawScanGraph(AEDM_vs_p_thetaY, stn+";Decay vertex momentum [MeV];A_{EDM} [mrad] / "+to_string(step)+" MeV", ("../../Images/Sim/"+dMu+"/VerticalAngleFitting/MomentumBinnedAnalysis/"+stn+"AEDM_vs_p_thetaY_"+config+"_"+to_string(unblind)).c_str(), step, false);
    DrawScanGraph(Ag2_vs_p_thetaY, stn+";Decay vertex momentum [MeV];A_{g#minus2} [mrad] / "+to_string(step)+" MeV", ("../../Images/Sim/"+dMu+"/VerticalAngleFitting/MomentumBinnedAnalysis/"+stn+"Ag2_vs_p_thetaY_"+config+"_"+to_string(unblind)).c_str(), step, false);

    c_vs_p_thetaY->SetName((stn+"c_vs_p_thetaY").c_str());
    AEDM_vs_p_thetaY->SetName((stn+"AEDM_vs_p_thetaY").c_str());
    Ag2_vs_p_thetaY->SetName((stn+"Ag2_vs_p_thetaY").c_str());

    c_vs_p_thetaY->Write();
    AEDM_vs_p_thetaY->Write();
    Ag2_vs_p_thetaY->Write();

    thetaY_RMS_vs_p = GenerateTGraphErrors(p_, thetaY_RMS_, ep_, e_thetaY_RMS_);
    DrawScanGraph(thetaY_RMS_vs_p, stn+";Decay vertex momentum [MeV];#sigma#theta_{y} [mrad] / "+to_string(step)+" MeV", ("../../Images/Sim/"+dMu+"/VerticalAngleFitting/MomentumBinnedAnalysis/"+stn+"theta_Y_RMS_vs_p_"+config+"_"+to_string(unblind)).c_str(), step, false);
    thetaY_RMS_vs_p->SetName((stn+"thetaY_RMS_vs_p").c_str());
    thetaY_RMS_vs_p->Write();

    Y_RMS_vs_p = GenerateTGraphErrors(p_, Y_RMS_, ep_, e_Y_RMS_);
    DrawScanGraph(Y_RMS_vs_p, stn+";Decay vertex momentum [MeV];#sigma_{y} [mm] / "+to_string(step)+" MeV", ("../../Images/Sim/"+dMu+"/VerticalAngleFitting/MomentumBinnedAnalysis/"+stn+"Y_RMS_vs_p_"+config+"_"+to_string(unblind)).c_str(), step, false);
    Y_RMS_vs_p->SetName((stn+"Y_RMS_vs_p").c_str());
    Y_RMS_vs_p->Write();

    pY_RMS_vs_p = GenerateTGraphErrors(p_, pY_RMS_, ep_, e_pY_RMS_);
    DrawScanGraph(pY_RMS_vs_p, stn+";Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / "+to_string(step)+" MeV", ("../../Images/Sim/"+dMu+"/VerticalAngleFitting/MomentumBinnedAnalysis/"+stn+"Momentum_Y_RMS_vs_p_"+config+"_"+to_string(unblind)).c_str(), step, false);
    pY_RMS_vs_p->SetName((stn+"pY_RMS_vs_p").c_str());
    pY_RMS_vs_p->Write();

    N_vs_p = GenerateTGraphErrors(p_, N_, ep_, zeros_);
    DrawScanGraph(N_vs_p, stn+";Decay vertex momentum [MeV];Positrons / "+to_string(step)+" MeV", ("../../Images/Sim/"+dMu+"/VerticalAngleFitting/MomentumBinnedAnalysis/"+stn+"N_vs_p_"+config+"_"+to_string(unblind)).c_str(), step, false);
    N_vs_p->SetName((stn+"N_vs_p").c_str());
    N_vs_p->Write();

    eAEDM_vs_p_thetaY = GenerateTGraphErrors(p_, eAEDM_thetaY_, ep_, zeros_);
    DrawScanGraph(eAEDM_vs_p_thetaY, stn+";Decay vertex momentum [MeV];#deltaA_{EDM} [mrad] / "+to_string(step)+" MeV", ("../../Images/Sim/"+dMu+"/VerticalAngleFitting/MomentumBinnedAnalysis/"+stn+"eAEDM_vs_p_thetaY_"+config+"_"+to_string(unblind)).c_str(), step, false);
    eAEDM_vs_p_thetaY->SetName((stn+"eAEDM_vs_p_thetaY").c_str());
    eAEDM_vs_p_thetaY->Write();

    // Normalise A_EDM by max angular diff
    thetaYMaxDiff_vs_p = GenerateTGraphErrors(p_, thetaYMaxDiff_, ep_, e_thetaYMaxDiff_);
    DrawScanGraph(thetaYMaxDiff_vs_p, stn+";Decay vertex momentum [MeV];(#Delta#theta_{y})_{MAX} [mrad] / "+to_string(step)+" MeV", ("../../Images/Sim/"+dMu+"/VerticalAngleFitting/MomentumBinnedAnalysis/"+stn+"thetaYMaxDiff_vs_p_"+config+"_"+to_string(unblind)).c_str(), step, false);
    thetaYMaxDiff_vs_p->SetName((stn+"thetaYMaxDiff_vs_p").c_str());
    thetaYMaxDiff_vs_p->Write();

    AEDMOverMaxDiff_vs_p = GenerateTGraphErrors(p_, AEDMOverMaxDiff_, ep_, e_AEDMOverMaxDiff_);
    DrawScanGraph(AEDMOverMaxDiff_vs_p, stn+";Decay vertex momentum [MeV];A_{EDM}/(#Delta#theta_{y})_{MAX} / "+to_string(step)+" MeV", ("../../Images/Sim/"+dMu+"/VerticalAngleFitting/MomentumBinnedAnalysis/"+stn+"AEDMOverMaxDiff_vs_p_"+config+"_"+to_string(unblind)).c_str(), step, false);
    AEDMOverMaxDiff_vs_p->SetName((stn+"AEDMOverMaxDiff_vs_p").c_str());
    AEDMOverMaxDiff_vs_p->Write();

    AEDMOverThetaYRMS_vs_p = GenerateTGraphErrors(p_, AEDMOverThetaYRMS_, ep_, e_AEDMOverThetaYRMS_);
    DrawScanGraph(AEDMOverThetaYRMS_vs_p, stn+";Decay vertex momentum [MeV];A_{EDM}/#sigma#theta_{y} / "+to_string(step)+" MeV", ("../../Images/Sim/"+dMu+"/VerticalAngleFitting/MomentumBinnedAnalysis/"+stn+"AEDMOverThetaYRMS_vs_p_"+config+"_"+to_string(unblind)).c_str(), step, false);
    AEDMOverThetaYRMS_vs_p->SetName((stn+"AEDMOverThetaYRMS_vs_p").c_str());
    AEDMOverThetaYRMS_vs_p->Write();

  } // Stn loop

  return; 

}

// station refers to the station used in the reweighting
void Run(string config, string dMu, string dataset, string station, const bool unblind, bool reweight, bool write) {

  // 1. Setup

  // Helper variables
  bool mrf = MRF(config);
  double scaleFactor = ScaleFactor(mrf);
  bool noStations = NoStations(config);
  int step = GetStep(config);
  std::string qual = GetQual(config);

  // Sort out file names
  std::string inputName = "../../Plots/Sim/"+dMu+"/BaseHistograms/edmPlots_"+config+".root";
  std::string outputName = "../../Plots/Sim/"+dMu+"/VerticalAngleFits/";

  // Ensure the output has the correct name 
  if(unblind) outputName += "edmFits_unblinded_"+config;
  else outputName += "edmFits_blinded_"+config;
  if(reweight) outputName += "_reweight"+station+dataset;
  outputName += ".root";

  // For testing, stop /Plots from getting cluttered
  if(!write) outputName = "../../Plots/Test/"+outputName;

  // Book in/out files 
  TFile *input = TFile::Open((inputName).c_str());
  TFile *output = new TFile((outputName).c_str(), "RECREATE");

  cout<<"Reading\t"<<inputName<<" "<<input<<endl;

  // 2. Get phase

  // First output dir
  output->mkdir("Wiggle"); output->cd("Wiggle");

  // Perform 5-par fit 
  const double phi = GetPhase(input, output, config, dMu);

  // 3. Simulatenous vertical angle fits

  // Second output dir
  output->mkdir("SimultaneousAnalysis");
  output->cd("SimultaneousAnalysis");

  // Perfrom vertical angle fits
  SimultaneousAnalysis(phi, input, output, config, dMu, scaleFactor, unblind);

  // 3. Momentum binned vertical angle fits

  output->mkdir("MomentumBinnedAnalysis");
  output->mkdir("MomentumBinnedAnalysis/ModuloFits");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans");

  // Re-weighting currently only for momentum binned analysis
  MomentumBinnedAnalysis(phi, input, output, config, dMu, scaleFactor, unblind, dataset, station, reweight); 

  std::cout<<"\nWritten plots to root file:\n"<<outputName<<std::endl;

  // Print simultaneous fit results in a format which can be copied to .csv 
  std::cout<<"\n******* Results ******* "<<endl;

  std::vector<std::string> stn_ = {"S0_", "S12_", "S18_", "S12S18_", "S0S12S18_"};
  if(NoStations(config)) stn_ = {""};

  if(!unblind) cout<<"BLINDED"<<endl;
  else cout<<"UNBLINDED"<<endl;;

  cout<<",chi2ndf, A_EDM [mrad],, A_{g-2} [mrad],, c [mrad]"<<endl;
  cout<<"Station, value, value, error, value, error, value, error"<<endl;

  for(auto& stn : stn_) { 

    TGraphErrors *gr_result = (TGraphErrors*)output->Get(("SimultaneousAnalysis/"+stn+"edmFit_thetaY").c_str());
    TF1 *f_result = (TF1*)gr_result->GetFunction("FullEDMFuncB");

    double chi2ndf = f_result->GetChisquare()/f_result->GetNDF();
    double A_EDM = f_result->GetParameter(3); double eA_EDM = f_result->GetParError(3);
    double A_Bz = f_result->GetParameter(0); double eA_Bz = f_result->GetParError(0);
    double c = f_result->GetParameter(4); double ec = f_result->GetParError(4);

    cout<<stn<<", "<<chi2ndf<<", "<<A_EDM<<", "<<eA_EDM<<", "<<A_Bz<<", "<<eA_Bz<<", "<<c<<", "<<ec<<endl;

  }

  input->Close();
  output->Close();

  return;


}

/*

Example run commands.

No reweighting:

./BlindedEDMSimFitter.out allDecays_LAB_250MeV_noQ_randCorr 5.4e-18 true none none
./BlindedEDMSimFitter.out trackReco_LAB_250MeV_BQ_randCorr 5.4e-18 true none none
./BlindedEDMSimFitter.out trackTruth_LAB_250MeV_BQ_randCorr 5.4e-18 true none none

With reweighting:

./BlindedEDMSimFitter.out allDecays_LAB_250MeV_noQ_randCorr 5.4e-18 true Run-1a S12S18
./BlindedEDMSimFitter.out trackReco_LAB_250MeV_BQ_randCorr 5.4e-18 true Run-1a S12S18
./BlindedEDMSimFitter.out trackTruth_LAB_250MeV_BQ_randCorr 5.4e-18 true Run-1a S12S18

*/

int main(int argc, char *argv[]) {

  string config= argv[1]; // e.g. <recoType>_<refFrame>_<binWidth>_<qualityInfo>_<corrInfo>
  string dMu = argv[2]; // Option to run with different injected EDM
  string unblindStr = argv[3]; // true or false
  string dataset = argv[4]; // none, Run-1a, Run-1b, Run-1c, Run-1d
  string station = argv[5]; // S12, S18, S12S18

  // TODO: come up with cleaner solution for these re-weighting options
  bool reweight = false;
  if(dataset=="none") dataset = "";
  if(station=="none") station = ""; 
  if((dataset == "Run-1a" || dataset == "Run-1b" || dataset == "Run-1c" || dataset == "Run-1d") && ( station == "S12" || station == "S18" || station == "S12S18") ) reweight = true; 

  // TODO: same for blinding/unblinding options
  bool unblind = false;
  if(unblindStr == "true") unblind = true;
  else if(unblindStr == "false") unblind = false;
  else cerr<<"Please input unblinding bool as 'true' or 'false'";

  // OK for sim
  if(unblind) cout<<"*** Unblind is set to true ****"<<endl;

  // Set this by hand, if it's false the output will be written to a test directory
  bool write = true;  

  // Run
  Run(config, dMu, dataset, station, unblind, reweight, write); 

  return 0;

}
