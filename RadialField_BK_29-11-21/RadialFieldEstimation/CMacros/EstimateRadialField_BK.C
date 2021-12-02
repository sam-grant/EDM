#include <iostream>
#include <vector>
#include <fstream>
#include <string>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

using namespace std;

const double QHV = 18.3;

// Read in list of sub-runs 
vector<string> csvReader(string infile) {

  vector<string> result;

  // Open file
  std::ifstream myFile(infile);

  // Check that it opened correctly 
  if(!myFile.is_open()) throw std::runtime_error("Could not open file");

    // Helper vars
    std::string line; int val; 
    // Read data, line by line
    while(std::getline(myFile, line))
    {
        // Create a stringstream of the current line
        std::stringstream ss(line);
        while(ss >> val) result.push_back(to_string(val));
    }

    // Close file
    myFile.close();

    return result;

}

void DrawHist(TH1D *hist, std::string title, std::string fname) { 

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
  hist->SetLineColor(1);
  hist->SetFillStyle(3001);
  hist->SetFillColor(kBlack);
  hist->Draw("HIST");

  ////////

  TString mean = Round(hist->GetMean(), 3);
  TString mean_err = Round(hist->GetMeanError(), 1);

  TString rms = Round(hist->GetRMS(), 3);
  TString rms_err = Round(hist->GetRMSError(), 1);

  TPaveText *names = new TPaveText(0.65,0.69,0.70,0.89,"NDC");
  names->SetTextAlign(13);
  names->AddText("#LT#Deltay#GT [mm]");
  names->AddText("#sigma [mm]");
  names->SetTextSize(20); // 26
  names->SetTextFont(44);
  names->SetFillColor(0);

  TPaveText *values = new TPaveText(0.70,0.69,0.89,0.89,"NDC");
  values->SetTextAlign(33);
  values->AddText(mean+"#pm"+mean_err);
  values->AddText(rms+"#pm"+rms_err);
  values->SetTextSize(20); // 26
  values->SetTextFont(44);
  values->SetFillColor(0);

  values->Draw("same");
  names->Draw("same");

  ////////

  //c->SetRightMargin(0.13);
  
  c->SaveAs((fname+".C").c_str());
  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());

  delete c;

  return;

}

TGraphErrors *GetAvgCaloYVsRun(vector<string> runs, string dataset, string inputDir) { 

  // string basename = "caloBeamPositionPlots_"; 
  // if(nearline) "gm2nearline_hists_run"; 

  vector<double> y_; vector<double> ey_; 
  vector<double> x_; vector<double> ex_;

  for( int i_run = 0; i_run < runs.size(); i_run++ ) {

    string run = runs.at(i_run);

    // Regular method
    // TFile *fin = TFile::Open((inputDir+"/caloBeamPositionPlots_"+run+".root").c_str());
    string inputName;

    if(dataset=="Run1") { // } || dataset=="Run2" || dataset=="Run3") { 

      if(stod(run) <= 15991) inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2/caloBeamPositionPlots_"+run+".root";
      else if(stod(run) >= 16355 && stod(run) <= 16514) inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/gm2pro_daq_full_run1_9d_5040A_GLdocDB17018-v3/caloBeamPositionPlots_"+run+".root";
      else if(stod(run) >= 16113 && stod(run) <= 16234) inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/gm2pro_daq_full_run1_HighKick_5042B_GLdocDB20949-v3/caloBeamPositionPlots_"+run+".root";
      else if(stod(run) >= 17065 && stod(run) <= 17527) inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/gm2pro_daq_full_run1_EndGame_5042B_GLdocDB20839-v1/caloBeamPositionPlots_"+run+".root";

    } else if(dataset=="Run2") {

      if(stod(run) >= 24636 && stod(run) <= 24576) inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/gm2pro_daq_offline_dqc_run2B/caloBeamPositionPlots_"+run+".root";
      else if(stod(run) >= 24683 && stod(run) <= 25045) inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/gm2pro_daq_offline_dqc_run2C/caloBeamPositionPlots_"+run+".root";
      else if(stod(run) >= 25894 && stod(run) <= 26383) inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/gm2pro_daq_offline_dqc_run2D/caloBeamPositionPlots_"+run+".root";
      else if(stod(run) >= 26478 && stod(run) <= 26611) inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/gm2pro_daq_offline_dqc_run2E/caloBeamPositionPlots_"+run+".root";
      else if(stod(run) >= 26675 && stod(run) <= 26803) inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/gm2pro_daq_offline_dqc_run2F/caloBeamPositionPlots_"+run+".root";
      else if(stod(run) >= 26999 && stod(run) <= 27042) inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/gm2pro_daq_offline_dqc_run2G/caloBeamPositionPlots_"+run+".root";
      else if(stod(run) >= 27166 && stod(run) <= 27212) inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/gm2pro_daq_offline_dqc_run2G/caloBeamPositionPlots_"+run+".root";

    } else if(dataset=="Run3") { 

      if(stod(run) >= 34184 && stod(run) <= 34618) inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/gm2pro_daq_offline_dqc_run3N_5207A/caloBeamPositionPlots_"+run+".root";
      else if(stod(run) >= 34702 && stod(run) <= 34920) inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/gm2pro_daq_offline_dqc_run3O_5207A/caloBeamPositionPlots_"+run+".root";

    } else if(dataset=="All") { 

      if(stod(run) <= 15991) inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2/caloBeamPositionPlots_"+run+".root";
      else if(stod(run) >= 16355 && stod(run) <= 16514) inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/gm2pro_daq_full_run1_9d_5040A_GLdocDB17018-v3/caloBeamPositionPlots_"+run+".root";
      else if(stod(run) >= 16113 && stod(run) <= 16234) inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/gm2pro_daq_full_run1_HighKick_5042B_GLdocDB20949-v3/caloBeamPositionPlots_"+run+".root";
      else if(stod(run) >= 17065 && stod(run) <= 17527) inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/gm2pro_daq_full_run1_EndGame_5042B_GLdocDB20839-v1/caloBeamPositionPlots_"+run+".root";
      else if(stod(run) >= 24636 && stod(run) <= 24576) inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/gm2pro_daq_offline_dqc_run2B/caloBeamPositionPlots_"+run+".root";
      else if(stod(run) >= 24683 && stod(run) <= 25045) inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/gm2pro_daq_offline_dqc_run2C/caloBeamPositionPlots_"+run+".root";
      else if(stod(run) >= 25894 && stod(run) <= 26383) inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/gm2pro_daq_offline_dqc_run2D/caloBeamPositionPlots_"+run+".root";
      else if(stod(run) >= 26478 && stod(run) <= 26611) inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/gm2pro_daq_offline_dqc_run2E/caloBeamPositionPlots_"+run+".root";
      else if(stod(run) >= 26675 && stod(run) <= 26803) inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/gm2pro_daq_offline_dqc_run2F/caloBeamPositionPlots_"+run+".root";
      else if(stod(run) >= 26999 && stod(run) <= 27042) inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/gm2pro_daq_offline_dqc_run2G/caloBeamPositionPlots_"+run+".root";
      else if(stod(run) >= 27166 && stod(run) <= 27212) inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/gm2pro_daq_offline_dqc_run2G/caloBeamPositionPlots_"+run+".root";
      else if(stod(run) >= 34184 && stod(run) <= 34618) inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/gm2pro_daq_offline_dqc_run3N_5207A/caloBeamPositionPlots_"+run+".root";
      else if(stod(run) >= 34702 && stod(run) <= 34920) inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/gm2pro_daq_offline_dqc_run3O_5207A/caloBeamPositionPlots_"+run+".root";

    }

    inputName = inputDir+"/caloBeamPositionPlots_"+run+".root";

    TFile *fin = TFile::Open((inputName).c_str());
    

    if(fin==0) continue;

    TH1D *hy = (TH1D*)fin->Get("CaloBeamPosition/clusterY");

    double y = hy->GetMean(); double ey = hy->GetMeanError();

    if(hy->GetMean()==0) {
      fin->Close();
      cout<<"Warning: run "+run+" has a mean y-position of zero. Skipping."<<endl;
      continue;
    }

    y_.push_back(y); ey_.push_back(ey);
    x_.push_back(std::stod(run)); ex_.push_back(0.);

    //cout<<run<<","<<y<<","<<ey<<endl;
  
    fin->Close();

  }

  // Create TGraph 
  TGraphErrors *gr = GenerateTGraphErrors(x_, y_, ex_, ey_); 

  gr->Draw("AP*");

  DrawTGraphErrors(gr, ";Run number;#LTy_{Calo}#GT [mm]", "../Images/EstimateRadialField/AvgCaloYvsRun_"+dataset+"_"+runs.at(0)+"_"+runs.at(runs.size()-1));  

  return gr;
}


/*void PlotZeroPoint() { 

  vector<string> runs = csvReader("../txt/"+dataset+".txt");

  TGraphErrors *gr = GetAvgCaloYVsRun(runs, "Run4_Jan", "/pnfs/GM2/daq/run4/nearline/nearlineHists_merged"); 

}*/


/*tuple<double, double> GetZeroPoint() { 

  string input = "";

  TFile *fin = TFile::Open((input).c_str());

  TGraphErrors *gr = (TGraphErrors*)fin->Get("CaloAverage/gr");

  TF1 *zeroLine = new TF1("zeroLine", "[0]", 37970, 38293);
  gr->Fit(zeroLine, "R");

  gr->GetXaxis()->SetRangeUser(37960, 38303);
  gr->GetYaxis()->SetRangeUser(74.45, 75);

  TCanvas *c = new TCanvas("c","c",800,600);

  gStyle->SetStatFormat("6.3g");
  gr->Draw();
  gPad->Update();
  gStyle->SetStatY(0.89);
  gStyle->SetStatX(0.49);
  gStyle->SetStatBorderSize(0);
  gStyle->SetOptFit(111);

  gr->SetTitle(";Sub-run;#LTy_{calo}#GT [mm]");
  gr->GetXaxis()->SetTitleSize(.04);
  gr->GetYaxis()->SetTitleSize(.04);
  gr->GetXaxis()->SetTitleOffset(1.1);
  gr->GetYaxis()->SetTitleOffset(1.2);
  gr->GetXaxis()->CenterTitle(true);
  gr->GetYaxis()->CenterTitle(true);
  gr->GetYaxis()->SetMaxDigits(4);
  gr->SetMarkerStyle(20); //  Full circle
  gr->Draw("AP");
  //c->SetGridx();
  zeroLine->SetLineWidth(3);

  c->SaveAs("../Images/EstimateRadialField/ZeroPoint.pdf");
  c->SaveAs("../Images/EstimateRadialField/ZeroPoint.png");
  c->SaveAs("../Images/EstimateRadialField/ZeroPoint.C");

  delete c;

  return make_tuple(zeroLine->GetParameter(0),zeroLine->GetParError(0));

}*/

TGraphErrors *GetDeltaY(TGraphErrors *input, double zero, double zero_err) { 

  int n = input->GetN();

  double x[n]; double ex[n];
  double y[n]; double ey[n];

  for (int i_point = 0; i_point < n; i_point++) { 

    x[i_point] = input->GetX()[i_point];//PointX(i_point); 
    ex[i_point] = 0.;
    y[i_point] = input->GetY()[i_point] - zero;//PointY(i_point) - zero;
    ey[i_point] = sqrt(pow(input->GetErrorY(i_point),2) + pow(zero_err,2));

  } 

  return new TGraphErrors(n, x, y, ex, ey);

}

TH1D *GetDeltaY1D(TGraphErrors *input, double zero, double zero_err) { 

  int n = input->GetN();

  TH1D *hist = new TH1D("hist", "", 100, 0.8, 1.8);//100, -10, 10);

  for (int i_point = 0; i_point < n; i_point++) { 

    hist->Fill(input->GetY()[i_point] - zero);

  } 

  return hist;

}

double GetCaloAlignError(string dataset) { 

  TFile *fin = TFile::Open(("../Plots/CaloAlignment_"+dataset+".root").c_str());

  TH1D *hist = (TH1D*)fin->Get("hists/h_diff"); 

  return hist->GetRMS(); 

}

tuple<double, double, double, double> GetConversionParams() { 

  TFile *input = TFile::Open("../Plots/mm2ppm_fits.root");

  TGraphErrors *gr = (TGraphErrors*)input->Get("mainFit");

  TF1 *fit = (TF1*)gr->GetFunction("fit");

  double p0 = fit->GetParameter(0); double e0 = fit->GetParError(0);
  double p1 = fit->GetParameter(1); double e1 = fit->GetParError(1);

  //cout<<"Conversion params"<<endl;
  cout<<"p0\t"<<p0<<" ± "<<e0<<endl;
  cout<<"p1\t"<<p1<<" ± "<<e1<<endl;

  return make_tuple(p0, e0, p1, p0); 

}

tuple<double, double> GetBrBkg() { 

  TFile *input = TFile::Open("../Plots/RadialFieldScanFits_2.root");
  
  TGraphErrors *result = (TGraphErrors*)input->Get("mainFit/mainFit");

  TF1 *mainFit = result->GetFunction("mainFit");
  TFitResultPtr mainFitRes = result->Fit(mainFit,"SMQ");

  double p0 = mainFit->GetParameter(0); double p0_err = mainFit->GetParError(0);
  double p1 = mainFit->GetParameter(1); double p1_err = mainFit->GetParError(1);

  // x-intercept 
  double xint = -p0/p1;
  double Br = -xint;

  // From Taylor 9.9
  double BrErr = fabs(Br) * sqrt(pow(p0_err/p0,2) + pow(p1_err/p1,2) - 2*mainFitRes->GetCovarianceMatrix()(0,1)/(p0*p1));

  cout<<"Br\t"<<Br<<" ± "<<BrErr<<endl;

  return make_tuple(Br, BrErr);

}

double mm2ppm(double y, double p0, double p1) {
  return y / ( (p1/QHV) + (p0) );
}

double mm2ppm_err(double y, double ey, double p0, double e0, double p1, double e1) {
  // Quotient rule
  double term1 = pow(1/((p1/QHV)+p0),2)*pow(ey,2);
  double term2 = pow((((p1/QHV)+p0)-(y/QHV))/pow(((p1/QHV)+p0),2),2)*pow(e1,2); // checked
  double term3 = pow(((p1/QHV)+p0-y)/pow(((p1/QHV)+p0),2),2)*pow(e0,2); // checked
  return sqrt(term1+term2+term3);
}

TH1D *Get1DdBr(TGraphErrors *input, double p0, double p1) { 
  
  int n = input->GetN();

  TH1D *h1 = new TH1D("h1","h1", 100, -50, 50);

  for (int i_point = 0; i_point < n; i_point++) {

    h1->Fill(mm2ppm(input->GetY()[i_point], p0, p1));

  }

  return h1; //new TGraphErrors(n, x, y, ex, ey);

}

TH1D *Get1DBr(TGraphErrors *input, double BrBkg, double BrBkgErr, double p0, double p1) { 
  
  int n = input->GetN();

  TH1D *h1 = new TH1D("h1","h1", 18, 13, 22);//100, -50, 50);

  for (int i_point = 0; i_point < n; i_point++) {

    // Add the background field at zero point 
    h1->Fill(mm2ppm(input->GetY()[i_point], p0, p1)+BrBkg);

  }

  return h1; //new TGraphErrors(n, x, y, ex, ey);

}

TGraphErrors *GetDeltaBrVsRun(TGraphErrors *input, double p0, double e0, double p1, double e1, double sigma) { 
  
  int n = input->GetN();

  double x[n]; double ex[n];
  double y[n]; double ey[n];

  for (int i_point = 0; i_point < n; i_point++) { 

    x[i_point] = input->GetX()[i_point]; 
    ex[i_point] = 0.;
    
    // Add the background field at zero point 
    y[i_point] = mm2ppm( input->GetY()[i_point], p0, p1);
    ey[i_point] = mm2ppm_err(input->GetY()[i_point], input->GetErrorY(i_point), p0, e0, p1, e1);
    ey[i_point] = sqrt(pow(ey[i_point],2)+pow(mm2ppm(sigma, p0, p1),2));
  }

  return new TGraphErrors(n, x, y, ex, ey);

}

TGraphErrors *GetBrVsRun(TGraphErrors *input, double BrBkg, double BrBkgErr, double p0, double e0, double p1, double e1, double sigma) { 
  
  int n = input->GetN();

  double x[n]; double ex[n];
  double y[n]; double ey[n];

  for (int i_point = 0; i_point < n; i_point++) { 

    x[i_point] = input->GetX()[i_point]; 
    ex[i_point] = 0.;

    // Add the background field at zero point
    y[i_point] = mm2ppm( input->GetY()[i_point], p0, p1) + BrBkg;
    ey[i_point] = mm2ppm_err(input->GetY()[i_point], input->GetErrorY(i_point), p0, e0, p1, e1);
    ey[i_point] = sqrt(pow(ey[i_point],2)+pow(BrBkgErr,2)+pow(mm2ppm(sigma, p0, p1),2));
  }

  return new TGraphErrors(n, x, y, ex, ey);

}

tuple<double, double> GetDeltaBrEst(TGraphErrors *gr) { 

  int n = gr->GetN();

  double dBr = 0;
  double dBrErr = 0;

  for (int i_point = 0; i_point<n; i_point++) {

    dBr = dBr + gr->GetY()[i_point];
    dBrErr = sqrt( pow(gr->GetEY()[i_point], 2) + pow(dBrErr, 2) );
 
  }

  dBr = dBr / n;
  dBrErr = dBrErr / n;

  // Std dev
  double sigBr = 0;

  for (int i_point = 0; i_point<n; i_point++) sigBr += pow( (gr->GetY()[i_point] - dBr) , 2); 

  sigBr = sqrt(sigBr/n);
  double sigErrBr = sigBr / sqrt(2*n-2);
  // SE(σ)=σ√2N−2
  // https://faraday.physics.utoronto.ca/PVB/Harrison/ErrorAnalysis/ErrorInMean.html

  cout<<"\n**********************************\n\n**********************************\n"<<endl;
  cout<<"Delta Br = "<<dBr<<"±"<<dBrErr<<" ppm"<<endl;
  cout<<"sigma = "<<sigBr<<"±"<<sigErrBr<<" ppm"<<endl;
  cout<<"\n**********************************\n\n**********************************\n"<<endl;

  return make_tuple(dBr, dBrErr);

}

// Not needed really
tuple<double, double> GetBrEst(TGraphErrors *gr) { 

  int n = gr->GetN();

  double Br = 0;
  double BrErr = 0;

  for (int i_point = 0; i_point<n; i_point++) {

    Br = Br + gr->GetY()[i_point];
    BrErr = sqrt( pow(gr->GetEY()[i_point], 2) + pow(BrErr, 2) );
 
  }

  Br = Br / n;
  BrErr = BrErr / n;

  // Std dev
  double sigBr = 0;

  for (int i_point = 0; i_point<n; i_point++) sigBr += pow( (gr->GetY()[i_point] - Br) , 2); 

  sigBr = sqrt(sigBr/n);
  double sigErrBr = sigBr / sqrt(2*n-2);
  // SE(σ)=σ√2N−2
  // https://faraday.physics.utoronto.ca/PVB/Harrison/ErrorAnalysis/ErrorInMean.html

  cout<<"\n**********************************\n\n**********************************\n"<<endl;
  cout<<"Br = "<<Br<<"±"<<BrErr<<" ppm"<<endl;
  cout<<"sigma = "<<sigBr<<"±"<<sigErrBr<<" ppm"<<endl;
  cout<<"\n**********************************\n\n**********************************\n"<<endl;

  return make_tuple(Br, BrErr);

}

int main(int argc, char *argv[]) {

  // Get inputs
  // If you're getting a logic error it's because you haven't provided an argument 
  string dataset = argv[1];//"gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2";//argv[1];; //"gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2";//argv[1]; // "gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2";//argv[1];
  string config = "CaloBeamPos";

  // Read in y-positions
  cout<<"\n**********************************\nReading y-positions\n**********************************\n"<<endl;
  vector<string> runs = csvReader("../txt/"+dataset+".txt");

  string inputDir = "/pnfs/GM2/persistent/EDM/Data/Br/"+config+"/"+dataset;

  // Get calo avg y vs run 
  cout<<"\n**********************************\nGetting calo avg y vs run\n**********************************\n"<<endl;
  TGraphErrors *gr_AvgCaloYvsRun = GetAvgCaloYVsRun(runs, dataset, inputDir);

  // Get zero point
  cout<<"\n**********************************\nGetting zero point\n**********************************\n"<<endl;
  tuple<double, double> zeroPoint = make_tuple(74.310, 0.005); // GetZeroPoint();
  double zero = get<0>(zeroPoint); double zero_err = get<1>(zeroPoint);

  // Get y minus zero point
  cout<<"\n**********************************\nGetting delta y\n**********************************\n"<<endl;
  TGraphErrors *gr_deltaY = GetDeltaY(gr_AvgCaloYvsRun, zero, zero_err);
  DrawTGraphErrors(gr_deltaY, ";Run number;#Delta#LTy_{calo}#GT [mm]", "../Images/EstimateRadialField/deltaY_"+dataset+"_"+runs.at(0)+"_"+runs.at(runs.size()-1));
  TH1D *h_deltaY = GetDeltaY1D(gr_AvgCaloYvsRun, zero, zero_err);
  DrawHist(h_deltaY, ";#Delta#LTy_{calo}#GT [mm];Runs / 0.01 mm","../Images/EstimateRadialField/h_deltaY_"+dataset+"_"+runs.at(0)+"_"+runs.at(runs.size()-1));
  double dy_mean = h_deltaY->GetMean();

  cout<<"dy_mean\t"<<dy_mean<<" mm"<<endl;


  cout<<"\n**********************************\nGetting uncertainty on delta y\n**********************************\n"<<endl;
  // Is this really the stat error? 
  double dy_stat = h_deltaY->GetMeanError(); 
  double dy_align = GetCaloAlignError(dataset); 
  // Combining the error on the mean with the RMS? Really? 
  double dy_drift = h_deltaY->GetRMS();

  cout<<"dy_stat:\t"<<dy_stat<<" mm"<<endl;
  cout<<"dy_align:\t"<<dy_align<<" mm"<<endl;
  cout<<"dy_drift:\t"<<dy_drift<<" mm"<<endl;

  double err_dy = sqrt(pow(dy_stat,2)+pow(dy_align,2)+pow(dy_drift,2));
  cout<<"err_dy :\t"<<err_dy <<" mm"<<endl;

  // double dy_drift; 
  // Get conversion params
  cout<<"\n**********************************\nGetting conversion params\n**********************************\n"<<endl;
  tuple<double, double, double, double> conversionParams = GetConversionParams(); 
  double p0 = get<0>(conversionParams); double e0 = get<1>(conversionParams); 
  double p1 = get<2>(conversionParams); double e1 = get<3>(conversionParams); 

  double k = mm2ppm(1, p0, p1);
  double dk = mm2ppm_err(1,0,p0,e0,p1,e1); 

  cout<<"k = "<<k<<"±"<<dk<<endl;

  // Get background radial field
  cout<<"\n**********************************\nGetting Br background\n**********************************\n"<<endl;
  //tuple<double, double> BrB = GetBrBkg();
  double BrBkg = get<0>(GetBrBkg()); double BrBkgErr = get<1>(GetBrBkg());

  // Plot relative radial field plot
  cout<<"\n**********************************\nPlotting relative Br vs run\n**********************************\n"<<endl;

  double sigma = 0.;// 0.337; // RMS from Run4 2021 calo positions
  
  TGraphErrors *gr_dBr = GetDeltaBrVsRun(gr_deltaY, p0, e0, p1, e1, sigma);
  DrawTGraphErrors(gr_dBr, ";Run number;#Delta#LTB_{r}#GT [ppm]", "../Images/EstimateRadialField/deltaBrVsRun_"+dataset+"_"+runs.at(0)+"_"+runs.at(runs.size()-1));
  
  TH1D *h_dBr = Get1DdBr(gr_dBr, p0, p1); 

  tuple <double, double> dBrEst = GetDeltaBrEst(gr_dBr);

  double dBr = get<0>(dBrEst);//_dBr->GetMean();

  cout<<"dBr mean *** "<<dBr<<endl;
  double err_dBr = dBr * sqrt( pow((dk/k),2) + pow((err_dy/dy_mean),2)); 

  cout<<"err_dBr\t"<<err_dBr<<endl;

  double total_err = sqrt(pow(err_dBr,2)+pow(BrBkgErr,2));

  cout<<"total_err\t"<<total_err<<endl;

  // What's the point of this? 
 // tuple <double, double> dBrEst = GetDeltaBrEst(gr_dBr);

  // Plot absolute radial field plot
  cout<<"\n**********************************\nPlotting absolute Br vs run\n**********************************\n"<<endl;

  sigma = 0.;// 0.337; // RMS from Run4 2021 calo positions
  
  //double sigma_err = 0.003;
  
  TGraphErrors *gr_Br = GetBrVsRun(gr_deltaY, BrBkg, BrBkgErr, p0, e0, p1, e1, sigma);

  DrawTGraphErrors(gr_Br, ";Run number;#LTB_{r}#GT [ppm]", "../Images/EstimateRadialField/BrVsRun_"+dataset+"_"+runs.at(0)+"_"+runs.at(runs.size()-1));

  // Get estimate for Br including errors bars 
  tuple <double, double> BrEst = GetBrEst(gr_Br);
  vector<double> x = {1.5}; vector<double> ex = {0}; 
  vector<double> y = {get<0>(BrEst)}; vector<double> ey = {get<1>(BrEst)};
  TGraphErrors *gr_result = GenerateTGraphErrors(x, y, ex, ey);
  DrawTGraphErrors(gr_result, ";"+dataset+";B_{r} [ppm]", "../Images/EstimateRadialField/BrEst_"+dataset+"_"+runs.at(0)+"_"+runs.at(runs.size()-1));


  TH1D *h1_Br = Get1DBr(gr_deltaY, BrBkg, BrBkgErr, p0, p1);
  if(dataset=="gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2") h1_Br->GetYaxis()->SetRangeUser(-10,25);
  DrawTH1(h1_Br, ";#LTB_{r}#GT [ppm];Entries", "../Images/EstimateRadialField/hBr_"+dataset+"_"+runs.at(0)+"_"+runs.at(runs.size()-1));

  // Write to ROOT

  // Set output
  string outputName = "../Plots/radialFieldEstimationPlots_"+dataset+"_"+runs.at(0)+"_"+runs.at(runs.size()-1)+".root";
  TFile *output = new TFile( outputName.c_str(), "RECREATE");
  output->mkdir("CaloAverage"); output->mkdir("PerCalo"); //output->mkdir("PerCaloMeanSubtracted");
  output->cd("CaloAverage");
  gr_AvgCaloYvsRun->SetName("gr_AvgCaloYvsRun");
  gr_AvgCaloYvsRun->Write();
  gr_deltaY->SetName("gr_deltaY");
  gr_deltaY->Write();
  gr_Br->SetName("gr_Br");
  gr_Br->Write();
  gr_result->SetName("gr_BrEst");
  gr_result->Write();
  h1_Br->SetName("h1_Br");
  h1_Br->Write();

  output->Write();
  output->Close();

  cout<<"\n**********************************\nWritten plots to "<<outputName<<"\n**********************************\n"<<endl;

  return 0;

}

