#include <iostream>

#include "FancyDraw.h"
#include "Utils.h"
#include "RootInclude.h"

std::string config = "1700ppm";
std::string qual = "vertCorr_eQ_eQ_2";
//std::string qual = "gQ_coarse";
// std::string qual = "eQ";

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

void DrawBzFit(TGraphErrors *graph, string title, string fname) { 

	TF1 *func = graph->GetFunction("BzFunc");

	TCanvas *c = new TCanvas("c","c",800,600);

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

  vector<TGraphErrors*> cGraphs_; vector<TGraphErrors*> ABzGraphs_;

  std::vector<string> names_ = { "S0", "S12", "S18", "S0S12S18"};

  for(int i_stn = 0; i_stn < names_.size(); i_stn++) {

    std::string name = names_.at(i_stn);

    std::vector<double> c_;
    std::vector<double> ec_;
    std::vector<double> p_;
    std::vector<double> ep_;
    std::vector<double> ABz_;
    std::vector<double> eABz_;

    int step = 100;
    int pmin = 0.; 
    int pmax = step+pmin;

    for(int i_cut = 0; i_cut < 50; i_cut++) {

      std::string momSlice = std::to_string(pmin)+"_"+std::to_string(pmax);
      int p = (pmax+pmin)/2;

      std::string moduloHistName = name+"_ThetaY_vs_Time_Modulo_"+momSlice;
      //if(name=="S0S12S18") moduloHistName = "ThetaY_vs_Time_Modulo_"+momSlice;
      TH2D *moduloHist = (TH2D*)input->Get((moduloHistName).c_str());
      //std::cout<<name<<" , "<<moduloHist<<std::endl;
      
      if(moduloHist == 0) {
        pmin = pmin + step;
        pmax = pmax + step;
        continue;
      }

      int nEntries = moduloHist->GetEntries();

      TH1D *moduloProf = moduloHist->ProfileX();

      TGraphErrors *moduloGraph = ConvertToTGraphErrors(moduloProf);


      FitBz(moduloGraph, 0.17, OMEGA_A*1e3, phi, 0, OMEGA_A*1e3, phi, 0.5, 0, G2PERIOD);

      DrawBzFit(moduloGraph, name+", "+std::to_string(pmin)+" < p [MeV] < "+std::to_string(pmax)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+name+"_ModuloFit_"+momSlice+"_"+qual).c_str());// , double(nEntries), true);

      output->cd("MomentumBinnedAnalysis/ModuloFits");

      moduloGraph->SetName((name+"_fit_"+std::to_string(pmin)+"_"+std::to_string(pmax)).c_str());
      moduloGraph->Write();

      p_.push_back(p);
      ep_.push_back(pmax - p);
      c_.push_back(moduloGraph->GetFunction("BzFunc")->GetParameter(6));
      ec_.push_back(moduloGraph->GetFunction("BzFunc")->GetParError(6));
      ABz_.push_back(moduloGraph->GetFunction("BzFunc")->GetParameter(0));
      eABz_.push_back(moduloGraph->GetFunction("BzFunc")->GetParError(0));

      pmin = pmin + step;
      pmax = pmax + step;

      delete moduloProf; delete moduloHist;

    }

    TGraphErrors *c_vs_p = GenerateTGraphErrors(p_, c_, ep_, ec_);
    TGraphErrors *ABz_vs_p = GenerateTGraphErrors(p_, ABz_, ep_, eABz_);

    c_vs_p->GetXaxis()->SetRangeUser(0,3000);
    ABz_vs_p->GetXaxis()->SetRangeUser(0,3000);

    DrawTGraphErrors(c_vs_p, name+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;c [mrad]", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+name+"_c_vs_p_"+qual).c_str());
    DrawTGraphErrors(ABz_vs_p, name+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;A_{Bz} [mrad]", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+name+"_ABz_vs_p_"+qual).c_str());

    cGraphs_.push_back(c_vs_p);
    ABzGraphs_.push_back(ABz_vs_p);

    output->cd("MomentumBinnedAnalysis/ParameterScans");
    c_vs_p->SetName((name+"_c_vs_p").c_str());
    ABz_vs_p->SetName((name+"_ABz_vs_p").c_str());
    c_vs_p->Write();
    ABz_vs_p->Write();

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
  } else if(qual=="eQ_coarse") {
    c_ymin = -0.6; c_ymax = 0.15;
    A_ymin = 0.0; A_ymax = 0.35;
  } else { 
  	c_ymin = -2; c_ymax = 2;
    A_ymin = -2; A_ymax = 2;
  }

  OverlayGraphs(cGraphs_, names_, "", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/c_vs_p_overlay_"+qual).c_str(), c_ymin, c_ymax);
  OverlayGraphs(ABzGraphs_, names_, "", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/ABz_vs_p_overlay_"+qual).c_str(), A_ymin, A_ymax);

  // Perform line fit

  //LineFit(ABzGraphs_); 


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
	bool write = true; 

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

	DrawBzFit(gr_thetaY_mod, ";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad]","../Images/MC/BzSim/"+config+"/Unblinded/fit_Bz_"+qual);

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
