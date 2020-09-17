// Simple code to read the Europa OmegaA ntuples
// gavin.hesketh@ucl.ac.uk
//
// You shouldn't have to edit this, except to declare new branches
//    or a reader for a new kind of tree.

#ifndef Reader_h
#define Reader_h

#include "TString.h"
#include <iostream>
#include <vector>
#include "TMatrixD.h"

class TBranch;
class TTree;

//====================================================================
//=== Generic tree reader
//====================================================================
//this has some general functions to open the file, load next event, etc
class Reader {

 public: 
  Reader(TString filename, TString treename);
  ~Reader(){};
  bool NextEvent();
  long Entries() {return nentries_;}

 protected:
  template<class VAR>
    void LoadBranch(TString name, VAR &var, TBranch *&branch);
  template<class VAR>
    void LoadBranchVector(TString name, VAR &var, TBranch *&branch);
  virtual void Init(){};
  
  TTree          *fChain;   //!pointer to the analyzed TTree or TChain
  int           fCurrent; //!current Tree number in a TChain
  long nentries_;
  long jentry_;
};

class trackAndTrackCaloReader : public Reader {

 public :
 trackAndTrackCaloReader(TString filename, TString treename="QualityVertices"):
  Reader(filename, "QualityVertices"){
    Init();
    //std::cout<<"==================================="<<std::endl<<std::endl;
  }

   // Declaration of leaf types
   UInt_t          midasSerialNum;
   UInt_t          runNum;
   UInt_t          subRunNum;
   UInt_t          eventNum;
   UInt_t          islandNum;
   Int_t           inFillLaserCount;
   Bool_t          passTrackQuality;
   Bool_t          passCandidateQuality;
   Bool_t          passDecayVertexQuality;
   Bool_t          hitVolume;
   Bool_t          hasDecayVertex;
   Bool_t          hasCaloVertex;
   Int_t           station;
   Int_t           nHits;
   Int_t           nUHits;
   Int_t           nVHits;
   Float_t        missedLayersFrac;
   Float_t        trackPValue;
   Float_t        trackT0;
   Float_t        trackMomentum;
   Float_t        trackMomentumX;  
   Float_t        trackMomentumY;  
   Float_t        trackMomentumZ;
   Float_t        decayTime;
   Float_t        decayVertexPosX;
   Float_t        decayVertexPosY;
   Float_t        decayVertexPosZ;
   Float_t        decayVertexPosR;    
   Float_t        decayVertexMom;
   Float_t        decayVertexMomX;
   Float_t        decayVertexMomY;
   Float_t        decayVertexMomZ;
   Float_t        decayVertexMomUnc;
   Float_t        decayVertexUncR;
   Float_t        decayVertexUncY;
   Float_t        decayVertexUncPR;
   Float_t        decayVertexUncPY;
   Float_t        caloVertexTime;
   Float_t        caloVertexPosX;
   Float_t        caloVertexPosY;
   Float_t        caloVertexPosZ;
   Float_t        caloVertexPosR;
   Float_t        caloVertexMom;
   Float_t        caloVertexMomX;
   Float_t        caloVertexMomY;
   Float_t        caloVertexMomZ;
   Float_t        caloVertexMomUnc;
   Float_t        caloVertexUncX;
   Float_t        caloVertexUncY;
   Float_t        caloVertexUncPX;
   Float_t        caloVertexUncPY;
   Float_t        minDriftTime;
   Float_t        maxDriftTime;
   Float_t        maxResidual;
   Float_t        decayExtrapolatedDistance;
   
   UInt_t          nCluMatches;
   Bool_t          passCaloVertexQuality[15];
   Bool_t          passPositronVertexQuality[15];
   Bool_t          passLostMuonVertexQuality[15];
   Int_t           clusterIslandNum[15];
   Int_t           clusterFillNum[15];
   Int_t           clusterCaloNum[15];
   Float_t        clusterTime[15];
   Float_t        clusterX[15];
   Float_t        clusterY[15];
   Float_t        clusterEnergy[15];
   Float_t        uncorrClusterEnergy[15];
   Float_t        EoverP[15];
   Float_t        uncorrEoverP[15];
   Float_t        logEoverP[15];
   Float_t        logUncorrEoverP[15];
   Int_t           nXtalHits[15];
   Int_t           xtalWithMaxE[15];
   Float_t        xtalMaxEnergyFrac[15];
   Float_t        caloVertexClusterTimeDiff[15];
   Float_t        caloVertexClusterRadialDiff[15];
   Float_t        trackClusterExtrapolatedDistance[15];

 private:

   // List of branches
   TBranch        *b_midasSerialNum;   //!
   TBranch        *b_runNum;   //!
   TBranch        *b_subRunNum;   //!
   TBranch        *b_eventNum;   //!
   TBranch        *b_islandNum;   //!
   TBranch        *b_inFillLaserCount;   //!
   TBranch        *b_passTrackQuality;   //!
   TBranch        *b_passCandidateQuality;   //!
   TBranch        *b_passDecayVertexQuality;   //!
   TBranch        *b_hitVolume;   //!
   TBranch        *b_hasDecayVertex;   //!
   TBranch        *b_hasCaloVertex;   //!
   TBranch        *b_station;   //!
   TBranch        *b_nHits;   //!
   TBranch        *b_nUHits;   //!
   TBranch        *b_nVHits;   //!
   TBranch        *b_missedLayersFrac;   //!
   TBranch        *b_trackPValue;   //!
   TBranch        *b_trackT0;   //!
   TBranch        *b_trackMomentum;   //!
   TBranch        *b_trackMomentumX;   //!
   TBranch        *b_trackMomentumY;   //!  
   TBranch        *b_trackMomentumZ;   //!
   TBranch        *b_decayTime;   //!
   TBranch        *b_decayVertexPosX;   //!
   TBranch        *b_decayVertexPosY;   //!
   TBranch        *b_decayVertexPosZ;   //!
   TBranch        *b_decayVertexPosR;   //!    
   TBranch        *b_decayVertexMom;   //!
   TBranch        *b_decayVertexMomX;   //!
   TBranch        *b_decayVertexMomY;   //!
   TBranch        *b_decayVertexMomZ;   //!
   TBranch        *b_decayVertexMomUnc;   //!
   TBranch        *b_decayVertexUncR;   //!
   TBranch        *b_decayVertexUncY;   //!
   TBranch        *b_decayVertexUncPR;   //!
   TBranch        *b_decayVertexUncPY;   //!
   TBranch        *b_caloVertexTime;   //!
   TBranch        *b_caloVertexPosX;   //!
   TBranch        *b_caloVertexPosY;   //!
   TBranch        *b_caloVertexPosZ;   //!
   TBranch        *b_caloVertexPosR;   //!
   TBranch        *b_caloVertexMom;   //!
   TBranch        *b_caloVertexMomX;   //!
   TBranch        *b_caloVertexMomY;   //!
   TBranch        *b_caloVertexMomZ;   //!
   TBranch        *b_caloVertexMomUnc;   //!
   TBranch        *b_caloVertexUncX;   //!
   TBranch        *b_caloVertexUncY;   //!
   TBranch        *b_caloVertexUncPX;   //!
   TBranch        *b_caloVertexUncPY;   //!
   TBranch        *b_minDriftTime;   //!
   TBranch        *b_maxDriftTime;   //!
   TBranch        *b_maxResidual;   //!
   TBranch        *b_decayExtrapolatedDistance;   //!
   
   TBranch        *b_nCluMatches;   //!
   TBranch        *b_passCaloVertexQuality;   //!
   TBranch        *b_passPositronVertexQuality;   //!
   TBranch        *b_passLostMuonVertexQuality;   //!
   TBranch        *b_clusterIslandNum;   //!
   TBranch        *b_clusterFillNum;   //!
   TBranch        *b_clusterCaloNum;   //!
   TBranch        *b_clusterTime;   //!
   TBranch        *b_clusterX;   //!
   TBranch        *b_clusterY;   //!
   TBranch        *b_clusterEnergy;   //!
   TBranch        *b_uncorrClusterEnergy;   //!
   TBranch        *b_EoverP;   //!
   TBranch        *b_uncorrEoverP;   //!
   TBranch        *b_logEoverP;   //!
   TBranch        *b_logUncorrEoverP;   //!
   TBranch        *b_nXtalHits;   //!
   TBranch        *b_xtalWithMaxE;   //!
   TBranch        *b_xtalMaxEnergyFrac;   //!
   TBranch        *b_caloVertexClusterTimeDiff;   //!
   TBranch        *b_caloVertexClusterRadialDiff;   //!
   TBranch        *b_trackClusterExtrapolatedDistance;   //!

   void Init();

};



#endif
