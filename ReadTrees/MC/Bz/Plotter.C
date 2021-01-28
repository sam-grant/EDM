////////////////////////////////
// Sam Grant                  //
// Sept 2020                  //
// Make plots for Bz analysis //
////////////////////////////////

#define Plotter_C
#include "Plotter.h"
#include "TMath.h"

double omegaAMagic = 0.00143934; // from gm2geom consts / kHz 
double g2Period = (2*TMath::Pi()/omegaAMagic) * 1e-3; // 4.3653239 us
double mMu = 105.6583715; // MeV
double aMu = 11659208.9e-10; 
double gmagic = std::sqrt( 1.+1./aMu );
double pmax = 1.01 * mMu * gmagic;

void Plotter::InitTrees(TString input_file) {
   tr = new trackerReader(input_file);  
}

void Plotter::InitHistos() {

  // Vertical angle plots
  plot1D("ThetaY", 180, -60, 60, "#theta_{y} [mrad]","Tracks");
  // Factor of 0.148936 removes the fast rotation, bin in 150 ns (148.9 ns)
  plot2D("ThetaY_vs_Time", 2700, 0, 2700*0.148936, 180, -60, 60, "Track time [#mus]", "#theta_{y} [mrad]");

  // Wiggle
  plot1D("Wiggle", 2700, 0, 2700*0.148936, "t_{g#minus2}^{mod} [#mus]", "Tracks");
  plot1D("Wiggle_OnePeriod", 2700, 0, 2700*0.148936, "t_{g#minus2}^{mod} [#mus]", "Tracks");

  //=========== Time modulo plots ===========
  plot1D("Wiggle_Modulo", 87, 0, g2Period, "t_{g#minus2}^{mod} [#mus]", "Tracks");
  // 50 ns bins 
  plot2D("ThetaY_vs_Time_Modulo", 87, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");
  // Coarse bin 
  plot2D("ThetaY_vs_Time_Modulo_Coarse", 15, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");
  // Fine bin
  plot2D("ThetaY_vs_Time_Modulo_Fine", 1000, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");


  // With a phase shift

  // N(t_mod) / 50 ns
  plot1D("Wiggle_Modulo_Shift", 87, 0, g2Period, "t_{g#minus2}^{mod} [#mus]", "Tracks");
  // 50 ns bins 
  plot2D("ThetaY_vs_Time_Modulo_Shift", 87, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");
  // Coarse bin 
  plot2D("ThetaY_vs_Time_Modulo_Coarse_Shift", 15, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");
  // Fine bin
  plot2D("ThetaY_vs_Time_Modulo_Fine_Shift", 1000, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");


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

    // TIME CUTS
    if(time < g2Period*7.25 || time > g2Period*70) continue;
    //if(time < 0 || time > g2Period*70) continue;
    //if(time < 30.6 || time > 500) continue;

    //=========== Time modulo ===========
    double g2fracTime = time / g2Period;
    // int g2fracTimeInt;
    // double g2ModTime;

    // Vertical angle
    double theta_y = TMath::ATan2(tr->trackMomentumY,p) * 1e3; // rad -> mrad


    // Wiggle plots 
    // To do: base omega_a cuts on pmax
    if(p > 1800 && p < 31000) {

      // N(t)
      Fill1D("Wiggle", time);

      if(time > g2Period*7.25 && time < g2Period*8.25) Fill1D("Wiggle_OnePeriod", time);

      //=========== Time modulo for wiggle ===========
      // You have to phase shift in order to get a nice wiggle...
      // Phase shift -> choose where to slice the modulo
      double g2fracTime1 = g2fracTime - 0.25;
      int g2fracTimeInt1 = int(g2fracTime1);
      double g2ModTime1 = (g2fracTime1 - g2fracTimeInt1) * g2Period;

      Fill1D("Wiggle_Modulo_Shift",g2ModTime1);


    }
   
    // EDM cuts
    // p/pmax is between 0.3 to 0.75 for pmax
    // if(p > pmax*0.3 && p < pmax*0.75) {
    if(p > 700 && p < 2400) {

      // Vertical angle plots
      Fill1D("ThetaY", theta_y);
      Fill2D("ThetaY_vs_Time", time, theta_y);

      //=========== Time modulo for Bz ===========
      // No phase shift? 
      double g2fracTime2 = g2fracTime;
      int g2fracTimeInt2 = int(g2fracTime2);
      double g2ModTime2 = (g2fracTime2 - g2fracTimeInt2) * g2Period;

      Fill1D("Wiggle_Modulo",g2ModTime2);
      Fill2D("ThetaY_vs_Time_Modulo", g2ModTime2, theta_y);
      Fill2D("ThetaY_vs_Time_Modulo_Coarse", g2ModTime2, theta_y);
      Fill2D("ThetaY_vs_Time_Modulo_Fine", g2ModTime2, theta_y);

      // Phase shit
      double g2fracTime3 = g2fracTime - 0.25;
      int g2fracTimeInt3 = (g2fracTime3);// - 0.25;
      double g2ModTime3 = (g2fracTime3 - g2fracTimeInt3) * g2Period;

      Fill2D("ThetaY_vs_Time_Modulo_Shift", g2ModTime3, theta_y);
      Fill2D("ThetaY_vs_Time_Modulo_Coarse_Shift", g2ModTime3, theta_y);
      Fill2D("ThetaY_vs_Time_Modulo_Fine_Shift", g2ModTime3, theta_y);

    } 
    

    //if(time > 300) continue;

    // Sanity plots
//    Fill1D("pValues",tr->trackPValue);
//    Fill2D("DecayX_vs_DecayZ", tr->decayVertexPosX, tr->decayVertexPosZ);
//    Fill1D("TrackMom",p);
//    Fill1D("nHits",tr->nHits);
//
//    // Vertical angle plots
//    Fill1D("ThetaY", theta_y);
//    Fill2D("ThetaY_vs_Time", time, theta_y);


    // Apply phase shift to get a nice sine wave...

    // 


    



  }

  delete tr;
  return;

}
