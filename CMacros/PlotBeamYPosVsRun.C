#include <iostream>
#include <vector>

#include <fstream>
#include <string>
#include <fstream>
#include <vector>
#include <utility> 
#include <stdexcept> 
#include <sstream> 

#include "TFile.h"
#include "FancyDraw.h"
#include "TGraphErrors.h"
#include "TColor.h"
#include "TROOT.h"

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

        while(ss >> val){

            //cout<<val<<endl;

            //if(val > 38071) continue;

            result.push_back(to_string(val));
            
        }

        // Store the row vectors in a vector of vectors

    }

    // Close file
    myFile.close();

    return result;

}

void DrawPlot(TGraphErrors *graph, std::string title, std::string axisTitle, std::string fname, double lo, double hi) {

  TCanvas *c = new TCanvas("c","c",800,600);

  //c->SetLeftMargin(0.15);

  graph->SetTitle(title.c_str());
  graph->GetXaxis()->SetTitleSize(.04);
  graph->GetYaxis()->SetTitleSize(.04);
  graph->GetXaxis()->SetTitleOffset(1.1);
  graph->GetYaxis()->SetTitleOffset(1.20);
  graph->GetXaxis()->CenterTitle(true);
  graph->GetYaxis()->CenterTitle(true);
  graph->GetYaxis()->SetMaxDigits(4);
  graph->SetMarkerStyle(20); //  Full circle
  graph->Draw("AP");

//  gPad->Update();
//
//  TGaxis *axis = new TGaxis(gPad->GetUxmin(),gPad->GetUymax(),gPad->GetUxmax(),gPad->GetUymax(),lo,hi,510,"-");
//  axis->SetTitle(axisTitle.c_str());
//  axis->SetTitleOffset(1.1);
//  axis->CenterTitle(true);
//  axis->SetTextFont(42);
//  axis->SetLabelFont(42);
//  axis->SetTextColor(kRed);
//  axis->SetLabelColor(kRed);
//  axis->SetLineColor(kRed);
//  axis->Draw("same");
//
//  // Get zero line
//
//  double zero = (graph->GetFunction("zeroLine"))->GetParameter(0);
//  cout<<"zero\t"<<zero<<endl;
//  TF1 *zeroLine = new TF1("zeroLineCopy", "[0]", gPad->GetUxmin(), gPad->GetUxmax());
//  zeroLine->SetParameter(0, zero);//o
//  zeroLine->SetLineStyle(2); 
//  zeroLine->SetLineWidth(3);
//  zeroLine->SetLineColor(kBlack);
//  zeroLine->Draw("same");
//
//  TPaveText *zeroText = new TPaveText(38310,zero+0.005,38510,zero+0.055);
//  zeroText->SetTextAlign(13);
//  zeroText->AddText("#minus0.742#pm0.475 ppm"); 
//  zeroText->SetTextSize(18); // 26
//  zeroText->SetTextFont(44);
//  zeroText->SetFillColor(0);
//  zeroText->Draw("same");
//
//  double shift1 = (graph->GetFunction("shiftLine1"))->GetParameter(0);
//  TF1 *shiftLine1 = new TF1("shiftLine1Copy", "[0]", gPad->GetUxmin(), gPad->GetUxmax());
//  shiftLine1->SetParameter(0, shift1);//o
//  shiftLine1->SetLineStyle(2); 
//  shiftLine1->SetLineWidth(3);
//  shiftLine1->SetLineColor(kRed);
//  shiftLine1->Draw("same");
//
//  TPaveText *shiftText1 = new TPaveText(38310,shift1+0.005,38510,shift1+0.055);
//  shiftText1->AddText("0.905#pm0.476 ppm");
//  shiftText1->SetTextAlign(13);
//  shiftText1->SetTextSize(18); // 26
//  shiftText1->SetTextFont(44);
//  shiftText1->SetFillColor(0);
//  shiftText1->SetTextColor(kRed);
//  shiftText1->Draw("same");
//
//  TLine *quench = new TLine(38800, gPad->GetUymin(), 38800, gPad->GetUymax());
//  quench->SetLineStyle(2); 
//  quench->SetLineWidth(3);
//  quench->SetLineColor(kBlue);
//  quench->Draw("same");
//
//  TPaveText *quenchText1 = new TPaveText(38805,74.82+0.005,38870,74.82+0.055);
//  quenchText1->AddText("Quench");
//  quenchText1->SetTextAlign(13);
//  quenchText1->SetTextSize(18); // 26
//  quenchText1->SetTextFont(44);
//  quenchText1->SetFillColor(0);
//  quenchText1->SetTextColor(kBlue);
//  quenchText1->Draw("same");

  //c->SetGridx();

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}

void DrawPlotCalo(TGraphErrors *graph, std::string title, std::string axisTitle, std::string fname, double lo, double hi) {

  TCanvas *c = new TCanvas("c","c",800,600);

  //c->SetLeftMargin(0.15);

  graph->SetTitle(title.c_str());
  graph->GetXaxis()->SetTitleSize(.04);
  graph->GetYaxis()->SetTitleSize(.04);
  graph->GetXaxis()->SetTitleOffset(1.1);
  graph->GetYaxis()->SetTitleOffset(1.20);
  graph->GetXaxis()->CenterTitle(true);
  graph->GetYaxis()->CenterTitle(true);
  graph->GetYaxis()->SetMaxDigits(4);
  graph->SetMarkerStyle(20); //  Full circle
  graph->Draw("AP");

  gPad->Update();

  TGaxis *axis = new TGaxis(gPad->GetUxmin(),gPad->GetUymax(),gPad->GetUxmax(),gPad->GetUymax(),lo,hi,510,"-");
  axis->SetTitle(axisTitle.c_str());
  axis->SetTitleOffset(1.1);
  axis->CenterTitle(true);
  axis->SetTextFont(42);
  axis->SetLabelFont(42);
  axis->SetTextColor(kRed);
  axis->SetLabelColor(kRed);
  axis->SetLineColor(kRed);
  axis->Draw("same");

  // Get zero line

  double zero = (graph->GetFunction("zeroLine_calo"))->GetParameter(0);
  TF1 *zeroLine = new TF1("zeroLineCopy", "[0]", gPad->GetUxmin(), gPad->GetUxmax());
  zeroLine->SetParameter(0, zero);//o
  zeroLine->SetLineStyle(2); 
  zeroLine->SetLineWidth(3);
  zeroLine->SetLineColor(kBlack);
  zeroLine->Draw("same");

  TPaveText *zeroText = new TPaveText(38310,zero+0.005,38510,zero+0.055);
  zeroText->SetTextAlign(13);
  zeroText->AddText("#minus0.742#pm0.475 ppm"); 
  zeroText->SetTextSize(18); // 26
  zeroText->SetTextFont(44);
  zeroText->SetFillColor(0);
  zeroText->Draw("same");

  double shift1 = (graph->GetFunction("shiftLine1_calo"))->GetParameter(0);
  TF1 *shiftLine1 = new TF1("shiftLine1Copy", "[0]", gPad->GetUxmin(), gPad->GetUxmax());
  shiftLine1->SetParameter(0, shift1);//o
  shiftLine1->SetLineStyle(2); 
  shiftLine1->SetLineWidth(3);
  shiftLine1->SetLineColor(kRed);
  shiftLine1->Draw("same");

  TPaveText *shiftText1 = new TPaveText(38310,shift1+0.005,38510,shift1+0.055);
  shiftText1->AddText("0.905#pm0.476 ppm");
  shiftText1->SetTextAlign(13);
  shiftText1->SetTextSize(18); // 26
  shiftText1->SetTextFont(44);
  shiftText1->SetFillColor(0);
  shiftText1->SetTextColor(kRed);
  shiftText1->Draw("same");

  TLine *quench = new TLine(38800, gPad->GetUymin(), 38800, gPad->GetUymax());
  quench->SetLineStyle(2); 
  quench->SetLineWidth(3);
  quench->SetLineColor(kBlue);
  quench->Draw("same");

  TPaveText *quenchText1 = new TPaveText(38805,74.82+0.005,38870,74.82+0.055);
  quenchText1->AddText("Quench");
  quenchText1->SetTextAlign(13);
  quenchText1->SetTextSize(18); // 26
  quenchText1->SetTextFont(44);
  quenchText1->SetFillColor(0);
  quenchText1->SetTextColor(kBlue);
  quenchText1->Draw("same");

  //c->SetGridx();

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}

void DrawManyTGraphErrors2(std::vector<TGraphErrors*> graphs, std::vector<string> names, std::string title, std::string axisTitle, std::string fname, double ymin, double ymax, double lo, double hi ) {

  TCanvas *c = new TCanvas("c","c",800,600);
  c->SetRightMargin(0.20);

  TLegend *l = new TLegend(0.81,0.15,0.99,0.85);
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

  gStyle->SetPalette(kBird);// kOcean);//RainBow);//VisibleSpectrum);

  for(int i = 0; i < nGraphs; i++) {
    graphs.at(i)->SetMarkerStyle(20);
    l->AddEntry(graphs.at(i), (names.at(i)).c_str());

      if(i==0) graphs.at(i)->Draw("AP PLC PMC");
      else if(i==4) {
        graphs.at(i)->SetMarkerColor(kRed);
        graphs.at(i)->SetLineColor(kRed);
        graphs.at(i)->Draw("P SAME"); }
      else graphs.at(i)->Draw("P PLC PMC SAME");
  }

//  gPad->Update();
//
//  TGaxis *axis = new TGaxis(gPad->GetUxmin(),gPad->GetUymax(),gPad->GetUxmax(),gPad->GetUymax(),lo,hi,510,"-");
//  axis->SetTitle(axisTitle.c_str());
//  axis->SetTitleOffset(1.1);
//  axis->CenterTitle(true);
//  axis->SetTextFont(42);
//  axis->SetLabelFont(42);
//  axis->SetTextColor(kBlue);//Red);
//  axis->SetLabelColor(kBlue);//Red);
//  axis->SetLineColor(kBlue);
//  axis->Draw("same");
//
//
//  TLine *quench = new TLine(38800, gPad->GetUymin(), 38800, gPad->GetUymax());
//  quench->SetLineStyle(2); 
//  quench->SetLineWidth(3);
//  quench->SetLineColor(kRed);
//  quench->Draw("same");
//
//  TPaveText *quenchText1 = new TPaveText(38805,71.5+0.005,38870,71.5+0.055);
//  quenchText1->AddText("Quench");
//  quenchText1->SetTextAlign(13);
//  quenchText1->SetTextSize(15); // 26
//  quenchText1->SetTextFont(44);
//  quenchText1->SetFillColor(0);
//  quenchText1->SetTextColor(kRed);
//  quenchText1->Draw("same");
//
//  TLine *dump = new TLine(38977, gPad->GetUymin(), 38977, gPad->GetUymax());
//  dump->SetLineStyle(2); 
//  dump->SetLineWidth(3);
//  dump->SetLineColor(kRed);
//  dump->Draw("same");
//
//  TPaveText *dumpText1 = new TPaveText(38982,71.5+0.005,38982+65,71.5+0.055);
//  dumpText1->AddText("Dump");
//  dumpText1->SetTextAlign(13);
//  dumpText1->SetTextSize(15); // 26
//  dumpText1->SetTextFont(44);
//  dumpText1->SetFillColor(0);
//  dumpText1->SetTextColor(kRed);
//  dumpText1->Draw("same");

  l->Draw("same");
  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}

int main() {

  // string dataset = "Run4_Jan";
  string dataset = "Run1";

  // Get file list

  // vector<string> runs = csvReader("../txt/DatasetRunNumbers/CurrentRunNumbers_"+dataset+".txt");
  vector<string> runs = csvReader("../txt/"+dataset+".txt");

  vector<double> y_; vector<double> ey_; 
  vector<double> x_; vector<double> ex_;

  cout<<"run,y,ey"<<endl;

  for( int i_run = 0; i_run < runs.size(); i_run++ ) {

    string run = runs.at(i_run);

    string input = "../Plots/Data/RadialFieldEstimation/BeamYPosMonitoring/"+dataset+"/y-pos_"+run+".root";

    TFile *fin = TFile::Open(input.c_str());

    if(fin==0) continue;

    TH1D *hy = (TH1D*)fin->Get("CaloBeamPosition/clusterY");

    double y = hy->GetMean(); double ey = hy->GetMeanError();
    if(hy->GetMean()==0) {
      fin->Close();
      continue;
    }

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

  //gr->GetXaxis()->SetRangeUser(38881, 39100);  
  DrawPlot(gr, ";Run number;#LTy_{Calo}#GT [mm]", "Day of Jan 2021", "../Images/Data/RadialFieldEstimation/BeamYPosMonitoring/"+dataset+"/y-pos_"+runs.at(0)+"-"+runs.at(runs.size()-1), 1., 31.);  

  // Now draw / calo

  vector<TGraphErrors*> caloGraphs_;
  vector<string> caloNames_;

  for( int i_calo = 1; i_calo < 25; i_calo++ ) {

    cout<<"\nProcessing calo "<<i_calo<<endl;

    vector<double> yCalo_; vector<double> eyCalo_; 
    vector<double> xCalo_; vector<double> exCalo_;

    for( int i_run = 0; i_run < runs.size(); i_run++ ) {

      string run = runs.at(i_run);
      string input = "../Plots/Data/RadialFieldEstimation/BeamYPosMonitoring/"+dataset+"/y-pos_"+run+".root";
      TFile *fin = TFile::Open(input.c_str());
      TH1D *hy_calo = (TH1D*)fin->Get(("CaloBeamPosition/PerCalo/clusterY_"+to_string(i_calo)).c_str());
      if(hy_calo->GetMean()==0) {
        fin->Close();
        continue;
      }

      yCalo_.push_back(hy_calo->GetMean()); eyCalo_.push_back(hy_calo->GetMeanError());
      xCalo_.push_back(std::stod(run)); exCalo_.push_back(0.);

      fin->Close();

    }

    int n_calo = yCalo_.size();

    double x_calo[n_calo]; double ex_calo[n_calo];
    double y_calo[n_calo]; double ey_calo[n_calo];

    for( int i_run = 0; i_run < n_calo; i_run++ ) {

      x_calo[i_run] = xCalo_.at(i_run); ex_calo[i_run] = exCalo_.at(i_run);
      y_calo[i_run] = yCalo_.at(i_run); ey_calo[i_run] = eyCalo_.at(i_run);

    }

    TGraphErrors *gr_calo = new TGraphErrors(n_calo, x_calo, y_calo, ex_calo, ey_calo);
    caloGraphs_.push_back(gr_calo);
    caloNames_.push_back("Calo "+to_string(i_calo));

    cout<<"Done"<<endl;

  }

  DrawManyTGraphErrors2(caloGraphs_, caloNames_, ";Run number;#LTy_{Calo}#GT [mm]", "Day of Jan 2021", "../Images/Data/RadialFieldEstimation/BeamYPosMonitoring/"+dataset+"/y-pos_calos_"+runs.at(0)+"-"+runs.at(runs.size()-1), 70, 80, 1., 31.); 


  return 0;

}