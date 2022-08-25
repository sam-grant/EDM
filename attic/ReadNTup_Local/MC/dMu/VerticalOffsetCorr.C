//////////////////////////////
// Sam Grant                //
// Sept 2020 

// Make vertical angle plots// 
// for slices of track mom  //
// in 500 MeV               //
//////////////////////////////

#define Plotter_C
#include "Plotter.h"
#include "TMath.h"
#include "TGraphErrors.h"

double omegaAMagic = 0.00143934; // from gm2geom consts / kHz 
double g2Period = (2*TMath::Pi()/omegaAMagic) * 1e-3; // 4.3653239 us

void Plotter::InitTrees(TString input_file) {
   tr = new trackerReader(input_file);  
}

void Plotter::InitHistos() {

  // Vertical angle plots
  plot1D("ThetaY", 180, -60, 60, "#theta_{y} [mrad]","Tracks");
  // Factor of 0.148936 removes the fast rotation, bin in 150 ns (148.9 ns)
  plot2D("ThetaY_vs_Time", 2700, 0, 2700*0.148936, 180, -60, 60, "Track time [#mus]", "#theta_{y} [mrad]");

  //=========== Time modulo plots ===========

  // 50 ns bins 
  plot2D("ThetaY_vs_Time_Modulo", 87, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");
  // Coarse bin 
  plot2D("ThetaY_vs_Time_Modulo_Coarse", 15, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");
  // Fine bin
  plot2D("ThetaY_vs_Time_Modulo_Fine", 1000, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");

}

//=========================================================
double ModTime(double time) {

  double g2fracTime = time / g2Period;
  int g2fracTimeInt = int(g2fracTime);
  double g2ModTime = (g2fracTime - g2fracTimeInt) * g2Period;

  return g2ModTime;
}

//loop over the entries in the tree, making plots:

void Plotter::Run() {

  bool quality = true; // true;

  // Open vertical offset graph correction 
  TFile *input = TFile::Open("../../../Plots/MC/dMu/5.4e-18/MomScan.root");

  TGraphErrors *c_vs_mom = (TGraphErrors*)input->Get("c_vs_mom");

  // Get correction 
  std::vector<double> c_; 
  for (int i_entry = 0; i_entry < c_vs_mom->GetN(); i_entry++) c_.push_back(c_vs_mom->GetPointY(i_entry)); 

  // Loop through track tree
  while( NextTrEvent() ) {

    int stn = tr->station;
    if(stn==0) continue;

    double time = tr->decayTime * 1e-3; // ns -> us

    double px = tr->decayVertexMomX; 
    double py = tr->decayVertexMomY;
    double pz = tr->decayVertexMomZ;
    double p = sqrt(px*px + py*py + pz*pz);

    if(quality) { 
      //if(!tr->passTrackQuality) continue;
      if(p < 700 || p > 2400) continue;
      if(time > 300) continue;
      if(tr->trackPValue < 0.05) continue;
    }

    // Vertical angle
    double theta_y = TMath::ATan2(tr->trackMomentumY,p) * 1e3; // rad -> mrad

    //=========== Time modulo ===========

    double g2ModTime = ModTime(time);

    // Apply vertical offset correction
    for ( int i_slice = 0; i_slice < 7; i_slice++ ) { 

      // Slice momentum in 500 MeV up to 3500 MeV
      int step = 500;
      double lo = 0 + i_slice*step; 
      double hi = step + i_slice*step;

      if(p > lo && p < hi) theta_y = theta_y - c_.at(i_slice);

    }

    // Vertical angle plots
    Fill1D("ThetaY", theta_y);
    Fill2D("ThetaY_vs_Time", time, theta_y);

    Fill2D("ThetaY_vs_Time_Modulo", g2ModTime, theta_y);
    Fill2D("ThetaY_vs_Time_Modulo_Coarse", g2ModTime, theta_y);
    Fill2D("ThetaY_vs_Time_Modulo_Fine", g2ModTime, theta_y);

  }

  delete tr;
  return;

}
