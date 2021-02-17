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

  plot1D("Wiggle_Full", 2700, 0, 2700*0.148936, "t_{g#minus2}^{mod} [#mus]", "Tracks");

  //=========== Time modulo plots ===========
  plot1D("Wiggle_Modulo", 87, 0, g2Period, "t_{g#minus2}^{mod} [#mus]", "Tracks");
  plot1D("Wiggle_Modulo_Full", 87, 0, g2Period, "t_{g#minus2}^{mod} [#mus]", "Tracks");
  // plot1D("Wiggle_Modulo_Shift", 87, 0, g2Period, "t_{g#minus2}^{mod} [#mus]", "Tracks");

  // 50 ns bins 
  plot2D("ThetaY_vs_Time_Modulo", 87, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");
  // plot2D("ThetaY_vs_Time_Modulo_Shift", 87, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");
}

//=========================================================

double ModTime(double time) {

  double g2fracTime = time / g2Period;
  int g2fracTimeInt = int(g2fracTime);
  double g2ModTime = (g2fracTime - g2fracTimeInt) * g2Period;

	return g2ModTime;
}

/*double ModTimeShift(double time) { // Somewhat experimental

	double phaseOffset = 0.75*g2Period;

    double g2fracTime = time / g2Period;
    int g2fracTimeInt = int(g2fracTime);
    double g2ModTime = fmod(time-phaseOffset, 2*g2Period) - g2Period; // (g2fracTime - g2fracTimeInt) * g2Period;

	return g2ModTime;
}*/

  
//loop over the entries in the tree, making plots:

void Plotter::Run() {

  // Loop through track tree
  while( NextTrEvent() ) {

    // BEAM VERTEX QUALITY CUT
    if(!tr->passVertexQuality) continue;

    double time = tr->trackT0 * 1e-3; // ns -> us

    // Define T0 as the first zero crossing 
    // double timeShifted = time - 0.75*g2Period;

    //if(time < 0) continue; 
    double p = tr->trackMomentum;

    // Vertical angle
    double theta_y = TMath::ATan2(tr->trackMomentumY,p) * 1e3; // rad -> mrad

    // TIME CUTS
    //if(time < 0 || time > g2Period*70) continue;
    //if(time < 0 || time > g2Period*70) continue;
    //if(time < 30.6 || time > 500) continue;

    //=========== Time modulo ===========
    double g2ModTime = ModTime(time); 
    // double g2ModTime_shift = ModTimeShift(time);

    // Wiggle plots 
    // To do: base omega_a cuts on pmax
    if(p > 1800 && p < 3100) {

      // N(t), full wiggle with no time constraints

      Fill1D("Wiggle_Full", time);
      Fill1D("Wiggle_Modulo_Full",g2ModTime);

      if(time > 7*g2Period && time < 70*g2Period) { 

        Fill1D("Wiggle", time);
        Fill1D("Wiggle_Modulo",g2ModTime);
        // Fill1D("Wiggle_Modulo_Shift",g2ModTime_shift);

      }

    }
   
    // EDM cuts
    // p/pmax is between 0.3 to 0.75 for pmax
    // if(p > pmax*0.3 && p < pmax*0.75) {

    if(p > 1500 && p < 1600) {

      // Vertical angle plots
      Fill1D("ThetaY", theta_y);
      Fill2D("ThetaY_vs_Time", time, theta_y);

      //=========== Time modulo for Bz ===========
      // No phase shift? 
/*      double g2fracTime3 = g2fracTime;
      int g2fracTimeInt3 = (g2fracTime3);// - 0.25;
      double g2ModTime3 = (g2fracTime3 - g2fracTimeInt3) * g2Period;*/


      Fill2D("ThetaY_vs_Time_Modulo", g2ModTime, theta_y);
      //Fill2D("ThetaY_vs_Time_Modulo_Shift", g2ModTime_shift, theta_y);



    } 




  }

  delete tr;
  return;

}
