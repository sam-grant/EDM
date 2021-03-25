
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
  Reader(TString filename, TString folder, TString treename);
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


//====================================================================
//=== tracker (trackerNTup/tracker) reader
//====================================================================
//contains the branches specific to the trackerNtup/tracker tree

class trackerReader : public Reader {

 public :
 trackerReader(TString filename):
  Reader(filename, "trackerNTup", "tracker"){
    Init();
    std::cout<<"==================================="<<std::endl<<std::endl;
  }
  // Declaration of leaf types
   Int_t           runNum;
   Int_t           subRunNum;
   Int_t           eventNum;
   Float_t         trackMomentum;
   Float_t         trackMomentumX;
   Float_t         trackMomentumY;
   Float_t         trackMomentumZ;
   Float_t         trackMomentumUnc;
   Float_t         decayVertexPosX;
   Float_t         decayVertexPosY;
   Float_t         decayVertexPosZ;
   Float_t         decayVertexMomX;
   Float_t         decayVertexMomY;
   Float_t         decayVertexMomZ;
   Float_t         decayVertexUncR;
   Float_t         decayVertexUncY;
   Float_t         decayVertexUncPR;
   Float_t         decayVertexUncPY;
   Float_t         caloVertexPosX;
   Float_t         caloVertexPosY;
   Float_t         caloVertexPosZ;
   Float_t         caloVertexMomX;
   Float_t         caloVertexMomY;
   Float_t         caloVertexMomZ;
   Float_t         caloVertexUncX;
   Float_t         caloVertexUncY;
   Float_t         caloVertexUncPX;
   Float_t         caloVertexUncPY;
   Float_t         trackT0;
   Float_t         time;
   Float_t         decayTime;
   Bool_t          hitVolume;
   Float_t         trackPValue;
   Int_t           station;
   Int_t           nHits;
   Int_t           nUHits;
   Int_t           nVHits;
   Float_t         missedLayersFrac;
   Float_t         minDriftTime;
   Float_t         maxDriftTime;
   Float_t         maxResidual;
   Float_t         extrapolatedDistance;
   Bool_t          passTrackQuality;
   Bool_t          passCandidateQuality;
   Bool_t          passVertexQuality;

 private:
   // List of branches
   TBranch        *b_runNum;   //!
   TBranch        *b_subRunNum;   //!
   TBranch        *b_eventNum;   //!
   TBranch        *b_trackMomentum;   //!
   TBranch        *b_trackMomentumX;   //!
   TBranch        *b_trackMomentumY;   //!
   TBranch        *b_trackMomentumZ;   //!
   TBranch        *b_trackMomentumUnc;   //!
   TBranch        *b_decayVertexPosX;   //!
   TBranch        *b_decayVertexPosY;   //!
   TBranch        *b_decayVertexPosZ;   //!
   TBranch        *b_decayVertexMomX;   //!
   TBranch        *b_decayVertexMomY;   //!
   TBranch        *b_decayVertexMomZ;   //!
   TBranch        *b_decayVertexUncR;   //!
   TBranch        *b_decayVertexUncY;   //!
   TBranch        *b_decayVertexUncPR;   //!
   TBranch        *b_decayVertexUncPY;   //!
   TBranch        *b_caloVertexPosX;   //!
   TBranch        *b_caloVertexPosY;   //!
   TBranch        *b_caloVertexPosZ;   //!
   TBranch        *b_caloVertexMomX;   //!
   TBranch        *b_caloVertexMomY;   //!
   TBranch        *b_caloVertexMomZ;   //!
   TBranch        *b_caloVertexUncX;   //!
   TBranch        *b_caloVertexUncY;   //!
   TBranch        *b_caloVertexUncPX;   //!
   TBranch        *b_caloVertexUncPY;   //!
   TBranch        *b_trackT0;   //!
   TBranch        *b_time;   //!
   TBranch        *b_decayTime;   //!
   TBranch        *b_hitVolume;   //!
   TBranch        *b_trackPValue;   //!
   TBranch        *b_station;   //!
   TBranch        *b_nHits;   //!
   TBranch        *b_nUHits;   //!
   TBranch        *b_nVHits;   //!
   TBranch        *b_missedLayersFrac;   //!
   TBranch        *b_minDriftTime;   //!
   TBranch        *b_maxDriftTime;   //!
   TBranch        *b_maxResidual;   //!
   TBranch        *b_extrapolatedDistance;   //!
   TBranch        *b_passTrackQuality;   //!
   TBranch        *b_passCandidateQuality;   //!
   TBranch        *b_passVertexQuality;   //!

   
   void Init();

};

#endif
