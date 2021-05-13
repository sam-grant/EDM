#include <iostream>
#include <vector>

#include <fstream>
#include <string>
#include <fstream>
#include <vector>
#include <utility> 
#include <stdexcept> 
#include <sstream> 
#include <numeric>

#include "TFile.h"
#include "FancyDraw.h"
#include "TGraphErrors.h"
#include "TColor.h"
#include "TROOT.h"
#include "TDirectory.h"

#include "FancyDraw.h"

using namespace std;

// Read csv file of run, QHV, & Br
// vector<vector<string>> csvReader(string infile) {
vector<string> csvReader(string infile) {

  // Column
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

int main() {

  //string dataset = "Run1";
  //string dataset = "Run4_Jan";
  //string dataset = "run4";
  //string dataset = "Run3NW";
  string dataset = "Run2";

  string outputName = "../Plots/Data/RadialFieldEstimation/BeamYPosMonitoring/Results/run4.root";//+dataset+".root";
  TFile *output = new TFile( outputName.c_str(), "RECREATE");
  output->mkdir("CaloAverage"); output->mkdir("PerCalo"); output->mkdir("PerCaloMeanSubtracted");

  double ymin1; double ymax1; 
  double ymin2; double ymax2; 
  if(dataset=="Run1") {
    ymin1=73;
    ymax1=80;
    ymin2=-1.5;
    ymax2=1.5;
  } else if(dataset=="run4") { // "Run4_Jan") {
    ymin1=70;
    ymax1=80;
    ymin2=-15;
    ymax2=15;
  } else if(dataset=="Master") {
    ymin1=70;
    ymax1=80;
    ymin2=-15;
    ymax2=15;
  } else { 
    ymin1=70;
    ymax1=80;
    ymin2=-15;
    ymax2=15;
  }

  vector<string> runs = csvReader("../txt/CaloBeamPos/CurrentRunNumbers/"+dataset+".txt"); // ../txt/DatasetRunNumbers/CurrentRunNumbers_"+dataset+".txt");

  vector<double> y_; vector<double> ey_; 
  vector<double> x_; vector<double> ex_;

  cout<<"run,y,ey"<<endl;

  for( int i_run = 0; i_run < runs.size(); i_run++ ) {

    string run = runs.at(i_run);

    //string input = "../Plots/Data/RadialFieldEstimation/BeamYPosMonitoring/Input/"+dataset+"/y-pos_"+run+".root";
    string input = "../Plots/Data/RadialFieldEstimation/BeamYPosMonitoring/Input/Run4_Jan/y-pos_"+run+".root";

    TFile *fin = TFile::Open(input.c_str());

    if(fin==0) continue;

    TH1D *hy = (TH1D*)fin->Get("CaloBeamPosition/clusterY");

    double y = hy->GetMean(); double ey = hy->GetMeanError();
    if(hy->GetMean()==0) {
      fin->Close();
      continue;
    }

    if(y < 70 || y > 80) continue;

    y_.push_back(y); ey_.push_back(ey);
    x_.push_back(std::stod(run)); ex_.push_back(0.);

    cout<<run<<","<<y<<","<<ey<<endl;
  
    fin->Close();

  }

  int n = y_.size();

  double x[n]; double ex[n];
  double y[n]; double ey[n];

  for( int i_run = 0; i_run < n; i_run++ ) {

    x[i_run] = x_.at(i_run); ex[i_run] = ex_.at(i_run);
    y[i_run] = y_.at(i_run); ey[i_run] = ey_.at(i_run);

  }

  TGraphErrors *gr = new TGraphErrors(n, x, y, ex, ey);

  gr->GetYaxis()->SetRangeUser(ymin1, ymax1);  

  gr->Draw("AP*");

  output->cd("CaloAverage"); 
  gr->SetName("gr");
  gr->Write();

  DrawTGraphErrors(gr, ";Run number;#LTy_{Calo}#GT [mm]", "../Images/Data/RadialFieldEstimation/BeamYPosMonitoring/"+dataset+"/y-pos_"+runs.at(0)+"-"+runs.at(runs.size()-1));  

  // Get diff from zero point
  // Plot the mean with zero line drawn

  vector<TGraphErrors*> caloGraphs_; vector<TGraphErrors*> caloGraphs_meanSub_;
  vector<string> caloNames_;

  for( int i_calo = 1; i_calo < 25; i_calo++ ) {

    cout<<"\nProcessing calo "<<i_calo<<endl;

    vector<double> yCalo_; vector<double> eyCalo_; 
    vector<double> xCalo_; vector<double> exCalo_;

    for( int i_run = 0; i_run < runs.size(); i_run++ ) {

      string run = runs.at(i_run);
      //string input = "../Plots/Data/RadialFieldEstimation/BeamYPosMonitoring/Input/"+dataset+"/y-pos_"+run+".root";
      string input = "../Plots/Data/RadialFieldEstimation/BeamYPosMonitoring/Input/Run4_Jan/y-pos_"+run+".root";
      TFile *fin = TFile::Open(input.c_str());
      TH1D *hy_calo = (TH1D*)fin->Get(("CaloBeamPosition/PerCalo/clusterY_"+to_string(i_calo)).c_str());
      if(hy_calo->GetMean()==0) {
        fin->Close();
        continue;
      }

      double ymean = hy_calo->GetMean(); 
      if(ymean < 70 || ymean > 80) continue;
      //cout<<"ymean\t"<<ymean<<endl;

      yCalo_.push_back(ymean); eyCalo_.push_back(hy_calo->GetMeanError());
      xCalo_.push_back(std::stod(run)); exCalo_.push_back(0.);

      fin->Close();

    }

    int n_calo = yCalo_.size();

    double x_calo[n_calo]; double ex_calo[n_calo];
    double y_calo[n_calo]; double ey_calo[n_calo];
    double y_calo_mean_sub[n_calo];

    // Get calo mean 
    float average = 0.0f;
    if ( n_calo != 0) average = accumulate( yCalo_.begin(), yCalo_.end(), 0.0) / n_calo;

    for( int i_run = 0; i_run < n_calo; i_run++ ) {

      x_calo[i_run] = xCalo_.at(i_run); ex_calo[i_run] = exCalo_.at(i_run);
      y_calo[i_run] = yCalo_.at(i_run); ey_calo[i_run] = eyCalo_.at(i_run);
      y_calo_mean_sub[i_run] = yCalo_.at(i_run) - average; 


    }

    TGraphErrors *gr_calo = new TGraphErrors(n_calo, x_calo, y_calo, ex_calo, ey_calo);
    TGraphErrors *gr_calo_mean_sub = new TGraphErrors(n_calo, x_calo, y_calo_mean_sub, ex_calo, ey_calo);

    gr_calo->Draw("AP*");
    output->cd("PerCalo"); 
    gr_calo->SetName(("gr_"+to_string(i_calo)).c_str());
    gr_calo->Write();

    gr_calo_mean_sub->Draw("AP*");

    output->cd("PerCaloMeanSubtracted");
    gr_calo_mean_sub->SetName(("gr_"+to_string(i_calo)).c_str());
    gr_calo_mean_sub->Write();

    caloGraphs_.push_back(gr_calo);
    caloGraphs_meanSub_.push_back(gr_calo_mean_sub);
    caloNames_.push_back("Calo "+to_string(i_calo));

    cout<<"Done"<<endl;

  }

  DrawManyTGraphErrors(caloGraphs_, caloNames_, ";Run number;#LTy_{Calo}#GT [mm]", "../Images/Data/RadialFieldEstimation/BeamYPosMonitoring/"+dataset+"/y-pos_calos_"+runs.at(0)+"-"+runs.at(runs.size()-1), ymin1, ymax1); 
  DrawManyTGraphErrors(caloGraphs_meanSub_, caloNames_, ";Run number;Mean subtracted #LTy_{Calo}#GT [mm]", "../Images/Data/RadialFieldEstimation/BeamYPosMonitoring/"+dataset+"/y-pos_calos_meanSub_"+runs.at(0)+"-"+runs.at(runs.size()-1), ymin2, ymax2); 

  output->Write();
  output->Close();

  cout<<"\nWritten plots to ROOT file\n"<<outputName<<"\n"<<output<<endl;

  return 0;

}
