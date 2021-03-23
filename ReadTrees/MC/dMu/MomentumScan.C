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

double omegaAMagic = 0.00143934; // from gm2geom consts / kHz 
double g2Period = (2*TMath::Pi()/omegaAMagic) * 1e-3; // 4.3653239 us

void Plotter::InitTrees(TString input_file) {
   tr = new trackerReader(input_file);  
}

void Plotter::InitHistos() {


  for ( int i_slice = 0; i_slice < 7; i_slice++ ) { 
  
    // Vertical angle plots
    plot1D("ThetaY_"+std::to_string(i_slice), 180, -60, 60, "#theta_{y} [mrad]","Tracks");
    // Factor of 0.148936 removes the fast rotation, bin in 150 ns (148.9 ns)
    plot2D("ThetaY_vs_Time_"+std::to_string(i_slice), 2700, 0, 2700*0.148936, 180, -60, 60, "Track time [#mus]", "#theta_{y} [mrad]");

    //=========== Time modulo plots ===========
  
    // 50 ns bins 
    plot2D("ThetaY_vs_Time_Modulo_"+std::to_string(i_slice), 87, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");
    plot2D("S0_ThetaY_vs_Time_Modulo_"+std::to_string(i_slice), 87, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");
    plot2D("S12_ThetaY_vs_Time_Modulo_"+std::to_string(i_slice), 87, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");
    plot2D("S18_ThetaY_vs_Time_Modulo_"+std::to_string(i_slice), 87, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");
    // Coarse bin 
    plot2D("ThetaY_vs_Time_Modulo_Coarse_"+std::to_string(i_slice), 15, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");
    // Fine bin
    plot2D("ThetaY_vs_Time_Modulo_Fine_"+std::to_string(i_slice), 1000, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");

  }


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

  bool quality = true;//true;

  // Loop through track tree
  while( NextTrEvent() ) {

    int stn = tr->station;

    double time = tr->decayTime * 1e-3; // ns -> us

    double px = tr->decayVertexMomX; 
    double py = tr->decayVertexMomY;
    double pz = tr->decayVertexMomZ;
    double p = sqrt(px*px + py*py + pz*pz);

    // Vertical angle
    double theta_y = TMath::ATan2(-py,p) * 1e3; // rad -> mrad

    if(quality) { 
      // Beam vertex 
      //if(!tr->passTrackQuality) continue;
      // Gleb sim cuts
      // if(p < 700 || p > 2400) continue;
      //if(tr->hitVolume) continue;
      if(tr->trackPValue < 0.05) continue;
    }

    //=========== Time modulo ===========

    double g2ModTime = ModTime(time);

    for ( int i_slice = 0; i_slice < 7; i_slice++ ) { 

      // Slice momentum in 500 MeV up to 3500 MeV
      int step = 500;
      double lo = 0 + i_slice*step; 
      double hi = step + i_slice*step;

      if(p < lo || p > hi) continue;
  
      // Vertical angle plots
      Fill1D("ThetaY_"+std::to_string(i_slice), theta_y);
      Fill2D("ThetaY_vs_Time_"+std::to_string(i_slice), time, theta_y);
    
      Fill2D("ThetaY_vs_Time_Modulo_"+std::to_string(i_slice), g2ModTime, theta_y);
      Fill2D("S"+std::to_string(stn)+"_ThetaY_vs_Time_Modulo_"+std::to_string(i_slice), g2ModTime, theta_y);
      
      Fill2D("ThetaY_vs_Time_Modulo_Coarse_"+std::to_string(i_slice), g2ModTime, theta_y);
      Fill2D("ThetaY_vs_Time_Modulo_Fine_"+std::to_string(i_slice), g2ModTime, theta_y);

    }

  }

  delete tr;
  return;

}
