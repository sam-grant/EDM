#define Plotter_C
#include "Plotter.h"
#include "TMath.h"

void Plotter::InitTrees(TString input_file) {
   cl = new clusterReader(input_file);
}

void Plotter::InitHistos() {

  for( int i = 0; i<400; i++) {

    plot2D("clusterY_vs_clusterX_"+std::to_string(i),225,0,225,150,0,150,"Cluster position X [mm]", "Cluster position Y [mm]");

  }

}

void Plotter::Run() {


  while( NextClusterEvent() ) { 

    // Cuts are from CTAG producer module

    if(cl->clusterEnergy > 1700 && cl->clusterEnergy < 6000 && cl->clusterTime > 24000) { 

        Fill2D("clusterY_vs_clusterX_"+std::to_string(cl->subRunNum),cl->clusterX*25,cl->clusterY*25); // xtal -> mm

    }

  }

  delete cl;

  return;

}