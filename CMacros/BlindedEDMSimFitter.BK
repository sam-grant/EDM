#include <iostream>

#include "FancyDraw.h"
#include "Utils.h"
#include "RootInclude.h"

#include "EDMBlinding.h"

// ./BlindedEDMFitter.exe | tail -n 6 | tee ../Sheets/Run-1b/SimultaneousFitResults_250MeV_BQ.csv

double tmin = 7*G2PERIOD;
double tmax = 70*G2PERIOD;

double pmin = 0; // 750;
double pmax = 3000; // 2750;

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
    //cerr<<"Step size is unknown";
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

  vector<std::string> keys_ = {"acceptedDecays_", "acceptedDecaysControl_", "allDecays_"};

  for(auto& key : keys_) {

      if(config.find(key) != std::string::npos) return true;

  }

  return false;

}

bool TwoStations(std::string config) {

  string key = "dataAccCorr";

  if(config.find(key) != std::string::npos) return true;
  else return false;


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

void DrawScanGraph(TGraphErrors *graph, std::string title, std::string fname, int step, bool xLabel) {

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

  // Hack together x-axis range
  // Hack together y-axis range
  double lo = 1e6; double hi = -1e6;
  for(int i = pmin-100; i<pmax+100; i = i + 10) {
    double y = graph->Eval(i);
    if(y < lo) lo = y;
    if(y > hi) hi = y;

  }

  graph->GetXaxis()->SetRangeUser(pmin, pmax);
  //graph->GetYaxis()->SetRangeUser(lo*2, hi*2);

  if(!xLabel) graph->Draw("ALP");
  else { 
    graph->Draw("0AP");
    gPad->Update();
    graph->GetXaxis()->LabelsOption("h");
    graph->GetXaxis()->SetTickLength(0);
    TF1 *f1=new TF1("f1","x", c->GetUxmin(),c->GetUxmax());
    TGaxis *labels = new TGaxis(c->GetUxmin(),c->GetUymin(),c->GetUxmax(),c->GetUymin(),"f1",8);
    labels->SetLabelSize(0);
    labels->Draw("same");

  }

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}

// Loop through x-bins, loop through y-bin contents in that x-bin. Count bin contents greater than zero and less than zero.
TH1D *GetAsymmetryPlot(TH2D *h2) { 

  // Set this to a profile at first of the first to copy the binning
  TH1D *h1 = h2->ProfileX();

  // Loop through x-bins 
  for(int i_xbin = 0; i_xbin < h2->GetNbinsX(); i_xbin++) {

    double x = h1->GetBinCenter(i_xbin+1);

    // Project the x-bin along y 
    TH1D *projY = h2->ProjectionY("projY",i_xbin+1,i_xbin+1);

    int up = 0;
    int down = 0;

    // Loop through y-bins
    for(int i_ybin = 0; i_ybin < projY->GetNbinsX(); i_ybin++) {

      double binContent = projY->GetBinContent(i_ybin+1);
      double binCenter = projY->GetBinCenter(i_ybin+1);

      if(binCenter > 0) up = up + binContent;
      else if(binCenter < 0) down = down + binContent;

    }

    double A = (double(up)-double(down))/(double(up)+double(down));

    // cout<<"x "<<x<<", up "<<up<<", down "<<down<<", A "<<A<<endl;

    h1->SetBinContent(i_xbin+1, A);

    // Same as ratio method
    double eA = sqrt((1-pow(A,2))/(up+down));

    h1->SetBinError(i_xbin+1, eA);

  } 

  return h1;

}

TH2D *ReweightedHist(TH2D *h1, string ds, string slice, string stn = "S12S18") {

  TH2D *h1_rw = (TH2D*)h1->Clone("h1_rw");

  // File for reweighting
  TFile *f = TFile::Open(("../Plots/MC/Acceptance/Plots/verticalAngleMomentumSlices."+ds+".root").c_str());

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

  // cout<<name<<endl;
  // cout<<"h2 = "<<h2<<endl;

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




void FoldWiggle(TGraphErrors *gr, const double phi, std::string config, std::string dMu, string dname) { //, std::string title, std::string fname) {

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

    // DrawTGraphErrors(gr_tmp, "", "../tmp/gr_tmp_"+to_string(i_fold));

    lo = lo + t_mod; 
    hi = hi + t_mod;

  }

  double ymin; double ymax;

  if(dMu == "1700ppm") {
    ymin = 10; 
    ymax = 10e4;
  }
  if(dMu == "5.4e-18") {
    ymin = 10; 
    ymax = 5e4;
  } else {
    ymin = 10; 
    ymax = 5e4;
  } 

  DrawFoldedWiggleSim(gr_, ";Time modulo "+std::to_string(t_mod)+" #mus;Tracks / 149 ns", "../Images/MC/"+dname+"/"+dMu+"/MainPlots/FoldedWiggle_"+to_string(t_mod)+"_"+config, 0, t_mod, ymin, ymax);

  return;
}

const double GetPhase(TFile *input, TFile *output, std::string config, std::string dMu) { //, bool noStations) { 

  int step = GetStep(config);
  std::string qual = GetQual(config);
  bool noStations = NoStations(config);
  bool twoStations = TwoStations(config);
  std::string recoLabel = RecoLabel(config);

  // Is it ok to combine the two stations like this? 
  // Seems intuitive to me. 
  // Might be good for debugging to have both though. 
  // Someone will definitely ask you for it. 

  double ymin; double ymax;

  string dname = "";

  // Could use some adjustment
  if(dMu == "1700ppm") {
    ymin = 5e3;
    ymax = 25e3;
    dname = "Bz";
  } else if(dMu == "5.4e-18") {
    ymin = 5e3;
    ymax = 50e3; 
    dname = "dMu";
  } else {
    ymin = 5e3;
    ymax = 25e3; 
    dname = "dMu";
  }

  cout<<"Getting phase"<<endl;

  TString wiggleName = "SimultaneousAnalysis/S0S12S18_Wiggle";
  TString wiggleModName = "SimultaneousAnalysis/S0S12S18_Wiggle_Modulo";

  if(noStations) {

    wiggleName = "SimultaneousAnalysis/Wiggle";
    wiggleModName = "SimultaneousAnalysis/Wiggle_Modulo";

  } 

  if(twoStations) { 

    wiggleName = "SimultaneousAnalysis/S12S18_Wiggle";
    wiggleModName = "SimultaneousAnalysis/S12S18_Wiggle_Modulo";

  }

  TH1D *h1_wiggle = (TH1D*)input->Get(wiggleName);
  TH1D *h1_wiggle_mod = (TH1D*)input->Get(wiggleModName);

  cout<<wiggleName<<endl;
  cout<<h1_wiggle<<endl;

  TGraphErrors *gr_wiggle = ConvertToTGraphErrors(h1_wiggle);
  TGraphErrors *gr_wiggle_mod = ConvertToTGraphErrors(h1_wiggle_mod);

  // Phase should be about zero in sim
  FitFivePar(gr_wiggle, 1300, 64.4, 0.35, OMEGA_A, 0, tmin, tmax);
  FitFivePar(gr_wiggle_mod, 1300, 64.4, 0.35, OMEGA_A, 0, 0, G2PERIOD);

  TF1 *wiggle = gr_wiggle->GetFunction("FiveParFunc");

  ymin = 1e9;
  ymax = -1e9;

  for(int i(0); i<gr_wiggle->GetN(); i++) {

    double yminus = gr_wiggle->GetY()[i] - gr_wiggle->GetEY()[i];
    double yplus = gr_wiggle->GetY()[i] + gr_wiggle->GetEY()[i];

    if(ymin>yminus) ymin = yminus - 0.1*yminus;
    if(ymax<yplus) ymax = yplus + 0.1*yplus;

  }

  DrawWiggle(gr_wiggle, ";Decay time [#mus];Tracks / 149 ns", "Sim", "../Images/MC/"+dname+"/"+dMu+"/MainPlots/fit_wiggle_"+config, double(h1_wiggle->GetEntries()), tmin, tmax, ymin, ymax);

  TF1 *modWiggle = gr_wiggle_mod->GetFunction("FiveParFunc");

  ymin = 1e9;
  ymax = -1e9;

  for(int i(0); i<gr_wiggle_mod->GetN(); i++) {

    double yminus = gr_wiggle_mod->GetY()[i] - gr_wiggle_mod->GetEY()[i];
    double yplus = gr_wiggle_mod->GetY()[i] + gr_wiggle_mod->GetEY()[i];

    if(ymin>yminus) ymin = yminus - 0.35*yminus;
    if(ymax<yplus) ymax = yplus + 0.50*yplus;

  }

  DrawModWiggleSim(gr_wiggle_mod, ";t_{g#minus2}^{mod} [#mus];Decays / 149.2 ns", "../Images/MC/"+dname+"/"+dMu+"/MainPlots/fit_mod_wiggle_"+config, recoLabel, double(h1_wiggle_mod->GetEntries()), ymin, ymax);

  const double phi = modWiggle->GetParameter(4);

  // Fold wiggle
  FoldWiggle(gr_wiggle, phi, config, dMu, dname);
 
  gr_wiggle->SetName("Wiggle");
  gr_wiggle->Write();
  gr_wiggle_mod->SetName("ModuloWiggle");
  gr_wiggle_mod->Write();

  return modWiggle->GetParameter(4); 

}

TGraphErrors *BlindedModuloGraph(const double phi_omega, TFile *input, TGraphErrors *gr_thetaY_mod, bool weighted, std::string stn = "S0S12S18_", double momentum = -1) { 

  // ================== First, shift phase ==================

  // Shift the phase 90 deg
  double phi_edm = phi_omega + M_PI/2.; 

  // Find a zero crossing 
  double t0 = phi_omega * G2PERIOD / (2*M_PI);
  double zeroCrossing = 8*G2PERIOD - t0;

  // ================== Second, get blinded A_EDM ================== 

  double dMu_blind = blinded_edm_value(false);  
  double delta_blind = GetDelta(dMu_blind);
  double delta_prime_blind = atan( tan(delta_blind) / gmagic) * 1e3; // mrad
  double omega_a = getBlinded.referenceValue(); 

  cout<<"\n----> reference omega_a = "<<omega_a<<endl;

  // ================== Third, inject blinded A_EDM into modulo plot ================== 

  // Define blinded EDM oscillation
  TF1 *blindEDMFunc = new TF1("blindEDMFunc",EDMFunc,zeroCrossing,zeroCrossing+G2PERIOD,3);

  blindEDMFunc->SetParNames("A_{EDM}^{BLIND}","#omega_{a}^{FIXED}","#phi");//,"offset");
  blindEDMFunc->SetParameters(delta_prime_blind,omega_a,phi_edm);//,xmin);

  blindEDMFunc->SetNpx(50000);

  // Best not to draw this :)
  // DrawTF1(blindEDMFunc,";Time [#mus];#LT#theta_{y}#GT [mrad]","../Images/Data/dMu/"+config+"/blindEDMFunc_"+qual);

  if(weighted) return InjectBlindedModuloWithWeighting(gr_thetaY_mod, blindEDMFunc, stn, momentum);
  else return InjectBlindedModulo(gr_thetaY_mod, blindEDMFunc);

}

tuple<vector<double>, vector<double>, vector<double>, vector<double>> GetPulls(TGraphErrors *gr) {

  vector<double> pulls_; 
  vector<double> x_; 
  vector<double> ex_;
  vector<double> zeros_;  

  TF1 *fit = (TF1*)gr->GetFunction("FullEDMFunc");

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

void SimultaneousAnalysis(const double phi, TFile *input, TFile *output, std::string config, std::string dMu, double scaleFactor, bool unblind) { 

  int step = GetStep(config);
  std::string qual = GetQual(config);
  std::string recoLabel = RecoLabel(config);

  double Ag2; double Aedm; 
  string dname = "";
  if(dMu=="1700ppm") {
    Ag2 = 1.7;
    Aedm = 0; 
    dname = "Bz";
  } else {
    Ag2 = 0;
    Aedm = 1.7; 
    dname = "dMu";
  }

  std::vector<string> stn_ = {"S0_", "S12_", "S18_", "S12S18_", "S0S12S18_"};
  if(NoStations(config)) stn_ = {""};
  if(TwoStations(config)) stn_ = {"S12_", "S18_", "S12S18_"};

  cout<<"---> SimultaneousAnalysis"<<endl;

  for(auto& stn : stn_) { 

    TH2D *h2_thetaY_mod = (TH2D*)input->Get(("SimultaneousAnalysis/"+stn+"ThetaY_vs_Time_Modulo").c_str());

    int nEntries = h2_thetaY_mod->GetEntries();

    // Vertical angle plot
    TH1D *px_thetaY_mod = h2_thetaY_mod->ProfileX();

    // Asymmetry plot
    TH2D *h2_thetaY_mod_clone = (TH2D*)h2_thetaY_mod->Clone("h2_thetaY_mod_clone");
    TH1D *h1_A_mod = GetAsymmetryPlot(h2_thetaY_mod_clone);

    // Blinding
    TGraphErrors *gr_thetaY_mod;
    if(!unblind) gr_thetaY_mod = BlindedModuloGraph(phi, input, ConvertToTGraphErrors(px_thetaY_mod), false);
    else gr_thetaY_mod = ConvertToTGraphErrors(px_thetaY_mod);

    // TODO: figure out blinding for asymmetry 
    TGraphErrors *gr_A_mod = ConvertToTGraphErrors(h1_A_mod);

    // Fits
    FullEDMFit(gr_thetaY_mod, Ag2, OMEGA_A, phi, Aedm, 0, 0, G2PERIOD);
    FullEDMFit(gr_A_mod, 0, OMEGA_A, phi, 0.0375e-6, 0, 0, G2PERIOD);

    TF1 *f_thetaY = gr_thetaY_mod->GetFunction("FullEDMFunc");
    TF1 *f_A = gr_A_mod->GetFunction("FullEDMFunc");

    double c_thetaY = f_thetaY->GetParameter(4);
    double c_A = f_A->GetParameter(4);

    double ymin_thetaY; double ymax_thetaY;
    double ymin_A; double ymax_A;

    if(dMu=="1700ppm") {

      ymin_thetaY = c_thetaY-0.70; ymax_thetaY =  c_thetaY+1; 
      ymin_A = c_A-0.5e-6; ymax_A =  c_A+0.5e-6;

    } else if(dMu=="5.4e-18") {

      ymin_thetaY = c_thetaY-0.55; ymax_thetaY =  c_thetaY+0.55;
      //ymin_thetaY = c_thetaY-5.5e-4; ymax_thetaY =  c_thetaY+5.5e-4;
      ymin_A = c_A-0.2e-6; ymax_A =  c_A+0.2e-6;

    } else {

      ymin_thetaY = c_thetaY-1.2; ymax_thetaY =  c_thetaY+1.2;
      ymin_A = c_A-0.5e-6; ymax_A =  c_A+0.5e-6;

    }

    DrawFullEDMFitSim(gr_thetaY_mod,  ";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 149.2 ns", ("../Images/MC/"+dname+"/"+dMu+"/MainPlots/"+stn+"edmFit_thetaY_"+config+"_"+to_string(unblind)).c_str(), "1000 < p [MeV] < 2500", recoLabel, double(nEntries), ymin_thetaY*scaleFactor, ymax_thetaY*scaleFactor, unblind);
    DrawFullEDMFitSim(gr_A_mod,  ";t_{g#minus2}^{mod} [#mus];Asymmetry / 149.2 ns", ("../Images/MC/"+dname+"/"+dMu+"/MainPlots/"+stn+"edmFit_asymmetry_"+config+"_"+to_string(unblind)).c_str(), "1000 < p [MeV] < 2500", recoLabel, double(nEntries), ymin_A*scaleFactor, ymax_A*scaleFactor, unblind);
    
    gr_thetaY_mod->SetName((stn+"edmFit_thetaY").c_str());
    gr_A_mod->SetName((stn+"edmFit_A").c_str());

    gr_thetaY_mod->Write();
    gr_A_mod->Write();

    tuple<vector<double>, vector<double>, vector<double>, vector<double>> pull_tuple = GetPulls(gr_thetaY_mod);

    TGraphErrors *gr_pull = GenerateTGraphErrors(get<0>(pull_tuple), get<1>(pull_tuple), get<2>(pull_tuple), get<3>(pull_tuple));
    gr_pull->SetName((stn+"edmFit_pull_vs_t").c_str());
    gr_pull->SetTitle(";t_{g#minus2}^{mod} [#mus];Pull / 149.2 #mus");//.c_str());
    gr_pull->Write();

    cout<<gr_pull<<endl;
    // This writes two histograms for some reason?
    TH1D *h_pull = new TH1D((stn+"edmFit_pull").c_str(), (stn+";Pull [#sigma]; Entries / 0.25 #sigma").c_str(), 40, -5, +5);
    for(auto& pull : get<1>(pull_tuple)) h_pull->Fill(pull);
    //h_pull->Fit("gaus", "Q");
    h_pull->Write();

    DrawTH1(h_pull, stn+";Pull [#sigma]; Entries / 0.25 #sigma", ("../Images/MC/"+dname+"/"+dMu+"/MainPlots/"+stn+"h_pull_"+config).c_str());

    //TH1D* GetResidual(TH1D* data, TF1* fit)
    TGraphErrors* gr_res = ConvertToTGraphErrors(GetResidual(px_thetaY_mod, f_thetaY));

    DrawTGraphErrors(gr_res, ";t_{g#minus2}^{mod} [#mus];Fit residual [mrad]", "../Images/MC/"+dname+"/"+dMu+"/MainPlots/"+stn+"gr_res_"+config);

    gr_res->SetName((stn+"edmFit_res").c_str());
    gr_res->Write();

  }

  return; 

}

void SimultaneousAnalysisFFT(const double phi, TFile *input, TFile *output, std::string config, std::string dMu, double scaleFactor, bool unblind) { 

  int step = GetStep(config);
  std::string qual = GetQual(config);
  std::string recoLabel = RecoLabel(config);

  double Ag2; double Aedm; 
  string dname = "";
  if(dMu=="1700ppm") {
    Ag2 = 1.7;
    Aedm = 0; 
    dname = "Bz";
  } else {
    Ag2 = 0;
    Aedm = 1.7; 
    dname = "dMu";
  }

  std::vector<string> stn_ = {"S0_", "S12_", "S18_", "S12S18_", "S0S12S18_"};
  if(NoStations(config)) stn_ = {""};
  if(TwoStations(config)) stn_ = {"S12_", "S18_", "S12S18_"};

  for(auto& stn : stn_) { 

    TH2D *h2_thetaY_vs_t = (TH2D*)input->Get(("SimultaneousAnalysis/"+stn+"ThetaY_vs_Time_20ns").c_str());
    //h2_thetaY_mod->RebinX(10);

    int nEntries = h2_thetaY_vs_t->GetEntries();
    TH1D *px_thetaY_vs_t = h2_thetaY_vs_t->ProfileX();

    // Blinding
    TGraphErrors *gr_thetaY_vs_t;

    if(!unblind) gr_thetaY_vs_t = BlindedModuloGraph(phi, input, ConvertToTGraphErrors(px_thetaY_vs_t), false);
    else gr_thetaY_vs_t = ConvertToTGraphErrors(px_thetaY_vs_t);

    gr_thetaY_vs_t->GetYaxis()->SetRangeUser(-.425, .425);

    FullEDMFit(gr_thetaY_vs_t, Ag2, OMEGA_A, phi, Aedm, 0, tmin, tmax); // xmin, xmax);

    TF1 *func = gr_thetaY_vs_t->GetFunction("FullEDMFunc");

    double c = func->GetParameter(4);
    double ymin; double ymax;
    if(dMu=="1700ppm") {
      ymin = c-0.70; ymax =  c+1; 
    } else if(dMu=="5.4e-18") {
      ymin = c-1.55; ymax =  c+1.55; 
    } else {
      ymin = c-1; ymax =  c+1;
    }

    // Get residuals
    // Unfortunatley we have to convert back into a TH1D
    TH1D *h_thetaY_vs_t = ConvertToTH1D(gr_thetaY_vs_t); 
    TH1D *h_res_thetaY_vs_t = GetResidual(h_thetaY_vs_t, func);
    TH1D *FFT_h_res_thetaY_vs_t = GetFFT(h_res_thetaY_vs_t);
    TH1D *FFT_px_thetaY_vs_t = GetFFT(h_thetaY_vs_t);

    DrawTH1(FFT_px_thetaY_vs_t, "FFT_px_thetaY_vs_t;Frequency [MHz];FFT magnitude / "+to_string(FFT_px_thetaY_vs_t->GetBinWidth(1))+" MHz", "../Images/MC/"+dname+"/"+dMu+"/MainPlots/"+stn+"FFT_px_thetaY_vs_t");
    FFT_px_thetaY_vs_t->SetName((stn+"FFT_px_thetaY_vs_t").c_str());
    FFT_px_thetaY_vs_t->Write();

    DrawTH1(h_res_thetaY_vs_t, "h_res_thetaY_vs_t;Decay time [#mus];Residual [mrad]",  "../Images/MC/"+dname+"/"+dMu+"/MainPlots/"+stn+"h_res_thetaY_vs_t");
    h_res_thetaY_vs_t->SetName((stn+"h_res_thetaY_vs_t").c_str());
    h_res_thetaY_vs_t->Write();

    DrawTH1(FFT_h_res_thetaY_vs_t, "FFT_h_res_thetaY_vs_t;Frequency [MHz];FFT magnitude / "+to_string(FFT_px_thetaY_vs_t->GetBinWidth(1))+" MHz",  "../Images/MC/"+dname+"/"+dMu+"/MainPlots/"+stn+"FFT_h_res_thetaY_vs_t");
    FFT_h_res_thetaY_vs_t->SetName((stn+"FFT_h_res_thetaY_vs_t").c_str());
    FFT_h_res_thetaY_vs_t->Write();

    DrawFullEDMFitSim(gr_thetaY_vs_t,  stn+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 20 ns", ("../Images/MC/"+dname+"/"+dMu+"/MainPlots/"+stn+"edmFit_noMod_thetaY_"+config+"_"+to_string(unblind)).c_str(), "1000 < p [MeV] < 2500", recoLabel, double(nEntries), ymin*scaleFactor, ymax*scaleFactor, unblind);
    gr_thetaY_vs_t->SetName((stn+"edmFit_thetaY_noMod").c_str());
    gr_thetaY_vs_t->Write();

  }

  return; 

}

//MomentumBinnedAnalysis(phi, input, output, config, dMu, scaleFactor, unblind, dataset, station, reweight); 
void MomentumBinnedAnalysis(const double phi, TFile *input, TFile *output, std::string config, std::string dMu, double scaleFactor, bool unblind, string dataset, string station, bool reweight) { 

  int step = GetStep(config);
  std::string qual = GetQual(config);
  std::string recoLabel = RecoLabel(config);

  bool mrf = MRF(config);

  vector<string> stn_ = { "S0_", "S12_", "S18_", "S12S18_", "S0S12S18_"}; 
  if(NoStations(config)) stn_ = {""};
  if(TwoStations(config)) stn_ = {"S12_", "S18_", "S12S18_"};

  int n_cuts = PMAX / step;
  int lo = -1; 
  int hi = -1;
  int i_cut_config = -1;

  double Ag2; double Aedm;
  string dname = ""; 
  if(dMu=="1700ppm") {
    Ag2 = 1.7;
    Aedm = 0;
    dname = "Bz"; 
  } else {
    Ag2 = 0;
    Aedm = 1.7; 
    dname = "dMu";
  }

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

      lo = 0 + i_cut*step; 
      if(mrf) lo = 0 + (i_cut * step * (1 / (2*GMAGIC))); 
      hi = step + i_cut*step;
      if(mrf) hi = (step * (1 / (2*GMAGIC)))  + (i_cut * step * (1 / (2*GMAGIC)));

      // Get hist
      std::string momSlice = std::to_string(lo)+"_"+std::to_string(hi);

      std::string pHistName = "MomentumBinnedAnalysis/"+stn+"Momentum_"+momSlice;
      TH1D *pHist = (TH1D*)input->Get((pHistName).c_str());

      //int p = (hi+lo)/2;

      double p = pHist->GetMean(); 
      double ep = pHist->GetMeanError();

      std::string h2_thetaY_mod_name = "MomentumBinnedAnalysis/"+stn+"ThetaY_vs_Time_Modulo_"+momSlice;
      TH2D *h2_thetaY_mod = (TH2D*)input->Get(h2_thetaY_mod_name.c_str());

      if(h2_thetaY_mod==0) continue;

      int nEntries = h2_thetaY_mod->GetEntries();

      // Skipping empty bins (reweighted plots have entries but they're all zeros.)
      if(nEntries == 0 || h2_thetaY_mod->GetRMS() == 0) continue;

      // Reweight again
      if(reweight) h2_thetaY_mod = ReweightedHist(h2_thetaY_mod, dataset, momSlice, station);

      p_.push_back(p);
      ep_.push_back(ep);

      // Run fits
      TH1D *px_thetaY_mod = h2_thetaY_mod->ProfileX();

      // Asymmetry plot
      TH2D *h2_thetaY_mod_clone = (TH2D*)h2_thetaY_mod->Clone("h2_thetaY_mod_clone");
      TH1D *h1_A_mod = GetAsymmetryPlot(h2_thetaY_mod_clone);

      // Blind
      TGraphErrors *gr_thetaY_mod;

      cout<<"\n Doing blinding"<<endl;
      if(!unblind) {
        // This is the issue
        gr_thetaY_mod = BlindedModuloGraph(phi, input, ConvertToTGraphErrors(px_thetaY_mod), true, stn, p);
        cout<<"\nhello"<<endl;
      } else gr_thetaY_mod = ConvertToTGraphErrors(px_thetaY_mod);
      cout<<"\n Done"<<endl;

      // TODO: figure out blinding for asymmetry 
      TGraphErrors *gr_A_mod = ConvertToTGraphErrors(h1_A_mod);

      output->cd("MomentumBinnedAnalysis/ModuloFits");

      cout<<"EDM fits"<<endl;
      FullEDMFit(gr_thetaY_mod , Ag2, OMEGA_A, phi, Aedm, 0, 0, G2PERIOD);
      FullEDMFit(gr_A_mod, 0, OMEGA_A, phi, 0.0375e-6, 0, 0, G2PERIOD);
      cout<<"Done EDM fits"<<endl;
      // EDIT
      gr_thetaY_mod->SetTitle( (stn+", "+std::to_string(lo)+" < p [MeV] < "+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 149.2 ns").c_str() );
      gr_thetaY_mod->Draw("AP");

      double c_tmp = gr_thetaY_mod->GetFunction("FullEDMFunc")->GetParameter(4);
      double ymin_tmp = c_tmp-1; double ymax_tmp = c_tmp+1;
      
      DrawFullEDMFitSim(gr_thetaY_mod, ";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 149.2 ns", ("../Images/MC/"+dname+"/"+dMu+"/MomBinnedAna/"+stn+"edmFit_thetaY_"+momSlice+"_"+config+"_"+to_string(unblind)).c_str(), std::to_string(lo)+" < p [MeV] < "+std::to_string(hi), recoLabel, double(nEntries), ymin_tmp, ymax_tmp, unblind);

      gr_thetaY_mod->SetName((stn+"moduloFit_thetaY_"+momSlice).c_str());
      gr_thetaY_mod->Write();

      gr_A_mod->SetTitle( (stn+", "+std::to_string(lo)+" < p [MeV] < "+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];Asymmetry / 50 ns").c_str() );
      gr_A_mod->Draw("AP");
      gr_A_mod->SetName((stn+"moduloFit_A_"+momSlice).c_str());
      gr_A_mod->Write();

      // Fill diluted tilt and vertical offset
      c_thetaY_.push_back(gr_thetaY_mod->GetFunction("FullEDMFunc")->GetParameter(4));
      ec_thetaY_.push_back(gr_thetaY_mod->GetFunction("FullEDMFunc")->GetParError(4));
      AEDM_thetaY_.push_back(gr_thetaY_mod->GetFunction("FullEDMFunc")->GetParameter(3));
      eAEDM_thetaY_.push_back(gr_thetaY_mod->GetFunction("FullEDMFunc")->GetParError(3));
      Ag2_thetaY_.push_back(gr_thetaY_mod->GetFunction("FullEDMFunc")->GetParameter(0));
      eAg2_thetaY_.push_back(gr_thetaY_mod->GetFunction("FullEDMFunc")->GetParError(0));

      c_A_.push_back(gr_A_mod->GetFunction("FullEDMFunc")->GetParameter(4));
      ec_A_.push_back(gr_A_mod->GetFunction("FullEDMFunc")->GetParError(4));
      AEDM_A_.push_back(gr_A_mod->GetFunction("FullEDMFunc")->GetParameter(3));
      eAEDM_A_.push_back(gr_A_mod->GetFunction("FullEDMFunc")->GetParError(3));
      Ag2_A_.push_back(gr_A_mod->GetFunction("FullEDMFunc")->GetParameter(0));
      eAg2_A_.push_back(gr_A_mod->GetFunction("FullEDMFunc")->GetParError(0));

      delete h2_thetaY_mod;
      delete h2_thetaY_mod_clone;
      delete px_thetaY_mod;
      delete h1_A_mod;
      delete gr_thetaY_mod;
      delete gr_A_mod;

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

      //} // extra scans

    } // Mom slices


    output->cd("MomentumBinnedAnalysis/ParameterScans");

    //TGraphErrors *c_vs_p_slice = GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_config]);
    //TGraphErrors *A_vs_p_slice = GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_
    c_vs_p_thetaY = GenerateTGraphErrors(p_, c_thetaY_, ep_, ec_thetaY_);
    AEDM_vs_p_thetaY = GenerateTGraphErrors(p_, AEDM_thetaY_, ep_, eAEDM_thetaY_);
    Ag2_vs_p_thetaY = GenerateTGraphErrors(p_, Ag2_thetaY_, ep_, eAg2_thetaY_);

    c_vs_p_A = GenerateTGraphErrors(p_, c_A_, ep_, ec_A_);
    AEDM_vs_p_A = GenerateTGraphErrors(p_, AEDM_A_, ep_, eAEDM_A_);
    Ag2_vs_p_A = GenerateTGraphErrors(p_, Ag2_A_, ep_, eAg2_A_);

    DrawScanGraph(c_vs_p_thetaY, stn+";Decay vertex momentum [MeV];c [mrad] / "+to_string(step)+" MeV", ("../Images/MC/"+dname+"/"+dMu+"/MomBinnedAna/"+stn+"c_vs_p_thetaY_"+config+"_"+to_string(unblind)).c_str(), step, false);
    DrawScanGraph(AEDM_vs_p_thetaY, stn+";Decay vertex momentum [MeV];A_{EDM} [mrad] / "+to_string(step)+" MeV", ("../Images/MC/"+dname+"/"+dMu+"/MomBinnedAna/"+stn+"AEDM_vs_p_thetaY_"+config+"_"+to_string(unblind)).c_str(), step, false);
    DrawScanGraph(Ag2_vs_p_thetaY, stn+";Decay vertex momentum [MeV];A_{g#minus2} [mrad] / "+to_string(step)+" MeV", ("../Images/MC/"+dname+"/"+dMu+"/MomBinnedAna/"+stn+"Ag2_vs_p_thetaY_"+config+"_"+to_string(unblind)).c_str(), step, false);

    c_vs_p_thetaY->SetName((stn+"c_vs_p_thetaY").c_str());
    AEDM_vs_p_thetaY->SetName((stn+"AEDM_vs_p_thetaY").c_str());
    Ag2_vs_p_thetaY->SetName((stn+"Ag2_vs_p_thetaY").c_str());

    c_vs_p_thetaY->Write();
    AEDM_vs_p_thetaY->Write();
    Ag2_vs_p_thetaY->Write();

    DrawScanGraph(c_vs_p_A, stn+";Decay vertex momentum [MeV];c / "+to_string(step)+" MeV", ("../Images/MC/"+dname+"/"+dMu+"/MomBinnedAna/"+stn+"c_vs_p_A_"+config+"_"+to_string(unblind)).c_str(), step, false);
    DrawScanGraph(AEDM_vs_p_A, stn+";Decay vertex momentum [MeV];A_{EDM} / "+to_string(step)+" MeV", ("../Images/MC/"+dname+"/"+dMu+"/MomBinnedAna/"+stn+"AEDM_vs_p_A_"+config+"_"+to_string(unblind)).c_str(), step, false);
    DrawScanGraph(Ag2_vs_p_A, stn+";Decay vertex momentum [MeV];A_{g#minus2} / "+to_string(step)+" MeV", ("../Images/MC/"+dname+"/"+dMu+"/MomBinnedAna/"+stn+"Ag2_vs_p_A_"+config+"_"+to_string(unblind)).c_str(), step, false); 
    
    c_vs_p_A->SetName((stn+"c_vs_p_A").c_str());
    AEDM_vs_p_A->SetName((stn+"AEDM_vs_p_A").c_str());
    Ag2_vs_p_A->SetName((stn+"Ag2_vs_p_A").c_str());

    c_vs_p_A->Write();
    AEDM_vs_p_A->Write();
    Ag2_vs_p_A->Write();

    thetaY_RMS_vs_p = GenerateTGraphErrors(p_, thetaY_RMS_, ep_, e_thetaY_RMS_);
    DrawScanGraph(thetaY_RMS_vs_p, stn+";Decay vertex momentum [MeV];#sigma#theta_{y} [mrad] / "+to_string(step)+" MeV", ("../Images/MC/"+dname+"/"+dMu+"/MomBinnedAna/"+stn+"theta_Y_RMS_vs_p_"+config+"_"+to_string(unblind)).c_str(), step, false);
    thetaY_RMS_vs_p->SetName((stn+"thetaY_RMS_vs_p").c_str());
    thetaY_RMS_vs_p->Write();

    Y_RMS_vs_p = GenerateTGraphErrors(p_, Y_RMS_, ep_, e_Y_RMS_);
    DrawScanGraph(Y_RMS_vs_p, stn+";Decay vertex momentum [MeV];#sigma_{y} [mm] / "+to_string(step)+" MeV", ("../Images/MC/"+dname+"/"+dMu+"/MomBinnedAna/"+stn+"Y_RMS_vs_p_"+config+"_"+to_string(unblind)).c_str(), step, false);
    Y_RMS_vs_p->SetName((stn+"Y_RMS_vs_p").c_str());
    Y_RMS_vs_p->Write();

    pY_RMS_vs_p = GenerateTGraphErrors(p_, pY_RMS_, ep_, e_pY_RMS_);
    DrawScanGraph(pY_RMS_vs_p, stn+";Decay vertex momentum [MeV]#sigma_{p_{y}} [MeV] / "+to_string(step)+" MeV", ("../Images/MC/"+dname+"/"+dMu+"/MomBinnedAna/"+stn+"Momentum_Y_RMS_vs_p_"+config+"_"+to_string(unblind)).c_str(), step, false);
    pY_RMS_vs_p->SetName((stn+"pY_RMS_vs_p").c_str());
    pY_RMS_vs_p->Write();

    N_vs_p = GenerateTGraphErrors(p_, N_, ep_, zeros_);
    DrawScanGraph(N_vs_p, stn+";Decay vertex momentum [MeV];Positrons / "+to_string(step)+" MeV", ("../Images/MC/"+dname+"/"+dMu+"/MomBinnedAna/"+stn+"N_vs_p_"+config+"_"+to_string(unblind)).c_str(), step, false);
    N_vs_p->SetName((stn+"N_vs_p").c_str());
    N_vs_p->Write();

    eAEDM_vs_p_thetaY = GenerateTGraphErrors(p_, eAEDM_thetaY_, ep_, zeros_);
    DrawScanGraph(eAEDM_vs_p_thetaY, stn+";Decay vertex momentum [MeV];#deltaA_{EDM} [mrad] / "+to_string(step)+" MeV", ("../Images/MC/"+dname+"/"+dMu+"/MomBinnedAna/"+stn+"eAEDM_vs_p_thetaY_"+config+"_"+to_string(unblind)).c_str(), step, false);
    eAEDM_vs_p_thetaY->SetName((stn+"eAEDM_vs_p_thetaY").c_str());
    eAEDM_vs_p_thetaY->Write();

    eAEDM_vs_p_A = GenerateTGraphErrors(p_, eAEDM_A_, ep_, zeros_);
    DrawScanGraph(eAEDM_vs_p_A, stn+";Decay vertex momentum [MeV];#deltaA_{EDM} / "+to_string(step)+" MeV", ("../Images/MC/"+dname+"/"+dMu+"/MomBinnedAna/"+stn+"eAEDM_vs_p_A_"+config+"_"+to_string(unblind)).c_str(), step, false);
    eAEDM_vs_p_A->SetName((stn+"eAEDM_vs_p_A").c_str());
    eAEDM_vs_p_A->Write();

    // Normalise A_EDM by max angular diff
    thetaYMaxDiff_vs_p = GenerateTGraphErrors(p_, thetaYMaxDiff_, ep_, e_thetaYMaxDiff_);
    DrawScanGraph(thetaYMaxDiff_vs_p, stn+";Decay vertex momentum [MeV];(#Delta#theta_{y})_{MAX} [mrad] / "+to_string(step)+" MeV", ("../Images/MC/"+dname+"/"+dMu+"/MomBinnedAna/"+stn+"thetaYMaxDiff_vs_p_"+config+"_"+to_string(unblind)).c_str(), step, false);
    thetaYMaxDiff_vs_p->SetName((stn+"thetaYMaxDiff_vs_p").c_str());
    thetaYMaxDiff_vs_p->Write();

    AEDMOverMaxDiff_vs_p = GenerateTGraphErrors(p_, AEDMOverMaxDiff_, ep_, e_AEDMOverMaxDiff_);
    DrawScanGraph(AEDMOverMaxDiff_vs_p, stn+";Decay vertex momentum [MeV];A_{EDM}/(#Delta#theta_{y})_{MAX} / "+to_string(step)+" MeV", ("../Images/MC/"+dname+"/"+dMu+"/MomBinnedAna/"+stn+"AEDMOverMaxDiff_vs_p_"+config+"_"+to_string(unblind)).c_str(), step, false);
    AEDMOverMaxDiff_vs_p->SetName((stn+"AEDMOverMaxDiff_vs_p").c_str());
    AEDMOverMaxDiff_vs_p->Write();

    AEDMOverThetaYRMS_vs_p = GenerateTGraphErrors(p_, AEDMOverThetaYRMS_, ep_, e_AEDMOverThetaYRMS_);
    DrawScanGraph(AEDMOverThetaYRMS_vs_p, stn+";Decay vertex momentum [MeV];A_{EDM}/#sigma#theta_{y} / "+to_string(step)+" MeV", ("../Images/MC/"+dname+"/"+dMu+"/MomBinnedAna/"+stn+"AEDMOverThetaYRMS_vs_p_"+config+"_"+to_string(unblind)).c_str(), step, false);
    AEDMOverThetaYRMS_vs_p->SetName((stn+"AEDMOverThetaYRMS_vs_p").c_str());
    AEDMOverThetaYRMS_vs_p->Write();

  } // Stn loop

  return; 

}


// station refers to the station used in the reweighting
void Run(string config, string dMu, string dataset, string station, const bool unblind, bool reweight, bool write) {

  bool mrf = MRF(config);
  double scaleFactor = ScaleFactor(mrf);
  bool noStations = NoStations(config);

  int step = GetStep(config);
  std::string qual = GetQual(config);

  // Sort out file names
  std::string inputName = "";
  std::string outputName = "";


  if(dMu=="1700ppm") { // Pretty safe since I don't think I'm going to be producing another Bz dMu anytime soon
    inputName += "../Plots/MC/Bz/"+dMu+"/Plots/edmPlots_"+config+".root";
    outputName += "../Plots/MC/Bz/"+dMu+"/Fits/";
  } else {
    inputName += "../Plots/MC/dMu/"+dMu+"/Plots/edmPlots_"+config+".root";
    outputName += "../Plots/MC/dMu/"+dMu+"/Fits/";
  }

  // WORK IN PROGRESS 
  //string ds = "Run-1a";
  if(unblind) outputName += "edmFits_unblinded_"+config;//+".root"; // +"_reweight"+station+dataset+".root";
  else outputName += "edmFits_blinded_"+config;//+".root"; // +"_reweight"+station+dataset+".root";

  if(reweight) outputName += "_reweight"+station+dataset;// +".root";

  outputName += ".root";

/*  if(unblind) outputName += "edmFits_unblinded_"+config+".root";
  else outputName += "edmFits_blinded_"+config+".root";*/

  if(!write) outputName = "delete_me.root";

  // Book files 
  TFile *input = TFile::Open((inputName).c_str());
  TFile *output = new TFile((outputName).c_str(), "RECREATE");

  cout<<"Reading\t"<<inputName<<" "<<input<<endl;

  output->mkdir("Wiggle");
  output->cd("Wiggle");

  const double phi = GetPhase(input, output, config, dMu);//, noStations); 

  cout<<"---> Got phase"<<endl;

  output->mkdir("SimultaneousAnalysis");
  output->cd("SimultaneousAnalysis");

  SimultaneousAnalysis(phi, input, output, config, dMu, scaleFactor, unblind);
  SimultaneousAnalysisFFT(phi, input, output, config, dMu, scaleFactor, unblind);

  output->mkdir("MomentumBinnedAnalysis");
  output->mkdir("MomentumBinnedAnalysis/ModuloFits");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans");

  MomentumBinnedAnalysis(phi, input, output, config, dMu, scaleFactor, unblind, dataset, station, reweight); 

  std::cout<<"\nWritten plots to root file:\n"<<outputName<<std::endl;

  std::cout<<"\n******* Results ******* "<<endl;

  std::vector<std::string> stn_ = {"S0_", "S12_", "S18_", "S12S18_", "S0S12S18_"};
  if(NoStations(config)) stn_ = {""};
  if(TwoStations(config)) stn_ = {"S12_", "S18_", "S12S18_"};

  if(!unblind) cout<<"BLINDED"<<endl;
  else cout<<"UNBLINDED"<<endl;;

  cout<<",chi2ndf, A_EDM [mrad],, A_{g-2} [mrad],, c [mrad]"<<endl;
  cout<<"Station, value, value, error, value, error, value, error"<<endl;

  for(auto& stn : stn_) { 

    TGraphErrors *gr_result = (TGraphErrors*)output->Get(("SimultaneousAnalysis/"+stn+"edmFit_thetaY").c_str());
    TF1 *f_result = (TF1*)gr_result->GetFunction("FullEDMFunc");

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

int main(int argc, char *argv[]) {

  string config= argv[1];
  string dMu = argv[2]; 
  string unblindStr = argv[3];

  // Direct reweighting 
  string dataset = argv[4];
  string station = argv[5];

  bool reweight = false;

  // TODO: come up with better soln to this
  if(dataset=="none") dataset = "";
  if(station=="none") station = ""; 

  if(dataset != "" && station != "") reweight = true; // eick

/*  std::string config = "trackReco_WORLD_250MeV_BQ";
  //  std::string config = "trackReco_WORLD_125MeV_BQ";
  std::string dMu = "5.4e-18"; 
  std::string unblindStr = "true";*/

  ////////////////////////////////////////////////////////

  bool unblind = false;
  if(unblindStr == "true") unblind = true;
  else if(unblindStr == "false") unblind = false;
  else cerr<<"Please input unblinding bool as 'true' or 'false'";

  // Ok for sim
  if(unblind) {
    cout<<"*** Unblind is set to true ****"<<endl;
  }
  ////////////////////////////////////////////////////////

  bool write = true;
  

  Run(config, dMu, dataset, station, unblind, reweight, write); 

  return 0;

}
