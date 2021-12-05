#include <iostream>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

// Just produce a TH1 of the average theta_y per momentum bin

string GetQual(string config) {

  // AQ: just a time cut in the case of "decays". Additional p-val and hitVol cut for vertices
  // BQ: full vertex cuts
  // CQ: time cut plus 12 planes hit cut

  if(config.find("_AQ") != std::string::npos) { 
    return "AQ";
  } else if(config.find("_BQ") != std::string::npos) { 
    return "BQ";
  } else if(config.find("_CQ") != std::string::npos) { 
    return "CQ";
  } else { 
    cerr<<"Qual is unknown";
    return "";
  }

}

string GetFrame(string config) { 

  if(config.find("WORLD") != std::string::npos) { 
    return "WORLD";
  } else if(config.find("AAR") != std::string::npos) { 
    return "AAR";
  } else if(config.find("MRF") != std::string::npos) { 
    return "MRF";
  } else { 
    cerr<<"Frame is unknown";
    return "";
  }

}

string GetTracksOrDecays(string config) {

  if(config.find("allDecays_") != std::string::npos) { //} || config.find("truth_") != std::string::npos) { 
    return "allDecays";
  } else if(config.find("acceptedDecays_") != std::string::npos) { 
    return "acceptedDecays";
  } else if(config.find("trackTruth_") != std::string::npos) { // } || config.find("trackReco_") != std::string::npos) { 
    return "trackTruth";
  } else if(config.find("trackReco_") != std::string::npos) { 
    return "trackReco";  
  } else if(config.find("trackRecoControl_") != std::string::npos) { // } || config.find("trackReco_") != std::string::npos) { 
    return "trackRecoControl";
  } else if(config.find("acceptedDecaysControl_") != std::string::npos) { 
    return "acceptedDecaysControl";  
  }else { 
    cerr<<"Type is unknown";
    return "";
  }

}

string GetTracksOrDecaysLabel(string config) {

  if(config.find("allDecays_") != std::string::npos || config.find("acceptedDecays_") != std::string::npos || config.find("acceptedDecaysControl_") != std::string::npos) { 
    return "Decays";
  } else if(config.find("trackTruth_") != std::string::npos || config.find("trackReco_") != std::string::npos || config.find("trackRecoControl_") != std::string::npos) { 
    return "Tracks";
  } else { 
    cerr<<"Config is unknown";
    return "";
  }

}

int GetStep(string config) { 

  if(config.find("500MeV") != std::string::npos) { 
    return 500;
  } else if(config.find("250MeV") != std::string::npos) { 
    return 250;
  } else if(config.find("200MeV") != std::string::npos) { 
    return 200;
  } else { 
    cerr<<"Step size is unknown";
    return -1;
  }

}

void Run(std::string config, bool write = false) { 

	cout<<"Running "<<config<<endl;

	int step = GetStep(config);
	string tracksOrDecaysLabel = GetTracksOrDecaysLabel(config);
	string qualString = GetQual(config);

	TString finName = "../Plots/MC/dMu/5.4e-18/Plots/edmPlots_"+config+".root";
	TString foutName = "../Plots/MC/dMu/5.4e-18/Plots/verticalOffsetHists_"+config+".root";
	if(!write) foutName = "../Plots/MC/dMu/5.4e-18/Plots/verticalOffsetHists_"+config+"_TEST.root";

	TFile *fin = TFile::Open(finName);
	cout<<"Got input file "<<finName<<", "<<fin<<endl;

	TFile *fout = new TFile(foutName, "RECREATE");
	fout->mkdir("VerticalOffsetHists"); fout->cd("VerticalOffsetHists");

	// Book output hist, just setting the max momentum to 3000 MeV
	int nBins = 3000/step; 

	std::vector<std::string> stn_ = {"S0_", "S12_", "S18_", "S12S18_", "S0S12S18_"};
  	if(tracksOrDecaysLabel != "Tracks") stn_ = {""};

  	for (auto& stn : stn_) { 


  		TH1D *thetaY_vs_p = new TH1D((stn+"ThetaY_vs_p").c_str(), (stn+";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / "+to_string(step)).c_str(), nBins, 0, 3000);


	  	// Slice momentum
	  	int step = 250; 
	  	int nSlices = PMAX/step;

		// Loop thro' momentum bins
	    for ( int i_slice = 0; i_slice < nSlices; i_slice++ ) { 

	      int lo = 0 + i_slice*step; 
	      int hi = step + i_slice*step;

	      double p = (hi+lo)/2;

	      TString histName = "MomentumBinnedAnalysis/"+stn+"ThetaY_"+to_string(lo)+"_"+to_string(hi);
	      TH1D *hist = (TH1D*)fin->Get(histName);

	      // cout<<"Got thetaY hist "<<histName<<", "<<hist<<endl;

	      double thetaY = hist->GetMean();
	      double err_thetaY = hist->GetMeanError();

	      if(thetaY==0) continue;

	      // cout<<thetaY<<"±"<<err_thetaY<<" mrad"<<endl;

	      thetaY_vs_p->SetBinContent(i_slice+1, thetaY);
	      thetaY_vs_p->SetBinError(i_slice+1, err_thetaY);



	  	}

	  	thetaY_vs_p->Write();

	}

	cout<<"Written output file "<<foutName<<", "<<fout<<endl;

	fin->Close();
	fout->Close();

	return;


}

int main() {

	// Run("trackReco_WORLD_250MeV_BQ");
	// Run("trackTruth_WORLD_250MeV_BQ");
	// Run("trackReco_WORLD_250MeV_AQ");
	// Run("trackTruth_WORLD_250MeV_BQ");
	// Run("acceptedDecays_WORLD_250MeV_AQ");
	// Run("allDecays_WORLD_250MeV_AQ");
	// Run("trackRecoControl_WORLD_250MeV_BQ");
	// Run("trackRecoControl_WORLD_250MeV_CQ");
	// Run("acceptedDecaysControl_WORLD_250MeV_AQ");

	return 0;
}