#include <iostream>

#include "FancyDraw.h"
#include "Utils.h"
#include "RootInclude.h"
#include "EDMBlinding.h"

std::string config = "1700ppm";
std::string qual = "vertCorr_eQ_eQ";
// std::string qual = "eQ";

double xmin = 7*G2PERIOD;
double xmax = 70*G2PERIOD;

bool unblind = true;//false;//true;//false;//false;//true;//true;//l//false;



// TODO: improve these drawing functions

void DrawModWiggle(TGraphErrors *graph, string title, string fname, double N, double ymin, double ymax) {

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


void DrawBzFit(TGraphErrors *graph, string title, string fname, double N, double ymin, double ymax, bool unblind) { 

	graph->Draw();
	gPad->Update();
	gStyle->SetOptStat(0);
	gStyle->SetOptFit(0);

	gStyle->SetOptStat(0);
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
	if(!unblind) leg->AddEntry(func,"A_{Bz}cos(#omega_{a}t #plus #phi) #plus A_{EDM}^{BLIND}sin(#omega_{a}t #plus #phi) #plus c");
	else leg->AddEntry(func,"A_{Bz}cos(#omega_{a}t #plus #phi) #plus A_{EDM}sin(#omega_{a}t #plus #phi) #plus c");
	leg->SetBorderSize(0);

	TPaveText *names = new TPaveText(0.50,0.62,0.70,0.89,"NDC");

	names->SetTextAlign(13);
	names->AddText("N"); 
	names->AddText("#chi^{2}/ndf");
	names->AddText("A_{Bz} [mrad]");
	string amplitude;
	if(!unblind) amplitude = "A_{EDM}^{BLIND} [mrad]";
	else amplitude = "A_{EDM} [mrad]";
	names->AddText(amplitude.c_str());
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

/*	graph->Draw();
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

    int pmin = 0.; 
    int pmax = 100.;

    for(int i_cut = 0; i_cut < 50; i_cut++) {

      std::string momSlice = std::to_string(pmin)+"_"+std::to_string(pmax);
      int p = (pmax+pmin)/2;

      std::string moduloHistName = name+"_ThetaY_vs_Time_Modulo_"+momSlice;
      //if(name=="S0S12S18") moduloHistName = "ThetaY_vs_Time_Modulo_"+momSlice;
      TH2D *moduloHist = (TH2D*)input->Get((moduloHistName).c_str());
      //std::cout<<name<<" , "<<moduloHist<<std::endl;
      
      if(moduloHist == 0) {
        pmin = pmin + 100;
        pmax = pmax + 100;
        continue;
      }

      int nEntries = moduloHist->GetEntries();

      TH1D *moduloProf = moduloHist->ProfileX();

      TGraphErrors *moduloGraph = ConvertToTGraphErrors(moduloProf);


      FitBz(moduloGraph, 0.17, OMEGA_A*1e3, phi, 0, OMEGA_A*1e3, phi, 0.5, 0, G2PERIOD);

      DrawBzFit(moduloGraph, name+", "+std::to_string(pmin)+" < p [MeV] < "+std::to_string(pmax)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/BzSim/"+config+"/Blinded/MomBinnedAna/"+name+"_ModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -.35, .35, unblind);// , double(nEntries), true);

      output->cd("MomentumBinnedAnalysis/ModuloFits");

      moduloGraph->SetName((name+"_fit_"+std::to_string(pmin)+"_"+std::to_string(pmax)).c_str());
      moduloGraph->Write();

      p_.push_back(p);
      ep_.push_back(pmax - p);
      c_.push_back(moduloGraph->GetFunction("BzFunc")->GetParameter(6));
      ec_.push_back(moduloGraph->GetFunction("BzFunc")->GetParError(6));
      ABz_.push_back(moduloGraph->GetFunction("BzFunc")->GetParameter(0));
      eABz_.push_back(moduloGraph->GetFunction("BzFunc")->GetParError(0));

      pmin = pmin + 100;
      pmax = pmax + 100;

      delete moduloProf; delete moduloHist;

    }

    TGraphErrors *c_vs_p = GenerateTGraphErrors(p_, c_, ep_, ec_);
    TGraphErrors *ABz_vs_p = GenerateTGraphErrors(p_, ABz_, ep_, eABz_);

    c_vs_p->GetXaxis()->SetRangeUser(0,3000);
    ABz_vs_p->GetXaxis()->SetRangeUser(0,3000);

    DrawTGraphErrors(c_vs_p, name+";p [MeV]: in range p #minus 50 < p < p #plus 50 MeV;c [mrad]", ("../Images/MC/BzSim/"+config+"/Blinded/MomBinnedAna/"+name+"_c_vs_p_"+qual).c_str());
    DrawTGraphErrors(ABz_vs_p, name+";p [MeV]: in range p #minus 50 < p < p #plus 50 MeV;A_{Bz} [mrad]", ("../Images/MC/BzSim/"+config+"/Blinded/MomBinnedAna/"+name+"_ABz_vs_p_"+qual).c_str());

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
  } else { 
  	c_ymin = -2; c_ymax = 2;
    A_ymin = -2; A_ymax = 2;
  }

  OverlayGraphs(cGraphs_, names_, "", ("../Images/MC/BzSim/"+config+"/Blinded/MomBinnedAna/c_vs_p_overlay_"+qual).c_str(), c_ymin, c_ymax);
  OverlayGraphs(ABzGraphs_, names_, "", ("../Images/MC/BzSim/"+config+"/Blinded/MomBinnedAna/ABz_vs_p_overlay_"+qual).c_str(), A_ymin, A_ymax);

  // Perform line fit

  //LineFit(ABzGraphs_); 


  return; 

}

int main() {

	bool sanityPlots = false;//true;
	bool write = false;// true; 

	// Read file
	TFile *input = TFile::Open(("../Plots/MC/BzSim/"+config+"/BzSim_"+qual+".root").c_str());
	cout << "\nRead input...\t\t: " << input << endl;

	std::string outputName = "../Plots/MC/BzSim/"+config+"/BzSim_blindedFits_"+qual+".root"; 
	if(!write) outputName = "delete_me.root";

	TFile *output = new TFile(outputName.c_str(), "RECREATE");

	output->mkdir("SimultaneousAnalysis");
 	output->cd("SimultaneousAnalysis");

	// Get histograms
	TH1D *h1_wiggle = (TH1D*)input->Get("Wiggle");
	TH1D *h1_wiggle_mod = (TH1D*)input->Get("Wiggle_Modulo");
	TH2D *h2_thetaY_mod = (TH2D*)input->Get("ThetaY_vs_Time_Modulo");

	// Make profile
	TH1D *px_thetaY_mod = h2_thetaY_mod->ProfileX();
	px_thetaY_mod->SetStats(0);


	TGraphErrors *gr_wiggle = ConvertToTGraphErrors(h1_wiggle);
	TGraphErrors *gr_wiggle_mod = ConvertToTGraphErrors(h1_wiggle_mod);
	TGraphErrors *gr_thetaY_mod = ConvertToTGraphErrors(px_thetaY_mod);

	// Draw all base plots
	if(sanityPlots) { 

		DrawTH1(h1_wiggle,"h1_wiggle","../Images/MC/BzSim/"+config+"/Blinded/SanityPlots/h1_wiggle_"+qual);
		DrawTH1(h1_wiggle_mod,"h1_wiggle_mod","../Images/MC/BzSim/"+config+"/Blinded/SanityPlots/h1_wiggle_mod_"+qual);
		DrawTGraphErrors(gr_wiggle,"gr_wiggle","../Images/MC/BzSim/"+config+"/Blinded/SanityPlots/gr_wiggle_"+qual);
		DrawTGraphErrors(gr_wiggle_mod,"gr_wiggle_mod","../Images/MC/BzSim/"+config+"/Blinded/SanityPlots/gr_wiggle_mod_"+qual);
		DrawTH2(h2_thetaY_mod,"h2_thetaY_mod","../Images/MC/BzSim/"+config+"/Blinded/SanityPlots/h2_thetaY_mod_"+qual);
		DrawTH1(px_thetaY_mod,"px_thetaY_mod","../Images/MC/BzSim/"+config+"/Blinded/SanityPlots/px_thetaY_mod_"+qual);
		DrawTGraphErrors(gr_thetaY_mod, "gr_thetaY_mod", "../Images/MC/BzSim/"+config+"/Blinded/SanityPlots/gr_thetaY_mod_"+qual);

	}

	// Already did this in UnblindedMacro
	// cout<<"Folding wiggle"<<endl;
	// // Fold wiggle for illustration 
	// FitFivePar(gr_wiggle, 1300, 64, 0.35, OMEGA_A*1e3, 0, xmin, xmax);
	// FoldWiggle(gr_wiggle);
	// cout<<"Folded wiggle"<<endl;
	// Now fit the modulo wiggle 

	// No shift 
	FitFivePar(gr_wiggle_mod, 1300, 64, 0.35, OMEGA_A*1e3, 0, 0, G2PERIOD);
	cout<<"G2PERIOD\t"<<G2PERIOD<<endl;
	cout<<"Getting five par func"<<endl;
	TF1 *modWiggle = gr_wiggle_mod->GetFunction("FiveParFunc");
	modWiggle->SetParName(0,"N_{0}");
	modWiggle->SetParName(1,"#tau [#mus]");
	modWiggle->SetParName(2,"A");
	//modWiggle->SetParName(3,"#omega_{a} (fixed) [MHz]");
	modWiggle->SetParName(4,"#phi [rad]");

	DrawModWiggle(gr_wiggle_mod, ";t_{g#minus2}^{mod} [#mus];Tracks / 149 ns","../Images/MC/BzSim/"+config+"/Blinded/fit_mod_wiggle_"+qual, double(px_thetaY_mod->GetEntries()), 15e3, 61e3);//+"_"+to_string(unblind));

	// ======= SET PHASE =======
	const double phi = modWiggle->GetParameter(4);

	// Shift the phase 90 deg
    double phi_edm = phi + M_PI/2.; 
    // Find a zero crossing 
    double t0 = phi * G2PERIOD / (2*M_PI);
    double zeroCrossing = 8*G2PERIOD - t0;

	// ================== get blinded A_EDM ================== 

    double dMu_blind = blinded_edm_value(unblind);  //1.6e-19*30;//
    double delta_blind = GetDelta(dMu_blind);
    double omega_a = getBlinded.referenceValue(); 
    double tan_A_edm = tan(delta_blind) / gmagic;

    double A_edm = alpha*atan(tan_A_edm) * 1e3; // 0.13 is asymmetry factor

   // ================== Inject blinded A_EDM into modulo plot ==================

    // Define blinded EDM oscillation
    TF1* blindEDMFunc = new TF1("blindEDMFunc",EDMFunc,zeroCrossing,zeroCrossing+G2PERIOD,3);
    blindEDMFunc->SetParNames("A_{EDM blinded}","#omega_{a BNL}","#phi");//,"offset");
    blindEDMFunc->SetParameters(A_edm,omega_a,phi_edm);//,xmin);
    blindEDMFunc->SetNpx(50000);

    TGraphErrors *gr_thetaY_mod_blind = BlindedModulo(gr_thetaY_mod, blindEDMFunc); 

	// ======= Fit for A_Bz =====
	// Bz should be 1700 ppm or 0.17 mrad
	FitBz(gr_thetaY_mod_blind, 0.17, OMEGA_A*1e3, phi, 0, OMEGA_A*1e3, phi, 0.5, 0, G2PERIOD);

	TF1 *BzWiggle = gr_thetaY_mod_blind->GetFunction("BzFunc");
	// BzWiggle->SetParName(0,"A_{Bz} [mrad]");
	// BzWiggle->SetParName(1,"#omega_{a}^{FIXED} [MHz]");
	// BzWiggle->SetParName(2,"#phi^{FIXED} [rad]");
	// if(unblind) BzWiggle->SetParName(3,"A_{EDM} [mrad]");
	// else BzWiggle->SetParName(3,"A_{EDM}^{BLIND} [mrad]");
	// BzWiggle->SetParName(5,"#phi^{FIXED} [rad]");
	// BzWiggle->SetParName(6,"c [mrad]");

	double N = px_thetaY_mod->GetEntries();

	gr_thetaY_mod_blind->GetXaxis()->SetRangeUser(0, G2PERIOD);
	DrawBzFit(gr_thetaY_mod_blind, ";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns","../Images/MC/BzSim/"+config+"/Blinded/fit_Bz_"+qual+"_"+to_string(unblind), N, -.5, .7, unblind);

	// Momentum binned 
	cout<<"\nPerforming momentum binned analysis"<<endl;
	
	output->mkdir("MomentumBinnedAnalysis");
  	output->mkdir("MomentumBinnedAnalysis/ModuloFits");
  	output->mkdir("MomentumBinnedAnalysis/ParameterScans");

	// MomentumBinnedAnalysis(input, output, phi);

	input->Close();
	output->Close();
	std::cout<<"\nWritten plots to root file:\n"<<outputName<<std::endl;

	return 0;
}
