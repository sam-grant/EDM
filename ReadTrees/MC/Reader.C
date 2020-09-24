
// Edit this code simply to un-comment any branches you want to use
// Can uncomment them all, but it will make the code slower.

#include "Reader.h"
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

//================================================
// trackReader
//================================================

void trackerReader::Init() {
  // Declaration of leaf types


/*   LoadBranch("runNum", runNum, b_runNum);
   LoadBranch("subRunNum", subRunNum, b_subRunNum);
   LoadBranch("eventNum", eventNum, b_eventNum);*/
   LoadBranch("trackMomentum", trackMomentum, b_trackMomentum);
/*   LoadBranch("trackMomentumX", trackMomentumX, b_trackMomentumX);*/
   LoadBranch("trackMomentumY", trackMomentumY, b_trackMomentumY);
/*   LoadBranch("trackMomentumZ", trackMomentumZ, b_trackMomentumZ);*/
  // LoadBranch("trackMomentumUnc", trackMomentumUnc, b_trackMomentumUnc);
   LoadBranch("decayVertexPosX", decayVertexPosX, b_decayVertexPosX);
   LoadBranch("decayVertexPosY", decayVertexPosY, b_decayVertexPosY);
   LoadBranch("decayVertexPosZ", decayVertexPosZ, b_decayVertexPosZ);
/*   LoadBranch("decayVertexMomX", decayVertexMomX, b_decayVertexMomX);
   LoadBranch("decayVertexMomY", decayVertexMomY, b_decayVertexMomY);
   LoadBranch("decayVertexMomZ", decayVertexMomZ, b_decayVertexMomZ);*/
/*   LoadBranch("decayVertexUncR", decayVertexUncR, b_decayVertexUncR);
   LoadBranch("decayVertexUncY", decayVertexUncY, b_decayVertexUncY);
   LoadBranch("decayVertexUncPR", decayVertexUncPR, b_decayVertexUncPR);
   LoadBranch("decayVertexUncPY", decayVertexUncPY, b_decayVertexUncPY);*/
   LoadBranch("trackT0", trackT0, b_trackT0);
/*   LoadBranch("decayTime", decayTime, b_decayTime);
   LoadBranch("hitVolume", hitVolume, b_hitVolume);*/
   LoadBranch("trackPValue", trackPValue, b_trackPValue);
   LoadBranch("station", station, b_station);
   LoadBranch("nHits", nHits, b_nHits);
/*   LoadBranch("nUHits", nUHits, b_nUHits);
   LoadBranch("nVHits", nVHits, b_nVHits);
   LoadBranch("missedLayersFrac", missedLayersFrac, b_missedLayersFrac);
   LoadBranch("minDriftTime", minDriftTime, b_minDriftTime);
   LoadBranch("maxDriftTime", maxDriftTime, b_maxDriftTime);
   LoadBranch("maxResidual", maxResidual, b_maxResidual);
   LoadBranch("extrapolatedDistance", extrapolatedDistance, b_extrapolatedDistance);*/
/*   LoadBranch("passTrackQuality", passTrackQuality, b_passTrackQuality);*/
   LoadBranch("passVertexQuality", passVertexQuality, b_passVertexQuality);
 //  LoadBranch("passCandidateQuality", passCandidateQuality, b_passCandidateQuality);   
   
}

//================================================
//General Reader:
//================================================

Reader::Reader(TString filename, TString folder, TString treename) :
  fChain(0), fCurrent(-1), jentry_(0) {  
  TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject(filename);
  if (!f || !f->IsOpen()) {
    f = new TFile(filename);
  }
  TDirectory * dir = (TDirectory*)f->Get(filename+":/"+folder);
  dir->GetObject(treename,fChain);
  if (!fChain) std::cout<<"Tree Not Found "<<filename<<" "<<filename+":/"+folder+"/"+treename<<std::endl;
  fChain->SetMakeClass(1);
  fChain->SetBranchStatus("*",0);  // disable all branches by default
  
  nentries_ = fChain->GetEntriesFast();
  
  std::cout<<std::endl<<"==================================="<<std::endl;
  std::cout<<"Loaded tree "<<folder<<"/"<<fChain->GetName()<<" from "<<filename<<" with "<<nentries_<<" entries"<<std::endl;
}

template<class VAR>
void Reader::LoadBranch(TString name, VAR &var, TBranch *&branch) { 
    std::cout<<"Activating branch "<<name<<std::endl;
    var=0;
    fChain->SetBranchStatus(name,1);
    fChain->SetBranchAddress(name, &var, &branch);
}
template<class VAR>
void Reader::LoadBranchVector(TString name, VAR &var, TBranch *&branch) { 
    std::cout<<"Activating branch "<<name<<std::endl;
    // var=0;
    fChain->SetBranchStatus(name,1);
    fChain->SetBranchAddress(name, var, &branch);
}

bool Reader::NextEvent() {
  //  std::cout<<"Loading entry: "<<jentry_<<std::endl;
  Long64_t centry = fChain->LoadTree(jentry_);
  if (centry < 0) return false;
  if (fChain->GetTreeNumber() != fCurrent) {
    fCurrent = fChain->GetTreeNumber();
  }
  fChain->GetEntry(jentry_);   
  jentry_++;
 
  return true;
}

