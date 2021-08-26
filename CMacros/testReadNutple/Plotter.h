#ifndef Plotter_h
#define Plotter_h

// ROOT includes
#include "TTree.h"

using namespace std;

class InitBranches { 

public: 

   // Declaration of leaf types
   int runNum;
   int subRunNum;
   int eventNum;
   float trackMomentum;
   float trackMomentumX;
   float trackMomentumY;
   float trackMomentumZ;
   float trackMomentumUnc;
   float decayVertexPosX;
   float decayVertexPosY;
   float decayVertexPosZ;
   float decayVertexMomX;
   float decayVertexMomY;
   float decayVertexMomZ;
   float decayVertexUncR;
   float decayVertexUncY;
   float decayVertexUncPR;
   float decayVertexUncPY;
   float caloVertexPosX;
   float caloVertexPosY;
   float caloVertexPosZ;
   float caloVertexMomX;
   float caloVertexMomY;
   float caloVertexMomZ;
   float caloVertexUncX;
   float caloVertexUncY;
   float caloVertexUncPX;
   float caloVertexUncPY;
   float trackT0;
   float time;
   float decayTime;
   bool hitVolume;
   float trackPValue;
   int station;
   int nHits;
   int nUHits;
   int nVHits;
   float missedLayersFrac;
   float minDriftTime;
   float maxDriftTime;
   float maxResidual;
   float extrapolatedDistance;
   bool passTrackQuality;
   bool passCandidateQuality;
   bool passVertexQuality;

   // Declare constructer
   InitBranches(TTree *tree);

};

// Constructer
InitBranches::InitBranches(TTree* tree) {

   tree->SetBranchAddress("runNum", &runNum);
   tree->SetBranchAddress("subRunNum", &subRunNum);
   tree->SetBranchAddress("eventNum", &eventNum);
   tree->SetBranchAddress("trackMomentum", &trackMomentum);
   tree->SetBranchAddress("trackMomentumX", &trackMomentumX);
   tree->SetBranchAddress("trackMomentumY", &trackMomentumY);
   tree->SetBranchAddress("trackMomentumZ", &trackMomentumZ);
   tree->SetBranchAddress("trackMomentumUnc", &trackMomentumUnc);
   tree->SetBranchAddress("decayVertexPosX", &decayVertexPosX);
   tree->SetBranchAddress("decayVertexPosY", &decayVertexPosY);
   tree->SetBranchAddress("decayVertexPosZ", &decayVertexPosZ);
   tree->SetBranchAddress("decayVertexMomX", &decayVertexMomX);
   tree->SetBranchAddress("decayVertexMomY", &decayVertexMomY);
   tree->SetBranchAddress("decayVertexMomZ", &decayVertexMomZ);
   tree->SetBranchAddress("decayVertexUncR", &decayVertexUncR);
   tree->SetBranchAddress("decayVertexUncY", &decayVertexUncY);
   tree->SetBranchAddress("decayVertexUncPR", &decayVertexUncPR);
   tree->SetBranchAddress("decayVertexUncPY", &decayVertexUncPY);
   tree->SetBranchAddress("trackT0", &trackT0);
   tree->SetBranchAddress("decayTime", &decayTime);
   tree->SetBranchAddress("hitVolume", &hitVolume);
   tree->SetBranchAddress("trackPValue", &trackPValue);
   tree->SetBranchAddress("station", &station);
   tree->SetBranchAddress("nHits", &nHits);
   tree->SetBranchAddress("nUHits", &nUHits);
   tree->SetBranchAddress("nVHits", &nVHits);
   tree->SetBranchAddress("missedLayersFrac", &missedLayersFrac);
   tree->SetBranchAddress("minDriftTime", &minDriftTime);
   tree->SetBranchAddress("maxDriftTime", &maxDriftTime);
   tree->SetBranchAddress("maxResidual", &maxResidual);
   tree->SetBranchAddress("extrapolatedDistance", &extrapolatedDistance);
   tree->SetBranchAddress("passTrackQuality", &passTrackQuality);
   tree->SetBranchAddress("passVertexQuality", &passVertexQuality);
   tree->SetBranchAddress("passCandidateQuality", &passCandidateQuality);

}

#endif