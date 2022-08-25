#include <iostream>

#include "FancyDraw.h"
#include "Utils.h"
#include "RootInclude.h"

// ./BlindedEDMFitter.exe | tail -n 6 | tee ../Sheets/Run-1b/SimultaneousFitResults_250MeV_BQ.csv
using namespace std;

double injectionFactor = sqrt(2);

double xmin = 7*G2PERIOD*injectionFactor;
double xmax = 70*G2PERIOD*injectionFactor;

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

  vector<std::string> keys_ = {"acceptedDecays_", "acceptedDecaysControl_", "allDecays_"};

  for(auto& key : keys_) {

      if(config.find(key) != std::string::npos) return true;
  }

  return false;

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
  int N = graph->GetN();
  double xmax = graph->GetPointX(N-1);
  double xmin = graph->GetPointX(0);

  double scale = 0.;
  if(step == 200) scale = 0.05;
  else if(step == 500) scale = 0.125;
  else if(step == 250) scale = 0.05;

  double offset = (xmax - xmin) * scale;
  xmin = xmin - offset; 
  xmax = xmax + offset;
  graph->GetXaxis()->SetRangeUser(xmin, xmax);

  graph->GetXaxis()->SetRangeUser(750, 2500);
  //graph->GetYaxis()->SetRangeUser(-0.06, 0.08);

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

void SimultaneousAnalysis(const double phi, TFile *input, TFile *output, std::string config, std::string dataset, double scaleFactor, bool noStations, bool unblind) { 

  int step = GetStep(config);
  std::string qual = GetQual(config);

  double Ag2; double Aedm; 
  string dname = "dMu";

  std::vector<string> stn_ = {"S0_", "S12_", "S18_", "S12S18_", "S0S12S18_"};
  if(noStations) stn_ = {""};

  for(auto& stn : stn_) { 

    TH2D *h2_thetaY_mod = (TH2D*)input->Get(("MainPlots/"+stn+"ThetaY_vs_Time_Modulo").c_str());

    int nEntries = h2_thetaY_mod->GetEntries();
    TH1D *px_thetaY_mod = h2_thetaY_mod->ProfileX();

    // Blinding
    TGraphErrors *gr_thetaY_mod = gr_thetaY_mod = ConvertToTGraphErrors(px_thetaY_mod);

    gr_thetaY_mod->GetYaxis()->SetRangeUser(-.425, .425);

    FullEDMFit(gr_thetaY_mod, 0, OMEGA_A * 1e3, phi, 0, 0, 0, G2PERIOD*injectionFactor);
    TF1 *func = gr_thetaY_mod->GetFunction("FullEDMFunc");

    double c = func->GetParameter(4);

    double ymin; double ymax;
    if(dataset=="1700ppm") {
      ymin = c-0.70; ymax =  c+1; 
    } else if(dataset=="5.4e-18") {
      ymin = c-0.55; ymax =  c+0.55; 
    } else {
      ymin = c-1; ymax =  c+1;
    }

    DrawFullEDMFitSim(gr_thetaY_mod,  stn+";t_{#sqrt{2}#timesg#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 149.2 ns", ("../Images/MC/"+dname+"/"+dataset+"/MainPlots/"+stn+"edmFit_"+config).c_str(), double(nEntries), ymin*scaleFactor, ymax*scaleFactor, true);
    gr_thetaY_mod->SetName((stn+"edmFit").c_str());
    gr_thetaY_mod->Write();

  }

  return; 

}

// TESTING
void SimultaneousAnalysisFFT(const double phi, TFile *input, TFile *output, std::string config, std::string dataset, double scaleFactor, bool noStations, bool unblind) { 

  int step = GetStep(config);
  std::string qual = GetQual(config);

  string dname = "dMu";

  std::vector<string> stn_ = {"S0_", "S12_", "S18_", "S12S18_", "S0S12S18_"};
  if(noStations) stn_ = {""};

  for(auto& stn : stn_) { 

    TH2D *h2_thetaY_vs_t = (TH2D*)input->Get(("MainPlots/"+stn+"ThetaY_vs_Time").c_str());
    //h2_thetaY_mod->RebinX(10);

    int nEntries = h2_thetaY_vs_t->GetEntries();
    TH1D *px_thetaY_vs_t = h2_thetaY_vs_t->ProfileX();
    DrawTH1(px_thetaY_vs_t, "px_thetaY_vs_t;Decay time [#mus];#LT#theta_{y}#GT [mrad]",  "../tmp/"+stn+"px_thetaY_vs_t");

    // FFT hist
    TH1D *FFT_px_thetaY_vs_t = GetFFT(px_thetaY_vs_t);

    DrawTH1(FFT_px_thetaY_vs_t, "FFT_px_thetaY_vs_t;Frequency [MHz];FFT magnitude", "../tmp/"+stn+"FFT_px_thetaY_vs_t");
    FFT_px_thetaY_vs_t->SetName((stn+"FFT_px_thetaY_vs_t").c_str());
    FFT_px_thetaY_vs_t->Write();

    // Blinding
    TGraphErrors *gr_thetaY_vs_t = ConvertToTGraphErrors(px_thetaY_vs_t);

    gr_thetaY_vs_t->GetYaxis()->SetRangeUser(-.425, .425);

    FullEDMFit(gr_thetaY_vs_t, 0, OMEGA_A * 1e3 / injectionFactor, phi, 0, 0, xmin, xmax); // xmin, xmax);

    TF1 *func = gr_thetaY_vs_t->GetFunction("FullEDMFunc");

    // Get residuals

    // Unfortunatley we have to convert back into a TH1D
    TH1D *h_thetaY_vs_t = ConvertToTH1D(gr_thetaY_vs_t); 
    TH1D *h_res_thetaY_vs_t = GetResidual(h_thetaY_vs_t, func);
    TH1D *FFT_h_res_thetaY_vs_t = GetFFT(h_res_thetaY_vs_t);

    DrawTH1(h_res_thetaY_vs_t, "h_res_thetaY_vs_t;Decay time [#mus];Residual [mrad]",  "../Images/MC/"+dname+"/"+dataset+"/MainPlots/"+stn+"h_res_thetaY_vs_t");
    h_res_thetaY_vs_t->SetName((stn+"h_res_thetaY_vs_t").c_str());
    h_res_thetaY_vs_t->Write();

    DrawTH1(FFT_h_res_thetaY_vs_t, "FFT_h_res_thetaY_vs_t;Frequency [MHz];FFT magnitude",  "../Images/MC/"+dname+"/"+dataset+"/MainPlots/"+stn+"FFT_h_res_thetaY_vs_t");
    FFT_h_res_thetaY_vs_t->SetName((stn+"FFT_h_res_thetaY_vs_t").c_str());
    FFT_h_res_thetaY_vs_t->Write();

    double c = func->GetParameter(4);

    double ymin; double ymax;
    if(dataset=="1700ppm") {
      ymin = c-0.70; ymax =  c+1; 
    } else if(dataset=="5.4e-18") {
      ymin = c-1.55; ymax =  c+1.55; 
    } else {
      ymin = c-1; ymax =  c+1;
    }

    DrawFullEDMFitSim(gr_thetaY_vs_t,  stn+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 149.2 ns", ("../Images/MC/"+dname+"/"+dataset+"/MainPlots/"+stn+"edmFit_noMod_"+config+"_"+to_string(unblind)).c_str(), double(nEntries), ymin*scaleFactor, ymax*scaleFactor, unblind);
    gr_thetaY_vs_t->SetName((stn+"edmFit_noMod").c_str());
    gr_thetaY_vs_t->Write();

  }

  return; 

}

void MomentumBinnedAnalysis(const double phi, TFile *input, TFile *output, std::string config, std::string dataset, double scaleFactor, bool noStations, bool unblind) { 

  int step = GetStep(config);
  std::string qual = GetQual(config);

  bool mrf = MRF(config);

  vector<string> stn_ = { "S0_", "S12_", "S18_", "S12S18_", "S0S12S18_"}; 
  if(noStations) stn_ = {""};

  int n_cuts = PMAX / step;
  int lo = -1; 
  int hi = -1;
  int i_cut_config = -1;

  string dname = "dMu";

  for(int i_stn = 0; i_stn < stn_.size(); i_stn++) {

    TGraphErrors* AEDM_vs_p;
    TGraphErrors* Ag2_vs_p;
    TGraphErrors* c_vs_p; 
    TGraphErrors* thetaY_RMS_vs_p;
    TGraphErrors* Y_RMS_vs_p;
    TGraphErrors* pY_RMS_vs_p;
    TGraphErrors* N_vs_p;
    TGraphErrors* eAEDM_vs_p;
    TGraphErrors* thetaYMaxDiff_vs_p;
    TGraphErrors* AEDMOverMaxDiff_vs_p;

    std::vector<double> c_;
    std::vector<double> ec_;
    std::vector<double> p_;
    std::vector<double> ep_;
    std::vector<double> AEDM_;
    std::vector<double> eAEDM_;
    std::vector<double> Ag2_;
    std::vector<double> eAg2_;

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
      int p = (hi+lo)/2;

      std::string h2_thetaY_mod_name = "MomSlices/"+stn+"ThetaY_vs_Time_Modulo_"+momSlice;
      TH2D *h2_thetaY_mod = (TH2D*)input->Get(h2_thetaY_mod_name.c_str());

      if(h2_thetaY_mod==0) continue;

      int nEntries = h2_thetaY_mod->GetEntries();

      // Avoid out of range errors after skipping an empty bin
      if(nEntries == 0) continue;

      p_.push_back(p);
      ep_.push_back(0.);//step/2);

      // Run fits
      TH1D *px_thetaY_mod = h2_thetaY_mod->ProfileX();


      // Blind
      TGraphErrors *gr_thetaY_mod = ConvertToTGraphErrors(px_thetaY_mod);

      output->cd("MomentumBinnedAnalysis/ModuloFits/MomSlices");

      FullEDMFit(gr_thetaY_mod , 0, OMEGA_A * 1e3 / injectionFactor, phi, 0, 0, 0, G2PERIOD*injectionFactor);
      //DrawFullEDMFitData(gr_thetaY_mod, stn+", "+std::to_string(lo)+" < p [MeV] < "+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", dataset, ("../Images/MC/dMu/"+config+"/MomBinnedAna/"+stn+"_dMuFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -5*scaleFactor, 5*scaleFactor, true);// , double(nEntries), true);
      gr_thetaY_mod->SetTitle( (stn+", "+std::to_string(lo)+" < p [MeV] < "+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 149.2 ns").c_str() );
      gr_thetaY_mod->Draw("AP");
      gr_thetaY_mod->SetName((stn+"ModuloFit_"+momSlice).c_str());
      gr_thetaY_mod->Write();

      // Fill diluted tilt and vertical offset
      c_.push_back(gr_thetaY_mod->GetFunction("FullEDMFunc")->GetParameter(4));
      ec_.push_back(gr_thetaY_mod->GetFunction("FullEDMFunc")->GetParError(4));
      AEDM_.push_back(gr_thetaY_mod->GetFunction("FullEDMFunc")->GetParameter(3));
      eAEDM_.push_back(gr_thetaY_mod->GetFunction("FullEDMFunc")->GetParError(3));
      Ag2_.push_back(gr_thetaY_mod->GetFunction("FullEDMFunc")->GetParameter(0));
      eAg2_.push_back(gr_thetaY_mod->GetFunction("FullEDMFunc")->GetParError(0));

      delete h2_thetaY_mod;
      delete px_thetaY_mod;
      delete gr_thetaY_mod;

      //if(extraScans) { 

      std::string thetaYHistName = "MomSlices/"+stn+"ThetaY_"+momSlice;
      TH1D *thetaYHist = (TH1D*)input->Get((thetaYHistName).c_str());

      thetaY_RMS_.push_back(thetaYHist->GetRMS());
      e_thetaY_RMS_.push_back(thetaYHist->GetRMSError()); 

      std::string yHistName = "MomSlices/"+stn+"Y_"+momSlice;
      TH1D *yHist = (TH1D*)input->Get((yHistName).c_str());

      Y_RMS_.push_back(yHist->GetRMS());
      e_Y_RMS_.push_back(yHist->GetRMSError());

      std::string pYHistName = "MomSlices/"+stn+"MomentumY_"+momSlice;
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

      double AEDMOverMaxDiff = AEDM_.at(count) / thetaYMaxDiff;
      double e_AEDMOverMaxDiff = AEDMOverMaxDiff * sqrt( pow( (eAEDM_.at(count)/AEDM_.at(count)), 2) + pow( (e_thetaYMaxDiff/thetaYMaxDiff), 2) );

      AEDMOverMaxDiff_.push_back(AEDMOverMaxDiff);
      e_AEDMOverMaxDiff_.push_back(e_AEDMOverMaxDiff);

      count++;

      //} // extra scans

    } // Mom slices


    output->cd("MomentumBinnedAnalysis/ParameterScans/MomSlices");

    //TGraphErrors *c_vs_p_slice = GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_config]);
    //TGraphErrors *A_vs_p_slice = GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_
    c_vs_p = GenerateTGraphErrors(p_, c_, ep_, ec_);
    AEDM_vs_p = GenerateTGraphErrors(p_, AEDM_, ep_, eAEDM_);
    Ag2_vs_p = GenerateTGraphErrors(p_, Ag2_, ep_, eAg2_);

    DrawScanGraph(c_vs_p, stn+";Decay vertex momentum [MeV];c [mrad] / "+to_string(step)+" MeV", ("../Images/MC/"+dname+"/"+dataset+"/MomBinnedAna/"+stn+"c_vs_p_"+config+"_"+to_string(unblind)).c_str(), step, false);
    DrawScanGraph(AEDM_vs_p, stn+";Decay vertex momentum [MeV];A_{EDM} [mrad] / "+to_string(step)+" MeV", ("../Images/MC/"+dname+"/"+dataset+"/MomBinnedAna/"+stn+"AEDM_vs_p_"+config+"_"+to_string(unblind)).c_str(), step, false);
    DrawScanGraph(Ag2_vs_p, stn+";Decay vertex momentum [MeV];A_{g#minus2} [mrad] / "+to_string(step)+" MeV", ("../Images/MC/"+dname+"/"+dataset+"/MomBinnedAna/"+stn+"Ag2_vs_p_"+config+"_"+to_string(unblind)).c_str(), step, false);
  
    c_vs_p->SetName((stn+"c_vs_p").c_str());
    AEDM_vs_p->SetName((stn+"AEDM_vs_p").c_str());
    Ag2_vs_p->SetName((stn+"Ag2_vs_p").c_str());

    c_vs_p->Write();
    AEDM_vs_p->Write();
    Ag2_vs_p->Write();


    thetaY_RMS_vs_p = GenerateTGraphErrors(p_, thetaY_RMS_, ep_, e_thetaY_RMS_);
    DrawScanGraph(thetaY_RMS_vs_p, stn+";Decay vertex momentum [MeV];#sigma#theta_{y} [mrad] / "+to_string(step)+" MeV", ("../Images/MC/"+dname+"/"+dataset+"/MomBinnedAna/"+stn+"theta_Y_RMS_vs_p_"+config+"_"+to_string(unblind)).c_str(), step, false);
    thetaY_RMS_vs_p->SetName((stn+"thetaY_RMS_vs_p").c_str());
    thetaY_RMS_vs_p->Write();

    Y_RMS_vs_p = GenerateTGraphErrors(p_, Y_RMS_, ep_, e_Y_RMS_);
    DrawScanGraph(Y_RMS_vs_p, stn+";Decay vertex momentum [MeV];#sigma_{y} [mm] / "+to_string(step)+" MeV", ("../Images/MC/"+dname+"/"+dataset+"/MomBinnedAna/"+stn+"Y_RMS_vs_p_"+config+"_"+to_string(unblind)).c_str(), step, false);
    Y_RMS_vs_p->SetName((stn+"Y_RMS_vs_p").c_str());
    Y_RMS_vs_p->Write();

    pY_RMS_vs_p = GenerateTGraphErrors(p_, pY_RMS_, ep_, e_pY_RMS_);
    DrawScanGraph(pY_RMS_vs_p, stn+";Decay vertex momentum [MeV];#sigma_{p_{y}} [MeV] / "+to_string(step)+" MeV", ("../Images/MC/"+dname+"/"+dataset+"/MomBinnedAna/"+stn+"Momentum_Y_RMS_vs_p_"+config+"_"+to_string(unblind)).c_str(), step, false);
    pY_RMS_vs_p->SetName((stn+"pY_RMS_vs_p").c_str());
    pY_RMS_vs_p->Write();

    N_vs_p = GenerateTGraphErrors(p_, N_, ep_, zeros_);
    DrawScanGraph(N_vs_p, stn+";Decay vertex momentum [MeV];Positrons / "+to_string(step)+" MeV", ("../Images/MC/"+dname+"/"+dataset+"/MomBinnedAna/"+stn+"N_vs_p_"+config+"_"+to_string(unblind)).c_str(), step, false);
    N_vs_p->SetName((stn+"N_vs_p").c_str());
    N_vs_p->Write();

    eAEDM_vs_p = GenerateTGraphErrors(p_, eAEDM_, ep_, zeros_);
    DrawScanGraph(eAEDM_vs_p, stn+";Decay vertex momentum [MeV];#deltaA_{EDM} / "+to_string(step)+" MeV", ("../Images/MC/"+dname+"/"+dataset+"/MomBinnedAna/"+stn+"eAEDM_vs_p_"+config+"_"+to_string(unblind)).c_str(), step, false);
    eAEDM_vs_p->SetName((stn+"eAEDM_vs_p").c_str());
    eAEDM_vs_p->Write();

    // Normalise A_EDM by max angular diff
    thetaYMaxDiff_vs_p = GenerateTGraphErrors(p_, thetaYMaxDiff_, ep_, e_thetaYMaxDiff_);
    DrawScanGraph(thetaYMaxDiff_vs_p, stn+";Decay vertex momentum [MeV];(#Delta#theta_{y})_{MAX} [mrad] / "+to_string(step)+" MeV", ("../Images/MC/"+dname+"/"+dataset+"/MomBinnedAna/"+stn+"thetaYMaxDiff_vs_p_"+config+"_"+to_string(unblind)).c_str(), step, false);
    thetaYMaxDiff_vs_p->SetName((stn+"thetaYMaxDiff_vs_p").c_str());
    thetaYMaxDiff_vs_p->Write();

    AEDMOverMaxDiff_vs_p = GenerateTGraphErrors(p_, AEDMOverMaxDiff_, ep_, e_AEDMOverMaxDiff_);
    DrawScanGraph(AEDMOverMaxDiff_vs_p, stn+";Decay vertex momentum [MeV];A_{EDM}/(#Delta#theta_{y})_{MAX} / "+to_string(step)+" MeV", ("../Images/MC/"+dname+"/"+dataset+"/MomBinnedAna/"+stn+"AEDMOverMaxDiff_vs_p_"+config+"_"+to_string(unblind)).c_str(), step, false);
    AEDMOverMaxDiff_vs_p->SetName((stn+"AEDMOverMaxDiff_vs_p").c_str());
    AEDMOverMaxDiff_vs_p->Write();



  } // Stn loop

  return; 

}

void Run(std::string config, std::string dataset, const bool unblind, bool write) {

  bool mrf = MRF(config);
  double scaleFactor = ScaleFactor(mrf);
  bool noStations = NoStations(config);

  int step = GetStep(config);
  std::string qual = GetQual(config);

  // Sort out file names
  std::string inputName = "../Plots/MC/dMu/"+dataset+"/Plots/edmPlots_"+config+".root";
  std::string outputName = "../Plots/MC/dMu/"+dataset+"/Fits/edmFits_unblinded_"+config+".root";

  if(!write) outputName = "delete_me.root";

  // Book files 
  TFile *input = TFile::Open((inputName).c_str());
  TFile *output = new TFile((outputName).c_str(), "RECREATE");

  cout<<"Reading\t"<<inputName<<" "<<input<<endl;

  const double phi = 0;

  output->mkdir("SimultaneousAnalysis");
  output->cd("SimultaneousAnalysis");

  SimultaneousAnalysis(phi, input, output, config, dataset, scaleFactor, noStations, unblind);
  //SimultaneousAnalysisFFT(phi, input, output, config, dataset, scaleFactor, noStations, unblind);

  output->mkdir("MomentumBinnedAnalysis");
  output->mkdir("MomentumBinnedAnalysis/ModuloFits");
  output->mkdir("MomentumBinnedAnalysis/ModuloFits/MomSlices");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans/MomSlices");

  MomentumBinnedAnalysis(phi, input, output, config, dataset, scaleFactor, noStations, unblind);

  // VertOffset(input, output);

  std::cout<<"\nWritten plots to root file:\n"<<outputName<<std::endl;

  std::cout<<"\n******* Results ******* "<<endl;

  std::vector<std::string> stn_ = {"S0_", "S12_", "S18_", "S12S18_", "S0S12S18_"};
  if(noStations) stn_ = {""};

  if(!unblind) cout<<"BLINDED"<<endl;
  else cout<<"UNBLINDED"<<endl;;

  cout<<",chi2ndf, A_EDM [mrad],, A_{g-2} [mrad],, c [mrad]"<<endl;
  cout<<"Station, value, value, error, value, error, value, error"<<endl;

  for(auto& stn : stn_) { 

    TGraphErrors *gr_result = (TGraphErrors*)output->Get(("SimultaneousAnalysis/"+stn+"edmFit").c_str());
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

int main() { // int argc, char *argv[]) {

/*  std::string config= argv[1];
  std::string dataset = argv[2];
  std::string unblindStr = argv[3];*/

  std::string config = "trackReco_AAR_125MeV_BQ";
  std::string dataset = "O"; 
  std::string unblindStr = "true";

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

  Run(config, dataset, unblind, write);

  return 0;

}
