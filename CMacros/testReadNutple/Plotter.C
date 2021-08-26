// Read ROOT trees 
// Sam Grant

#include <iostream>
#include <vector>

#include "Plotter.h"
#include "TFile.h"
#include "TTree.h"
#include "TTreeReader.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TMath.h"
#include "TVector3.h"
#include "TLorentzVector.h"
#include "Math/Vector3D.h"
#include "Math/Vector4D.h"

using namespace std;

double omegaAMagic = 0.00143934; // from gm2geom consts / kHz 
double g2Period = (2*TMath::Pi()/omegaAMagic) * 1e-3; // 4.3653239 us
double mMu = 105.6583715; // MeV
double aMu = 11659208.9e-10; 
double gmagic = std::sqrt( 1.+1./aMu );
double pmax = 1.01 * mMu * gmagic;
double eMass = 0.510999;

TTree *InitTree(string fileName, string treeName) { 

  // ++++++++++++++ Open tree and load branches ++++++++++++++
  // Get file
  TFile *fin = TFile::Open(fileName.c_str());
  cout<<"\nOpened tree:\t"<<fileName<<" "<<fin<<endl;

  // Get tree
  TTree *tree = (TTree*)fin->Get(treeName.c_str());

  cout<<"\nOpened tree:"<<treeName<<" "<<tree<<" from file "<<fileName<<" "<<fin<<endl;

  return tree;

}

double ModTime(double time) {

  double g2fracTime = time / g2Period;
  int g2fracTimeInt = int(g2fracTime);
  double g2ModTime = (g2fracTime - g2fracTimeInt) * g2Period;

  return g2ModTime;

}

void Run(TTree *tree, TFile *output, bool quality) {

  // 0: WORLD; 1: AAR; 2: MRF
  int frame = 0; 

  bool boost;

  bool WORLD = false;
  bool AAR = false;
  bool MRF = false;

  // Need to clean this up
  double boostFactor;
  double momBoostFactor;

  if(frame==0) { 
    WORLD = true;
    // Factor of two is just to make sure we're not chopping the tops of the vertcial angle at low momentum 
    boostFactor = 5e3*(1/gmagic);// 2/gmagic; // 1/15;//20.;
    boost = false;
    momBoostFactor = 1;
  } 
  else if(frame==1) {
    AAR = true;
    boostFactor = 5e3*(1/gmagic); //posiMom_MRF1/15;//20.;
    boost = false; 
    momBoostFactor = 1;
  }
  else if(frame==2) {
    MRF = true;
    boostFactor = 1.0e3;///20.;//2/gmagic;
    boost = true;
    momBoostFactor = (1/(2*gmagic));
  }

  string stns[] = {"S0S12S18", "S12S18", "S0", "S12", "S18"}; 
  int n_stn = sizeof(stns)/sizeof(stns[0]);

  double binWidth = 0.148936;

  TH1D *momentum_[n_stn];// = new TH1D("Momentum", ";Track momentum [MeV];Tracks", int(pmax), 0, pmax*momBoostFactor); 
  TH1D *momY_[n_stn];// = new TH1D("MomentumY", ";Track momentum Y [MeV];Tracks", 1000, -60, 60); 
  TH1D *momX_[n_stn];// = new TH1D("MomentumX", ";Track momentum X [MeV];Tracks", int(pmax), -pmax, pmax); 
  TH1D *momZ_[n_stn];// = new TH1D("MomentumZ", ";Track momentum Z [MeV];Tracks", int(pmax), -pmax, pmax); 
  TH1D *wiggle_[n_stn];// = new TH1D("Wiggle", ";Decay time [#mus];Tracks", 2700, 0, 2700*0.148936);
  TH1D *wiggle_mod_[n_stn];// = new TH1D("Wiggle_Modulo", ";t_{g#minus2}^{mod} [#mus];Tracks / 50 ns", 87, 0, g2Period); 
  TH1D *thetaY_[n_stn];// = new TH1D("ThetaY", ";#theta_{y} [mrad];Tracks", 1000, -TMath::Pi()*boostFactor, TMath::Pi()*boostFactor);
  TH2D *thetaY_vs_time_[n_stn];// = new TH2D("ThetaY_vs_Time", ";Decay time [#mus]; #theta_{y} [mrad] / 149 ns ", 2700, 0, 2700*0.148936, 1000, -TMath::Pi()*boostFactor, TMath::Pi()*boostFactor);
  TH2D *thetaY_vs_time_mod_[n_stn];// = new TH2D("ThetaY_vs_Time_Modulo", ";t_{g#minus2}^{mod} [#mus]; #theta_{y} [mrad] / 50 ns", 87, 0, g2Period, 1000, -TMath::Pi()*boostFactor, TMath::Pi()*boostFactor);
  TH2D *decayZ_vs_decayX_[n_stn];// = new TH2D("DecayZ_vs_DecayX", ";Decay vertex position X [mm];Decay vertex position Z [mm]", 800, -8000, 8000, 800, -8000, 8000);

  // Other scans 
  vector<TH1D*> thetaY_mom_slices_[n_stn];
  vector<TH1D*> Y_mom_slices_[n_stn];
  vector<TH1D*> pY_mom_slices_[n_stn];
  vector<TH1D*> p_mom_slices_[n_stn];
  vector<TH1D*> alpha_mom_slices_[n_stn];

  // Momentum scans of mod 
  vector<TH2D*> mom_slices_[n_stn];

  // Slice momentum
  int step = 200 * momBoostFactor;
  int nSlices = (pmax/step) * momBoostFactor;

  for (int i_stn = 0; i_stn < n_stn; i_stn++) { 

    momentum_[i_stn] = new TH1D((stns[i_stn]+"_Momentum").c_str(), ";Track momentum [MeV];Tracks", int(pmax), 0, pmax*momBoostFactor); 
    momY_[i_stn] = new TH1D((stns[i_stn]+"_MomentumY").c_str(), ";Track momentum Y [MeV];Tracks", 1000, -60, 60); 
    momX_[i_stn] = new TH1D((stns[i_stn]+"_MomentumX").c_str(), ";Track momentum X [MeV];Tracks", int(pmax), -pmax, pmax); 
    momZ_[i_stn] = new TH1D((stns[i_stn]+"_MomentumZ").c_str(), ";Track momentum Z [MeV];Tracks", int(pmax), -pmax, pmax); 
    wiggle_[i_stn] = new TH1D((stns[i_stn]+"_Wiggle").c_str(), ";Decay time [#mus];Tracks", 2700, 0, 2700*0.148936);
    wiggle_mod_[i_stn] = new TH1D((stns[i_stn]+"_Wiggle_Modulo").c_str(), ";t_{g#minus2}^{mod} [#mus];Tracks / 50 ns", 87, 0, g2Period); 
    thetaY_[i_stn] = new TH1D((stns[i_stn]+"_ThetaY").c_str(), ";#theta_{y} [mrad];Tracks", 1000, -TMath::Pi()*boostFactor, TMath::Pi()*boostFactor);
    thetaY_vs_time_[i_stn] = new TH2D((stns[i_stn]+"_ThetaY_vs_Time").c_str(), ";Decay time [#mus]; #theta_{y} [mrad] / 149 ns ", 2700, 0, 2700*0.148936, 1000, -TMath::Pi()*boostFactor, TMath::Pi()*boostFactor);
    thetaY_vs_time_mod_[i_stn] = new TH2D((stns[i_stn]+"_ThetaY_vs_Time_Modulo").c_str(), ";t_{g#minus2}^{mod} [#mus]; #theta_{y} [mrad] / 50 ns", 87, 0, g2Period, 1000, -TMath::Pi()*boostFactor, TMath::Pi()*boostFactor);
    decayZ_vs_decayX_[i_stn] = new TH2D((stns[i_stn]+"_DecayZ_vs_DecayX").c_str(), ";Decay vertex position X [mm];Decay vertex position Z [mm]", 800, -8000, 8000, 800, -8000, 8000);

    // Slice momentum

    for ( int i_slice = 0; i_slice < nSlices; i_slice++ ) { 

      int lo = 0 + i_slice*step; 
      int hi = step + i_slice*step;

      // Mod 
      TH2D *h_mom_slice = new TH2D((stns[i_stn]+"_ThetaY_vs_Time_Modulo_"+std::to_string(lo)+"_"+std::to_string(hi)).c_str(), ";t_{g#minus2}^{mod} [#mus]; #theta_{y} [mrad]", 87, 0, g2Period, 1000, -TMath::Pi()*boostFactor, TMath::Pi()*boostFactor);//180, -60*boostFactor, 60*boostFactor);
      mom_slices_[i_stn].push_back(h_mom_slice);

      TH1D *h_thetaY_mom_slice = new TH1D((stns[i_stn]+"_ThetaY_"+std::to_string(lo)+"_"+std::to_string(hi)).c_str(), ";#theta_{y} [mrad];Tracks",  500, -TMath::Pi()*boostFactor, TMath::Pi()*boostFactor);//180, -60*boostFactor, 60*boostFactor);
      thetaY_mom_slices_[i_stn].push_back(h_thetaY_mom_slice);

      TH1D *h_Y_mom_slice = new TH1D((stns[i_stn]+"_Y_"+std::to_string(lo)+"_"+std::to_string(hi)).c_str(), ";Vertical decay position [mm];Tracks",  180, -60, 60);//*boostFactor, 60*boostFactor);
      Y_mom_slices_[i_stn].push_back(h_Y_mom_slice);

      TH1D *h_pY_mom_slices = new TH1D((stns[i_stn]+"_MomentumY_"+std::to_string(lo)+"_"+std::to_string(hi)).c_str(), ";Track momentum Y MeV];Tracks",  1000, -60, 60);//500, -TMath::Pi()*boostFactor, TMath::Pi()*boostFactor);//40, -70, 70);
      pY_mom_slices_[i_stn].push_back(h_pY_mom_slices);

      TH1D *h_p_mom_slices = new TH1D((stns[i_stn]+"_Momentum_"+std::to_string(lo)+"_"+std::to_string(hi)).c_str(), ";Track momentum [MeV];Tracks",  int(pmax), 0, pmax*momBoostFactor);//500, -TMath::Pi()*boostFactor, TMath::Pi()*boostFactor);//40, -70, 70);
      p_mom_slices_[i_stn].push_back(h_p_mom_slices);

      //TH1D *h_alpha_mom_slices = new TH1D((stns[i_stn]+"_Alpha_"+std::to_string(lo)+"_"+std::to_string(hi)).c_str(), ";#alpha [rad];Tracks",  180, 0, TMath::Pi());//500, -TMath::Pi()*boostFactor, TMath::Pi()*boostFactor);//40, -70, 70);
      //alpha_mom_slices_[i_stn].push_back(h_alpha_mom_slices);

    }

  }

  // Get branches (using header file)
  InitBranches br(tree);

  double targetPerc = 0;
  int64_t nEntries = tree->GetEntries();

  double muAngleMax = 0;

  int64_t counter = 0;
   
  for(int64_t entry = 0; entry < nEntries; entry++) {

    tree->GetEntry(entry);

    if(100*float(entry) / nEntries > targetPerc) {
      cout << Form("Processed %.1f%%", 100*float(entry)/nEntries) << endl;
      targetPerc += 10;
    }


    // Get variables
    double time = br.decayTime * 1e-3; // us

    int stn = br.station; 

    // Positron world momentum 
    TVector3 eMom(br.decayVertexMomX, -br.decayVertexMomY, br.decayVertexMomZ); 
    TVector3 ePos(br.decayVertexPosX, br.decayVertexPosY, br.decayVertexPosZ);

    double g2ModTime = ModTime(time);
    double y = ePos.Y(); 

    // RingAngle is angle from x axis, from 0 to 2pi
    double ringAngle = atan2(br.decayVertexPosZ, br.decayVertexPosX);    
    if (ringAngle < 0) ringAngle += TMath::TwoPi();

    // Positron angle around the ring momentum AAR
    // Z is tangential to magic mom at x and z of decay (Figure 2 of Debevec note)
    if(AAR) { 

      eMom.RotateY(ringAngle);
      ePos.RotateY(ringAngle);

    } 
      

    /////////////////////////////////
    //                             //
    // Define the vertical angle   //
    //                             //
    /////////////////////////////////

    // We need to do this in a way that doesn't involve the z-component of momentum
    // It should be an entirely tranvserse quantity 

    double px = eMom.X();
    double py = eMom.Y();
    double pz = eMom.Z();
    double pT = sqrt( pow(px, 2) + pow(py, 2) );
    double p = eMom.Mag();

    double theta_y = asin(py/p);

    //double alpha = muPol.Angle(eMom);

    theta_y = theta_y * 1e3;

    ////////////////////////////////////////////////////////////////////////////////////////////////
    // All stations 
    int stn_id = 0;

    decayZ_vs_decayX_[stn_id]->Fill(ePos.X(), ePos.Z());

    // Time cuts
    if(quality && (time < 30 || time > 300) && br.hitVolume && br.trackPValue < 0.05) continue; 
 
    // g-2 cuts. See Fienberg thesis figure 2.10
    if(p > 1900*momBoostFactor  && p < pmax*momBoostFactor) {
      wiggle_[stn_id]->Fill(time);
      wiggle_mod_[stn_id]->Fill(g2ModTime);
    } 

    momY_[stn_id]->Fill(py);
    momX_[stn_id]->Fill(px);
    momZ_[stn_id]->Fill(pz);

    // EDM cuts
    if( quality && p > 700*momBoostFactor && p < 2400*momBoostFactor) { 

      momentum_[stn_id]->Fill(p);
      thetaY_[stn_id]->Fill(theta_y);
      thetaY_vs_time_[stn_id]->Fill(time, theta_y);
      thetaY_vs_time_mod_[stn_id]->Fill(g2ModTime, theta_y);

    } else if(!quality) { 

      momentum_[stn_id]->Fill(p);
      thetaY_[stn_id]->Fill(theta_y);
      thetaY_vs_time_[stn_id]->Fill(time, theta_y);
      thetaY_vs_time_mod_[stn_id]->Fill(g2ModTime, theta_y);

    }

    // Slice momentum 
    for ( int i_slice = 0; i_slice < nSlices; i_slice++ ) { 

      int lo = 0 + i_slice*step; 
      int hi = step + i_slice*step;

      if(p >= double(lo) && p < double(hi)) {

	mom_slices_[stn_id].at(i_slice)->Fill(g2ModTime, theta_y);

	// Other scans 
	thetaY_mom_slices_[stn_id].at(i_slice)->Fill(theta_y);
	Y_mom_slices_[stn_id].at(i_slice)->Fill(y);
	pY_mom_slices_[stn_id].at(i_slice)->Fill(py);
	p_mom_slices_[stn_id].at(i_slice)->Fill(p);
	//alpha_mom_slices_[stn_id].at(i_slice)->Fill(alpha);

      }

    }

    ////////////////////////////////////////////////////////////////////////////////////////////////
    // Stn 12 & 18, or stn 0
    if(stn!=0) stn_id = 1;
    else stn_id = 2;
      
    decayZ_vs_decayX_[stn_id]->Fill(ePos.X(), ePos.Z());

    // Time cuts
    if(quality && (time < 30 || time > 300)) continue; 
 
    // g-2 cuts. See Fienberg thesis figure 2.10
    if(p > 1900*momBoostFactor  && p < pmax*momBoostFactor) {
      wiggle_[stn_id]->Fill(time);
      wiggle_mod_[stn_id]->Fill(g2ModTime);
    } 

    momY_[stn_id]->Fill(py);
    momX_[stn_id]->Fill(px);
    momZ_[stn_id]->Fill(pz);

    // EDM cuts
    if( quality && p > 700*momBoostFactor && p < 2400*momBoostFactor) { 

      momentum_[stn_id]->Fill(p);
      thetaY_[stn_id]->Fill(theta_y);
      thetaY_vs_time_[stn_id]->Fill(time, theta_y);
      thetaY_vs_time_mod_[stn_id]->Fill(g2ModTime, theta_y);

    } else if(!quality) { 

      momentum_[stn_id]->Fill(p);
      thetaY_[stn_id]->Fill(theta_y);
      thetaY_vs_time_[stn_id]->Fill(time, theta_y);
      thetaY_vs_time_mod_[stn_id]->Fill(g2ModTime, theta_y);

    }

    // Slice momentum 
    for ( int i_slice = 0; i_slice < nSlices; i_slice++ ) { 

      int lo = 0 + i_slice*step; 
      int hi = step + i_slice*step;

      if(p >= double(lo) && p < double(hi)) {

	mom_slices_[stn_id].at(i_slice)->Fill(g2ModTime, theta_y);

	// Other scans 
	thetaY_mom_slices_[stn_id].at(i_slice)->Fill(theta_y);
	Y_mom_slices_[stn_id].at(i_slice)->Fill(y);
	pY_mom_slices_[stn_id].at(i_slice)->Fill(py);
	p_mom_slices_[stn_id].at(i_slice)->Fill(p);
	//alpha_mom_slices_[stn_id].at(i_slice)->Fill(alpha);

      }

    }

    ////////////////////////////////////////////////////////////////////////////////////////////////
    // Stn 12 or 18
    if(stn==0) continue;

    if(stn==12) stn_id = 3;
    else if(stn==18) stn_id = 4;
    else continue;
      
    decayZ_vs_decayX_[stn_id]->Fill(ePos.X(), ePos.Z());

    // Time cuts
    if(quality && (time < 30 || time > 300)) continue; 
 
    // g-2 cuts. See Fienberg thesis figure 2.10
    if(p > 1900*momBoostFactor  && p < pmax*momBoostFactor) {
      wiggle_[stn_id]->Fill(time);
      wiggle_mod_[stn_id]->Fill(g2ModTime);
    } 

    momY_[stn_id]->Fill(py);
    momX_[stn_id]->Fill(px);
    momZ_[stn_id]->Fill(pz);

    // EDM cuts
    if( quality && p > 700*momBoostFactor && p < 2400*momBoostFactor) { 

      momentum_[stn_id]->Fill(p);
      thetaY_[stn_id]->Fill(theta_y);
      thetaY_vs_time_[stn_id]->Fill(time, theta_y);
      thetaY_vs_time_mod_[stn_id]->Fill(g2ModTime, theta_y);

    } else if(!quality) { 

      momentum_[stn_id]->Fill(p);
      thetaY_[stn_id]->Fill(theta_y);
      thetaY_vs_time_[stn_id]->Fill(time, theta_y);
      thetaY_vs_time_mod_[stn_id]->Fill(g2ModTime, theta_y);

    }

    // Slice momentum 
    for ( int i_slice = 0; i_slice < nSlices; i_slice++ ) { 

      int lo = 0 + i_slice*step; 
      int hi = step + i_slice*step;

      if(p >= double(lo) && p < double(hi)) {

	mom_slices_[stn_id].at(i_slice)->Fill(g2ModTime, theta_y);

	// Other scans 
	thetaY_mom_slices_[stn_id].at(i_slice)->Fill(theta_y);
	Y_mom_slices_[stn_id].at(i_slice)->Fill(y);
	pY_mom_slices_[stn_id].at(i_slice)->Fill(py);
	p_mom_slices_[stn_id].at(i_slice)->Fill(p);
	//alpha_mom_slices_[stn_id].at(i_slice)->Fill(alpha);

      }

    }

    counter++;

    if(counter > 1e4) break;

  }

  // Write to output
  // Set output directory
  output->mkdir("MainPlots"); output->mkdir("MomSlices");  

  for (int i_stn = 0; i_stn < n_stn; i_stn++) { 

    output->cd("MainPlots");

    momentum_[i_stn]->Write();
    wiggle_[i_stn]->Write();
    wiggle_mod_[i_stn]->Write();
    thetaY_[i_stn]->Write();
    thetaY_vs_time_[i_stn]->Write();
    thetaY_vs_time_mod_[i_stn]->Write();
    decayZ_vs_decayX_[i_stn]->Write();
    momX_[i_stn]->Write();
    momY_[i_stn]->Write();
    momZ_[i_stn]->Write();

    for ( int i_slice = 0; i_slice < nSlices; i_slice++ ) {

      output->cd("MomSlices"); 

      mom_slices_[i_stn].at(i_slice)->Write();
      thetaY_mom_slices_[i_stn].at(i_slice)->Write();
      Y_mom_slices_[i_stn].at(i_slice)->Write();
      pY_mom_slices_[i_stn].at(i_slice)->Write();
      p_mom_slices_[i_stn].at(i_slice)->Write();
      //alpha_mom_slices_[i_stn].at(i_slice)->Write();
      
    }

  }

  cout<<"Written plots."<<endl;

  cout<<"Muon max angle:\t"<<muAngleMax<<" radians"<<endl;

  return;

}

int main(int argc, char *argv[]) {

  bool quality = true;

  string inFileName = "simTree.dMu.5.4e-18.root"; //argv[1]; 
  string outFileName = "tmp.root";//argv[2];

  string treeName = "trackerNTup/tracker";

  // Open tree and load branches
  TFile *fin = TFile::Open(inFileName .c_str());
  // Get tree
  TTree *tree = (TTree*)fin->Get(treeName.c_str());

  cout<<"\nOpened tree:\t"<<treeName<<" "<<tree<<" from file "<<inFileName<<" "<<fin<<endl;

  // Book output

  TFile *fout = new TFile(outFileName.c_str(),"RECREATE");
   
  // Fill histograms
  Run(tree, fout, quality);

  // Close
  fout->Close();
  fin->Close();

  cout<<"\nDone. Histogram written to:\t"<<outFileName<<" "<<fout<<endl;
   
  return 0;
}
