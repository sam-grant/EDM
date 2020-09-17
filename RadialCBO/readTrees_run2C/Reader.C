// Edit this code simply to un-comment any branches you want to use
// Can uncomment them all, but it will make the code slower.

#include "Reader.h"
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Load branches

void trackAndTrackCaloReader::Init() {
  
  LoadBranch("midasSerialNum", midasSerialNum, b_midasSerialNum);
  LoadBranch("runNum", runNum, b_runNum);
  LoadBranch("subRunNum", subRunNum, b_subRunNum);
  LoadBranch("eventNum", eventNum, b_eventNum);
  LoadBranch("islandNum", islandNum, b_islandNum); 
  LoadBranch("inFillLaserCount", inFillLaserCount, b_inFillLaserCount); 
  LoadBranch("passTrackQuality", passTrackQuality, b_passTrackQuality);
  LoadBranch("passCandidateQuality", passCandidateQuality, b_passCandidateQuality);
  LoadBranch("passDecayVertexQuality", passDecayVertexQuality, b_passDecayVertexQuality);
  LoadBranch("hitVolume", hitVolume, b_hitVolume);
  LoadBranch("hasDecayVertex", hasDecayVertex, b_hasDecayVertex);
  LoadBranch("hasCaloVertex", hasCaloVertex, b_hasCaloVertex);
  LoadBranch("station", station, b_station);
  LoadBranch("nHits", nHits, b_nHits);
  LoadBranch("nUHits", nUHits, b_nUHits);
  LoadBranch("missedLayersFrac", missedLayersFrac, b_missedLayersFrac);
  LoadBranch("trackPValue", trackPValue, b_trackPValue);
  LoadBranch("trackT0", trackT0, b_trackT0);
  LoadBranch("trackMomentum", trackMomentum, b_trackMomentum);
  LoadBranch("trackMomentumX", trackMomentumX, b_trackMomentumX);
  LoadBranch("trackMomentumY", trackMomentumY, b_trackMomentumY);
  LoadBranch("trackMomentumZ", trackMomentumZ, b_trackMomentumZ);
  LoadBranch("decayTime", decayTime, b_decayTime);
  LoadBranch("decayVertexPosX", decayVertexPosX, b_decayVertexPosX);
  LoadBranch("decayVertexPosY", decayVertexPosY, b_decayVertexPosY);
  LoadBranch("decayVertexPosZ", decayVertexPosZ, b_decayVertexPosZ);
  LoadBranch("decayVertexPosR", decayVertexPosR, b_decayVertexPosR);
  LoadBranch("decayVertexMom", decayVertexMom, b_decayVertexMom);
  LoadBranch("decayVertexMomX", decayVertexMomX, b_decayVertexMomX);
  LoadBranch("decayVertexMomY", decayVertexMomY, b_decayVertexMomY);
  LoadBranch("decayVertexMomZ", decayVertexMomZ, b_decayVertexMomZ);
  LoadBranch("decayVertexMomUnc", decayVertexMomUnc, b_decayVertexMomUnc);
  LoadBranch("decayVertexUncR", decayVertexUncR, b_decayVertexUncR);
  LoadBranch("decayVertexUncY", decayVertexUncY, b_decayVertexUncY);
  LoadBranch("decayVertexUncPR", decayVertexUncPR, b_decayVertexUncPR);
  LoadBranch("decayVertexUncPY", decayVertexUncPY, b_decayVertexUncPY);
  LoadBranch("caloVertexTime", caloVertexTime, b_caloVertexTime);
  LoadBranch("caloVertexPosX", caloVertexPosX, b_caloVertexPosX);
  LoadBranch("caloVertexPosY", caloVertexPosY, b_caloVertexPosY);
  LoadBranch("caloVertexPosZ", caloVertexPosZ, b_caloVertexPosZ); 
  LoadBranch("caloVertexPosR", caloVertexPosR, b_caloVertexPosR);
  LoadBranch("caloVertexMom", caloVertexMom, b_caloVertexMom);
  LoadBranch("caloVertexMomX", caloVertexMomX, b_caloVertexMomX);
  LoadBranch("caloVertexMomY", caloVertexMomY, b_caloVertexMomY);
  LoadBranch("caloVertexMomZ", caloVertexMomZ, b_caloVertexMomZ);
  LoadBranch("caloVertexMomUnc", caloVertexMomUnc, b_caloVertexMomUnc);
  LoadBranch("caloVertexUncX", caloVertexUncX, b_caloVertexUncX);
  LoadBranch("caloVertexUncY", caloVertexUncY, b_caloVertexUncY);
  LoadBranch("caloVertexUncPX", caloVertexUncPX, b_caloVertexUncPX);
  LoadBranch("caloVertexUncPY", caloVertexUncPY, b_caloVertexUncPY);
  LoadBranch("minDriftTime", minDriftTime, b_minDriftTime);
  LoadBranch("maxDriftTime", maxDriftTime, b_maxDriftTime);
  LoadBranch("maxResidual", maxResidual, b_maxResidual);
  LoadBranch("decayExtrapolatedDistance", decayExtrapolatedDistance, b_decayExtrapolatedDistance);
  LoadBranch("nCluMatches", nCluMatches, b_nCluMatches);

  LoadBranchVector("passCaloVertexQuality", passCaloVertexQuality, b_passCaloVertexQuality);
  LoadBranchVector("passPositronVertexQuality", passPositronVertexQuality, b_passPositronVertexQuality);
  LoadBranchVector("passLostMuonVertexQuality", passLostMuonVertexQuality, b_passLostMuonVertexQuality);
  LoadBranchVector("clusterIslandNum", clusterIslandNum, b_clusterIslandNum);
  LoadBranchVector("clusterFillNum", clusterFillNum, b_clusterFillNum);
  LoadBranchVector("clusterCaloNum", clusterCaloNum, b_clusterCaloNum);
  LoadBranchVector("clusterTime", clusterTime, b_clusterTime);
  LoadBranchVector("clusterX", clusterX, b_clusterX);
  LoadBranchVector("clusterY", clusterY, b_clusterY);
  LoadBranchVector("clusterEnergy", clusterEnergy, b_clusterEnergy);
  LoadBranchVector("uncorrClusterEnergy", uncorrClusterEnergy, b_uncorrClusterEnergy);
  LoadBranchVector("EoverP", EoverP, b_EoverP);
  LoadBranchVector("uncorrEoverP", uncorrEoverP, b_uncorrEoverP);
  LoadBranchVector("logEoverP", logEoverP, b_logEoverP);
  LoadBranchVector("logUncorrEoverP", logUncorrEoverP, b_logUncorrEoverP);
  LoadBranchVector("nXtalHits", nXtalHits, b_nXtalHits);
  LoadBranchVector("xtalWithMaxE", xtalWithMaxE, b_xtalWithMaxE);
  LoadBranchVector("xtalMaxEnergyFrac", xtalMaxEnergyFrac, b_xtalMaxEnergyFrac);
  LoadBranchVector("caloVertexClusterTimeDiff", caloVertexClusterTimeDiff, b_caloVertexClusterTimeDiff);
  LoadBranchVector("caloVertexClusterRadialDiff", caloVertexClusterRadialDiff, b_caloVertexClusterRadialDiff);
  LoadBranchVector("trackClusterExtrapolatedDistance", trackClusterExtrapolatedDistance, b_trackClusterExtrapolatedDistance);

}


//================================================
//General Reader:
//================================================

Reader::Reader(TString filename, TString treename) :
  fChain(0), fCurrent(-1), jentry_(0) {  
  TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject(filename);
/*  std::cout<<"Got file list"<<std::endl;*/
  if (!f || !f->IsOpen()) {
    f = new TFile(filename);
  }
/*  std::cout<<"Opened"<<std::endl;*/
  TDirectory * dir = (TDirectory*)f->Get(filename);
/*  std::cout<<"Some other thing"<<std::endl;*/
  std::cout<<f<<std::endl;
  f->GetObject(treename,fChain);
/*  std::cout<<"Got object"<<std::endl;*/
  if (!fChain) std::cout<<"Tree Not Found "<<filename<<" "<<filename+":/"+treename<<std::endl;
  fChain->SetMakeClass(1);
  fChain->SetBranchStatus("*",0);  // disable all branches by default
  
  nentries_ = fChain->GetEntriesFast();
  
  //std::cout<<std::endl<<"==================================="<<std::endl;
  std::cout<<"Loaded tree "<<fChain->GetName()<<" from "<<filename<<" with "<<nentries_<<" entries"<<std::endl;
}

template<class VAR>
void Reader::LoadBranch(TString name, VAR &var, TBranch *&branch) { 
    //std::cout<<"Activating branch "<<name<<std::endl;
    var=0;
    fChain->SetBranchStatus(name,1);
    fChain->SetBranchAddress(name, &var, &branch);
}
template<class VAR>
void Reader::LoadBranchVector(TString name, VAR &var, TBranch *&branch) { 
    //std::cout<<"Activating branch "<<name<<std::endl;
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

