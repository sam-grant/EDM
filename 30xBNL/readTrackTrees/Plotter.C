//////////////////////////////
// Sam Grant                //
// Sept 2020                //
//////////////////////////////

#define Plotter_C
#include "Plotter.h"
#include "TMath.h"

double omegaAMagic = 0.00143934; // from gm2geom consts / kHz 
double g2Period = (2*TMath::Pi()/omegaAMagic) * 1e-3; // 4.3653239 us
//double g2Period = 4.365411;


void Plotter::InitTrees(TString input_file) {
   tr = new trackerReader(input_file);  
}

void Plotter::InitHistos() {

  // Radial position resolution at 1.5 GeV is 1 mm
  // Time resolution is around 1 ns
  // Factor of 0.148936 removes the fast rotation, bin in 150 ns (148.9 ns)
  // Bin in 150 ns (148.9 ns) 
  // Gleb bins at 0.667 mrad for whatever reason
  // 670 bins   
  plot1D("ThetaY", 180, -60, 60, "#theta_{y} [mrad]","Decay vertices");
  plot2D("ThetaY_vs_DecayTime_Modulo", 670, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");
  plot2D("ThetaY_vs_DecayTime_Modulo_2", 1000, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");
  //plot2D("ThetaY_vs_DecayTime_Modulo", 88, 0, 4.4, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");
  plot2D("ThetaY_vs_DecayTime", 2700, 0, 2700*0.148936, 180, -60, 60, "Decay time [#mus]", "#theta_{y} [mrad]");
  //plot2D("ThetaY_vs_DecayTime", 670, 0, 670*0.148936, 180, -60, 60, "Decay time [#mus]", "#theta_{y} [mrad]");
  plot1D("DecayVertexMom",128,0,3200,"Decay vertex momentum [MeV]");
  plot1D("TrackMom",128,0,3200,"Track momentum [MeV]");
  plot1D("pValues",1000,0,1,"Track p-value","Tracks");
  plot2D("DecayX_vs_DecayZ", 1000, -8000, 8000, 1000, -8000, 8000, "Decay Position Z [mm]", "Decay Position X [mm]");
  plot1D("nHits",31,0,32,"nHits","Tracks");
 // plot2D("ThetaY_vs_DecayTime", 670, 0, 670*50, 180, -60, 60, "Decay time [#mus]", "#theta_{y} [mrad]");
 // plot2D("ThetaY_vs_DecayTime_Modulo", 100, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");

}

//=========================================================

//loop over the entries in the tree, making plots:

void Plotter::Run() {

  // Loop through track tree
  while( NextTrEvent() ) {

    // BEAM QUALITY CUTS
    if(!tr->passVertexQuality) continue;

    // Get variables
    double px = tr->trackMomentumX;
    double py = tr->trackMomentumY;
    double pz = tr->trackMomentumZ;
    double p = tr->trackMomentum;
    double theta_y = TMath::ATan2(py,p) * 1e3; // rad -> mrad
    double decayMom = sqrt(pow(px,2)+pow(py,2)+pow(pz,2));
    double time = tr->trackT0 * 1e-3; // ns -> us
    double pValue = tr->trackPValue;
    double nHits = tr->nHits;

    //if(pValue < 0.0025 || nHits < 9 || tr->hitVolume) continue;

    // MOM CUTS
    if(p < 700 || p > 2400) continue; // gleb thesis
    //if(p < 1800 || p > 3600) continue;
    // TIME CUTS
    if(time < g2Period*7 || time > g2Period*70) continue;
    //if(time > g2Period*70) continue;
    //if(!tr->passVertexQuality) continue;


    // Standard plots and sanity plots
    Fill1D("pValues",pValue);
    Fill2D("DecayX_vs_DecayZ", tr->decayVertexPosX, tr->decayVertexPosZ);
    Fill1D("TrackMom",p);
    Fill1D("ThetaY", theta_y);
    Fill2D("ThetaY_vs_DecayTime", time, theta_y);
    Fill1D("DecayVertexMom",decayMom);
    Fill1D("nHits",nHits);

    //=========== Time modulo ===========

    //double g2Period = (2*TMath::Pi()/omegaAMagic) * 1e-3; // us
    double g2fracTime = time / g2Period;
    int g2fracTimeInt = g2fracTime;
    // Modulo time
    double g2ModTime = (g2fracTime - g2fracTimeInt) * g2Period;

    Fill2D("ThetaY_vs_DecayTime_Modulo", g2ModTime, theta_y);
    Fill2D("ThetaY_vs_DecayTime_Modulo_2", g2ModTime, theta_y);

  }

  delete tr;
  return;

}
