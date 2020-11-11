#define Plotter_C
#include "Plotter.h"
#include "TMath.h"

void Plotter::InitTrees(TString input_file) {
   cl = new clusterReader(input_file);
}

void Plotter::InitHistos() {

  for( int i_subrun = 0; i_subrun<400; i_subrun++) {

    // plot2D("clusterY_vs_clusterX_"+std::to_string(i_subrun),225,0,225,150,0,150,"Cluster position X [mm]", "Cluster position Y [mm]");
    
    for( int i_calo = 1; i_calo < 25; i_calo++) {

      plot2D("C"+std::to_string(i_calo)+"_clusterY_vs_clusterX_"+std::to_string(i_subrun),225,0,225,150,0,150,"Cluster position X [mm]", "Cluster position Y [mm]");

    }
    

  }

}

void Plotter::Run() {


  while( NextClusterEvent() ) { 

    // Cuts are from CTAG producer module

    if(cl->clusterEnergy > 1700 && cl->clusterEnergy < 6000 && cl->clusterTime > 24000) { 

        Fill2D("C"+std::to_string(cl->caloNum)+"_clusterY_vs_clusterX_"+std::to_string(cl->subRunNum),cl->clusterX*25,cl->clusterY*25); // xtal -> mm

    }

  }

  delete cl;

  return;

}