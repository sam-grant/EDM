#include <iostream>

#include "FancyDraw.h"
#include "Utils.h"
#include "RootInclude.h"

std::string config = "5.4e-18";
//std::string config = "1.8e-18";

//std::string qual = "truthAllDecays_WORLD_200MeV_AQ";
//std::string qual = "truthAllDecays_AAR_200MeV_AQ";
//std::string qual = "truthAllDecays_MRF_200MeV_AQ";

//std::string qual = "truthAllDecays_WORLD_500MeV_AQ";
// std::string qual = "truthAllDecays_AAR_500MeV_AQ";
//std::string qual = "truthAllDecays_MRF_500MeV_AQ";

// std::string qual = "truth_WORLD_200MeV_AQ";
//std::string qual = "truth_AAR_200MeV_AQ";
// std::string qual = "truth_MRF_200MeV_AQ";

// std::string qual = "truth_WORLD_500MeV_AQ";
//std::string qual = "truth_AAR_500MeV_AQ";
//std::string qual = "truth_MRF_500MeV_AQ";

//std::string qual = "truthAllDecays_AAR_250MeV_AQ";
//std::string qual = "truth2_AAR_250MeV_AQ";

std::string qual = "truthControl_AAR_250MeV_AQ";

// double scaleFactor = 1.0;
//int interval = 500;

// TODO: make this automatic
// double momBoostFactor = 1;
//double momBoostFactor = (1/(2*GMAGIC));

string mainTitle = "";

double xmin = 30;//7*G2PERIOD;
double xmax = 300;//70*G2PERIOD;

using namespace std;

int GetStep() {

  string key1 = "200MeV";
  string key2 = "500MeV";
  string key3 = "250MeV";

  if(qual.find(key1) != std::string::npos) { 
    return 200;
  } else if(qual.find(key2) != std::string::npos) { 
    return 500;
  } else if(qual.find(key3) != std::string::npos) { 
    return 250;
  } else { 
    cerr<<"Step size is unknown";
    return -1;
  }

}

string GetConfig() {

  string key1 = "truthAllDecays_";
  string key2 = "truth_";
  string key3 = "truth2_";
  string key4 = "truthControl_";
  
  if(qual.find(key1) != std::string::npos) { 
    return "truthAllDecays";
  } else if(qual.find(key2) != std::string::npos) { 
    return "truth";
  } else if(qual.find(key3) != std::string::npos) { 
    return "truth2";
  } else if(qual.find(key4) != std::string::npos) { 
    return "truthControl";
  } else { 
    cerr<<"Config is unknown";
    return "";
  }

}

bool MRF() {

  bool mrf = false;
  string key = "MRF";
  if(qual.find(key) != std::string::npos) { 
    mrf = true;
  }

  return mrf;

}

double MomBoostFactor(bool mrf) {
  if(mrf) return 1/(2*GMAGIC);
  else return 1.;

}

double ScaleFactor(bool mrf) { 
  if(mrf) return GMAGIC;
  else return 1.;
}

double GetDilution(double p) { // , double A_EDM) { 

  // Get dilution fit
  TFile *fin = TFile::Open("../Plots/MC/dMu/5.4e-18/fits/dilution.root");

  // Do no currently have 200 MeV one
  TGraphErrors *gr = (TGraphErrors*)fin->Get(("DilutionFits/d_vs_p_500MeV/"+GetConfig()).c_str());
  TF1 *d_EDM = gr->GetFunction("ParabolaFunc");

  return d_EDM->Eval(p);
}

double GetPhase(TFile *input) { 

  cout<<"Getting phase"<<endl;

  TH1D *h1_wiggle = (TH1D*)input->Get("MainPlots/Wiggle");
  TH1D *h1_wiggle_mod = (TH1D*)input->Get("MainPlots/Wiggle_Modulo");

  TGraphErrors *gr_wiggle = ConvertToTGraphErrors(h1_wiggle);
  TGraphErrors *gr_wiggle_mod = ConvertToTGraphErrors(h1_wiggle_mod);
  
  FitFivePar(gr_wiggle, 1300, 64.4, 0.35, OMEGA_A*1e3, 0, xmin, xmax);
  FitFivePar(gr_wiggle_mod, 1300, 64.4, 0.35, OMEGA_A*1e3, 0, 0, G2PERIOD);

  TF1 *wiggle = gr_wiggle->GetFunction("FiveParFunc");
  DrawWiggle(gr_wiggle, ";Decay time [#mus];Tracks / 149 ns", "", "../Images/MC/dMuSim/"+config+"/Unblinded/fit_wiggle_"+qual, double(h1_wiggle->GetEntries()), xmin, xmax, 10, 10e5);

  TF1 *modWiggle = gr_wiggle_mod->GetFunction("FiveParFunc");
  DrawModWiggle(gr_wiggle_mod, ";t_{g#minus2}^{mod} [#mus];Tracks / 149 ns","../Images/MC/dMuSim/"+config+"/Unblinded/fit_mod_wiggle_"+qual, double(h1_wiggle_mod->GetEntries()), 25e3, 150e3);//100e3, 500e3);

  // Currently don't truth the phase from the modulo
  // Phase from regular wiggle seems more stable.

  return wiggle->GetParameter(4);

}

void DrawGraph(TGraphErrors *graph, std::string title, std::string fname, bool xLabel) {

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

  // Drawing a .C file causes a seg fault (could be due to the labelling)
  //c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}

void SimultaneousAnalysis(TFile *input, TFile *output, bool fullFit) {

  bool mrf = MRF();
  double scaleFactor = ScaleFactor(mrf);
  const double phi = GetPhase(input); 

  std::cout<<"Phase is "<<phi<<std::endl;

  TH2D *h2_thetaY_mod = (TH2D*)input->Get("MainPlots/ThetaY_vs_Time_Modulo");

  int nEntries = h2_thetaY_mod->GetEntries();
  TH1D *px_thetaY_mod = h2_thetaY_mod->ProfileX();

  //px_thetaY_mod->Rebin(2);

  std::cout << "Generated x-profile...\t: " << px_thetaY_mod << std::endl;

  TGraphErrors *gr_thetaY_mod = ConvertToTGraphErrors(px_thetaY_mod);

  // Get FFT
  /*
  TH1D *px_thetaY_mod_fft = GetFFT(px_thetaY_mod);
  DrawTH1(px_thetaY_mod_fft, ";Frequency [MHz];Entries", ("../Images/MC/dMuSim/"+config+"/Unblinded/fft_h_thetaY_mod_"+qual).c_str());
  delete px_thetaY_mod_fft;
  */

  gr_thetaY_mod->GetYaxis()->SetRangeUser(-.425, .425);

  if(fullFit) {
    // Fit
      FullEDMFit(gr_thetaY_mod, 0, OMEGA_A * 1e3, phi, 0.17, 0);//0.15, 0);
      TF1 *func = gr_thetaY_mod->GetFunction("FullEDMFunc");
      DrawFullEDMFit(gr_thetaY_mod,  mainTitle+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/dMuSim/"+config+"/Unblinded/fit_dMu_full_"+qual).c_str(), double(nEntries),  -0.75*scaleFactor, 0.75*scaleFactor, true);//-0.75*1e-3, 0.75*1e-3, true);//,unblind);
      gr_thetaY_mod->SetName("dMuFit");
      gr_thetaY_mod->Write();
      std::cout<<"A_EDM:\t"<<gr_thetaY_mod->GetFunction("FullEDMFunc")->GetParameter(3)<<std::endl;

      // Get residual FFT
      /*
      TH1D *h_res = GetResidual(px_thetaY_mod, func);
      TH1D *h_res_fft = GetFFT(h_res);
      DrawTH1(h_res, ";t_{g#minus2}^{mod} [#mus];Fit residual [mrad] / 50 ns", ("../Images/MC/dMuSim/"+config+"/Unblinded/h_res_"+qual).c_str());
      DrawTH1(h_res_fft, ";Frequency [MHz];Entries", ("../Images/MC/dMuSim/"+config+"/Unblinded/h_fft_res_"+qual).c_str());
      */

    } else if(!fullFit) {
      SimpleEDMFit(gr_thetaY_mod, 0.15, OMEGA_A * 1e3, 0);
      TF1 *func = gr_thetaY_mod->GetFunction("SimpleEDMFunc");
      DrawSimpleEDMFit(gr_thetaY_mod, ";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/dMuSim/"+config+"/Unblinded/fit_dMu_simple_"+qual).c_str(), double(nEntries), -0.45*scaleFactor, 0.45*scaleFactor, true); // -0.45*1e-3, 0.45*1e-3, true);
      gr_thetaY_mod->SetName("dMuFit");
      gr_thetaY_mod->Write();
      std::cout<<"A_EDM:\t"<<gr_thetaY_mod->GetFunction("SimpleEDMFunc")->GetParameter(0)<<std::endl;
    }

  return; 

}

void MomentumBinnedAnalysis(TFile *input, TFile *output, bool fullFit, bool extraScans) {  

  const double phi = GetPhase(input);  

  string cuts_configs[] = {"MomSlices"};//, "MomSymCuts", "MomMinScan", "MomMaxScan"};

  int n_cut_config = sizeof(cuts_configs)/sizeof(cuts_configs[0]);

  vector<string> xLabels_;

  TGraphErrors* c_vs_p_[n_cut_config];
  TGraphErrors* A_vs_p_[n_cut_config];
  
  // Detect if we are in the world frame
  bool mrf = MRF();
  // Get momentum boost factor for MRF
  double momBoostFactor = MomBoostFactor(mrf);
  double scaleFactor = ScaleFactor(mrf);

  cout<<"\nMomentum boost factor\t"<<momBoostFactor<<endl;
  
  int step = GetStep() * momBoostFactor;//200;///500;//250;//500;//200;
  int n_cuts = (PMAX / step) * momBoostFactor;
  int lo = -1; 
  int hi = -1;
  int i_cut_config = -1;

  string fitType = "full";
  if(!fullFit) fitType = "simple";

  vector<double> c_[n_cut_config];
  vector<double> ec_[n_cut_config];
  vector<double> p_[n_cut_config];
  vector<double> ep_[n_cut_config];

  vector<double> A_[n_cut_config];
  vector<double> eA_[n_cut_config];

  TGraphErrors* thetaY_vs_p_[n_cut_config];
  TGraphErrors* thetaY_RMS_vs_p_[n_cut_config];
  TGraphErrors* Y_vs_p_[n_cut_config];
  TGraphErrors* Y_RMS_vs_p_[n_cut_config];
  TGraphErrors* pY_vs_p_[n_cut_config];
  TGraphErrors* pY_RMS_vs_p_[n_cut_config];
  TGraphErrors* N_vs_p_[n_cut_config];
  TGraphErrors* eA_vs_p_[n_cut_config];
  TGraphErrors* chiSqrNDF_vs_p_[n_cut_config];
  TGraphErrors* alpha_vs_p_[n_cut_config];
  TGraphErrors* alpha_RMS_vs_p_[n_cut_config];

  // Max angular difference
  TGraphErrors* thetaYMaxDiff_vs_p_[n_cut_config];
  TGraphErrors* AOverMaxDiff_vs_p_[n_cut_config];

  vector<double> thetaY_[n_cut_config];
  vector<double> e_thetaY_[n_cut_config];

  vector<double> thetaY_RMS_[n_cut_config];
  vector<double> e_thetaY_RMS_[n_cut_config];

  vector<double> Y_[n_cut_config];
  vector<double> e_Y_[n_cut_config];

  vector<double> Y_RMS_[n_cut_config];
  vector<double> e_Y_RMS_[n_cut_config];

  vector<double> pY_[n_cut_config];
  vector<double> e_pY_[n_cut_config];

  vector<double> pY_RMS_[n_cut_config];
  vector<double> e_pY_RMS_[n_cut_config];

  vector<double> N_[n_cut_config];
  vector<double> zeros_[n_cut_config];

  vector<double> chiSqrNDF_[n_cut_config];

  vector<double> alpha_[n_cut_config];
  vector<double> alpha_RMS_[n_cut_config];

  vector<double> e_alpha_[n_cut_config];
  vector<double> e_alpha_RMS_[n_cut_config];

  vector<double> thetaYMaxDiff_[n_cut_config];
  vector<double> e_thetaYMaxDiff_[n_cut_config];

  vector<double> AOverMaxDiff_[n_cut_config];
  vector<double> e_AOverMaxDiff_[n_cut_config];

  //  ============ Dilution corrected! ============
  TGraphErrors* delta_A_vs_p_[n_cut_config];
  //TGraphErrors* delta_AOverMaxDiff_vs_p_[n_cut_config];

  vector<double> delta_A_[n_cut_config];
  vector<double> e_delta_A_[n_cut_config];
  //vector<double> delta_AOverMaxDiff_[n_cut_config];

  // ============ Momentum slices ============
  i_cut_config = 0; 

  int count = 0;

  for(int i_cut = 0; i_cut < n_cuts; i_cut++) {

      lo = 0 + i_cut*step; 
      hi = step + i_cut*step;

      // Get hist
      std::string momSlice = std::to_string(lo)+"_"+std::to_string(hi);
      int p = (hi+lo)/2;

      std::string moduloHistName = cuts_configs[i_cut_config]+"/ThetaY_vs_Time_Modulo_"+momSlice;
      cout<<"Modulo hist name\t"<<moduloHistName<<endl;

      TH2D *moduloHist = (TH2D*)input->Get((moduloHistName).c_str());

      if(moduloHist==0) continue;

      int nEntries = moduloHist->GetEntries();

      if(nEntries == 0) continue;



      p_[i_cut_config].push_back(p);
      ep_[i_cut_config].push_back(step/2);

      // Run fits
      TH1D *moduloProf = moduloHist->ProfileX();

      TGraphErrors *moduloGraph = ConvertToTGraphErrors(moduloProf);

      cout<<"Modulo graph\t"<<moduloGraph<<endl;

      output->cd(("MomentumBinnedAnalysis/ModuloFits/"+cuts_configs[i_cut_config]).c_str());

      double chiSqrNDF = -1;



      if(!fullFit) { 
          
        // Simple fit with a phase of zero
        SimpleEDMFit(moduloGraph, 0.15, OMEGA_A * 1e3, 0);
        DrawSimpleEDMFit(moduloGraph, std::to_string(lo)+" < p [MeV] < "+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/SimpleModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -.45*scaleFactor, .45*scaleFactor, true);
        moduloGraph->SetName(("ModuloFit_"+momSlice).c_str());
        moduloGraph->Write();

        c_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParameter(2));
        ec_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParError(2));
        A_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParameter(0));
        eA_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParError(0));

        chiSqrNDF = moduloGraph->GetFunction("SimpleEDMFunc")->GetChisquare() /  moduloGraph->GetFunction("SimpleEDMFunc")->GetNDF(); 

        } else if(fullFit) { 



          // Full EDM fit
          FullEDMFit(moduloGraph, 0, OMEGA_A * 1e3, phi, 0.15, 0);



          DrawFullEDMFit(moduloGraph, std::to_string(lo)+" < p [MeV] < "+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/FullModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -.75*scaleFactor, .75*scaleFactor, true);

          moduloGraph->SetName(("ModuloFit_"+momSlice).c_str());
          moduloGraph->Write();

          c_[i_cut_config].push_back(moduloGraph->GetFunction("FullEDMFunc")->GetParameter(4));
          ec_[i_cut_config].push_back(moduloGraph->GetFunction("FullEDMFunc")->GetParError(4));
          A_[i_cut_config].push_back(moduloGraph->GetFunction("FullEDMFunc")->GetParameter(3));
          eA_[i_cut_config].push_back(moduloGraph->GetFunction("FullEDMFunc")->GetParError(3));

          chiSqrNDF = moduloGraph->GetFunction("FullEDMFunc")->GetChisquare() /  moduloGraph->GetFunction("FullEDMFunc")->GetNDF(); 
        
      }

        delete moduloProf;
        delete moduloHist;
        delete moduloGraph;

        // Corrected A_EDM

        double d_EDM = 1.0;//GetDilution(p);
        delta_A_[i_cut_config].push_back(A_[i_cut_config].at(i_cut) / d_EDM);
        e_delta_A_[i_cut_config].push_back(eA_[i_cut_config].at(i_cut) / d_EDM);

        if(extraScans) { 

          cout<<"Doing extra scans"<<endl;
          std::string thetaYHistName = cuts_configs[i_cut_config]+"/ThetaY_"+momSlice;
          TH1D *thetaYHist = (TH1D*)input->Get((thetaYHistName).c_str());

          thetaY_[i_cut_config].push_back(thetaYHist->GetMean());
          e_thetaY_[i_cut_config].push_back(thetaYHist->GetMeanError());

          thetaY_RMS_[i_cut_config].push_back(thetaYHist->GetRMS());
          e_thetaY_RMS_[i_cut_config].push_back(thetaYHist->GetRMSError());

          std::string yHistName = cuts_configs[i_cut_config]+"/Y_"+momSlice;
          TH1D *yHist = (TH1D*)input->Get((yHistName).c_str());

          Y_[i_cut_config].push_back(yHist->GetMean());
          e_Y_[i_cut_config].push_back(yHist->GetMeanError());

          Y_RMS_[i_cut_config].push_back(yHist->GetRMS());
          e_Y_RMS_[i_cut_config].push_back(yHist->GetRMSError());

          std::string pYHistName = cuts_configs[i_cut_config]+"/MomentumY_"+momSlice;
          TH1D *pYHist = (TH1D*)input->Get((pYHistName).c_str());

          pY_[i_cut_config].push_back(pYHist->GetMean());
          e_pY_[i_cut_config].push_back(pYHist->GetMeanError());

          pY_RMS_[i_cut_config].push_back(pYHist->GetRMS());
          e_pY_RMS_[i_cut_config].push_back(pYHist->GetRMSError());

          N_[i_cut_config].push_back(yHist->GetEntries());
          zeros_[i_cut_config].push_back(0);

          chiSqrNDF_[i_cut_config].push_back(chiSqrNDF);

          if(false) { 

            std::string alphaHistName = cuts_configs[i_cut_config]+"/Alpha_"+momSlice;
            TH1D *alphaHist = (TH1D*)input->Get((alphaHistName).c_str());
            
            alpha_[i_cut_config].push_back(alphaHist->GetMean());
            alpha_RMS_[i_cut_config].push_back(alphaHist->GetRMS());

            e_alpha_[i_cut_config].push_back(alphaHist->GetMeanError());
            e_alpha_RMS_[i_cut_config].push_back(alphaHist->GetRMSError());

         }

          double thetaYMin = thetaYHist->GetBinCenter(thetaYHist->FindFirstBinAbove(0,1));
          double thetaYMax = thetaYHist->GetBinCenter(thetaYHist->FindLastBinAbove(0,1));

          double e_thetaYMin = thetaYHist->GetBinWidth(thetaYHist->FindFirstBinAbove(0,1));
          double e_thetaYMax = thetaYHist->GetBinWidth(thetaYHist->FindLastBinAbove(0,1));

          double thetaYMaxDiff = thetaYMax - thetaYMin; 
          double e_thetaYMaxDiff = sqrt( pow(e_thetaYMax,2) + pow(e_thetaYMin,2) );

          thetaYMaxDiff_[i_cut_config].push_back(thetaYMaxDiff);
          e_thetaYMaxDiff_[i_cut_config].push_back(e_thetaYMaxDiff);

          //double e_thetaYMaxDiff = sqrt( thetaYHist->FindLastBinAbove(0,1))

          double AOverMaxDiff = A_[i_cut_config].at(count) / thetaYMaxDiff;
          double e_AOverMaxDiff = AOverMaxDiff * sqrt( pow( (eA_[i_cut_config].at(count)/A_[i_cut_config].at(count)), 2) + pow( (e_thetaYMaxDiff/thetaYMaxDiff), 2) );

          AOverMaxDiff_[i_cut_config].push_back(AOverMaxDiff);
          e_AOverMaxDiff_[i_cut_config].push_back(e_AOverMaxDiff);

        }

        count++;

    }

    output->cd(("MomentumBinnedAnalysis/ParameterScans/"+cuts_configs[i_cut_config]).c_str());

    //TGraphErrors *c_vs_p_slice = GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_config]);
    //TGraphErrors *A_vs_p_slice = GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_
    cout<<"Generating graphs"<<endl;

    c_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_config]);
    A_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], A_[i_cut_config], ep_[i_cut_config], eA_[i_cut_config]);

/*    cout<<"\n\n********* DEBUGGING ********* \n\n"<<endl;
    cout<<"graph\t"<<c_vs_p_[i_cut_config]<<endl;
    cout<<"N\t"<<c_vs_p_[i_cut_config]->GetN()<<endl;
    cout<<"\n\n********* DEBUGGING ********* \n\n"<<endl;*/

    DrawGraph(c_vs_p_[i_cut_config], ";p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+";c [mrad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_c_vs_p_"+qual).c_str(), false);
    DrawGraph(A_vs_p_[i_cut_config], ";p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+";A_{EDM} [mrad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_A_vs_p_"+qual).c_str(), false);

    c_vs_p_[i_cut_config]->SetName("c_vs_p");
    A_vs_p_[i_cut_config]->SetName("A_vs_p");

    c_vs_p_[i_cut_config]->Write();
    A_vs_p_[i_cut_config]->Write();

    // Correction
    delta_A_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], delta_A_[i_cut_config], ep_[i_cut_config], e_delta_A_[i_cut_config]);
    DrawGraph(delta_A_vs_p_[i_cut_config], ";p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+";#delta' [mrad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_delta_A_vs_p_"+qual).c_str(), false);
    delta_A_vs_p_[i_cut_config]->SetName("delta_A_vs_p");
    delta_A_vs_p_[i_cut_config]->Write();

    if(extraScans) {

      thetaY_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], thetaY_[i_cut_config], ep_[i_cut_config], e_thetaY_[i_cut_config]);
      DrawGraph(thetaY_vs_p_[i_cut_config], ";p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#LT#theta_{y}#GT [mrad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_theta_Y_vs_p_"+qual).c_str(), false);
      thetaY_vs_p_[i_cut_config]->SetName("thetaY_vs_p");
      thetaY_vs_p_[i_cut_config]->Write();

      thetaY_RMS_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], thetaY_RMS_[i_cut_config], ep_[i_cut_config], e_thetaY_RMS_[i_cut_config]);
      DrawGraph(thetaY_RMS_vs_p_[i_cut_config], ";p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#sigma_{#thetay} [mrad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_theta_Y_RMS_vs_p_"+qual).c_str(), false);
      thetaY_RMS_vs_p_[i_cut_config]->SetName("thetaY_RMS_vs_p");
      thetaY_RMS_vs_p_[i_cut_config]->Write();

      Y_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], Y_[i_cut_config], ep_[i_cut_config], e_Y_[i_cut_config]);
      DrawGraph(Y_vs_p_[i_cut_config], ";p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#LTy#GT [mm]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_Y_vs_p_"+qual).c_str(), false);
      Y_vs_p_[i_cut_config]->SetName("Y_vs_p");
      Y_vs_p_[i_cut_config]->Write();

      Y_RMS_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], Y_RMS_[i_cut_config], ep_[i_cut_config], e_Y_RMS_[i_cut_config]);
      DrawGraph(Y_RMS_vs_p_[i_cut_config], ";p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#sigma_{y} [mm]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_Y_RMS_vs_p_"+qual).c_str(), false);
      Y_RMS_vs_p_[i_cut_config]->SetName("Y_RMS_vs_p");
      Y_RMS_vs_p_[i_cut_config]->Write();

      pY_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], pY_[i_cut_config], ep_[i_cut_config], e_pY_[i_cut_config]);
      DrawGraph(pY_vs_p_[i_cut_config], ";p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#LTp_{y}#GT [MeV]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_pY_vs_p_"+qual).c_str(), false);
      pY_vs_p_[i_cut_config]->SetName("pY_vs_p");
      pY_vs_p_[i_cut_config]->Write();

      pY_RMS_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], pY_RMS_[i_cut_config], ep_[i_cut_config], e_pY_RMS_[i_cut_config]);
      DrawGraph(pY_RMS_vs_p_[i_cut_config], ";p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#sigma_{py} [MeV]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_pY_RMS_vs_p_"+qual).c_str(), false);
      pY_RMS_vs_p_[i_cut_config]->SetName("pY_RMS_vs_p");
      pY_RMS_vs_p_[i_cut_config]->Write();

      N_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], N_[i_cut_config], ep_[i_cut_config], zeros_[i_cut_config]);
      DrawGraph(N_vs_p_[i_cut_config], ";p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;Positrons", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_N_vs_p_"+qual).c_str(), false);
      N_vs_p_[i_cut_config]->SetName("N_vs_p");
      N_vs_p_[i_cut_config]->Write();

      eA_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], eA_[i_cut_config], ep_[i_cut_config], zeros_[i_cut_config]);
      DrawGraph(eA_vs_p_[i_cut_config], ";p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#deltaA_{EDM}", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_eA_vs_p_"+qual).c_str(), false);
      eA_vs_p_[i_cut_config]->SetName("eA_vs_p");
      eA_vs_p_[i_cut_config]->Write();

      chiSqrNDF_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], chiSqrNDF_[i_cut_config], ep_[i_cut_config], zeros_[i_cut_config]);
      DrawGraph(chiSqrNDF_vs_p_[i_cut_config], ";p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#chi^{2}/NDF", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_chiSqrNDF_vs_p_"+qual).c_str(), false);
      chiSqrNDF_vs_p_[i_cut_config]->SetName("chiSqrNDF_vs_p");
      chiSqrNDF_vs_p_[i_cut_config]->Write();

      if(false) { 

        alpha_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], alpha_[i_cut_config], ep_[i_cut_config], e_alpha_[i_cut_config]);
        DrawGraph(chiSqrNDF_vs_p_[i_cut_config], ";p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#alpha [rad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_chiSqrNDF_vs_p_"+qual).c_str(), false);
        alpha_vs_p_[i_cut_config]->SetName("alpha_vs_p");
        alpha_vs_p_[i_cut_config]->Write();

        alpha_RMS_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], alpha_RMS_[i_cut_config], ep_[i_cut_config], e_alpha_RMS_[i_cut_config]);
        DrawGraph(alpha_RMS_vs_p_[i_cut_config], ";p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#sigma_{#alpha} [rad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_chiSqrNDF_vs_p_"+qual).c_str(), false);
        alpha_RMS_vs_p_[i_cut_config]->SetName("alpha_RMS_vs_p");
        alpha_RMS_vs_p_[i_cut_config]->Write();

      }

      // Normalise A_EDM by max angular diff
      thetaYMaxDiff_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], thetaYMaxDiff_[i_cut_config], ep_[i_cut_config], e_thetaYMaxDiff_[i_cut_config]);
      DrawGraph(thetaYMaxDiff_vs_p_[i_cut_config], ";p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;(#Delta#theta_{y})_{MAX} [mrad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_thetaYMaxDiff_vs_p_"+qual).c_str(), false);
      thetaYMaxDiff_vs_p_[i_cut_config]->SetName("thetaYMaxDiff_vs_p");
      //cout<<thetaYMaxDiff_vs_p_[_cut_config]<<endl;
      thetaYMaxDiff_vs_p_[i_cut_config]->Write();

      AOverMaxDiff_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], AOverMaxDiff_[i_cut_config], ep_[i_cut_config], e_AOverMaxDiff_[i_cut_config]);
      DrawGraph(AOverMaxDiff_vs_p_[i_cut_config], ";p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;A_{EDM}/(#Delta#theta_{y})_{MAX}", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_AOverMaxDiff_vs_p_"+qual).c_str(), false);
      AOverMaxDiff_vs_p_[i_cut_config]->SetName("AOverMaxDiff_vs_p");
      AOverMaxDiff_vs_p_[i_cut_config]->Write();

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

  bool write = true;
  bool fullFit = true;
  bool extraScans = true;

  // Read file
  std::string inputName = "../Plots/MC/dMu/"+config+"/plots/dMuSim_"+qual+".root";
  TFile *input = TFile::Open(inputName.c_str());
  cout<<"Reading\t"<<inputName<<" "<<input<<endl;

  std::string outputName = "../Plots/MC/dMu/"+config+"/fits/dMuSim_unblinded_"+qual+".root"; 
  if(!write) outputName = "delete_me.root";

  TFile *output = new TFile(outputName.c_str(), "RECREATE");

  output->mkdir("SimultaneousAnalysis");
  output->cd("SimultaneousAnalysis");

  SimultaneousAnalysis(input, output, fullFit);
  cout<<"Completed SimultaneousAnalysis"<<endl;

  output->mkdir("MomentumBinnedAnalysis");
  output->mkdir("MomentumBinnedAnalysis/ModuloFits");
  output->mkdir("MomentumBinnedAnalysis/ModuloFits/MomSlices");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans/MomSlices");
  output->cd("MomentumBinnedAnalysis");

  MomentumBinnedAnalysis(input, output, fullFit, extraScans);
  cout<<"Completed MomentumBinnedAnalysis"<<endl;

  input->Close();
  output->Close();

  std::cout<<"\nWritten plots to root file:\n"<<outputName<<std::endl;

  return 0;

}


/////

/*

TH1D* GetResidual(TH1D* data, TF1* fit) { 

  int nbins = data->GetXaxis()->GetNbins();
  double binWidth = data->GetBinWidth(1);
  double low = data->GetXaxis()->GetBinLowEdge(1);
  double high = low + nbins*binWidth;
  TH1D* residual = new TH1D("residual", "", nbins, low, high);  

  for (int ibin(1); ibin <= nbins; ibin++){
    residual->SetBinContent(ibin, 0.0);
    double time = residual->GetXaxis()->GetBinCenter(ibin);
    double cont = data->GetBinContent(ibin);
    double err = data->GetBinError(ibin);
    double integral = fit->Eval(time);
    residual->SetBinContent(ibin, integral - cont);
    residual->SetBinError(ibin, err);
  }

  return residual;
}


TH1D* GetFFT(TH1D* hist) {

  TH1 *hm = 0;
  TVirtualFFT::SetTransform(0);
  hm = hist->FFT(hm, "MAG");

  //Rescale x-axis by dividing by the function domain              
  TAxis *xaxis = hm->GetXaxis();

  int nBins = hist->GetXaxis()->GetNbins();
  double *ba = new double[nBins+1];
  xaxis -> GetLowEdge(ba);
  double Scale = 1./(hist->GetXaxis()->GetXmax() - hist->GetXaxis()->GetXmin());
  ba[nBins] = ba[nBins-1] + xaxis->GetBinWidth(nBins);

  for (int i = 0; i < nBins + 1; i++) {
       ba[i] *= Scale;
  }
 
  TH1D* fft = new TH1D(hm->GetName(), hm->GetTitle(), nBins, ba);
  for (int i = 0; i <= nBins; i++) {
      fft->SetBinContent(i, hm->GetBinContent(i));
      fft->SetBinError(i, hm->GetBinError(i));
  }

  fft->SetStats(0);
  fft->SetName("FFT");
  fft->Scale(1.0 / fft->Integral());

  //Calculate Nyquist frequency, which is twice the highest frequeny in the signal or half of the sampling rate.                                                                                            
  //...the maximum frequency before sampling errors start              

  double binWidth = hist->GetXaxis()->GetBinWidth(0);
  double sampleRate = 1 / binWidth;
  double nyquistFreq = 0.5 * sampleRate;

  fft->GetXaxis()->SetRangeUser(0, nyquistFreq);

  cout << "binWidth\t" <<binWidth<<" us"<<endl;
  cout << "sampleRate\t" <<sampleRate<<" MHz"<<endl;
  cout << "nyquistFreq\t" <<nyquistFreq<<" MHz"<<endl;

  return fft;

}

*/

///////////////////