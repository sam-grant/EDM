// Read ROOT trees 
// Sam Grant

#include <iostream>
#include <vector>

#include "Plotter.h"
#include "TFile.h"
#include "TTree.h"
#include "TTreeReader.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TMath.h"

using namespace std;

double omegaAMagic = 0.00143934; // from gm2geom consts / kHz 
double g2Period = (2*TMath::Pi()/omegaAMagic) * 1e-3; // 4.3653239 us
double mMu = 105.6583715; // MeV
double aMu = 11659208.9e-10; 
double gmagic = std::sqrt( 1.+1./aMu );
double pmax = 1.01 * mMu * gmagic;

TTree *InitTree(string fileName, string treeName) { 

   // ++++++++++++++ Open tree and load branches ++++++++++++++
   // Get file
   TFile *fin = TFile::Open(fileName.c_str());
   cout<<"\nOpened tree:\t"<<fileName<<" "<<fin<<endl;

   // Get tree
   TTree *tree = (TTree*)fin->Get(treeName.c_str());

   cout<<"\nOpened tree:"<<treeName<<" "<<tree<<" from file "<<fileName<<" "<<fin<<endl;

   return tree;

}

double ModTime(double time) {

  double g2fracTime = time / g2Period;
  int g2fracTimeInt = int(g2fracTime);
  double g2ModTime = (g2fracTime - g2fracTimeInt) * g2Period;

  return g2ModTime;

}

void Run(TTree *tree, TFile *output, bool quality) {
   
   TH1D *momentum = new TH1D("Momentum", ";Track momentum [MeV];Tracks", int(pmax), 0, pmax); 
   // Momentum scans
   vector<TH1D*> mom_;
   vector<TH2D*> mom_slices_;

   // Slice momentum in 200 MeV up to 3100 MeV
   int step = 200;
   int nSlices = pmax / step;

   for ( int i_slice = 0; i_slice < nSlices; i_slice++ ) { 

      int lo = 0 + i_slice*step; 
      int hi = step + i_slice*step;

      TH2D *h_mom_slice = new TH2D(("ThetaY_vs_Time_Modulo_"+std::to_string(lo)+"_"+std::to_string(hi)).c_str(), ";t_{g#minus2}^{mod} [#mus]; #theta_{y} [mrad]", 87, 0, g2Period, 180, -60, 60);
      mom_slices_.push_back(h_mom_slice);

      TH1D *h_mom = new TH1D(("Momentum_"+std::to_string(lo)+"_"+std::to_string(hi)).c_str(), ";Track momentum [MeV];Tracks", int(pmax), 0, pmax); 
      mom_.push_back(h_mom);

   }

   // ==================================================
   int slice_count[nSlices];// = 0;

   // Get branches (using header file)
   InitBranches br(tree);

   int64_t nEntries = tree->GetEntries();

   for(int64_t entry = 0; entry < nEntries; entry++) {

      tree->GetEntry(entry);

      // Get variables
      double time = br.posiInitTime * 1e-3; // us
      double py = br.posiInitPY; // MeV
      double p = br.posiInitP; // MeV
      double theta_y = atan2(py,p) * 1e3; // mrad
      double g2ModTime = ModTime(time);

      // Time cuts
      if(quality && (time < 30 || time > 300)) continue; 

      momentum->Fill(p);

      // Slice momentum 
      for ( int i_slice = 0; i_slice < nSlices; i_slice++ ) { 

         int lo = 0 + i_slice*step; 
         int hi = step + i_slice*step;

         if(p >= double(lo) && p < double(hi)) {
            mom_.at(i_slice)->Fill(p);
            mom_slices_.at(i_slice)->Fill(g2ModTime, theta_y);
         }

      }

   }

   // Write to output
   // Set output directory

   output->mkdir("MainPlots"); 
   output->cd("MainPlots");
   
   momentum->Write();

   output->mkdir("MomSlices"); 

   for ( int i_slice = 0; i_slice < nSlices; i_slice++ ) {
      output->cd("MomSlices");
      mom_slices_.at(i_slice)->Write();
      mom_.at(i_slice)->Write();
   }

   return;

}

int main() { //int argc, char *argv[]) {

   bool quality = true;

   string inFileName = "/pnfs/GM2/persistent/EDM/MC/dMu/TruthNTup/truthTrees.000.001.root";//argv[1]; // 
   string outFileName = "debug.root";// argv[2]; //"tmp.root";

   string treeName = "phaseAnalyzer/g2phase";
   // Open tree and load branches
   TFile *fin = TFile::Open(inFileName .c_str());
   // Get tree
   TTree *tree = (TTree*)fin->Get(treeName.c_str());

   cout<<"\nOpened tree:\t"<<treeName<<" "<<tree<<" from file "<<inFileName<<" "<<fin<<endl;

   // Book output

   TFile *fout = new TFile(outFileName.c_str(),"RECREATE");
   
   // Fill histograms
   Run(tree, fout, quality);

   // Close
   fout->Close();
   fin->Close();

   cout<<"\nDone. Histogram written to:\t"<<outFileName<<" "<<fout<<endl;
   
   return 0;
}
