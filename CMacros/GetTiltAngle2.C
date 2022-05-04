#include <iostream>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

using namespace std;

// Do not forsee chainging this anytime soon
const int nTrials = 1e3;

// Global momentum cuts
const double xmin = 1000;//750;//50;
const double xmax = 2500;//2500;

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

TGraphErrors *GetDeltaPrimeFit(TGraphErrors *gr_A, TF1 *dilutionFunc, TH1D *weightingHist = 0, string plusMinus = "") {  // TH1D *weightingHist = 0 for sim

    TGraphErrors *gr_delta_prime = new TGraphErrors();

    int count = 0;

    for(int i = 0; i<gr_A->GetN(); i++) { 

      double x = gr_A->GetX()[i]; 
      double y = gr_A->GetY()[i]; 
      double ey = gr_A->GetEY()[i];

      if(x < xmin || x > xmax) continue;

      double d_EDM = dilutionFunc->Eval(x);

      // Acceptance weighting
      double weighting = 1.0; 
      double weighting_err = 0.0;

      if(weightingHist!=0) {
        weighting = weightingHist->GetBinContent(weightingHist->FindBin(x));
        weighting_err = weightingHist->GetBinError(weightingHist->FindBin(x));
      }

      if(plusMinus=="plus") weighting = weighting + weighting_err;
      if(plusMinus=="minus") weighting = weighting - weighting_err;

      d_EDM = d_EDM*weighting; 

      double delta_prime = y/d_EDM;

      double delta_prime_err = ey/d_EDM;

      //double delta_prime_err = delta_prime * sqrt( pow(ey/y,2) + pow(weighting_err/weighting,2) );

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
  l->AddEntry(gr_delta_prime->GetFunction("pol0"), "#LT#delta#GT = "+delta_prime+"#pm"+delta_prime_err+" mrad");

  gr_delta_prime->SetTitle(title.c_str());
  gr_delta_prime->GetXaxis()->SetTitleSize(.04);
  gr_delta_prime->GetYaxis()->SetTitleSize(.04);
  gr_delta_prime->GetXaxis()->SetTitleOffset(1.1);
  gr_delta_prime->GetYaxis()->SetTitleOffset(1.1);
  gr_delta_prime->GetXaxis()->CenterTitle(true);
  gr_delta_prime->GetYaxis()->CenterTitle(true);
  gr_delta_prime->GetYaxis()->SetMaxDigits(4);


  // Set y-range

  double ymin = 1e6;
  double ymax = -1e6;

  for(int i(0); i<gr_delta_prime->GetN(); i++) {

    double y = gr_delta_prime->GetY()[i];
    double ey = gr_delta_prime->GetEY()[i];

    if(ymin > y-ey) ymin = y-ey;
    if(ymax < y+ey) ymax = y+ey;


  }


  /*  double scale = 2.75;*/
  //double ymin = gr_delta_prime->GetFunction("pol0")->GetParameter(0) - 0.75;//  = gr_delta_prime->GetY()[0] - scale*gr_delta_prime->GetEY()[0];
  //double ymax = gr_delta_prime->GetFunction("pol0")->GetParameter(0) + 0.75;//  = gr_delta_prime->GetY()[0] + scale*gr_delta_prime->GetEY()[0];
  
  /*
  for(int i = 1; i<gr_delta_prime->GetN(); i++) {

    double lo = gr_delta_prime->GetY()[i] - gr_delta_prime->GetEY()[i];
    double hi = gr_delta_prime->GetY()[i] + gr_delta_prime->GetEY()[i];

    if(ymax < hi) ymax = hi;
    if(ymin > lo) ymin = lo;

  }*/

  gr_delta_prime->GetYaxis()->SetRangeUser(ymin-0.2,ymax+.25);
  //gr_delta_prime->GetYaxis()->SetRangeUser(ymin-0.02,ymax+.025);

  gr_delta_prime->SetMarkerStyle(20);

  gr_delta_prime->Draw("AP");

  l->Draw("same");

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

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

std::tuple<double, double> GetRadialField(std::string dataset) {

  /*1a & $22\pm7$ \\
  1b & $23\pm8$ \\
  1c & $30\pm8$ \\
  1d & $34\pm9$ \\ 
  */
  double Br = 0;
  double eBr = 0; 
  
  if(dataset=="Run-1a") {
    Br = 20.3338 * 1e-3; // mrad 
    eBr = 6.67124 * 1e-3; // mrad
  } else if(dataset=="Run-1b") {
    Br = 21.0042 * 1e-3; // mrad
    eBr = 7.53705 * 1e-3; // mrad
  } else if(dataset=="Run-1c") {
    Br = 27.3757 * 1e-3; // mrad 
    eBr = 7.5812 * 1e-3; // mrad
  } else if(dataset=="Run-1d") {
    Br = 31.4235 * 1e-3; // mrad 
    eBr = 7.86634 * 1e-3; 
  } else cerr<<"GetRadialField: dataset not found";
  
  // Do we actually subtract the radial field?
  return make_tuple(Br, eBr);

}

vector<TH1D*> GetAcceptanceTrialHists(TFile *fin, string stn) {

  // A bit unfortunate
  if(stn=="S12_") stn="S12";
  else if(stn=="S18_") stn="S18";
  else if(stn=="S12S18_") stn="S12S18";

  vector<TH1D*> acceptanceTrialHists_;

  for(int i_trial(0); i_trial<nTrials; i_trial++) {

    TString trialHistName = "trials/"+stn+"/h_ratio_trial_"+to_string(i_trial);
    //cout<<trialHistName<<endl;
    TH1D *trialHist = (TH1D*)fin->Get(trialHistName);// ("trials/"+stn+"/h_ratio_trial_"+to_string(i_trial)).c_str());
    //cout<<trialHist<<endl;
    acceptanceTrialHists_.push_back(trialHist);

  }

  return acceptanceTrialHists_;

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
  names->AddText("#LT#delta#GT [mrad]"); 
  names->AddText("#sigma_{#delta} [mrad]"); 

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


TH1D *GetDeltaPrimeHist(vector<double> delta_, double h_min, double h_max, double binWidth) { 

  int nBins = (h_max-h_min)/binWidth;

  TH1D *h = new TH1D("h", "h", nBins, h_min, h_max);

  for(auto& delta : delta_) h->Fill(delta);

  return h;

}

void RunSim(string config, string dataset, string blinding, bool correctAcceptance = false) { 

  cout<<"\n***************************** SIM *****************************\n"<<endl;

	cout<<"\n***************************** Processing input configuration *****************************\n"<<endl;

	int step = GetStep(config);
	std::string qual = GetQual(config);
	std::string tracksOrDecays = GetTracksOrDecays(config);
	std::string tracksOrDecaysLabel = GetTracksOrDecaysLabel(config);
  std::string tracksOrDecaysLegend = GetTracksOrDecaysLegend(config);

	cout<<"Running "<<config<<" with... "<<dataset<<" ecm"<<endl;
	cout<<"Info:\n"<<step<<", "<<qual<<", "<<tracksOrDecays<<", "<<tracksOrDecaysLabel<<", "<<blinding<<endl;

  cout<<"\n***************************** Getting data *****************************\n"<<endl;

  TString dilution_fileName = "../Plots/MC/dMu/Dilution/dilutionCurves.exact.root";
  TFile *dilution_file  = TFile::Open(dilution_fileName);

  TString acceptance_fileName = "../Plots/MC/Acceptance/Plots/acceptanceWeightingVsMomentum_250MeV.root"; // _dataAccCorr_"+datasetLabel+".root";
  TFile *acceptance_file = TFile::Open(acceptance_fileName);

  TString A_fileName = "../Plots/MC/dMu/"+dataset+"/Fits/edmFits_"+blinding+"_"+config+".root";
  TFile *A_file = TFile::Open(A_fileName);

  cout<<"Got files:\n"<<A_fileName<<", "<<A_file<<"\n"<<dilution_fileName<<", "<<dilution_file<<"\n"<<acceptance_fileName<<", "<<acceptance_file<<endl;

	cout<<"\n***************************** Creating output file *****************************\n"<<endl;

	TString outputFileName = "../Plots/MC/dMu/"+dataset+"/Fits/edmResults_"+blinding+"_"+config+".root";
	TFile *outputFile = new TFile(outputFileName, "RECREATE");

  cout<<"\n***************************** Performing dilution correction *****************************\n"<<endl;

  // Get dilution curve
  TGraphErrors *d_gr = (TGraphErrors*)dilution_file->Get("DilutionFits/AQ/Decays/250MeV/d_vs_p/allDecays");
  TF1 *dilutionFunc = (TF1*)d_gr->GetFunction("DilutionFunc");

  vector<string> stn_ = {"S12_", "S18_", "S12S18_"};//"S0_", "S12_", "S18_", "S12S18_", "S0S12S18_"};

  if(tracksOrDecaysLabel=="Decays") stn_ = {""};

  vector<string> fitType_ = {"EDM"};//, "g2"};

  vector<string> results_;

  for(auto& fitType : fitType_) {

    outputFile->mkdir((fitType).c_str()); 
    outputFile->cd((fitType).c_str()); 

    std::string subscript = "";

    if(fitType == "EDM") {
      subscript += fitType;
      results_.push_back(", delta_prime, , dMu [ecm], ,");
      results_.push_back("Station, value, fit_err, acc_err, tot_err, fit_err, acc_err, tot_err");
    } else if(fitType == "g2") {
      subscript += "g#minus2";
      results_.push_back(", delta_prime, , Bz/By [ppm], ,");
      results_.push_back("Station, value, error, value, error");
    }

    // Apply correction
    for(auto& stn : stn_) {

      TString acceptanceHistName = "hists/"+stn+"ratio_main";
      //if(stn != "S12" || stn != "S18") acceptanceHistName = "hists/S12S18_ratio_main";
 
      TH1D *acceptanceHist = (TH1D*)acceptance_file->Get(acceptanceHistName);//("hists/"+stn+"_ratio").c_str()); 
      if(!correctAcceptance) acceptanceHist = 0;

      cout<<"\nacceptanceHist = "<<acceptanceHistName<<", "<<acceptanceHist<<endl;

      TString A_grName = "MomentumBinnedAnalysis/ParameterScans/"+stn+"A"+fitType+"_vs_p_thetaY";

      TGraphErrors *A_gr = (TGraphErrors*)A_file->Get(A_grName);
      TGraphErrors *gr_delta_prime = GetDeltaPrimeFit(A_gr, dilutionFunc, acceptanceHist);

      TF1 *f_delta_prime = (TF1*)gr_delta_prime->GetFunction("pol0");

      //  cout<<"Sim: "+tracksOrDecaysLegend<<endl;
      DrawDeltaPrimeFit(gr_delta_prime, "Sim: "+tracksOrDecaysLegend, ";Decay vertex momentum [MeV];#delta [mrad] / "+to_string(step)+" MeV;", "../Images/MC/dMu/"+dataset+"/Results/"+stn+fitType+"_delta_prime_vs_p_"+config);

      gr_delta_prime->SetName((stn+"delta_prime_vs_p").c_str());
      gr_delta_prime->Write();

      // ------------------ Estimate acceptance MC stat error ------------------ 

      vector<TH1D*> acceptanceTrialHists_;
      if(correctAcceptance) acceptanceTrialHists_ = GetAcceptanceTrialHists(acceptance_file, stn);

      vector<double> delta_prime_trials_; 

      for(auto& acceptanceTrialHist : acceptanceTrialHists_) {

        TGraphErrors *gr_delta_prime_trial = GetDeltaPrimeFit(A_gr, dilutionFunc, acceptanceTrialHist); 
        TF1 *f_delta_prime_trial = (TF1*)gr_delta_prime_trial->GetFunction("pol0");

        delta_prime_trials_.push_back(f_delta_prime_trial->GetParameter(0));

      }

      // Histogram of delta_primes

      // Find histogram range
      double lastVal; double h_min; double h_max; 
      for(auto& val : delta_prime_trials_) { 
        if(val < lastVal) h_min = val; 
        if(val > lastVal) h_max = val;
        lastVal = val;
      }
      h_min = h_min-0.5; h_max = h_max+0.5;
      double binWidth = 0.02;

      std::ostringstream oss_binWidth; oss_binWidth << binWidth;

      // Fill histogram
      TH1D *h_delta_prime  = GetDeltaPrimeHist(delta_prime_trials_, h_min, h_max, binWidth);

      // Draw and write histogram
      DrawDeltaPrimeHist(h_delta_prime, ";#delta [mrad];Trials / "+oss_binWidth.str(), "../Images/MC/dMu/"+dataset+"/Results/"+stn+fitType+"_delta_prime_hist_"+to_string(nTrials)+"_"+to_string(int(xmin))+"-"+to_string(int(xmax))+"MeV_"+config);
      h_delta_prime->SetName((stn+"h_delta_prime").c_str());
      h_delta_prime->Write();

      // Fill results
      double delta_prime = f_delta_prime->GetParameter(0);
      double err_fit = f_delta_prime->GetParError(0);

      double err_acc = 0; 
      if(correctAcceptance) err_acc = h_delta_prime->GetRMS();

      double result = delta_prime;
      double err_tot = sqrt(pow(err_fit,2)+pow(err_acc,2));

      if(fitType == "EDM") {

        // Deal with converting small double into strings
        std::ostringstream oss_result; oss_result << GetLimit(result);
        std::ostringstream oss_fit_error; oss_fit_error << GetLimit(err_fit);
        std::ostringstream oss_acc_error; oss_acc_error << GetLimit(err_acc);
        std::ostringstream oss_tot_error; oss_tot_error << GetLimit(err_tot);

        std::string dMu = oss_result.str(); 
        std::string err_dMu_fit = oss_fit_error.str();
        std::string err_dMu_acc = oss_acc_error.str();
        std::string err_dMu_tot = oss_tot_error.str();

        results_.push_back(stn+", "+to_string(result)+", "+to_string(err_fit)+", "+to_string(err_acc)+", "+to_string(err_tot)+", "+dMu+", "+err_dMu_fit+", "+err_dMu_acc+", "+err_dMu_tot);//oss_acc_error+", "+oss_acc_error);


      } else if(fitType == "g2") {
        //results_.push_back(stn+", "+to_string(result)+", "+to_string(error)+", "+to_string(result*1e3)+", "+to_string(error*1e3));//stn_+", "+to_string(result*1e3)+", "+to_string(error*1e3));
      }

    }

  }

	cout<<"\n***************************** Writing output *****************************\n"<<endl;

	cout<<"Written results to output file "<<outputFileName<<", "<<outputFile<<endl;

	cout<<"\n***************************** Printing results *****************************\n"<<endl;

  for(auto& result : results_) cout<<result<<endl;

  cout<<"\n***************************** Done *****************************"<<endl;

  A_file->Close();
  outputFile->Close();

	return;

}

void RunData(std::string config, std::string dataset, std::string blinding, bool correctDilution, bool correctAcceptance, bool correctVerticalAngleOffset) { // , TString tmp) { 

  cout<<"\n***************************** DATA *****************************\n"<<endl;

  cout<<"\n***************************** Processing input configuration *****************************\n"<<endl;

  int step = GetStep(config);
  std::string qual = GetQual(config);
  std::string datasetLabel = GetDataset(config);
  std::string corrStr = "";
  if(!correctDilution) corrStr = "_noDilCorr";
  if(correctDilution && !correctAcceptance) corrStr = "_noAccCorr";
  if(!correctVerticalAngleOffset) corrStr = "_noVertCorr";

  cout<<"Running "<<config<<" with... "<<dataset<<endl;
  cout<<"Info:\n"<<step<<", "<<qual<<endl;

  cout<<"\n***************************** Defining output tree *****************************\n"<<endl;

  // This needs to come before you define the output file or it will throw a WriteBuffer error. No idea why. 

  // Result tree
  TTree *EDMTree = new TTree("EDMTree", "EDMTree");
  double dMu; double dMu_err; 
  EDMTree->Branch("dMu", &dMu);//, "dMu/d");
  EDMTree->Branch("dMu_err", &dMu_err);//, "dMu_err/d");
  TTree *g2Tree = new TTree("BzTree", "BzTree");
  double g2; double g2_err; 
  g2Tree->Branch("g2", &g2);//, "g2/d");
  g2Tree->Branch("g2_err", &g2_err);//, "g2_err/d");

  cout<<"\n***************************** Creating output file *****************************\n"<<endl;

  TString outputFileName = "../Plots/Data/dMu/"+dataset+"/Fits/edmResults_"+blinding+"_"+to_string(int(xmin))+"-"+to_string(int(xmax))+"MeV_"+config+corrStr+".root";
  TFile *outputFile = new TFile(outputFileName, "RECREATE");

  cout<<"\n***************************** Getting data *****************************\n"<<endl;

  TString A_fileName = "../Plots/Data/dMu/"+dataset+"/Fits/edmFits_"+blinding+"_"+config+".root";
  TFile *A_file = TFile::Open(A_fileName);

  TString acceptance_fileName = "../Plots/MC/Acceptance/Plots/acceptanceWeightingVsMomentum_250MeV.root"; // _dataAccCorr_"+datasetLabel+".root";
  TFile *acceptance_file = TFile::Open(acceptance_fileName);

  TString dilution_fileName = "../Plots/MC/dMu/Dilution/dilutionCurves.exact.root";
  TFile *dilution_file  = TFile::Open(dilution_fileName);

  cout<<"Got files:\n"<<A_fileName<<", "<<A_file<<"\n"<<acceptance_fileName<<", "<<acceptance_file<<endl;

  //cout<<"Got vector of mott functions:\n"<<mottFunctions_<<endl;

  cout<<"\n***************************** Performing dilution correction *****************************\n"<<endl;
  // Get dilution curve
  TGraphErrors *d_gr = (TGraphErrors*)dilution_file->Get("DilutionFits/AQ/Decays/250MeV/d_vs_p/allDecays");
  TF1 *dilutionFunc = (TF1*)d_gr->GetFunction("DilutionFunc");

  // EDIT: changed to all decays fit
  vector<string> stn_ = {"S12", "S18", "S12S18"};
  vector<string> fitType_ = {"EDM"};//, "g2"};

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
        results_.push_back("Station, value, fit_error, acc_error, Br_error, tot_error, value, fit_error, acc_error, Br_error, tot_error");
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

    if(!correctDilution) {
      dilutionFunc = new TF1("", "pol0", xmin, xmax);
      dilutionFunc->SetParameter(0, 1);
    }

    for(auto& stn : stn_) {

      TH1D *acceptanceHist = (TH1D*)acceptance_file->Get(("hists/"+stn+"_ratio").c_str()); 
      if(!correctAcceptance) acceptanceHist = 0;

      // Get mott functions
      TString A_grName = "MomentumBinnedAnalysis/ParameterScans/"+stn+"_A"+fitType+"_vs_p";
      TGraphErrors *A_gr = (TGraphErrors*)A_file->Get(A_grName);

      TGraphErrors *gr_delta_prime = GetDeltaPrimeFit(A_gr, dilutionFunc, acceptanceHist);

      TF1 *f_delta_prime = (TF1*)gr_delta_prime->GetFunction("pol0");

      double delta_prime = f_delta_prime->GetParameter(0);

      // DrawDeltaPrimeFit(gr_delta_prime, "Data: "+dataset, ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+";#delta'_{"+subscript+"}^{BLIND} [mrad];", "../Images/Data/dMu/"+dataset+"/Results/"+stn+fitType+"_delta_prime_vs_p");
      //DrawDeltaPrimeFit(gr_delta_prime, "Data: "+dataset, ";Decay vertex momentum [MeV];#delta'_{"+subscript+"}^{BLIND} [mrad] / 125 MeV;", "../Images/Data/dMu/"+dataset+"/Results/"+stn+fitType+"_delta_prime_vs_p");

      DrawDeltaPrimeFit(gr_delta_prime, "Data: "+datasetLabel, stn+";Decay vertex momentum [MeV];#delta (BLIND) [mrad] / "+to_string(step)+" MeV;", "../Images/Data/dMu/"+dataset+"/Results/"+stn+"_"+fitType+"_delta_prime_vs_p_"+to_string(int(xmin))+"-"+to_string(int(xmax))+"MeV_"+config+corrStr);

      gr_delta_prime->SetName((stn+"_delta_prime_vs_p").c_str());
      gr_delta_prime->Write();

/*      // Calculate acceptance uncertainty 
      // Plus one sigma
      TGraphErrors *gr_delta_prime_plus = GetDeltaPrimeFit(A_gr, dilutionFunc, acceptanceHist, "plus");
      // Minus one sigma
      TGraphErrors *gr_delta_prime_minus = GetDeltaPrimeFit(A_gr, dilutionFunc, acceptanceHist, "minus");

      TF1 *f_delta_prime_plus = (TF1*)gr_delta_prime_plus->GetFunction("pol0");
      TF1 *f_delta_prime_minus = (TF1*)gr_delta_prime_minus->GetFunction("pol0");

      double delta_prime_plus = f_delta_prime_plus->GetParameter(0);
      double delta_prime_minus = f_delta_prime_minus->GetParameter(0);

      DrawDeltaPrimeFit(gr_delta_prime_plus, "Data: "+datasetLabel, stn+";Decay vertex momentum [MeV];#delta'_{"+subscript+"}^{"+blind+"} [mrad] / "+to_string(step)+" MeV;", "../Images/Data/dMu/"+dataset+"/Results/"+stn+"_"+fitType+"_delta_prime_plus_vs_p_"+to_string(int(xmin))+"-"+to_string(int(xmax))+"MeV_"+config+corrStr);
      DrawDeltaPrimeFit(gr_delta_prime_minus, "Data: "+datasetLabel, stn+";Decay vertex momentum [MeV];#delta'_{"+subscript+"}^{"+blind+"} [mrad] / "+to_string(step)+" MeV;", "../Images/Data/dMu/"+dataset+"/Results/"+stn+"_"+fitType+"_delta_prime_minus_vs_p_"+to_string(int(xmin))+"-"+to_string(int(xmax))+"MeV_"+config+corrStr);
*/

      // Radial field in mrad 
      double Br = get<0>(GetRadialField(datasetLabel));
      double err_Br = get<1>(GetRadialField(datasetLabel)); 


      // ------------------ Estimate acceptance MC stat error ------------------ 

      vector<TH1D*> acceptanceTrialHists_;
      if(correctAcceptance) acceptanceTrialHists_ = GetAcceptanceTrialHists(acceptance_file, stn);

      vector<double> delta_prime_trials_; 

      for(auto& acceptanceTrialHist : acceptanceTrialHists_) {

        TGraphErrors *gr_delta_prime_trial = GetDeltaPrimeFit(A_gr, dilutionFunc, acceptanceTrialHist); 
        TF1 *f_delta_prime_trial = (TF1*)gr_delta_prime_trial->GetFunction("pol0");

        delta_prime_trials_.push_back(f_delta_prime_trial->GetParameter(0));

      }

      // Histogram of delta_primes

      // Find histogram range
      double lastVal; double h_min; double h_max; 
      for(auto& val : delta_prime_trials_) { 
        if(val < lastVal) h_min = val; 
        if(val > lastVal) h_max = val;
        lastVal = val;
      }

      h_min = h_min-0.5; h_max = h_max+0.5;
      double binWidth = 0.02;

      std::ostringstream oss_binWidth; oss_binWidth << binWidth;

      // Fill histogram
      TH1D *h_delta_prime  = GetDeltaPrimeHist(delta_prime_trials_, h_min, h_max, binWidth);

      // Draw and write histogram
      if(correctDilution) DrawDeltaPrimeHist(h_delta_prime, stn+";#delta (BLIND) [mrad];Trials  / "+oss_binWidth.str()+" [mrad]", "../Images/Data/dMu/"+dataset+"/Results/"+stn+"_"+fitType+"_delta_prime_hist_"+to_string(nTrials)+"_"+to_string(int(xmin))+"-"+to_string(int(xmax))+"MeV_"+config+corrStr);
      h_delta_prime->SetName((stn+"_h_delta_prime").c_str());
      h_delta_prime->Write();

      double result = delta_prime - Br;
      double err_fit = f_delta_prime->GetParError(0);
      double err_acc = h_delta_prime->GetRMS();
      double err_tot = sqrt(pow(err_fit,2) + pow(err_Br,2) + pow(err_acc,2));    

      if(fitType == "EDM") {

        dMu = GetLimit(result); dMu_err = GetLimit(err_tot);
        //outputFile->cd();
        EDMTree->Fill(); 

        // Deal with converting small double into strings
        std::ostringstream oss_result; oss_result << GetLimit(result);
        std::ostringstream oss_err_fit; oss_err_fit << GetLimit(err_fit);
        std::ostringstream oss_err_acc; oss_err_acc << GetLimit(err_acc);
        std::ostringstream oss_err_Br; oss_err_Br << GetLimit(err_Br);
        std::ostringstream oss_err_tot; oss_err_tot << GetLimit(err_tot);
        std::string dMu_str = oss_result.str();
        std::string err_dMu_fit = oss_err_fit.str();
        std::string err_dMu_acc = oss_err_acc.str();
        std::string err_dMu_Br = oss_err_Br.str();
        std::string err_dMu_tot = oss_err_tot.str();

        results_.push_back(stn+", "+to_string(delta_prime)+", "+to_string(err_fit)+", "+to_string(err_acc)+", "+to_string(err_Br)+", "+to_string(err_tot)+", "+dMu_str+", "+err_dMu_fit+", "+err_dMu_acc+", "+err_dMu_Br+", "+err_dMu_tot);

      } else if(fitType == "g2") {

        g2 = 1e3*result; g2_err = 1e3*err_tot;

        //outputFile->cd();
        g2Tree->Fill(); 

        //results_.push_back(stn+", "+to_string(delta_prime)+", "+to_string(err_fit)+", "+to_string(err_tot)+", "+to_string(delta_prime*1e3)+", "+to_string(err_fit*1e3)+", "+to_string(err_tot*1e3));
      }

      outputFile->cd((fitType).c_str());

    } // Station loop

  } 

  cout<<"\n***************************** Writing output *****************************\n"<<endl;

  outputFile->cd("EDM");
  EDMTree->Write();
  outputFile->cd("g2");
  g2Tree->Write();

  outputFile->Write();

  cout<<"Written results to output file "<<outputFileName<<", "<<outputFile<<endl;


  cout<<"\n***************************** Printing results *****************************\n"<<endl;

  for(auto& result : results_) cout<<result<<endl;

  cout<<"\n***************************** Done *****************************"<<endl;

  A_file->Close();
  outputFile->Close();

  return;

}

// No need to get acceptance fit from file since it's an exact function 

void GetTiltAngle2() { 

  bool correctDilution = true; 
  bool correctAcceptance = true;
  bool correctVerticalAngleOffset = true; 

  //TF1 *dilutionFunc = new TF1("dilutionFunc", )

  // Unblinded sim samples
  //RunSim("allDecays_WORLD_250MeV_AQ", "5.4e-18", "blinded");
  //RunSim("allDecays_WORLD_250MeV_AQ", "5.4e-18", "unblinded");
  //RunSim("allDecays_WORLD_250MeV_AQ", "1.8e-18", "unblinded");
  //RunSim("trackTruth_WORLD_250MeV_BQ_noVertCorr", "5.4e-18", "unblinded", true);
  //RunSim("trackReco_WORLD_250MeV_BQ_noVertCorr", "5.4e-18", "unblinded", true);


  RunData("Run-1a_250MeV_BQ", "Run-1", "blinded", correctDilution, correctAcceptance, correctVerticalAngleOffset);
  RunData("Run-1b_250MeV_BQ", "Run-1", "blinded", correctDilution, correctAcceptance, correctVerticalAngleOffset);
  RunData("Run-1c_250MeV_BQ", "Run-1", "blinded", correctDilution, correctAcceptance, correctVerticalAngleOffset);
  RunData("Run-1d_250MeV_BQ", "Run-1", "blinded", correctDilution, correctAcceptance, correctVerticalAngleOffset);

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

/*  bool correctDilution = false; 
  bool correctAcceptance = true;
  bool correctVerticalAngleOffset = true; 

  RunData("Run-1a_250MeV_BQ", "Run-1", "blinded", correctDilution, correctAcceptance, correctVerticalAngleOffset);
  RunData("Run-1b_250MeV_BQ", "Run-1", "blinded", correctDilution, correctAcceptance, correctVerticalAngleOffset);
  RunData("Run-1c_250MeV_BQ", "Run-1", "blinded", correctDilution, correctAcceptance, correctVerticalAngleOffset);
  RunData("Run-1d_250MeV_BQ", "Run-1", "blinded", correctDilution, correctAcceptance, correctVerticalAngleOffset);

*/
	return;

}