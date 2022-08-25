#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <numeric>
#include <sys/stat.h>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

using namespace std;

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

inline bool fileExists (const std::string& name) {
  struct stat buffer;   
  return (stat (name.c_str(), &buffer) == 0); 
}

void GetCaloYVsRun(vector<string> runs, string dataset, TFile *output) { 

  int n_calo = 24;

  // Values for calo avg

  // Hist of all cluster positions
  TH1D *h_yTot = new TH1D("h_yTot", "", 150, 0, 150);
  // Hist of run averages 
  TH1D *h_yRunAvg = new TH1D("h_yRunAvg", "", 15000, 0, 150);

  vector<double> xAvg_; vector<double> exAvg_;
  vector<double> yAvg_; vector<double> eyAvg_; 
  
  // y values for per calo
  vector<TH1D*> h_yCaloTot_;
  // Hist of run averages per calo
  vector<TH1D*> h_yCaloRunAvg_;
  // Hist of mean subtracted run averages per calo
  vector<TH1D*> h_yCaloMeanSubRunAvg_;

  for( int i_calo = 0; i_calo < n_calo; i_calo++) {
    TH1D *tmp1 = new TH1D(("h_yTot_"+to_string(i_calo+1)).c_str(), "", 150, 0, 150);
    h_yCaloTot_.push_back(tmp1);//new TH1D(("h_yTot_"+to_string(i_calo+1)).c_str(), "", 150, 0, 150));
    TH1D *tmp2 = new TH1D(("h_yRunAvg_"+to_string(i_calo+1)).c_str(), "", 15000, 0, 150);
    h_yCaloRunAvg_.push_back(tmp2);// = new TH1D(("h_yRunAvg_"+to_string(i_calo+1)).c_str(), "", 150, 0, 150);
    TH1D *tmp3 = new TH1D(("h_yMeanSubRunAvg_"+to_string(i_calo+1)).c_str(), "", 15000, -75, 75);
    h_yCaloMeanSubRunAvg_.push_back(tmp3);
  }

  vector<double> yCalo_[n_calo]; vector<double> eyCalo_[n_calo]; 
  vector<double> xCalo_[n_calo]; vector<double> exCalo_[n_calo];

  // Loop through runs 
  for( int i_run = 0; i_run < runs.size(); i_run++ ) {

    string run = runs.at(i_run);

    cout<<"\nProcessing run "<<run<<endl;

    // Sort datasets

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

    } else if (dataset=="Run4_2021" || dataset=="Run4_Jan") { 

      inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/Run4_Nearline_2021/caloBeamPositionPlots_"+run+".root";

    } else { 

      inputName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/"+dataset+"/caloBeamPositionPlots_"+run+".root";

    }

    cout<<"Found file \t"<<inputName<<endl;

    if(!fileExists(inputName)) {
      cout<<inputName<<" does not exist, skipping."<<endl;
      continue;
    }

    TFile *fin = TFile::Open(inputName.c_str());

    // Get calo avg 

    TH1D *hy = (TH1D*)fin->Get("CaloBeamPosition/clusterY");

    if(hy->GetMean()==0) {
      cout<<"Calo average Y for run "<<run<<" is zero, skipping run."<<endl;
      fin->Close();
      continue;
    }

    // Basic quality 
    if(hy->GetMean() < 70 || hy->GetMean() > 80 || hy->GetMeanError() >= 1) {
      fin->Close();
      continue;
    }

    h_yTot->Add(hy);
    h_yRunAvg->Fill(hy->GetMean());

    xAvg_.push_back(stod(run)); exAvg_.push_back(0);
    yAvg_.push_back(hy->GetMean()); eyAvg_.push_back(hy->GetMeanError());

    // Now run through calos

    for( int i_calo = 1; i_calo < n_calo+1; i_calo++ ) {

      // cout<<"\nProcessing calo "<<i_calo<<endl;

      TH1D *hy_calo = (TH1D*)fin->Get(("CaloBeamPosition/PerCalo/clusterY_"+to_string(i_calo)).c_str());

      if(hy_calo->GetMean()==0) {
        cout<<"!!!! Calo Y for run "<<run<<" is zero, breaking calo loop. !!!!"<<endl;
        break;
      }

      h_yCaloTot_.at(i_calo-1)->Add(hy_calo);
      h_yCaloRunAvg_.at(i_calo-1)->Fill(hy_calo->GetMean());

      xCalo_[i_calo-1].push_back(stod(run)); exCalo_[i_calo-1].push_back(0);
      yCalo_[i_calo-1].push_back(hy_calo->GetMean()); eyCalo_[i_calo-1].push_back(hy_calo->GetMeanError());

    }

    cout<<"\nFinished read for run, "<<run<<" closing file."<<endl;
    fin->Close();

  }

  // Plot calo avg
  output->cd("CaloAverage");
  TGraphErrors *grAvg = GenerateTGraphErrors(xAvg_, yAvg_, exAvg_, eyAvg_);

  // Get average stat error
  double avg_stat_error = 0;
  for(int i = 0; i<eyAvg_.size(); i++) avg_stat_error += eyAvg_.at(i);
  avg_stat_error = avg_stat_error/eyAvg_.size();
  cout<<"Mean stat error\t"<<avg_stat_error<<endl;

  DrawTGraphErrors(grAvg, ";Run number;#LTy_{All calos}#GT [mm]", "../Images/CaloY_vs_Run/AvgCaloYvsRun_"+dataset+"_"+runs.at(0)+"_"+runs.at(runs.size()-1));
  DrawTH1(h_yTot, ";y [mm];Clusters", "../Images/CaloY_vs_Run/h_yTot_"+dataset+"_"+runs.at(0)+"_"+runs.at(runs.size()-1));
  DrawTH1(h_yRunAvg, ";#LTy_{All calos}#GT [mm];Runs", "../Images/CaloY_vs_Run/h_yRunAvg_"+dataset+"_"+runs.at(0)+"_"+runs.at(runs.size()-1));
  
  grAvg->SetName("y_vs_run");
  h_yTot->SetName("h_yTot");
  h_yRunAvg->SetName("h_yRunAvg");

  grAvg->Write();
  h_yTot->Write();
  h_yRunAvg->Write();

  // Plot per calo 
  vector<string> caloNames_;
  vector<TGraphErrors*> caloGraphs_;
  vector<TGraphErrors*> caloGraphsMeanSub_;

  for( int i_calo = 1; i_calo < n_calo+1; i_calo++ ) {

    output->cd("PerCalo"); 

    caloNames_.push_back(("Calo "+to_string(i_calo)).c_str());

    TGraphErrors *grCalo = GenerateTGraphErrors(xCalo_[i_calo-1], yCalo_[i_calo-1], exCalo_[i_calo-1], eyCalo_[i_calo-1]);

    grCalo->Draw("AP*");

    caloGraphs_.push_back(grCalo);

    grCalo->SetName(("y_vs_run_"+to_string(i_calo)).c_str());
    h_yCaloTot_.at(i_calo-1)->SetName(("h_yCaloTot_"+to_string(i_calo)).c_str());
    h_yCaloRunAvg_.at(i_calo-1)->SetName(("h_yCaloRunAvg_"+to_string(i_calo)).c_str());
    grCalo->Write();
    h_yCaloTot_.at(i_calo-1)->Write();
    h_yCaloRunAvg_.at(i_calo-1)->Write();

    // Mean subtraction

    output->cd("PerCaloMeanSubtracted"); 

    double runAvg = accumulate( yCalo_[i_calo-1].begin(), yCalo_[i_calo-1].end(), 0.0) / yCalo_[i_calo-1].size();

    vector<double> yCaloMeanSub_; 

    for (int i = 0; i < yCalo_[i_calo-1].size(); i++) {
      double meanSub = yCalo_[i_calo-1].at(i) - runAvg;
      yCaloMeanSub_.push_back(meanSub);
      h_yCaloMeanSubRunAvg_.at(i_calo-1)->Fill(meanSub);
    }

    h_yCaloMeanSubRunAvg_.at(i_calo-1)->SetName(("h_yCaloMeanSubRunAvg_"+to_string(i_calo)).c_str());
    h_yCaloMeanSubRunAvg_.at(i_calo-1)->Write();

    TGraphErrors *grCaloMeanSub = GenerateTGraphErrors(xCalo_[i_calo-1], yCaloMeanSub_, exCalo_[i_calo-1], eyCalo_[i_calo-1]);  
    grCaloMeanSub->Draw("AP*");

    caloGraphsMeanSub_.push_back(grCaloMeanSub);
    
    grCaloMeanSub->SetName(("meanSub_y_vs_run_"+to_string(i_calo)).c_str());
    grCaloMeanSub->Write();

  }

  cout<<"Created all graphs for run. Overlaying."<<endl;

  // Now draw

  DrawManyTGraphErrors(caloGraphs_, caloNames_, ";Run number;#LTy_{Calo}#GT [mm]", "../Images/CaloY_vs_Run/PerCaloYvsRun_"+dataset+"_"+runs.at(0)+"_"+runs.at(runs.size()-1), 70, 80);
  DrawManyTGraphErrors(caloGraphsMeanSub_, caloNames_, ";Run number;Mean subtracted #LTy_{Calo}#GT [mm]", "../Images/CaloY_vs_Run/PerCaloMeanSubYvsRun_"+dataset+"_"+runs.at(0)+"_"+runs.at(runs.size()-1), -2.5, 2.5);

  // Overlay TH1s

  return;

} 

int main(int argc, char *argv[]) { //) { 

  string dataset = argv[1];//"gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2";//argv[1];//"gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2";//"Run4_Jan";//"Run4_2021";//l"Run4_Jan";//"Run4_2021"; // "Run4_Jan"; 

  string outputName = "../Plots/CaloY_vs_Run_"+dataset+".root";//+dataset+".root";

  TFile *output = new TFile( outputName.c_str(), "RECREATE");
  output->mkdir("CaloAverage"); output->mkdir("PerCalo"); output->mkdir("PerCaloMeanSubtracted");
 
  // Get runs 
  vector<string> runs = csvReader("../txt/"+dataset+".txt");

  // Run & plot
  // GetAvgCaloYVsRun(runs, dataset, output);
  GetCaloYVsRun(runs, dataset, output);

  cout<<"\nWritten plots to "<<outputName<<endl;

  return 0;

}

/// DUMP

/*

//TGraphErrors *GetAvgCaloYVsRun(vector<string> runs, string dataset) { //, string inputDir) {
//TGraphErrors *GeCaloYVsRun(vector<string> runs, string dataset, TFile *output) { //, string inputDir) {
void GetAvgCaloYVsRun(vector<string> runs, string dataset, TFile *output) { 

  vector<double> y_; vector<double> ey_;
  vector<double> x_; vector<double> ex_;

  for( int i_run = 0; i_run < runs.size(); i_run++ ) {

    string run = runs.at(i_run);

    string finName = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/Run4_Nearline_2021/caloBeamPositionPlots_"+run+".root";
    TFile *fin = TFile::Open((finName).c_str());

    cout<<"Got input file "<<finName<<" "<<fin<<endl;

    if(fin==0) continue;

    TH1D *hy = (TH1D*)fin->Get("CaloBeamPosition/clusterY");

    double y = hy->GetMean(); double ey = hy->GetMeanError();

    if(hy->GetMean()==0) {
      fin->Close();
      cout<<"Warning: run "+run+" has a mean y-position of zero. Skipping."<<endl;
      continue;
    }

    if(y < 70 || y > 80) continue;

    y_.push_back(y); ey_.push_back(ey);
    x_.push_back(std::stod(run)); ex_.push_back(0.);

    fin->Close();

  }

  // Create TGraph
  TGraphErrors *gr_avg = GenerateTGraphErrors(x_, y_, ex_, ey_);

  gr_avg->Draw("AP*");

  DrawTGraphErrors(gr_avg, ";Run number;#LTy_{All calos}#GT [mm]", "../Images/CaloY_vs_Run/AvgCaloYvsRun_"+dataset+"_"+runs.at(0)+"_"+runs.at(runs.size()-1));
  
  output->cd("CaloAverage");
  gr_avg->Write();

  return;

}


void GetPerCaloYVsRun(vector<string> runs, string dataset, TFile *output) { 

  vector<TGraphErrors*> caloGraphs_;
  vector<TGraphErrors*> caloGraphs_meanSub_;
  vector<string> caloNames_;
  int n_calo = 24;

  for( int i_calo = 1; i_calo < n_calo+1; i_calo++ ) {

    cout<<"\nProcessing calo "<<i_calo<<endl;

    vector<double> yCalo_; vector<double> eyCalo_; 
    vector<double> xCalo_; vector<double> exCalo_;

    for( int i_run = 0; i_run < runs.size(); i_run++ ) {

      string run = runs.at(i_run);
      string input = "/pnfs/GM2/persistent/EDM/Data/Br/CaloBeamPos/Run4_Nearline_2021/caloBeamPositionPlots_"+run+".root";
      TFile *fin = TFile::Open(input.c_str());

      TH1D *hy_calo = (TH1D*)fin->Get(("CaloBeamPosition/PerCalo/clusterY_"+to_string(i_calo)).c_str());

      if(hy_calo->GetMean()==0) {
        fin->Close();
        continue;
      }

      //double ymean = hy_calo->GetMean(); 
      //if(ymean < 70 || ymean > 80) continue;
      //cout<<"ymean\t"<<ymean<<endl;

      if(run=="38893") { 

        cout<<


      }

      yCalo_.push_back(hy_calo->GetMean()); eyCalo_.push_back(hy_calo->GetMeanError());
      xCalo_.push_back(std::stod(run)); exCalo_.push_back(0.);

      fin->Close();

    }

    double x_calo[n_calo]; double ex_calo[n_calo];
    double y_calo[n_calo]; double ey_calo[n_calo];

    double y_calo_mean_sub[n_calo];

    // Get calo mean 
    float average = 0.0f;
    //if ( n_calo != 0) 
    average = accumulate( yCalo_.begin(), yCalo_.end(), 0.0) / yCalo_.size();

    // Loop through runs again
    for( int i_run = 0; i_run < n_calo; i_run++ ) {

      x_calo[i_run] = xCalo_.at(i_run); ex_calo[i_run] = exCalo_.at(i_run);
      y_calo[i_run] = yCalo_.at(i_run); ey_calo[i_run] = eyCalo_.at(i_run);
      y_calo_mean_sub[i_run] = yCalo_.at(i_run) - average; 

      // cout<<"Avg\t"<<average<<endl;
      // cout<<"y\t"<<y_calo[i_run]<<endl;
      // cout<<"mean sub y\t"<<y_calo_mean_sub[i_run]<<endl;


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

    // Store in vectors for output
    caloGraphs_.push_back(gr_calo);
    caloGraphs_meanSub_.push_back(gr_calo_mean_sub);
    caloNames_.push_back(("Calo "+to_string(i_calo)).c_str());

  }


  // Now draw
  // void DrawTGraphErrorsDoubleXAxis(TGraphErrors *graph, std::string title, std::string axisTitle, std::string fname, double lo, double hi) {
  // void DrawManyTGraphErrors(std::vector<TGraphErrors*> graphs, std::vector<string> names, std::string title, std::string fname, double ymin, double ymax ) {
  DrawManyTGraphErrors(caloGraphs_, caloNames_, ";Run number;#LTy_{Calo}#GT [mm]", "../Images/CaloY_vs_Run/PerCaloYvsRun_"+dataset+"_"+runs.at(0)+"_"+runs.at(runs.size()-1), 72, 78);
  DrawManyTGraphErrors(caloGraphs_meanSub_, caloNames_, ";Run number;Mean subtracted #LTy_{Calo}#GT [mm]", "../Images/CaloY_vs_Run/PerCaloMeanSubYvsRun_"+dataset+"_"+runs.at(0)+"_"+runs.at(runs.size()-1), -.5, .5);


  return;// make_tuple(caloGraphs_, caloGraphs_meanSub_);



} 

*/
  

    
