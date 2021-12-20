#include <iostream>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

using namespace std;

// Do not forsee chainging this anytime soon
const int nTrials = 1e3;

// Global momentum cuts
const double xmin = 750;
const double xmax = 2750;

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
  } else if(config.find("acceptedDecaysControl_") != std::string::npos) { 
    return "acceptedDecaysControl";
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

string GetTracksOrDecaysLegend(string config) {


  if(config.find("allDecays_") != std::string::npos) { //} || config.find("truth_") != std::string::npos) { 
    return "all decays";
  } else if(config.find("acceptedDecays_") != std::string::npos ||  config.find("acceptedDecaysControl_") != std::string::npos) { 
    return "accepted decays";
  } else if(config.find("trackTruth_") != std::string::npos || config.find("truthControl_") != std::string::npos) { // } || config.find("trackReco_") != std::string::npos) { 
    return "truth vertices";
  } else if(config.find("trackReco_") != std::string::npos || config.find("trackRecoControl_") != std::string::npos) { 
    return "reco vertices";  
  } else { 
    cerr<<"Type is unknown";
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
  string key5 = "trackRecoControl_";
  string key6 = "acceptedDecaysControl_";

  if(config.find(key1) != std::string::npos) { 
    return "reco vertices";
  } else if(config.find(key2) != std::string::npos) { 
    return "truth vertices";
  } else if(config.find(key3) != std::string::npos) { 
    return "accepted decays";
  } else if(config.find(key4) != std::string::npos) { 
    return "all decays";
  } else if(config.find(key5) != std::string::npos) { 
    return "reco vertices";
  } else if(config.find(key4) != std::string::npos) { 
    return "accepted decays";
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

TGraphErrors *GetDeltaPrimeFit(TGraphErrors *gr_A, TF1 *dilutionFunc) {  

    TGraphErrors *gr_delta_prime = new TGraphErrors();

    int count = 0;

    for(int i = 0; i<gr_A->GetN(); i++) { 

      double x = gr_A->GetX()[i]; 
      double y = gr_A->GetY()[i]; 
      double ey = gr_A->GetEY()[i];

      if(x < xmin || x > xmax) continue;

      double d_EDM = dilutionFunc->Eval(x);
      double delta_prime = y/d_EDM;

      double delta_prime_err = ey/d_EDM;

      gr_delta_prime->SetPoint(count, x, delta_prime);
      gr_delta_prime->SetPointError(count, 0., delta_prime_err);

      count++;

    }

    TF1 *fit = new TF1("pol0", "pol0", xmin,xmax);
    
    // Now fit
    gr_delta_prime->Fit("pol0","QR");

    return gr_delta_prime;

}

void DrawDeltaPrimeFit(TGraphErrors *gr_delta_prime, string label, string title, string fname) {

  cout<<"\nDrawing"<<endl;

  TCanvas *c = new TCanvas("c","c",800,600);

  TLegend *l = new TLegend(0.11, 0.75, 0.59, 0.89); 

  l->SetBorderSize(0);

  TString delta_prime = Round(gr_delta_prime->GetFunction("pol0")->GetParameter(0), 2.);
  TString delta_prime_err = Round(gr_delta_prime->GetFunction("pol0")->GetParError(0), 1.);

  l->AddEntry(gr_delta_prime, label.c_str());
  l->AddEntry(gr_delta_prime->GetFunction("pol0"), "#LT#delta'#GT = "+delta_prime+"#pm"+delta_prime_err+" mrad");

  gr_delta_prime->SetTitle(title.c_str());
  gr_delta_prime->GetXaxis()->SetTitleSize(.04);
  gr_delta_prime->GetYaxis()->SetTitleSize(.04);
  gr_delta_prime->GetXaxis()->SetTitleOffset(1.1);
  gr_delta_prime->GetYaxis()->SetTitleOffset(1.1);
  gr_delta_prime->GetXaxis()->CenterTitle(true);
  gr_delta_prime->GetYaxis()->CenterTitle(true);
  gr_delta_prime->GetYaxis()->SetMaxDigits(4);

  // Set y-range
/*  double scale = 2.75;*/
  double ymin = gr_delta_prime->GetFunction("pol0")->GetParameter(0) - 1.5;//  = gr_delta_prime->GetY()[0] - scale*gr_delta_prime->GetEY()[0];
  double ymax = gr_delta_prime->GetFunction("pol0")->GetParameter(0) + 1.5;//  = gr_delta_prime->GetY()[0] + scale*gr_delta_prime->GetEY()[0];
/*
  for(int i = 1; i<gr_delta_prime->GetN(); i++) {

    double lo = gr_delta_prime->GetY()[i] - gr_delta_prime->GetEY()[i];
    double hi = gr_delta_prime->GetY()[i] + gr_delta_prime->GetEY()[i];

    if(ymax < hi) ymax = hi;
    if(ymin > lo) ymin = lo;

  }*/

  gr_delta_prime->GetYaxis()->SetRangeUser(ymin,ymax);

  gr_delta_prime->SetMarkerStyle(20);

  gr_delta_prime->Draw("AP");

  l->Draw("same");

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;
}

vector<TF1*> GetMottFunctions(TFile *dilution_file, string stn, int step = 250, string config = "trackReco_WORLD_250MeV_BQ") { // tracksOrDecaysLabel) {

  string tracksOrDecaysLabel = GetTracksOrDecaysLabel(config);
  string tracksOrDecays = GetTracksOrDecays(config);
  string qual = GetQual(config);

  vector<TF1*> mottFunctions_;

  for(int i = 0; i<nTrials; i++) { 

    TF1 *mottFunc = (TF1*)dilution_file->Get(("DilutionFits/"+qual+"/"+tracksOrDecaysLabel+"/"+to_string(step)+"MeV/d_vs_p/"+stn+tracksOrDecays+"Trials/"+to_string(i)).c_str());
    mottFunctions_.push_back(mottFunc);

  }

  return mottFunctions_;

}

vector<TGraphErrors*> GetDeltaPrimeFits(vector<TF1*> mottFunctions_, TGraphErrors *gr_A) { 

  vector<TGraphErrors*> deltaPrimeFits_;

  for(auto& mottFunc : mottFunctions_) {

    TGraphErrors *gr_delta_prime = GetDeltaPrimeFit(gr_A, mottFunc); // , xmin, xmax);//new TGraphErrors();

    deltaPrimeFits_.push_back(gr_delta_prime);

  }

  return deltaPrimeFits_;

}

void DrawDeltaPrimeFits(vector<TGraphErrors*> graphs_, std::string title, std::string fname) { 

  TCanvas *c = new TCanvas("c","c",800,600);

  graphs_.at(0)->SetTitle(title.c_str());
  graphs_.at(0)->GetXaxis()->SetTitleSize(.04);
  graphs_.at(0)->GetYaxis()->SetTitleSize(.04);
  graphs_.at(0)->GetXaxis()->SetTitleOffset(1.1);
  graphs_.at(0)->GetYaxis()->SetTitleOffset(1.1);
  graphs_.at(0)->GetXaxis()->CenterTitle(true);
  graphs_.at(0)->GetYaxis()->CenterTitle(true);
  graphs_.at(0)->GetYaxis()->SetMaxDigits(4);
  //graphs_.at(0)->GetYaxis()->SetRangeUser(ymin,ymax);

  for(int i = 0; i < graphs_.size(); i++) {

    TF1 *fit = graphs_.at(i)->GetFunction("pol0");

    graphs_.at(i)->SetMarkerStyle(20);

    double colour = colour = i*0.1;
    graphs_.at(i)->SetMarkerColor(colour);
    graphs_.at(i)->SetLineColor(colour);
    fit->SetLineColor(colour);

    if(i==0) graphs_.at(i)->Draw("AP");
    else graphs_.at(i)->Draw("P SAME");
    fit->Draw("same");
  }

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}

TH1D *GetDeltaPrimeHist(vector<TGraphErrors*> deltaPrimeFits_, double h_min, double h_max, double binWidth) { 

  int nBins = (h_max-h_min)/binWidth;

  TH1D *h = new TH1D("h", "h", nBins, h_min, h_max);

  for(auto& gr : deltaPrimeFits_) { 

    TF1 *fit = gr->GetFunction("pol0");

    double delta_prime = fit->GetParameter(0);

    h->Fill(delta_prime);

  }

  return h;

}

void DrawDeltaPrimeHist(TH1D *hist, std::string title, std::string fname) {

  TCanvas *c = new TCanvas("c","c",800,600);

  hist->SetTitle(title.c_str());

  hist->SetStats(0);
      
  hist->GetXaxis()->SetTitleSize(.04);
  hist->GetYaxis()->SetTitleSize(.04);
  hist->GetXaxis()->SetTitleOffset(1.1);
  hist->GetYaxis()->SetTitleOffset(1.1);
  hist->GetXaxis()->CenterTitle(1);
  hist->GetYaxis()->CenterTitle(1);
  hist->GetYaxis()->SetMaxDigits(4);
  hist->SetLineWidth(3);
  hist->SetLineColor(1);

  //TPaveText *names = new TPaveText(0.56,0.75,0.65,0.89,"NDC");
  TPaveText *names = new TPaveText(0.11,0.75,0.20,0.89,"NDC");

  names->SetTextAlign(13);
  names->AddText("#LT#delta'#GT [mrad]"); 
  names->AddText("#sigma_{#delta'} [mrad]"); 

  TPaveText *values = new TPaveText(0.30,0.75,0.45,0.89,"NDC");
  values->SetTextAlign(33);
  values->AddText(Round(hist->GetMean(),4)+"#pm"+Round(hist->GetMeanError(),1)); 
  values->AddText(Round(hist->GetRMS(),2)+"#pm"+Round(hist->GetRMSError(),1)); 

  names->SetTextSize(24);
  names->SetTextFont(44);
  names->SetFillColor(0);
  values->SetFillColor(0);
  values->SetTextFont(44);
  values->SetTextSize(24);

  hist->Draw("HIST");
  names->Draw("SAME");
  values->Draw("SAME");
  
  c->SaveAs((fname+".C").c_str());
  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());

  delete c;

  return;
}

double GetLimit(double delta_prime) { 

  // CODATA 2018
  double pi = 3.14159265358979323846;
  double h = 6.62607015e-34; // Js
  double c = 299792458; // m/s
  double e = 1.602176634e-19; // C

  // Conversions
  double Mev2J = e*1e6;
  double MeV2kg = Mev2J / pow(c,2);
  double m2cm = 1e-2;
  double mrad2rad = 1e-3;

  double m_mu = M_MU * MeV2kg;
  double beta = sqrt(1-(1/pow(GMAGIC,2)));
  double hbar = h/(2*pi);

  // Calculate dMu in SI units
  double dMu = (e*hbar*A_MU*GMAGIC)/(2*m_mu*c*beta) * atan(delta_prime*mrad2rad); // Cm

  // Convert to ecm
  dMu = dMu / (m2cm * e);

  return dMu;

}

void RunSim(string config, string dataset, string blinding) { 

  cout<<"\n***************************** SIM *****************************\n"<<endl;

	cout<<"\n***************************** Processing input configuration *****************************\n"<<endl;

	int step = GetStep(config);
	std::string qual = GetQual(config);
	std::string tracksOrDecays = GetTracksOrDecays(config);
	std::string tracksOrDecaysLabel = GetTracksOrDecaysLabel(config);
  std::string tracksOrDecaysLegend = GetTracksOrDecaysLegend(config);

	cout<<"Running "<<config<<" with... "<<dataset<<" ecm"<<endl;
	cout<<"Info:\n"<<step<<", "<<qual<<", "<<tracksOrDecays<<", "<<tracksOrDecaysLabel<<", "<<blinding<<endl;

	cout<<"\n***************************** Creating output file *****************************\n"<<endl;

	TString outputFileName = "../Plots/MC/dMu/"+dataset+"/Fits/edmResults_"+blinding+"_"+config+".root";
	TFile *outputFile = new TFile(outputFileName, "RECREATE");

	cout<<"\n***************************** Getting data *****************************\n"<<endl;

	TString A_fileName = "../Plots/MC/dMu/"+dataset+"/Fits/edmFits_"+blinding+"_"+config+".root";
	TString dilution_fileName = "../Plots/MC/dMu/Dilution/dilutionCurves.root";

	TFile *A_file = TFile::Open(A_fileName);
	TFile *dilution_file  = TFile::Open(dilution_fileName);

  cout<<"Got files:\n"<<A_fileName<<", "<<A_file<<"\n"<<dilution_fileName<<", "<<dilution_file<<endl;

  cout<<"\n***************************** Performing dilution correction *****************************\n"<<endl;

  vector<string> stn_ = {"S0_", "S12_", "S18_", "S12S18_", "S0S12S18_"};
  if(tracksOrDecaysLabel=="Decays") stn_ = {""};

  vector<string> fitType_ = {"EDM", "g2"};

  vector<string> results_;

  for(auto& fitType : fitType_) {

    outputFile->mkdir((fitType).c_str()); 
    outputFile->cd((fitType).c_str()); 

    std::string subscript = "";

    if(fitType == "EDM") {
      subscript += fitType;
      results_.push_back(", delta_prime, , dMu [ecm], ,");
      results_.push_back("Station, value, error, value, error");
    } else if(fitType == "g2") {
      subscript += "g#minus2";
      results_.push_back(", delta_prime, , Bz/By [ppm], ,");
      results_.push_back("Station, value, error, value, error");
    }

    // Apply correction
    for(auto& stn : stn_) {

      // Get dilution curve
      TGraphErrors *d_gr = (TGraphErrors*)dilution_file->Get(("DilutionFits/"+qual+"/"+tracksOrDecaysLabel+"/"+to_string(step)+"MeV/d_vs_p/"+stn+tracksOrDecays).c_str());
      // TGraphErrors *d_gr = (TGraphErrors*)dilution_file->Get("DilutionFits/BQ/Tracks/250MeV/d_vs_p/trackReco");
      TF1 *dilutionFunc = (TF1*)d_gr->GetFunction("ParabolaFunc");

      // TFile *dilution_file, string stn, int step, string config)
      vector<TF1*> mottFunctions_ = GetMottFunctions(dilution_file, stn, step, config);

      TString A_grName = "MomentumBinnedAnalysis/ParameterScans/"+stn+"A"+fitType+"_vs_p_thetaY";

      TGraphErrors *A_gr = (TGraphErrors*)A_file->Get(A_grName);
      TGraphErrors *gr_delta_prime = GetDeltaPrimeFit(A_gr, dilutionFunc);

      TF1 *f_delta_prime = (TF1*)gr_delta_prime->GetFunction("pol0");

      //  cout<<"Sim: "+tracksOrDecaysLegend<<endl;
      DrawDeltaPrimeFit(gr_delta_prime, "Sim: "+tracksOrDecaysLegend, ";Decay vertex momentum [MeV];#delta'_{"+subscript+"} [mrad] / "+to_string(step)+" MeV;", "../Images/MC/dMu/"+dataset+"/Results/"+stn+fitType+"_delta_prime_vs_p_"+config);

      gr_delta_prime->SetName((stn+"delta_prime_vs_p").c_str());
      gr_delta_prime->Write();

      vector<TGraphErrors*> deltaPrimeFits_ = GetDeltaPrimeFits(mottFunctions_, A_gr);

      // Slows things down quite substantially 
      // DrawDeltaPrimeFits(deltaPrimeFits_, ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+";#delta'{"+subscript+"} [mrad]", "../Images/MC/dMu/"+dataset+"/"+stn+fitType+"_delta_prime_vs_p_"+to_string(nTrials));

      // Find histogram range
      double lastVal; double h_min; double h_max; 
      for(auto& deltaPrimeFit : deltaPrimeFits_) { 
        double val = deltaPrimeFit->GetFunction("pol0")->GetParameter(0);
        if(val < lastVal) h_min = val; 
        if(val > lastVal) h_max = val;
        lastVal = val;
      }

      h_min = h_min-0.5; h_max = h_max+0.5;
      double binWidth = 0.02;

      // Fill histogram
      TH1D *h_delta_prime  = GetDeltaPrimeHist(deltaPrimeFits_, h_min, h_max, binWidth);

      // Draw and write histogram
      DrawDeltaPrimeHist(h_delta_prime, ";#delta'_{"+subscript+"} [mrad];Trials", "../Images/MC/dMu/"+dataset+"/Results/"+stn+fitType+"_delta_prime_hist_"+to_string(nTrials)+"_"+to_string(int(xmin))+"-"+to_string(int(xmax))+"MeV_"+config);
      h_delta_prime->SetName((stn+"h_delta_prime").c_str());
      h_delta_prime->Write();

      // Fill results
      double delta_prime = f_delta_prime->GetParameter(0);
      double err_delta_prime = f_delta_prime->GetParError(0);

      double result = delta_prime;
      double error = sqrt(pow(err_delta_prime,2) + pow(h_delta_prime->GetRMS(),2));

      if(fitType == "EDM") {
        // Deal with converting small double into strings
        std::ostringstream oss_result; oss_result << GetLimit(result);
        std::ostringstream oss_error; oss_error << GetLimit(error);
        std::string dMu = oss_result.str(); std::string err_dMu = oss_error.str();
        results_.push_back(stn+", "+to_string(result)+", "+to_string(error)+", "+dMu+", "+err_dMu);
      } else if(fitType == "g2") {
        results_.push_back(stn+", "+to_string(result)+", "+to_string(error)+", "+to_string(result*1e3)+", "+to_string(error*1e3));//stn_+", "+to_string(result*1e3)+", "+to_string(error*1e3));
      }

    }

  }

	cout<<"\n***************************** Writing output *****************************\n"<<endl;

	cout<<"Written results to output file "<<outputFileName<<", "<<outputFile<<endl;

	cout<<"\n***************************** Printing results *****************************\n"<<endl;

  for(auto& result : results_) cout<<result<<endl;

  cout<<"\n***************************** Done *****************************"<<endl;

  A_file->Close();
  dilution_file->Close();
  outputFile->Close();

	return;

}

void RunData(std::string config, std::string dataset, std::string blinding, bool correctDilution) { 

  cout<<"\n***************************** DATA *****************************\n"<<endl;

  cout<<"\n***************************** Processing input configuration *****************************\n"<<endl;

  int step = GetStep(config);
  std::string qual = GetQual(config);
  std::string datasetLabel = GetDataset(config);
  std::string dilCorrStr = "";
  if(!correctDilution) dilCorrStr += "_noCorr";

  cout<<"Running "<<config<<" with... "<<dataset<<endl;
  cout<<"Info:\n"<<step<<", "<<qual<<endl;

  cout<<"\n***************************** Creating output file *****************************\n"<<endl;

  TString outputFileName = "../Plots/Data/dMu/"+dataset+"/Fits/edmResults_"+blinding+"_"+to_string(int(xmin))+"-"+to_string(int(xmax))+"MeV_"+config+dilCorrStr+".root";
  TFile *outputFile = new TFile(outputFileName, "RECREATE");

  cout<<"\n***************************** Getting data *****************************\n"<<endl;

  TString A_fileName = "../Plots/Data/dMu/"+dataset+"/Fits/edmFits_"+blinding+"_"+config+".root";
  TString dilution_fileName = "../Plots/MC/dMu/Dilution/dilutionCurves.root";

  TFile *A_file = TFile::Open(A_fileName);
  TFile *dilution_file  = TFile::Open(dilution_fileName);

  cout<<"Got files:\n"<<A_fileName<<", "<<A_file<<"\n"<<dilution_fileName<<", "<<dilution_file<<endl;

  //cout<<"Got vector of mott functions:\n"<<mottFunctions_<<endl;

  cout<<"\n***************************** Performing dilution correction *****************************\n"<<endl;

  vector<string> stn_ = {"S12", "S18", "S12S18"};
  vector<string> fitType_ = {"EDM", "g2"};

  vector<string> results_;

  for(auto& fitType : fitType_) {

    outputFile->mkdir((fitType).c_str()); 
    outputFile->cd((fitType).c_str()); 

    std::string subscript = "";
    std::string blind = ""; 

    if(dataset!="O") { 
      if(fitType == "EDM") {
        subscript += fitType;
        results_.push_back(", delta_prime, , dMu [ecm], ,");
        results_.push_back("Station, value, fit_error, dil_error, tot_error, value, fit_error, dil_error, tot_error");
        blind += "BLIND";
      } else if(fitType == "g2") {
        subscript += "g#minus2";
        results_.push_back(", delta_prime, , Bz/By [ppm], ,");
        results_.push_back("Station, value, error, value, error");
        blind += "";
      }
    } else if(dataset=="O") { 
      if(fitType == "EDM") {
        subscript += "s";
        results_.push_back(", delta_prime, , Omega_c [ecm], ,");
        results_.push_back("Station, value, error, value, error");
        blind += "";
      } else if(fitType == "g2") {
        subscript += "c";
        results_.push_back(", delta_prime, , Omega_s [ppm], ,");
        results_.push_back("Station, value, error, value, error");
        blind += "";
      }

    }

    // Result tree for each fit type
    TTree *resultTree = new TTree("resultTree", "resultTree");

    // Apply correction
    for(auto& stn : stn_) {

      // Get dilution curve
      TGraphErrors *d_gr = (TGraphErrors*)dilution_file->Get(("DilutionFits/BQ/Tracks/250MeV/d_vs_p/"+stn+"_trackReco").c_str());
      TF1 *dilutionFunc = (TF1*)d_gr->GetFunction("ParabolaFunc");

      if(!correctDilution) {
        dilutionFunc = new TF1("", "pol0", xmin, xmax);
        dilutionFunc->SetParameter(0, 1);
      }

      // Get mott functions
      vector<TF1*> mottFunctions_; 
      if(correctDilution) mottFunctions_ = GetMottFunctions(dilution_file, stn+"_");


      // Get mott functions
      TString A_grName = "MomentumBinnedAnalysis/ParameterScans/"+stn+"_A"+fitType+"_vs_p";
      TGraphErrors *A_gr = (TGraphErrors*)A_file->Get(A_grName);
      TGraphErrors *gr_delta_prime = GetDeltaPrimeFit(A_gr, dilutionFunc);

      TF1 *f_delta_prime = (TF1*)gr_delta_prime->GetFunction("pol0");

      // DrawDeltaPrimeFit(gr_delta_prime, "Data: "+dataset, ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+";#delta'_{"+subscript+"}^{BLIND} [mrad];", "../Images/Data/dMu/"+dataset+"/Results/"+stn+fitType+"_delta_prime_vs_p");
      //DrawDeltaPrimeFit(gr_delta_prime, "Data: "+dataset, ";Decay vertex momentum [MeV];#delta'_{"+subscript+"}^{BLIND} [mrad] / 125 MeV;", "../Images/Data/dMu/"+dataset+"/Results/"+stn+fitType+"_delta_prime_vs_p");

      DrawDeltaPrimeFit(gr_delta_prime, "Data: "+datasetLabel, stn+";Decay vertex momentum [MeV];#delta'_{"+subscript+"}^{"+blind+"} [mrad] / "+to_string(step)+" MeV;", "../Images/Data/dMu/"+dataset+"/Results/"+stn+"_"+fitType+"_delta_prime_vs_p_"+to_string(int(xmin))+"-"+to_string(int(xmax))+"MeV_"+config+dilCorrStr);

      gr_delta_prime->SetName((stn+"_delta_prime_vs_p").c_str());
      gr_delta_prime->Write();

      cout<<"a"<<endl;
      vector<TGraphErrors*> deltaPrimeFits_ = GetDeltaPrimeFits(mottFunctions_, A_gr);
      cout<<"b"<<endl;
      // Slows things down quite substantially 
      // DrawDeltaPrimeFits(deltaPrimeFits_, ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+";#delta'{"+subscript+"} [mrad]", "../Images/MC/dMu/"+dataset+"/"+stn+fitType+"_delta_prime_vs_p_"+to_string(nTrials));

      // Find histogram range
      double lastVal; double h_min; double h_max; 
      for(auto& deltaPrimeFit : deltaPrimeFits_) { 
        double val = deltaPrimeFit->GetFunction("pol0")->GetParameter(0);
        if(val < lastVal) h_min = val; 
        if(val > lastVal) h_max = val;
        lastVal = val;
      }

      h_min = h_min-0.2; h_max = h_max+0.2;
      double binWidth = 0.02;
      std::ostringstream oss_binWidth; oss_binWidth << binWidth;

      // Fill histogram
      
      TH1D *h_delta_prime  = GetDeltaPrimeHist(deltaPrimeFits_, h_min, h_max, binWidth);
      cout<<"filled"<<endl;
      // Draw and write histogram
      // DrawDeltaPrimeHist(h_delta_prime, ";#delta'_{"+subscript+"}^{BLIND} [mrad] / "+to_string(step/2)+";Trials", "../Images/Data/dMu/"+dataset+"/Results/"+stn+fitType+"_delta_prime_hist_"+to_string(nTrials));
      if(correctDilution) DrawDeltaPrimeHist(h_delta_prime, stn+";#delta'_{"+subscript+"}^{"+blind+"} [mrad];Trials  / "+oss_binWidth.str()+" [mrad]", "../Images/Data/dMu/"+dataset+"/Results/"+stn+"_"+fitType+"_delta_prime_hist_"+to_string(nTrials)+"_"+to_string(int(xmin))+"-"+to_string(int(xmax))+"MeV_"+config+dilCorrStr);
      h_delta_prime->SetName((stn+"_h_delta_prime").c_str());
      h_delta_prime->Write();

      // Fill results
      double delta_prime = f_delta_prime->GetParameter(0);
      double result = delta_prime;
      double err_fit = f_delta_prime->GetParError(0);
      double err_dil = h_delta_prime->GetRMS();
      double err_tot = sqrt(pow(err_fit,2) + pow(err_dil,2));

      if(fitType == "EDM") {

        // Deal with converting small double into strings
        double result2Tree = GetLimit(result); double error2Tree = GetLimit(err_tot);

        // Write into TBranch
        resultTree->Branch((stn+"_dMu").c_str(), &result2Tree);
        resultTree->Branch((stn+"_dMu_err").c_str(), &error2Tree);

        std::ostringstream oss_result; oss_result << GetLimit(result);
        std::ostringstream oss_err_fit; oss_err_fit << GetLimit(err_fit);
        std::ostringstream oss_err_dil; oss_err_dil << GetLimit(err_dil);
        std::ostringstream oss_err_tot; oss_err_tot << GetLimit(err_tot);
        std::string dMu = oss_result.str();
        std::string err_dMu_fit = oss_err_fit.str();
        std::string err_dMu_dil = oss_err_dil.str();
        std::string err_dMu_tot = oss_err_tot.str();

        results_.push_back(stn+", "+to_string(delta_prime)+", "+to_string(err_fit)+", "+to_string(err_dil)+", "+to_string(err_tot)+", "+dMu+", "+err_dMu_fit+", "+err_dMu_dil+", "+err_dMu_tot);

      } else if(fitType == "g2") {

        double result2Tree = 1e3*result; double error2Tree = 1e3*err_tot;

        // TODO: This doesn't work properly for individual stations. May need a simplified method.
        // Write into TBranch
        resultTree->Branch((stn+"_Bz").c_str(), &result2Tree);
        resultTree->Branch((stn+"_Bz_err").c_str(), &error2Tree);

        results_.push_back(stn+", "+to_string(delta_prime)+", "+to_string(err_fit)+", "+to_string(err_dil)+", "+to_string(err_tot)+", "+to_string(delta_prime*1e3)+", "+to_string(err_fit*1e3)+", "+to_string(err_dil*1e3)+", "+to_string(err_tot*1e3));
      }

      resultTree->Fill();


    } // Station loop

    //resultTree->Fill(); 
    resultTree->Write(); 

  } 


  cout<<"\n***************************** Writing output *****************************\n"<<endl;

  cout<<"Written results to output file "<<outputFileName<<", "<<outputFile<<endl;

  cout<<"\n***************************** Printing results *****************************\n"<<endl;

  for(auto& result : results_) cout<<result<<endl;

  cout<<"\n***************************** Done *****************************"<<endl;

  A_file->Close();
  dilution_file->Close();
  outputFile->Close();

  return;

}

int main() { 

  // Unblinded sim samples
/*
  RunSim("allDecays_WORLD_250MeV_AQ", "1.8e-18", "unblinded");
  RunSim("allDecays_WORLD_250MeV_AQ", "5.4e-18", "unblinded");*/
  // RunSim("trackReco_WORLD_250MeV_BQ", "5.4e-18", "unblinded");

/*  

  RunSim("acceptedDecays_WORLD_250MeV_AQ", "5.4e-18", "unblinded");
  RunSim("allDecays_WORLD_250MeV_AQ", "5.4e-18", "unblinded");
  RunSim("acceptedDecays_WORLD_250MeV_AQ", "5.4e-18", "unblinded");
  RunSim("acceptedDecaysControl_WORLD_250MeV_AQ", "5.4e-18", "unblinded");
  RunSim("trackRecoControl_WORLD_250MeV_BQ", "5.4e-18", "unblinded");
  RunSim("trackRecoControl_WORLD_250MeV_CQ", "5.4e-18", "unblinded");
  RunSim("trackTruth_WORLD_250MeV_AQ", "5.4e-18", "unblinded");
  RunSim("trackReco_WORLD_250MeV_AQ", "5.4e-18", "unblinded");
  RunSim("trackTruth_WORLD_250MeV_BQ", "5.4e-18", "unblinded");
	
*/
  // Data
/*  RunData("Run-1a_125MeV_BQ", "Run-1", "blinded", true);
  RunData("Run-1b_125MeV_BQ", "Run-1", "blinded", true);
  RunData("Run-1c_125MeV_BQ", "Run-1", "blinded", true);
  RunData("Run-1d_125MeV_BQ", "Run-1", "blinded", true);*/
  RunData("Run-1c_125MeV_BQ", "Run-1", "blinded", true);


/*  RunData("Run-1a_125MeV_BQ", "Run-1", "blinded", true);
  RunData("Run-1b_125MeV_BQ", "Run-1", "blinded", true);
  RunData("Run-1c_125MeV_BQ", "Run-1", "blinded", true);
  RunData("Run-1d_125MeV_BQ", "Run-1", "blinded", true);*/
///////////////////////////////////////////////////////////////
  //RunData("Run-1a_125MeV_BQ", "Run-1", "blinded", true);

/*  RunData("Run-1a_125MeV_BQ", "Run-1", "blinded", false);
  RunData("Run-1b_125MeV_BQ", "Run-1", "blinded", false);
  RunData("Run-1c_125MeV_BQ", "Run-1", "blinded", false);
  RunData("Run-1d_125MeV_BQ", "Run-1", "blinded", false);*/

/*  RunData("Run-1a_125MeV_BQ", "O", "unblinded", true);
  RunData("Run-1b_125MeV_BQ", "O", "unblinded", true);
  RunData("Run-1c_125MeV_BQ", "O", "unblinded", true);
  RunData("Run-1d_125MeV_BQ", "O", "unblinded", true);*/
/*
  RunData("Run-1a_125MeV_BQ", "O", "unblinded", false);
  RunData("Run-1b_125MeV_BQ", "O", "unblinded", false);
  RunData("Run-1c_125MeV_BQ", "O", "unblinded", false);
  RunData("Run-1d_125MeV_BQ", "O", "unblinded", false);*/

	return 0;

}