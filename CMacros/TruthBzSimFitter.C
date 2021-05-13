#include <iostream>

#include "FancyDraw.h"
#include "Utils.h"
#include "RootInclude.h"

std::string config = "1700ppm";

std::string qual = "truth_AQ";

double xmin = 30;//7*G2PERIOD;
double xmax = 300;//70*G2PERIOD;

using namespace std;

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
  double xmax = graph->GetPointX(N-1);// + 50;
  double xmin = graph->GetPointX(0);// - 50; 
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

void MomentumBinnedAnalysis(TFile *input, TFile *output, const double phi, bool fullFit) {  

  string cuts_configs[] = {"MomSlices", "MomSymCuts", "MomMinScan"};

  int n_cut_config = sizeof(cuts_configs)/sizeof(cuts_configs[0]);

  vector<string> xLabels_;

  TGraphErrors* c_vs_p_[n_cut_config]; TGraphErrors* A_vs_p_[n_cut_config];

  int step = 200;
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

      p_[i_cut_config].push_back(p);
      ep_[i_cut_config].push_back(step/2);
      // Run fits
      int nEntries = moduloHist->GetEntries();

      TH1D *moduloProf = moduloHist->ProfileX();

      TGraphErrors *moduloGraph = ConvertToTGraphErrors(moduloProf);

      output->cd(("MomentumBinnedAnalysis/ModuloFits/"+cuts_configs[i_cut_config]).c_str());

      if(!fullFit) { 
          //output->mkdir(("MomentumBinnedAnalysis/ModuloFits/"+cuts_configs[i_cut_config]).c_str());
          
        // Simple fit with a phase of zero
        SimpleBzFit(moduloGraph, 0.17, OMEGA_A*1e3, 0.5, 0, G2PERIOD);
        DrawSimpleBzFit(moduloGraph, std::to_string(lo)+" < p [MeV] < "+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/SimpleModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -1, 1);// , double(nEntries), true);
        moduloGraph->SetName(("ModuloFit_"+momSlice).c_str());
        moduloGraph->Write();

        c_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleBzFunc")->GetParameter(2));
        ec_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleBzFunc")->GetParError(2));
        A_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleBzFunc")->GetParameter(0));
        eA_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleBzFunc")->GetParError(0));

        } else if(fullFit) { 
          //output->mkdir(("MomentumBinnedAnalysis/ModuloFits/"+cuts_configs[i_cut_config]).c_str());
          // Full Bz fit
          FullBzFit(moduloGraph, 0.17, OMEGA_A*1e3, phi, 0, OMEGA_A*1e3, phi, 0.5, 0, G2PERIOD);
          DrawFullBzFit(moduloGraph, std::to_string(lo)+" < p [MeV] < "+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/FullModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -1, 1);// , double(nEntries), true);
          moduloGraph->SetName(("ModuloFit_"+momSlice).c_str());
          moduloGraph->Write();

          c_[i_cut_config].push_back(moduloGraph->GetFunction("FullBzFunc")->GetParameter(6));
          ec_[i_cut_config].push_back(moduloGraph->GetFunction("FullBzFunc")->GetParError(6));
          A_[i_cut_config].push_back(moduloGraph->GetFunction("FullBzFunc")->GetParameter(0));
          eA_[i_cut_config].push_back(moduloGraph->GetFunction("FullBzFunc")->GetParError(0));
        
        }

        delete moduloProf;
        delete moduloHist;
        delete moduloGraph;

    }

    output->cd(("MomentumBinnedAnalysis/ParameterScans/"+cuts_configs[i_cut_config]).c_str());

    //TGraphErrors *c_vs_p_slice = GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_config]);
    //TGraphErrors *A_vs_p_slice = GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_
    c_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_config]);
    A_vs_p_[i_cut_config] = (GenerateTGraphErrors(p_[i_cut_config], A_[i_cut_config], ep_[i_cut_config], eA_[i_cut_config]));

    DrawScanGraph(c_vs_p_[i_cut_config], ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;c [mrad]", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_c_vs_p_"+qual).c_str(), false);
    DrawScanGraph(A_vs_p_[i_cut_config], ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;A_{Bz} [mrad]", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_A_vs_p_"+qual).c_str(), false);
  
    c_vs_p_[i_cut_config]->SetName("c_vs_p");
    A_vs_p_[i_cut_config]->SetName("A_vs_p");

    c_vs_p_[i_cut_config]->Write();
    A_vs_p_[i_cut_config]->Write();

    // ============ Symmetric cuts ============
    i_cut_config = 1; 

    for(int i_cut = 0; i_cut < n_cuts/2; i_cut++) {

         lo = 400 + i_cut*step; 
         hi = 3000 - i_cut*step;

         xLabels_.push_back(to_string(lo)+"-"+to_string(hi));

        // Get hist
        std::string momSlice = std::to_string(lo)+"_"+std::to_string(hi);
        int p = i_cut + 1;

        std::string moduloHistName = cuts_configs[i_cut_config]+"/ThetaY_vs_Time_Modulo_"+momSlice;
        TH2D *moduloHist = (TH2D*)input->Get((moduloHistName).c_str());

        if(moduloHist==0) continue;

        p_[i_cut_config].push_back(p);
        ep_[i_cut_config].push_back(0);

        // Run fits
        int nEntries = moduloHist->GetEntries();

        TH1D *moduloProf = moduloHist->ProfileX();

        TGraphErrors *moduloGraph = ConvertToTGraphErrors(moduloProf);

        output->cd(("MomentumBinnedAnalysis/ModuloFits/"+cuts_configs[i_cut_config]).c_str());

        if(!fullFit) { 
          // Simple fit with a phase of zero
          SimpleBzFit(moduloGraph, 0.17, OMEGA_A*1e3, 0.5, 0, G2PERIOD);
          DrawSimpleBzFit(moduloGraph, std::to_string(lo)+"-"+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/SimpleModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -1, 1);;// , double(nEntries), true);
          moduloGraph->SetName(("ModuloFit_"+momSlice).c_str());
          moduloGraph->Write();

          c_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleBzFunc")->GetParameter(2));
          ec_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleBzFunc")->GetParError(2));
          A_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleBzFunc")->GetParameter(0));
          eA_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleBzFunc")->GetParError(0));

        } else if(fullFit) { 
          // Full Bz fit
          FullBzFit(moduloGraph, 0.17, OMEGA_A*1e3, phi, 0, OMEGA_A*1e3, phi, 0.5, 0, G2PERIOD);
          DrawFullBzFit(moduloGraph, std::to_string(lo)+"-"+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/FullModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -1, 1);;// , double(nEntries), true);
          moduloGraph->SetName(("ModuloFit_"+momSlice).c_str());
          moduloGraph->Write();

          c_[i_cut_config].push_back(moduloGraph->GetFunction("FullBzFunc")->GetParameter(6));
          ec_[i_cut_config].push_back(moduloGraph->GetFunction("FullBzFunc")->GetParError(6));
          A_[i_cut_config].push_back(moduloGraph->GetFunction("FullBzFunc")->GetParameter(0));
          eA_[i_cut_config].push_back(moduloGraph->GetFunction("FullBzFunc")->GetParError(0));
        
        }
        
        delete moduloProf;
        delete moduloHist;
        delete moduloGraph;

    }

    output->cd(("MomentumBinnedAnalysis/ParameterScans/"+cuts_configs[i_cut_config]).c_str());

    c_vs_p_[i_cut_config] = (GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_config]));
    A_vs_p_[i_cut_config] = (GenerateTGraphErrors(p_[i_cut_config], A_[i_cut_config], ep_[i_cut_config], eA_[i_cut_config]));


    bool xLabel = false; 
    if(i_cut_config==1) {
      xLabel = true;
      // Set bin labels for sym cuts
      for (int i = 0; i < xLabels_.size(); i++) { 
        c_vs_p_[i_cut_config]->GetXaxis()->SetBinLabel(c_vs_p_[i_cut_config]->GetXaxis()->FindBin(i+1.), (xLabels_.at(i)).c_str());
        A_vs_p_[i_cut_config]->GetXaxis()->SetBinLabel(A_vs_p_[i_cut_config]->GetXaxis()->FindBin(i+1.), (xLabels_.at(i)).c_str());
      }
    }

    DrawScanGraph(c_vs_p_[i_cut_config], ";p_{min} #minus p_{max} [MeV];c [mrad]", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_c_vs_p_"+qual).c_str(), xLabel);
    DrawScanGraph(A_vs_p_[i_cut_config], ";p_{min} #minus p_{max} [MeV];A_{Bz} [mrad]", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_A_vs_p_"+qual).c_str(), xLabel);
    
    c_vs_p_[i_cut_config]->SetName("c_vs_p");
    A_vs_p_[i_cut_config]->SetName("A_vs_p");

    c_vs_p_[i_cut_config]->Write();
    A_vs_p_[i_cut_config]->Write();

    i_cut_config = 2;

    // ============ pmin scan ============
    for(int i_cut = 0; i_cut < n_cuts; i_cut++) {

        lo = 0 + i_cut*step;
        hi = PMAX;

        // Get hist
        std::string momSlice = std::to_string(lo)+"_"+std::to_string(hi);
        int p = lo;

        std::string moduloHistName = cuts_configs[i_cut_config]+"/ThetaY_vs_Time_Modulo_"+momSlice;
        TH2D *moduloHist = (TH2D*)input->Get((moduloHistName).c_str());

        if(moduloHist==0) continue;

        p_[i_cut_config].push_back(p);
        ep_[i_cut_config].push_back(step/2);

        // Run fits
        int nEntries = moduloHist->GetEntries();

        TH1D *moduloProf = moduloHist->ProfileX();

        TGraphErrors *moduloGraph = ConvertToTGraphErrors(moduloProf);

        output->cd(("MomentumBinnedAnalysis/ModuloFits/"+cuts_configs[i_cut_config]).c_str());

        if(!fullFit) { 
          // Simple fit with a phase of zero
          SimpleBzFit(moduloGraph, 0.17, OMEGA_A*1e3, 0.5, 0, G2PERIOD);
          DrawSimpleBzFit(moduloGraph, std::to_string(lo)+" < p [MeV] < "+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/SimpleModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -1, 1);
          moduloGraph->SetName(("ModuloFit_"+momSlice).c_str());
          moduloGraph->Write();

          c_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleBzFunc")->GetParameter(2));
          ec_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleBzFunc")->GetParError(2));
          A_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleBzFunc")->GetParameter(0));
          eA_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleBzFunc")->GetParError(0));

        } else if(fullFit) { 
          // Full Bz fit
          FullBzFit(moduloGraph, 0.17, OMEGA_A*1e3, phi, 0, OMEGA_A*1e3, phi, 0.5, 0, G2PERIOD);
          DrawFullBzFit(moduloGraph, std::to_string(lo)+" < p [MeV] < "+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/FullModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -1, 1);
          moduloGraph->SetName(("ModuloFit_"+momSlice).c_str());
          moduloGraph->Write();

          c_[i_cut_config].push_back(moduloGraph->GetFunction("FullBzFunc")->GetParameter(6));
          ec_[i_cut_config].push_back(moduloGraph->GetFunction("FullBzFunc")->GetParError(6));
          A_[i_cut_config].push_back(moduloGraph->GetFunction("FullBzFunc")->GetParameter(0));
          eA_[i_cut_config].push_back(moduloGraph->GetFunction("FullBzFunc")->GetParError(0));
        
        }
        
        delete moduloProf;
        delete moduloHist;
        delete moduloGraph;

    }

    output->cd(("MomentumBinnedAnalysis/ParameterScans/"+cuts_configs[i_cut_config]).c_str());

    c_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_config]);
    A_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], A_[i_cut_config], ep_[i_cut_config], eA_[i_cut_config]);

    DrawScanGraph(c_vs_p_[i_cut_config], ";p_{min} [MeV];c [mrad]", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_c_vs_p_"+qual).c_str(), false);
    DrawScanGraph(A_vs_p_[i_cut_config], ";p_{min} [MeV];A_{Bz} [mrad]", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+fitType+"_A_vs_p_"+qual).c_str(), false);

    c_vs_p_[i_cut_config]->SetName("c_vs_p");
    A_vs_p_[i_cut_config]->SetName("A_vs_p");

    c_vs_p_[i_cut_config]->Write();
    A_vs_p_[i_cut_config]->Write();

  
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

  DrawFoldedWiggle(gr_, ";Time modulo "+std::to_string(t_mod)+" #mus;Tracks / 149 ns", "../Images/MC/BzSim/"+config+"/Unblinded/WiggleMod_"+to_string(t_mod)+"_"+qual, 0, t_mod, 10, 5e4);

  return;
}

int main() {

  bool sanityPlots = false;//true;
  bool write = true; 
  bool fullFit = true;//false;

  // Read file
  string inputName = "../Plots/MC/BzSim/"+config+"/BzSim_"+qual+".root";
  TFile *input = TFile::Open((inputName).c_str());
  cout << "\nRead input...\t: " << inputName << " " << input << endl;

  std::string outputName = "../Plots/MC/BzSim/"+config+"/BzSim_trackReco_unblinded_"+qual+".root"; 
  if(!fullFit) outputName = "../Plots/MC/BzSim/"+config+"/BzSim_trackReco_simple_unblinded_"+qual+".root";
  if(!write) outputName = "delete_me.root";

  TFile *output = new TFile(outputName.c_str(), "RECREATE");

  output->mkdir("SimultaneousAnalysis");
  output->cd("SimultaneousAnalysis");

  // Get histograms
  TH1D *h1_wiggle = (TH1D*)input->Get("MainPlots/Wiggle");
  TH1D *h1_wiggle_mod = (TH1D*)input->Get("MainPlots/Wiggle_Modulo");
  TH2D *h2_thetaY_mod = (TH2D*)input->Get("MainPlots/ThetaY_vs_Time_Modulo");

  cout << "Got histograms...: "<< h1_wiggle << h1_wiggle_mod << h2_thetaY_mod << endl;

  double nEntries = h2_thetaY_mod->GetEntries();

  // Make profile
  TH1D *px_thetaY_mod = h2_thetaY_mod->ProfileX();

  cout << "Generated x-profile...: "<< px_thetaY_mod << endl; 

  TGraphErrors *gr_wiggle = ConvertToTGraphErrors(h1_wiggle);
  TGraphErrors *gr_wiggle_mod = ConvertToTGraphErrors(h1_wiggle_mod);
  TGraphErrors *gr_thetaY_mod = ConvertToTGraphErrors(px_thetaY_mod);

  // Draw all base plots
  if(sanityPlots) { 

    DrawTH1(h1_wiggle,"h1_wiggle","../Images/MC/BzSim/"+config+"/Unblinded/SanityPlots/h1_wiggle_"+qual);
    DrawTH1(h1_wiggle_mod,"h1_wiggle_mod","../Images/MC/BzSim/"+config+"/Unblinded/SanityPlots/h1_wiggle_mod_"+qual);
    DrawTGraphErrors(gr_wiggle,"gr_wiggle","../Images/MC/BzSim/"+config+"/Unblinded/SanityPlots/gr_wiggle_"+qual);
    DrawTGraphErrors(gr_wiggle_mod,"gr_wiggle_mod","../Images/MC/BzSim/"+config+"/Unblinded/SanityPlots/gr_wiggle_mod_"+qual);
    DrawTH2(h2_thetaY_mod,"h2_thetaY_mod","../Images/MC/BzSim/"+config+"/Unblinded/SanityPlots/h2_thetaY_mod_"+qual);
    DrawTH1(px_thetaY_mod,"px_thetaY_mod","../Images/MC/BzSim/"+config+"/Unblinded/SanityPlots/px_thetaY_mod_"+qual);
    DrawTGraphErrors(gr_thetaY_mod, "gr_thetaY_mod", "../Images/MC/BzSim/"+config+"/Unblinded/SanityPlots/gr_thetaY_mod_"+qual);

  }

  cout<<"Folding wiggle"<<endl;

  // Fold wiggle for illustration 
  FitFivePar(gr_wiggle, 1300, 64, 0.35, OMEGA_A*1e3, 0, xmin, xmax);
  TF1 *wiggle = gr_wiggle->GetFunction("FiveParFunc");
  DrawWiggle(gr_wiggle, ";Decay time [#mus];Tracks / 149 ns","../Images/MC/BzSim/"+config+"/Unblinded/fit_wiggle_"+qual, double(px_thetaY_mod->GetEntries()), xmin, xmax, 0, 100e3);
  gr_wiggle->SetName("WiggleFit");
  gr_wiggle->Write();

  FoldWiggle(gr_wiggle);//, ";Time modulo "+std::to_string(t_mod)+" #mus;Tracks / 149 ns", "../Images/MC/BzSim/"+config+"/Blinded/WiggleMod_"+to_string(t_mod)+"_"+qual);

  // Now fit the modulo wiggle
  cout<<"Running main modulo wiggle fit"<<endl; 
  FitFivePar(gr_wiggle_mod, 1300, 64.4, 0.35, OMEGA_A*1e3, 0, 0, G2PERIOD);
  TF1 *modWiggle = gr_wiggle_mod->GetFunction("FiveParFunc");
  DrawModWiggle(gr_wiggle_mod, ";t_{g#minus2}^{mod} [#mus];Tracks / 149 ns","../Images/MC/BzSim/"+config+"/Unblinded/fit_mod_wiggle_"+qual, double(px_thetaY_mod->GetEntries()), 140e3, 500e3);

  gr_wiggle_mod->SetName("ModWiggleFit");
  gr_wiggle_mod->Write();

  // ======= SET PHASE =======
  const double phi = modWiggle->GetParameter(4); //modWiggle->GetParameter(4);
  const double phi_err = modWiggle->GetParError(4);
  cout<<"Got phase: "<<phi<<endl;

  // ======= Fit for A_Bz =====
  // Bz should be 1700 ppm or 0.17 mrad
  if(fullFit) {
    FullBzFit(gr_thetaY_mod, 0.17, OMEGA_A*1e3, phi, 0, OMEGA_A*1e3, phi, 0.5, 0, G2PERIOD);
    TF1 *BzWiggle = gr_thetaY_mod->GetFunction("FullBzFunc");
    DrawFullBzFit(gr_thetaY_mod, ";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad]","../Images/MC/BzSim/"+config+"/Unblinded/fit_Bz_full_"+qual, nEntries, -1, 1);
    gr_thetaY_mod->SetName("BzFit");
    gr_thetaY_mod->Write();
  } else if(!fullFit) {
    SimpleBzFit(gr_thetaY_mod, 0.17, OMEGA_A*1e3, 0.5, 0, G2PERIOD);
    TF1 *BzWiggle = gr_thetaY_mod->GetFunction("SimpleBzFunc");
    DrawSimpleBzFit(gr_thetaY_mod, ";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad]","../Images/MC/BzSim/"+config+"/Unblinded/fit_Bz_simple_"+qual, nEntries, -1, 1);
    gr_thetaY_mod->SetName("BzFit");
    gr_thetaY_mod->Write();
  }

  cout<<"Number of tracks in fit:\t"<<px_thetaY_mod->GetEntries()<<endl;

  // Momentum binned 
  cout<<"\nPerforming momentum binned analysis"<<endl;
  
  output->mkdir("MomentumBinnedAnalysis");
  output->mkdir("MomentumBinnedAnalysis/ModuloFits");
  output->mkdir("MomentumBinnedAnalysis/ModuloFits/MomSlices");
  output->mkdir("MomentumBinnedAnalysis/ModuloFits/MomSymCuts");
  output->mkdir("MomentumBinnedAnalysis/ModuloFits/MomMinScan");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans/MomSlices");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans/MomSymCuts");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans/MomMinScan");

  MomentumBinnedAnalysis(input, output, phi, fullFit);

  // VertOffset(input, output, phi);

  input->Close();
  output->Close();
  std::cout<<"\nWritten plots to root file:\n"<<outputName<<std::endl;

  return 0;
}
