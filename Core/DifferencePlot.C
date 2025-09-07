#include <iostream>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

using namespace std;

// Do not forsee chainging this anytime soon
const int nTrials = 1e3;

//string limit = "1700ppm"; // Bz
//string limit = "1.8e-18"; // only works for "truthAllDecays"

// Global momentum cuts
const double xmin = 750;
const double xmax = 2500;
// const double xmin = 825; // 750;
// const double xmax = 2375; // 2500;
// const double xmin = 900;
// const double xmax = 2250;
// const double xmin = 1025;
// const double xmax = 2125;

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
  } else if(config.find("truthControl_") != std::string::npos) { 
    return "truthControl";  
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
  } else if(config.find("125MeV") != std::string::npos) { 
    return 125;
  } else { 
    cerr<<"Step size is unknown";
    return -1;
  }

}

string GetLabel(string config) { 

  string key1 = "trackReco_";
  string key2 = "trackTruth_";
  string key3 = "acceptedDecays_";
  string key4 = "allDecays_";

  if(config.find(key1) != std::string::npos) { 
    return "reco vertices";
  } else if(config.find(key2) != std::string::npos) { 
    return "truth vertices";
  } else if(config.find(key3) != std::string::npos) { 
    return "accepted decays";
  } else if(config.find(key4) != std::string::npos) { 
    return "all decays";
  } else { 
    cerr<<"Config string unknown";
    return "ERROR";
  }

}

string GetDataset(std::string config) {

  int step = 0;

  vector<std::string> keys_ = {"Run-1a", "Run-1b", "Run-1c", "Run-1d"};

  for(auto& key : keys_) { 

    if(config.find(key) != std::string::npos) { 

      return key;

    }

  }

  return "ERROR";

}

TGraphErrors *GetDeltaPrimeFit(TGraphErrors *gr_A, TF1 *dilutionFunc) {  

    TGraphErrors *gr_delta_prime = new TGraphErrors();

    int count = 0;

    for(int i = 0; i<gr_A->GetN(); i++) { 

      double x = gr_A->GetX()[i]; 
      double y = gr_A->GetY()[i]; 
      double ey = gr_A->GetEY()[i];

      if(x < xmin || x > xmax) continue;

      double d_EDM = dilutionFunc->Eval(x);
      double delta_prime = y/d_EDM;

      double delta_prime_err = ey/d_EDM;

      gr_delta_prime->SetPoint(count, x, delta_prime);
      gr_delta_prime->SetPointError(count, 0., delta_prime_err);

      count++;

    }

    TF1 *fit = new TF1("pol0", "pol0", xmin,xmax);
    
    // Now fit
    gr_delta_prime->Fit("pol0","QR");

    return gr_delta_prime;

}

void DrawDeltaPrimeFit(TGraphErrors *gr_delta_prime, string label, string title, string fname) {

  cout<<"\nDrawing"<<endl;

  TCanvas *c = new TCanvas("c","c",800,600);

  TLegend *l = new TLegend(0.11, 0.75, 0.59, 0.89); 

  l->SetBorderSize(0);

  TString delta_prime = Round(gr_delta_prime->GetFunction("pol0")->GetParameter(0), 2.);
  TString delta_prime_err = Round(gr_delta_prime->GetFunction("pol0")->GetParError(0), 1.);

  l->AddEntry(gr_delta_prime, label.c_str());
  l->AddEntry(gr_delta_prime->GetFunction("pol0"), "#LT#delta'#GT = "+delta_prime+"#pm"+delta_prime_err+" mrad");

  gr_delta_prime->SetTitle(title.c_str());
  gr_delta_prime->GetXaxis()->SetTitleSize(.04);
  gr_delta_prime->GetYaxis()->SetTitleSize(.04);
  gr_delta_prime->GetXaxis()->SetTitleOffset(1.1);
  gr_delta_prime->GetYaxis()->SetTitleOffset(1.1);
  gr_delta_prime->GetXaxis()->CenterTitle(true);
  gr_delta_prime->GetYaxis()->CenterTitle(true);
  gr_delta_prime->GetYaxis()->SetMaxDigits(4);

  // Set y-range
  double scale = 2.75;
  double ymin = gr_delta_prime->GetY()[0] - scale*gr_delta_prime->GetEY()[0];
  double ymax = gr_delta_prime->GetY()[0] + scale*gr_delta_prime->GetEY()[0];

  for(int i = 1; i<gr_delta_prime->GetN(); i++) {

    double a = gr_delta_prime->GetY()[i] + 1.25*gr_delta_prime->GetEY()[i];
    double b = gr_delta_prime->GetY()[i] - 1.25*gr_delta_prime->GetEY()[i];

    if(ymax < a) ymax = a;
    if(ymin > b) ymin = b;

  }

  gr_delta_prime->GetYaxis()->SetRangeUser(ymin,ymax);

  gr_delta_prime->SetMarkerStyle(20);

  gr_delta_prime->Draw("AP");

  l->Draw("same");

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;
}

vector<TF1*> GetMottFunctions(TFile *dilution_file) {

  vector<TF1*> mottFunctions_;

  for(int i = 0; i<nTrials; i++) { 

    TF1 *mottFunc = (TF1*)dilution_file->Get(("DilutionFits/BQ/Tracks/250MeV/d_vs_p/trackRecoTrials/"+to_string(i)).c_str());

    //cout<<mottFunc<<endl;

    mottFunctions_.push_back(mottFunc);

  }

  return mottFunctions_;

}

vector<TGraphErrors*> GetDeltaPrimeFits(vector<TF1*> mottFunctions_, TGraphErrors *gr_A) { 

  vector<TGraphErrors*> deltaPrimeFits_;

  for(auto& mottFunc : mottFunctions_) {

    TGraphErrors *gr_delta_prime = GetDeltaPrimeFit(gr_A, mottFunc); // , xmin, xmax);//new TGraphErrors();

    deltaPrimeFits_.push_back(gr_delta_prime);

  }

  return deltaPrimeFits_;

}

void DrawDeltaPrimeFits(vector<TGraphErrors*> graphs_, std::string title, std::string fname) { 

  TCanvas *c = new TCanvas("c","c",800,600);

  graphs_.at(0)->SetTitle(title.c_str());
  graphs_.at(0)->GetXaxis()->SetTitleSize(.04);
  graphs_.at(0)->GetYaxis()->SetTitleSize(.04);
  graphs_.at(0)->GetXaxis()->SetTitleOffset(1.1);
  graphs_.at(0)->GetYaxis()->SetTitleOffset(1.1);
  graphs_.at(0)->GetXaxis()->CenterTitle(true);
  graphs_.at(0)->GetYaxis()->CenterTitle(true);
  graphs_.at(0)->GetYaxis()->SetMaxDigits(4);
  //graphs_.at(0)->GetYaxis()->SetRangeUser(ymin,ymax);

  for(int i = 0; i < graphs_.size(); i++) {

    TF1 *fit = graphs_.at(i)->GetFunction("pol0");

    graphs_.at(i)->SetMarkerStyle(20);

    double colour = colour = i*0.1;
    graphs_.at(i)->SetMarkerColor(colour);
    graphs_.at(i)->SetLineColor(colour);
    fit->SetLineColor(colour);

    if(i==0) graphs_.at(i)->Draw("AP");
    else graphs_.at(i)->Draw("P SAME");
    fit->Draw("same");
  }

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}

TH1D *GetDeltaPrimeHist(vector<TGraphErrors*> deltaPrimeFits_, double h_min, double h_max, double binWidth) { 

  int nBins = (h_max-h_min)/binWidth;

  TH1D *h = new TH1D("h", "h", nBins, h_min, h_max);

  for(auto& gr : deltaPrimeFits_) { 

    TF1 *fit = gr->GetFunction("pol0");

    double delta_prime = fit->GetParameter(0);

    h->Fill(delta_prime);

  }

  return h;

}

void DrawDeltaPrimeHist(TH1D *hist, std::string title, std::string fname) {

  TCanvas *c = new TCanvas("c","c",800,600);

  hist->SetTitle(title.c_str());

  hist->SetStats(0);
      
  hist->GetXaxis()->SetTitleSize(.04);
  hist->GetYaxis()->SetTitleSize(.04);
  hist->GetXaxis()->SetTitleOffset(1.1);
  hist->GetYaxis()->SetTitleOffset(1.1);
  hist->GetXaxis()->CenterTitle(1);
  hist->GetYaxis()->CenterTitle(1);
  hist->GetYaxis()->SetMaxDigits(4);
  hist->SetLineWidth(3);
  hist->SetLineColor(1);

  //TPaveText *names = new TPaveText(0.56,0.75,0.65,0.89,"NDC");
  TPaveText *names = new TPaveText(0.11,0.75,0.20,0.89,"NDC");

  names->SetTextAlign(13);
  names->AddText("#LT#delta'#GT [mrad]"); 
  names->AddText("#sigma_{#delta'} [mrad]"); 

  TPaveText *values = new TPaveText(0.30,0.75,0.45,0.89,"NDC");
  values->SetTextAlign(33);
  values->AddText(Round(hist->GetMean(),4)+"#pm"+Round(hist->GetMeanError(),1)); 
  values->AddText(Round(hist->GetRMS(),2)+"#pm"+Round(hist->GetRMSError(),1)); 

  names->SetTextSize(24);
  names->SetTextFont(44);
  names->SetFillColor(0);
  values->SetFillColor(0);
  values->SetTextFont(44);
  values->SetTextSize(24);

  hist->Draw("HIST");
  names->Draw("SAME");
  values->Draw("SAME");
  
  c->SaveAs((fname+".C").c_str());
  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());

  delete c;

  return;
}

double GetLimit(double delta_prime) { 

  // CODATA 2018
  double pi = 3.14159265358979323846;
  double h = 6.62607015e-34; // Js
  double c = 299792458; // m/s
  double e = 1.602176634e-19; // C

  // Conversions
  double Mev2J = e*1e6;
  double MeV2kg = Mev2J / pow(c,2);
  double m2cm = 1e-2;
  double mrad2rad = 1e-3;

  double m_mu = M_MU * MeV2kg;
  double beta = sqrt(1-(1/pow(GMAGIC,2)));
  double hbar = h/(2*pi);

  // Calculate dMu in SI units
  double dMu = (e*hbar*A_MU*GMAGIC)/(2*m_mu*c*beta) * atan(delta_prime*mrad2rad); // Cm

  // Convert to ecm
  dMu = dMu / (m2cm * e);

  return dMu;

}

// Loop through x-bins, loop through y-bin contents in that x-bin. Count bin contents greater than zero and less than zero.
TH1D *GetDifferencePlot(TH2D *h2) { 

	// Set this to a profile at first of the first to copy the binning
	TH1D *h1 = h2->ProfileX();

	// Loop through x-bins 
	for(int i_xbin = 0; i_xbin < h2->GetNbinsX(); i_xbin++) {

		double x = h1->GetBinCenter(i_xbin+1);

		// Project the x-bin along y 
		TH1D *projY = h2->ProjectionY("projY",i_xbin+1,i_xbin+1);

		int up = 0;
		int down = 0;

		// Loop through y-bins
		for(int i_ybin = 0; i_ybin < projY->GetNbinsX(); i_ybin++) {

			double binContent = projY->GetBinContent(i_ybin+1);
			double binCenter = projY->GetBinCenter(i_ybin+1);

			if(binCenter > 0) up = up + binContent;
			else if(binCenter < 0) down = down + binContent;

		}

		double A = (double(up)-double(down))/(double(up)+double(down));

		cout<<"x "<<x<<", up "<<up<<", down "<<down<<", A "<<A<<endl;

		h1->SetBinContent(i_xbin+1, A);

		// Same as ratio method
		double eA = sqrt((1-pow(A,2))/(up+down));

		h1->SetBinError(i_xbin+1, eA);

	}	

	return h1;

}

void RunSim(string config, string dataset) { 

	cout<<"\n***************************** SIM *****************************\n"<<endl;

	cout<<"\n***************************** Processing input configuration *****************************\n"<<endl;

	int step = GetStep(config);
	std::string qual = GetQual(config);
	std::string tracksOrDecays = GetTracksOrDecays(config);
	std::string tracksOrDecaysLabel = GetTracksOrDecaysLabel(config);

	cout<<"Running "<<config<<" with... "<<dataset<<" ecm"<<endl;
	cout<<"Info:\n"<<step<<", "<<qual<<", "<<tracksOrDecays<<", "<<tracksOrDecaysLabel<<endl; // ", "<<blinding<<endl;

	cout<<"\n***************************** Creating output file *****************************\n"<<endl;

	TString outputFileName = "../Plots/MC/dMu/"+dataset+"/Plots/edmPlots_differencePlot_"+config+".root";
	TFile *outputFile = new TFile(outputFileName, "RECREATE");

	cout<<"\n***************************** Getting data *****************************\n"<<endl;

	TString inputFileName = "../Plots/MC/dMu/"+dataset+"/Plots/edmPlots_"+config+".root";//+to_string(step)+"MeV_BQ.root";
	TFile *inputFile = TFile::Open(inputFileName);

  	cout<<"Got input file:\n"<<inputFileName<<", "<<inputFile<<endl;

  	vector<string> stn_ = {"S0_", "S12_", "S18_", "S12S18_", "S0S12S18_"};
  	if(tracksOrDecaysLabel=="Decays") stn_ = {""};

    for(auto& stn : stn_) {

      TString h2Name = "MainPlots/"+stn+"ThetaY_vs_Time_Modulo";
      TH2D *h2 = (TH2D*)inputFile->Get(h2Name);

      cout<<"Got histogram "<<h2Name<<", "<<h2<<endl;

      TH1D *h1 = GetDifferencePlot(h2);

      DrawTH1(h1, stn+";t^{mod}_{g#minus2} [#mus];Asymmetry / 50 ns", "../Images/MC/dMu/5.4e-18/MainPlots/"+stn+"DifferenceHist_"+config);

  	}

	cout<<"\n***************************** Writing output *****************************\n"<<endl;

	cout<<"Written results to output file "<<outputFileName<<", "<<outputFile<<endl;

  	inputFile->Close();
  	outputFile->Close();

	return;

}

void DifferencePlot() { 

	RunSim("allDecays_AAR_250MeV_AQ", "5.4e-18");
	RunSim("trackReco_AAR_250MeV_BQ", "5.4e-18");

  // ../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackReco_AAR_250MeV_BQ.root
  // ../Plots/Data/dMu/Run-1a/Fits/edmFits_blinded_Run-1a_250MeV_BQ.root
/*  RunSim("allDecays_AAR_250MeV_AQ", "5.4e-18", "unblinded");
  RunSim("acceptedDecays_AAR_250MeV_AQ", "5.4e-18", "unblinded");
  RunSim("acceptedDecaysControl_AAR_250MeV_AQ", "5.4e-18", "unblinded");
  RunSim("trackRecoControl_AAR_250MeV_BQ", "5.4e-18", "unblinded");
  RunSim("trackRecoControl_AAR_250MeV_CQ", "5.4e-18", "unblinded");
  RunSim("trackTruth_AAR_250MeV_AQ", "5.4e-18", "unblinded");
  RunSim("trackReco_AAR_250MeV_AQ", "5.4e-18", "unblinded");
  RunSim("trackTruth_AAR_250MeV_BQ", "5.4e-18", "unblinded");
	RunSim("trackReco_AAR_250MeV_BQ", "5.4e-18", "unblinded");*/

  //RunData("Run-1a_250MeV_BQ", "Run-1", blinded");
  //RunData("Run-1a_250MeV_BQ_withFR", "Run-1", "blinded");


/*  RunData("Run-1a_125MeV_BQ", "Run-1", "blinded", true);
  RunData("Run-1b_125MeV_BQ", "Run-1", "blinded", true);
  RunData("Run-1c_125MeV_BQ", "Run-1", "blinded", true);
  RunData("Run-1d_125MeV_BQ", "Run-1", "blinded", true);
*/
/*  RunData("Run-1a_125MeV_BQ", "Run-1", "blinded", false);
  RunData("Run-1b_125MeV_BQ", "Run-1", "blinded", false);
  RunData("Run-1c_125MeV_BQ", "Run-1", "blinded", false);
  RunData("Run-1d_125MeV_BQ", "Run-1", "blinded", false);*/

/*  RunData("Run-1a_125MeV_BQ", "O", "unblinded", true);
  RunData("Run-1b_125MeV_BQ", "O", "unblinded", true);
  RunData("Run-1c_125MeV_BQ", "O", "unblinded", true);
  RunData("Run-1d_125MeV_BQ", "O", "unblinded", true);*/
/*
  RunData("Run-1a_125MeV_BQ", "O", "unblinded", false);
  RunData("Run-1b_125MeV_BQ", "O", "unblinded", false);
  RunData("Run-1c_125MeV_BQ", "O", "unblinded", false);
  RunData("Run-1d_125MeV_BQ", "O", "unblinded", false);*/

	return;

}