#ifndef Plotter_h
#define Plotter_h

// ROOT includes
#include "TTree.h"

using namespace std;

class InitBranches { 

public: 

   // Declaration of leaf types
   int runNum;
   int eventNum;
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

   // Declare constructer
   InitBranches(TTree *tree);

};

// Constructer
InitBranches::InitBranches(TTree* tree) {

   tree->SetBranchAddress("runNum", &runNum);
   tree->SetBranchAddress("eventNum", &eventNum);
   tree->SetBranchAddress("muDecayP", &muDecayP);
   tree->SetBranchAddress("muDecayPX", &muDecayPX);
   tree->SetBranchAddress("muDecayPY", &muDecayPY);
   tree->SetBranchAddress("muDecayPZ", &muDecayPZ);
   tree->SetBranchAddress("muDecayE", &muDecayE);
   tree->SetBranchAddress("muDecayTime", &muDecayTime);
   tree->SetBranchAddress("muDecayPosX", &muDecayPosX);
   tree->SetBranchAddress("muDecayPosY", &muDecayPosY);
   tree->SetBranchAddress("muDecayPosZ", &muDecayPosZ);
   tree->SetBranchAddress("muDecayPolX", &muDecayPolX);
   tree->SetBranchAddress("muDecayPolY", &muDecayPolY);
   tree->SetBranchAddress("muDecayPolZ", &muDecayPolZ);
   tree->SetBranchAddress("posiTrackID", &posiTrackID);
   tree->SetBranchAddress("posiInitP", &posiInitP);
   tree->SetBranchAddress("posiInitPX", &posiInitPX);
   tree->SetBranchAddress("posiInitPY", &posiInitPY);
   tree->SetBranchAddress("posiInitPZ", &posiInitPZ);
   tree->SetBranchAddress("posiInitE", &posiInitE);
   tree->SetBranchAddress("posiInitTime", &posiInitTime);
   tree->SetBranchAddress("posiInitPosX", &posiInitPosX);
   tree->SetBranchAddress("posiInitPosY", &posiInitPosY);
   tree->SetBranchAddress("posiInitPosZ", &posiInitPosZ);

}

#endif