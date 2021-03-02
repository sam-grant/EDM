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
  plot2D("ThetaY_vs_Time_Modulo", 87, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");

  int pmin = 700.; 
  int pmax = 800.;

  for(int i_cut = 0; i_cut < 17; i_cut++) {

      plot2D("ThetaY_vs_Time_Modulo_"+std::to_string(pmin)+"_"+std::to_string(pmax), 87, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");

      pmin = pmin + 100; 
      pmax = pmax + 100; 

  }

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

  int nTrk = 0; int nVert = 0;
  int nQTrk = 0; int nQVert = 0;

  // Loop through track tree
  while( NextTrEvent() ) {

    nTrk++; 

    if(tr->passVertexQuality) {
      nQVert++;
      nVert++;
    } else if(!tr->passVertexQuality) nVert++;

    if(tr->passTrackQuality) nQTrk++;

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
    if(p > pmax*0.3 && p < pmax*0.75) {
      Fill1D("ThetaY", theta_y);
      Fill2D("ThetaY_vs_Time", time, theta_y);
      Fill2D("ThetaY_vs_Time_Modulo", g2ModTime, theta_y);
    }

    if(p >= 700 && p < 800) Fill2D("ThetaY_vs_Time_Modulo_700_800", g2ModTime, theta_y);
    else if(p >= 800 && p < 900) Fill2D("ThetaY_vs_Time_Modulo_800_900", g2ModTime, theta_y);
    else if(p >= 900 && p < 1000) Fill2D("ThetaY_vs_Time_Modulo_900_1000", g2ModTime, theta_y);
    else if(p >= 1000 && p < 1100) Fill2D("ThetaY_vs_Time_Modulo_1000_1100", g2ModTime, theta_y);
    else if(p >= 1100 && p < 1200) Fill2D("ThetaY_vs_Time_Modulo_1100_1200", g2ModTime, theta_y);
    else if(p >= 1200 && p < 1300) Fill2D("ThetaY_vs_Time_Modulo_1200_1300", g2ModTime, theta_y);
    else if(p >= 1300 && p < 1400) Fill2D("ThetaY_vs_Time_Modulo_1300_1400", g2ModTime, theta_y);
    else if(p >= 1400 && p < 1500) Fill2D("ThetaY_vs_Time_Modulo_1400_1500", g2ModTime, theta_y);
    else if(p >= 1500 && p < 1600) Fill2D("ThetaY_vs_Time_Modulo_1500_1600", g2ModTime, theta_y);
    else if(p >= 1600 && p < 1700) Fill2D("ThetaY_vs_Time_Modulo_1600_1700", g2ModTime, theta_y);
    else if(p >= 1700 && p < 1800) Fill2D("ThetaY_vs_Time_Modulo_1700_1800", g2ModTime, theta_y);
    else if(p >= 1800 && p < 1900) Fill2D("ThetaY_vs_Time_Modulo_1800_1900", g2ModTime, theta_y);
    else if(p >= 1900 && p < 2000) Fill2D("ThetaY_vs_Time_Modulo_1900_2000", g2ModTime, theta_y);
    else if(p >= 2000 && p < 2100) Fill2D("ThetaY_vs_Time_Modulo_2000_2100", g2ModTime, theta_y);
    else if(p >= 2100 && p < 2200) Fill2D("ThetaY_vs_Time_Modulo_2100_2200", g2ModTime, theta_y);
    else if(p >= 2200 && p < 2300) Fill2D("ThetaY_vs_Time_Modulo_2200_2300", g2ModTime, theta_y);
    else if(p >= 2300 && p < 2400) Fill2D("ThetaY_vs_Time_Modulo_2300_2400", g2ModTime, theta_y);

  }

  cout<<"Number of tracks:\t"<<nTrk<<"\n"; 
  cout<<"Number of quality tracks:\t"<<nQTrk<<"\n"; 
  cout<<"Number of vertices:\t"<<nVert<<"\n";
  cout<<"Number of quality vertices:\t"<<nQVert<<"\n";
  

  delete tr;
  return;

}
