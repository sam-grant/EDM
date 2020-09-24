//////////////////////////////
// Sam Grant                //
//////////////////////////////

#define Plotter_C
#include "Plotter.h"
#include "TMath.h"

void Plotter::InitTrees(TString input_file) {
   ttc = new trackAndTrackCaloReader(input_file);
   //tr = new trackerReader(input_file); 
}

void Plotter::InitHistos() {


  for( int i = 0; i<400; i++) {

    plot2D("caloVertY_vs_caloVertX_"+std::to_string(i),300,-150,150,200,-100,100,"Calo vertex postition X [mm]", "Calo vertex position Y [mm]");
    plot2D("S12_caloVertY_vs_caloVertX_"+std::to_string(i),300,-150,150,200,-100,100,"Calo vertex postition X [mm]", "Calo vertex position Y [mm]");
    plot2D("S18_caloVertY_vs_caloVertX_"+std::to_string(i),300,-150,150,200,-100,100,"Calo vertex postition X [mm]", "Calo vertex position Y [mm]");

  }

}

//=========================================================

//loop over the entries in the tree, making plots:

void Plotter::Run() {

  while( NextTrackAndTrackCaloEvent() ) {
    
    if(!ttc->hasCaloVertex || !ttc->passTrackQuality) continue;
    
    int stn = ttc->station;

    int subRun = ttc->subRunNum;

    Fill2D("caloVertY_vs_caloVertX_"+std::to_string(subRun),ttc->caloVertexPosX,ttc->caloVertexPosY);
    Fill2D("St"+std::to_string(stn)+"_caloVertY_vs_caloVertX_"+std::to_string(subRun),ttc->caloVertexPosX,ttc->caloVertexPosY);

  }

  delete ttc;

  return;

}
