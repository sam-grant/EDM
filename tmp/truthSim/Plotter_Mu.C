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

   // Book histograms
   // Bin out FR

   //TH1D *muPolX = new TH1D("muPolX", ";Spin polarisation X;Decays", 500, -1, 1);
   //TH1D *muPolY = new TH1D("muPolY", ";Spin polarisation Y;Decays", 500, -0.05, 0.05);
   //TH1D *muPolZ = new TH1D("muPolZ", ";Spin polarisation Z;Decays", 500, -1, 1);

   // These are all in world coordinates & lab frame ... 

   TH1D *muThetaY = new TH1D("muThetaY", ";Muon #theta_{y} [rad];Muons",5000, -2*TMath::Pi(), 2*TMath::Pi());
   TH1D *muPhi = new TH1D("muPhi", ";Muon #phi_{y} [rad];Muons",5000, -2*TMath::Pi(), 2*TMath::Pi());

   TH2D *muThetaY_vs_time = new TH2D("muThetaY_vs_time", ";Decay time [#mus];Muon #theta_{y} [mrad]", 2700, 0, 2700*0.148936, 5000, -2*TMath::Pi(), 2*TMath::Pi());
   TH2D *muPhi_vs_eMom = new TH2D("muPhi_vs_eMom", ";e^{+} momentum [MeV];Muon #phi [rad]", int(pmax), 0, pmax, 1000, -2*TMath::Pi(), 2*TMath::Pi());
   TH2D *muPhi_vs_muMom = new TH2D("muPhi_vs_muMom", ";#mu^{+} momentum [MeV];Muon #phi [rad]", 1000, 2500, pmax, 1000, -2*TMath::Pi(), 2*TMath::Pi());
   TH2D *muPhi_vs_muTheta = new TH2D("muPhi_vs_muTheta", ";#theta [rad];#phi [rad]", 1000, -2*TMath::Pi(), 2*TMath::Pi(), 1000, -2*TMath::Pi(), 2*TMath::Pi());

   //TH2D *muPolY_vs_time = new TH2D("muPolY_vs_time", ";Spin polarisation Y;Decay time [#mus]", 2700, 0, 2700*0.148936, 500, -0.05, 0.05);
   //TH2D *muPolZ_vs_time = new TH2D("muPolZ_vs_time", ";Spin polarisation Z;Decay time [#mus]", 2700, 0, 2700*0.148936, 500, -1, 1);

   // Get branches (using header file)

   InitBranches br(tree);

   int64_t nEntries = tree->GetEntries();

   for(int64_t entry = 0; entry < nEntries; entry++) {

      tree->GetEntry(entry);

      // Get variables
      double time = br.muDecayTime * 1e-3; // us

      double px = br.muDecayPX; // MeV
      double py = br.muDecayPY; // MeV
      double pz = br.muDecayPZ; // MeV

      double muMom = sqrt(pow(px,2)+pow(py,2)+pow(pz,2));
      double eMom = br.posiInitP;

      double theta = atan2(py, px);// * 1e3; // rad -> mrad
      double phi = atan2(px, pz);

      muThetaY->Fill(theta);
      muPhi->Fill(phi);

      muThetaY_vs_time->Fill(time, theta);
      muPhi_vs_eMom->Fill(eMom, phi);
      muPhi_vs_muMom->Fill(muMom, phi);



      muPhi_vs_muTheta->Fill(theta, phi);



   }

   // Write to output
   // Set output directory
   output->mkdir("MuonPlots"); output->cd("MuonPlots");

   muThetaY->Write();
   muPhi->Write();
   muThetaY_vs_time->Write();
   muPhi_vs_eMom->Write();
   muPhi_vs_muMom->Write();
   muPhi_vs_muTheta->Write();

   return;

}

int main(int argc, char *argv[]) {

   bool quality = true;

   string inFileName = argv[1]; // "/pnfs/GM2/persistent/EDM/MC/dMu/TruthNTup/truthTrees.000.root";//
   string outFileName = argv[2]; //"tmp.root";

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
