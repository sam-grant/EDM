//////////////////////////////
// Sam Grant                //
// Test branch variables    //
// Read tracker branch      //
//////////////////////////////

#define Plotter_C
#include "Plotter.h"
#include "TMath.h"

const float g2Period = 4.365;
const float magicRadius = 7112;

void Plotter::InitTrees(TString input_file) {
   ttc = new trackAndTrackCaloReader(input_file);
}

void Plotter::InitHistos() {

  // Radial position resolution at 1.5 GeV is 1 mm
  // Time resolution is around 1 ns
  // Factor of 0.148936 removes the fast rotation
  plot1D("DecayTime", 4700, 0, 4700*0.148936, "Decay time [#mus]","Entries"); 
  plot2D("DecayX_vs_DecayZ", 1000, -8000, 8000, 1000, -8000, 8000, "Decay time [#mus]", "Radial decay vertex [mm]");
  plot2D("RadialDecayVertex_vs_DecayTime", 4700, 0, 4700*0.148936, 140, -70, 70, "Decay time [#mus]", "Radial decay vertex [mm]");
  plot1D("RadialPos",140, -70, 70,"Radial position [mm]");
  plot1D("VerticalPos",200,-100,100,"Vertical position [mm]");
  plot1D("DecayVertexMom",128,0,3200,"Decay vertex momentum [MeV]");

  for(int stn = 12; stn<19; stn = stn + 6) {
    plot2D("S"+std::to_string(stn)+"_DecayX_vs_DecayZ", 1000, -8000, 8000, 1000, -8000, 8000, "Decay time [#mus]", "Radial decay vertex [mm]");
    plot2D("S"+std::to_string(stn)+"_RadialDecayVertex_vs_DecayTime", 4700, 0, 4700*0.148936, 140, -70, 70, "Decay time [#mus]", "Radial decay vertex [mm]");
  }

}

void Plotter::Run() {



  while( NextTrackAndTrackCaloEvent() ) {

    if(!ttc->hasDecayVertex || !ttc->passTrackQuality || !ttc->passDecayVertexQuality) continue;

    Fill1D("DecayTime", ttc->decayTime * 1e-3); // ns -> us 
    Fill2D("DecayX_vs_DecayZ", ttc->decayVertexPosX, ttc->decayVertexPosZ);
    Fill2D("RadialDecayVertex_vs_DecayTime", ttc->decayTime * 1e-3, ttc->decayVertexPosR - magicRadius);
    Fill1D("RadialPos",ttc->decayVertexPosR - magicRadius);
    Fill1D("VerticalPos",ttc->decayVertexPosY);
    Fill1D("DecayVertexMom",ttc->decayVertexMom);

    Fill2D("S"+std::to_string(ttc->station)+"_DecayX_vs_DecayZ", ttc->decayVertexPosX, ttc->decayVertexPosZ);
    Fill2D("S"+std::to_string(ttc->station)+"_RadialDecayVertex_vs_DecayTime", ttc->decayTime * 1e-3, ttc->decayVertexPosR - magicRadius);

  }

  delete ttc;
  return;

}
