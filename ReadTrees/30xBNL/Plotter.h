#ifndef Plotter_h
#define Plotter_h

#include "Reader.h"

#include "TH1.h"
#include "TH2.h"
#include "TFile.h"
#include "TString.h"
#include "TMath.h"
#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

class Plotter {

public:

  Plotter(TString file, TString output_name="");
  ~Plotter();

  void Run();
  void SetOutputName(TString name) { output_name = name;}

  bool NextTrEvent(){return tr->NextEvent();}
  void InitTrees(TString input_file);
  void InitHistos();
  void plot1D(TString name, int nbins, float xlow, float xhigh, TString xtitle="x axis", TString ytitle="", int col=1);  
  TH1* plot1DMaker(TString name, int nbins, float xlow, float xhigh, TString xtitle="x axis", TString ytitle="", int col=1);  
  TH2* plot2DMaker(TString name, int nbinsx, float xlow, float xhigh, int nbinsy, float ylow, float yhigh, TString xtitle="x axis", TString ytitle="", int col=1); 
  void Fill1D(TString name, double val, double weight=1);
  void plot2D(TString name, int xnbins, float xlow, float xhigh, int ynbins, float ylow, float yhigh, TString xtitle="x axis", TString ytitle="", int col=1);
  void Fill2D(TString name, double xval, double yval, double weight=1);

  std::vector<TH1*> plots1D;
  std::vector<TH2*> plots2D;

  TString output_name;

  //could add any number of readers here:
  trackerReader *tr;

};

#endif

//==============================================================================

#ifdef Plotter_C

Plotter::Plotter(TString input_file, TString output_file) : output_name(output_file) {

  InitTrees(input_file);
  
  InitHistos();

  // Keep this generic to avoid overwriting important stuff! Rename it when happy
  output_name="plots.root";
  
};

//----------------------------------

Plotter::~Plotter() {
  
  TFile * output_file = new TFile(output_name, "RECREATE");
  output_file->cd();
  
  for(int i=0; i<plots1D.size(); i++) {
    if(plots1D[i]->GetEntries()==0) cout <<"1D Plot not used: "<<plots1D[i]->GetName()<<endl;
    else plots1D[i]->Write();
  }
  for(int i=0; i<plots2D.size(); i++) {
    if(plots2D[i]->GetEntries()==0) cout <<"2D Plot not used: "<<plots2D[i]->GetName()<<endl;
    else plots2D[i]->Write();
  }
  
  output_file->Close();
  cout<<"Plots written to "<<output_file->GetName()<<endl;
  delete output_file;
  
  for(int i=0; i<plots1D.size(); i++) delete plots1D[i];
  for(int i=0; i<plots2D.size(); i++) delete plots2D[i];
  plots1D.clear();
  plots2D.clear();

}

void Plotter::plot1D(TString name, int nbins, float xlow, float xhigh, TString xtitle, TString ytitle, int col){
  plots1D.push_back(plot1DMaker(name, nbins, xlow, xhigh, xtitle, ytitle, col));
}

void Plotter::plot2D(TString name, int xnbins, float xlow, float xhigh, int ynbins, float ylow, float yhigh, TString xtitle, TString ytitle, int col){
  plots2D.push_back(plot2DMaker(name, xnbins, xlow, xhigh, ynbins, ylow, yhigh, xtitle, ytitle, col));
}

TH1 * Plotter::plot1DMaker(TString name, int nbins, float xlow, float xhigh, TString xtitle, TString ytitle, int col){
  TH1 * p = new TH1D(name, name, nbins, xlow, xhigh);
  p->Sumw2();
  p->SetDirectory(0);
  p->SetXTitle(xtitle);
  p->SetYTitle(ytitle);
  p->GetXaxis()->SetLabelSize(0.04);
  p->GetYaxis()->SetLabelSize(0.04);
  p->GetXaxis()->SetTitleOffset(1.2);
  p->GetYaxis()->SetTitleOffset(1.2);
  p->GetXaxis()->SetLabelFont(42);
  p->GetYaxis()->SetLabelFont(42);
  p->GetXaxis()->SetTitleFont(42);
  p->GetYaxis()->SetTitleFont(42);
  p->SetTitle(0);
  p->SetLineWidth(2);
  p->SetLineColor(col);
  p->SetMarkerColor(col);
  p->SetMarkerSize(1.5);
  return p;
}

TH2 * Plotter::plot2DMaker(TString name, int nbinsx, float xlow, float xhigh, int nbinsy, float ylow, float yhigh, TString xtitle, TString ytitle, int col){
  TH2 * p = new TH2D(name, name, nbinsx, xlow, xhigh, nbinsy, ylow, yhigh);
  p->Sumw2();
  p->SetDirectory(0);
  p->SetXTitle(xtitle);
  p->SetYTitle(ytitle);
  p->GetXaxis()->SetLabelSize(0.04);
  p->GetYaxis()->SetLabelSize(0.04);
  p->GetXaxis()->SetTitleOffset(1.2);
  p->GetYaxis()->SetTitleOffset(1.2);
  p->GetXaxis()->SetLabelFont(42);
  p->GetYaxis()->SetLabelFont(42);
  p->GetXaxis()->SetTitleFont(42);
  p->GetYaxis()->SetTitleFont(42);
  p->SetTitle(0);
  p->SetLineWidth(2);
  p->SetLineColor(col);
  p->SetMarkerColor(col);
  p->SetMarkerSize(1.5);
  return p;
}

//----------------------------------

void Plotter::Fill1D(TString name, double val, double weight) {
  for(int i=0; i<plots1D.size(); i++){
    if(name.CompareTo(plots1D[i]->GetName())) continue;
    plots1D[i]->Fill(val, weight);
    return;
  }
  cout<<"Plot1D "<<name<<" not found!"<<endl;
}

void Plotter::Fill2D(TString name, double xval, double yval, double weight) {
  for(int i=0; i<plots2D.size(); i++){
    if(name.CompareTo(plots2D[i]->GetName())) continue;
    plots2D[i]->Fill(xval, yval, weight);
    return;
  }
  cout<<"Plot2D "<<name<<" not found!"<<endl;
}


// Can call the Plotter with a list of files to read.
// Defaults to a single hard-coded file
// Will make a separate output file for each input file.

int main(int argc, char *argv[]){

  vector<TString> fileNames;
  
  if (argc < 2){
    cout<<"Using hard-coded file list"<<endl;

    fileNames.push_back("../../Trees/MC/30xBNL/simTree.30xBNL.truthT0truthLR.root");
  }
  
  for (int i = 1; i < argc; ++i){
    fileNames.push_back(argv[i]);
  }
  cout << "Reading a total of " << fileNames.size() << " files \n";
  for (int i = 0; i < fileNames.size(); ++i){
    //write out individual file for each input file
    Plotter *p = new Plotter(fileNames[i]);
    p->Run();
    delete p;
  }
  
  return 1;
}
  


#endif
