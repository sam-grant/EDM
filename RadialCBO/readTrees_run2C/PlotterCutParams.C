//////////////////////////////
// Sam Grant                //
// Test branch variables    //
// Read tracker branch      //
//////////////////////////////

#define Plotter_C
#include "Plotter.h"
#include "TMath.h"

const float g2Period = 4.365;
const float eFracMaxCut = 0.865;

void Plotter::InitTrees(TString input_file) {
   ttc = new trackAndTrackCaloReader(input_file);
   //tr = new trackerReader(input_file); 
}

void Plotter::InitHistos() {

  // Cut params
  plot1D("eFracMax_noCut",100,0,1,"Fraction of cluster energy in the most energetic crystal");
  plot1D("eFracMax_cut",100,0,1,"Fraction of cluster energy in the most energetic crystal");

  plot1D("S12_caloVertexClusterTimeDiff_noQ",35,-20,15,"Calo vertex time #minus cluster time [ns]");
  plot1D("S18_caloVertexClusterTimeDiff_noQ",35,-20,15,"Calo vertex time #minus cluster time [ns]");
  plot1D("caloVertexClusterRadialDiff_noQ",100,0,100,"Calo vertex time #minus cluster time [mm]");
  plot1D("logEoverP_noQ",140,-5,3,"Log(E/p)");
  plot2D("EvsP_noQ",128,0,3200,128,0,3200,"Cluster energy [MeV]","Track momentum [MeV]");

  plot1D("S12_caloVertexClusterTimeDiff_cQ",35,-20,15,"Calo vertex time #minus cluster time [ns]");
  plot1D("S18_caloVertexClusterTimeDiff_cQ",35,-20,15,"Calo vertex time #minus cluster time [ns]");
  plot1D("caloVertexClusterRadialDiff_cQ",100,0,100,"Calo vertex time #minus cluster time [mm]");
  plot1D("logEoverP_cQ",140,-5,3,"Log(E/p)");
  plot2D("EvsP_cQ",128,0,3200,128,0,3200,"Cluster energy [MeV]","Track momentum [MeV]");

  plot1D("S12_caloVertexClusterTimeDiff_pQ",35,-20,15,"Calo vertex time #minus cluster time [ns]");
  plot1D("S18_caloVertexClusterTimeDiff_pQ",35,-20,15,"Calo vertex time #minus cluster time [ns]");
  plot1D("caloVertexClusterRadialDiff_pQ",100,0,100,"Calo vertex time #minus cluster time [mm]");
  plot1D("logEoverP_pQ",140,-5,3,"Log(E/p)");
  plot2D("EvsP_pQ",128,0,3200,128,0,3200,"Cluster energy [MeV]","Track momentum [MeV]");

  plot1D("S12_caloVertexClusterTimeDiff_lQ",35,-20,15,"Calo vertex time #minus cluster time [ns]");
  plot1D("S18_caloVertexClusterTimeDiff_lQ",35,-20,15,"Calo vertex time #minus cluster time [ns]");
  plot1D("caloVertexClusterRadialDiff_lQ",100,0,100,"Calo vertex time #minus cluster time [mm]");
  plot1D("logEoverP_lQ",140,-5,3,"Log(E/p)");
  plot2D("EvsP_lQ",128,0,3200,128,0,3200,"Cluster energy [MeV]","Track momentum [MeV]");

  //plot1D("decayVertexTime",4700, 0, 4700*0.148936, "Cluster time [ns]","Decay vertices");
  //plot1D("trackClusterRadialDiff",1000,0,100, ";Calo radial position #minus track vertex radial position [mm]""")
}

//=========================================================

//loop over the entries in the tree, making plots:

void Plotter::Run() {
  //    int count = 0;
  //loop over the clusterTracker/tracker tree:
  while( NextTrackAndTrackCaloEvent() ) {
    
    //if(!ttc->passCaloVertexQuality) continue;
/*    if(!ttc->hasCaloVertex) continue;*/
    if(!ttc->hasDecayVertex) continue;
    if(!ttc->passTrackQuality) continue;

    //if(!ttc->passDecayVertexQuality) continue;

    int stn = ttc->station;

    // Filter out laser fills
    if(ttc->inFillLaserCount!=0) continue;
    // Cluster varaibles are arrays


    for(int i = 0; i<ttc->nCluMatches; i++) { 

      // if(!ttc->passPositronVertexQuality[i]) continue;

      Fill1D("eFracMax_noCut",ttc->xtalMaxEnergyFrac[i]);
      if(ttc->xtalMaxEnergyFrac[i] >= eFracMaxCut) Fill1D("eFracMax_cut",ttc->xtalMaxEnergyFrac[i]);

      Fill2D("EvsP_noQ",ttc->trackMomentum,ttc->clusterEnergy[i]);
      Fill1D("logEoverP_noQ",ttc->logEoverP[i]);
      Fill1D("caloVertexClusterRadialDiff_noQ",ttc->caloVertexClusterRadialDiff[i]);
      if(stn==12) Fill1D("S12_caloVertexClusterTimeDiff_noQ",ttc->caloVertexClusterTimeDiff[i]);
      else if(stn==18) Fill1D("S18_caloVertexClusterTimeDiff_noQ",ttc->caloVertexClusterTimeDiff[i]); 
      Fill1D("caloVertexClusterTimeDiff_noQ",ttc->caloVertexClusterTimeDiff[i]);

      if(!ttc->passCaloVertexQuality[i]) continue;
      Fill2D("EvsP_cQ",ttc->trackMomentum,ttc->clusterEnergy[i]);
      Fill1D("logEoverP_cQ",ttc->logEoverP[i]);
      Fill1D("caloVertexClusterRadialDiff_cQ",ttc->caloVertexClusterRadialDiff[i]);
      if(stn==12) Fill1D("S12_caloVertexClusterTimeDiff_cQ",ttc->caloVertexClusterTimeDiff[i]);
      else if(stn==18) Fill1D("S18_caloVertexClusterTimeDiff_cQ",ttc->caloVertexClusterTimeDiff[i]); 
      Fill1D("caloVertexClusterTimeDiff_cQ",ttc->caloVertexClusterTimeDiff[i]);

      if(ttc->passPositronVertexQuality[i]) {
        Fill2D("EvsP_pQ",ttc->trackMomentum,ttc->clusterEnergy[i]);
        Fill1D("logEoverP_pQ",ttc->logEoverP[i]);
        Fill1D("caloVertexClusterRadialDiff_pQ",ttc->caloVertexClusterRadialDiff[i]);
        if(stn==12) Fill1D("S12_caloVertexClusterTimeDiff_pQ",ttc->caloVertexClusterTimeDiff[i]);
        else if(stn==18) Fill1D("S18_caloVertexClusterTimeDiff_pQ",ttc->caloVertexClusterTimeDiff[i]); 
        Fill1D("caloVertexClusterTimeDiff_pQ",ttc->caloVertexClusterTimeDiff[i]);
      } else if(ttc->passLostMuonVertexQuality[i]) {
        Fill2D("EvsP_lQ",ttc->trackMomentum,ttc->clusterEnergy[i]);
        Fill1D("logEoverP_lQ",ttc->logEoverP[i]);
        Fill1D("caloVertexClusterRadialDiff_lQ",ttc->caloVertexClusterRadialDiff[i]);
        if(stn==12) Fill1D("S12_caloVertexClusterTimeDiff_lQ",ttc->caloVertexClusterTimeDiff[i]);
        else if(stn==18) Fill1D("S18_caloVertexClusterTimeDiff_lQ",ttc->caloVertexClusterTimeDiff[i]); 
        Fill1D("caloVertexClusterTimeDiff_lQ",ttc->caloVertexClusterTimeDiff[i]);
      }
    }


  }

  delete ttc;
  //delete tr;
  return;

}
