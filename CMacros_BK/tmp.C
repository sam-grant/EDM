void tmp() { 

   TFile *fin = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackReco_WORLD_250MeV_AQ.root");

   std::vector<std::string> stn_ = {"S0_", "S12_", "S18_", "S12S18_", "S0S12S18_"};

   for (auto& stn : stn_) { 

      TString grn = "MomentumBinnedAnalysis/ParameterScans/"+stn+"AEDM_vs_p_thetaY";
      TGraphErrors *gr = (TGraphErrors*)fin->Get(grn);
      cout<<grn<<", "<<gr<<endl;
  }

  return;

}