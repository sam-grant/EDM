#include <iostream>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

using namespace std;

// Do not forsee chainging this anytime soon
const int nTrials = 1e3;

//string limit = "1700ppm"; // Bz
//string limit = "1.8e-18"; // only works for "truthAllDecays"

// Global momentum cuts
const double xmin = 750;
const double xmax = 2500;
// const double xmin = 825; // 750;
// const double xmax = 2375; // 2500;
// const double xmin = 900;
// const double xmax = 2250;
// const double xmin = 1025;
// const double xmax = 2125;

string GetQual(string config) {

  // AQ: just a time cut in the case of "decays". Additional p-val and hitVol cut for vertices
  // BQ: full vertex cuts
  // CQ: time cut plus 12 planes hit cut

  if(config.find("_AQ") != std::string::npos) { 
    return "AQ";
  } else if(config.find("_BQ") != std::string::npos) { 
    return "BQ";
  } else if(config.find("_CQ") != std::string::npos) { 
    return "CQ";
  } else { 
    cerr<<"Qual is unknown";
    return "";
  }

}

string GetFrame(string config) { 

  if(config.find("WORLD") != std::string::npos) { 
    return "WORLD";
  } else if(config.find("AAR") != std::string::npos) { 
    return "AAR";
  } else if(config.find("MRF") != std::string::npos) { 
    return "MRF";
  } else { 
    cerr<<"Frame is unknown";
    return "";
  }

}

string GetTracksOrDecays(string config) {

  if(config.find("allDecays_") != std::string::npos) { //} || config.find("truth_") != std::string::npos) { 
    return "allDecays";
  } else if(config.find("acceptedDecays_") != std::string::npos) { 
    return "acceptedDecays";
  } else if(config.find("trackTruth_") != std::string::npos) { // } || config.find("trackReco_") != std::string::npos) { 
    return "trackTruth";
  } else if(config.find("trackReco_") != std::string::npos) { 
    return "trackReco";  
  } else if(config.find("trackRecoControl_") != std::string::npos) { // } || config.find("trackReco_") != std::string::npos) { 
    return "trackRecoControl";
  } else if(config.find("truthControl_") != std::string::npos) { 
    return "truthControl";  
  }else { 
    cerr<<"Type is unknown";
    return "";
  }

}

string GetTracksOrDecaysLabel(string config) {

  if(config.find("allDecays_") != std::string::npos || config.find("acceptedDecays_") != std::string::npos || config.find("acceptedDecaysControl_") != std::string::npos) { 
    return "Decays";
  } else if(config.find("trackTruth_") != std::string::npos || config.find("trackReco_") != std::string::npos || config.find("trackRecoControl_") != std::string::npos) { 
    return "Tracks";
  } else { 
    cerr<<"Config is unknown";
    return "";
  }

}

int GetStep(string config) { 

  if(config.find("500MeV") != std::string::npos) { 
    return 500;
  } else if(config.find("250MeV") != std::string::npos) { 
    return 250;
  } else if(config.find("200MeV") != std::string::npos) { 
    return 200;
  } else if(config.find("125MeV") != std::string::npos) { 
    return 125;
  } else { 
    cerr<<"Step size is unknown";
    return -1;
  }

}

string GetLabel(string config) { 

  string key1 = "trackReco_";
  string key2 = "trackTruth_";
  string key3 = "acceptedDecays_";
  string key4 = "allDecays_";

  if(config.find(key1) != std::string::npos) { 
    return "reco vertices";
  } else if(config.find(key2) != std::string::npos) { 
    return "truth vertices";
  } else if(config.find(key3) != std::string::npos) { 
    return "accepted decays";
  } else if(config.find(key4) != std::string::npos) { 
    return "all decays";
  } else { 
    cerr<<"Config string unknown";
    return "ERROR";
  }

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

void OverlayFFTs(TH1D *h_FFT, TH1D *h_FFT_res, std::string title, std::string fname) { 

  TCanvas *c = new TCanvas("c","c",800,600);

  h_FFT->SetTitle(title.c_str());

  h_FFT->SetStats(0);
      
  h_FFT->GetXaxis()->SetTitleSize(.04);
  h_FFT->GetYaxis()->SetTitleSize(.04);
  h_FFT->GetXaxis()->SetTitleOffset(1.1);
  h_FFT->GetYaxis()->SetTitleOffset(1.25);
  h_FFT->GetXaxis()->CenterTitle(1);
  h_FFT->GetYaxis()->CenterTitle(1);
  h_FFT->GetYaxis()->SetMaxDigits(4);
  h_FFT->SetLineColor(kBlack);
  h_FFT->SetLineWidth(2);

  // Get maximum 
  double max = 0; 
  double max1 = h_FFT->GetMaximum(); 
  double max2 = h_FFT_res->GetMaximum();

  if(max1 > max2) max = max1; 
  else max = max2; 

  h_FFT->SetMaximum(max*1.5);

  h_FFT->Draw("HIST");

  h_FFT_res->SetLineColor(kGray);
  h_FFT_res->SetMarkerColor(kGray);
  h_FFT_res->SetLineWidth(2);
  h_FFT_res->Draw("HIST SAME");

  TLegend *leg = new TLegend(.65, .79, .89, .89);
  leg->SetBorderSize(0);
  leg->SetTextSize(24);
  leg->SetTextFont(44);

  leg->AddEntry(h_FFT, "FFT");
  leg->AddEntry(h_FFT_res, "Residual FFT");

  leg->Draw("SAME");

//    c->SetLogy();

  c->SaveAs((fname+".C").c_str());
  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());

  delete c;

  return;

}

void DrawFFT(TH1D *h_FFT, std::string datasetLabel, std::string title, std::string fname) { 

  TCanvas *c = new TCanvas("c","c",800,600);

  h_FFT->SetTitle(title.c_str());

  h_FFT->SetStats(0);
      
  h_FFT->GetXaxis()->SetTitleSize(.04);
  h_FFT->GetYaxis()->SetTitleSize(.04);
  h_FFT->GetXaxis()->SetTitleOffset(1.1);
  h_FFT->GetYaxis()->SetTitleOffset(1.25);
  h_FFT->GetXaxis()->CenterTitle(1);
  h_FFT->GetYaxis()->CenterTitle(1);
  h_FFT->GetYaxis()->SetMaxDigits(4);
  h_FFT->SetLineColor(kBlack);
  h_FFT->SetLineWidth(2);

  h_FFT->Draw("HIST");

  TLegend *leg = new TLegend(.65, .79, .89, .89);
  leg->SetBorderSize(0);
  leg->SetTextSize(24);
  leg->SetTextFont(44);

  leg->AddEntry(h_FFT, ("Data: "+datasetLabel).c_str());

  leg->Draw("SAME");

  // f = 1/2*T
  gPad->Update();

  // This is wrong
  TLine *g2Line = new TLine(OMEGA_A*1e3/2, gPad->GetUymin(), OMEGA_A*1e3/2, gPad->GetUymax());
  g2Line->SetLineStyle(2);
  g2Line->SetLineColor(kRed);
  // g2Line->Draw("SAME");

//  cout<<OMEGA_A*1e3/2<<endl;

  c->SaveAs((fname+".C").c_str());
  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());

  delete c;
  return;

}

void DrawFFTZoom(TH1D *h_FFT, std::string datasetLabel, std::string title, std::string fname) { 

  TCanvas *c = new TCanvas("c","c",800,600);

  h_FFT->SetTitle(title.c_str());

  h_FFT->SetStats(0);
      
  h_FFT->GetXaxis()->SetTitleSize(.04);
  h_FFT->GetYaxis()->SetTitleSize(.04);
  h_FFT->GetXaxis()->SetTitleOffset(1.1);
  h_FFT->GetYaxis()->SetTitleOffset(1.25);
  h_FFT->GetXaxis()->CenterTitle(1);
  h_FFT->GetYaxis()->CenterTitle(1);
  h_FFT->GetYaxis()->SetMaxDigits(4);
  h_FFT->SetLineColor(kBlack);
  h_FFT->SetLineWidth(2);

  h_FFT->GetXaxis()->SetRangeUser(1.5, 2.5);

  h_FFT->Draw("HIST");

  TLegend *leg = new TLegend(.65, .79, .89, .89);
  leg->SetBorderSize(0);
  leg->SetTextSize(24);
  leg->SetTextFont(44);

  leg->AddEntry(h_FFT, ("Data: "+datasetLabel).c_str());

  leg->Draw("SAME");

  // f = 1/2*T
  gPad->Update();

  // This is wrong
  TLine *g2Line = new TLine(OMEGA_A*1e3/2, gPad->GetUymin(), OMEGA_A*1e3/2, gPad->GetUymax());
  g2Line->SetLineStyle(2);
  g2Line->SetLineColor(kRed);
  // g2Line->Draw("SAME");

//  cout<<OMEGA_A*1e3/2<<endl;

  c->SaveAs((fname+".C").c_str());
  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());

  delete c;
  return;

}

void RunSim(string config, string dataset, string blinding) { 

  cout<<"\n***************************** SIM *****************************\n"<<endl;

  cout<<"\n***************************** Processing input configuration *****************************\n"<<endl;

  int step = GetStep(config);
  std::string qual = GetQual(config);
  std::string tracksOrDecays = GetTracksOrDecays(config);
  std::string tracksOrDecaysLabel = GetTracksOrDecaysLabel(config);

  cout<<"Running "<<config<<" with... "<<dataset<<" ecm"<<endl;
  cout<<"Info:\n"<<step<<", "<<qual<<", "<<tracksOrDecays<<", "<<tracksOrDecaysLabel<<", "<<blinding<<endl;

  cout<<"\n***************************** Getting data *****************************\n"<<endl;

  TString fileName = "../Plots/MC/dMu/"+dataset+"/Fits/edmFits_"+blinding+"_"+config+".root";
  TFile *file = TFile::Open(fileName);


  cout<<"Got files:\n"<<fileName<<", "<<file<<endl;

  cout<<"\n***************************** Getting FFTs *****************************\n"<<endl;

  vector<string> stn_ = {"S0_", "S12_", "S18_", "S12S18_", "S0S12S18_"};

  if(tracksOrDecaysLabel=="Decays") stn_ = {""};

  for(auto& stn : stn_) {

    TH1D *h_FFT = (TH1D*)file->Get(("SimultaneousAnalysis/"+stn+"FFT_px_thetaY_vs_t").c_str());
    TH1D *h_FFT_res = (TH1D*)file->Get(("SimultaneousAnalysis/"+stn+"FFT_h_res_thetaY_vs_t").c_str());  
    
/*    h_FFT->Rebin(2);
    h_FFT_res->Rebin(2);*/

    OverlayFFTs(h_FFT, h_FFT_res, ";Frequency [MHz];FFT magnitude", "../Images/MC/dMu/"+dataset+"/MainPlots/"+stn+"FFT_overlay_"+config);

  }

  cout<<"\n***************************** Done *****************************"<<endl;

  file->Close();


  return;

}

void RunData(std::string config, std::string dataset, std::string blinding) { 

  cout<<"\n***************************** DATA *****************************\n"<<endl;

  cout<<"\n***************************** Processing input configuration *****************************\n"<<endl;

  int step = GetStep(config);
  std::string qual = GetQual(config);
  std::string datasetLabel = GetDataset(config);

  cout<<"Running "<<config<<" with... "<<dataset<<endl;
  cout<<"Info:\n"<<step<<", "<<qual<<endl;

  cout<<"\n***************************** Getting data *****************************\n"<<endl;

  TString fileName = "../Plots/Data/dMu/"+dataset+"/Fits/edmFits_"+blinding+"_"+config+".root";
  TFile *file = TFile::Open(fileName);
  

  cout<<"Got file:\n"<<fileName<<", "<<file<<endl;

  //cout<<"Got vector of mott functions:\n"<<mottFunctions_<<endl;

  cout<<"\n***************************** Getting FFTs correction *****************************\n"<<endl;

  vector<string> stn_ = {"S12", "S18", "S12S18"};

  for(auto& stn : stn_) {

    TH1D *h_FFT = (TH1D*)file->Get(("SimultaneousAnalysis/"+stn+"_FFT_px_thetaY_vs_t").c_str());
    TH1D *h_FFT_res = (TH1D*)file->Get(("SimultaneousAnalysis/"+stn+"_FFT_h_res_thetaY_vs_t").c_str());

    /* h_FFT->Rebin(2);
    h_FFT_res->Rebin(2); */ 

    DrawFFT(h_FFT_res, datasetLabel, stn+";Frequency [MHz];FFT magnitude / "+to_string(h_FFT_res->GetBinWidth(1))+" MHz", "../Images/Data/dMu/"+dataset+"/MainPlots/"+stn+"_FFT_res_"+config);DrawFFT(h_FFT_res, datasetLabel, stn+";Frequency [MHz];FFT magnitude / "+to_string(h_FFT_res->GetBinWidth(1))+" MHz", "../Images/Data/dMu/"+dataset+"/MainPlots/"+stn+"_FFT_res_"+config);
    DrawFFTZoom(h_FFT_res, datasetLabel, stn+";Frequency [MHz];FFT magnitude / "+to_string(h_FFT_res->GetBinWidth(1))+" MHz", "../Images/Data/dMu/"+dataset+"/MainPlots/"+stn+"_FFT_res_"+config);DrawFFT(h_FFT_res, datasetLabel, stn+";Frequency [MHz];FFT magnitude / "+to_string(h_FFT_res->GetBinWidth(1))+" MHz", "../Images/Data/dMu/"+dataset+"/MainPlots/"+stn+"_FFT_res_zoom_"+config);
    OverlayFFTs(h_FFT, h_FFT_res, stn+";Frequency [MHz];FFT magnitude / "+to_string(h_FFT->GetBinWidth(1))+" MHz", "../Images/Data/dMu/"+dataset+"/MainPlots/"+stn+"_FFT_overlay_"+config);

  }

  cout<<"\n***************************** Done *****************************"<<endl;

  file->Close();

  return;

}

int main() { 

  RunData("Run-1a_125MeV_BQ", "Run-1", "blinded");
  RunData("Run-1b_125MeV_BQ", "Run-1", "blinded");
  RunData("Run-1c_125MeV_BQ", "Run-1", "blinded");
  RunData("Run-1d_125MeV_BQ", "Run-1", "blinded");

/*  RunData("Run-1c_125MeV_BQ_weighted", "Run-1", "blinded");
  RunData("Run-1d_125MeV_BQ_weighted", "Run-1", "blinded");*/


  /////////
 // RunData("Run-1a_125MeV_BQ", "Run-1", "blinded");

  //RunData("Run-1b_125MeV_BQ", "Run-1", "blinded");
/*  RunData("Run-1b_125MeV_BQ_weighted", "Run-1", "blinded");
  RunData("Run-1c_125MeV_BQ_weighted", "Run-1", "blinded");
  RunData("Run-1d_125MeV_BQ_weighted", "Run-1", "blinded");*/


/*  RunSim("trackReco_AAR_250MeV_BQ", "5.4e-18", "unblinded");
*/
/*  RunData("Run-1a_125MeV_BQ", "Run-1", "blinded");
  RunData("Run-1b_125MeV_BQ", "Run-1", "blinded");
  RunData("Run-1c_125MeV_BQ", "Run-1", "blinded");
  RunData("Run-1d_125MeV_BQ", "Run-1", "blinded");*/
/*
  RunData("Run-1a_125MeV_BQ", "O", "unblinded");
  RunData("Run-1b_125MeV_BQ", "O", "unblinded");
  RunData("Run-1c_125MeV_BQ", "O", "unblinded");
  RunData("Run-1d_125MeV_BQ", "O", "unblinded");*/

  return 0;

}