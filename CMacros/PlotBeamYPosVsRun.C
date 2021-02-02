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

  double zero = (graph->GetFunction("zeroLine"))->GetParameter(0);
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

  double shift1 = (graph->GetFunction("shiftLine1"))->GetParameter(0);
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


int main() {

  // Get file list
  vector<string> runs = csvReader("../txt/BeamPosRuns.txt");

  vector<double> y_; vector<double> ey_; 
  vector<double> x_; vector<double> ex_;

  for( int i_run = 0; i_run < runs.size(); i_run++ ) {

    string run = runs.at(i_run);
    string input = "../Plots/Data/BeamYPosMonitoring/raw/y-pos_"+run+".root";

    TFile *fin = TFile::Open(input.c_str());

    TH1D *hy = (TH1D*)fin->Get("hy");
    double y = hy->GetMean();
    if(hy->GetMean()==0) {
      fin->Close();
      continue;
    }

    y_.push_back(y); ey_.push_back(hy->GetMeanError());
    x_.push_back(std::stod(run)); ex_.push_back(0.);

    //if(y < 74.9 && y > 74.5) cout<<"Run\t"<<run<<endl;
  
    fin->Close();

  }

  const int n = y_.size();

  double x[n]; double ex[n];
  double y[n]; double ey[n];

  for( int i_run = 0; i_run < n; i_run++ ) {

    x[i_run] = x_.at(i_run); ex[i_run] = ex_.at(i_run);
    y[i_run] = y_.at(i_run); ey[i_run] = ey_.at(i_run);

  }


  TGraphErrors *gr = new TGraphErrors(n, x, y, ex, ey);
  // Fit pol0 to runs 37970 thro 
  TF1 *zeroLine = new TF1("zeroLine", "[0]", 37970, 38293);
  // Fit without drawing
  gr->Fit(zeroLine, "0R");

  TF1 *shiftLine1 = new TF1("shiftLine1", "[0]", 38951, 39100);
  // Fit without drawing
  gr->Fit(shiftLine1, "0R+");


  gr->GetYaxis()->SetRangeUser(74.5,74.9);
  //gr->GetXaxis()->SetRangeUser(38881, 39100);  
  DrawPlot(gr, ";Run number;#LTy_{Calo}#GT [mm]", "Day of Jan 2021", "../Images/Data/BeamYPosMonitoring/raw/y-pos_"+runs.at(0)+"-"+runs.at(n-1), 1., 31.);
  


  // void DrawTGraphErrorsDoubleXAxis(TGraphErrors *graph, std::string title, std::string axisTitle, std::string fname, double lo, double hi) {
  //DrawTGraphErrorsDoubleXAxis()
  //gr->GetXaxis()->SetRangeUser(38630,39101);
  // DrawTGraphErrors(gr, ";Run number;#LTy_{Calo}#GT [mm]", "../Images/tmp");



/*
	cout << "Running\t" <<run<<endl;

	const string study = "BeamYPosMonitoring"; // ClosedOrbit"; // "RadialFieldScan_1" "RadialFieldScan_1"
   	const string stage = "raw"; // "reprocessed"

	string input = "/Users/samuelgrant/Documents/gm2/EDM/Plots/Data/"+study+"/"+stage+"/y-pos_"+run+".root";
	string output = "/Users/samuelgrant/Documents/gm2/EDM/Images/Data/"+study+"/"+stage+"/y-pos_"+run;

	string title = "Run "+run+";#LTy#GT [mm];Entries";

	ReadYPos(input, title, output);*/

	return 0;
}