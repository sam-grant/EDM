#define Plotter_C
#include "Plotter.h"
#include "TMath.h"

void Plotter::InitTrees(TString input_file) {
   cl = new clusterReader(input_file);
}

void Plotter::InitHistos() {

  for( int i = 0; i<400; i++) {

    //plot1D("ctag_"+std::to_string(i),500,0,500);
   // plot2D("clusterY_vs_clusterX_"+std::to_string(i),225,0,225,150,0,150,"Cluster position X [mm]", "Cluster position Y [mm]");
    //plot2D("clusterY_vs_clusterX_old_"+std::to_string(i),225,0,225,150,0,150,"Cluster position X [mm]", "Cluster position Y [mm]");
    plot2D("clusterY_vs_clusterX_"+std::to_string(i),225,0,225,150,0,150,"Cluster position X [mm]", "Cluster position Y [mm]");

  }

}

void Plotter::Run() {

  //int counter = 0; 

  while( NextClusterEvent() ) { // } && counter<1e6) {

//    if(cl->clusterTime > 50000 && cl->clusterTime < 500000) {
//      if(cl->clusterEnergy > 1800 && cl->clusterEnergy < 9300) { 
//
//        Fill2D("clusterY_vs_clusterX_old_"+std::to_string(cl->subRunNum),cl->clusterX*25,cl->clusterY*25); // xtal -> mm
//
//
//      }
//    }

    if(cl->clusterTime > 24000) {
      if(cl->clusterEnergy > 1700 && cl->clusterEnergy < 6000) { 

        Fill2D("clusterY_vs_clusterX_"+std::to_string(cl->subRunNum),cl->clusterX*25,cl->clusterY*25); // xtal -> mm


      }
    }

//    if(cl->clusterTime < 50000 || cl->clusterTime > 500000) continue;
//    if(cl->clusterEnergy < 1800 || cl->clusterEnergy > 9300) continue;
//   
//  	Fill1D("ctag_"+std::to_string(cl->subRunNum),cl->ctag);
//    Fill2D("clusterY_vs_clusterX_"+std::to_string(cl->subRunNum),cl->clusterX*25,cl->clusterY*25); // xtal -> mm
//
    


   // counter++;


  }

  delete cl;

  return;

}