
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
  LoadBranch("runNum", runNum, b_runNum);
  LoadBranch("eventNum", eventNum, b_eventNum);
  LoadBranch("muDecayP", muDecayP, b_muDecayP);
  LoadBranch("muDecayPX", muDecayPX, b_muDecayPX);
  LoadBranch("muDecayPY", muDecayPY, b_muDecayPY);
  LoadBranch("muDecayPZ", muDecayPZ, b_muDecayPZ);
  LoadBranch("muDecayE", muDecayE, b_muDecayE);
  LoadBranch("muDecayTime", muDecayTime, b_muDecayTime);
  LoadBranch("muDecayPosX", muDecayPosX, b_muDecayPosX);
  LoadBranch("muDecayPosY", muDecayPosY, b_muDecayPosY);
  LoadBranch("muDecayPosZ", muDecayPosZ, b_muDecayPosZ);
  LoadBranch("muDecayPolX", muDecayPolX, b_muDecayPolX);
  LoadBranch("muDecayPolY", muDecayPolY, b_muDecayPolY);
  LoadBranch("muDecayPolZ", muDecayPolZ, b_muDecayPolZ);
  LoadBranch("posiTrackID", posiTrackID, b_posiTrackID);
  LoadBranch("posiInitP", posiInitP, b_posiInitP);
  LoadBranch("posiInitPX", posiInitPX, b_posiInitPX);
  LoadBranch("posiInitPY", posiInitPY, b_posiInitPY);
  LoadBranch("posiInitPZ", posiInitPZ, b_posiInitPZ);
  LoadBranch("posiInitE", posiInitE, b_posiInitE);
  LoadBranch("posiInitTime", posiInitTime, b_posiInitTime);
  LoadBranch("posiInitPosX", posiInitPosX, b_posiInitPosX);
  LoadBranch("posiInitPosY", posiInitPosY, b_posiInitPosY);
  LoadBranch("posiInitPosZ", posiInitPosZ, b_posiInitPosZ);
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

