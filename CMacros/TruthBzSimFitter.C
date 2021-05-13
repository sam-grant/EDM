#include <iostream>

#include "FancyDraw.h"
#include "Utils.h"
#include "RootInclude.h"

std::string config = "1700ppm";

//std::string qual = "eQ";
//std::string qual = "gQ_flip";
std::string qual = "gQ";

double xmin = 7*G2PERIOD;
double xmax = 70*G2PERIOD;

using namespace std;

// TODO: improve these drawing functions

void DrawModWiggle_tmp(TGraphErrors *graph, string title, string fname, double N, double ymin, double ymax) {

  TCanvas *c = new TCanvas("c","c",800,600);

  TF1 *func = graph->GetFunction("FiveParFunc");
  func->SetLineWidth(3);
  func->SetLineColor(kRed);
  func->SetNpx(1e4);  

  double chi2ndf = func->GetChisquare() / func->GetNDF();
  double par0 = func->GetParameter(0); double err0 = func->GetParError(0);
  double par1 = func->GetParameter(1); double err1 = func->GetParError(1);
  double par2 = func->GetParameter(2); double err2 = func->GetParError(2);
  double par4 = func->GetParameter(4); double err4 = func->GetParError(4);

  TLegend *leg = new TLegend(0.25,0.15,.75,0.25);
  leg->SetNColumns(2);
  leg->AddEntry(graph, "Sim   ");
  leg->AddEntry(func,"N_{0}e^{-t/#tau}[1+Acos(#omega_{a}t+#phi)]");
  leg->SetBorderSize(0);

  TPaveText *names = new TPaveText(0.58,0.62,0.65,0.89,"NDC");

  names->SetTextAlign(13);
  names->AddText("N"); 
  names->AddText("#chi^{2}/ndf");
  names->AddText("N_{0}");
  names->AddText("#tau [#mus]");
  names->AddText("A"); 
  names->AddText("#phi [rad]"); 

  TPaveText *values = new TPaveText(0.70,0.62,0.89,0.89,"NDC");
  values->SetTextAlign(33);
  values->AddText(SciNotation(double(N))); 
  values->AddText(Round(chi2ndf, 3));
  values->AddText(SciNotation(par0)+"#pm"+Round(err0,2));
  values->AddText(Round(par1, 2)+"#pm"+Round(err1, 1));
  values->AddText(Round(par2, 4)+"#pm"+Round(err2, 1));
  //values->AddText(Round(par3, 3)+"#pm"+Round(err3, 1));
  values->AddText(Round(par4, 1)+"#pm"+Round(err4, 1));

  TPaveText *cuts = new TPaveText(0.20,0.70,0.40,0.80,"NDC");
  cuts->SetTextAlign(22);
  cuts->AddText("1800 < p [MeV] < 3100");
  cuts->AddText("30 < t [#mus] < 300");

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

  graph->GetXaxis()->SetRangeUser(0, G2PERIOD);
  graph->GetYaxis()->SetRangeUser(ymin, ymax);
  graph->GetXaxis()->SetTitleSize(.04);
  graph->GetYaxis()->SetTitleSize(.04);
  graph->GetXaxis()->SetTitleOffset(1.1);
  graph->GetYaxis()->SetTitleOffset(1.1);
  graph->GetXaxis()->CenterTitle(true);
  graph->GetYaxis()->CenterTitle(true);
  graph->GetYaxis()->SetMaxDigits(4);
  graph->SetMarkerStyle(20); //  Full circle
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

  graph->GetYaxis()->SetRangeUser(ymin, ymax);
  graph->GetXaxis()->SetRangeUser(0, G2PERIOD);

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

void MomentumBinnedAnalysis(TFile *input, TFile *output, const double phi) {  

  vector<TGraphErrors*> c_vs_p_slice_; vector<TGraphErrors*> ABz_vs_p_slice_;

  std::vector<double> c_slice_;
  std::vector<double> ec_slice_;
  std::vector<double> p_slice_;
  std::vector<double> ep_slice_;
  std::vector<double> ABz_slice_;
  std::vector<double> eABz_slice_;

  int step = 200; 
  int pmin = 0; 
  int pmax = step+pmin;

  for(int i_cut = 0; i_cut < 15; i_cut++) {

    std::string momSlice = std::to_string(pmin)+"_"+std::to_string(pmax);
    int p = (pmax+pmin)/2;

    std::string moduloHistName = "ThetaY_vs_Time_Modulo_Slice_"+momSlice;
    TH2D *moduloHist = (TH2D*)input->Get((moduloHistName).c_str());
      
    if(moduloHist == 0) {
        pmin = pmin + step;
        pmax = pmax + step;
        continue;
    }

    int nEntries = moduloHist->GetEntries();

    TH1D *moduloProf = moduloHist->ProfileX();

    TGraphErrors *moduloGraph = ConvertToTGraphErrors(moduloProf);

    FullBzFit(moduloGraph, 0.17, OMEGA_A*1e3, phi, 0, OMEGA_A*1e3, phi, 0.5, 0, G2PERIOD);

    DrawBzFit(moduloGraph, std::to_string(pmin)+" < p [MeV] < "+std::to_string(pmax)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/BzSim/"+config+"/Truth/MomBinnedAna/ModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -0.15, .15);;// , double(nEntries), true);

    output->cd("MomentumBinnedAnalysis/ModuloFits");

    moduloGraph->SetName(("fit_"+std::to_string(pmin)+"_"+std::to_string(pmax)).c_str());
    moduloGraph->Write();

    p_slice_.push_back(p);
    ep_slice_.push_back(pmax - p);

    c_slice_.push_back(moduloGraph->GetFunction("BzFunc")->GetParameter(6));
    ec_slice_.push_back(moduloGraph->GetFunction("BzFunc")->GetParError(6));
    ABz_slice_.push_back(moduloGraph->GetFunction("BzFunc")->GetParameter(0));
    eABz_slice_.push_back(moduloGraph->GetFunction("BzFunc")->GetParError(0));

    pmin = pmin + step;
    pmax = pmax + step;

    delete moduloProf; delete moduloHist;

  }


  TGraphErrors *c_vs_p_slice = GenerateTGraphErrors(p_slice_, c_slice_, ep_slice_, ec_slice_);
  TGraphErrors *ABz_vs_p_slice = GenerateTGraphErrors(p_slice_, ABz_slice_, ep_slice_, eABz_slice_);

  DrawTGraphErrors(c_vs_p_slice, ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;c [mrad]", ("../Images/MC/BzSim/"+config+"/Truth/MomBinnedAna/c_vs_p_slice_"+qual).c_str());
  DrawTGraphErrors(ABz_vs_p_slice, ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;A_{Bz} [mrad]", ("../Images/MC/BzSim/"+config+"/Truth/MomBinnedAna/ABz_vs_p_slice_"+qual).c_str());
   
  c_vs_p_slice_.push_back(c_vs_p_slice);
  ABz_vs_p_slice_.push_back(ABz_vs_p_slice);

  output->cd("MomentumBinnedAnalysis/ParameterScans");

  c_vs_p_slice->SetName("c_vs_p_slice");
  ABz_vs_p_slice->SetName("ABz_vs_p_slice");

  c_vs_p_slice->Write();
  ABz_vs_p_slice->Write();
  return; 

}

// Vertical offset correction
void VertOffset(TFile *input, TFile *output, const double phi) {  

  vector<TGraphErrors*> c_vs_p_slice_; vector<TGraphErrors*> ABz_vs_p_slice_;

  std::vector<double> c_slice_;
  std::vector<double> ec_slice_;
  std::vector<double> p_slice_;
  std::vector<double> ep_slice_;
  std::vector<double> ABz_slice_;
  std::vector<double> eABz_slice_;

  int step = 100; 
  int pmin = 0; 
  int pmax = step+pmin;

  for(int i_cut = 0; i_cut < 30; i_cut++) {

    std::string momSlice = std::to_string(pmin)+"_"+std::to_string(pmax);
    int p = (pmax+pmin)/2;

    std::string moduloHistName = "ThetaY_vs_Time_Modulo_Slice_"+momSlice;
    TH2D *moduloHist = (TH2D*)input->Get((moduloHistName).c_str());
      
    if(moduloHist == 0) {
      pmin = pmin + step;
      pmax = pmax + step;
      continue;
    }

    int nEntries = moduloHist->GetEntries();

    TH1D *moduloProf = moduloHist->ProfileX();

    TGraphErrors *moduloGraph = ConvertToTGraphErrors(moduloProf);

    FullBzFit(moduloGraph, 0.17, OMEGA_A*1e3, phi, 0, OMEGA_A*1e3, phi, 0.5, 0, G2PERIOD);

    //DrawBzFit(moduloGraph, name+", "+std::to_string(pmin)+" < p [MeV] < "+std::to_string(pmax)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+name+"_ModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -0.15, .15);;// , double(nEntries), true);

    output->cd("MomentumBinnedAnalysis/ModuloFits");

    moduloGraph->SetName(("fit_"+std::to_string(pmin)+"_"+std::to_string(pmax)).c_str());
    moduloGraph->Write();

    p_slice_.push_back(p);
    ep_slice_.push_back(pmax - p);

    c_slice_.push_back(moduloGraph->GetFunction("BzFunc")->GetParameter(6));
    ec_slice_.push_back(moduloGraph->GetFunction("BzFunc")->GetParError(6));
    ABz_slice_.push_back(moduloGraph->GetFunction("BzFunc")->GetParameter(0));
    eABz_slice_.push_back(moduloGraph->GetFunction("BzFunc")->GetParError(0));

    pmin = pmin + step;
    pmax = pmax + step;

    delete moduloProf; delete moduloHist;

  }

  TGraphErrors *c_vs_p_slice = GenerateTGraphErrors(p_slice_, c_slice_, ep_slice_, ec_slice_);
  TGraphErrors *ABz_vs_p_slice = GenerateTGraphErrors(p_slice_, ABz_slice_, ep_slice_, eABz_slice_);

  c_vs_p_slice_.push_back(c_vs_p_slice);
  ABz_vs_p_slice_.push_back(ABz_vs_p_slice);

  output->cd("MomentumBinnedAnalysis/ParameterScans");

  c_vs_p_slice->SetName("c_vs_p_slice");
  ABz_vs_p_slice->SetName("ABz_vs_p_slice");

  c_vs_p_slice->Write();
  ABz_vs_p_slice->Write();

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

  DrawFoldedWiggle(gr_, ";Time modulo "+std::to_string(t_mod)+" #mus;Tracks / 149 ns", "../Images/MC/BzSim/"+config+"/Truth/WiggleMod_"+to_string(t_mod)+"_"+qual, 0, t_mod, 10, 1e5);

  return;
}

int main() {

	bool sanityPlots = false;//true;
	bool write = true; 

	// Read file
	TFile *input = TFile::Open(("../Plots/MC/BzSim/"+config+"/BzSim_truth_"+qual+".root").c_str());
	cout << "\nRead input...\t\t: " << input << endl;

	std::string outputName = "../Plots/MC/BzSim/"+config+"/BzSim_truthFits_"+qual+".root"; 
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

		DrawTH1(h1_wiggle,"h1_wiggle","../Images/MC/BzSim/"+config+"/Truth/SanityPlots/h1_wiggle_"+qual);
		DrawTH1(h1_wiggle_mod,"h1_wiggle_mod","../Images/MC/BzSim/"+config+"/Truth/SanityPlots/h1_wiggle_mod_"+qual);
		DrawTGraphErrors(gr_wiggle,"gr_wiggle","../Images/MC/BzSim/"+config+"/Truth/SanityPlots/gr_wiggle_"+qual);
		DrawTGraphErrors(gr_wiggle_mod,"gr_wiggle_mod","../Images/MC/BzSim/"+config+"/Truth/SanityPlots/gr_wiggle_mod_"+qual);
		DrawTH2(h2_thetaY_mod,"h2_thetaY_mod","../Images/MC/BzSim/"+config+"/Truth/SanityPlots/h2_thetaY_mod_"+qual);
		DrawTH1(px_thetaY_mod,"px_thetaY_mod","../Images/MC/BzSim/"+config+"/Truth/SanityPlots/px_thetaY_mod_"+qual);
		DrawTGraphErrors(gr_thetaY_mod, "gr_thetaY_mod", "../Images/MC/BzSim/"+config+"/Truth/SanityPlots/gr_thetaY_mod_"+qual);

	}

	//cout<<"Folding wiggle"<<endl;
	//// Fold wiggle for illustration 
	//FitFivePar(gr_wiggle, 1300, 64, 0.35, OMEGA_A*1e3, 0, xmin, xmax);

	FoldWiggle(gr_wiggle);//, ";Time modulo "+std::to_string(t_mod)+" #mus;Tracks / 149 ns", "../Images/MC/BzSim/"+config+"/Truth/WiggleMod_"+to_string(t_mod)+"_"+qual);
	//cout<<"Folded wiggle"<<endl;

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

	DrawModWiggle_tmp(gr_wiggle_mod, ";t_{g#minus2}^{mod} [#mus];Tracks / 149 ns","../Images/MC/BzSim/"+config+"/Truth/fit_mod_wiggle_"+qual, double(px_thetaY_mod->GetEntries()), 15e4, 61e4);

  gr_wiggle_mod->SetName("WiggleFit");
  gr_wiggle_mod->Write();

	// ======= SET PHASE =======
	const double phi = modWiggle->GetParameter(4);

	cout<<"\nGot phase\t"<<phi<<endl;

	// ======= Fit for A_Bz =====
	// Bz should be 1700 ppm or 0.17 mrad
	FullBzFit(gr_thetaY_mod, 0.17, OMEGA_A*1e3, phi, 0, OMEGA_A*1e3, phi, 0.5, 0, G2PERIOD);

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

	DrawBzFit(gr_thetaY_mod, ";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad]","../Images/MC/BzSim/"+config+"/Truth/fit_Bz_"+qual, nEntries, -0.5, 0.75);

  gr_thetaY_mod->SetName("BzFit");
  gr_thetaY_mod->Write();

	cout<<"Number of tracks in fit:\t"<<px_thetaY_mod->GetEntries()<<endl;

	// Momentum binned 
	cout<<"\nPerforming momentum binned analysis"<<endl;
	
	output->mkdir("MomentumBinnedAnalysis");
  output->mkdir("MomentumBinnedAnalysis/ModuloFits");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans");

	MomentumBinnedAnalysis(input, output, phi);

	input->Close();
	output->Close();
	std::cout<<"\nWritten plots to root file:\n"<<outputName<<std::endl;

	return 0;
}
