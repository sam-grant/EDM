#include <iostream>

#include "TFile.h"
#include "FancyDraw.h"

using namespace std;

// Read histograms, produce tuple of y, yerr
void ReadYPos(string input, string title, string output) { 

  // ++++++++++++++ Open tree and load branches ++++++++++++++

  // Get file
  TFile *f1 = TFile::Open(input.c_str());
  cout<<"\nOpened file:\t"<<input<<" "<<f1<<endl;

  vector<TH1D *> hy_calos;

  vector<double> yPos; vector<double> eyPos;

  TH1D *hy = (TH1D*)f1->Get("hy");

  DrawTH1(hy, title.c_str(), output.c_str());

  return;

}

int main(int argc, char *argv[]) {

	string run = argv[1]; 
	cout << "Running\t" <<run<<endl;

	const string study = "BeamYPosMonitoring"; // ClosedOrbit"; // "RadialFieldScan_1" "RadialFieldScan_1"
   	const string stage = "raw"; // "reprocessed"

	string input = "/Users/samuelgrant/Documents/gm2/EDM/Plots/Data/"+study+"/"+stage+"/y-pos_"+run+".root";
	string output = "/Users/samuelgrant/Documents/gm2/EDM/Images/Data/"+study+"/"+stage+"/y-pos_"+run;

	string title = "Run "+run+";#LTy#GT [mm];Entries";

	ReadYPos(input, title, output);

	return 0;
}