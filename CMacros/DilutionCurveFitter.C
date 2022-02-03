
/*

  Fit dilution parabolas 

  These are drawn nicely in DilutionCurvePlotter.C

*/

#include <iostream>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

using namespace std;

const double delta_calc = 1.699245178; // mrad
string dMu = "5.4e-18";

const double xmin = 750;
const double xmax = 2750;
const int nTrials = 1e3;

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
  } else if(config.find("acceptedDecaysControl_") != std::string::npos) { 
    return "acceptedDecaysControl";  
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
  } else { 
    cerr<<"Step size is unknown";
    return -1;
  }

}

/*double ParabolaFunc(double *x, double *par) {
  return par[0] * pow(x[0],2) + par[1] * x[0] + par[2];
}


void ParabolaFit(TGraphErrors *graph, string config, double xmin, double xmax) { // double p0, double p1, double p2, 
  
  TF1 *fnc = new TF1("ParabolaFunc", ParabolaFunc, xmin, xmax, 3);

  if(config == "Tracks") {
    fnc->SetParameter(0, -5.5e-8);
    fnc->SetParameter(1, 1.5e-4);
    fnc->SetParameter(2, -0.05);
  }  else if(config == "Decays") { 
    fnc->SetParameter(0, -5.5e-8);
    fnc->SetParameter(1, 8.0e-5);
    fnc->SetParameter(2, 2.5e-1);
  } 

  graph->Fit(fnc, "R");    

  return;

}*/

double ParabolaFunc(double *x, double *par) {
  return par[0] * pow(x[0],2) + par[1] * x[0] + par[2];
}


void ParabolaFit(TGraphErrors *graph, string config, double xmin, double xmax) { // double p0, double p1, double p2, 
  
  TF1 *fnc = new TF1("ParabolaFunc", ParabolaFunc, xmin, xmax, 3);

/*  if(config == "Tracks") {
    fnc->SetParameter(0, -5.5e-8);
    fnc->SetParameter(1, 1.5e-4);
    fnc->SetParameter(2, -0.05);
  }  else if(config == "Decays") { 
    fnc->SetParameter(0, -5.5e-8);
    fnc->SetParameter(1, 8.0e-5);
    fnc->SetParameter(2, 2.5e-1);
  } */

  graph->Fit(fnc, "R");    

  return;

}


// [0] * ( ( ([1]*x) - 1)^2 * (2*([1]*x) +1) )
double DilutionFunc(double *x, double *par) {
  return par[0] * pow((par[1]*x[0] - 1 ),2) * (2*(par[1]*x[0]) + 1);
}


void DilutionFit(TGraphErrors *graph, string config, double xmin, double xmax) { // double p0, double p1, double p2, 
  
  TF1 *fnc = new TF1("DilutionFunc", DilutionFunc, xmin, xmax, 2);
  fnc->SetParameter(0, 1.4e-01);
  fnc->SetParameter(1, -1.3e-04);

/*  if(config == "Tracks") {
    fnc->SetParameter(0, -5.5e-8);
    fnc->SetParameter(1, 1.5e-4);
    fnc->SetParameter(2, -0.05);
  }  else if(config == "Decays") { 
    fnc->SetParameter(0, -5.5e-8);
    fnc->SetParameter(1, 8.0e-5);
    fnc->SetParameter(2, 2.5e-1);
  } */

  graph->Fit(fnc, "R");    

  return;

}


TGraphErrors *ConvertToDilution(TGraphErrors *gr) {

  int n = gr->GetN();

  double x[n]; double ex[n]; 
  double y[n]; double ey[n];

  for(int i = 0; i<n; i++) { 

    // Remove x-error bars
    x[i] = gr->GetX()[i]; ex[i] = 0;
    y[i] = gr->GetY()[i] / delta_calc;
    // Is this an overestimate?
    ey[i] = gr->GetEY()[i] / delta_calc;

  }

  return new TGraphErrors(n, x, y, ex, ey);

}

// Some people say my fits are too good to be true!
// (point - fit) / point error 
tuple<vector<double>, vector<double>, vector<double>, vector<double>> GetPulls(TGraphErrors *gr) {

  vector<double> pulls_; 
  vector<double> x_; 
  vector<double> ex_;
  vector<double> zeros_;  

  TF1 *fit = (TF1*)gr->GetFunction("DilutionFunc");//ParabolaFunc");

  for (int i(0); i<gr->GetN(); i++) { 

    double x = gr->GetX()[i];

    if(x < xmin || x > xmax) continue;

    x_.push_back(x);

    double pull = (gr->GetY()[i] - fit->Eval(x)) / gr->GetEY()[i]; 
    pulls_.push_back(pull);

    ex_.push_back(gr->GetEX()[i]);
    zeros_.push_back(0);

  }

  return make_tuple(x_, pulls_, ex_, zeros_);

}

// Draw fit parameters from a gaussian according the correlation martrix
void MottFunctions(TGraphErrors *gr, TF1* fit, TFitResultPtr frp, TFile *output, string dname) {

  // Get parameters from converged fit
  int nPars = 3;
  TVectorD parErrors(nPars);
  for(int n = 0; n < nPars; n++){
    parErrors[n] = fit->GetParError(n);
  }

  // Get parameters from converged fit
  //int nPars = 3;
  TVectorD meanVals(nPars);
  for(int n = 0; n < nPars; n++){
    meanVals[n] = fit->GetParameter(n);
  }

  // Correlation matrix
  TMatrixD corrMatrix = frp->GetCorrelationMatrix();

  // Matrix manipulation
  TDecompChol decompCholCorr(corrMatrix);
  decompCholCorr.Decompose();
  TMatrixD matrixCorrI = decompCholCorr.GetU();
  TMatrixD matrixCorr(nPars,nPars);
  matrixCorr.Transpose(matrixCorrI);

  int nDim = nPars;

  // Holder for cov matrix check
  double totalCov[nDim][nDim];
  for(int i = 0; i < nDim; i++){
    for(int j = 0; j < nDim; j++){
      totalCov[i][j] = 0;
    }
  }
                                                                                                                                           
  // Set random number pointer with seed
  TRandom3 *randGen = new TRandom3(12345);

  TH3D *ellipse3D = new TH3D("ellipse3D", ";a [MeV^{-2}];b [MeV^{-1}];d_{0}", 100, -125E-09, -125E-08, 27, 5.25E-05, 0.000272258, 27, -0.113345, 0.0541603);
  TH3D *sphere3D = new TH3D("sphere3D", ";#sigma_{i};#sigma_{j};#sigma_{k}", 100, -5, 5, 100, -5, 5, 100, -5, 5);

  for(int i_trial = 0; i_trial<nTrials; i_trial++) { 

    TF1* mottFunction = new TF1(Form("%d",i_trial), ParabolaFunc, xmin, xmax, 3);

    // Vector of fit parameters
    TVectorD fitValue(nPars);
	
    // Draw random numbers from a gaussian distribution
    for (int i = 0; i < nPars; i++) fitValue[i] = randGen->Gaus(0,1);

    sphere3D->Fill(fitValue[0],fitValue[1],fitValue[2]);
		
    // Scale according correlation
    fitValue = matrixCorr*fitValue;

    for (int i = 0; i < nPars; i++) {
      // Scale according to mean values 
      fitValue[i] *= parErrors[i];
      fitValue[i] += meanVals[i];
      // Set function
      mottFunction->SetParameter(i, fitValue[i]);
    }

    ellipse3D->Fill(fitValue[0],fitValue[1],fitValue[2]);
		


    for (int i = 0; i < nDim; i++){
      for (int j = 0; j < nDim; j++){
      	totalCov[i][j] += (fitValue[i]-meanVals[i])*(fitValue[j]-meanVals[j]);
      }
    }

    mottFunction->Write();

  }

  // Cov matric checks
  cout<<"Correlation matrix:"<<endl;
  frp->GetCorrelationMatrix().Print();

/*  cout << "totalCov:" << endl;
  for (int i = 0; i < nDim; i++){
    for (int j = 0; j < nDim; j++){
      cout << totalCov[i][j]/nTrials << " ";
    }
    cout << endl;
  }*/

/*  frp->GetCovarianceMatrix().Print();*/

  // For some reason it writes these automatically
  // ellipse3D->Write();
  // sphere3D->Write();

  return;

}

// Draw fit parameters from a gaussian according the correlation martrix
void MottFunctions2(TGraphErrors *gr, TF1* fit, TFitResultPtr frp, TFile *output, string dname) {

  // Get parameters from converged fit
  int nPars = 2;
  TVectorD parErrors(nPars);
  for(int n = 0; n < nPars; n++){
    parErrors[n] = fit->GetParError(n);
  }

  // Get parameters from converged fit
  //int nPars = 3;
  TVectorD meanVals(nPars);
  for(int n = 0; n < nPars; n++){
    meanVals[n] = fit->GetParameter(n);
  }

  // Correlation matrix
  TMatrixD corrMatrix = frp->GetCorrelationMatrix();

  // Matrix manipulation
  TDecompChol decompCholCorr(corrMatrix);
  decompCholCorr.Decompose();
  TMatrixD matrixCorrI = decompCholCorr.GetU();
  TMatrixD matrixCorr(nPars,nPars);
  matrixCorr.Transpose(matrixCorrI);

  int nDim = nPars;

  // Holder for cov matrix check
  double totalCov[nDim][nDim];
  for(int i = 0; i < nDim; i++){
    for(int j = 0; j < nDim; j++){
      totalCov[i][j] = 0;
    }
  }
                                                                                                                                           
  // Set random number pointer with seed
  TRandom3 *randGen = new TRandom3(12345);

  //TH3D *ellipse3D = new TH3D("ellipse3D", ";a [MeV^{-2}];b [MeV^{-1}];d_{0}", 100, -125E-09, -125E-08, 27, 5.25E-05, 0.000272258, 27, -0.113345, 0.0541603);
  //TH3D *sphere3D = new TH3D("sphere3D", ";#sigma_{i};#sigma_{j};#sigma_{k}", 100, -5, 5, 100, -5, 5, 100, -5, 5);

  TGraphErrors *sphere2D = new TGraphErrors();
  TGraphErrors *ellipse2D = new TGraphErrors();//"ellipse2D", ";a;b");

  for(int i_trial = 0; i_trial<nTrials; i_trial++) { 

    TF1* mottFunction = new TF1(Form("%d",i_trial), DilutionFunc, xmin, xmax, 3);

    // Vector of fit parameters
    TVectorD fitValue(nPars);
  
    // Draw random numbers from a gaussian distribution
    for (int i = 0; i < nPars; i++) fitValue[i] = randGen->Gaus(0,1);

    //sphere3D->Fill(fitValue[0],fitValue[1],fitValue[2]);
    sphere2D->SetPoint(i_trial, fitValue[0], fitValue[1]);//fitValue[0],fitValue[1],fitValue[2]);
    sphere2D->SetPointError(i_trial, 0, 0);

    // Scale according correlation
    fitValue = matrixCorr*fitValue;

    for (int i = 0; i < nPars; i++) {
      // Scale according to mean values 
      fitValue[i] *= parErrors[i];
      fitValue[i] += meanVals[i];
      // Set function
      mottFunction->SetParameter(i, fitValue[i]);
    }

    ellipse2D->SetPoint(i_trial, fitValue[0], fitValue[1]);//fitValue[0],fitValue[1],fitValue[2]);
    ellipse2D->SetPointError(i_trial, 0, 0);


    for (int i = 0; i < nDim; i++){
      for (int j = 0; j < nDim; j++){
        totalCov[i][j] += (fitValue[i]-meanVals[i])*(fitValue[j]-meanVals[j]);
      }
    }

    mottFunction->Write();

  }

  // Cov matric checks
  cout<<"Correlation matrix:"<<endl;
  frp->GetCorrelationMatrix().Print();

/*  cout << "totalCov:" << endl;
  for (int i = 0; i < nDim; i++){
    for (int j = 0; j < nDim; j++){
      cout << totalCov[i][j]/nTrials << " ";
    }
    cout << endl;
  }*/

/*  frp->GetCovarianceMatrix().Print();*/

  // For some reason it writes these automatically
  // ellipse3D->Write();
  // sphere3D->Write();
  sphere2D->SetName("sphere2D");
  sphere2D->Write();
  ellipse2D->SetName("ellipse2D");
  ellipse2D->Write();

  return;

}

void FitDilution(string config, string fitType, TFile *output, bool getError) { //, bool highStats = false) {

  // Config params
  int step = GetStep(config);
  string frame = GetFrame(config);
  string qual = GetQual(config);
  string tracksOrDecays = GetTracksOrDecays(config);
  string tracksOrDecaysLabel = GetTracksOrDecaysLabel(config); // Either just "Tracks" or "Decays"

  string dname = "DilutionFits/"+qual+"/"+tracksOrDecaysLabel+"/"+to_string(step)+"MeV/d_vs_p";
  output->mkdir(dname.c_str());

  cout<<"\n***************************\nRunning with:\nstep: "<<step<<"\nframe: "<<frame<<"\nfitting for: "<<fitType<<"\n***************************"<<endl;

  TString fn = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_"+config+".root";//+name+"_"+frame+"_"+to_string(step)+"MeV_"+qual+"Q.root";//
  TFile *f = TFile::Open(fn);

  cout<<"***************************\nOpened file "<<fn<<", "<<f<<"\n***************************"<<endl;

  std::vector<std::string> stn_ = {"S0_", "S12_", "S18_", "S12S18_", "S0S12S18_"};
  if(tracksOrDecaysLabel != "Tracks") stn_ = {""};

  for (auto& stn : stn_) { 
      
      TString grn = "MomentumBinnedAnalysis/ParameterScans/"+stn+"AEDM_vs_p_thetaY";

      TGraphErrors *gr = (TGraphErrors*)f->Get(grn);

      cout<<"graph\t"<<gr<<", "<<grn<<endl;

      // Convert to diluton
      gr = ConvertToDilution(gr); 

      // output graphs  
      //string grn2 = stn+tracksOrDecays;
      //if(highStats) grn2 += "_HS";
      gr->SetName((stn+tracksOrDecays).c_str());

      // Fit
      // ParabolaFit(gr, tracksOrDecays, xmin, xmax);
      // TF1 *fit = gr->GetFunction("ParabolaFunc");
      DilutionFit(gr, tracksOrDecays, xmin, xmax);

      TF1 *fit = gr->GetFunction("DilutionFunc");

      cout<<"chisqr/ndf\t"<<fit->GetChisquare() / fit->GetNDF()<<endl;

      //continue;

      cout<<"\n *** Getting fit result pointer *** \n"<<endl;

      TFitResultPtr frp = gr->Fit(fit, "SR");

      cout<<"frp "<<frp<<endl;
      string title = stn+";Decay vertex momentum [MeV];d_{"+fitType+"} / "+to_string(step)+" MeV";

      gr->SetTitle(title.c_str());

      // Write
      output->cd(dname.c_str());

      gr->Write();   

      // Look at the fit pull
      tuple<vector<double>, vector<double>, vector<double>, vector<double>> pull_tuple = GetPulls(gr);
      vector<double> x_ = get<0>(pull_tuple);
      vector<double> pulls_ = get<1>(pull_tuple);
      vector<double> ex_ = get<2>(pull_tuple);
      vector<double> zeros_ = get<3>(pull_tuple);

      TGraphErrors *gr_pull = GenerateTGraphErrors(x_, pulls_, ex_, zeros_);
      gr_pull->SetName((stn+tracksOrDecays+"_gr_pull").c_str());
      gr_pull->SetTitle((stn+";Decay vertex momentum [MeV];Pull / "+to_string(step)+" MeV").c_str());
      gr_pull->Write();

      // This writes two histograms for some reason?
      TH1D *h_pull = new TH1D((stn+tracksOrDecays+"_h_pull").c_str(), (stn+";Pull [#sigma]; Entries / 0.25 #sigma").c_str(), 24, -3, +3);
      for(auto& pull : pulls_) h_pull->Fill(pull);

      // h_pull->Fit("gaus", "Q");

      h_pull->Write();

      // nTrials is a global var
      if(getError) {

        cout<<"\n *** Sampling full set of distributons *** \n"<<endl;

        // dname += "/"+stn+tracksOrDecays+"Trials"; 
        //if(highStats) dname += "/"+stn+tracksOrDecays+"Trials_HS";
        output->mkdir((dname+"/"+stn+tracksOrDecays+"Trials").c_str()); output->cd((dname+"/"+stn+tracksOrDecays+"Trials").c_str()); // (dname+"/"+stn+tracksOrDecays+"Trials").c_str());

        MottFunctions2(gr, fit, frp, output, dname); 

      }

  }

  f->Close();

  return; 

}


int main() { //int argc, char *argv[]) {

  //std::string tmp = argv[1];

  bool fit = true;
  bool write = true;

  string fname = "";
  if(write) fname += "../Plots/MC/dMu/Dilution/dilutionCurves.refit.root";
  else if(!write) fname += "../Plots/MC/dMu/Dilution/dilutionCurves_test.root";

  TFile *output = new TFile(fname.c_str(), "RECREATE");

  // void FitDilution(string config, string fitType, TFile *output, bool getError)
  // Alternative fitType is "g2

  //FitDilution("trackReco_WORLD_250MeV_BQ", "EDM", output, true); 
  //FitDilution("trackReco_WORLD_250MeV_BQ_HS", "EDM", output, true, true); 

  // Regular samples
  FitDilution("allDecays_WORLD_250MeV_AQ", "EDM", output, true);
  FitDilution("allDecays_WORLD_250MeV_AQ_accepted", "EDM", output, true);
  FitDilution("acceptedDecays_WORLD_250MeV_AQ", "EDM", output, true);
  FitDilution("trackReco_WORLD_250MeV_AQ", "EDM", output, true);
  FitDilution("trackTruth_WORLD_250MeV_AQ", "EDM", output, true);
  FitDilution("trackTruth_WORLD_250MeV_BQ", "EDM", output, true);

  // With full distribution
  //FitDilution("trackReco_WORLD_250MeV_BQ", "EDM", output, true); 
  FitDilution("trackReco_WORLD_250MeV_BQ.reweight", "EDM", output, true);

  // Control sample. All reconstructions arise from the same MC sample.
  FitDilution("acceptedDecaysControl_WORLD_250MeV_AQ", "EDM", output, true); 
  FitDilution("trackRecoControl_WORLD_250MeV_BQ", "EDM", output, true);
  FitDilution("trackRecoControl_WORLD_250MeV_CQ", "EDM", output, true);

/*  // Regular samples
  FitDilution("allDecays_AAR_250MeV_AQ", "EDM", output, false);
  FitDilution("acceptedDecays_AAR_250MeV_AQ", "EDM", output, false);
  FitDilution("trackReco_AAR_250MeV_AQ", "EDM", output, false);
  FitDilution("trackTruth_AAR_250MeV_AQ", "EDM", output, false);
  FitDilution("trackTruth_AAR_250MeV_BQ", "EDM", output, false);

  // With full distribution
  FitDilution("trackReco_AAR_250MeV_BQ", "EDM", output, true); 

  // Control sample. All reconstructions arise from the same MC sample.
  FitDilution("acceptedDecaysControl_AAR_250MeV_AQ", "EDM", output, false);	
  FitDilution("trackRecoControl_AAR_250MeV_BQ", "EDM", output, false);
  FitDilution("trackRecoControl_AAR_250MeV_CQ", "EDM", output, false);*/


  output->Write();
  output->Close();

  cout<<"Written plots to "<<fname<<endl;

  return 0; 

}
