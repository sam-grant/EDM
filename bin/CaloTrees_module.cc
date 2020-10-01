////////////////////////////////////////////////////////////////////////
// Class:       CaloTrees
// Plugin Type: analyzer (art v2_10_03)
// File:        CaloTrees_module.cc
//
// Generated at Wed Sep 30 11:05:31 2020 by Samuel Grant using cetskelgen
// from cetlib version v3_02_00.
//
// Make a flat tree with calo info for radial field studies
////////////////////////////////////////////////////////////////////////

// Art includes
#include "art/Framework/Core/EDAnalyzer.h"
#include "art/Framework/Core/ModuleMacros.h"
#include "art/Framework/Principal/Event.h"
#include "art/Framework/Principal/Handle.h"
#include "art/Framework/Principal/Run.h"
#include "art/Framework/Principal/SubRun.h"
#include "canvas/Utilities/InputTag.h"
#include "fhiclcpp/ParameterSet.h"
#include "messagefacility/MessageLogger/MessageLogger.h"
#include "art/Framework/Services/Optional/TFileService.h"
#include "art/Framework/Services/Registry/ServiceHandle.h"

// Calo includes
#include "gm2dataproducts/calo/ClusterArtRecord.hh"
#include "gm2calo/util/CaloForEach.hh"
#include "gm2dataproducts/daq/MidasEventHeaderArtRecord.hh"
#include "gm2dataproducts/daq/CCCArtRecord.hh"


#include "gm2geom/common/Gm2Constants_service.hh"
// C++ includes
#include <iostream>

// ROOT includes
#include "TTree.h"

namespace  gm2analyses {
  class CaloTrees;
}

class gm2analyses::CaloTrees : public art::EDAnalyzer {

public:

  explicit CaloTrees(fhicl::ParameterSet const & p);

  // The compiler-generated destructor is fine for non-base
  // classes without bare pointers or other resource use.

  // Plugins should not be copied or assigned.
  CaloTrees(CaloTrees const &) = delete;
  CaloTrees(CaloTrees &&) = delete;
  CaloTrees & operator = (CaloTrees const &) = delete;
  CaloTrees & operator = (CaloTrees &&) = delete;

  // Required functions.
  void analyze(art::Event const & e) override;

private:

  std::string clusterModuleLabel_;
  std::string clusterInstanceLabel_;

  // Tree pointer
  TTree *tree_;

  unsigned int eventNum_;
  unsigned int subRunNum_;
  unsigned int runNum_;
  unsigned int caloNum_;

  float clusterEnergy_;
  float clusterTime_;
  float clusterX_;
  float clusterY_;

};


gm2analyses::CaloTrees::CaloTrees(fhicl::ParameterSet const & p)
  :
  EDAnalyzer(p)
  , clusterModuleLabel_(p.get<std::string>("clusterModuleLabel", "hitCluster"))
  , clusterInstanceLabel_(p.get<std::string>("clusterInstanceLabel", "cluster"))

{

  art::ServiceHandle<art::TFileService> tfs;
    
  tree_ = tfs->make<TTree>("tree", "calo");

  tree_->Branch("eventNum", &eventNum_, "eventNum/i");
  tree_->Branch("subRunNum", &subRunNum_, "subRunNum/i");
  tree_->Branch("runNum", &runNum_, "runNum/i");
  tree_->Branch("caloNum", &caloNum_, "caloNum/i");
  tree_->Branch("clusterEnergy", &clusterEnergy_, "clusterEnergy/F");
  tree_->Branch("clusterTime", &clusterTime_, "clusterTime/F");
  tree_->Branch("clusterX", &clusterX_, "clusterX/F");
  tree_->Branch("clusterY", &clusterY_, "clusterY/F");

}

void gm2analyses::CaloTrees::analyze(art::Event const & e)
{

  eventNum_ = e.event();
  subRunNum_ = e.subRun();
  runNum_ = e.run();

  const auto &clusters = *e.getValidHandle<gm2calo::ClusterArtRecordCollection>(
    {clusterModuleLabel_, clusterInstanceLabel_});

  for (const auto &clu : clusters) {

    caloNum_ = clu.caloNum;
    clusterEnergy_ = clu.energy;
    clusterTime_ = clu.time;
    clusterX_ = clu.x;
    clusterY_ = clu.y;

    tree_->Fill();

  }

}

DEFINE_ART_MODULE(gm2analyses::CaloTrees)
