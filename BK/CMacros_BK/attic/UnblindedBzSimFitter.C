#include <iostream>

#include "FancyDraw.h"
#include "Utils.h"
#include "RootInclude.h"

std::string config = "1700ppm";

//std::string qual = "trackReco_AAR_250MeV_AQ";
std::string qual = "trackReco_AAR_250MeV_BQ";
//std::string qual = "trackReco_AAR_500MeV_BQ";

double xmin = 30;//7*G2PERIOD;
double xmax = 300;//70*G2PERIOD;

void OverlayScanGraphs(std::vector<TGraphErrors*> graphs, string stns[], std::string title, std::string fname, double ymin, double ymax, bool xLabel) {

  TCanvas *c = new TCanvas("c","c",800,600);

  TLegend *l = new TLegend(0.55,0.79,0.89,0.89);
  l->SetNColumns(3);
  l->SetBorderSize(0);

  graphs.at(0)->SetTitle(title.c_str());
  graphs.at(0)->GetXaxis()->SetTitleSize(.04);
  graphs.at(0)->GetYaxis()->SetTitleSize(.04);
  graphs.at(0)->GetXaxis()->SetTitleOffset(1.1);
  graphs.at(0)->GetYaxis()->SetTitleOffset(1.1);
  graphs.at(0)->GetXaxis()->CenterTitle(true);
  graphs.at(0)->GetYaxis()->CenterTitle(true);
  graphs.at(0)->GetYaxis()->SetMaxDigits(4);
  graphs.at(0)->GetYaxis()->SetRangeUser(ymin,ymax);

  int nGraphs = graphs.size();

  // Hack together x-axis range
  int N = graphs.at(0)->GetN();
  double xmax = graphs.at(0)->GetPointX(N-1);// + 50;
  double xmin = graphs.at(0)->GetPointX(0);// - 50; 
  double offset = (xmax - xmin) * 0.1; //0.05;
  xmin = xmin - offset; 
  xmax = xmax + offset;
  graphs.at(0)->GetXaxis()->SetRangeUser(xmin, xmax);

  graphs.at(0)->SetMarkerColor(kBlack);
  graphs.at(1)->SetMarkerColor(kBlue);
  graphs.at(2)->SetMarkerColor(kRed);


  if(xLabel) {
    graphs.at(0)->GetXaxis()->LabelsOption("h");
    graphs.at(0)->GetXaxis()->SetTickLength(0);
  }

  // Just S0 S12 S18
  nGraphs = 3;
  for(int i = 0; i < nGraphs; i++) {
    graphs.at(i)->SetMarkerStyle(20);
    if(i==3) graphs.at(i)->SetMarkerColor(kGreen-3);
    else if(i==4) graphs.at(i)->SetMarkerColor(kOrange+7);
    l->AddEntry(graphs.at(i), (stns[i]).c_str());
    if(i==0 && !xLabel) graphs.at(i)->Draw("AP");
    else if(i==0 && xLabel) graphs.at(i)->Draw("0AP");
    else graphs.at(i)->Draw("P SAME");
  }

  l->Draw("same");

  gPad->Update();

  if(xLabel) { 
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

int GetStep() {

  int step = 0;

  string key1 = "200MeV";
  string key2 = "500MeV";
  string key3 = "250MeV";

  if(qual.find(key1) != std::string::npos) { 
    step = 200;
  } else if(qual.find(key2) != std::string::npos) { 
    step = 500;
  } else if(qual.find(key3) != std::string::npos) { 
    step = 250;
  } else {
    cerr<<"Step size is unknown";
  }

  return step;

}

string GetQualString() {

  int step = 0;

  string key1 = "AQ";
  string key2 = "BQ";
  string key3 = "CQ";

  if(qual.find(key1) != std::string::npos) { 
    return "A";//key1;
  } else if(qual.find(key2) != std::string::npos) { 
    return "B";//key2;
  } else if(qual.find(key3) != std::string::npos) { 
    return "C";//key2;
  }else { 
    cerr<<"Quality string unknown";
    return "ERROR";
  }

}

string GetConfigString() {

  int step = 0;

  string key1 = "trackReco";
  string key2 = "trackTruth";
  string key3 = "trackRecoControl";

  if(qual.find(key1) != std::string::npos) { 
    return key1;
  } else if(qual.find(key2) != std::string::npos) { 
    return key2;
  } else if(qual.find(key3) != std::string::npos) { 
    return key3;
  }else { 
    cerr<<"Config string unknown";
    return "ERROR";
  }

}

void DrawScanGraph(TGraphErrors *graph, std::string title, std::string fname, bool xLabel) {

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

  int step = GetStep(); 
  double scale = 0.;
  if(step == 200) scale = 0.05;
  else if(step == 500) scale = 0.125;
  else if(step == 250) scale = 0.05;

  double offset = (xmax - xmin) * scale;
  xmin = xmin - offset; 
  xmax = xmax + offset;
  graph->GetXaxis()->SetRangeUser(xmin, xmax);


  if(!xLabel) graph->Draw("AP");
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

void FoldWiggle(TGraphErrors *gr) { //, std::string title, std::string fname) {

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

  DrawFoldedWiggle(gr_, ";Time modulo "+std::to_string(t_mod)+" #mus;Tracks / 149 ns", "../Images/MC/BzSim/"+config+"/Unblinded/WiggleMod_"+to_string(t_mod)+"_"+qual, 0, t_mod, 10, 5e4);

  return;
}

double GetPhase(TFile *input, TFile *output) { 

  // Is it ok to combine the two stations like this? 
  // Seems intuitive to me. 
  // Might be good for debugging to have both though. 
  // Someone will definitely ask you for it. 

  cout<<"Getting phase"<<endl;

  TH1D *h1_wiggle = (TH1D*)input->Get("MainPlots/S0S12S18_Wiggle");
  TH1D *h1_wiggle_mod = (TH1D*)input->Get("MainPlots/S0S12S18_Wiggle_Modulo");

  TGraphErrors *gr_wiggle = ConvertToTGraphErrors(h1_wiggle);
  TGraphErrors *gr_wiggle_mod = ConvertToTGraphErrors(h1_wiggle_mod);

  // Fold wiggle
  FoldWiggle(gr_wiggle);

  FitFivePar(gr_wiggle, 1300, 64.4, 0.35, OMEGA_A*1e3, 0, xmin, xmax);
  FitFivePar(gr_wiggle_mod, 1300, 64.4, 0.35, OMEGA_A*1e3, 0, 0, G2PERIOD);

  TF1 *wiggle = gr_wiggle->GetFunction("FiveParFunc");
  DrawWiggle(gr_wiggle, ";Decay time [#mus];Tracks / 149 ns", "", "../Images/MC/BzSim/"+config+"/Unblinded/fit_wiggle_"+qual, double(h1_wiggle->GetEntries()), xmin, xmax, 10, 40e3);

  TF1 *modWiggle = gr_wiggle_mod->GetFunction("FiveParFunc");
  DrawModWiggle(gr_wiggle_mod, ";t_{g#minus2}^{mod} [#mus];Tracks / 149 ns","../Images/MC/BzSim/"+config+"/Unblinded/fit_mod_wiggle_"+qual, double(h1_wiggle_mod->GetEntries()), 5e3, 25e3);
  double phi = modWiggle->GetParameter(4);
 
  gr_wiggle->SetName("Wiggle");
  gr_wiggle->Write();
  gr_wiggle_mod->SetName("ModuloWiggle");
  gr_wiggle_mod->Write();

  cout<<"Phase is "<<wiggle->GetParameter(4)<<endl;

  return wiggle->GetParameter(4);

}

/*void SimultaneousAnalysis(double phi, TFile *input, TFile *output, bool fullFit) {

  TH2D *h2_thetaY_mod = (TH2D*)input->Get("MainPlots/S0S12S18_ThetaY_vs_Time_Modulo");

  int nEntries = h2_thetaY_mod->GetEntries();
  TH1D *px_thetaY_mod = h2_thetaY_mod->ProfileX();
  std::cout << "Generated x-profile...\t: " << px_thetaY_mod << std::endl;

  TGraphErrors *gr_thetaY_mod = ConvertToTGraphErrors(px_thetaY_mod);

  gr_thetaY_mod->GetYaxis()->SetRangeUser(-.425, .425);

  // ======= Fit for A_Bz =====
  // Bz should be 1700 ppm or 0.17 mrad
  if(fullFit) {
    // Fit
      FullEDMFit(gr_thetaY_mod, 0.17, OMEGA_A * 1e3, phi, 0, 0);
      TF1 *func = gr_thetaY_mod->GetFunction("FullEDMFunc");
      DrawFullEDMFit(gr_thetaY_mod,  ";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/BzSim/"+config+"/Unblinded/fit_dMu_full_"+qual).c_str(), double(nEntries), -0.7, 0.2, true);//,unblind);

      cout<<"******\nABz = "<<func->GetParameter(0)<<"±"<<func->GetParError(0)<<"\n******"<<endl;

      gr_thetaY_mod->SetName("dMuFit");
      gr_thetaY_mod->Write();
      std::cout<<"A_EDM:\t"<<gr_thetaY_mod->GetFunction("FullEDMFunc")->GetParameter(3)<<std::endl;
    } else if(!fullFit) {
      SimpleEDMFit(gr_thetaY_mod, 0.15, OMEGA_A * 1e3, -.3);
      TF1 *func = gr_thetaY_mod->GetFunction("SimpleEDMFunc");
      DrawSimpleEDMFit(gr_thetaY_mod, ";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/BzSim/"+config+"/Unblinded/fit_dMu_simple_"+qual).c_str(), double(nEntries), -0.65, 0.4, true);
      gr_thetaY_mod->SetName("dMuFit");
      gr_thetaY_mod->Write();
      std::cout<<"A_EDM:\t"<<gr_thetaY_mod->GetFunction("SimpleEDMFunc")->GetParameter(0)<<std::endl;
    }

  return; 

}*/

void SimultaneousAnalysis(double phi, TFile *input, TFile *output) {

  std::vector<string> stn_ = {"S0", "S12", "S18", "S12S18", "S0S12S18"};

  for(auto& stn : stn_) { 

    TH2D *h2_thetaY_mod = (TH2D*)input->Get(("MainPlots/"+stn+"_ThetaY_vs_Time_Modulo").c_str());

    int nEntries = h2_thetaY_mod->GetEntries();
    TH1D *px_thetaY_mod = h2_thetaY_mod->ProfileX();
    std::cout << "Generated x-profile...\t: " << px_thetaY_mod << std::endl;

    // Blinding
    TGraphErrors *gr_thetaY_mod = ConvertToTGraphErrors(px_thetaY_mod);

    gr_thetaY_mod->GetYaxis()->SetRangeUser(-.425, .425);

    // Fit
    FullEDMFit(gr_thetaY_mod, 0.17, OMEGA_A * 1e3, phi, 0, 0);
    TF1 *func = gr_thetaY_mod->GetFunction("FullEDMFunc");

    // TODO: automate this
    double c = func->GetParameter(4);

    double ymin =  c-0.75; double ymax =  c+1.1; 

    DrawFullEDMFit(gr_thetaY_mod,  stn+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/BzSim/"+config+"/Unblinded/"+stn+"_fit_dMu_full_"+qual).c_str(), double(nEntries), ymin, ymax, true);//,unblind);
    gr_thetaY_mod->SetName((stn+"_dMuFit").c_str());
    gr_thetaY_mod->Write();

  }

  return; 

}

void MomentumBinnedAnalysis(double phi, TFile *input, TFile *output, bool fullFit, bool extraScans) {  

  vector<string> stns_ = { "S0", "S12", "S18", "S12S18", "S0S12S18"}; 

  int step = GetStep();
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
        ep_.push_back(step/2);

        // Run fits
        TH1D *px_thetaY_mod = h2_thetaY_mod->ProfileX();
        TGraphErrors *gr_thetaY_mod = ConvertToTGraphErrors(px_thetaY_mod);

        output->cd("MomentumBinnedAnalysis/ModuloFits/MomSlices");

        FullEDMFit(gr_thetaY_mod , 0, OMEGA_A * 1e3, phi, 0.15, 0);
        //DrawFullEDMFitData(gr_thetaY_mod, stn+", "+std::to_string(lo)+" < p [MeV] < "+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", dataset, ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+stn+"_dMuFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -5, 5, true);// , double(nEntries), true);
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

        if(extraScans && stn == "S0S12S18") { 

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

    DrawScanGraph(c_vs_p, stn+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;c [mrad]", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+stn+"_c_vs_p_"+to_string(step)+"MeV_"+qual).c_str(), false);
    DrawScanGraph(AEDM_vs_p, stn+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;A_{EDM} [mrad]", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+stn+"_AEDM_vs_p_"+to_string(step)+"MeV_"+qual).c_str(), false);
    DrawScanGraph(Ag2_vs_p, stn+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;A_{g#minus2} [mrad]", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+stn+"_Ag2_vs_p_"+to_string(step)+"MeV_"+qual).c_str(), false);
  
    c_vs_p->SetName((stn+"_c_vs_p").c_str());
    AEDM_vs_p->SetName((stn+"_AEDM_vs_p").c_str());
    Ag2_vs_p->SetName((stn+"_Ag2_vs_p").c_str());

    c_vs_p->Write();
    AEDM_vs_p->Write();
    Ag2_vs_p->Write();

    if(extraScans && stn == "S0S12S18") {

      thetaY_RMS_vs_p = GenerateTGraphErrors(p_, thetaY_RMS_, ep_, e_thetaY_RMS_);
      DrawScanGraph(thetaY_RMS_vs_p, stn+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#sigma#theta_{y} [mrad]", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+stn+"_theta_Y_RMS_vs_p_"+to_string(step)+"MeV_"+qual).c_str(), false);
      thetaY_RMS_vs_p->SetName((stn+"_thetaY_RMS_vs_p").c_str());
      thetaY_RMS_vs_p->Write();

      Y_RMS_vs_p = GenerateTGraphErrors(p_, Y_RMS_, ep_, e_Y_RMS_);
      DrawScanGraph(Y_RMS_vs_p, stn+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#sigma_{y} [mm]", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+stn+"_Y_RMS_vs_p_"+to_string(step)+"MeV_"+qual).c_str(), false);
      Y_RMS_vs_p->SetName((stn+"_Y_RMS_vs_p").c_str());
      Y_RMS_vs_p->Write();

      pY_RMS_vs_p = GenerateTGraphErrors(p_, pY_RMS_, ep_, e_pY_RMS_);
      DrawScanGraph(pY_RMS_vs_p, stn+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#sigma_{p_{y}} [MeV]", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+stn+"_Momentum_Y_RMS_vs_p_"+to_string(step)+"MeV_"+qual).c_str(), false);
      pY_RMS_vs_p->SetName((stn+"_pY_RMS_vs_p").c_str());
      pY_RMS_vs_p->Write();

      N_vs_p = GenerateTGraphErrors(p_, N_, ep_, zeros_);
      DrawScanGraph(N_vs_p, stn+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;Positrons", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+stn+"_N_vs_p_"+to_string(step)+"MeV_"+qual).c_str(), false);
      N_vs_p->SetName((stn+"_N_vs_p").c_str());
      N_vs_p->Write();

      eAEDM_vs_p = GenerateTGraphErrors(p_, eAEDM_, ep_, zeros_);
      DrawScanGraph(eAEDM_vs_p, stn+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#deltaA_{EDM}", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+stn+"_eAEDM_vs_p_"+to_string(step)+"MeV_"+qual).c_str(), false);
      eAEDM_vs_p->SetName((stn+"_eAEDM_vs_p").c_str());
      eAEDM_vs_p->Write();

      // Normalise A_EDM by max angular diff
      thetaYMaxDiff_vs_p = GenerateTGraphErrors(p_, thetaYMaxDiff_, ep_, e_thetaYMaxDiff_);
      DrawScanGraph(thetaYMaxDiff_vs_p, stn+";e^{+}_{LAB} p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;(#Delta#theta_{y})_{MAX} [mrad]", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+stn+"_thetaYMaxDiff_vs_p_"+to_string(step)+"MeV_"+qual).c_str(), false);
      thetaYMaxDiff_vs_p->SetName((stn+"_thetaYMaxDiff_vs_p").c_str());
      thetaYMaxDiff_vs_p->Write();

      AEDMOverMaxDiff_vs_p = GenerateTGraphErrors(p_, AEDMOverMaxDiff_, ep_, e_AEDMOverMaxDiff_);
      DrawScanGraph(AEDMOverMaxDiff_vs_p, stn+";e^{+}_{LAB} p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;A_{EDM}/(#Delta#theta_{y})_{MAX}", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+stn+"_AEDMOverMaxDiff_vs_p_"+to_string(step)+"MeV_"+qual).c_str(), false);
      AEDMOverMaxDiff_vs_p->SetName((stn+"_AEDMOverMaxDiff_vs_p").c_str());
      AEDMOverMaxDiff_vs_p->Write();

    } // Extra scans

  } // Stn loop

  return; 

}


int main() {

  bool write = true;
  bool fullFit = true;
  bool extraScans = true;

  // Read file
  std::string inputName = "../Plots/MC/BzSim/"+config+"/plots/BzSim_"+qual+".root";
 // cout<<inputName<<endl;
  TFile *input = TFile::Open(inputName.c_str());
  cout<<"Reading\t"<<inputName<<" "<<input<<endl;

  std::string outputName = "../Plots/MC/BzSim/"+config+"/fits/BzSim_unblinded_"+qual+".root"; 
  if(!write) outputName = "delete_me.root";

  TFile *output = new TFile(outputName.c_str(), "RECREATE");

  output->mkdir("Wiggle");
  output->cd("Wiggle");

  const double phi = GetPhase(input, output); 

  output->mkdir("SimultaneousAnalysis");
  output->cd("SimultaneousAnalysis");

  SimultaneousAnalysis(phi, input, output);

  output->mkdir("MomentumBinnedAnalysis");
  output->mkdir("MomentumBinnedAnalysis/ModuloFits");
  output->mkdir("MomentumBinnedAnalysis/ModuloFits/MomSlices");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans/MomSlices");

  MomentumBinnedAnalysis(phi, input, output, fullFit, extraScans);
  // VertOffset(input, output);

  std::cout<<"\nWritten plots to root file:\n"<<outputName<<std::endl;

  std::cout<<"\n******* Results ******* "<<endl;

  std::vector<std::string> stn_ = {"S0", "S12", "S18", "S12S18", "S0S12S18"};

  cout<<",chi2ndf, A_EDM [mrad],, A_{g-2} [mrad],, c [mrad]"<<endl;
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

  return 0;


}
