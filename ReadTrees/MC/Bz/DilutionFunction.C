//////////////////////////////
// Sam Grant                //
// Sept 2020                //
//////////////////////////////

#define Plotter_C
#include "Plotter.h"
#include "TMath.h"
#include "TGraphErrors.h"

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

  // Slice momentum in 200 MeV up to 3100 MeV
  for ( int i_slice = 0; i_slice < 15; i_slice++ ) { 

    int step = 200;
    int lo = 0 + i_slice*step; 
    int hi = step + i_slice*step;

    plot2D(("S0_ThetaY_vs_Time_Modulo_"+std::to_string(lo)+"_"+std::to_string(hi)).c_str(), 87, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");
    plot2D(("S12_ThetaY_vs_Time_Modulo_"+std::to_string(lo)+"_"+std::to_string(hi)).c_str(), 87, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");
    plot2D(("S18_ThetaY_vs_Time_Modulo_"+std::to_string(lo)+"_"+std::to_string(hi)).c_str(), 87, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");
    plot2D(("S12S18_ThetaY_vs_Time_Modulo_"+std::to_string(lo)+"_"+std::to_string(hi)).c_str(), 87, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");
    plot2D(("S0S12S18_ThetaY_vs_Time_Modulo_"+std::to_string(lo)+"_"+std::to_string(hi)).c_str(), 87, 0, g2Period, 180, -60, 60, "t_{g#minus2}^{mod} [#mus]", "#theta_{y} [mrad]");

  }

}

//=========================================================

double ModTime(double time) {

  double g2fracTime = time / g2Period;
  int g2fracTimeInt = int(g2fracTime);
  double g2ModTime = (g2fracTime - g2fracTimeInt) * g2Period;

  return g2ModTime;
}

//loop over the entries in the tree, making plots:

void Plotter::Run() {

  bool quality = true;//true;
  bool vertCorr = false;//false;//true; 

  TFile *input = TFile::Open("../../../Plots/MC/BzSim/1700ppm/BzSim_unblindedFits_eQ.root");

  //long long counter = 0; 
  
  // Loop through track tree
  while( NextTrEvent() ) {

    // if(counter > 1e6) break;

    int stn = tr->station;

    double time = tr->decayTime * 1e-3; // ns -> us

    double px = tr->decayVertexMomX; 
    double py = tr->decayVertexMomY;
    double pz = tr->decayVertexMomZ;
    double p = sqrt(px*px + py*py + pz*pz);
    double theta_y = TMath::ATan2(-py,p) * 1e3; // rad -> mrad

    //=========== Time modulo ===========

    double g2ModTime = ModTime(time);


    if(quality) { 
      if(tr->trackPValue < 0.05) continue;
      if(p < 700 || p > 2400) continue;
      if(time > 300) continue;
    }

    // Vertical offset correction

    double vertOffset = 0; 

    TGraphErrors *c_vs_mom = (TGraphErrors*)input->Get(("MomentumBinnedAnalysis/ParameterScans/S"+std::to_string(stn)+"_c_vs_p").c_str());

    // Slice momentum in 100 MeV up to 3100 MeV
    for ( int i_slice = 0; i_slice < 30; i_slice++ ) { 

      int step = 200;
      int lo = 0 + i_slice*step; 
      int hi = step + i_slice*step;

      if(vertCorr && p >= double(lo) && p < double(hi)) {
        double x = (hi + lo) / 2;
        vertOffset = c_vs_mom->Eval(x);
        theta_y = theta_y - vertOffset;
      }

      if(p >= double(lo) && p < double(hi)) {
        Fill2D(("S0S12S18_ThetaY_vs_Time_Modulo_"+std::to_string(lo)+"_"+std::to_string(hi)).c_str(), g2ModTime, theta_y);
        if(stn!=0) Fill2D(("S12S18_ThetaY_vs_Time_Modulo_"+std::to_string(lo)+"_"+std::to_string(hi)).c_str(), g2ModTime, theta_y);
        Fill2D(("S"+std::to_string(stn)+"_ThetaY_vs_Time_Modulo_"+std::to_string(lo)+"_"+std::to_string(hi)).c_str(), g2ModTime, theta_y);
      }

    }
    delete c_vs_mom;

  }

  input->Close();
  delete tr;
  return;

}
