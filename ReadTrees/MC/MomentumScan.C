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

    // Sanity plots
    plot1D("TrackMom_"+std::to_string(i_slice),128,0,3200,"Track momentum [MeV]");
    plot1D("pValues_"+std::to_string(i_slice),1000,0,1,"Track p-value","Tracks");
    plot2D("DecayX_vs_DecayZ_"+std::to_string(i_slice), 1000, -8000, 8000, 1000, -8000, 8000, "Decay Position Z [mm]", "Decay Position X [mm]");
    plot1D("nHits_"+std::to_string(i_slice),31,0,32,"nHits","Tracks");
  
    // Vertical angle plots
    plot1D("ThetaY_"+std::to_string(i_slice), 180, -60, 60, "#theta_{y} [mrad]","Tracks");
    // Factor of 0.148936 removes the fast rotation, bin in 150 ns (148.9 ns)
    plot2D("ThetaY_vs_Time_"+std::to_string(i_slice), 2700, 0, 2700*0.148936, 180, -60, 60, "Track time [#mus]", "#theta_{y} [mrad]");

  
    //=========== Time modulo plots ===========
  
    // 50 ns bins 
    plot2D("ThetaY_vs_Time_Modulo_"+std::to_string(i_slice), 87, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");
    // Coarse bin 
    plot2D("ThetaY_vs_Time_Modulo_Coarse_"+std::to_string(i_slice), 15, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");
    // Fine bin
    plot2D("ThetaY_vs_Time_Modulo_Fine_"+std::to_string(i_slice), 1000, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");

  }


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
    //if(p < 700 || p > 2400) continue; 
    // TIME CUTS
    //if(time > g2Period*70) continue;
    //if(time < g2Period*7 || time > g2Period*70) continue;
    //if(time > 300) continue;

    // Vertical angle
    double theta_y = TMath::ATan2(tr->trackMomentumY,p) * 1e3; // rad -> mrad

    //=========== Time modulo ===========

    double g2fracTime = time / g2Period;
    int g2fracTimeInt = g2fracTime;
    double g2ModTime = (g2fracTime - g2fracTimeInt) * g2Period;


    for ( int i_slice = 0; i_slice < 7; i_slice++ ) { 

      // Slice momentum in 500 MeV up to 3500 MeV
      int step = 500;
      double lo = 0 + i_slice*step; 
      double hi = step + i_slice*step;

      if(p < lo || p > hi) continue;

      // std::cout<<"\nlo\t"<<lo<<std::endl;
      // std::cout<<"hi\t"<<hi<<std::endl;
      // std::cout<<p<<std::endl;

      // Sanity plots
      Fill1D("pValues_"+std::to_string(i_slice),tr->trackPValue);
      Fill2D("DecayX_vs_DecayZ_"+std::to_string(i_slice), tr->decayVertexPosX, tr->decayVertexPosZ);
      Fill1D("TrackMom_"+std::to_string(i_slice),p);
      Fill1D("nHits_"+std::to_string(i_slice),tr->nHits);
  
      // Vertical angle plots
      Fill1D("ThetaY_"+std::to_string(i_slice), theta_y);
      Fill2D("ThetaY_vs_Time_"+std::to_string(i_slice), time, theta_y);
    
      Fill2D("ThetaY_vs_Time_Modulo_"+std::to_string(i_slice), g2ModTime, theta_y);
      Fill2D("ThetaY_vs_Time_Modulo_Coarse_"+std::to_string(i_slice), g2ModTime, theta_y);
      Fill2D("ThetaY_vs_Time_Modulo_Fine_"+std::to_string(i_slice), g2ModTime, theta_y);

    }

  }

  delete tr;
  return;

}
