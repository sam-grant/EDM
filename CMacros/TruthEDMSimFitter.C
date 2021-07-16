#include <iostream>

#include "FancyDraw.h"
#include "Utils.h"
#include "RootInclude.h"

std::string config = "5.4e-18";

std::string qual = "truthAllDecays_MRF_200MeV_AQ";

//std::string qual = "truthAllDecays_AAR_200MeV_AQ_option0";
//std::string qual = "truthAllDecays_AAR_200MeV_AQ_option1";
//std::string qual = "truthAllDecays_AAR_200MeV_AQ_option2";
//std::string qual = "truthAllDecays_AAR_200MeV_AQ_option3";

// std::string qual = "truth_AQ";//_DEBUG";
//std::string qual = "truthAllDecays_500MeV_AQ";//_DEBUG"/;
//std::string qual = "truthAllDecays_AAR_500MeV_AQ";//_DEBUG";
//std::string qual = "truthAllDecays_MRF_200MeV_AQ";//_DEBUG";
//std::string qual = "truthAllDecays_MRF_200MeV_noQ";//_DEBUG";
//std::string qual = "truthAllDecays_WORLD_200MeV_AQ";//_DEBUG";
//std::string qual = "truthAllDecays_AAR_200MeV_pyp_AQ";//_DEBUG";
//std::string qual = "truthAllDecays_AAR_200MeV_atanpypz_AQ";//.root";
//std::string qual = "truthAllDecays_AAR_200MeV_pxpz_AQ";//.root";
//std::string qual = "truthAllDecays_200MeV_AAR_AQ_phi";
//std::string qual = "truthAllDecays_AAR_200MeV_AQ_pypx";//truthAllDecays_AAR_200MeV_AQ_phi";
//std::string qual = "truthAllDecays_AAR_200MeV_AQ_test";
//std::string qual = "truth_AAR_200MeV_AQ_phi";
//std::string qual = "truth_AAR_200MeV_AQ";//_DEBUG";
//std::string qual = "truth_AAR_200MeV_tan_AQ";//_DEBUG";
//std::string qual = "truth_WORLD_200MeV_AQ";//_DEBUG";
//std::string qual = "truthAllDecays_MRF_200MeV_AQ";//_DEBUG";
//std::string qual = "truthAllDecays_AAR_muPol_200MeV_AQ";//_DEBUG";
//std::string qual = "truthAllDecays_WORLD_muPol_200MeV_AQ";//_DEBUG";
//std::string qual = "truthAllDecays_MRF_200MeV_AQ";//_DEBUG";
//std::string qual = "truthAllDecays_MRF_500MeV_AQ";//_DEBUG";
//std::string qual = "truth_MRF_500MeV_AQ";
//std::string qual = "truth_MRF_200MeV_AQ";
// std::string qual = "truthAllDecays_AAR_500MeV_AQ";//_DEBUG";
//std::string qual = "truthAllDecays_WORLD_500MeV_AQ";//_DEBUG";
//std::string qual = "truthAllDecays_WORLD_500MeV_AQ";//_DEBUG";
//std::string qual = "truthAllDecays_AQ";//_DEBUG";

double scaleFactor = 1.0;

string mainTitle = "e^{+}_{LAB}";

double xmin = 30;//7*G2PERIOD;
double xmax = 300;//70*G2PERIOD;

using namespace std;

/////

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

///////////////////

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
  double offset = (xmax - xmin) * 0.05;
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

double GetPhase(TFile *input) { 

  cout<<"Getting phase"<<endl;

  TH1D *h1_wiggle = (TH1D*)input->Get("MainPlots/Wiggle");
  TH1D *h1_wiggle_mod = (TH1D*)input->Get("MainPlots/Wiggle_Modulo");

  TGraphErrors *gr_wiggle = ConvertToTGraphErrors(h1_wiggle);
  TGraphErrors *gr_wiggle_mod = ConvertToTGraphErrors(h1_wiggle_mod);

  FitFivePar(gr_wiggle, 1300, 64.4, 0.35, OMEGA_A*1e3, 0, xmin, xmax);
  FitFivePar(gr_wiggle_mod, 1300, 64.4, 0.35, OMEGA_A*1e3, 0, 0, G2PERIOD);

  TF1 *wiggle = gr_wiggle->GetFunction("FiveParFunc");
  DrawWiggle(gr_wiggle, ";Decay time [#mus];Tracks / 149 ns","../Images/MC/dMuSim/"+config+"/Unblinded/fit_wiggle_"+qual, double(h1_wiggle->GetEntries()), xmin, xmax, 10, 10e5);

  TF1 *modWiggle = gr_wiggle_mod->GetFunction("FiveParFunc");
  DrawModWiggle(gr_wiggle_mod, ";t_{g#minus2}^{mod} [#mus];Tracks / 149 ns","../Images/MC/dMuSim/"+config+"/Unblinded/fit_mod_wiggle_"+qual, double(h1_wiggle_mod->GetEntries()), 25e3, 150e3);//100e3, 500e3);

  // Currently don't truth the phase from the modulo
  // Phase from regular wiggle seems more stable.

  return wiggle->GetParameter(4);

}

void SimultaneousAnalysis(TFile *input, TFile *output, bool fullFit) {

  const double phi = GetPhase(input); 

  std::cout<<"Phase is "<<phi<<std::endl;

  TH2D *h2_thetaY_mod = (TH2D*)input->Get("MainPlots/ThetaY_vs_Time_Modulo");

  int nEntries = h2_thetaY_mod->GetEntries();
  TH1D *px_thetaY_mod = h2_thetaY_mod->ProfileX();

  //px_thetaY_mod->Rebin(2);

  std::cout << "Generated x-profile...\t: " << px_thetaY_mod << std::endl;

  TGraphErrors *gr_thetaY_mod = ConvertToTGraphErrors(px_thetaY_mod);

  // Get FFT
  TH1D *px_thetaY_mod_fft = GetFFT(px_thetaY_mod);
  DrawTH1(px_thetaY_mod_fft, ";Frequency [MHz];Entries", ("../Images/MC/dMuSim/"+config+"/Unblinded/fft_h_thetaY_mod_"+qual).c_str());

  delete px_thetaY_mod_fft;

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
      TH1D *h_res = GetResidual(px_thetaY_mod, func);
      TH1D *h_res_fft = GetFFT(h_res);

      DrawTH1(h_res, ";t_{g#minus2}^{mod} [#mus];Fit residual [mrad] / 50 ns", ("../Images/MC/dMuSim/"+config+"/Unblinded/h_res_"+qual).c_str());
      DrawTH1(h_res_fft, ";Frequency [MHz];Entries", ("../Images/MC/dMuSim/"+config+"/Unblinded/h_fft_res_"+qual).c_str());


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
  
  
  int step = 200;//200;///500;//250;//500;//200;
  int n_cuts = PMAX / step;
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

  vector<double> thetaYMaxDiff_[n_cut_config];
  vector<double> AOverMaxDiff_[n_cut_config];


  // ============ 200 MeV slices ============
  i_cut_config = 0; 

  for(int i_cut = 0; i_cut < n_cuts; i_cut++) {

      lo = 0 + i_cut*step; 
      hi = step + i_cut*step;

      // Get hist
      std::string momSlice = std::to_string(lo)+"_"+std::to_string(hi);
      int p = (hi+lo)/2;

      std::string moduloHistName = cuts_configs[i_cut_config]+"/ThetaY_vs_Time_Modulo_"+momSlice;
      TH2D *moduloHist = (TH2D*)input->Get((moduloHistName).c_str());

      if(moduloHist==0) continue;

      int nEntries = moduloHist->GetEntries();

      if(qual=="truth_equalStats_500e3_AQ" && (nEntries < 450e3 || nEntries > 550e3)) continue;

      p_[i_cut_config].push_back(p);
      ep_[i_cut_config].push_back(step/2);

      // Run fits
      TH1D *moduloProf = moduloHist->ProfileX();

      TGraphErrors *moduloGraph = ConvertToTGraphErrors(moduloProf);

      output->cd(("MomentumBinnedAnalysis/ModuloFits/"+cuts_configs[i_cut_config]).c_str());

      double chiSqrNDF = -1;

      if(!fullFit) { 
          
        // Simple fit with a phase of zero
        SimpleEDMFit(moduloGraph, 0.15, OMEGA_A * 1e3, 0);
        DrawSimpleEDMFit(moduloGraph, std::to_string(lo)+" < p [MeV] < "+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/SimpleModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -5*scaleFactor, 5*scaleFactor, true);//-5*1e-3, 5*1e-3, true);// , double(nEntries), true);
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
          DrawFullEDMFit(moduloGraph, std::to_string(lo)+" < p [MeV] < "+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/FullModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -5*scaleFactor, 5*scaleFactor, true);//-5*1e-3, 5*1e-3, true);// , double(nEntries), true);
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

        if(extraScans) { 

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

          double thetaYMaxDiff = thetaYHist->FindLastBinAbove(0,1) - thetaYHist->FindFirstBinAbove(0,1);
          thetaYMaxDiff_[i_cut_config].push_back(thetaYMaxDiff);

          double AOverMaxDiff = A_[i_cut_config].at(i_cut) / thetaYMaxDiff;
          AOverMaxDiff_[i_cut_config].push_back(AOverMaxDiff);

        }

    }

    output->cd(("MomentumBinnedAnalysis/ParameterScans/"+cuts_configs[i_cut_config]).c_str());

    //TGraphErrors *c_vs_p_slice = GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_config]);
    //TGraphErrors *A_vs_p_slice = GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_
    c_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_config]);
    A_vs_p_[i_cut_config] = (GenerateTGraphErrors(p_[i_cut_config], A_[i_cut_config], ep_[i_cut_config], eA_[i_cut_config]));

    DrawGraph(c_vs_p_[i_cut_config], ";e^{+}_{LAB} p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;c [mrad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_c_vs_p_"+qual).c_str(), false);
    DrawGraph(A_vs_p_[i_cut_config], ";e^{+}_{LAB} p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;A_{EDM} [mrad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_A_vs_p_"+qual).c_str(), false);
  
    c_vs_p_[i_cut_config]->SetName("c_vs_p");
    A_vs_p_[i_cut_config]->SetName("A_vs_p");

    c_vs_p_[i_cut_config]->Write();
    A_vs_p_[i_cut_config]->Write();

    if(extraScans) {


      thetaY_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], thetaY_[i_cut_config], ep_[i_cut_config], e_thetaY_[i_cut_config]);
      DrawGraph(thetaY_vs_p_[i_cut_config], ";e^{+}_{LAB} p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#LT#theta_{y}#GT [mrad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_theta_Y_vs_p_"+qual).c_str(), false);
      thetaY_vs_p_[i_cut_config]->SetName("thetaY_vs_p");
      thetaY_vs_p_[i_cut_config]->Write();

      thetaY_RMS_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], thetaY_RMS_[i_cut_config], ep_[i_cut_config], e_thetaY_RMS_[i_cut_config]);
      DrawGraph(thetaY_RMS_vs_p_[i_cut_config], ";e^{+}_{LAB} p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#sigma_{#thetay} [mrad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_theta_Y_RMS_vs_p_"+qual).c_str(), false);
      thetaY_RMS_vs_p_[i_cut_config]->SetName("thetaY_RMS_vs_p");
      thetaY_RMS_vs_p_[i_cut_config]->Write();

      Y_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], Y_[i_cut_config], ep_[i_cut_config], e_Y_[i_cut_config]);
      DrawGraph(Y_vs_p_[i_cut_config], ";e^{+}_{LAB} p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#LTy#GT [mm]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_Y_vs_p_"+qual).c_str(), false);
      Y_vs_p_[i_cut_config]->SetName("Y_vs_p");
      Y_vs_p_[i_cut_config]->Write();

      Y_RMS_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], Y_RMS_[i_cut_config], ep_[i_cut_config], e_Y_RMS_[i_cut_config]);
      DrawGraph(Y_RMS_vs_p_[i_cut_config], ";e^{+}_{LAB} p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#sigma_{y} [mm]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_Y_RMS_vs_p_"+qual).c_str(), false);
      Y_RMS_vs_p_[i_cut_config]->SetName("Y_RMS_vs_p");
      Y_RMS_vs_p_[i_cut_config]->Write();

      pY_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], pY_[i_cut_config], ep_[i_cut_config], e_pY_[i_cut_config]);
      DrawGraph(pY_vs_p_[i_cut_config], ";e^{+}_{LAB} p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#LTp_{y}#GT [MeV]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_pY_vs_p_"+qual).c_str(), false);
      pY_vs_p_[i_cut_config]->SetName("pY_vs_p");
      pY_vs_p_[i_cut_config]->Write();

      pY_RMS_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], pY_RMS_[i_cut_config], ep_[i_cut_config], e_pY_RMS_[i_cut_config]);
      DrawGraph(pY_RMS_vs_p_[i_cut_config], ";e^{+}_{LAB} p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#sigma_{py} [MeV]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_pY_RMS_vs_p_"+qual).c_str(), false);
      pY_RMS_vs_p_[i_cut_config]->SetName("pY_RMS_vs_p");
      pY_RMS_vs_p_[i_cut_config]->Write();

      N_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], N_[i_cut_config], ep_[i_cut_config], zeros_[i_cut_config]);
      DrawGraph(N_vs_p_[i_cut_config], ";e^{+}_{LAB} p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;Positrons", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_N_vs_p_"+qual).c_str(), false);
      N_vs_p_[i_cut_config]->SetName("N_vs_p");
      N_vs_p_[i_cut_config]->Write();

      eA_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], eA_[i_cut_config], ep_[i_cut_config], zeros_[i_cut_config]);
      DrawGraph(eA_vs_p_[i_cut_config], ";e^{+}_{LAB} p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#deltaA_{EDM}", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_eA_vs_p_"+qual).c_str(), false);
      eA_vs_p_[i_cut_config]->SetName("eA_vs_p");
      eA_vs_p_[i_cut_config]->Write();

      chiSqrNDF_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], chiSqrNDF_[i_cut_config], ep_[i_cut_config], zeros_[i_cut_config]);
      DrawGraph(chiSqrNDF_vs_p_[i_cut_config], ";e^{+}_{LAB} p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#chi^{2}/NDF", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_chiSqrNDF_vs_p_"+qual).c_str(), false);
      chiSqrNDF_vs_p_[i_cut_config]->SetName("chiSqrNDF_vs_p");
      chiSqrNDF_vs_p_[i_cut_config]->Write();


      // Normalise A_EDM by max angular diff
      cout<<"-3"<<endl;
      thetaYMaxDiff_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], thetaYMaxDiff_[i_cut_config], ep_[i_cut_config], zeros_[i_cut_config]);
      cout<<"-2"<<endl;
      DrawGraph(thetaYMaxDiff_vs_p_[i_cut_config], ";e^{+}_{LAB} p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;(#Delta#theta_{y})_{MAX} [mrad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_thetaYMaxDiff_vs_p_"+qual).c_str(), false);
      cout<<"-1"<<endl;
      thetaYMaxDiff_vs_p_[i_cut_config]->SetName("thetaYMaxDiff_vs_p");
      cout<<"0"<<endl;
      //cout<<thetaYMaxDiff_vs_p_[_cut_config]<<endl;
      thetaYMaxDiff_vs_p_[i_cut_config]->Write();

      cout<<"1"<<endl;
      AOverMaxDiff_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], AOverMaxDiff_[i_cut_config], ep_[i_cut_config], zeros_[i_cut_config]);
      cout<<"2"<<endl;
      DrawGraph(AOverMaxDiff_vs_p_[i_cut_config], ";e^{+}_{LAB} p [MeV] in range: p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;A_{EDM}/(#Delta#theta_{y})_{MAX} [mrad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_AOverMaxDiff_vs_p_"+qual).c_str(), false);
      cout<<"3"<<endl;
      AOverMaxDiff_vs_p_[i_cut_config]->SetName("AOverMaxDiff_vs_p");
      cout<<"4"<<endl;
      AOverMaxDiff_vs_p_[i_cut_config]->Write();
      cout<<"5"<<endl;

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
  bool fullFit = true;//false;//true;//true;
  bool extraScans = true;

  // Read file
  std::string inputName = "../Plots/MC/dMu/"+config+"/dMuSim_"+qual+".root";
  TFile *input = TFile::Open(inputName.c_str());
  cout<<"Reading\t"<<inputName<<" "<<input<<endl;

  std::string outputName = "../Plots/MC/dMu/"+config+"/dMuSim_unblindedFits_"+qual+".root"; 
  if(!write) outputName = "delete_me.root";

  TFile *output = new TFile(outputName.c_str(), "RECREATE");

  output->mkdir("SimultaneousAnalysis");
  output->cd("SimultaneousAnalysis");

  SimultaneousAnalysis(input, output, fullFit);

  output->mkdir("MomentumBinnedAnalysis");
  output->mkdir("MomentumBinnedAnalysis/ModuloFits");
  output->mkdir("MomentumBinnedAnalysis/ModuloFits/MomSlices");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans/MomSlices");

  MomentumBinnedAnalysis(input, output, fullFit, extraScans);

  input->Close();
  output->Close();

  std::cout<<"\nWritten plots to root file:\n"<<outputName<<std::endl;

  return 0;

}
