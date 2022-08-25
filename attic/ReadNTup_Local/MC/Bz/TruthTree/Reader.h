
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
  Reader(filename, "phaseAnalyzer", "g2phase"){
    Init();
    std::cout<<"==================================="<<std::endl<<std::endl;
  }
  // Declaration of leaf types
    int runNum;
    int eventNum;

    // decay muon info
    double muDecayP;
    double muDecayPX;
    double muDecayPY;
    double muDecayPZ;
    double muDecayE;
    double muDecayTime;
    double muDecayPosX;
    double muDecayPosY;
    double muDecayPosZ;
    double muDecayPolX;
    double muDecayPolY;
    double muDecayPolZ;
    // std::string muDecayVolume;

    // decay positron info
    int posiTrackID;
    double posiInitP;
    double posiInitPX;
    double posiInitPY;
    double posiInitPZ;
    double posiInitE;
    double posiInitTime;
    double posiInitPosX;
    double posiInitPosY;
    double posiInitPosZ;

 private:
   // List of branches

    TBranch *b_runNum; //!
    TBranch *b_eventNum; //!
    TBranch *b_muDecayP; //!
    TBranch *b_muDecayPX; //!
    TBranch *b_muDecayPY; //!
    TBranch *b_muDecayPZ; //!
    TBranch *b_muDecayE; //!
    TBranch *b_muDecayTime; //!
    TBranch *b_muDecayPosX; //!
    TBranch *b_muDecayPosY; //!
    TBranch *b_muDecayPosZ; //!
    TBranch *b_muDecayPolX; //!
    TBranch *b_muDecayPolY; //!
    TBranch *b_muDecayPolZ; //!
    TBranch *b_posiTrackID; //!
    TBranch *b_posiInitP; //!
    TBranch *b_posiInitPX; //!
    TBranch *b_posiInitPY; //!
    TBranch *b_posiInitPZ; //!
    TBranch *b_posiInitE; //!
    TBranch *b_posiInitTime; //!
    TBranch *b_posiInitPosX; //!
    TBranch *b_posiInitPosY; //!
    TBranch *b_posiInitPosZ; //!

   
   void Init();

};

#endif
