#include <iostream>

#include "FancyDraw.h"
#include "Utils.h"
#include "RootInclude.h"

#include "EDMBlinding.h"

// ./BlindedEDMFitter.exe | tail -n 6 >> ../Sheets/Run-1b/SimultaneousFitResults_250MeV_BQ.csv

//std::string config = "edmPlots_Run-1a_250MeV_BQ";
//std::string config = "edmPlots_Run-1b_250MeV_BQ";
//std::string config = "edmPlots_Run-1c_250MeV_BQ";
//std::string config = "edmPlots_Run-1d_250MeV_BQ";

double xmin = 30;//7*G2PERIOD;
double xmax = 300;//70*G2PERIOD;

const bool unblind = false;

int GetStep(std::string config) {

  int step = 0;

  std::string key1 = "200MeV";
  std::string key2 = "500MeV";
  std::string key3 = "250MeV";

  if(config.find(key1) != std::string::npos) { 
    step = 200;
  } else if(config.find(key2) != std::string::npos) { 
    step = 500;
  } else if(config.find(key3) != std::string::npos) { 
    step = 250;
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


void FoldWiggle(TGraphErrors *gr, std::string config) { //, std::string title, std::string fname) {

  int step = GetStep(config);
  std::string qual = GetQual(config);
  std::string dataset = GetDataset(config);

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

  double fit_start_time = 30.6;
  double fit_end_time = 305.6;

  for (int i_fold = 0; i_fold < folds; i_fold++) { 

    TGraphErrors *gr_tmp = new TGraphErrors();
    
    int n = 0; 
    int i_point_mod = 0; 

    while(gr->GetPointX(i_point) >= lo && gr->GetPointX(i_point) < hi) {

      double x = gr->GetPointX(i_point_mod); double ex = gr->GetErrorX(i_point_mod);
      double y = gr->GetPointY(i_point); double ey = gr->GetErrorY(i_point);

      if(y == 0) { 
        i_point++;
        i_point_mod++;
        continue;
      }

      gr_tmp->SetPoint(n, x, y);
      gr_tmp->SetPointError(n, ex, ey); 

      n++; i_point++; i_point_mod++;

    }

    double xmin = gr_tmp->GetPointX(0);
    if(i_fold == 0) xmin = fit_start_time;

    FitFivePar(gr_tmp, 1300, 64, 0.35, OMEGA_A*1e3, 0, xmin, gr_tmp->GetPointX(n-1));

    gr_.push_back(gr_tmp);

    lo = lo + t_mod; 
    hi = hi + t_mod;

  }

  double ymin; double ymax;

  if(dataset == "Run-1a") {
    ymin = 1e1;
    ymax = 50e3;
  } else if(dataset == "Run-1d") {
    ymin = 5e1;
    ymax = 2.5e5;
  } else {
    ymin = 1e1;
    ymax = 2.5e5;
  } 


  DrawFoldedWiggleData(gr_, ";Time modulo "+std::to_string(t_mod)+" #mus;Tracks / 149 ns", dataset, "../Images/Data/dMu/"+dataset+"/FoldedWiggle_"+to_string(t_mod)+"_"+qual, 0, t_mod, ymin, ymax);

  return;
}

double GetPhase(TFile *input, TFile *output, std::string config) { 

  int step = GetStep(config);
  std::string qual = GetQual(config);
  std::string dataset = GetDataset(config);

  // Is it ok to combine the two stations like this? 
  // Seems intuitive to me. 
  // Might be good for debugging to have both though. 
  // Someone will definitely ask you for it. 

  cout<<"Getting phase"<<endl;

  TH1D *h1_wiggle = (TH1D*)input->Get("MainPlots/S12S18_Wiggle");
  TH1D *h1_wiggle_mod = (TH1D*)input->Get("MainPlots/S12S18_Wiggle_Modulo");

  TGraphErrors *gr_wiggle = ConvertToTGraphErrors(h1_wiggle);
  TGraphErrors *gr_wiggle_mod = ConvertToTGraphErrors(h1_wiggle_mod);

  // Fold wiggle
  FoldWiggle(gr_wiggle, config);

  FitFivePar(gr_wiggle, 1300, 64.4, 0.35, OMEGA_A*1e3, 2, xmin, xmax);
  FitFivePar(gr_wiggle_mod, 1300, 64.4, 0.35, OMEGA_A*1e3, 2, 0, G2PERIOD);

  TF1 *wiggle = gr_wiggle->GetFunction("FiveParFunc");
  DrawWiggle(gr_wiggle, ";Decay time [#mus];Tracks / 149 ns", dataset, "../Images/Data/dMu/"+dataset+"/fit_wiggle_"+qual, double(h1_wiggle->GetEntries()), xmin, xmax, 10, 10e4);

  TF1 *modWiggle = gr_wiggle_mod->GetFunction("FiveParFunc");

  double ymin; double ymax;

  if(dataset == "Run-1a") {
    ymin = 5e3;
    ymax = 40e3;
  } else if(dataset == "Run-1d") {
    ymin = 30e3;
    ymax = 140e3;
  } else {
    ymin = 5e3;
    ymax = 140e3;    
  }

  DrawModWiggleData(gr_wiggle_mod, ";t_{g#minus2}^{mod} [#mus];Tracks / 149 ns", dataset, "../Images/Data/dMu/"+dataset+"/fit_mod_wiggle_"+qual, double(h1_wiggle_mod->GetEntries()), ymin, ymax);

  double phi = modWiggle->GetParameter(4);
 
  gr_wiggle->SetName("Wiggle");
  gr_wiggle->Write();
  gr_wiggle_mod->SetName("ModuloWiggle");
  gr_wiggle_mod->Write();

  return modWiggle->GetParameter(4);

}

TGraphErrors *BlindedModuloGraph(double phi_omega, TFile *input, TGraphErrors *gr_thetaY_mod) { 

  // ================== First, shift phase ==================

  // Shift the phase 90 deg
  double phi_edm = phi_omega + M_PI/2.; 

  // Find a zero crossing 
  double t0 = phi_omega * G2PERIOD / (2*M_PI);
  double zeroCrossing = 8*G2PERIOD - t0;

  // ================== Second, get blinded A_EDM ================== 

  double dMu_blind = blinded_edm_value(unblind);  
  double delta_blind = GetDelta(dMu_blind);
  double omega_a = getBlinded.referenceValue(); 
  double tan_A_edm = tan(delta_blind) / gmagic;
  double A_edm = alpha*atan(tan_A_edm) * 1e3; 

  // ================== Third, inject blinded A_EDM into modulo plot ==================

  // Define blinded EDM oscillation
  TF1 *blindEDMFunc = new TF1("blindEDMFunc",EDMFunc,zeroCrossing,zeroCrossing+G2PERIOD,3);
  blindEDMFunc->SetParNames("A_{EDM}^{BLIND}","#omega_{a}^{FIXED}","#phi");//,"offset");
  blindEDMFunc->SetParameters(A_edm,omega_a,phi_edm);//,xmin);
  blindEDMFunc->SetNpx(50000);

  // Best not to draw this.
  // DrawTF1(blindEDMFunc,";Time [#mus];#LT#theta_{y}#GT [mrad]","../Images/Data/dMu/"+config+"/blindEDMFunc_"+qual);

  // Inject function into modulo plot
  return InjectBlindedModulo(gr_thetaY_mod, blindEDMFunc);

}

void SimultaneousAnalysis(double phi, TFile *input, TFile *output, std::string config) { 

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
    TGraphErrors *gr_thetaY_mod = BlindedModuloGraph(phi, input, ConvertToTGraphErrors(px_thetaY_mod));

    gr_thetaY_mod->GetYaxis()->SetRangeUser(-.425, .425);

    // Fit
    FullEDMFit(gr_thetaY_mod, 0, OMEGA_A * 1e3, phi, 0.15, 0);
    TF1 *func = gr_thetaY_mod->GetFunction("FullEDMFunc");

    // TODO: automate this
    double c = func->GetParameter(4);

    double ymin =  c-0.35; double ymax =  c+0.45; // Run-1a
    //double ymin =  0.35; double ymax =  0.80; // Run-1d

    DrawFullEDMFitData(gr_thetaY_mod,  stn+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", dataset, ("../Images/Data/dMu/"+dataset+"/"+stn+"_dMuFit_"+qual).c_str(), double(nEntries), ymin, ymax, false);//,unblind);
    gr_thetaY_mod->SetName((stn+"_dMuFit").c_str());
    gr_thetaY_mod->Write();

  }

  return; 

}

void MomentumBinnedAnalysis(double phi, TFile *input, TFile *output, bool extraScans, std::string config) { 

  int step = GetStep(config);
  std::string qual = GetQual(config);
  std::string dataset = GetDataset(config);

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
        int p = (hi+lo)/2;

        std::string h2_thetaY_mod_name = "MomSlices/"+stn+"_ThetaY_vs_Time_Modulo_"+momSlice;
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
        TGraphErrors *gr_thetaY_mod = BlindedModuloGraph(phi, input, ConvertToTGraphErrors(px_thetaY_mod));

        output->cd("MomentumBinnedAnalysis/ModuloFits/MomSlices");

        FullEDMFit(gr_thetaY_mod , 0, OMEGA_A * 1e3, phi, 0.15, 0);
        //DrawFullEDMFitData(gr_thetaY_mod, stn+", "+std::to_string(lo)+" < p [MeV] < "+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", dataset, ("../Images/Data/dMu/"+config+"/MomBinnedAna/"+stn+"_dMuFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -5, 5, true);// , double(nEntries), true);
        gr_thetaY_mod->SetTitle( (stn+", "+std::to_string(lo)+" < p [MeV] < "+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns").c_str() );
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

        if(extraScans) { 

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

      } // extra scans

    } // Mom slices


    output->cd("MomentumBinnedAnalysis/ParameterScans/MomSlices");

    //TGraphErrors *c_vs_p_slice = GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_config]);
    //TGraphErrors *A_vs_p_slice = GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_
    c_vs_p = GenerateTGraphErrors(p_, c_, ep_, ec_);
    AEDM_vs_p = GenerateTGraphErrors(p_, AEDM_, ep_, eAEDM_);
    Ag2_vs_p = GenerateTGraphErrors(p_, Ag2_, ep_, eAg2_);

    DrawScanGraph(c_vs_p, stn+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;c [mrad]", ("../Images/Data/dMu/"+dataset+"/MomBinnedAna/"+stn+"_c_vs_p_"+to_string(step)+"MeV_"+qual).c_str(), step, false);
    DrawScanGraph(AEDM_vs_p, stn+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;A_{EDM} [mrad]", ("../Images/Data/dMu/"+dataset+"/MomBinnedAna/"+stn+"_AEDM_vs_p_"+to_string(step)+"MeV_"+qual).c_str(), step, false);
    DrawScanGraph(Ag2_vs_p, stn+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;A_{g#minus2} [mrad]", ("../Images/Data/dMu/"+dataset+"/MomBinnedAna/"+stn+"_Ag2_vs_p_"+to_string(step)+"MeV_"+qual).c_str(), step, false);
  
    c_vs_p->SetName((stn+"_c_vs_p").c_str());
    AEDM_vs_p->SetName((stn+"_AEDM_vs_p").c_str());
    Ag2_vs_p->SetName((stn+"_Ag2_vs_p").c_str());

    c_vs_p->Write();
    AEDM_vs_p->Write();
    Ag2_vs_p->Write();

    if(extraScans) {

      thetaY_RMS_vs_p = GenerateTGraphErrors(p_, thetaY_RMS_, ep_, e_thetaY_RMS_);
      DrawScanGraph(thetaY_RMS_vs_p, stn+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#sigma#theta_{y} [mrad]", ("../Images/Data/dMu/"+dataset+"/MomBinnedAna/"+stn+"_theta_Y_RMS_vs_p_"+to_string(step)+"MeV_"+qual).c_str(), step, false);
      thetaY_RMS_vs_p->SetName((stn+"_thetaY_RMS_vs_p").c_str());
      thetaY_RMS_vs_p->Write();

      Y_RMS_vs_p = GenerateTGraphErrors(p_, Y_RMS_, ep_, e_Y_RMS_);
      DrawScanGraph(Y_RMS_vs_p, stn+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#sigma_{y} [mm]", ("../Images/Data/dMu/"+dataset+"/MomBinnedAna/"+stn+"_Y_RMS_vs_p_"+to_string(step)+"MeV_"+qual).c_str(), step, false);
      Y_RMS_vs_p->SetName((stn+"_Y_RMS_vs_p").c_str());
      Y_RMS_vs_p->Write();

      pY_RMS_vs_p = GenerateTGraphErrors(p_, pY_RMS_, ep_, e_pY_RMS_);
      DrawScanGraph(pY_RMS_vs_p, stn+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#sigma_{p_{y}} [MeV]", ("../Images/Data/dMu/"+dataset+"/MomBinnedAna/"+stn+"_Momentum_Y_RMS_vs_p_"+to_string(step)+"MeV_"+qual).c_str(), step, false);
      pY_RMS_vs_p->SetName((stn+"_pY_RMS_vs_p").c_str());
      pY_RMS_vs_p->Write();

      N_vs_p = GenerateTGraphErrors(p_, N_, ep_, zeros_);
      DrawScanGraph(N_vs_p, stn+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;Positrons", ("../Images/Data/dMu/"+dataset+"/MomBinnedAna/"+stn+"_N_vs_p_"+to_string(step)+"MeV_"+qual).c_str(), step, false);
      N_vs_p->SetName((stn+"_N_vs_p").c_str());
      N_vs_p->Write();

      eAEDM_vs_p = GenerateTGraphErrors(p_, eAEDM_, ep_, zeros_);
      DrawScanGraph(eAEDM_vs_p, stn+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#deltaA_{EDM}", ("../Images/Data/dMu/"+dataset+"/MomBinnedAna/"+stn+"_eAEDM_vs_p_"+to_string(step)+"MeV_"+qual).c_str(), step, false);
      eAEDM_vs_p->SetName((stn+"_eAEDM_vs_p").c_str());
      eAEDM_vs_p->Write();

      // Normalise A_EDM by max angular diff
      thetaYMaxDiff_vs_p = GenerateTGraphErrors(p_, thetaYMaxDiff_, ep_, e_thetaYMaxDiff_);
      DrawScanGraph(thetaYMaxDiff_vs_p, stn+";e^{+}_{LAB} p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;(#Delta#theta_{y})_{MAX} [mrad]", ("../Images/Data/dMu/"+dataset+"/MomBinnedAna/"+stn+"_thetaYMaxDiff_vs_p_"+to_string(step)+"MeV_"+qual).c_str(), step, false);
      thetaYMaxDiff_vs_p->SetName((stn+"_thetaYMaxDiff_vs_p").c_str());
      thetaYMaxDiff_vs_p->Write();

      AEDMOverMaxDiff_vs_p = GenerateTGraphErrors(p_, AEDMOverMaxDiff_, ep_, e_AEDMOverMaxDiff_);
      DrawScanGraph(AEDMOverMaxDiff_vs_p, stn+";e^{+}_{LAB} p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;A_{EDM}/(#Delta#theta_{y})_{MAX}", ("../Images/Data/dMu/"+dataset+"/MomBinnedAna/"+stn+"_AEDMOverMaxDiff_vs_p_"+to_string(step)+"MeV_"+qual).c_str(), step, false);
      AEDMOverMaxDiff_vs_p->SetName((stn+"_AEDMOverMaxDiff_vs_p").c_str());
      AEDMOverMaxDiff_vs_p->Write();

    } // Extra scans

  } // Stn loop

  return; 

}

void Run(std::string config) {

  int step = GetStep(config);
  std::string qual = GetQual(config);
  std::string dataset = GetDataset(config);

  bool write = true;
  bool fullFit = true; // Always keep this as true
  bool extraScans = true;

  // Read file
  std::string inputName = "../Plots/Data/dMu/"+dataset+"/Plots/edmPlots_"+dataset+"_"+to_string(step)+"MeV_"+qual+".root";
  TFile *input = TFile::Open(inputName.c_str());

  cout<<"Reading\t"<<inputName<<" "<<input<<endl;

  std::string outputName = "../Plots/Data/dMu/"+dataset+"/Fits/edmFits_blinded_"+dataset+"_"+to_string(step)+"MeV_"+qual+".root";
  if(!write) outputName = "delete_me.root";

  TFile *output = new TFile(outputName.c_str(), "RECREATE");

  output->mkdir("Wiggle");
  output->cd("Wiggle");

  const double phi = GetPhase(input, output, config); 

  output->mkdir("SimultaneousAnalysis");
  output->cd("SimultaneousAnalysis");

  SimultaneousAnalysis(phi, input, output, config);

  output->mkdir("MomentumBinnedAnalysis");
  output->mkdir("MomentumBinnedAnalysis/ModuloFits");
  output->mkdir("MomentumBinnedAnalysis/ModuloFits/MomSlices");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans/MomSlices");

  MomentumBinnedAnalysis(phi, input, output, extraScans, config);
  // VertOffset(input, output);

  std::cout<<"\nWritten plots to root file:\n"<<outputName<<std::endl;

  std::cout<<"\n******* Results ******* "<<endl;

  std::vector<std::string> stn_ = {"S12", "S18", "S12S18"};

  cout<<",chi2ndf, A_EDM^{BLIND} [mrad],, A_{g-2} [mrad],, c [mrad]"<<endl;
  cout<<"Station, value, value, error, value, error, value, error"<<endl;

  for(auto& stn : stn_) { 

    TGraphErrors *gr_result = (TGraphErrors*)output->Get(("SimultaneousAnalysis/"+stn+"_dMuFit").c_str());
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
int main() { // int argc, char *argv[]) {

  if(unblind) {
    cout<<"*** Unblind is set to true. Exiting ****"<<endl;
    return 0;
  }

  // string config = argv[1];
  std::string config = "edmPlots_Run-1d_250MeV_BQ";

  Run(config);

  return 0;

}
