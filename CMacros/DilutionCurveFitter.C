// Fit dilution curves 

/*Fit dilution parabolas and draw them all nicely. 

  Parabalo needed to be re-fitted in GetTiltAngle in order to deal with the errors properly. */

#include <iostream>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

using namespace std;

const double delta_calc = 1.699245178; // mrad
string dMu = "5.4e-18";

const double xmin = 750;
const double xmax = 2500;
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

  if(config.find("truthAllDecays_") != std::string::npos) { //} || config.find("truth_") != std::string::npos) { 
    return "truthAllDecays";
  } else if(config.find("truth_") != std::string::npos) { 
    return "truth";
  } else if(config.find("truth2_") != std::string::npos) { 
    return "truth2";
  }else if(config.find("trackTruth_") != std::string::npos) { // } || config.find("trackReco_") != std::string::npos) { 
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

  if(config.find("truthAllDecays_") != std::string::npos || config.find("truth_") != std::string::npos || config.find("truthControl_") != std::string::npos) { 
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

double ParabolaFunc(double *x, double *par) {
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

}

TGraphErrors *ConvertToDilution(TGraphErrors *gr) {

  int n = gr->GetN();

  double x[n]; double ex[n]; 
  double y[n]; double ey[n];

  for(int i = 0; i<n; i++) { 

    // Remove x-error bars
    x[i] = gr->GetX()[i]; ex[i] = 0;
    y[i] = gr->GetY()[i] / delta_calc; ey[i] = gr->GetEY()[i] / delta_calc;

  }

  return new TGraphErrors(n, x, y, ex, ey);

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
      fitValue[i] *= parErrors[i];//meanVals[i];//parErrors[i];
      fitValue[i] += meanVals[i];
      // Set function
      mottFunction->SetParameter(i, fitValue[i]);
      // cout<<"Parameter "<<i<<": "<<fitValue[i]<<endl;
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

  cout << "totalCov:" << endl;
  for (int i = 0; i < nDim; i++){
    for (int j = 0; j < nDim; j++){
      cout << totalCov[i][j]/nTrials << " ";
    }
    cout << endl;
  }

  frp->GetCovarianceMatrix().Print();

  // For some reason it writes these automatically
  // ellipse3D->Write();
  // sphere3D->Write();

  return;

}

void FitDilution(string config, string fitType, TFile *output, bool getError) {

  // Config params
  int step = GetStep(config);
  string frame = GetFrame(config);
  string qual = GetQual(config);
  string tracksOrDecays = GetTracksOrDecays(config);
  string tracksOrDecaysLabel = GetTracksOrDecaysLabel(config); // Either just "Tracks" or "Decays"

  string dname = "DilutionFits/"+qual+"/"+tracksOrDecaysLabel+"/"+to_string(step)+"MeV/d_vs_p";
  output->mkdir(dname.c_str());

  cout<<"\n***************************\nRunning with:\nstep: "<<step<<"\nframe: "<<frame<<"\nfitting for: "<<fitType<<"\n***************************"<<endl;

  TString fn = "../Plots/MC/dMu/5.4e-18/fits/dMuSim_unblinded_"+config+".root";//+name+"_"+frame+"_"+to_string(step)+"MeV_"+qual+"Q.root";//
  TFile *f = TFile::Open(fn);

  cout<<"***************************\nOpened file "<<fn<<", "<<f<<"\n***************************"<<endl;

  string grn = "MomentumBinnedAnalysis/ParameterScans/MomSlices/";
  if(tracksOrDecays == "Tracks") grn += "S0S12S18_A"+fitType+"_vs_p";
  else grn += "A"+fitType+"_vs_p";

  TGraphErrors *gr = (TGraphErrors*)f->Get(grn.c_str());

  // Backwards compatibility. Annoying but graph names have inconsistent patterns.
  if(gr==0) gr = (TGraphErrors*)f->Get("MomentumBinnedAnalysis/ParameterScans/MomSlices/A_vs_p");
  if(gr==0) gr = (TGraphErrors*)f->Get("MomentumBinnedAnalysis/ParameterScans/MomSlices/S0S12S18_A_vs_p");

  cout<<tracksOrDecays<<endl;

  cout<<"graph\t"<<grn<<", "<<gr<<endl;

  // Convert to diluton
  gr = ConvertToDilution(gr); 

  // Set name
  gr->SetName(tracksOrDecays.c_str());

  // Fit
  ParabolaFit(gr, tracksOrDecays, xmin, xmax);

  TF1 *fit = gr->GetFunction("ParabolaFunc");

  cout<<"chisqr/ndf\t"<<fit->GetChisquare() / fit->GetNDF()<<endl;

  cout<<"\n *** Getting fit result pointer *** \n"<<endl;

  TFitResultPtr frp = gr->Fit(fit, "SR");

  f->Close();

  string title = ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+";d_{"+fitType+"}(p)";

  gr->SetTitle(title.c_str());

  // Write
  output->cd(dname.c_str());

  gr->Write();   

  // nTrials is a global var
  if(getError) {

    cout<<"\n *** Sampling full set of distributons *** \n"<<endl;

    dname += "/"+tracksOrDecays+"Trials";
    output->mkdir(dname.c_str()); output->cd(dname.c_str());

    MottFunctions(gr, fit, frp, output, dname); 

  }

  return; 

}

int main() { 

  bool fit = true;
  bool write = true;

  string fname = "";
  if(write) fname += "../Plots/MC/dMu/Dilution/dilutionCurves.root";
  else if(!write) fname += "../Plots/MC/dMu/Dilution/tmp.root";

  TFile *output = new TFile(fname.c_str(), "RECREATE");

  // void FitDilution(string config, string fitType, TFile *output, bool getError)
  // Alternative fitType is "g2

  // Regular samples
  FitDilution("truthAllDecays_AAR_500MeV_AQ",  "EDM", output, false);
  FitDilution("truth_AAR_500MeV_AQ", "EDM", output, false);
  FitDilution("trackReco_AAR_500MeV_AQ", "EDM", output, false);
  FitDilution("trackTruth_AAR_500MeV_AQ", "EDM", output, false);
  FitDilution("trackReco_AAR_500MeV_BQ", "EDM", output, false);
  FitDilution("trackTruth_AAR_500MeV_BQ", "EDM", output, false); 
  FitDilution("truthAllDecays_AAR_250MeV_AQ", "EDM", output, false);
  FitDilution("truth_AAR_250MeV_AQ", "EDM", output, false);
  FitDilution("trackReco_AAR_250MeV_AQ", "EDM", output, false);
  FitDilution("trackTruth_AAR_250MeV_AQ", "EDM", output, false);
  FitDilution("trackTruth_AAR_250MeV_BQ", "EDM", output, false);

  // With full distribution
  FitDilution("trackReco_AAR_250MeV_BQ", "EDM", output, true); 

  // Control sample. All reconstructions arise from the same MC sample.
  FitDilution("truthControl_AAR_250MeV_AQ", "EDM", output, false);	
  FitDilution("trackRecoControl_AAR_250MeV_BQ", "EDM", output, false);
  FitDilution("trackRecoControl_AAR_250MeV_CQ", "EDM", output, false);


  output->Write();
  output->Close();

  cout<<"Written plots to "<<fname<<endl;

  return 0; 

}
