#include <iostream>
#include <vector>
#include <string>

#include "TFile.h"
#include "TTreeReader.h"
#include "TH1D.h"
#include "TH2D.h"

using namespace std;

void ReadTree(string input, string output) {

   // ++++++++++++++ Open tree and load branches ++++++++++++++

   // Get file
   TFile *f1 = TFile::Open(input.c_str());//"TestTrees/gm2nearline_hists_run34888_00270.root");
   cout<<"\nOpened tree:\t"<<input<<" "<<f1<<endl;

   // Get reader for tree
   TTreeReader treeReader("nearlineHistTree/eventTree",f1);

   // Get branches
   TTreeReaderValue<unsigned int> runNum(treeReader,"runNum");
   TTreeReaderValue<unsigned int> subRunNum(treeReader,"subRunNum");
   TTreeReaderValue<unsigned int> eventNum(treeReader,"eventNum");
   TTreeReaderValue<unsigned int> ctag(treeReader,"ctag");
   TTreeReaderValue<vector<int>> caloNum(treeReader,"caloNum");
   TTreeReaderValue<std::vector<double>> energy(treeReader,"energy");
   TTreeReaderValue<std::vector<double>> times(treeReader,"time");
   TTreeReaderValue<std::vector<double>> x(treeReader,"x");
   TTreeReaderValue<std::vector<double>> y(treeReader,"y");


   // ++++++++++++++ Book histograms ++++++++++++++

   // All calos
   TH2D *hxy = new TH2D("hxy", ";x [mm];y [mm]", 225, 0, 225, 150, 0, 150);
   TH1D *hy = new TH1D("hy", ";y [mm];Clusters", 150, 0, 150);

   // Individual calos
   vector<TH1D *> hy_calos;
   for(int i_calo = 0; i_calo < 24; i_calo++) {
      TH1D *hy_tmp = (TH1D*) hy->Clone();
      hy_tmp->SetName( ("hy_"+to_string(i_calo+1)).c_str() );
      hy_calos.push_back(hy_tmp);
   }

   // ++++++++++++++ Loop thro events ++++++++++++++

   unsigned int tot_ctag = 0;
   unsigned int tot_ctag_check = 0;

   while (treeReader.Next()){

      //unsigned int ctag = ctag*;
      tot_ctag = tot_ctag + *ctag;

      // Get leaves
      vector<int> caloNum_ = *caloNum;
      vector<double> x_ = *x;
      vector<double> y_ = *y;
      vector<double> energy_ = *energy;
      vector<double> times_ = *times;

      // Number of clusters in this fill
      int nClu = caloNum_.size(); 

      // Loop through clusters
      for(int i_clu = 0; i_clu < nClu; i_clu++) { 

         // Get cluster level variables
         int caloNum =  caloNum_.at(i_clu);
         double xmm = x_.at(i_clu) * 25;
         double ymm = y_.at(i_clu) * 25; 
         double energy = energy_.at(i_clu);
         double time = times_.at(i_clu);

         // Apply CTAG cuts
         if(energy > 1700 && energy < 6000 && time > 24000) {

            tot_ctag_check++;

            // Fill y-position for all calos
            hxy->Fill(xmm, ymm);
            hy->Fill(ymm);
            // Fill y-position for individual calos
            hy_calos.at(caloNum-1)->Fill(ymm);


         }

      }
      
   }

   // ++++++++++++++ Draw sanity plots ++++++++++++++

   /*// use fancy draw
   TCanvas *c1 = new TCanvas("c1","c1",800,600);
   gStyle->SetOptStat(2210);
   hy->Draw("HIST");
   c1->SaveAs("Images/hy.png");

   TCanvas *c2 = new TCanvas("c2","c2",800,600);
   gStyle->SetOptStat(2210);
   hy_calos.at(0)->Draw("HIST");
   c2->SaveAs("Images/hy_1.png");

   TCanvas *c3 = new TCanvas("c3","c3",800,600);
   gStyle->SetOptStat(0);
   gStyle->SetPalette(55);
   hxy->Draw("COLZ");
   c3->SaveAs("Images/hxy.png");*/

   // ++++++++++++++ Write to file ++++++++++++++

   TFile *f2 = new TFile(output.c_str(), "RECREATE");
   hy->Write();
   f2->cd(); f2->mkdir("PerCalo"); f2->cd("PerCalo");
   for(int i_calo = 0; i_calo < hy_calos.size(); i_calo++) hy_calos.at(i_calo)->Write();
   f2->Close();

   cout<<"\nMean y-position:\t"<<hy->GetMean()<<"+/-"<<hy->GetMeanError()<<endl;
   cout<<"Total ctags:\t"<<tot_ctag<<endl;
   cout<<"Total ctags check:\t"<<tot_ctag_check<<endl;

   cout<<"\nWritten histograms to:\t"<<output<<" "<<f2<<endl;

   f1->Close();
   f2->Close();

   return;

}

int main() {

   // TODO: Can we take file list input? EDIT: Better just to hadd them I think

   // Take command line input for the fit mode
   string runNum;
   cout << "Input run-number";
   cin >> runNum;

   // Change this to merged hists 
   string input = "../Trees/Data/RadialFieldScan_1/"+runNum+"/gm2nearline_hists_run"+runNum+"_00155.root";
   string output = "../Plots/Data/RadialFieldScan_1/"+runNum+"/y-pos.root";

   ReadTree(input, output);

   // TODO: Write a seperate macro to produce the results

   return 0;
}

 /*

  // Take command line input for the fit mode
  string fitName;
  string fitMode;
  cout << "Select fit mode: '1' (SingleGaus) '2' (DoubleGaus) '3' (LanGaus)\n";
  cin >> fitName;
  if (fitName == "1") {
    fitMode = "SingleGaus";
    cout << "Using fitMode: "<< fitMode << "\nStarting\n" << endl; 
  } else if(fitName == "2") {
    fitMode = "DoubleGaus";
    cout << "Using fitMode: "<< fitMode << "\nStarting\n" << endl;
  } else if(fitName == "3") {
    fitMode = "LanGaus";
    cout << "Using fitMode: "<< fitMode << "\nStarting\n" << endl;
  } else {
    cout<<"Invalid fitmode, stopping"<<endl;
    exit(0);
  }

  */
