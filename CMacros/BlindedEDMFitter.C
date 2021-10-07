#include <iostream>

#include "FancyDraw.h"
#include "Utils.h"
#include "RootInclude.h"

#include "EDMBlinding.h"

std::string config = "Run1a_TestPlots";
std::string qual = "test";
std::string dataset = config;

double xmin = 30;//7*G2PERIOD;
double xmax = 300;//70*G2PERIOD;

bool unblind = false;

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

  if(qual.find(key1) != std::string::npos) { 
    return key1;
  } else if(qual.find(key2) != std::string::npos) { 
    return key2;
  } else { 
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


double GetPhase(TFile *input, TFile *output) { 

  // Is it ok to combine the two stations like this? 
  // Seems intuitive to me. 
  // Might be good for debugging to have both though. 
  // Someone will definitely ask you for it. 
  
  cout<<"Getting phase"<<endl;

  TH1D *h1_wiggle = (TH1D*)input->Get("MainPlots/S12S18_Wiggle");
  TH1D *h1_wiggle_mod = (TH1D*)input->Get("MainPlots/S12S18_Wiggle_Modulo");

  TGraphErrors *gr_wiggle = ConvertToTGraphErrors(h1_wiggle);
  TGraphErrors *gr_wiggle_mod = ConvertToTGraphErrors(h1_wiggle_mod);

  FitFivePar(gr_wiggle, 1300, 64.4, 0.35, OMEGA_A*1e3, 2, xmin, xmax);
  FitFivePar(gr_wiggle_mod, 1300, 64.4, 0.35, OMEGA_A*1e3, 2, 0, G2PERIOD);

  TF1 *wiggle = gr_wiggle->GetFunction("FiveParFunc");
  DrawWiggle(gr_wiggle, ";Decay time [#mus];Tracks / 149 ns", "../Images/Data/dMu/"+config+"/fit_wiggle_"+qual, double(h1_wiggle->GetEntries()), xmin, xmax, 1e-1, 1e3);

  TF1 *modWiggle = gr_wiggle_mod->GetFunction("FiveParFunc");
  DrawModWiggleData(gr_wiggle_mod, ";t_{g#minus2}^{mod} [#mus];Tracks / 149 ns", dataset, "../Images/Data/dMu/"+config+"/fit_mod_wiggle_"+qual, double(h1_wiggle_mod->GetEntries()), 0, 600);//5e3, 25e3);

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

void SimultaneousAnalysis(double phi, TFile *input, TFile *output) {

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
    DrawFullEDMFitData(gr_thetaY_mod,  ";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", dataset, ("../Images/Data/dMu/"+config+"/"+stn+"_dMuFit_"+qual).c_str(), double(nEntries), -3, 3, false);//,unblind);
    gr_thetaY_mod->SetName((stn+"_dMuFit").c_str());
    gr_thetaY_mod->Write();
    std::cout<<"A_EDM:\t"<<gr_thetaY_mod->GetFunction("FullEDMFunc")->GetParameter(3)<<std::endl;

  }

  return; 

}

void MomentumBinnedAnalysis(double phi, TFile *input, TFile *output, bool fullFit, bool extraScans) { 

  string stns[] = { "S12", "S18", "S12S18"}; // {"S0S12S18", "S12S18", "S12", "S18", "S0"}; // 
  int n_stns = sizeof(stns)/sizeof(stns[0]);

  string cuts_configs[] = {"MomSlices", "MomSymCuts", "MomMinScan", "MomMaxScan"};
  int n_cut_config = sizeof(cuts_configs)/sizeof(cuts_configs[0]);

  vector<string> xLabels_;

  vector<TGraphErrors*> c_vs_p_[n_cut_config]; vector<TGraphErrors*> A_vs_p_[n_cut_config];

  // extra scans
  //if(extraScans) { 

  // Extra scans
  TGraphErrors* thetaY_RMS_vs_p_[n_cut_config];
  TGraphErrors* Y_RMS_vs_p_[n_cut_config];
  TGraphErrors* pY_RMS_vs_p_[n_cut_config];
  TGraphErrors* N_vs_p_[n_cut_config];
  TGraphErrors* eA_vs_p_[n_cut_config];
  // Max angular difference
  TGraphErrors* thetaYMaxDiff_vs_p_[n_cut_config];
  TGraphErrors* AOverMaxDiff_vs_p_[n_cut_config];

  int step = GetStep();
  int n_cuts = PMAX / step;
  int lo = -1; 
  int hi = -1;
  int i_cut_config = -1;

  string fitType = "full";
  if(!fullFit) fitType = "simple";

  for(int i_stn = 0; i_stn < n_stns; i_stn++) {

    std::vector<double> c_[n_cut_config];
    std::vector<double> ec_[n_cut_config];
    std::vector<double> p_[n_cut_config];
    std::vector<double> ep_[n_cut_config];
    std::vector<double> A_[n_cut_config];
    std::vector<double> eA_[n_cut_config];

    // Extra scans
    vector<double> thetaY_RMS_[n_cut_config];
    vector<double> e_thetaY_RMS_[n_cut_config];
    vector<double> Y_RMS_[n_cut_config];
    vector<double> e_Y_RMS_[n_cut_config];
    vector<double> pY_RMS_[n_cut_config];
    vector<double> e_pY_RMS_[n_cut_config];
    vector<double> N_[n_cut_config];
    vector<double> zeros_[n_cut_config];
    vector<double> thetaYMaxDiff_[n_cut_config];
    vector<double> e_thetaYMaxDiff_[n_cut_config];
    vector<double> AOverMaxDiff_[n_cut_config];
    vector<double> e_AOverMaxDiff_[n_cut_config];

    //vector<double> delta_A_[n_cut_config];
    //vector<double> e_delta_A_[n_cut_config];

    string stn = stns[i_stn]; // name = names_.at(i_stn);

    // ============ Momentum slices ============
    i_cut_config = 0; 

    int count = 0;

    for(int i_cut = 0; i_cut < n_cuts; i_cut++) {

        lo = 0 + i_cut*step; 
        hi = step + i_cut*step;

        // Get hist
        std::string momSlice = std::to_string(lo)+"_"+std::to_string(hi);
        int p = (hi+lo)/2;

        std::string moduloHistName = cuts_configs[i_cut_config]+"/"+stn+"_ThetaY_vs_Time_Modulo_"+momSlice;
        TH2D *moduloHist = (TH2D*)input->Get((moduloHistName).c_str());

        if(moduloHist==0) continue;

        int nEntries = moduloHist->GetEntries();

        // Avoid out of range errors after skipping an empty bin
        if(nEntries == 0) continue;

        //cout<<momSlice<<endl;

/*        // COMMENT
        if(qual=="trackReco_equalStats_500e3_AQ" && nEntries!=500e3 && stn == "S0S12S18") {
          cout<<momSlice<<endl;
          continue;
        }*/

        p_[i_cut_config].push_back(p);
        ep_[i_cut_config].push_back(step/2);

        // Run fits

        TH1D *moduloProf = moduloHist->ProfileX();

        TGraphErrors *moduloGraph = ConvertToTGraphErrors(moduloProf);

        output->cd(("MomentumBinnedAnalysis/ModuloFits/"+cuts_configs[i_cut_config]).c_str());

        if(!fullFit) { 
          
          // Simple fit with a phase of zero
          SimpleEDMFit(moduloGraph, 0.15, OMEGA_A * 1e3, 0);
          DrawSimpleEDMFit(moduloGraph, stn+", "+std::to_string(lo)+" < p [MeV] < "+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_SimpleModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -5, 5, true);// , double(nEntries), true);
          moduloGraph->SetName((stn+"_ModuloFit_"+momSlice).c_str());
          moduloGraph->Write();

          c_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParameter(2));
          ec_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParError(2));
          A_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParameter(0));
          eA_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParError(0));

        } else if(fullFit) { 
          // Full Bz fit
          FullEDMFit(moduloGraph, 0, OMEGA_A * 1e3, phi, 0.15, 0);
          DrawFullEDMFit(moduloGraph, stn+", "+std::to_string(lo)+" < p [MeV] < "+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_FullModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -5, 5, true);// , double(nEntries), true);
          moduloGraph->SetName((stn+"_ModuloFit_"+momSlice).c_str());
          moduloGraph->Write();

          c_[i_cut_config].push_back(moduloGraph->GetFunction("FullEDMFunc")->GetParameter(4));
          ec_[i_cut_config].push_back(moduloGraph->GetFunction("FullEDMFunc")->GetParError(4));
          A_[i_cut_config].push_back(moduloGraph->GetFunction("FullEDMFunc")->GetParameter(3));
          eA_[i_cut_config].push_back(moduloGraph->GetFunction("FullEDMFunc")->GetParError(3));

        }
        
        delete moduloProf;
        delete moduloHist;
        delete moduloGraph;

        if(extraScans && stn=="S12S18") { 

          cout<<momSlice<<endl;

          //if(stn!="S0S12S18") continue;

          std::string thetaYHistName = cuts_configs[i_cut_config]+"/"+stn+"_ThetaY_"+momSlice;
          TH1D *thetaYHist = (TH1D*)input->Get((thetaYHistName).c_str());

          cout<<thetaYHistName<<endl;

          thetaY_RMS_[i_cut_config].push_back(thetaYHist->GetRMS());
          e_thetaY_RMS_[i_cut_config].push_back(thetaYHist->GetRMSError());

          cout<<"Got RMS"<<endl;  

          std::string yHistName = cuts_configs[i_cut_config]+"/"+stn+"_Y_"+momSlice;
          TH1D *yHist = (TH1D*)input->Get((yHistName).c_str());

          Y_RMS_[i_cut_config].push_back(yHist->GetRMS());
          e_Y_RMS_[i_cut_config].push_back(yHist->GetRMSError());

          std::string pYHistName = cuts_configs[i_cut_config]+"/"+stn+"_MomentumY_"+momSlice;
          TH1D *pYHist = (TH1D*)input->Get((pYHistName).c_str());

          pY_RMS_[i_cut_config].push_back(pYHist->GetRMS());
          e_pY_RMS_[i_cut_config].push_back(pYHist->GetRMSError());

          N_[i_cut_config].push_back(yHist->GetEntries());
          zeros_[i_cut_config].push_back(0);

/*          double thetaYMaxDiff = thetaYHist->FindLastBinAbove(0,1) - thetaYHist->FindFirstBinAbove(0,1);
          thetaYMaxDiff_[i_cut_config].push_back(thetaYMaxDiff);

          double AOverMaxDiff = A_[i_cut_config].at(i_cut) / thetaYMaxDiff;
          AOverMaxDiff_[i_cut_config].push_back(AOverMaxDiff);*/
          //if(skip) i_cut = i_cut-1;

          double thetaYMin = thetaYHist->GetBinCenter(thetaYHist->FindFirstBinAbove(0,1));
          double thetaYMax = thetaYHist->GetBinCenter(thetaYHist->FindLastBinAbove(0,1));

          double e_thetaYMin = thetaYHist->GetBinWidth(thetaYHist->FindFirstBinAbove(0,1));
          double e_thetaYMax = thetaYHist->GetBinWidth(thetaYHist->FindLastBinAbove(0,1));

          double thetaYMaxDiff = thetaYMax - thetaYMin; 
          double e_thetaYMaxDiff = sqrt( pow(e_thetaYMax,2) + pow(e_thetaYMin,2) );

          thetaYMaxDiff_[i_cut_config].push_back(thetaYMaxDiff);
          e_thetaYMaxDiff_[i_cut_config].push_back(e_thetaYMaxDiff);

          double AOverMaxDiff = A_[i_cut_config].at(count) / thetaYMaxDiff;
          double e_AOverMaxDiff = AOverMaxDiff * sqrt( pow( (eA_[i_cut_config].at(count)/A_[i_cut_config].at(count)), 2) + pow( (e_thetaYMaxDiff/thetaYMaxDiff), 2) );

          AOverMaxDiff_[i_cut_config].push_back(AOverMaxDiff);
          e_AOverMaxDiff_[i_cut_config].push_back(e_AOverMaxDiff);

/*          if(p>750 && p<2500) {
            double d_EDM = GetDilution(p);
            delta_A_[i_cut_config].push_back( A_[i_cut_config].at(count) / d_EDM );
            e_delta_A_[i_cut_config].push_back( eA_[i_cut_config].at(count) / d_EDM );
          }  else {
              delta_A_[i_cut_config].push_back( 0.);//A_[i_cut_config].at(count) / d_EDM );
              e_delta_A_[i_cut_config].push_back( 0.);//eA_[i_cut_config].at(count) / d_EDM );

          }*/

        }

        count++;

    }


    output->cd(("MomentumBinnedAnalysis/ParameterScans/"+cuts_configs[i_cut_config]).c_str());

    //TGraphErrors *c_vs_p_slice = GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_config]);
    //TGraphErrors *A_vs_p_slice = GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_
    c_vs_p_[i_cut_config].push_back(GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_config]));
    A_vs_p_[i_cut_config].push_back(GenerateTGraphErrors(p_[i_cut_config], A_[i_cut_config], ep_[i_cut_config], eA_[i_cut_config]));

    DrawScanGraph(c_vs_p_[i_cut_config].at(i_stn), stn+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;c [mrad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_"+fitType+"_c_vs_p_"+qual).c_str(), false);
    DrawScanGraph(A_vs_p_[i_cut_config].at(i_stn), stn+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;A_{EDM} [mrad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_"+fitType+"_A_vs_p_"+qual).c_str(), false);
  
    c_vs_p_[i_cut_config].at(i_stn)->SetName((stn+"_c_vs_p").c_str());
    A_vs_p_[i_cut_config].at(i_stn)->SetName((stn+"_A_vs_p").c_str());

    c_vs_p_[i_cut_config].at(i_stn)->Write();
    A_vs_p_[i_cut_config].at(i_stn)->Write();

    if(extraScans && stn == "S12S18") {

      thetaY_RMS_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], thetaY_RMS_[i_cut_config], ep_[i_cut_config], e_thetaY_RMS_[i_cut_config]);
      DrawScanGraph(thetaY_RMS_vs_p_[i_cut_config], ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#sigma#theta_{y} [mrad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_"+fitType+"_theta_Y_RMS_vs_p_"+qual).c_str(), false);
      thetaY_RMS_vs_p_[i_cut_config]->SetName((stn+"_thetaY_RMS_vs_p").c_str());
      thetaY_RMS_vs_p_[i_cut_config]->Write();

      Y_RMS_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], Y_RMS_[i_cut_config], ep_[i_cut_config], e_Y_RMS_[i_cut_config]);
      DrawScanGraph(Y_RMS_vs_p_[i_cut_config], ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#sigma_{y} [mm]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_"+fitType+"_Y_RMS_vs_p_"+qual).c_str(), false);
      Y_RMS_vs_p_[i_cut_config]->SetName((stn+"_Y_RMS_vs_p").c_str());
      Y_RMS_vs_p_[i_cut_config]->Write();

      pY_RMS_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], pY_RMS_[i_cut_config], ep_[i_cut_config], e_pY_RMS_[i_cut_config]);
      DrawScanGraph(pY_RMS_vs_p_[i_cut_config], ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#sigma_{p_{y}} [MeV]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_"+fitType+"_Momentum_Y_RMS_vs_p_"+qual).c_str(), false);
      pY_RMS_vs_p_[i_cut_config]->SetName((stn+"_pY_RMS_vs_p").c_str());
      pY_RMS_vs_p_[i_cut_config]->Write();

      N_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], N_[i_cut_config], ep_[i_cut_config], zeros_[i_cut_config]);
      DrawScanGraph(N_vs_p_[i_cut_config], ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;Positrons", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_"+fitType+"_N_vs_p_"+qual).c_str(), false);
      N_vs_p_[i_cut_config]->SetName((stn+"_N_vs_p").c_str());
      N_vs_p_[i_cut_config]->Write();

      eA_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], eA_[i_cut_config], ep_[i_cut_config], zeros_[i_cut_config]);
      DrawScanGraph(eA_vs_p_[i_cut_config], ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#deltaA_{EDM}", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_"+fitType+"_eA_vs_p_"+qual).c_str(), false);
      eA_vs_p_[i_cut_config]->SetName((stn+"_eA_vs_p").c_str());
      eA_vs_p_[i_cut_config]->Write();

      // Normalise A_EDM by max angular diff
      thetaYMaxDiff_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], thetaYMaxDiff_[i_cut_config], ep_[i_cut_config], e_thetaYMaxDiff_[i_cut_config]);
      DrawScanGraph(thetaYMaxDiff_vs_p_[i_cut_config], ";e^{+}_{LAB} p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;(#Delta#theta_{y})_{MAX} [mrad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_"+fitType+"_thetaYMaxDiff_vs_p_"+qual).c_str(), false);
      thetaYMaxDiff_vs_p_[i_cut_config]->SetName((stn+"_thetaYMaxDiff_vs_p").c_str());
      //cout<<thetaYMaxDiff_vs_p_[_cut_config]<<endl;
      thetaYMaxDiff_vs_p_[i_cut_config]->Write();

      AOverMaxDiff_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], AOverMaxDiff_[i_cut_config], ep_[i_cut_config], e_AOverMaxDiff_[i_cut_config]);
      DrawScanGraph(AOverMaxDiff_vs_p_[i_cut_config], ";e^{+}_{LAB} p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;A_{EDM}/(#Delta#theta_{y})_{MAX}", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_"+fitType+"_AOverMaxDiff_vs_p_"+qual).c_str(), false);
      AOverMaxDiff_vs_p_[i_cut_config]->SetName((stn+"_AOverMaxDiff_vs_p").c_str());
      AOverMaxDiff_vs_p_[i_cut_config]->Write();

    }

    

  }

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

  double fit_start_time = 30;
  double fit_end_time = 300;

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

  DrawFoldedWiggle(gr_, ";Time modulo "+std::to_string(t_mod)+" #mus;Tracks / 149 ns", "../Images/MC/dMuSim/"+config+"/Unblinded/WiggleMod_"+to_string(t_mod)+"_"+qual, 0, t_mod, 10, 5e4);

  return;
}


int main() {

  if(unblind) {
    cout<<"*** Unblind is set to true. Exiting ****"<<endl;
    return 0;
  }

  bool write = true;
  bool fullFit = true;
  bool extraScans = true;

  // Read file
  std::string inputName = "../Plots/Data/dMu/"+config+"/Plots/tmp.root";
  TFile *input = TFile::Open(inputName.c_str());
  cout<<"Reading\t"<<inputName<<" "<<input<<endl;

  std::string outputName = "../Plots/Data/dMu/"+config+"/Fits/tmp.root"; 
  if(!write) outputName = "delete_me.root";

  TFile *output = new TFile(outputName.c_str(), "RECREATE");

  output->mkdir("Wiggle");
  output->cd("Wiggle");

  const double phi = GetPhase(input, output); 

  output->mkdir("SimultaneousAnalysis");
  output->cd("SimultaneousAnalysis");

  SimultaneousAnalysis(phi, input, output);
/*
  output->mkdir("MomentumBinnedAnalysis");
  output->mkdir("MomentumBinnedAnalysis/ModuloFits");
  output->mkdir("MomentumBinnedAnalysis/ModuloFits/MomSlices");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans/MomSlices");

  MomentumBinnedAnalysis(phi, input, output, fullFit, extraScans);*/
  // VertOffset(input, output);

  input->Close();
  output->Close();

  std::cout<<"\nWritten plots to root file:\n"<<outputName<<std::endl;

  return 0;


}
