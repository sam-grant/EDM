#include <iostream>

#include "FancyDraw.h"
#include "Utils.h"
#include "RootInclude.h"
#include "EDMBlinding.h"

std::string config = "5.4e-18";
std::string qual = "vertCorr_eQ_eQ";

bool unblind = false; //false; //true;

TGraphErrors *BlindedModuloGraph(TFile *input, TGraphErrors *gr_thetaY_mod) { 

  // ================== First, fit N(t) for the phase ==================

  TH1D *h1_wiggle_mod = (TH1D*)input->Get("Wiggle_Modulo");
  TGraphErrors *gr_wiggle_mod = ConvertToTGraphErrors(h1_wiggle_mod);

  FitFivePar(gr_wiggle_mod, 1300, 64, 0.35, OMEGA_A*1e3, 0, 0, G2PERIOD);
  TF1 *modWiggle = gr_wiggle_mod->GetFunction("FiveParFunc");

  // Get phi
  double phi_omega = modWiggle->GetParameter(4);
  // Shift the phase 90 deg
  double phi_edm = phi_omega + M_PI/2.; 

  // Find a zero crossing 
  double t0 = phi_omega * G2PERIOD / (2*M_PI);
  double zeroCrossing = 8*G2PERIOD - t0;

  delete h1_wiggle_mod; delete gr_wiggle_mod; 

  // ================== Second, get blinded A_EDM ================== 

  double dMu_blind = blinded_edm_value(unblind);  
  std::cout<<"dMu_blind:\t"<<dMu_blind<<std::endl;
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

  DrawTF1(blindEDMFunc,";Time [#mus];#LT#theta_{y}#GT [mrad]","../Images/MC/dMuSim/"+config+"/Blinded/blindEDMFunc_"+qual+"_"+to_string(unblind));

  // Inject function into modulo plot
  return BlindedModulo(gr_thetaY_mod, blindEDMFunc);

}

void OverlayGraphs(std::vector<TGraphErrors*> graphs, std::vector<string> names, std::string title, std::string fname, double ymin, double ymax ) {

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

  graphs.at(0)->SetMarkerColor(kBlack);
  graphs.at(1)->SetMarkerColor(kBlue);
  graphs.at(2)->SetMarkerColor(kRed);

  for(int i = 0; i < nGraphs; i++) {
    graphs.at(i)->SetMarkerStyle(20);
    l->AddEntry(graphs.at(i), (names.at(i)).c_str());
    if(i==0) graphs.at(i)->Draw("AP");
    else graphs.at(i)->Draw("P SAME");
  }

  l->Draw("same");
  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}

void SimultaneousAnalysis(TFile *input, TFile *output) { 

  TH2D *moduloHist = (TH2D*)input->Get("ThetaY_vs_Time_Modulo");
  TH2D *moduloHistS0 = (TH2D*)input->Get("S0_ThetaY_vs_Time_Modulo");
  TH2D *moduloHistS12 = (TH2D*)input->Get("S12_ThetaY_vs_Time_Modulo");
  TH2D *moduloHistS18 = (TH2D*)input->Get("S18_ThetaY_vs_Time_Modulo");
  TH2D *moduloHistS12S18 = (TH2D*)moduloHistS12->Clone("moduloHistS12S18"); 
  moduloHistS12S18->Add(moduloHistS18);

  TH2D *hists[] = {moduloHist, moduloHistS0, moduloHistS12, moduloHistS18, moduloHistS12S18};

  std::vector<string> names = {"S0S12S18", "S0", "S12", "S18", "S12S18"};

  int counter = 0;

  for(auto &hist: hists) { 

    string name = names.at(counter);

    std::cout<<"Got modulo for "<<name<<std::endl;

    int nEntries = hist->GetEntries();

    TH1D *moduloProf = hist->ProfileX();
    std::cout << "Generated x-profile...\t: " << moduloProf << std::endl;



    TGraphErrors *moduloGraph = BlindedModuloGraph(input, ConvertToTGraphErrors(moduloProf)); // 	;
    moduloGraph->GetYaxis()->SetRangeUser(-.425, .425);
    // Fit
    SimpleSinFit(moduloGraph, 0.15, OMEGA_A * 1e3, 0);

    std::cout<<"A_EDM:\t"<<moduloGraph->GetFunction("SimpleSinFunc")->GetParameter(0)<<std::endl;
	
    DrawSimpleSinFit(moduloGraph, name+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/dMuSim/"+config+"/Blinded/"+name+"_ModuloFit_"+qual+"_"+to_string(unblind)).c_str(), double(nEntries),unblind);

    moduloGraph->SetName((name+"_fit").c_str());
    moduloGraph->Write();

    delete hist;

    counter++;

  }

  return; 

}

void MomentumBinnedAnalysis(TFile *input, TFile *output) { 

  vector<TGraphErrors*> cGraphs_; vector<TGraphErrors*> AEDMGraphs_;

  std::vector<string> names_ = { "S0", "S12", "S18" };

  for(int i_stn = 0; i_stn < names_.size(); i_stn++) {

    string name = names_.at(i_stn);

    std::vector<double> c_;
    std::vector<double> ec_;
    std::vector<double> p_;
    std::vector<double> ep_;
    std::vector<double> AEDM_;
    std::vector<double> eAEDM_;

    int pmin = 0.; 
    int pmax = 100.;

    for(int i_cut = 0; i_cut < 50; i_cut++) {

      std::string momSlice = std::to_string(pmin)+"_"+std::to_string(pmax);
      int p = (pmax+pmin)/2;

      TH2D *moduloHist = (TH2D*)input->Get((name+"_ThetaY_vs_Time_Modulo_"+momSlice).c_str());

      if(moduloHist == 0) {
        pmin = pmin + 100;
        pmax = pmax + 100;
        continue;
      }

      int nEntries = moduloHist->GetEntries();

      TH1D *moduloProf = moduloHist->ProfileX();

      TGraphErrors *moduloGraph = ConvertToTGraphErrors(moduloProf);

      SimpleSinFit(moduloGraph, 0.17, OMEGA_A * 1e3, 0);

      DrawSimpleSinFit(moduloGraph, name+", "+std::to_string(pmin)+" < p [MeV] < "+std::to_string(pmax)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/dMuSim/"+config+"/Blinded/MomBinnedAna/"+name+"_ModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), true);

      output->cd("MomentumBinnedAnalysis/ModuloFits");

      moduloGraph->SetName((name+"_fit_"+std::to_string(pmin)+"_"+std::to_string(pmax)).c_str());
      moduloGraph->Write();

      p_.push_back(p);
      ep_.push_back(pmax - p);
      c_.push_back(moduloGraph->GetFunction("SimpleSinFunc")->GetParameter(2));
      ec_.push_back(moduloGraph->GetFunction("SimpleSinFunc")->GetParError(2));
      AEDM_.push_back(moduloGraph->GetFunction("SimpleSinFunc")->GetParameter(0));
      eAEDM_.push_back(moduloGraph->GetFunction("SimpleSinFunc")->GetParError(0));

      pmin = pmin + 100;
      pmax = pmax + 100;

      delete moduloProf; delete moduloHist;

    }

    TGraphErrors *c_vs_p = GenerateTGraphErrors(p_, c_, ep_, ec_);
    TGraphErrors *AEDM_vs_p = GenerateTGraphErrors(p_, AEDM_, ep_, eAEDM_);

    c_vs_p->GetXaxis()->SetRangeUser(0,3000);
    AEDM_vs_p->GetXaxis()->SetRangeUser(0,3000);

    DrawTGraphErrors(c_vs_p, name+";p [MeV]: in range p #minus 50 < p < p #plus 50 MeV;c [mrad]", ("../Images/MC/dMuSim/"+config+"/Blinded/MomBinnedAna/"+name+"_c_vs_p_"+qual).c_str());
    DrawTGraphErrors(AEDM_vs_p, name+";p [MeV]: in range p #minus 50 < p < p #plus 50 MeV;A_{EDM} [mrad]", ("../Images/MC/dMuSim/"+config+"/Blinded/MomBinnedAna/"+name+"_AEDM_vs_p_"+qual).c_str());

    cGraphs_.push_back(c_vs_p);
    AEDMGraphs_.push_back(AEDM_vs_p);

    output->cd("MomentumBinnedAnalysis/ParameterScans");
    c_vs_p->SetName((name+"_c_vs_p").c_str());
    AEDM_vs_p->SetName((name+"_AEDM_vs_p").c_str());
    c_vs_p->Write();
    AEDM_vs_p->Write();

  }
  	
  double c_ymin; double c_ymax;
  double A_ymin; double A_ymax;
  if(qual=="eQ" || qual=="vertCorr_eQ") { 
    c_ymin = -0.6; c_ymax = 0.15;
    A_ymin = 0.0; A_ymax = 0.35;
  } else if(qual=="noQ"  || qual=="vertCorr_noQ") { 
    c_ymin = -2; c_ymax = 2;
    A_ymin = -2; A_ymax = 2;
  } else if(qual=="pValQ"  || qual=="vertCorr_pValQ") { 
    c_ymin = -2.5; c_ymax = 1.25;
    A_ymin = -2; A_ymax = 2;
  } else if(qual=="vertCorr_eQ_eQ") { 
    c_ymin = -0.065; c_ymax = 0.05;
    A_ymin = -0.05; A_ymax = 0.4;
  }

  OverlayGraphs(cGraphs_, names_, "", ("../Images/MC/dMuSim/"+config+"/Blinded/MomBinnedAna/c_vs_p_overlay_"+qual).c_str(), c_ymin, c_ymax);
  OverlayGraphs(AEDMGraphs_, names_, "", ("../Images/MC/dMuSim/"+config+"/Blinded/MomBinnedAna/AEDM_vs_p_overlay_"+qual).c_str(), A_ymin, A_ymax);

  return; 
}

int main() {

  bool write = true;
  // Read file
  std::string inputName = "../Plots/MC/dMu/"+config+"/dMuSim_"+qual+".root";
  TFile *input = TFile::Open(inputName.c_str());

  std::string outputName = "../Plots/MC/dMu/"+config+"/dMuSim_blindedFits_"+qual+"_"+std::to_string(unblind)+".root"; 
  if(!write) outputName = "delete_me.root";

  TFile *output = new TFile(outputName.c_str(), "RECREATE");

  output->mkdir("SimultaneousAnalysis");
  output->cd("SimultaneousAnalysis");

  SimultaneousAnalysis(input, output);

  output->mkdir("MomentumBinnedAnalysis");
  output->mkdir("MomentumBinnedAnalysis/ModuloFits");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans");

  MomentumBinnedAnalysis(input, output);

  input->Close();
  output->Close();

  std::cout<<"\nWritten plots to root file:\n"<<outputName<<std::endl;

  return 0;

}
