void RunBK(string dataset) { 

  TFile *fin = TFile::Open(("../Plots/Data/dMu/Run-1/Plots/verticalOffsetHists_"+dataset+".root").c_str());

  TString foutName = "../Plots/Data/dMu/Run-1/Plots/verticalOffsetHists_"+dataset+"_2.root";
  TFile *fout = new TFile(foutName, "RECREATE");
  fout->mkdir("VerticalOffsetPlots"); fout->cd("VerticalOffsetPlots"); 

  vector<string> stn_ = {"S12", "S18", "S12S18"};
  vector<string> step_ = {"125", "250"};

  for(auto& step : step_) {

    fout->mkdir(("VerticalOffsetPlots/"+step+"MeV").c_str()); fout->cd(("VerticalOffsetPlots/"+step+"MeV").c_str()); 

    for(auto& stn : stn_) {

      TH2D *h_theta_y_vs_p;
      if(step=="125") h_theta_y_vs_p = (TH2D*)fin->Get(("VerticalOffsetPlots/"+stn+"_ThetaY_vs_Momentum_"+step+"MeV").c_str());
      else h_theta_y_vs_p = (TH2D*)fin->Get(("VerticalOffsetPlots/"+stn+"_ThetaY_vs_Momentum_"+step+"Mev").c_str());

      h_theta_y_vs_p->SetName((stn+"_ThetaY_vs_Momentum").c_str());

      h_theta_y_vs_p->Write();

    }

  }

	

  fin->Close();
  fout->Close();

  cout<<"Plots written to "<<foutName<<", "<<fout<<endl;

  return;
}

double omegaAMagic = 0.00143934; // from gm2geom consts / kHz 
double g2Period = (2*TMath::Pi()/omegaAMagic) * 1e-3; // 4.3653239 us
double mMu = 105.6583715; // MeV
double aMu = 11659208.9e-10; 
double gmagic = std::sqrt( 1.+1./aMu );
double pmax = 1.01 * mMu * gmagic; // 3127.1144
double T_c = 149.2 * 1e-3; // cyclotron period [us]

void Run(string config) { 

  TString finName = "../Plots/Data/dMu/Run-1/Plots/edmPlots_"+config+".root";
  TFile *fin = TFile::Open(finName); 

  TString foutName = "../Plots/Data/dMu/Run-1/Plots/edmPlots_"+config+"_2.root"; 
  TFile *fout = new TFile(foutName, "RECREATE");


  string stns[] = {"S12S18", "S12", "S18"}; 

  int n_stn = sizeof(stns)/sizeof(stns[0]);

  // Slice momentum
  int step = 125;
  int nSlices = (pmax/step);

  fout->mkdir("MainPlots"); fout->mkdir("MomSlices");  

  for (int i_stn = 0; i_stn < n_stn; i_stn++) { 

    vector<TF1*> verticalOffsetFitsPerStn_;

    TH1D *momentum = (TH1D*)fin->Get(("MainPlots/"+stns[i_stn]+"_Momentum").c_str());
    TH1D *momY = (TH1D*)fin->Get(("MainPlots/"+stns[i_stn]+"_MomentumY").c_str());
    TH1D *momX = (TH1D*)fin->Get(("MainPlots/"+stns[i_stn]+"_MomentumX").c_str());
    TH1D *momZ = (TH1D*)fin->Get(("MainPlots/"+stns[i_stn]+"_MomentumZ").c_str());
    TH1D *wiggle= (TH1D*)fin->Get(("MainPlots/"+stns[i_stn]+"_Wiggle").c_str());
    TH1D *wiggle_mod= (TH1D*)fin->Get(("MainPlots/"+stns[i_stn]+"_Wiggle_Modulo").c_str());
    TH1D *wiggle_mod_long = (TH1D*)fin->Get(("MainPlots/"+stns[i_stn]+"_Wiggle_Modulo_Long").c_str());
    TH1D *thetaY = (TH1D*)fin->Get(("MainPlots/"+stns[i_stn]+"_ThetaY").c_str());
    TH2D *thetaY_vs_time = (TH2D*)fin->Get(("MainPlots/"+stns[i_stn]+"_ThetaY_vs_Time").c_str());
    TH2D *thetaY_vs_time_50ns = (TH2D*)fin->Get(("MainPlots/"+stns[i_stn]+"_ThetaY_vs_Time_50ns").c_str());
    TH2D *thetaY_vs_time_mod = (TH2D*)fin->Get(("MainPlots/"+stns[i_stn]+"_ThetaY_vs_Time_Modulo").c_str());
    TH2D *thetaY_vs_time_mod_50ns = (TH2D*)fin->Get(("MainPlots/"+stns[i_stn]+"_ThetaY_vs_Time_Modulo_50ns").c_str());
    TH2D *thetaY_vs_time_mod_long = (TH2D*)fin->Get(("MainPlots/"+stns[i_stn]+"_ThetaY_vs_Time_Long_Modulo").c_str());

    // RENAME
    thetaY_vs_time_mod_long->SetName((stns[i_stn]+"_ThetaY_vs_Time_Modulo_Long").c_str());
    
    TH2D *decayZ_vs_decayX = (TH2D*)fin->Get(("MainPlots/"+stns[i_stn]+"_DecayZ_vs_DecayX").c_str());

    fout->cd("MainPlots");
    momentum->Write();
    wiggle->Write();
    wiggle_mod->Write();
    wiggle_mod_long->Write();
    thetaY->Write();
    thetaY_vs_time->Write();
    thetaY_vs_time_50ns->Write(); 
    thetaY_vs_time_mod->Write();
    thetaY_vs_time_mod_50ns->Write();
    thetaY_vs_time_mod_long->Write();
    decayZ_vs_decayX->Write();
    momX->Write();
    momY->Write();
    momZ->Write();

    // Slice momentum
    for ( int i_slice = 0; i_slice < nSlices; i_slice++ ) { 

      int lo = 0 + i_slice*step; 
      int hi = step + i_slice*step;

      TH2D *thetaY_vs_time_mod_slice = (TH2D*)fin->Get(("MomSlices/"+stns[i_stn]+"_ThetaY_vs_Time_Modulo_"+std::to_string(lo)+"_"+std::to_string(hi)).c_str());
      TH2D *thetaY_vs_time_mod_50ns_slice = (TH2D*)fin->Get(("MomSlices/"+stns[i_stn]+"_ThetaY_vs_Time_Modulo_50ns_"+std::to_string(lo)+"_"+std::to_string(hi)).c_str());
      TH2D *thetaY_vs_time_mod_long_slice = (TH2D*)fin->Get(("MomSlices/"+stns[i_stn]+"_ThetaY_vs_Time_Modulo_Long_"+std::to_string(lo)+"_"+std::to_string(hi)).c_str());
      TH1D *thetaY_mom_slice = (TH1D*)fin->Get(("MomSlices/"+stns[i_stn]+"_ThetaY_"+std::to_string(lo)+"_"+std::to_string(hi)).c_str());
      TH1D *Y_mom_slice = (TH1D*)fin->Get(("MomSlices/"+stns[i_stn]+"_Y_"+std::to_string(lo)+"_"+std::to_string(hi)).c_str());
      TH1D *pY_mom_slice = (TH1D*)fin->Get(("MomSlices/"+stns[i_stn]+"_MomentumY_"+std::to_string(lo)+"_"+std::to_string(hi)).c_str());
      TH1D *p_mom_slice = (TH1D*)fin->Get(("MomSlices/"+stns[i_stn]+"_Momentum_"+std::to_string(lo)+"_"+std::to_string(hi)).c_str());

      fout->cd("MomSlices"); 
      thetaY_vs_time_mod_slice->Write();
      thetaY_vs_time_mod_50ns_slice->Write();
      thetaY_vs_time_mod_long_slice->Write();
      thetaY_mom_slice->Write();
      Y_mom_slice->Write();
      pY_mom_slice->Write();
      p_mom_slice->Write();
      

    }

  }


  fin->Close();
  fout->Close();

  cout<<"Plots written to "<<foutName<<", "<<fout<<endl;

  return;
}

void rename() { 

  Run("Run-1a_125MeV_BQ");
  // Run("Run-1c");
  // Run("Run-1d");

  return;

}
