#include <iostream>

#include "FancyDraw.h"
#include "Utils.h"
#include "RootInclude.h"

std::string config = "1700ppm";
//std::string qual = "vertCorr_eQ_bQ";
//std::string qual = "gQ_coarse";
//std::string qual = "vertCorr_eQ_eQ_2";
//std::string qual = "eQ_2";
//std::string qual = "tmp";
std::string qual = "eQ_2";
//std::string qual = "bQ";
double xmin = 7*G2PERIOD;
double xmax = 70*G2PERIOD;

using namespace std;

// TODO: improve these drawing functions

void DrawModWiggle(TGraphErrors *graph, string title, string fname) {

	TCanvas *c = new TCanvas("c","c",800,600);

	TF1 *func = graph->GetFunction("FiveParFunc");

	graph->SetTitle(title.c_str());
	graph->GetXaxis()->SetTitleSize(.04);
	graph->GetYaxis()->SetTitleSize(.04);
	graph->GetXaxis()->SetTitleOffset(1.1);
	graph->GetYaxis()->SetTitleOffset(1.25);
	graph->GetXaxis()->CenterTitle(true);
	graph->GetYaxis()->CenterTitle(true);
	graph->GetYaxis()->SetMaxDigits(4);
	graph->SetMarkerStyle(20); //  Full circle
	graph->Draw("AP");

	func->SetLineWidth(3);
	func->SetLineColor(kRed);
	func->SetNpx(1e4);	

	gPad->Update();
	gStyle->SetStatFormat("6.3g");
	gStyle->SetOptFit(111); 

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawBzFit(TGraphErrors *graph, string title, string fname, double N, double ymin, double ymax) { 

  graph->Draw();
  gPad->Update();
  gStyle->SetOptStat(0);
  gStyle->SetOptFit(0);
  gROOT->ForceStyle();

  TF1 *func = graph->GetFunction("BzFunc");

  TCanvas *c = new TCanvas("c","c",800,600);

  double chi2ndf = func->GetChisquare() / func->GetNDF();
  double par0 = func->GetParameter(0); double err0 = func->GetParError(0);
  double par3 = func->GetParameter(3); double err3 = func->GetParError(3);
  double par6 = func->GetParameter(6); double err6 = func->GetParError(6);

  //TLegend *leg = new TLegend(0.15,0.79,0.85,0.89);
  TLegend *leg = new TLegend(0.125,0.15,0.875,0.25);
  leg->SetNColumns(2);
  leg->AddEntry(graph, "Sim   ");
  leg->AddEntry(func,"A_{Bz}cos(#omega_{a}t #plus #phi) #plus A_{EDM}sin(#omega_{a}t #plus #phi) #plus c");
  leg->SetBorderSize(0);

  TPaveText *names = new TPaveText(0.50,0.62,0.70,0.89,"NDC");

  names->SetTextAlign(13);
  names->AddText("N"); 
  names->AddText("#chi^{2}/ndf");
  names->AddText("A_{Bz} [mrad]");
  names->AddText("A_{EDM} [mrad]");
  names->AddText("c [mrad]"); 

  //TPaveText *values = new TPaveText(0.31,0.15,0.51,0.40,"NDC");
  TPaveText *values = new TPaveText(0.70,0.62,0.89,0.89,"NDC");
  values->SetTextAlign(33);
  values->AddText(SciNotation(double(N))); 
  values->AddText(Round(chi2ndf, 3));
  values->AddText(Round(par0, 3)+"#pm"+Round(err0, 1));
  values->AddText(Round(par3, 2)+"#pm"+Round(err3, 1));
  values->AddText(Round(par6, 1)+"#pm"+Round(err6, 1));

  TPaveText *cuts = new TPaveText(0.20,0.70,0.40,0.80,"NDC");
  cuts->SetTextAlign(22);
  cuts->AddText("700 < p [MeV] < 2400");
  cuts->AddText("0 < t [#mus] < 300");

  //leg->SetTextSize(26);
  names->SetTextSize(26);
  names->SetTextFont(44);
  names->SetFillColor(0);
  values->SetFillColor(0);
  values->SetTextFont(44);
  values->SetTextSize(26);
  cuts->SetFillColor(0);
  cuts->SetTextFont(44);
  cuts->SetTextSize(26);

  graph->SetTitle(title.c_str());
  graph->GetXaxis()->SetTitleSize(.04);
  graph->GetYaxis()->SetTitleSize(.04);
  graph->GetXaxis()->SetTitleOffset(1.1);
  graph->GetYaxis()->SetTitleOffset(1.1);
  graph->GetXaxis()->CenterTitle(true);
  graph->GetYaxis()->CenterTitle(true);
  graph->GetYaxis()->SetMaxDigits(4);
  graph->SetMarkerStyle(20); //  Full circle
  //graph->GetYaxis()->SetRangeUser(ymin, ymax);

/*  graph->Draw();
  gPad->Update();
  gStyle->SetOptStat(0);
  gStyle->SetOptFit(0);
  gPad->Update();

  gStyle->SetOptStat(0);
  gROOT->ForceStyle();*/

  graph->Draw("AP");
  values->Draw("same");
  names->Draw("same");
  cuts->Draw("same");
  leg->Draw("same");
  func->Draw("same");

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;
}


void DrawPureBzFit(TGraphErrors *graph, string title, string fname, double N, double ymin, double ymax) { 

  graph->Draw();
  gPad->Update();
  gStyle->SetOptStat(0);
  gStyle->SetOptFit(0);
  gROOT->ForceStyle();

  TF1 *func = graph->GetFunction("PureBzFunc");

  TCanvas *c = new TCanvas("c","c",800,600);

  double chi2ndf = func->GetChisquare() / func->GetNDF();
  double par0 = func->GetParameter(0); double err0 = func->GetParError(0);
  double par3 = func->GetParameter(3); double err3 = func->GetParError(3);

  //TLegend *leg = new TLegend(0.15,0.79,0.85,0.89);
  TLegend *leg = new TLegend(0.125,0.15,0.875,0.25);
  leg->SetNColumns(2);
  leg->AddEntry(graph, "Sim   ");
  leg->AddEntry(func,"A_{Bz}cos(#omega_{a}t #plus #phi) #plus c");
  leg->SetBorderSize(0);

  TPaveText *names = new TPaveText(0.50,0.62,0.70,0.89,"NDC");

  names->SetTextAlign(13);
  names->AddText("N"); 
  names->AddText("#chi^{2}/ndf");
  names->AddText("A_{Bz} [mrad]");
  names->AddText("c [mrad]"); 

  //TPaveText *values = new TPaveText(0.31,0.15,0.51,0.40,"NDC");
  TPaveText *values = new TPaveText(0.70,0.62,0.89,0.89,"NDC");
  values->SetTextAlign(33);
  values->AddText(SciNotation(double(N))); 
  values->AddText(Round(chi2ndf, 3));
  values->AddText(Round(par0, 3)+"#pm"+Round(err0, 1));
  values->AddText(Round(par3, 2)+"#pm"+Round(err3, 1));

  TPaveText *cuts = new TPaveText(0.20,0.70,0.40,0.80,"NDC");
  cuts->SetTextAlign(22);
  cuts->AddText("700 < p [MeV] < 2400");
  cuts->AddText("0 < t [#mus] < 300");

  //leg->SetTextSize(26);
  names->SetTextSize(26);
  names->SetTextFont(44);
  names->SetFillColor(0);
  values->SetFillColor(0);
  values->SetTextFont(44);
  values->SetTextSize(26);
  cuts->SetFillColor(0);
  cuts->SetTextFont(44);
  cuts->SetTextSize(26);

  graph->SetTitle(title.c_str());
  graph->GetXaxis()->SetTitleSize(.04);
  graph->GetYaxis()->SetTitleSize(.04);
  graph->GetXaxis()->SetTitleOffset(1.1);
  graph->GetYaxis()->SetTitleOffset(1.1);
  graph->GetXaxis()->CenterTitle(true);
  graph->GetYaxis()->CenterTitle(true);
  graph->GetYaxis()->SetMaxDigits(4);
  graph->SetMarkerStyle(20); //  Full circle
  //graph->GetYaxis()->SetRangeUser(ymin, ymax);

/*  graph->Draw();
  gPad->Update();
  gStyle->SetOptStat(0);
  gStyle->SetOptFit(0);
  gPad->Update();

  gStyle->SetOptStat(0);
  gROOT->ForceStyle();*/

  graph->Draw("AP");
  values->Draw("same");
  names->Draw("same");
  cuts->Draw("same");
  leg->Draw("same");
  func->Draw("same");

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;
}


void OverlayGraphs(std::vector<TGraphErrors*> graphs, std::vector<string> names, std::string title, std::string fname, double ymin, double ymax ) {

  TCanvas *c = new TCanvas("c","c",800,600);

  TLegend *l = new TLegend(0.55,0.79,0.89,0.89);
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

  graphs.at(0)->SetMarkerColor(kBlack);
  graphs.at(1)->SetMarkerColor(kBlue);
  graphs.at(2)->SetMarkerColor(kRed);

  for(int i = 0; i < nGraphs; i++) {
    graphs.at(i)->SetMarkerStyle(20);
    if(i==3) graphs.at(i)->SetMarkerColor(kGreen-3);
    else if(i==4) graphs.at(i)->SetMarkerColor(kOrange+7);
    l->AddEntry(graphs.at(i), (names.at(i)).c_str());
    if(i==0) graphs.at(i)->Draw("AP");
    else graphs.at(i)->Draw("P SAME");
  }

  l->Draw("same");
  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());

  delete c;

  return;

}

void MomentumBinnedAnalysis(TFile *input, TFile *output, const double phi) {  

  vector<TGraphErrors*> c_vs_p_slice_; vector<TGraphErrors*> ABz_vs_p_slice_;
  vector<TGraphErrors*> c_vs_p_pmin_; vector<TGraphErrors*> ABz_vs_p_pmin_;
  vector<TGraphErrors*> c_vs_p_sym_; vector<TGraphErrors*> ABz_vs_p_sym_;

  std::vector<string> names_ = { "S0", "S12", "S18", "S12S18", "S0S12S18"};

  cout<<"Hello"<<endl;
  for(int i_stn = 0; i_stn < names_.size(); i_stn++) {

    std::string name = names_.at(i_stn);

    std::vector<double> c_slice_;
    std::vector<double> ec_slice_;
    std::vector<double> p_slice_;
    std::vector<double> ep_slice_;
    std::vector<double> ABz_slice_;
    std::vector<double> eABz_slice_;

    std::vector<double> c_pmin_;
    std::vector<double> ec_pmin_;
    std::vector<double> p_pmin_;
    std::vector<double> ep_pmin_;
    std::vector<double> ABz_pmin_;
    std::vector<double> eABz_pmin_;

    std::vector<double> c_sym_;
    std::vector<double> ec_sym_;
    std::vector<double> p_sym_;
    std::vector<double> ep_sym_;
    std::vector<double> ABz_sym_;
    std::vector<double> eABz_sym_;

    int step = 200;
   //  int pmin = 0; 
    int pmin = step; 
    int pmax = step+pmin;

    for(int i_cut = 0; i_cut < 15; i_cut++) {

      std::string momSlice = std::to_string(pmin)+"_"+std::to_string(pmax);
      int p = (pmax+pmin)/2;

      std::string moduloHistName = name+"_ThetaY_vs_Time_Modulo_Slice_"+momSlice;
      TH2D *moduloHist = (TH2D*)input->Get((moduloHistName).c_str());
      
      if(moduloHist == 0) {
        pmin = pmin + step;
        pmax = pmax + step;
        continue;
      }

      int nEntries = moduloHist->GetEntries();

      TH1D *moduloProf = moduloHist->ProfileX();

      TGraphErrors *moduloGraph = ConvertToTGraphErrors(moduloProf);

      FitBz(moduloGraph, 0.17, OMEGA_A*1e3, phi, 0, OMEGA_A*1e3, phi, 0.5, 0, G2PERIOD);

      DrawBzFit(moduloGraph, name+", "+std::to_string(pmin)+" < p [MeV] < "+std::to_string(pmax)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+name+"_ModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -0.15, .15);;// , double(nEntries), true);

      output->cd("MomentumBinnedAnalysis/ModuloFits");

      moduloGraph->SetName((name+"_fit_"+std::to_string(pmin)+"_"+std::to_string(pmax)).c_str());
      moduloGraph->Write();

      p_slice_.push_back(p);
      ep_slice_.push_back(pmax - p);

      //c_slice_.push_back(moduloGraph->GetFunction("BzFunc")->GetParameter(6));
      //ec_slice_.push_back(moduloGraph->GetFunction("BzFunc")->GetParError(6));
      //ABz_slice_.push_back(moduloGraph->GetFunction("BzFunc")->GetParameter(0));
      //eABz_slice_.push_back(moduloGraph->GetFunction("BzFunc")->GetParError(0));

      c_slice_.push_back(moduloGraph->GetFunction("BzFunc")->GetParameter(3));
      ec_slice_.push_back(moduloGraph->GetFunction("BzFunc")->GetParError(3));
      ABz_slice_.push_back(moduloGraph->GetFunction("BzFunc")->GetParameter(0));
      eABz_slice_.push_back(moduloGraph->GetFunction("BzFunc")->GetParError(0));

      pmin = pmin + step;
      pmax = pmax + step;

      delete moduloProf; delete moduloHist;

    }

/*
    // pmin
    pmax = 2800;

    for ( int i_slice = 0; i_slice < 9; i_slice++ ) { 

      pmin = 600 + i_slice*step; 

      std::string momSlice = std::to_string(pmin)+"_"+std::to_string(pmax);

      int p = pmin; //(pmax+pmin)/2;

      std::string moduloHistName = name+"_ThetaY_vs_Time_Modulo_pmin_"+momSlice;
      TH2D *moduloHist = (TH2D*)input->Get((moduloHistName).c_str());
      
      if(moduloHist == 0) continue;

      int nEntries = moduloHist->GetEntries();

      TH1D *moduloProf = moduloHist->ProfileX();

      TGraphErrors *moduloGraph = ConvertToTGraphErrors(moduloProf);

      FitBz(moduloGraph, 0.17, OMEGA_A*1e3, phi, 0, OMEGA_A*1e3, phi, 0.5, 0, G2PERIOD);

      DrawBzFit(moduloGraph, name+", "+std::to_string(pmin)+" < p [MeV] < "+std::to_string(pmax)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+name+"_ModuloFit_"+momSlice+"_"+qual).c_str());// , double(nEntries), true);

      output->cd("MomentumBinnedAnalysis/ModuloFits");

      moduloGraph->SetName((name+"_fit_"+std::to_string(pmin)+"_"+std::to_string(pmax)).c_str());
      moduloGraph->Write();

      p_pmin_.push_back(p);
      ep_pmin_.push_back(0);
      c_pmin_.push_back(moduloGraph->GetFunction("BzFunc")->GetParameter(6));
      ec_pmin_.push_back(moduloGraph->GetFunction("BzFunc")->GetParError(6));
      ABz_pmin_.push_back(moduloGraph->GetFunction("BzFunc")->GetParameter(0));
      eABz_pmin_.push_back(moduloGraph->GetFunction("BzFunc")->GetParError(0));

      delete moduloProf; delete moduloHist;

    } 

    // Symmetric cuts
    for ( int i_slice = 0; i_slice < 6; i_slice++ ) { 

      pmin = 600 + i_slice*step; 
      pmax = 2800 - i_slice*step;

      std::string momSlice = std::to_string(pmin)+"_"+std::to_string(pmax);

      int p = i_slice+1; //(pmax+pmin)/2;

      std::string moduloHistName = name+"_ThetaY_vs_Time_Modulo_Sym_"+momSlice;
      TH2D *moduloHist = (TH2D*)input->Get((moduloHistName).c_str());
      
      if(moduloHist == 0) continue;

      int nEntries = moduloHist->GetEntries();

      TH1D *moduloProf = moduloHist->ProfileX();

      TGraphErrors *moduloGraph = ConvertToTGraphErrors(moduloProf);

      FitBz(moduloGraph, 0.17, OMEGA_A*1e3, phi, 0, OMEGA_A*1e3, phi, 0.5, 0, G2PERIOD);

      DrawBzFit(moduloGraph, name+", "+std::to_string(pmin)+" < p [MeV] < "+std::to_string(pmax)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+name+"_ModuloFit_"+momSlice+"_"+qual).c_str());// , double(nEntries), true);

      output->cd("MomentumBinnedAnalysis/ModuloFits");

      moduloGraph->SetName((name+"_fit_"+std::to_string(pmin)+"_"+std::to_string(pmax)).c_str());
      moduloGraph->Write();

      p_sym_.push_back(p);
      ep_sym_.push_back(0);
      c_sym_.push_back(moduloGraph->GetFunction("BzFunc")->GetParameter(6));
      ec_sym_.push_back(moduloGraph->GetFunction("BzFunc")->GetParError(6));
      ABz_sym_.push_back(moduloGraph->GetFunction("BzFunc")->GetParameter(0));
      eABz_sym_.push_back(moduloGraph->GetFunction("BzFunc")->GetParError(0));

      delete moduloProf; delete moduloHist;

    }

    */

    TGraphErrors *c_vs_p_slice = GenerateTGraphErrors(p_slice_, c_slice_, ep_slice_, ec_slice_);
    TGraphErrors *ABz_vs_p_slice = GenerateTGraphErrors(p_slice_, ABz_slice_, ep_slice_, eABz_slice_);

/*
    TGraphErrors *c_vs_p_pmin = GenerateTGraphErrors(p_pmin_, c_pmin_, ep_pmin_, ec_pmin_);
    TGraphErrors *ABz_vs_p_pmin = GenerateTGraphErrors(p_pmin_, ABz_pmin_, ep_pmin_, eABz_pmin_);

    TGraphErrors *c_vs_p_sym = GenerateTGraphErrors(p_sym_, c_sym_, ep_sym_, ec_sym_);
    TGraphErrors *ABz_vs_p_sym = GenerateTGraphErrors(p_sym_, ABz_sym_, ep_sym_, eABz_sym_);
*/
    //c_vs_p_slice->GetXaxis()->SetRangeUser(0,3000);
    //ABz_vs_p_slice->GetXaxis()->SetRangeUser(0,3000);

    //c_vs_p_pmin->GetXaxis()->SetRangeUser(0,3000);
    //ABz_vs_p_pmin->GetXaxis()->SetRangeUser(0,3000);

    //c_vs_p_sym->GetXaxis()->SetRangeUser(0,3000);
    //ABz_vs_p_sym->GetXaxis()->SetRangeUser(0,3000);

    DrawTGraphErrors(c_vs_p_slice, name+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;c [mrad]", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+name+"_c_vs_p_slice_"+qual).c_str());
    DrawTGraphErrors(ABz_vs_p_slice, name+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;A_{Bz} [mrad]", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+name+"_ABz_vs_p_slice_"+qual).c_str());
    c_vs_p_slice_.push_back(c_vs_p_slice);
    ABz_vs_p_slice_.push_back(ABz_vs_p_slice);

    output->cd("MomentumBinnedAnalysis/ParameterScans");

    c_vs_p_slice->SetName((name+"_c_vs_p_slice").c_str());
    ABz_vs_p_slice->SetName((name+"_ABz_vs_p_slice").c_str());

    c_vs_p_slice->Write();
    ABz_vs_p_slice->Write();

  }
    
  double c_ymin; double c_ymax;
  double A_ymin; double A_ymax;

  if(qual=="eQ" || qual=="vertCorr_eQ") { 
    c_ymin = -0.6; c_ymax = 0.15;
    A_ymin = 0.0; A_ymax = 0.35;
  } else if(qual=="eQ_2" || qual=="vertCorr_eQ_2") { 
    c_ymin = -0.6; c_ymax = 0.15;
    A_ymin = -0.6; A_ymax = 0.4;
  } else if(qual=="noQ"  || qual=="vertCorr_noQ") { 
    c_ymin = -2; c_ymax = 2;
    A_ymin = -2; A_ymax = 2;
  } else if(qual=="pValQ"  || qual=="vertCorr_pValQ") { 
    c_ymin = -2.5; c_ymax = 1.25;
    A_ymin = -2; A_ymax = 2;
  } else if(qual=="vertCorr_eQ_eQ") { 
    c_ymin = -0.065; c_ymax = 0.05;
    A_ymin = -0.05; A_ymax = 0.4;
  } else if(qual=="eQ_coarse") {
    c_ymin = -0.6; c_ymax = 0.15;
    A_ymin = 0.0; A_ymax = 0.35;
  } else { 
    c_ymin = -2; c_ymax = 2;
    A_ymin = -2; A_ymax = 2;
  }

  OverlayGraphs(c_vs_p_slice_, names_, "", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/c_vs_p_slice_overlay_"+qual).c_str(), c_ymin, c_ymax);
  OverlayGraphs(ABz_vs_p_slice_, names_, "", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/ABz_vs_p_slice_overlay_"+qual).c_str(), A_ymin, A_ymax);
/*
  OverlayGraphs(c_vs_p_pmin_, names_, "", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/c_vs_p_pmin_overlay_"+qual).c_str(), c_ymin, c_ymax);
  OverlayGraphs(ABz_vs_p_pmin_, names_, "", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/ABz_vs_p_pmin_overlay_"+qual).c_str(), A_ymin, A_ymax);

  OverlayGraphs(c_vs_p_sym_, names_, "", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/c_vs_p_sym_overlay_"+qual).c_str(), c_ymin, c_ymax);
  OverlayGraphs(ABz_vs_p_sym_, names_, "", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/ABz_vs_p_sym_overlay_"+qual).c_str(), A_ymin, A_ymax);
*/
  // Perform line fit

  //LineFit(ABzGraphs_); 


  return; 

}

void MomentumBinnedAnalysis_PureBz(TFile *input, TFile *output, const double phi) {  

  vector<TGraphErrors*> c_vs_p_slice_; vector<TGraphErrors*> ABz_vs_p_slice_;
  vector<TGraphErrors*> c_vs_p_pmin_; vector<TGraphErrors*> ABz_vs_p_pmin_;
  vector<TGraphErrors*> c_vs_p_sym_; vector<TGraphErrors*> ABz_vs_p_sym_;

  std::vector<string> names_ = { "S0", "S12", "S18", "S12S18", "S0S12S18"};

  for(int i_stn = 0; i_stn < names_.size(); i_stn++) {

    std::string name = names_.at(i_stn);

    std::vector<double> c_slice_;
    std::vector<double> ec_slice_;
    std::vector<double> p_slice_;
    std::vector<double> ep_slice_;
    std::vector<double> ABz_slice_;
    std::vector<double> eABz_slice_;

    std::vector<double> c_pmin_;
    std::vector<double> ec_pmin_;
    std::vector<double> p_pmin_;
    std::vector<double> ep_pmin_;
    std::vector<double> ABz_pmin_;
    std::vector<double> eABz_pmin_;

    std::vector<double> c_sym_;
    std::vector<double> ec_sym_;
    std::vector<double> p_sym_;
    std::vector<double> ep_sym_;
    std::vector<double> ABz_sym_;
    std::vector<double> eABz_sym_;

    int step = 200;
   //  int pmin = 0; 
    int pmin = step; 
    int pmax = step+pmin;

    for(int i_cut = 0; i_cut < 15; i_cut++) {

      std::string momSlice = std::to_string(pmin)+"_"+std::to_string(pmax);
      int p = (pmax+pmin)/2;

      std::string moduloHistName = name+"_ThetaY_vs_Time_Modulo_Slice_"+momSlice;
      TH2D *moduloHist = (TH2D*)input->Get((moduloHistName).c_str());
      
      if(moduloHist == 0) {
        pmin = pmin + step;
        pmax = pmax + step;
        continue;
      }

      int nEntries = moduloHist->GetEntries();

      TH1D *moduloProf = moduloHist->ProfileX();

      TGraphErrors *moduloGraph = ConvertToTGraphErrors(moduloProf);

      //FitBz(moduloGraph, 0.17, OMEGA_A*1e3, phi, 0, OMEGA_A*1e3, phi, 0.5, 0, G2PERIOD);

      FitPureBz(moduloGraph, 0.17, OMEGA_A*1e3, phi, 0.5, 0, G2PERIOD);

      DrawPureBzFit(moduloGraph, name+", "+std::to_string(pmin)+" < p [MeV] < "+std::to_string(pmax)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+name+"_PureBzModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -0.15, .15);;// , double(nEntries), true);

      output->cd("MomentumBinnedAnalysis/ModuloFits");

      moduloGraph->SetName((name+"_fit_"+std::to_string(pmin)+"_"+std::to_string(pmax)).c_str());
      moduloGraph->Write();

      p_slice_.push_back(p);
      ep_slice_.push_back(pmax - p);

      //c_slice_.push_back(moduloGraph->GetFunction("BzFunc")->GetParameter(6));
      //ec_slice_.push_back(moduloGraph->GetFunction("BzFunc")->GetParError(6));
      //ABz_slice_.push_back(moduloGraph->GetFunction("BzFunc")->GetParameter(0));
      //eABz_slice_.push_back(moduloGraph->GetFunction("BzFunc")->GetParError(0));

      c_slice_.push_back(moduloGraph->GetFunction("PureBzFunc")->GetParameter(3));
      ec_slice_.push_back(moduloGraph->GetFunction("PureBzFunc")->GetParError(3));
      ABz_slice_.push_back(moduloGraph->GetFunction("PureBzFunc")->GetParameter(0));
      eABz_slice_.push_back(moduloGraph->GetFunction("PureBzFunc")->GetParError(0));

      pmin = pmin + step;
      pmax = pmax + step;

      delete moduloProf; delete moduloHist;

    }

/*
    // pmin
    pmax = 2800;

    for ( int i_slice = 0; i_slice < 9; i_slice++ ) { 

      pmin = 600 + i_slice*step; 

      std::string momSlice = std::to_string(pmin)+"_"+std::to_string(pmax);

      int p = pmin; //(pmax+pmin)/2;

      std::string moduloHistName = name+"_ThetaY_vs_Time_Modulo_pmin_"+momSlice;
      TH2D *moduloHist = (TH2D*)input->Get((moduloHistName).c_str());
      
      if(moduloHist == 0) continue;

      int nEntries = moduloHist->GetEntries();

      TH1D *moduloProf = moduloHist->ProfileX();

      TGraphErrors *moduloGraph = ConvertToTGraphErrors(moduloProf);

      FitBz(moduloGraph, 0.17, OMEGA_A*1e3, phi, 0, OMEGA_A*1e3, phi, 0.5, 0, G2PERIOD);

      DrawBzFit(moduloGraph, name+", "+std::to_string(pmin)+" < p [MeV] < "+std::to_string(pmax)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+name+"_ModuloFit_"+momSlice+"_"+qual).c_str());// , double(nEntries), true);

      output->cd("MomentumBinnedAnalysis/ModuloFits");

      moduloGraph->SetName((name+"_fit_"+std::to_string(pmin)+"_"+std::to_string(pmax)).c_str());
      moduloGraph->Write();

      p_pmin_.push_back(p);
      ep_pmin_.push_back(0);
      c_pmin_.push_back(moduloGraph->GetFunction("BzFunc")->GetParameter(6));
      ec_pmin_.push_back(moduloGraph->GetFunction("BzFunc")->GetParError(6));
      ABz_pmin_.push_back(moduloGraph->GetFunction("BzFunc")->GetParameter(0));
      eABz_pmin_.push_back(moduloGraph->GetFunction("BzFunc")->GetParError(0));

      delete moduloProf; delete moduloHist;

    } 

    // Symmetric cuts
    for ( int i_slice = 0; i_slice < 6; i_slice++ ) { 

      pmin = 600 + i_slice*step; 
      pmax = 2800 - i_slice*step;

      std::string momSlice = std::to_string(pmin)+"_"+std::to_string(pmax);

      int p = i_slice+1; //(pmax+pmin)/2;

      std::string moduloHistName = name+"_ThetaY_vs_Time_Modulo_Sym_"+momSlice;
      TH2D *moduloHist = (TH2D*)input->Get((moduloHistName).c_str());
      
      if(moduloHist == 0) continue;

      int nEntries = moduloHist->GetEntries();

      TH1D *moduloProf = moduloHist->ProfileX();

      TGraphErrors *moduloGraph = ConvertToTGraphErrors(moduloProf);

      FitBz(moduloGraph, 0.17, OMEGA_A*1e3, phi, 0, OMEGA_A*1e3, phi, 0.5, 0, G2PERIOD);

      DrawBzFit(moduloGraph, name+", "+std::to_string(pmin)+" < p [MeV] < "+std::to_string(pmax)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+name+"_ModuloFit_"+momSlice+"_"+qual).c_str());// , double(nEntries), true);

      output->cd("MomentumBinnedAnalysis/ModuloFits");

      moduloGraph->SetName((name+"_fit_"+std::to_string(pmin)+"_"+std::to_string(pmax)).c_str());
      moduloGraph->Write();

      p_sym_.push_back(p);
      ep_sym_.push_back(0);
      c_sym_.push_back(moduloGraph->GetFunction("BzFunc")->GetParameter(6));
      ec_sym_.push_back(moduloGraph->GetFunction("BzFunc")->GetParError(6));
      ABz_sym_.push_back(moduloGraph->GetFunction("BzFunc")->GetParameter(0));
      eABz_sym_.push_back(moduloGraph->GetFunction("BzFunc")->GetParError(0));

      delete moduloProf; delete moduloHist;

    }

    */

    TGraphErrors *c_vs_p_slice = GenerateTGraphErrors(p_slice_, c_slice_, ep_slice_, ec_slice_);
    TGraphErrors *ABz_vs_p_slice = GenerateTGraphErrors(p_slice_, ABz_slice_, ep_slice_, eABz_slice_);

/*
    TGraphErrors *c_vs_p_pmin = GenerateTGraphErrors(p_pmin_, c_pmin_, ep_pmin_, ec_pmin_);
    TGraphErrors *ABz_vs_p_pmin = GenerateTGraphErrors(p_pmin_, ABz_pmin_, ep_pmin_, eABz_pmin_);

    TGraphErrors *c_vs_p_sym = GenerateTGraphErrors(p_sym_, c_sym_, ep_sym_, ec_sym_);
    TGraphErrors *ABz_vs_p_sym = GenerateTGraphErrors(p_sym_, ABz_sym_, ep_sym_, eABz_sym_);
*/
    //c_vs_p_slice->GetXaxis()->SetRangeUser(0,3000);
    //ABz_vs_p_slice->GetXaxis()->SetRangeUser(0,3000);

    //c_vs_p_pmin->GetXaxis()->SetRangeUser(0,3000);
    //ABz_vs_p_pmin->GetXaxis()->SetRangeUser(0,3000);

    //c_vs_p_sym->GetXaxis()->SetRangeUser(0,3000);
    //ABz_vs_p_sym->GetXaxis()->SetRangeUser(0,3000);

    DrawTGraphErrors(c_vs_p_slice, name+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;c [mrad]", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+name+"_pureBz_c_vs_p_slice_"+qual).c_str());
    DrawTGraphErrors(ABz_vs_p_slice, name+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;A_{Bz} [mrad]", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+name+"_pureBz_ABz_vs_p_slice_"+qual).c_str());
    c_vs_p_slice_.push_back(c_vs_p_slice);
    ABz_vs_p_slice_.push_back(ABz_vs_p_slice);

    output->cd("MomentumBinnedAnalysis/ParameterScans");

    c_vs_p_slice->SetName((name+"_pureBz_c_vs_p_slice").c_str());
    ABz_vs_p_slice->SetName((name+"_pureBz_ABz_vs_p_slice").c_str());

    c_vs_p_slice->Write();
    ABz_vs_p_slice->Write();

  }
  	
  double c_ymin; double c_ymax;
  double A_ymin; double A_ymax;

  if(qual=="eQ" || qual=="vertCorr_eQ") { 
    c_ymin = -0.6; c_ymax = 0.15;
    A_ymin = 0.0; A_ymax = 0.35;
  } else if(qual=="eQ_2" || qual=="vertCorr_eQ_2") { 
    c_ymin = -0.6; c_ymax = 0.15;
    A_ymin = -0.6; A_ymax = 0.4;
  } else if(qual=="noQ"  || qual=="vertCorr_noQ") { 
    c_ymin = -2; c_ymax = 2;
    A_ymin = -2; A_ymax = 2;
  } else if(qual=="pValQ"  || qual=="vertCorr_pValQ") { 
    c_ymin = -2.5; c_ymax = 1.25;
    A_ymin = -2; A_ymax = 2;
  } else if(qual=="vertCorr_eQ_eQ") { 
    c_ymin = -0.065; c_ymax = 0.05;
    A_ymin = -0.05; A_ymax = 0.4;
  } else if(qual=="eQ_coarse") {
    c_ymin = -0.6; c_ymax = 0.15;
    A_ymin = 0.0; A_ymax = 0.35;
  } else { 
  	c_ymin = -2; c_ymax = 2;
    A_ymin = -2; A_ymax = 2;
  }

  OverlayGraphs(c_vs_p_slice_, names_, "", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/pureBz_c_vs_p_slice_overlay_"+qual).c_str(), c_ymin, c_ymax);
  OverlayGraphs(ABz_vs_p_slice_, names_, "", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/pureBz_ABz_vs_p_slice_overlay_"+qual).c_str(), A_ymin, A_ymax);
/*
  OverlayGraphs(c_vs_p_pmin_, names_, "", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/c_vs_p_pmin_overlay_"+qual).c_str(), c_ymin, c_ymax);
  OverlayGraphs(ABz_vs_p_pmin_, names_, "", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/ABz_vs_p_pmin_overlay_"+qual).c_str(), A_ymin, A_ymax);

  OverlayGraphs(c_vs_p_sym_, names_, "", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/c_vs_p_sym_overlay_"+qual).c_str(), c_ymin, c_ymax);
  OverlayGraphs(ABz_vs_p_sym_, names_, "", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/ABz_vs_p_sym_overlay_"+qual).c_str(), A_ymin, A_ymax);
*/
  // Perform line fit

  //LineFit(ABzGraphs_); 


  return; 

}

void MomentumBinnedAnalysisEDM(TFile *input, TFile *output) { 

  vector<TGraphErrors*> cGraphs_; vector<TGraphErrors*> AEDMGraphs_;

  std::vector<string> names_ = { "S0", "S12", "S18" };

  for(int i_stn = 0; i_stn < names_.size(); i_stn++) {

    string name = names_.at(i_stn);

    std::vector<double> c_;
    std::vector<double> ec_;
    std::vector<double> p_;
    std::vector<double> ep_;
    std::vector<double> AEDM_;
    std::vector<double> eAEDM_;

    int step = 200;
   //  int pmin = 0; 
    int pmin = step; 
    int pmax = step+pmin;

    for(int i_cut = 0; i_cut < 15; i_cut++) {

      TH2D *moduloHist = (TH2D*)input->Get((name+"_ThetaY_vs_Time_Modulo_Slice_"+std::to_string(pmin)+"_"+std::to_string(pmax)).c_str());
      
      if(moduloHist == 0) {
        pmin = pmin + step;
        pmax = pmax + step;
        continue;
      }

      cout<<"Got histogram "<<moduloHist<<endl;
      int nEntries = moduloHist->GetEntries();

      TH1D *moduloProf = moduloHist->ProfileX();

      TGraphErrors *moduloGraph = ConvertToTGraphErrors(moduloProf);

      SimpleSinFit(moduloGraph, 0.17, OMEGA_A * 1e3, 0);

      DrawSimpleSinFit(moduloGraph, name+", "+std::to_string(pmin)+" < p [MeV] < "+std::to_string(pmax)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+name+"_EDM_ModuloFit_"+std::to_string(pmin)+"_"+std::to_string(pmax)+"_"+qual).c_str(), double(nEntries), true);

      //output->cd("MomentumBinnedAnalysis/ModuloFits");

      //moduloGraph->SetName((name+"_fit_"+std::to_string(pmin)+"_"+std::to_string(pmax)).c_str());
      //moduloGraph->Write();

      double p = (pmax + pmin) / 2;

      p_.push_back(p);
      ep_.push_back(pmax - p);
      c_.push_back(moduloGraph->GetFunction("SimpleSinFunc")->GetParameter(2));
      ec_.push_back(moduloGraph->GetFunction("SimpleSinFunc")->GetParError(2));
      AEDM_.push_back(moduloGraph->GetFunction("SimpleSinFunc")->GetParameter(0));
      eAEDM_.push_back(moduloGraph->GetFunction("SimpleSinFunc")->GetParError(0));

      pmin = pmin + step;
      pmax = pmax + step;

      delete moduloProf; delete moduloHist;

    }

    TGraphErrors *c_vs_p = GenerateTGraphErrors(p_, c_, ep_, ec_);
    TGraphErrors *AEDM_vs_p = GenerateTGraphErrors(p_, AEDM_, ep_, eAEDM_);

    c_vs_p->GetXaxis()->SetRangeUser(0,3000);
    AEDM_vs_p->GetXaxis()->SetRangeUser(0,3000);

    DrawTGraphErrors(c_vs_p, name+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;c [mrad]", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+name+"_EDM_c_vs_p_"+qual).c_str());
    DrawTGraphErrors(AEDM_vs_p, name+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;c [mrad]", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+name+"_EDM_AEDM_vs_p_"+qual).c_str());

    cGraphs_.push_back(c_vs_p);
    AEDMGraphs_.push_back(AEDM_vs_p);

    //output->cd("MomentumBinnedAnalysis/ParameterScans");
    //c_vs_p->SetName((name+"_c_vs_p").c_str());
    //AEDM_vs_p->SetName((name+"_AEDM_vs_p").c_str());
    //c_vs_p->Write();
    //AEDM_vs_p->Write();

  }
    
  double c_ymin; double c_ymax;
  double A_ymin; double A_ymax;

    if(qual=="eQ" || qual=="vertCorr_eQ") { 
      c_ymin = -0.6; c_ymax = 0.15;
      A_ymin = 0.0; A_ymax = 0.35;
    } else if(qual=="noQ"  || qual=="vertCorr_noQ") { 
      c_ymin = -2; c_ymax = 2;
      A_ymin = -2; A_ymax = 2;
    } else if(qual=="pValQ"  || qual=="vertCorr_pValQ") { 
      c_ymin = -2.5; c_ymax = 1.25;
      A_ymin = -2; A_ymax = 2;
    } else if(qual=="vertCorr_eQ_eQ") { 
      c_ymin = -0.065; c_ymax = 0.05;
      A_ymin = -0.05; A_ymax = 0.4;
    } else if(qual=="vertCorr_pValQ_eQ") {
      c_ymin = -0.065; c_ymax = 0.05;
      A_ymin = -0.05; A_ymax = 0.4;
    } else if(qual=="noBr_eQ") {
      c_ymin = -0.6; c_ymax = 0.15;
      A_ymin = 0.0; A_ymax = 0.35;
    }else {
      c_ymin = -2; c_ymax = 2;
      A_ymin = -2; A_ymax = 2;
    }

    OverlayGraphs(cGraphs_, names_, "", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/EDM_c_vs_p_overlay_"+qual).c_str(), c_ymin, c_ymax);
    OverlayGraphs(AEDMGraphs_, names_, "", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/EDM_AEDM_vs_p_overlay_"+qual).c_str(), A_ymin, A_ymax);


  return; 
}


// Should be a seperate macro!!!
void FoldWiggle(TGraphErrors *gr) { //, std::string title, std::string fname) {

  // Split TGraph and fit into sections based on t_mod
  std::vector<TGraphErrors*> gr_;
  std::vector<TF1*> f_;
  TF1 *f = gr->GetFunction("FiveParFunc");

  int t_mod = 70;
  int lo = 0; 
  int hi = t_mod;
  double t_max = gr->GetPointX(gr->GetN()-1);
  int folds = t_max / t_mod;

  int i_point = 0; 

  for (int i_fold = 0; i_fold < folds; i_fold++) { 

    TGraphErrors *gr_tmp = new TGraphErrors();
    
    int n = 0; 
    int i_point_mod = 0; 

    while(gr->GetPointX(i_point) >= lo && gr->GetPointX(i_point) < hi) {

      double x = gr->GetPointX(i_point_mod); double ex = gr->GetErrorX(i_point_mod);
      double y = gr->GetPointY(i_point); double ey = gr->GetErrorY(i_point);

      if(y == 0) { 
        i_point++;
        i_point_mod++;
        continue;
      }

      gr_tmp->SetPoint(n, x, y);
      gr_tmp->SetPointError(n, ex, ey); 

      n++; i_point++; i_point_mod++;

    }

    FitFivePar(gr_tmp, 1300, 64, 0.35, OMEGA_A*1e3, 0, gr_tmp->GetPointX(0), gr_tmp->GetPointX(n-1));

    gr_.push_back(gr_tmp);

    lo = lo + t_mod; 
    hi = hi + t_mod;

  }

  DrawFoldedWiggle(gr_, ";Time modulo "+std::to_string(t_mod)+" #mus;Tracks / 149 ns", "../Images/MC/BzSim/"+config+"/Blinded/WiggleMod_"+to_string(t_mod)+"_"+qual, 0, t_mod, 10, 1e5);

  return;
}

int main() {

	bool sanityPlots = false;//true;
	bool write = false; 

	// Read file
	TFile *input = TFile::Open(("../Plots/MC/BzSim/"+config+"/BzSim_"+qual+".root").c_str());
	cout << "\nRead input...\t\t: " << input << endl;

	std::string outputName = "../Plots/MC/BzSim/"+config+"/BzSim_unblindedFits_"+qual+".root"; 
	if(!write) outputName = "delete_me.root";

	TFile *output = new TFile(outputName.c_str(), "RECREATE");

	output->mkdir("SimultaneousAnalysis");
 	output->cd("SimultaneousAnalysis");

	// Get histograms
	TH1D *h1_wiggle = (TH1D*)input->Get("Wiggle");
	TH1D *h1_wiggle_mod = (TH1D*)input->Get("Wiggle_Modulo");
	TH2D *h2_thetaY_mod = (TH2D*)input->Get("ThetaY_vs_Time_Modulo");

	cout << "Got histograms...\n: ";
	cout << h1_wiggle << endl;
	cout << h1_wiggle_mod << endl;
	cout << h2_thetaY_mod << endl;

  double nEntries = h2_thetaY_mod->GetEntries();

	// Make profile
	TH1D *px_thetaY_mod = h2_thetaY_mod->ProfileX();

	cout << "Generated x-profile...\n: ";
	cout << px_thetaY_mod << endl; 

	TGraphErrors *gr_wiggle = ConvertToTGraphErrors(h1_wiggle);
	TGraphErrors *gr_wiggle_mod = ConvertToTGraphErrors(h1_wiggle_mod);
	TGraphErrors *gr_thetaY_mod = ConvertToTGraphErrors(px_thetaY_mod);

	// Draw all base plots
	if(sanityPlots) { 

		DrawTH1(h1_wiggle,"h1_wiggle","../Images/MC/BzSim/"+config+"/Unblinded/SanityPlots/h1_wiggle_"+qual);
		DrawTH1(h1_wiggle_mod,"h1_wiggle_mod","../Images/MC/BzSim/"+config+"/Unblinded/SanityPlots/h1_wiggle_mod_"+qual);
		DrawTGraphErrors(gr_wiggle,"gr_wiggle","../Images/MC/BzSim/"+config+"/Unblinded/SanityPlots/gr_wiggle_"+qual);
		DrawTGraphErrors(gr_wiggle_mod,"gr_wiggle_mod","../Images/MC/BzSim/"+config+"/Unblinded/SanityPlots/gr_wiggle_mod_"+qual);
		DrawTH2(h2_thetaY_mod,"h2_thetaY_mod","../Images/MC/BzSim/"+config+"/Unblinded/SanityPlots/h2_thetaY_mod_"+qual);
		DrawTH1(px_thetaY_mod,"px_thetaY_mod","../Images/MC/BzSim/"+config+"/Unblinded/SanityPlots/px_thetaY_mod_"+qual);
		DrawTGraphErrors(gr_thetaY_mod, "gr_thetaY_mod", "../Images/MC/BzSim/"+config+"/Unblinded/SanityPlots/gr_thetaY_mod_"+qual);

	}

	cout<<"Folding wiggle"<<endl;
	// Fold wiggle for illustration 
	FitFivePar(gr_wiggle, 1300, 64, 0.35, OMEGA_A*1e3, 0, xmin, xmax);
	FoldWiggle(gr_wiggle);//, ";Time modulo "+std::to_string(t_mod)+" #mus;Tracks / 149 ns", "../Images/MC/BzSim/"+config+"/Blinded/WiggleMod_"+to_string(t_mod)+"_"+qual);

	cout<<"Folded wiggle"<<endl;
	// Now fit the modulo wiggle 

	// No shift 
	FitFivePar(gr_wiggle_mod, 1300, 64, 0.35, OMEGA_A*1e3, 0, 0, G2PERIOD);
	cout<<"G2PERIOD\t"<<G2PERIOD<<endl;
	cout<<"Getting five par func"<<endl;
	TF1 *modWiggle = gr_wiggle_mod->GetFunction("FiveParFunc");
	modWiggle->SetParName(0,"N_{0}");
	modWiggle->SetParName(1,"#tau [#mus]");
	modWiggle->SetParName(2,"A");
	modWiggle->SetParName(3,"#omega_{a} (fixed) [MHz]");
	modWiggle->SetParName(4,"#phi [rad]");

	DrawModWiggle(gr_wiggle_mod, ";t_{g#minus2}^{mod} [#mus];Tracks / 149 ns","../Images/MC/BzSim/"+config+"/Unblinded/fit_mod_wiggle_"+qual);

	// ======= SET PHASE =======
	const double phi = modWiggle->GetParameter(4);

	cout<<"Got phase"<<endl;

	// ======= Fit for A_Bz =====
	// Bz should be 1700 ppm or 0.17 mrad
	FitBz(gr_thetaY_mod, 0.17, OMEGA_A*1e3, phi, 0, OMEGA_A*1e3, phi, 0.5, 0, G2PERIOD);

	cout<<"Fitted Bz"<<endl;
	TF1 *BzWiggle = gr_thetaY_mod->GetFunction("BzFunc");
	BzWiggle->SetParName(0,"A_{Bz} [mrad]");
	BzWiggle->SetParName(1,"#omega_{a}^{FIXED} [MHz]");
	BzWiggle->SetParName(2,"#phi^{FIXED} [rad]");
	BzWiggle->SetParName(3,"A_{EDM} [mrad]");
	BzWiggle->SetParName(4,"#omega_{a} (fixed) [MHz]");
	BzWiggle->SetParName(5,"#phi^{FIXED} [rad]");
	BzWiggle->SetParName(6,"c [mrad]");

	cout<<"Drawing Bz"<<endl;

	DrawBzFit(gr_thetaY_mod, ";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad]","../Images/MC/BzSim/"+config+"/Unblinded/fit_Bz_"+qual, nEntries, -1.5, 1.5);

  gr_thetaY_mod->Write();

	cout<<"Number of tracks in fit:\t"<<px_thetaY_mod->GetEntries()<<endl;

	// Momentum binned 
	cout<<"\nPerforming momentum binned analysis"<<endl;
	
	output->mkdir("MomentumBinnedAnalysis");
  output->mkdir("MomentumBinnedAnalysis/ModuloFits");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans");

	MomentumBinnedAnalysis(input, output, phi);

  MomentumBinnedAnalysis_PureBz(input, output, phi);

	input->Close();
	output->Close();
	std::cout<<"\nWritten plots to root file:\n"<<outputName<<std::endl;

	return 0;
}
