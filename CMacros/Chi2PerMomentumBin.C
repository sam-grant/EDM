#include "Utils.h"

double pmin = 1000;
double pmax = 2500;

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

void DrawChi2Fit(TGraphErrors *gr, string label, string title, string fname) {

  cout<<"\nDrawing"<<endl;

  TCanvas *c = new TCanvas("c","c",800,600);

  TLegend *l = new TLegend(0.11, 0.75, 0.59, 0.89); 
  //TLegend *l = new TLegend(0.41, 0.75, 0.89, 0.89); 

  l->SetBorderSize(0);

  TF1 *fit = (TF1*)gr->GetFunction("pol0");

  l->AddEntry(gr, label.c_str());
  l->AddEntry(fit, ("#LT#chi^{2}/NDF#GT = "+Round(fit->GetParameter(0),3)+"#pm"+Round(fit->GetParError(0),2)));

  l->SetTextSize(26);
  l->SetTextFont(44);

  gr->SetTitle(title.c_str());
  gr->GetXaxis()->SetTitleSize(.04);
  gr->GetYaxis()->SetTitleSize(.04);
  gr->GetXaxis()->SetTitleOffset(1.1);
  gr->GetYaxis()->SetTitleOffset(1.1);
  gr->GetXaxis()->CenterTitle(true);
  gr->GetYaxis()->CenterTitle(true);
  gr->GetYaxis()->SetMaxDigits(4);

  // Set y-range
  double ymin = 0;//gr->GetFunction("pol0")->GetParameter(0) - 1.5;
  double ymax = gr->GetFunction("pol0")->GetParameter(0) + 1.0;//1.5;

  gr->GetYaxis()->SetRangeUser(ymin,ymax);

  gr->SetMarkerStyle(20);

  gr->Draw("APL");

  l->Draw("same");

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;
}

TGraphErrors *ResetGraph(TGraphErrors *grIn, double xmin, double xmax) {

  TGraphErrors *grOut = new TGraphErrors();
  int count = 0;
  
  for(int i(0); i<grIn->GetN(); i++) { 

    double x = grIn->GetX()[i];
    double y = grIn->GetY()[i];
    double ey = grIn->GetEY()[i];   

      if(x<xmin || x>xmax) continue;

      grOut->SetPoint(count, x, y);
      grOut->SetPointError(count, 0., ey);  

      count++;

  }


  return grOut;

}

void Run(std::string config) { 

	TString finName = "../Plots/Data/dMu/Run-1/Fits/edmFits_blinded_"+config+".root";
	TFile *fin = TFile::Open(finName);

	string dataset = GetDataset(config);

	cout<<finName<<", "<<fin<<endl;

	vector<string> stn_ = {"S12", "S18", "S12S18"};

	for(auto& stn : stn_) { 

		TGraphErrors *gr = (TGraphErrors*)fin->Get(("MomentumBinnedAnalysis/ParameterScans/"+stn+"_chi2NDF_vs_p").c_str());

    gr = ResetGraph(gr, pmin, pmax);
		TF1 *fit = new TF1("pol0", "pol0", pmin, pmax);
		fit->SetParameter(0, 1);
		gr->Fit(fit, "R");

		DrawChi2Fit(gr, dataset, ";Decay vertex momentum [MeV];#chi^{2}/NDF / 250 MeV", "../Images/Data/dMu/Run-1/Results/"+stn+"_chi2NDF_vs_p_fit_"+config);

	}
	
	fin->Close();

	return;

}

void Chi2PerMomentumBin() { 

	Run("Run-1a_250MeV_1000_2500_MeV_BQ");
	Run("Run-1b_250MeV_1000_2500_MeV_BQ");
	Run("Run-1c_250MeV_1000_2500_MeV_BQ");
	Run("Run-1d_250MeV_1000_2500_MeV_BQ");

	return;

}