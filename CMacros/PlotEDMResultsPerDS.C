#include "Utils.h"

void DrawGraph(TGraphErrors *graph, std::string title, std::string fname, vector<string> xLabel_) {

  TCanvas *c = new TCanvas("c","c",800,600);

  graph->SetTitle(title.c_str());
  graph->GetXaxis()->SetTitleSize(.04);
  graph->GetYaxis()->SetTitleSize(.04);
  graph->GetXaxis()->SetTitleOffset(1.1);
  graph->GetYaxis()->SetTitleOffset(1.2);
  graph->GetXaxis()->CenterTitle(true);
  graph->GetYaxis()->CenterTitle(true);
  graph->GetYaxis()->SetMaxDigits(4);
  graph->SetMarkerStyle(20); //  Full circle

  for(int i(0); i<graph->GetN(); i++) graph->GetXaxis()->SetBinLabel(graph->GetXaxis()->FindBin(i+1), (xLabel_.at(i)).c_str());

  graph->GetXaxis()->LabelsOption("h");

  graph->Draw("AP")	;

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}

void DrawAllGraphs(vector<TGraphErrors*> graph_, std::string title, std::string fname, vector<string> xLabel_) {

  TCanvas *c = new TCanvas("c","c",800,600);

 //TLegend *l = new TLegend(0.59, 0.69, 0.89, 0.89); 
   TLegend *l = new TLegend(0.31, 0.91, 0.78, 0.99); 
  l->SetNColumns(3);
  l->SetBorderSize(0);
  l->SetTextSize(24);
  l->SetTextFont(44);

  vector<string> label_ = {"S12", "S18", "S12 & S18"};

  graph_.at(0)->SetTitle(title.c_str());
  graph_.at(0)->GetXaxis()->SetTitleSize(.04);
  graph_.at(0)->GetYaxis()->SetTitleSize(.04);
  graph_.at(0)->GetXaxis()->SetTitleOffset(1.1);
  graph_.at(0)->GetYaxis()->SetTitleOffset(1.2);
  graph_.at(0)->GetXaxis()->CenterTitle(true);
  graph_.at(0)->GetYaxis()->CenterTitle(true);
  graph_.at(0)->GetYaxis()->SetMaxDigits(4);

  // Find y-range
  double ymax = graph_.at(0)->GetY()[0] + 1.5*graph_.at(0)->GetEY()[0];
  double ymin = graph_.at(0)->GetY()[0] - 1.5*graph_.at(0)->GetEY()[0];  

  for(int i(0); i<graph_.size(); i++) {

    double ymin1 = graph_.at(i)->GetY()[0] - 1.5*graph_.at(i)->GetEY()[0]; 
    double ymax1 = graph_.at(i)->GetY()[0] + 1.5*graph_.at(i)->GetEY()[0]; 

    for(int j(1); j<graph_.at(0)->GetN(); j++) { 

      double ymax2 = graph_.at(i)->GetY()[j] + 1.5*graph_.at(i)->GetEY()[j];
      double ymin2 = graph_.at(i)->GetY()[j] - 1.5*graph_.at(i)->GetEY()[j]; 

      if(ymin2 < ymin1) ymin1 = ymin2;
      if(ymax2 > ymax1) ymax1 = ymax2;

    }

    if(ymin1 < ymin) ymin = ymin1;
    if(ymax1 > ymax) ymax = ymax1;

  }

  graph_.at(0)->GetYaxis()->SetRangeUser(ymin, ymax);

  for(int i(0); i<graph_.at(0)->GetN(); i++) graph_.at(0)->GetXaxis()->SetBinLabel(graph_.at(0)->GetXaxis()->FindBin(i+1), (xLabel_.at(i)).c_str());

  graph_.at(0)->GetXaxis()->LabelsOption("h");
  
  vector<int> colour_ = {4,2,1};

  for(int i(0); i<graph_.size(); i++) {
    graph_.at(i)->SetMarkerStyle(20);
    graph_.at(i)->SetMarkerColor(colour_.at(i));
    graph_.at(i)->SetLineColor(colour_.at(i));
    if(i==0) graph_.at(i)->Draw("AP");
    graph_.at(i)->Draw("P SAME");
    l->AddEntry(graph_.at(i), label_.at(i).c_str());
  }

  l->Draw("SAME");


  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

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

void PlotEDMResultsPerDS() { 

	vector<string> DS_ = {"Run-1a", "Run-1b", "Run-1c", "Run-1d"};
	vector<string> stn_ = {"S12", "S18", "S12S18"};
	vector<string> fitType_ {"g2", "EDM"};


	TFile *file_1a = TFile::Open("../Plots/Data/dMu/Run-1a/Fits/edmResults_blinded_Run-1a_250MeV_BQ.root");
	TFile *file_1b = TFile::Open("../Plots/Data/dMu/Run-1b/Fits/edmResults_blinded_Run-1b_250MeV_BQ.root");
	TFile *file_1c = TFile::Open("../Plots/Data/dMu/Run-1c/Fits/edmResults_blinded_Run-1c_250MeV_BQ.root");
	TFile *file_1d = TFile::Open("../Plots/Data/dMu/Run-1d/Fits/edmResults_blinded_Run-1d_250MeV_BQ.root");

	vector<TFile*> files_ = {file_1a, file_1b, file_1c, file_1d};

  for(auto& fitType : fitType_) {

    std::string subscript = "";
       		std::string title = "";

    if(fitType == "EDM") {
      subscript += fitType;
      title += ";;d_{#mu}^{BLIND} [e#upointcm]";
    } else if(fitType == "g2") {
      subscript += "g#minus2";
      title += ";;B_{z}/B_{y} [ppm]";
    }

    vector<TGraphErrors*> gr_; 

    for(auto& stn : stn_) {

		TGraphErrors *gr = new TGraphErrors();

		for(int i=0; i<DS_.size(); i++) {

			TGraphErrors *gr_delta_prime = (TGraphErrors*)files_.at(i)->Get((fitType+"/"+stn+"_delta_prime_vs_p").c_str());
			TH1D *h_delta_prime = (TH1D*)files_.at(i)->Get((fitType+"/"+stn+"_h_delta_prime").c_str());

			double A = gr_delta_prime->GetFunction("pol0")->GetParameter(0);
			double eA = sqrt( pow(gr_delta_prime->GetFunction("pol0")->GetParError(0),2) + pow(h_delta_prime->GetRMS(),2) );

			if(fitType == "EDM") {

				A = GetLimit(A);
				eA = GetLimit(eA);

			} else if(fitType == "g2") { 

				A = 1e3*A;
				eA = 1e3*eA;
			}

			gr->SetPoint(i,i+1,A);
			gr->SetPointError(i,0,eA);
		}

		std::string new_title = stn+title;

		DrawGraph(gr, new_title.c_str(), "../Images/Data/dMu/Run-1/"+stn+"_A"+fitType+"_vs_DS", DS_);

    gr_.push_back(gr);

	 }

   DrawAllGraphs(gr_, title.c_str(), "../Images/Data/dMu/Run-1/A"+fitType+"_vs_DS", DS_);

  }

	return;
}