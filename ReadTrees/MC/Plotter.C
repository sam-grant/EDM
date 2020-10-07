//////////////////////////////
// Sam Grant                //
// Sept 2020                //
//////////////////////////////

#define Plotter_C
#include "Plotter.h"
#include "TMath.h"

double omegaAMagic = 0.00143934; // from gm2geom consts / kHz 
double g2Period = (2*TMath::Pi()/omegaAMagic) * 1e-3; // 4.3653239 us

void Plotter::InitTrees(TString input_file) {
   tr = new trackerReader(input_file);  
}

void Plotter::InitHistos() {

  // Sanity plots
  plot1D("TrackMom",128,0,3200,"Track momentum [MeV]");
  plot1D("pValues",1000,0,1,"Track p-value","Tracks");
  plot2D("DecayX_vs_DecayZ", 1000, -8000, 8000, 1000, -8000, 8000, "Decay Position Z [mm]", "Decay Position X [mm]");
  plot1D("nHits",31,0,32,"nHits","Tracks");

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

//loop over the entries in the tree, making plots:

void Plotter::Run() {

  // Loop through track tree
  while( NextTrEvent() ) {

    // BEAM VERTEX QUALITY CUT
    if(!tr->passVertexQuality) continue;

    double time = tr->trackT0 * 1e-3; // ns -> us
    double p = tr->trackMomentum;

    // MOM CUTS
    if(p < 700 || p > 2400) continue; 
    // TIME CUTS
    //if(time > g2Period*70) continue;
    if(time < g2Period*7 || time > g2Period*70) continue;
    //if(time > 300) continue;

    // Vertical angle
    double theta_y = TMath::ATan2(tr->trackMomentumY,p) * 1e3; // rad -> mrad

    // Sanity plots
    Fill1D("pValues",tr->trackPValue);
    Fill2D("DecayX_vs_DecayZ", tr->decayVertexPosX, tr->decayVertexPosZ);
    Fill1D("TrackMom",p);
    Fill1D("nHits",tr->nHits);

    // Vertical angle plots
    Fill1D("ThetaY", theta_y);
    Fill2D("ThetaY_vs_Time", time, theta_y);
    
    //=========== Time modulo ===========

    double g2fracTime = time / g2Period;
    int g2fracTimeInt = g2fracTime;
    double g2ModTime = (g2fracTime - g2fracTimeInt) * g2Period;

    Fill2D("ThetaY_vs_Time_Modulo", g2ModTime, theta_y);
    Fill2D("ThetaY_vs_Time_Modulo_Coarse", g2ModTime, theta_y);
    Fill2D("ThetaY_vs_Time_Modulo_Fine", g2ModTime, theta_y);

  }

  delete tr;
  return;

}
