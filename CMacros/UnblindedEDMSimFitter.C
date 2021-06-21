#include <iostream>

#include "FancyDraw.h"
#include "Utils.h"
#include "RootInclude.h"

std::string config = "5.4e-18";
// std::string qual = "trackReco_AQ";
std::string qual = "trackReco_500MeV_AQ";
//std::string qual = "trackReco_equalStats_500e3_AQ";

double xmin = 30;//7*G2PERIOD;
double xmax = 300;//70*G2PERIOD;

void OverlayScanGraphs(std::vector<TGraphErrors*> graphs, string stns[], std::string title, std::string fname, double ymin, double ymax, bool xLabel) {

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

  // Hack together x-axis range
  int N = graphs.at(0)->GetN();
  double xmax = graphs.at(0)->GetPointX(N-1);// + 50;
  double xmin = graphs.at(0)->GetPointX(0);// - 50; 
  double offset = (xmax - xmin) * 0.1; //0.05;
  xmin = xmin - offset; 
  xmax = xmax + offset;
  graphs.at(0)->GetXaxis()->SetRangeUser(xmin, xmax);

  graphs.at(0)->SetMarkerColor(kBlack);
  graphs.at(1)->SetMarkerColor(kBlue);
  graphs.at(2)->SetMarkerColor(kRed);


  if(xLabel) {
    graphs.at(0)->GetXaxis()->LabelsOption("h");
    graphs.at(0)->GetXaxis()->SetTickLength(0);
  }

  // Just S0 S12 S18
  nGraphs = 3;
  for(int i = 0; i < nGraphs; i++) {
    graphs.at(i)->SetMarkerStyle(20);
    if(i==3) graphs.at(i)->SetMarkerColor(kGreen-3);
    else if(i==4) graphs.at(i)->SetMarkerColor(kOrange+7);
    l->AddEntry(graphs.at(i), (stns[i]).c_str());
    if(i==0 && !xLabel) graphs.at(i)->Draw("AP");
    else if(i==0 && xLabel) graphs.at(i)->Draw("0AP");
    else graphs.at(i)->Draw("P SAME");
  }

  l->Draw("same");

  gPad->Update();

  if(xLabel) { 
    TF1 *f1=new TF1("f1","x", c->GetUxmin(),c->GetUxmax());
    TGaxis *labels = new TGaxis(c->GetUxmin(),c->GetUymin(),c->GetUxmax(),c->GetUymin(),"f1",8);
    labels->SetLabelSize(0);
    labels->Draw("same");
  }

  c->SaveAs((fname+".pdf").c_str());
  c->SaveAs((fname+".png").c_str());
  c->SaveAs((fname+".C").c_str());


  delete c;

  return;

}

void DrawScanGraph(TGraphErrors *graph, std::string title, std::string fname, bool xLabel) {

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

  // Hack together x-axis range
  int N = graph->GetN();
  double xmax = graph->GetPointX(N-1);// + 50;
  double xmin = graph->GetPointX(0);// - 50; 
  double offset = (xmax - xmin) * 0.1;
  xmin = xmin - offset; 
  xmax = xmax + offset;
  graph->GetXaxis()->SetRangeUser(xmin, xmax);

  if(!xLabel) graph->Draw("AP");
  else { 
    graph->Draw("0AP");
    gPad->Update();
    graph->GetXaxis()->LabelsOption("h");
    graph->GetXaxis()->SetTickLength(0);
    TF1 *f1=new TF1("f1","x", c->GetUxmin(),c->GetUxmax());
    TGaxis *labels = new TGaxis(c->GetUxmin(),c->GetUymin(),c->GetUxmax(),c->GetUymin(),"f1",8);
    labels->SetLabelSize(0);
    labels->Draw("same");

  }

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

  // Currently don't truth the phase from the modulo
  // Phase from regular wiggle seems more stable.

	return wiggle->GetParameter(4);

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
    	TF1 *func = gr_thetaY_mod->GetFunction("FullEDMFunc");
    	DrawFullEDMFit(gr_thetaY_mod,  ";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/dMuSim/"+config+"/Unblinded/fit_dMu_full_"+qual).c_str(), double(nEntries), -0.75, 0.35, true);//,unblind);
    	gr_thetaY_mod->SetName("dMuFit");
    	gr_thetaY_mod->Write();
    	std::cout<<"A_EDM:\t"<<gr_thetaY_mod->GetFunction("FullEDMFunc")->GetParameter(3)<<std::endl;
  	} else if(!fullFit) {
    	SimpleEDMFit(gr_thetaY_mod, 0.15, OMEGA_A * 1e3, 0);
    	TF1 *func = gr_thetaY_mod->GetFunction("SimpleEDMFunc");
    	DrawSimpleEDMFit(gr_thetaY_mod, ";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/dMuSim/"+config+"/Unblinded/fit_dMu_simple_"+qual).c_str(), double(nEntries), -0.65, 0.4, true);
    	gr_thetaY_mod->SetName("dMuFit");
    	gr_thetaY_mod->Write();
    	std::cout<<"A_EDM:\t"<<gr_thetaY_mod->GetFunction("SimpleEDMFunc")->GetParameter(0)<<std::endl;
  	}

  return; 

}

void MomentumBinnedAnalysis(TFile *input, TFile *output, bool fullFit, bool extraScans) { 

  const double phi = GetPhase(input);  

  string stns[] = { "S0", "S12", "S18", "S12S18", "S0S12S18"}; // {"S0S12S18", "S12S18", "S12", "S18", "S0"}; // 
  int n_stns = sizeof(stns)/sizeof(stns[0]);

  string cuts_configs[] = {"MomSlices", "MomSymCuts", "MomMinScan", "MomMaxScan"};
  int n_cut_config = sizeof(cuts_configs)/sizeof(cuts_configs[0]);

  vector<string> xLabels_;

  vector<TGraphErrors*> c_vs_p_[n_cut_config]; vector<TGraphErrors*> A_vs_p_[n_cut_config];

  // extra scans
  //if(extraScans) { 

  // Extra scans
  TGraphErrors* thetaY_RMS_vs_p_[n_cut_config];
  TGraphErrors* Y_RMS_vs_p_[n_cut_config];
  TGraphErrors* pY_RMS_vs_p_[n_cut_config];
  TGraphErrors* N_vs_p_[n_cut_config];
  TGraphErrors* eA_vs_p_[n_cut_config];

  //}
  int step = 500;//200;
  int n_cuts = PMAX / step;
  int lo = -1; 
  int hi = -1;
  int i_cut_config = -1;

  string fitType = "full";
  if(!fullFit) fitType = "simple";

  for(int i_stn = 0; i_stn < n_stns; i_stn++) {

    std::vector<double> c_[n_cut_config];
    std::vector<double> ec_[n_cut_config];
    std::vector<double> p_[n_cut_config];
    std::vector<double> ep_[n_cut_config];
    std::vector<double> A_[n_cut_config];
    std::vector<double> eA_[n_cut_config];

    // Extra scans
    vector<double> thetaY_RMS_[n_cut_config];
    vector<double> e_thetaY_RMS_[n_cut_config];
    vector<double> Y_RMS_[n_cut_config];
    vector<double> e_Y_RMS_[n_cut_config];
    vector<double> pY_RMS_[n_cut_config];
    vector<double> e_pY_RMS_[n_cut_config];
    vector<double> N_[n_cut_config];
    vector<double> zeros_[n_cut_config];

    string stn = stns[i_stn]; // name = names_.at(i_stn);

    // ============ 200 MeV slices ============
    i_cut_config = 0; 

    for(int i_cut = 0; i_cut < n_cuts; i_cut++) {

        lo = 0 + i_cut*step; 
        hi = step + i_cut*step;

        // Get hist
        std::string momSlice = std::to_string(lo)+"_"+std::to_string(hi);
        int p = (hi+lo)/2;

        std::string moduloHistName = cuts_configs[i_cut_config]+"/"+stn+"_ThetaY_vs_Time_Modulo_"+momSlice;
        TH2D *moduloHist = (TH2D*)input->Get((moduloHistName).c_str());

        if(moduloHist==0) continue;

        int nEntries = moduloHist->GetEntries();

        // COMMENT
        if(qual=="trackReco_equalStats_500e3_AQ" && nEntries!=500e3 && stn == "S0S12S18") {
        	cout<<momSlice<<endl;
        	continue;
        }

        /*
        // Refill hist (doesn't work)

        TH1D *moduloProf;

        if(true) { 

          // Clone old hist 
          TH2D *moduloHist_clone = (TH2D*)moduloHist->Clone("moduloHist_clone");
          // Empty it 
          moduloHist_clone->Reset("ICESM");

          //TF1 *fx = new TF1("fx", "x", 0, moduloHist->GetNbinsX());
          //TF1 *fy = new TF1("fy", "x", 0, moduloHist->GetNbinsY());

          TRandom3 rand(0); 

          while( moduloHist_clone->GetEntries() < 500e3) { 

            int i_xbin = rand.Uniform(moduloHist->GetNbinsX());
            int i_ybin = rand.Uniform(moduloHist->GetNbinsY());

            double binContent = moduloHist->GetBinContent(i_xbin+1, i_ybin+1);
            moduloHist_clone->SetBinContent(i_xbin+1, i_ybin+1, binContent);

          }

          DrawTH2(moduloHist_clone, "tmp", "tmp");

          cout<<"Positrons in refilled hist: "<<moduloHist_clone->GetEntries()<<endl;

          //moduloHist_clone = moduloHist;

          moduloProf = moduloHist_clone->ProfileX();

        } else { 

          moduloProf = moduloHist->ProfileX();

        }
        */
        

        

        p_[i_cut_config].push_back(p);
        ep_[i_cut_config].push_back(step/2);

        // Run fits

        TH1D *moduloProf = moduloHist->ProfileX();

        TGraphErrors *moduloGraph = ConvertToTGraphErrors(moduloProf);

        output->cd(("MomentumBinnedAnalysis/ModuloFits/"+cuts_configs[i_cut_config]).c_str());

        if(!fullFit) { 
          //output->mkdir(("MomentumBinnedAnalysis/ModuloFits/"+cuts_configs[i_cut_config]).c_str());
          
          // Simple fit with a phase of zero
          SimpleEDMFit(moduloGraph, 0.15, OMEGA_A * 1e3, 0);
          DrawSimpleEDMFit(moduloGraph, stn+", "+std::to_string(lo)+" < p [MeV] < "+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_SimpleModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -5, 5, true);// , double(nEntries), true);
          moduloGraph->SetName((stn+"_ModuloFit_"+momSlice).c_str());
          moduloGraph->Write();

          c_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParameter(2));
          ec_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParError(2));
          A_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParameter(0));
          eA_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParError(0));

        } else if(fullFit) { 
          //output->mkdir(("MomentumBinnedAnalysis/ModuloFits/"+cuts_configs[i_cut_config]).c_str());
          // Full Bz fit
          FullEDMFit(moduloGraph, 0, OMEGA_A * 1e3, phi, 0.15, 0);
          DrawFullEDMFit(moduloGraph, stn+", "+std::to_string(lo)+" < p [MeV] < "+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_FullModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -5, 5, true);// , double(nEntries), true);
          moduloGraph->SetName((stn+"_ModuloFit_"+momSlice).c_str());
          moduloGraph->Write();

          c_[i_cut_config].push_back(moduloGraph->GetFunction("FullEDMFunc")->GetParameter(4));
          ec_[i_cut_config].push_back(moduloGraph->GetFunction("FullEDMFunc")->GetParError(4));
          A_[i_cut_config].push_back(moduloGraph->GetFunction("FullEDMFunc")->GetParameter(3));
          eA_[i_cut_config].push_back(moduloGraph->GetFunction("FullEDMFunc")->GetParError(3));

        }
        
        delete moduloProf;
        delete moduloHist;
        delete moduloGraph;

        if(extraScans && stn=="S0S12S18") { 

          //if(stn!="S0S12S18") continue;

          std::string thetaYHistName = cuts_configs[i_cut_config]+"/"+stn+"_ThetaY_"+momSlice;
          TH1D *thetaYHist = (TH1D*)input->Get((thetaYHistName).c_str());

          thetaY_RMS_[i_cut_config].push_back(thetaYHist->GetRMS());
          e_thetaY_RMS_[i_cut_config].push_back(thetaYHist->GetRMSError());

          std::string yHistName = cuts_configs[i_cut_config]+"/"+stn+"_Y_"+momSlice;
          TH1D *yHist = (TH1D*)input->Get((yHistName).c_str());

          Y_RMS_[i_cut_config].push_back(yHist->GetRMS());
          e_Y_RMS_[i_cut_config].push_back(yHist->GetRMSError());

          std::string pYHistName = cuts_configs[i_cut_config]+"/"+stn+"_MomentumY_"+momSlice;
          TH1D *pYHist = (TH1D*)input->Get((pYHistName).c_str());

          pY_RMS_[i_cut_config].push_back(pYHist->GetRMS());
          e_pY_RMS_[i_cut_config].push_back(pYHist->GetRMSError());

          N_[i_cut_config].push_back(yHist->GetEntries());
          zeros_[i_cut_config].push_back(0);

        }

    }


    output->cd(("MomentumBinnedAnalysis/ParameterScans/"+cuts_configs[i_cut_config]).c_str());

    //TGraphErrors *c_vs_p_slice = GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_config]);
    //TGraphErrors *A_vs_p_slice = GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_
    c_vs_p_[i_cut_config].push_back(GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_config]));
    A_vs_p_[i_cut_config].push_back(GenerateTGraphErrors(p_[i_cut_config], A_[i_cut_config], ep_[i_cut_config], eA_[i_cut_config]));

    DrawScanGraph(c_vs_p_[i_cut_config].at(i_stn), stn+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;c [mrad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_"+fitType+"_c_vs_p_"+qual).c_str(), false);
    DrawScanGraph(A_vs_p_[i_cut_config].at(i_stn), stn+";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;A_{EDM} [mrad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_"+fitType+"_A_vs_p_"+qual).c_str(), false);
  
    c_vs_p_[i_cut_config].at(i_stn)->SetName((stn+"_c_vs_p").c_str());
    A_vs_p_[i_cut_config].at(i_stn)->SetName((stn+"_A_vs_p").c_str());

    c_vs_p_[i_cut_config].at(i_stn)->Write();
    A_vs_p_[i_cut_config].at(i_stn)->Write();

    if(extraScans && stn == "S0S12S18") {

      thetaY_RMS_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], thetaY_RMS_[i_cut_config], ep_[i_cut_config], e_thetaY_RMS_[i_cut_config]);
      DrawScanGraph(thetaY_RMS_vs_p_[i_cut_config], ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#sigma#theta_{y} [mrad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_"+fitType+"_theta_Y_RMS_vs_p_"+qual).c_str(), false);
      thetaY_RMS_vs_p_[i_cut_config]->SetName((stn+"_thetaY_RMS_vs_p").c_str());
      thetaY_RMS_vs_p_[i_cut_config]->Write();

      Y_RMS_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], Y_RMS_[i_cut_config], ep_[i_cut_config], e_Y_RMS_[i_cut_config]);
      DrawScanGraph(Y_RMS_vs_p_[i_cut_config], ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#sigmay [mm]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_"+fitType+"_Y_RMS_vs_p_"+qual).c_str(), false);
      Y_RMS_vs_p_[i_cut_config]->SetName((stn+"_Y_RMS_vs_p").c_str());
      Y_RMS_vs_p_[i_cut_config]->Write();

      pY_RMS_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], pY_RMS_[i_cut_config], ep_[i_cut_config], e_pY_RMS_[i_cut_config]);
      DrawScanGraph(pY_RMS_vs_p_[i_cut_config], ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#sigmap_{y} [MeV]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_"+fitType+"_Momentum_Y_RMS_vs_p_"+qual).c_str(), false);
      pY_RMS_vs_p_[i_cut_config]->SetName((stn+"_pY_RMS_vs_p").c_str());
      pY_RMS_vs_p_[i_cut_config]->Write();

      N_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], N_[i_cut_config], ep_[i_cut_config], zeros_[i_cut_config]);
      DrawScanGraph(N_vs_p_[i_cut_config], ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;Positrons", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_"+fitType+"_N_vs_p_"+qual).c_str(), false);
      N_vs_p_[i_cut_config]->SetName((stn+"_N_vs_p").c_str());
      N_vs_p_[i_cut_config]->Write();

      eA_vs_p_[i_cut_config] = GenerateTGraphErrors(p_[i_cut_config], eA_[i_cut_config], ep_[i_cut_config], zeros_[i_cut_config]);
      DrawScanGraph(eA_vs_p_[i_cut_config], ";p [MeV]: in range p #minus "+to_string(step/2)+" < p < p #plus "+to_string(step/2)+" MeV;#deltaA_{EDM}", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_"+fitType+"_eA_vs_p_"+qual).c_str(), false);
      eA_vs_p_[i_cut_config]->SetName((stn+"_eA_vs_p").c_str());
      eA_vs_p_[i_cut_config]->Write();

    }

    // ============ Symmetric cuts ============
    i_cut_config = 1; 

    for(int i_cut = 0; i_cut < n_cuts/2; i_cut++) {

         lo = 400 + i_cut*step; 
         hi = 3000 - i_cut*step;

        // Get hist
        std::string momSlice = std::to_string(lo)+"_"+std::to_string(hi);
        int p = i_cut + 1;

        std::string moduloHistName = cuts_configs[i_cut_config]+"/"+stn+"_ThetaY_vs_Time_Modulo_"+momSlice;
        TH2D *moduloHist = (TH2D*)input->Get((moduloHistName).c_str());

        if(moduloHist==0) continue;

        int nEntries = moduloHist->GetEntries();

        if(qual=="trackReco_equalStats_500e3_AQ" && nEntries!=500e3 && stn == "S0S12S18") continue;

        if(i_stn==0) xLabels_.push_back(to_string(lo)+"-"+to_string(hi));

        cout<<to_string(lo)+"-"+to_string(hi)<<endl;

        p_[i_cut_config].push_back(p);
        ep_[i_cut_config].push_back(0);

        // Run fits
        TH1D *moduloProf = moduloHist->ProfileX();

        TGraphErrors *moduloGraph = ConvertToTGraphErrors(moduloProf);

        output->cd(("MomentumBinnedAnalysis/ModuloFits/"+cuts_configs[i_cut_config]).c_str());

        if(!fullFit) { 
          // Simple fit with a phase of zero
          SimpleEDMFit(moduloGraph, 0.15, OMEGA_A * 1e3, 0);
          DrawSimpleEDMFit(moduloGraph, stn+", "+std::to_string(lo)+"-"+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_SimpleModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -5, 5, true);;// , double(nEntries), true);
          moduloGraph->SetName((stn+"_ModuloFit_"+momSlice).c_str());
          moduloGraph->Write();

          c_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParameter(2));
          ec_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParError(2));
          A_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParameter(0));
          eA_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParError(0));

        } else if(fullFit) { 
          // Full Bz fit
          FullEDMFit(moduloGraph, 0, OMEGA_A * 1e3, phi, 0.15, 0);
          DrawFullEDMFit(moduloGraph, stn+", "+std::to_string(lo)+"-"+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_FullModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -5, 5, true);;// , double(nEntries), true);
          moduloGraph->SetName((stn+"_ModuloFit_"+momSlice).c_str());
          moduloGraph->Write();

          c_[i_cut_config].push_back(moduloGraph->GetFunction("FullEDMFunc")->GetParameter(4));
          ec_[i_cut_config].push_back(moduloGraph->GetFunction("FullEDMFunc")->GetParError(4));
          A_[i_cut_config].push_back(moduloGraph->GetFunction("FullEDMFunc")->GetParameter(3));
          eA_[i_cut_config].push_back(moduloGraph->GetFunction("FullEDMFunc")->GetParError(3));
        
        }
        
        delete moduloProf;
        delete moduloHist;
        delete moduloGraph;

    }

    output->cd(("MomentumBinnedAnalysis/ParameterScans/"+cuts_configs[i_cut_config]).c_str());

    c_vs_p_[i_cut_config].push_back(GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_config]));
    A_vs_p_[i_cut_config].push_back(GenerateTGraphErrors(p_[i_cut_config], A_[i_cut_config], ep_[i_cut_config], eA_[i_cut_config]));


    bool xLabel = false; 
    if(i_cut_config==1) {
      xLabel = true;
      // Set bin labels for sym cuts
      for (int i = 0; i < xLabels_.size(); i++) { 
        c_vs_p_[i_cut_config].at(i_stn)->GetXaxis()->SetBinLabel(c_vs_p_[i_cut_config].at(i_stn)->GetXaxis()->FindBin(i+1.), (xLabels_.at(i)).c_str());
        A_vs_p_[i_cut_config].at(i_stn)->GetXaxis()->SetBinLabel(A_vs_p_[i_cut_config].at(i_stn)->GetXaxis()->FindBin(i+1.), (xLabels_.at(i)).c_str());
      }
    }

    DrawScanGraph(c_vs_p_[i_cut_config].at(i_stn), stn+";p_{min} #minus p_{max} [MeV];c [mrad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_"+fitType+"_c_vs_p_"+qual).c_str(), xLabel);
    DrawScanGraph(A_vs_p_[i_cut_config].at(i_stn), stn+";p_{min} #minus p_{max} [MeV];A_{EDM} [mrad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_"+fitType+"_A_vs_p_"+qual).c_str(), xLabel);
    
    c_vs_p_[i_cut_config].at(i_stn)->SetName((stn+"_c_vs_p").c_str());
    A_vs_p_[i_cut_config].at(i_stn)->SetName((stn+"_A_vs_p").c_str());

    c_vs_p_[i_cut_config].at(i_stn)->Write();
    A_vs_p_[i_cut_config].at(i_stn)->Write();

    i_cut_config = 2;

    // ============ pmin scan ============
    for(int i_cut = 0; i_cut < n_cuts; i_cut++) {

        lo = 0 + i_cut*step;
        hi = PMAX;

        // Get hist
        std::string momSlice = std::to_string(lo)+"_"+std::to_string(hi);
        int p = lo;

        std::string moduloHistName = cuts_configs[i_cut_config]+"/"+stn+"_ThetaY_vs_Time_Modulo_"+momSlice;
        TH2D *moduloHist = (TH2D*)input->Get((moduloHistName).c_str());

        if(moduloHist==0) continue;

        int nEntries = moduloHist->GetEntries();

        if(qual=="trackReco_equalStats_500e3_AQ" && nEntries!=500e3 && stn == "S0S12S18") continue;

        p_[i_cut_config].push_back(p);
        ep_[i_cut_config].push_back(0);

        // Run fits
        TH1D *moduloProf = moduloHist->ProfileX();

        TGraphErrors *moduloGraph = ConvertToTGraphErrors(moduloProf);

        output->cd(("MomentumBinnedAnalysis/ModuloFits/"+cuts_configs[i_cut_config]).c_str());

        if(!fullFit) { 
          // Simple fit with a phase of zero
          SimpleEDMFit(moduloGraph, 0.15, OMEGA_A * 1e3, 0);
          DrawSimpleEDMFit(moduloGraph, stn+", "+std::to_string(lo)+" < p [MeV] < "+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_SimpleModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -5, 5, true);
          moduloGraph->SetName((stn+"_ModuloFit_"+momSlice).c_str());
          moduloGraph->Write();

          c_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParameter(2));
          ec_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParError(2));
          A_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParameter(0));
          eA_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParError(0));

        } else if(fullFit) { 
          // Full Bz fit
          FullEDMFit(moduloGraph, 0, OMEGA_A * 1e3, phi, 0.15, 0);
          DrawFullEDMFit(moduloGraph, stn+", "+std::to_string(lo)+" < p [MeV] < "+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_FullModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -5, 5, true);
          moduloGraph->SetName((stn+"_ModuloFit_"+momSlice).c_str());
          moduloGraph->Write();

          c_[i_cut_config].push_back(moduloGraph->GetFunction("FullEDMFunc")->GetParameter(4));
          ec_[i_cut_config].push_back(moduloGraph->GetFunction("FullEDMFunc")->GetParError(4));
          A_[i_cut_config].push_back(moduloGraph->GetFunction("FullEDMFunc")->GetParameter(3));
          eA_[i_cut_config].push_back(moduloGraph->GetFunction("FullEDMFunc")->GetParError(3));
        
        }
        
        delete moduloProf;
        delete moduloHist;
        delete moduloGraph;

    }


    output->cd(("MomentumBinnedAnalysis/ParameterScans/"+cuts_configs[i_cut_config]).c_str());

    c_vs_p_[i_cut_config].push_back(GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_config]));
    A_vs_p_[i_cut_config].push_back(GenerateTGraphErrors(p_[i_cut_config], A_[i_cut_config], ep_[i_cut_config], eA_[i_cut_config]));

    DrawScanGraph(c_vs_p_[i_cut_config].at(i_stn), stn+";p_{min} [MeV];c [mrad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_"+fitType+"_c_vs_p_"+qual).c_str(), false);
    DrawScanGraph(A_vs_p_[i_cut_config].at(i_stn), stn+";p_{min} [MeV];A_{EDM} [mrad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_"+fitType+"_A_vs_p_"+qual).c_str(), false);

    c_vs_p_[i_cut_config].at(i_stn)->SetName((stn+"_c_vs_p").c_str());
    A_vs_p_[i_cut_config].at(i_stn)->SetName((stn+"_A_vs_p").c_str());

    c_vs_p_[i_cut_config].at(i_stn)->Write();
    A_vs_p_[i_cut_config].at(i_stn)->Write();


    // ============ pmax scan ============
    i_cut_config = 3;
    for(int i_cut = 0; i_cut < n_cuts-(600/step); i_cut++) { // n_cuts-(600/step)

        lo = 600;//0 + i_cut*step;
        hi = 3000 - i_cut*step;

        // Get hist
        std::string momSlice = std::to_string(lo)+"_"+std::to_string(hi);
        int p = hi;

        std::string moduloHistName = cuts_configs[i_cut_config]+"/"+stn+"_ThetaY_vs_Time_Modulo_"+momSlice;
        TH2D *moduloHist = (TH2D*)input->Get((moduloHistName).c_str());

        if(moduloHist==0) continue;

        int nEntries = moduloHist->GetEntries();

        if(qual=="trackReco_equalStats_500e3_AQ" && nEntries!=500e3 && stn == "S0S12S18") continue;

        p_[i_cut_config].push_back(p);
        ep_[i_cut_config].push_back(0);

        // Run fits
        TH1D *moduloProf = moduloHist->ProfileX();

        TGraphErrors *moduloGraph = ConvertToTGraphErrors(moduloProf);

        output->cd(("MomentumBinnedAnalysis/ModuloFits/"+cuts_configs[i_cut_config]).c_str());

        if(!fullFit) { 
          // Simple fit with a phase of zero
          SimpleEDMFit(moduloGraph, 0.15, OMEGA_A * 1e3, 0);
          DrawSimpleEDMFit(moduloGraph, stn+", "+std::to_string(lo)+" < p [MeV] < "+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_SimpleModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -5, 5, true);
          moduloGraph->SetName((stn+"_ModuloFit_"+momSlice).c_str());
          moduloGraph->Write();

          c_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParameter(2));
          ec_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParError(2));
          A_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParameter(0));
          eA_[i_cut_config].push_back(moduloGraph->GetFunction("SimpleEDMFunc")->GetParError(0));

        } else if(fullFit) { 
          // Full Bz fit
          FullEDMFit(moduloGraph, 0, OMEGA_A * 1e3, phi, 0.15, 0);
          DrawFullEDMFit(moduloGraph, stn+", "+std::to_string(lo)+" < p [MeV] < "+std::to_string(hi)+";t_{g#minus2}^{mod} [#mus];#LT#theta_{y}#GT [mrad] / 50 ns", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_FullModuloFit_"+momSlice+"_"+qual).c_str(), double(nEntries), -5, 5, true);
          moduloGraph->SetName((stn+"_ModuloFit_"+momSlice).c_str());
          moduloGraph->Write();

          c_[i_cut_config].push_back(moduloGraph->GetFunction("FullEDMFunc")->GetParameter(4));
          ec_[i_cut_config].push_back(moduloGraph->GetFunction("FullEDMFunc")->GetParError(4));
          A_[i_cut_config].push_back(moduloGraph->GetFunction("FullEDMFunc")->GetParameter(3));
          eA_[i_cut_config].push_back(moduloGraph->GetFunction("FullEDMFunc")->GetParError(3));
        
        }
        
        delete moduloProf;
        delete moduloHist;
        delete moduloGraph;

    }

    output->cd(("MomentumBinnedAnalysis/ParameterScans/"+cuts_configs[i_cut_config]).c_str());

    c_vs_p_[i_cut_config].push_back(GenerateTGraphErrors(p_[i_cut_config], c_[i_cut_config], ep_[i_cut_config], ec_[i_cut_config]));
    A_vs_p_[i_cut_config].push_back(GenerateTGraphErrors(p_[i_cut_config], A_[i_cut_config], ep_[i_cut_config], eA_[i_cut_config]));

    DrawScanGraph(c_vs_p_[i_cut_config].at(i_stn), stn+";p_{max} [MeV];c [mrad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_"+fitType+"_c_vs_p_"+qual).c_str(), false);
    DrawScanGraph(A_vs_p_[i_cut_config].at(i_stn), stn+";p_{max} [MeV];A_{EDM} [mrad]", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut_config]+"/"+stn+"_"+fitType+"_A_vs_p_"+qual).c_str(), false);

    c_vs_p_[i_cut_config].at(i_stn)->SetName((stn+"_c_vs_p").c_str());
    A_vs_p_[i_cut_config].at(i_stn)->SetName((stn+"_A_vs_p").c_str());

    c_vs_p_[i_cut_config].at(i_stn)->Write();
    A_vs_p_[i_cut_config].at(i_stn)->Write();

  }
    
  double c_ymin[] = {-4,-0.6,-0.6,-0.6}; double c_ymax[] = {6,0.2,0.,0.3};
  double A_ymin[] = {-0.5,0,-0.25,-0.25}; double A_ymax[] = {0.5,0.3,0.3,0.3};


  for (int i_cut = 0; i_cut < n_cut_config; i_cut++) { 

    bool xLabel = false; 
    if(i_cut==1) {
      xLabel = true;
      // Set bin labels for sym cuts
      ///for (int i = 0; i < xLabels_.size(); i++) { 
      // c_vs_p_[i_cut].at(0)->GetXaxis()->SetBinLabel(c_vs_p_[i_cut].at(0)->GetXaxis()->FindBin(i+1.), (xLabels_.at(i)).c_str());
      // A_vs_p_[i_cut].at(0)->GetXaxis()->SetBinLabel(A_vs_p_[i_cut].at(0)->GetXaxis()->FindBin(i+1.), (xLabels_.at(i)).c_str());
      //}/
    } 

    cout<<"Overlaying "<<cuts_configs[i_cut]<<endl;
    OverlayScanGraphs(c_vs_p_[i_cut], stns, "", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut]+"/c_vs_p_"+fitType+"_overlay_"+qual).c_str(), c_ymin[i_cut], c_ymax[i_cut], xLabel);
    OverlayScanGraphs(A_vs_p_[i_cut], stns, "", ("../Images/MC/dMuSim/"+config+"/Unblinded/MomBinnedAna/"+cuts_configs[i_cut]+"/A_vs_p_"+fitType+"_overlay_"+qual).c_str(), A_ymin[i_cut], A_ymax[i_cut], xLabel);
  }


  return; 

}

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

  double fit_start_time = 30;
  double fit_end_time = 300;

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

    double xmin = gr_tmp->GetPointX(0);
    if(i_fold == 0) xmin = fit_start_time;

    FitFivePar(gr_tmp, 1300, 64, 0.35, OMEGA_A*1e3, 0, xmin, gr_tmp->GetPointX(n-1));

    gr_.push_back(gr_tmp);

    lo = lo + t_mod; 
    hi = hi + t_mod;

  }

  DrawFoldedWiggle(gr_, ";Time modulo "+std::to_string(t_mod)+" #mus;Tracks / 149 ns", "../Images/MC/dMuSim/"+config+"/Unblinded/WiggleMod_"+to_string(t_mod)+"_"+qual, 0, t_mod, 10, 5e4);

  return;
}


int main() {

	bool write = true;
	bool fullFit = true;
  bool extraScans = true;

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
  output->mkdir("MomentumBinnedAnalysis/ModuloFits/MomSlices");
  output->mkdir("MomentumBinnedAnalysis/ModuloFits/MomSymCuts");
  output->mkdir("MomentumBinnedAnalysis/ModuloFits/MomMinScan");
  output->mkdir("MomentumBinnedAnalysis/ModuloFits/MomMaxScan");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans/MomSlices");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans/MomSymCuts");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans/MomMinScan");
  output->mkdir("MomentumBinnedAnalysis/ParameterScans/MomMaxScan");

	MomentumBinnedAnalysis(input, output, fullFit, extraScans);
	// VertOffset(input, output);

	input->Close();
	output->Close();

	std::cout<<"\nWritten plots to root file:\n"<<outputName<<std::endl;

	return 0;


}
