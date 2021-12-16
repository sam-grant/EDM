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

void DrawOffset(vector<TH1D*> hists_, int step, std::string title, std::string fname) { 

  cout<<"---> Drawing offset"<<endl;

  vector<TString> labels_ = {"No misaligment", "With misaligment"};

/*  vector<int> markerStyles_ = {20,24};*/

  TCanvas *c = new TCanvas("c","",800,600);
  TLegend *l = new TLegend(0.59, 0.75, 0.89, 0.89); 
  //l->SetNColumns(2);
  l->SetBorderSize(0);
  l->SetTextSize(24);
  l->SetTextFont(44);

  hists_.at(0)->SetBinContent(2, 0);
  hists_.at(3)->SetBinContent(2, 0);

  TGraphErrors *gr_1 = ConvertToTGraphErrors(hists_.at(0));
  TGraphErrors *gr_2 = ConvertToTGraphErrors(hists_.at(3));

  // Hack together y-axis range
  double lo;// = 1e6; double hi = -1e6;
  double hi;

  for(int i = 500; i<3000; i = i + 250) {

    double y = gr_1->Eval(i);
    if(y < lo) lo = y;
    if(y > hi) hi = y;

    cout<<lo<<", "<<hi<<endl;

  }

  for(int i = 500; i<3000; i = i + 250) {
    double y = gr_2->Eval(i);
    if(y < lo) lo = y;
    if(y > hi) hi = y;

    cout<<lo<<", "<<hi<<endl;
  }

  gr_1->GetYaxis()->SetRangeUser(lo-abs(lo*0.25), hi+abs(hi*0.75));

  gr_1->GetXaxis()->SetTitleSize(.04);
  gr_1->GetYaxis()->SetTitleSize(.04);
  gr_1->GetXaxis()->SetTitleOffset(1.1);
  gr_1->GetYaxis()->SetTitleOffset(1.15);
  gr_1->GetXaxis()->CenterTitle(true);
  gr_1->GetYaxis()->CenterTitle(true);
  gr_1->GetYaxis()->SetMaxDigits(4);

  title += ";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / "+to_string(step)+" MeV";
  gr_1->SetTitle(title.c_str());

  gr_1->SetMarkerColor(kBlack);
  gr_1->SetLineColor(kBlack);
	gr_1->SetMarkerStyle(20);
  gr_2->SetMarkerColor(kRed);
	gr_2->SetMarkerStyle(20);
  gr_2->SetLineColor(kRed);

	gr_1->Draw("APL");
	gr_2->Draw("PL SAME");

	l->AddEntry(gr_1, labels_.at(0));
	l->AddEntry(gr_2, labels_.at(1));

 	l->Draw("SAME");

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

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

  vector<TH1D*> thetaY_vs_p_;

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
	  	thetaY_vs_p_.push_back(thetaY_vs_p);

	}

	DrawOffset(thetaY_vs_p_, step, "Sim: reco vertices", "../Images/MC/dMu/5.4e-18/VerticalOffset/verticalOffset_"+config);

	cout<<"Written output file "<<foutName<<", "<<fout<<endl;

	fin->Close();
	fout->Close();

	return;


}

int main() {

	Run("trackReco_WORLD_250MeV_BQ_noCorr");
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