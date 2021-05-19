#include <iostream>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

using namespace std;

string qual = "AQ"; 

void OverlayScanGraphs(vector<TGraphErrors*> graphs, string names[], std::string title, std::string fname, double ymin, double ymax, bool sym) {

  TCanvas *c = new TCanvas("c","c",800,600);

  TLegend *l = new TLegend(0.59,0.79,0.89,0.89);
  l->SetNColumns(3);
  l->SetBorderSize(0);

  graphs.at(0)->SetTitle(title.c_str());
  graphs.at(0)->GetXaxis()->SetTitleSize(.04);
  graphs.at(0)->GetYaxis()->SetTitleSize(.04);
  graphs.at(0)->GetXaxis()->SetTitleOffset(1.1);
  graphs.at(0)->GetYaxis()->SetTitleOffset(1.1);
  graphs.at(0)->GetXaxis()->CenterTitle(true);
  graphs.at(0)->GetYaxis()->CenterTitle(true);
  graphs.at(0)->GetYaxis()->SetMaxDigits(4);
  graphs.at(0)->GetYaxis()->SetRangeUser(ymin,ymax);

  int nGraphs = graphs.size();

  // Hack together x-axis range
  int N = graphs.at(0)->GetN();
  double xmax = graphs.at(0)->GetPointX(N-1); 
  double xmin = graphs.at(0)->GetPointX(1);// Cut lowest momentum bin - 50; 
  if(sym) xmin = graphs.at(0)->GetPointX(0);

  double offset = (xmax - xmin) * 0.05;
  xmin = xmin - offset; 
  xmax = xmax + offset;
  graphs.at(0)->GetXaxis()->SetRangeUser(xmin, xmax);

  graphs.at(0)->SetMarkerStyle(20);
  graphs.at(1)->SetMarkerStyle(24);

  graphs.at(0)->Draw("AP"); 
  graphs.at(1)->Draw("P"); 

  for(int i = 0; i < nGraphs; i++) l->AddEntry(graphs.at(i), (names[i]).c_str());

  l->Draw("same");

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());


  delete c;

  return;

}

void plot_EDM_momentum_scans() {

	cout<<"\nPlotting EDM momementum scans"<<endl; 

	string names[] = {"Reco", "Truth"};

	string recoFileName = "../Plots/MC/dMu/5.4e-18/dMuSim_unblindedFits_trackReco_"+qual+".root"; 
	string truthFileName = "../Plots/MC/dMu/5.4e-18/dMuSim_unblindedFits_truth_"+qual+".root"; 

	TFile *recoFile = TFile::Open((recoFileName).c_str()); 
	TFile *truthFile = TFile::Open((truthFileName).c_str());

	cout<<"\nGot reco file "<<recoFileName<<" "<<recoFile<<endl;
	cout<<"Got truth file "<<truthFileName<<" "<<truthFile<<"\n"<<endl;

	TGraphErrors *gr_reco_p_slice = (TGraphErrors*)recoFile->Get("MomentumBinnedAnalysis/ParameterScans/MomSlices/S0S12S18_A_vs_p");
	TGraphErrors *gr_reco_p_sym = (TGraphErrors*)recoFile->Get("MomentumBinnedAnalysis/ParameterScans/MomSymCuts/S0S12S18_A_vs_p");
	TGraphErrors *gr_reco_p_min = (TGraphErrors*)recoFile->Get("MomentumBinnedAnalysis/ParameterScans/MomMinScan/S0S12S18_A_vs_p");

	TGraphErrors *gr_truth_p_slice = (TGraphErrors*)truthFile->Get("MomentumBinnedAnalysis/ParameterScans/MomSlices/A_vs_p");
	TGraphErrors *gr_truth_p_sym = (TGraphErrors*)truthFile->Get("MomentumBinnedAnalysis/ParameterScans/MomSymCuts/A_vs_p");
	TGraphErrors *gr_truth_p_min = (TGraphErrors*)truthFile->Get("MomentumBinnedAnalysis/ParameterScans/MomMinScan/A_vs_p");

	cout<<"Got reco momentum slice graph "<<gr_reco_p_slice<<endl;
	cout<<"Got reco momentum symmetric cuts graph "<<gr_reco_p_sym<<endl;
	cout<<"Got reco momentum min scan graph "<<gr_reco_p_min<<endl;

	cout<<"Got truth momentum slice graph "<<gr_truth_p_slice<<endl;
	cout<<"Got truth momentum symmetric cuts graph "<<gr_truth_p_sym<<endl;
	cout<<"Got truth momentum min scan graph "<<gr_truth_p_min<<"\n"<<endl;

	double ymin = -0.15; double ymax = 0.35;

	vector<TGraphErrors*> gr_p_slice_ = {gr_reco_p_slice, gr_truth_p_slice}; 
	vector<TGraphErrors*> gr_p_sym_ = {gr_reco_p_sym, gr_truth_p_sym}; 
	vector<TGraphErrors*> gr_p_min_ = {gr_reco_p_min, gr_truth_p_min}; 

	OverlayScanGraphs(gr_p_slice_, names, "", "../Images/MC/Dilution/dMu/A_vs_p_slice_"+qual, -0.15, 0.35, false);
	OverlayScanGraphs(gr_p_sym_, names, "", "../Images/MC/Dilution/dMu/A_vs_p_sym_"+qual, 0.1, 0.26, true);
	OverlayScanGraphs(gr_p_min_, names, "", "../Images/MC/Dilution/dMu/A_vs_p_min_"+qual, -0.025, 0.25, false);

	recoFile->Close();
	truthFile->Close();

	return; 

}

void plot_Bz_momentum_scans() { 

	cout<<"\nPlotting Bz momementum scans"<<endl; 

	string names[] = {"Reco", "Truth"};

	string recoFileName = "../Plots/MC/BzSim/1700ppm/BzSim_unblindedFits_trackReco_"+qual+".root"; 
	string truthFileName = "../Plots/MC/BzSim/1700ppm/BzSim_unblindedFits_truth_"+qual+".root"; 

	TFile *recoFile = TFile::Open((recoFileName).c_str()); 
	TFile *truthFile = TFile::Open((truthFileName).c_str());

	cout<<"\nGot reco file "<<recoFileName<<" "<<recoFile<<endl;
	cout<<"Got truth file "<<truthFileName<<" "<<truthFile<<"\n"<<endl;

	TGraphErrors *gr_reco_p_slice = (TGraphErrors*)recoFile->Get("MomentumBinnedAnalysis/ParameterScans/MomSlices/S0S12S18_A_vs_p");
	TGraphErrors *gr_reco_p_sym = (TGraphErrors*)recoFile->Get("MomentumBinnedAnalysis/ParameterScans/MomSymCuts/S0S12S18_A_vs_p");
	TGraphErrors *gr_reco_p_min = (TGraphErrors*)recoFile->Get("MomentumBinnedAnalysis/ParameterScans/MomMinScan/S0S12S18_A_vs_p");

	TGraphErrors *gr_truth_p_slice = (TGraphErrors*)truthFile->Get("MomentumBinnedAnalysis/ParameterScans/MomSlices/A_vs_p");
	TGraphErrors *gr_truth_p_sym = (TGraphErrors*)truthFile->Get("MomentumBinnedAnalysis/ParameterScans/MomSymCuts/A_vs_p");
	TGraphErrors *gr_truth_p_min = (TGraphErrors*)truthFile->Get("MomentumBinnedAnalysis/ParameterScans/MomMinScan/A_vs_p");

	cout<<"Got reco momentum slice graph "<<gr_reco_p_slice<<endl;
	cout<<"Got reco momentum symmetric cuts graph "<<gr_reco_p_sym<<endl;
	cout<<"Got reco momentum min scan graph "<<gr_reco_p_min<<endl;

	cout<<"Got truth momentum slice graph "<<gr_truth_p_slice<<endl;
	cout<<"Got truth momentum symmetric cuts graph "<<gr_truth_p_sym<<endl;
	cout<<"Got truth momentum min scan graph "<<gr_truth_p_min<<"\n"<<endl;

	double ymin = -0.15; double ymax = 0.35;

	vector<TGraphErrors*> gr_p_slice_ = {gr_reco_p_slice, gr_truth_p_slice}; 
	vector<TGraphErrors*> gr_p_sym_ = {gr_reco_p_sym, gr_truth_p_sym}; 
	vector<TGraphErrors*> gr_p_min_ = {gr_reco_p_min, gr_truth_p_min}; 

	OverlayScanGraphs(gr_p_slice_, names, "", "../Images/MC/Dilution/Bz/A_vs_p_slice_"+qual, -0.35, 0.35, false);
	OverlayScanGraphs(gr_p_sym_, names, "", "../Images/MC/Dilution/Bz/A_vs_p_sym_"+qual, 0.1, 0.26, true);
	OverlayScanGraphs(gr_p_min_, names, "", "../Images/MC/Dilution/Bz/A_vs_p_min_"+qual, -0.06, 0.25, false);

	return; 

}

int main() { 

	plot_EDM_momentum_scans();

	plot_Bz_momentum_scans();

	return 0; 

}