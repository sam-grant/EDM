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


int main() {

  // Get file list
  vector<string> runs = csvReader("../txt/BeamPosRuns.txt");

  const int n = runs.size();

  double x[n]; double zeros[n];
  double y[n]; double ey[n];

  for( int i_run = 0; i_run < n; i_run++ ) {

    string run = runs.at(i_run);

    //if(std::stod(run) > 38071) continue; // only so many managed to copy

    string input = "../Plots/Data/BeamYPosMonitoring/raw/y-pos_"+run+".root";

    TFile *fin = TFile::Open(input.c_str());
    cout<<"\nOpened file:\t"<<input<<" "<<fin<<endl;

    TH1D *hy = (TH1D*)fin->Get("hy");

    x[i_run] = std::stod(run); zeros[i_run] = 0.;

    y[i_run] = hy->GetMean(); ey[i_run] = hy->GetMeanError();

    fin->Close();

  }


  TGraphErrors *gr = new TGraphErrors(n, x, y, zeros, ey);
  gr->GetYaxis()->SetRangeUser(74.5,74.9);
 // gr->GetXaxis()->SetRangeUser()
  DrawTGraphErrors(gr, ";Run number;#LTy#GT [mm]", "../Images/Data/BeamYPosMonitoring/raw/y-pos_"+runs.at(0)+"-"+runs.at(n-1));
  gr->GetXaxis()->SetRangeUser(38630,38730);
  DrawTGraphErrors(gr, ";Run number;#LTy#GT [mm]", "../Images/tmp");



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