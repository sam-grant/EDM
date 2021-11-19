#include <iostream>

#include "FancyDraw.h"
#include "Utils.h"
#include "RootInclude.h"

double injectionFactor = sqrt(2);

// can be run with ../Scripts/runBlindedEDMFits_Run1.sh

double xmin = 7*G2PERIOD*injectionFactor;
double xmax = 70*G2PERIOD*injectionFactor;

using namespace std;

int GetStep(std::string config) {

  int step = 0;

  if(config.find("200MeV") != std::string::npos) { 
    step = 200;
  } else if(config.find("125MeV") != std::string::npos) { 
    step = 125;
  } else if(config.find("500MeV") != std::string::npos) { 
    step = 500;
  } else if(config.find("250MeV") != std::string::npos) { 
    step = 250;
  } else {
    cerr<<"Step size is unknown";
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

string GetDataset(std::string config) {

  int step = 0;

  vector<std::string> keys_ = {"Run-1a", "Run-1b", "Run-1c", "Run-1d"};

  for(auto& key : keys_) { 

    if(config.find(key) != std::string::npos) { 

      return key;

    }

  }

  return "ERROR";

}

/*int step = GetStep();
  std::string qual = GetQual();
  std::string dataset = GetDataset();*/

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

void SimultaneousAnalysis(const double phi, TFile *input, TFile *output, std::string config) { 

  int step = GetStep(config);
  std::string qual = GetQual(config);
  std::string dataset = GetDataset(config);

  std::vector<string> stn_ = {"S12", "S18", "S12S18"};

  for(auto& stn : stn_) { 

    TH2D *h2_thetaY_mod = (TH2D*)input->Get(("MainPlots/"+stn+"_ThetaY_vs_Time_Modulo").c_str());

    int nEntries = h2_thetaY_mod->GetEntries();
    TH1D *px_thetaY_mod = h2_thetaY_mod->ProfileX();
    std::cout << "Generated x-profile...\t: " << px_thetaY_mod << std::endl;

    // Blinding
    TGraphErrors *gr_thetaY_mod = ConvertToTGraphErrors(px_thetaY_mod);

    gr_thetaY_mod->GetYaxis()->SetRangeUser(-.425, .425);

    // Fit
    FullEDMFit(gr_thetaY_mod, 0, OMEGA_A * 1e3 / injectionFactor, phi, 0, 0, 0, G2PERIOD*injectionFactor);
    TF1 *func = gr_thetaY_mod->GetFunction("FullEDMFunc");

    double c = func->GetParameter(4);
    double ymin =  c-0.35; double ymax =  c+0.45; 

    //DrawFullEDMFitData(gr_thetaY_mod,  stn+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", dataset, ("../Images/Data/dMu/"+dataset+"/MainPlots/"+stn+"_edmFit_"+qual).c_str(), double(nEntries), ymin, ymax, false);//,unblind);
    DrawFullEDMFitDataO(gr_thetaY_mod,  stn+";Time modulo #sqrt{2}#upointT_{g#minus2} [#mus];#LT#theta_{y}#GT [mrad] / 149.2 ns", dataset, ("../Images/Data/dMu/O/MainPlots/"+stn+"_edmFit_"+config).c_str(), double(nEntries), ymin, ymax);//,unblind);

    gr_thetaY_mod->SetName((stn+"_edmFit").c_str());
    gr_thetaY_mod->Write();

  }

  return; 

}


void SimultaneousAnalysisFFT(const double phi, TFile *input, TFile *output, std::string config) { 

  int step = GetStep(config);
  std::string qual = GetQual(config);
  std::string dataset = GetDataset(config);

  std::vector<string> stn_ = {"S12", "S18", "S12S18"};

  for(auto& stn : stn_) { 

    TH2D *h2_thetaY_vs_t = (TH2D*)input->Get(("MainPlots/"+stn+"_ThetaY_vs_Time").c_str());

    int nEntries = h2_thetaY_vs_t->GetEntries();
    TH1D *px_thetaY_vs_t = h2_thetaY_vs_t->ProfileX();
    DrawTH1(px_thetaY_vs_t, "px_thetaY_vs_t;Decay time [#mus];#LT#theta_{y}#GT [mrad]",  "../Images/Data/dMu/O/MainPlots/"+stn+"_px_thetaY_vs_t_"+config);
    px_thetaY_vs_t->SetName((stn+"_px_thetaY_vs_t").c_str());
    px_thetaY_vs_t->Write();

    // FFT hist
    TH1D *FFT_px_thetaY_vs_t = GetFFT(px_thetaY_vs_t);

    DrawTH1(FFT_px_thetaY_vs_t, "FFT_px_thetaY_vs_t;Frequency [MHz];FFT magnitude", "../Images/Data/dMu/O/MainPlots/"+stn+"_FFT_px_thetaY_vs_t_"+config);
    FFT_px_thetaY_vs_t->Draw("HIST");
    FFT_px_thetaY_vs_t->SetName((stn+"_FFT_px_thetaY_vs_t").c_str());
    FFT_px_thetaY_vs_t->Write();

    TGraphErrors *gr_thetaY_vs_t = ConvertToTGraphErrors(px_thetaY_vs_t);

    gr_thetaY_vs_t->GetYaxis()->SetRangeUser(-.425, .425);

    FullEDMFit(gr_thetaY_vs_t, 0, OMEGA_A * 1e3 / injectionFactor, phi, 0, 0, xmin, xmax);

    TF1 *func = gr_thetaY_vs_t->GetFunction("FullEDMFunc");

    cout<<"func\t"<<func<<endl; 

    double c = func->GetParameter(4);
    double ymin =  c-1.35; double ymax =  c+1.45; 

    //DrawFullEDMFitData(gr_thetaY_mod,  stn+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", dataset, ("../Images/Data/dMu/"+dataset+"/MainPlots/"+stn+"_edmFit_"+qual).c_str(), double(nEntries), ymin, ymax, false);//,unblind);
    DrawFullEDMFitDataO(gr_thetaY_vs_t,  stn+";Decay time [#mus];#LT#theta_{y}#GT [mrad] / 149.2 ns", dataset, ("../Images/Data/dMu/O/MainPlots/"+stn+"_edmFit_noMod_"+config).c_str(), double(nEntries), ymin, ymax);//,unblind);

    gr_thetaY_vs_t->SetName((stn+"_edmFit_noMod").c_str());
    gr_thetaY_vs_t->Write();

    // Get residuals

    // we have to convert back into a TH1D
    TH1D *h_thetaY_vs_t = ConvertToTH1D(gr_thetaY_vs_t); 
    TH1D *h_res_thetaY_vs_t = GetResidual(h_thetaY_vs_t, func);
    TH1D *FFT_h_res_thetaY_vs_t = GetFFT(h_res_thetaY_vs_t);

    DrawTH1(h_res_thetaY_vs_t, "h_res_thetaY_vs_t;Decay time [#mus];Residual [mrad]",  "../Images/Data/dMu/O/MainPlots/"+stn+"_h_res_thetaY_vs_t_"+config);
    h_res_thetaY_vs_t->Draw("HIST");
    h_res_thetaY_vs_t->SetName((stn+"_h_res_thetaY_vs_t").c_str());
    h_res_thetaY_vs_t->Write();

    DrawTH1(FFT_h_res_thetaY_vs_t, "FFT_h_res_thetaY_vs_t;Frequency [MHz];FFT magnitude",  "../Images/Data/dMu/O/MainPlots/"+stn+"_FFT_h_res_thetaY_vs_t_"+config);
    FFT_h_res_thetaY_vs_t->Draw("HIST");
    FFT_h_res_thetaY_vs_t->SetName((stn+"_FFT_h_res_thetaY_vs_t").c_str());
    FFT_h_res_thetaY_vs_t->Write();

  }

  return; 

}

void MomentumBinnedAnalysis(const double phi, TFile *input, TFile *output, std::string config) { 

  int step = GetStep(config);
  std::string qual = GetQual(config);
  std::string dataset = "O";//GetDataset(config);

  vector<string> stns_ = { "S12", "S18", "S12S18"}; 

  int n_cuts = PMAX / step;
  int lo = -1; 
  int hi = -1;
  int i_cut_config = -1;

  for(int i_stn = 0; i_stn < stns_.size(); i_stn++) {

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

    string stn = stns_.at(i_stn);

    // ============ Momentum slices ============
    i_cut_config = 0; 

    int count = 0;

    for(int i_cut = 0; i_cut < n_cuts; i_cut++) {

      lo = 0 + i_cut*step; 
      hi = step + i_cut*step;

      // Get hist
      std::string momSlice = std::to_string(lo)+"_"+std::to_string(hi);

      std::string pHistName = "MomSlices/"+stn+"_Momentum_"+momSlice;
      TH1D *pHist = (TH1D*)input->Get((pHistName).c_str());

      double p = pHist->GetMean(); 
      double ep = pHist->GetMeanError();

      std::string h2_thetaY_mod_name = "MomSlices/"+stn+"_ThetaY_vs_Time_Modulo_"+momSlice;
      TH2D *h2_thetaY_mod = (TH2D*)input->Get(h2_thetaY_mod_name.c_str());

      if(h2_thetaY_mod==0) continue;

      int nEntries = h2_thetaY_mod->GetEntries();

      // Avoid out of range errors after skipping an empty bin
      if(nEntries == 0) continue;

      p_.push_back(p);
      ep_.push_back(ep);//step/2);

      // Run fits
      TH1D *px_thetaY_mod = h2_thetaY_mod->ProfileX();

      // Blind
      TGraphErrors *gr_thetaY_mod = ConvertToTGraphErrors(px_thetaY_mod);

      output->cd("MomentumBinnedAnalysis/ModuloFits/MomSlices");

      FullEDMFit(gr_thetaY_mod , 0, OMEGA_A * 1e3 / injectionFactor, phi, 0, 0, 0, G2PERIOD*injectionFactor);
      //DrawFullEDMFitData(gr_thetaY_mod, stn+", "+std::to_string(lo)+" < p [MeV] < "+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", dataset, ("../Images/Data/dMu/"+config+"/MomBinnedAna/"+stn+"_dMuFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -5, 5, true);// , double(nEntries), true);
      gr_thetaY_mod->SetTitle( (stn+", "+std::to_string(lo)+" < p [MeV] < "+std::to_string(hi)+";Time modulo [#mus];#LT#theta_{y}#GT [mrad] / 149.2 ns").c_str() );
      gr_thetaY_mod->Draw("AP");
      gr_thetaY_mod->SetName((stn+"_ModuloFit_"+momSlice).c_str());
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

      std::string thetaYHistName = "MomSlices/"+stn+"_ThetaY_"+momSlice;
      TH1D *thetaYHist = (TH1D*)input->Get((thetaYHistName).c_str());

      thetaY_RMS_.push_back(thetaYHist->GetRMS());
      e_thetaY_RMS_.push_back(thetaYHist->GetRMSError()); 

      std::string yHistName = "MomSlices/"+stn+"_Y_"+momSlice;
      TH1D *yHist = (TH1D*)input->Get((yHistName).c_str());

      Y_RMS_.push_back(yHist->GetRMS());
      e_Y_RMS_.push_back(yHist->GetRMSError());

      std::string pYHistName = "MomSlices/"+stn+"_MomentumY_"+momSlice;
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


    } // Mom slices


    output->cd("MomentumBinnedAnalysis/ParameterScans/MomSlices");

    //TGraphErrors *c_vs_p_slice = GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_config]);
    //TGraphErrors *A_vs_p_slice = GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_
    c_vs_p = GenerateTGraphErrors(p_, c_, ep_, ec_);
    AEDM_vs_p = GenerateTGraphErrors(p_, AEDM_, ep_, eAEDM_);
    Ag2_vs_p = GenerateTGraphErrors(p_, Ag2_, ep_, eAg2_);

    DrawScanGraph(c_vs_p, stn+";Decay vertex momentum [MeV];c [mrad] / "+to_string(step)+" MeV", ("../Images/Data/dMu/"+dataset+"/MomBinnedAna/"+stn+"_c_vs_p_"+config).c_str(), step, false);
    DrawScanGraph(AEDM_vs_p, stn+";Decay vertex momentum [MeV];A_{EDM} [mrad] / "+to_string(step)+" MeV", ("../Images/Data/dMu/"+dataset+"/MomBinnedAna/"+stn+"_AEDM_vs_p_"+config).c_str(), step, false);
    DrawScanGraph(Ag2_vs_p, stn+";Decay vertex momentum [MeV];A_{g#minus2} [mrad] / "+to_string(step)+" MeV", ("../Images/Data/dMu/"+dataset+"/MomBinnedAna/"+stn+"_Ag2_vs_p_"+config).c_str(), step, false);
  
    c_vs_p->SetName((stn+"_c_vs_p").c_str());
    AEDM_vs_p->SetName((stn+"_AEDM_vs_p").c_str());
    Ag2_vs_p->SetName((stn+"_Ag2_vs_p").c_str());

    c_vs_p->Write();
    AEDM_vs_p->Write();
    Ag2_vs_p->Write();

    thetaY_RMS_vs_p = GenerateTGraphErrors(p_, thetaY_RMS_, ep_, e_thetaY_RMS_);
    DrawScanGraph(thetaY_RMS_vs_p, stn+";Decay vertex momentum [MeV];#sigma#theta_{y} [mrad] / "+to_string(step)+" MeV", ("../Images/Data/dMu/"+dataset+"/MomBinnedAna/"+stn+"_theta_Y_RMS_vs_p_"+config).c_str(), step, false);
    thetaY_RMS_vs_p->SetName((stn+"_thetaY_RMS_vs_p").c_str());
    thetaY_RMS_vs_p->Write();

    Y_RMS_vs_p = GenerateTGraphErrors(p_, Y_RMS_, ep_, e_Y_RMS_);
    DrawScanGraph(Y_RMS_vs_p, stn+";Decay vertex momentum [MeV];#sigma_{y} [mm] / "+to_string(step)+" MeV", ("../Images/Data/dMu/"+dataset+"/MomBinnedAna/"+stn+"_Y_RMS_vs_p_"+config).c_str(), step, false);
    Y_RMS_vs_p->SetName((stn+"_Y_RMS_vs_p").c_str());
    Y_RMS_vs_p->Write();

    pY_RMS_vs_p = GenerateTGraphErrors(p_, pY_RMS_, ep_, e_pY_RMS_);
    DrawScanGraph(pY_RMS_vs_p, stn+";Decay vertex momentum [MeV];#sigma_{p_{y}} [MeV] /  "+to_string(step)+" MeV", ("../Images/Data/dMu/"+dataset+"/MomBinnedAna/"+stn+"_Momentum_Y_RMS_vs_p_"+config).c_str(), step, false);
    pY_RMS_vs_p->SetName((stn+"_pY_RMS_vs_p").c_str());
    pY_RMS_vs_p->Write();

    N_vs_p = GenerateTGraphErrors(p_, N_, ep_, zeros_);
    DrawScanGraph(N_vs_p, stn+";Decay vertex momentum [MeV];Positrons / "+to_string(step)+" MeV", ("../Images/Data/dMu/"+dataset+"/MomBinnedAna/"+stn+"_N_vs_p_"+config).c_str(), step, false);
    N_vs_p->SetName((stn+"_N_vs_p").c_str());
    N_vs_p->Write();

    eAEDM_vs_p = GenerateTGraphErrors(p_, eAEDM_, ep_, zeros_);
    DrawScanGraph(eAEDM_vs_p, stn+";Decay vertex momentum [MeV];#deltaA_{EDM} / "+to_string(step)+" MeV", ("../Images/Data/dMu/"+dataset+"/MomBinnedAna/"+stn+"_eAEDM_vs_p_"+config).c_str(), step, false);
    eAEDM_vs_p->SetName((stn+"_eAEDM_vs_p").c_str());
    eAEDM_vs_p->Write();

    // Normalise A_EDM by max angular diff
    thetaYMaxDiff_vs_p = GenerateTGraphErrors(p_, thetaYMaxDiff_, ep_, e_thetaYMaxDiff_);
    DrawScanGraph(thetaYMaxDiff_vs_p, stn+";Decay vertex momentum [MeV];(#Delta#theta_{y})_{MAX} [mrad] / "+to_string(step)+" MeV", ("../Images/Data/dMu/"+dataset+"/MomBinnedAna/"+stn+"_thetaYMaxDiff_vs_p_"+config).c_str(), step, false);
    thetaYMaxDiff_vs_p->SetName((stn+"_thetaYMaxDiff_vs_p").c_str());
    thetaYMaxDiff_vs_p->Write();

    AEDMOverMaxDiff_vs_p = GenerateTGraphErrors(p_, AEDMOverMaxDiff_, ep_, e_AEDMOverMaxDiff_);
    DrawScanGraph(AEDMOverMaxDiff_vs_p, stn+";Decay vertex momentum [MeV];A_{EDM}/(#Delta#theta_{y})_{MAX} / "+to_string(step)+" MeV", ("../Images/Data/dMu/"+dataset+"/MomBinnedAna/"+stn+"_AEDMOverMaxDiff_vs_p_"+config).c_str(), step, false);
    AEDMOverMaxDiff_vs_p->SetName((stn+"_AEDMOverMaxDiff_vs_p").c_str());
    AEDMOverMaxDiff_vs_p->Write();

    

  } // Stn loop

  return; 

}

void Run(std::string config, bool write) {

  int step = GetStep(config);
  std::string qual = GetQual(config);
  std::string dataset = "O";//GetDataset(config);

  // Read file
  std::string inputName = "../Plots/Data/dMu/"+dataset+"/Plots/edmPlots_"+config+".root";//to_string(step)+"MeV_"+qual+".root";
  TFile *input = TFile::Open(inputName.c_str());

  cout<<"Reading\t"<<inputName<<" "<<input<<endl;

  std::string outputName = "../Plots/Data/dMu/"+dataset+"/Fits/edmFits_unblinded_"+config+".root";//"_"+to_string(step)+"MeV_"+qual+".root";
  if(!write) outputName = "delete_me.root";

  TFile *output = new TFile(outputName.c_str(), "RECREATE");

  output->mkdir("Wiggle");
  output->cd("Wiggle");

  const double phi = 0; 

  output->mkdir("SimultaneousAnalysis");
  output->cd("SimultaneousAnalysis");

  SimultaneousAnalysis(phi, input, output, config);
  SimultaneousAnalysisFFT(phi, input, output, config);

  output->mkdir("MomentumBinnedAnalysis");
  output->mkdir("MomentumBinnedAnalysis/ModuloFits");
  output->mkdir("MomentumBinnedAnalysis/ModuloFits/MomSlices");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans/MomSlices");

  MomentumBinnedAnalysis(phi, input, output, config);
  // VertOffset(input, output);

  std::cout<<"\nWritten plots to root file:\n"<<outputName<<std::endl;

  std::cout<<"\n******* Results ******* "<<endl;

  std::vector<std::string> stn_ = {"S12", "S18", "S12S18"};

  cout<<",chi2ndf, A_EDM^{BLIND} [mrad],, A_{g-2} [mrad],, c [mrad]"<<endl;
  cout<<"Station, value, value, error, value, error, value, error"<<endl;

  for(auto& stn : stn_) { 

    TGraphErrors *gr_result = (TGraphErrors*)output->Get(("SimultaneousAnalysis/"+stn+"_edmFit").c_str());
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

// Uncomment if taking input from script
int main(int argc, char *argv[]) {

  ////////////////////////////////////////////////////////
  const bool unblind = true;

  if(unblind) {
    cout<<"*** Unblind is set to true (it should be) ****"<<endl;
  }
  ////////////////////////////////////////////////////////

  string config = argv[1];
  // config += "_125MeV_BQ";

  bool write = true;

  Run(config, write);

  return 0;

}
