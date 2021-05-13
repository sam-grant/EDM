#include <iostream>

#include "FancyDraw.h"
#include "Utils.h"
#include "RootInclude.h"

std::string config = "5.4e-18";
std::string qual = "trackReco_AQ";

double xmin = 30;//7*G2PERIOD;
double xmax = 300;//70*G2PERIOD;

void DrawSimpleEDMFit_2(TGraphErrors *graph, std::string title, std::string fname, double N, double ymin, double ymax, bool unblind) {

	TCanvas *c = new TCanvas("c","c",800,600);

	TF1 *func = graph->GetFunction("SimpleEDMFunc");
	func->SetLineWidth(3);
	func->SetLineColor(kRed);
	func->SetNpx(1e4);	

	double chi2ndf = func->GetChisquare() / func->GetNDF();
	double par0 = func->GetParameter(0);
	double err0 = func->GetParError(0);
	double par1 = func->GetParameter(1);
	double err1 = func->GetParError(1);
	double par2 = func->GetParameter(2);
	double err2 = func->GetParError(2);

	TLegend *leg = new TLegend(0.11,0.79,0.45,0.89);
	leg->AddEntry(func,"A_{EDM} sin(#omega_{a}t) + c");
	leg->SetBorderSize(0);

	TPaveText *names = new TPaveText(0.52,0.595,0.69,0.88,"NDC");

	names->SetTextAlign(13);
	names->AddText("N") ; 
	names->AddText("#chi^{2}/ndf");
	string amplitude;
	if(!unblind) amplitude = "A_{EDM}^{BLIND} [mrad]";
	else amplitude = "A_{EDM} [mrad]";
	names->AddText(amplitude.c_str());
	names->AddText("c [mrad]"); 

	TPaveText *values = new TPaveText(0.69,0.59,0.89,0.89,"NDC");
	values->SetTextAlign(33);
	values->AddText(SciNotation(double(N))); 
	values->AddText(Round(chi2ndf, 3));
	values->AddText(Round(par0, 2)+"#pm"+Round(err0, 1));
	values->AddText(Round(par2, 3)+"#pm"+Round(err2, 1));

	TPaveText *cuts = new TPaveText(0.15,0.20,0.45,0.40,"NDC");
	cuts->SetTextAlign(22);
	cuts->AddText("700 < p [MeV] < 2400");
	cuts->AddText("30.6 < t [#mus] < 305.6");

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

	graph->GetYaxis()->SetRangeUser(ymin,ymax);
  	int n_points = graph->GetN();
  	double xmax = graph->GetPointX(n_points-1);// + 50;
  	double xmin = graph->GetPointX(0);// - 50; 
  	double offset = (xmax - xmin) * 0.01;
  	xmin = xmin - offset; 
  	xmax = xmax + offset;
  	graph->GetXaxis()->SetRangeUser(xmin, xmax);
	//graph->GetXaxis()->SetRangeUser(0,G2PERIOD);

	graph->Draw("AP");
	values->Draw("same");
	names->Draw("same");
	leg->Draw("same");
	func->Draw("same");
	cuts->Draw("same");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void DrawFullEDMFit(TGraphErrors *graph, std::string title, std::string fname, double N, double ymin, double ymax, bool unblind) {

	TCanvas *c = new TCanvas("c","c",800,600);

	TF1 *func = graph->GetFunction("FullEDMFunc");
	func->SetLineWidth(3);
	func->SetLineColor(kRed);
	func->SetNpx(1e4);	

	double chi2ndf = func->GetChisquare() / func->GetNDF();
	double par0 = func->GetParameter(0); double err0 = func->GetParError(0);
	double par2 = func->GetParameter(2); double err2 = func->GetParError(2);
	double par3 = func->GetParameter(3); double err3 = func->GetParError(3);
	double par4 = func->GetParameter(4); double err4 = func->GetParError(4);

	TLegend *leg = new TLegend(0.15,0.15,0.85,0.25);
	leg->SetNColumns(2);
	leg->AddEntry(graph, "Sim   ");
	leg->AddEntry(func,"A_{g-2} cos(#omega_{a}t+#phi) + A_{EDM} sin(#omega_{a}t+#phi) + c");
	leg->SetBorderSize(0);

	//TPaveText *names = new TPaveText(0.52,0.555,0.69,0.88,"NDC");
	TPaveText *names = new TPaveText(0.52,0.595,0.69,0.88,"NDC");

	names->SetTextAlign(13);
	names->AddText("N") ; 
	names->AddText("#chi^{2}/ndf");
	names->AddText("A_{g-2} [mrad]");
	//names->AddText("#phi");
	string amplitude;
	amplitude = "A_{EDM} [mrad]";
	names->AddText(amplitude.c_str());
	names->AddText("c [mrad]"); 

	//TPaveText *values = new TPaveText(0.65,0.55,0.89,0.89,"NDC");
	TPaveText *values = new TPaveText(0.65,0.59,0.89,0.89,"NDC");
	values->SetTextAlign(33);
	values->AddText(SciNotation(double(N))); 
	values->AddText(Round(chi2ndf, 3));
	values->AddText(Round(par0, 1)+"#pm"+Round(err0, 1));
	//values->AddText(Round(par2, 3)+"#pm"+Round(err2, 1));
	values->AddText(Round(par3, 2)+"#pm"+Round(err3, 1));
	values->AddText(Round(par4, 3)+"#pm"+Round(err4, 1));

	//TPaveText *cuts = new TPaveText(0.20,0.75,0.40,0.85,"NDC");
	TPaveText *cuts = new TPaveText(0.20,0.30,0.40,0.40,"NDC");
	cuts->SetTextAlign(22);
	cuts->AddText("700 < p [MeV] < 2400");
	cuts->AddText("30.6 < t [#mus] < 305.6");//(to_string(7*G2PERIOD)+" < t [#mus] < "+to_string(70*G2PERIOD)).c_str());

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
	graph->GetYaxis()->SetRangeUser(ymin,ymax);

  	// Hack together x-axis range
  	int n_points = graph->GetN();
  	double xmax = graph->GetPointX(n_points-1);// + 50;
  	double xmin = graph->GetPointX(0);// - 50; 
  	double offset = (xmax - xmin) * 0.01;
  	xmin = xmin - offset; 
  	xmax = xmax + offset;

  	graph->GetXaxis()->SetRangeUser(xmin, xmax);

/*	graph->GetXaxis()->SetRangeUser(0,G2PERIOD);*/
	graph->Draw("AP");
	values->Draw("same");
	names->Draw("same");
	leg->Draw("same");
	func->Draw("same");
	cuts->Draw("same");

	c->SaveAs((fname+".pdf").c_str());
	c->SaveAs((fname+".png").c_str());
	c->SaveAs((fname+".C").c_str());

	delete c;

	return;

}

void OverlayGraphs(std::vector<TGraphErrors*> graphs, std::vector<string> names, std::string title, std::string fname, double ymin, double ymax ) {

	TCanvas *c = new TCanvas("c","c",800,600);
	//c->SetRightMargin(0.20);

	//TLegend *l = new TLegend(0.81,0.35,0.99,0.65);
	//TLegend *l = new TLegend(0.81,0.15,0.99,0.85);
	//TLegend *l = new TLegend(0.79,0.69,0.89,0.89);
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

	//gStyle->SetPalette(kBird);
	graphs.at(0)->SetMarkerColor(kBlack);
	graphs.at(1)->SetMarkerColor(kBlue);
	graphs.at(2)->SetMarkerColor(kRed);

	// Just S0, S12, S18
	nGraphs = 3;
	for(int i = 0; i < nGraphs; i++) {
    	graphs.at(i)->SetMarkerStyle(20);
    	//graphs.at(i)->SetMarkerColor(i+1);
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

double GetPhase(TFile *input) { 

	cout<<"Getting phase"<<endl;

	TH1D *h1_wiggle = (TH1D*)input->Get("MainPlots/S0S12S18_Wiggle");
	TH1D *h1_wiggle_mod = (TH1D*)input->Get("MainPlots/S0S12S18_Wiggle_Modulo");

	TGraphErrors *gr_wiggle = ConvertToTGraphErrors(h1_wiggle);
	TGraphErrors *gr_wiggle_mod = ConvertToTGraphErrors(h1_wiggle_mod);

	FitFivePar(gr_wiggle, 1300, 64.4, 0.35, OMEGA_A*1e3, 0, xmin, xmax);
	FitFivePar(gr_wiggle_mod, 1300, 64.4, 0.35, OMEGA_A*1e3, 0, 0, G2PERIOD);

  	TF1 *wiggle = gr_wiggle->GetFunction("FiveParFunc");
  	DrawWiggle(gr_wiggle, ";Decay time [#mus];Tracks / 149 ns","../Images/MC/dMuSim/"+config+"/Unblinded/fit_wiggle_"+qual, double(h1_wiggle->GetEntries()), xmin, xmax, 10, 40e3);

	TF1 *modWiggle = gr_wiggle_mod->GetFunction("FiveParFunc");
	DrawModWiggle(gr_wiggle_mod, ";t_{g#minus2}^{mod} [#mus];Tracks / 149 ns","../Images/MC/dMuSim/"+config+"/Unblinded/fit_mod_wiggle_"+qual, double(h1_wiggle_mod->GetEntries()), 5e3, 25e3);

	return modWiggle->GetParameter(4);

}

void SimultaneousAnalysis(TFile *input, TFile *output, bool fullFit) {

	const double phi = GetPhase(input); 
	std::cout<<"Phase is "<<phi<<std::endl;

	TH2D *h2_thetaY_mod = (TH2D*)input->Get("MainPlots/S0S12S18_ThetaY_vs_Time_Modulo");

	int nEntries = h2_thetaY_mod->GetEntries();
	TH1D *px_thetaY_mod = h2_thetaY_mod->ProfileX();
	std::cout << "Generated x-profile...\t: " << px_thetaY_mod << std::endl;

	TGraphErrors *gr_thetaY_mod = ConvertToTGraphErrors(px_thetaY_mod);

	gr_thetaY_mod->GetYaxis()->SetRangeUser(-.425, .425);

	// ======= Fit for A_Bz =====
	// Bz should be 1700 ppm or 0.17 mrad
	if(fullFit) {
		// Fit
    	FullEDMFit(gr_thetaY_mod, 0, OMEGA_A * 1e3, phi, 0.15, 0);
    	TF1 *func = gr_thetaY_mod->GetFunction("FullBzFunc");
    	DrawFullEDMFit(gr_thetaY_mod,  ";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/dMuSim/"+config+"/Unblinded/fit_dMu_full_"+qual).c_str(), double(nEntries), -0.75, 0.35, true);//,unblind);
    	gr_thetaY_mod->SetName("dMuFit");
    	gr_thetaY_mod->Write();
    	std::cout<<"A_EDM:\t"<<gr_thetaY_mod->GetFunction("FullEDMFunc")->GetParameter(3)<<std::endl;
  	} else if(!fullFit) {
    	SimpleEDMFit(gr_thetaY_mod, 0.15, OMEGA_A * 1e3, 0);
    	TF1 *func = gr_thetaY_mod->GetFunction("SimpleEDMFunc");
    	DrawSimpleEDMFit_2(gr_thetaY_mod, ";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/dMuSim/"+config+"/Unblinded/fit_dMu_simple_"+qual).c_str(), double(nEntries), -0.65, 0.4, true);
    	gr_thetaY_mod->SetName("dMuFit");
    	gr_thetaY_mod->Write();
    	std::cout<<"A_EDM:\t"<<gr_thetaY_mod->GetFunction("SimpleEDMFunc")->GetParameter(0)<<std::endl;
  	}

  return; 

}

void MomentumBinnedAnalysis(TFile *input, TFile *output) { 

	vector<TGraphErrors*> cGraphs_; vector<TGraphErrors*> AEDMGraphs_;

  	std::vector<string> names_ = { "S0", "S12", "S18", "S12S18", "S0S12S18" };

  	for(int i_stn = 0; i_stn < names_.size(); i_stn++) {

  		string name = names_.at(i_stn);

  		int step = 200;
  		int pmin = 0.; 
  		int pmax = step;

  		std::vector<double> c_;
  		std::vector<double> ec_;
  		std::vector<double> p_slice_;
  		std::vector<double> ep_slice_;
  		std::vector<double> AEDM_;
  		std::vector<double> eAEDM_;

  		for(int i_cut = 0; i_cut < 15; i_cut++) {

  			TH2D *moduloHist = (TH2D*)input->Get((name+"_ThetaY_vs_Time_Modulo_Slice_"+std::to_string(pmin)+"_"+std::to_string(pmax)).c_str());
  			
  			if(moduloHist == 0) {
  				pmin = pmin + step;
				pmax = pmax + step;
  				continue;
  			}

  			int nEntries = moduloHist->GetEntries();

  			TH1D *moduloProf = moduloHist->ProfileX();

  			TGraphErrors *moduloGraph = ConvertToTGraphErrors(moduloProf);

			SimpleEDMFit(moduloGraph, 0.17, OMEGA_A * 1e3, 0);

			DrawSimpleEDMFit(moduloGraph, name+", "+std::to_string(pmin)+" < p [MeV] < "+std::to_string(pmax)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+name+"_ModuloFit_"+std::to_string(pmin)+"_"+std::to_string(pmax)+"_"+qual).c_str(), double(nEntries), true);

			output->cd("MomentumBinnedAnalysis/ModuloFits");

			moduloGraph->SetName((name+"_fit_"+std::to_string(pmin)+"_"+std::to_string(pmax)).c_str());
			moduloGraph->Write();

			double p = (pmax + pmin) / 2;

			p_slice_.push_back(p);
			ep_slice_.push_back(pmax - p);
			c_.push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParameter(2));
			ec_.push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParError(2));
			AEDM_.push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParameter(0));
			eAEDM_.push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParError(0));

			pmin = pmin + step;
			pmax = pmax + step;

			delete moduloProf; delete moduloHist;

  		}

  		TGraphErrors *c_vs_p = GenerateTGraphErrors(p_slice_, c_, ep_slice_, ec_);
  		TGraphErrors *AEDM_vs_p = GenerateTGraphErrors(p_slice_, AEDM_, ep_slice_, eAEDM_);

  		c_vs_p->GetXaxis()->SetRangeUser(0,3000);
  		AEDM_vs_p->GetXaxis()->SetRangeUser(0,3000);

  		DrawTGraphErrors(c_vs_p, name+";p [MeV]: in range p #minus "+to_string(step)+" < p < p #plus "+to_string(step)+" MeV;c [mrad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+name+"_c_vs_p_slice_"+qual).c_str());
  		DrawTGraphErrors(AEDM_vs_p, name+";p [MeV]: in range p #minus "+to_string(step)+" < p < p #plus "+to_string(step)+" MeV;A_{EDM} [mrad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+name+"_AEDM_vs_p_slice_"+qual).c_str());

  		cGraphs_.push_back(c_vs_p);
  		AEDMGraphs_.push_back(AEDM_vs_p);

  		output->cd("MomentumBinnedAnalysis/ParameterScans");
  		c_vs_p->SetName((name+"_c_vs_p").c_str());
  		AEDM_vs_p->SetName((name+"_AEDM_vs_p").c_str());
  		c_vs_p->Write();
		AEDM_vs_p->Write();

  	}
  	
  	double c_ymin; double c_ymax;
  	double A_ymin; double A_ymax;

  if(qual=="eQ") { //} || qual=="vertCorr_eQ") { 
    c_ymin = -3; c_ymax = 0.6;
    A_ymin = -4; A_ymax = 1;
  } /*else if(qual=="eQ_2" || qual=="vertCorr_eQ_2") { 
    c_ymin = -0.6; c_ymax = 0.15;
    A_ymin = -0.6; A_ymax = 0.4;
  } else if(qual=="noQ"  || qual=="vertCorr_noQ") { 
    c_ymin = -2; c_ymax = 2;
    A_ymin = -2; A_ymax = 2;
  } else if(qual=="pValQ"  || qual=="vertCorr_pValQ") { 
    c_ymin = -2.5; c_ymax = 1.25;
    A_ymin = -2; A_ymax = 2;*/
  else if(qual=="vertCorr_eQ_eQ") { 
    c_ymin = -2; c_ymax = 0.6;
    A_ymin = -4; A_ymax = 1;
  } /*else if(qual=="eQ_coarse") {
    c_ymin = -0.6; c_ymax = 0.15;
    A_ymin = 0.0; A_ymax = 0.35;
  }*/ else { 
    c_ymin = -2; c_ymax = 2;
    A_ymin = -2; A_ymax = 2;
  }

  	OverlayGraphs(cGraphs_, names_, "", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/c_vs_p_slice_overlay_"+qual).c_str(), c_ymin, c_ymax);
  	OverlayGraphs(AEDMGraphs_, names_, "", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/EDM_vs_p_slice_overlay_"+qual).c_str(), A_ymin, A_ymax);


	return; 
}

// Verrtical offset correction
void VertOffset(TFile *input, TFile *output) {  

  vector<TGraphErrors*> c_vs_p_slice_; vector<TGraphErrors*> AEDM_vs_p_slice_;

  std::vector<string> names_ = { "S0", "S12", "S18"};

  for(int i_stn = 0; i_stn < names_.size(); i_stn++) {

    std::string name = names_.at(i_stn);

    std::vector<double> c_slice_;
    std::vector<double> ec_slice_;
    std::vector<double> p_slice_;
    std::vector<double> ep_slice_;
    std::vector<double> AEDM_slice_;
    std::vector<double> eAEDM_slice_;

    int step = 100; 
    int pmin = 0; 
    int pmax = step+pmin;

    for(int i_cut = 0; i_cut < 30; i_cut++) {

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

      SimpleEDMFit(moduloGraph, 0.17, OMEGA_A * 1e3, 0);

      //DrawBzFit(moduloGraph, name+", "+std::to_string(pmin)+" < p [MeV] < "+std::to_string(pmax)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/BzSim/"+config+"/Unblinded/MomBinnedAna/"+name+"_ModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -0.15, .15);;// , double(nEntries), true);

      output->cd("MomentumBinnedAnalysis/ModuloFits");

      moduloGraph->SetName((name+"_fit_"+std::to_string(pmin)+"_"+std::to_string(pmax)).c_str());
      moduloGraph->Write();

      p_slice_.push_back(p);
      ep_slice_.push_back(pmax - p);

	  c_slice_.push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParameter(2));
	  ec_slice_.push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParError(2));
	  AEDM_slice_.push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParameter(0));
	  eAEDM_slice_.push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParError(0));

      pmin = pmin + step;
      pmax = pmax + step;

      delete moduloProf; delete moduloHist;

    }


    TGraphErrors *c_vs_p_slice = GenerateTGraphErrors(p_slice_, c_slice_, ep_slice_, ec_slice_);
    TGraphErrors *AEDM_vs_p_slice = GenerateTGraphErrors(p_slice_, AEDM_slice_, ep_slice_, eAEDM_slice_);

    c_vs_p_slice_.push_back(c_vs_p_slice);
    AEDM_vs_p_slice_.push_back(AEDM_vs_p_slice);

    output->cd("MomentumBinnedAnalysis/ParameterScans");

    c_vs_p_slice->SetName((name+"_c_vs_p_slice").c_str());
    AEDM_vs_p_slice->SetName((name+"_AEDM_vs_p_slice").c_str());

    c_vs_p_slice->Write();
    AEDM_vs_p_slice->Write();

  }

  return; 

}

int main() {

	bool write = false;
	bool fullFit = true;

	// Read file
	std::string inputName = "../Plots/MC/dMu/"+config+"/dMuSim_"+qual+".root";
	TFile *input = TFile::Open(inputName.c_str());
	cout<<"Reading\t"<<inputName<<" "<<input<<endl;

	std::string outputName = "../Plots/MC/dMu/"+config+"/dMuSim_unblindedFits_"+qual+".root"; 
	if(!write) outputName = "delete_me.root";

	TFile *output = new TFile(outputName.c_str(), "RECREATE");

	output->mkdir("SimultaneousAnalysis");
	output->cd("SimultaneousAnalysis");

	SimultaneousAnalysis(input, output, fullFit);

	output->mkdir("MomentumBinnedAnalysis");
	output->mkdir("MomentumBinnedAnalysis/ModuloFits");
	output->mkdir("MomentumBinnedAnalysis/ParameterScans");

	//MomentumBinnedAnalysis(input, output);
	// VertOffset(input, output);

	input->Close();
	output->Close();

	std::cout<<"\nWritten plots to root file:\n"<<outputName<<std::endl;

	return 0;


}
