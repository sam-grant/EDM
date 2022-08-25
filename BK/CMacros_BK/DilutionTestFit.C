#include "FancyDraw.h"
#include "Utils.h"

double xmin = 750; 
double xmax = 2500; 

int GetStep(string config) { 

  if(config.find("500MeV") != std::string::npos) { 
    return 500;
  } else if(config.find("250MeV") != std::string::npos) { 
    return 250;
  } else if(config.find("200MeV") != std::string::npos) { 
    return 200;
  } else { 
    cerr<<"Step size is unknown";
    return -1;
  }

}

void Run(std::string config) { 

	  // Get file
  	TString finName = "../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_"+config+".root";
  	TFile *fin = TFile::Open(finName);

    cout<<"Opened file "<<finName<<", "<<fin<<endl;

  	int step = GetStep(config);

  	TGraphErrors *gr_AEDM_vs_p = (TGraphErrors*)fin->Get("MomentumBinnedAnalysis/ParameterScans/MomSlices/S0S12S18_AEDM_vs_p_thetaY");
  	TGraphErrors *gr_thetaY_RMS_vs_p = (TGraphErrors*)fin->Get("MomentumBinnedAnalysis/ParameterScans/MomSlices/S0S12S18_thetaY_RMS_vs_p");

    cout<<"Got graphs "<<gr_AEDM_vs_p<<", "<<gr_thetaY_RMS_vs_p<<endl;

  	TGraphErrors *gr_AEDM_over_thetaY_RMS_vs_p = new TGraphErrors();

  	for(int i(0); i<gr_AEDM_vs_p->GetN(); i++) {

      // Rescale
  		double p = gr_AEDM_vs_p->GetX()[i] / PMAX;
  		double ep = gr_AEDM_vs_p->GetEX()[i] / PMAX;

  		double y = gr_AEDM_vs_p->GetY()[i] / gr_thetaY_RMS_vs_p->GetY()[i];
  		double ey = y * sqrt( pow((gr_AEDM_vs_p->GetEY()[i]/gr_AEDM_vs_p->GetY()[i]), 2) + pow((gr_thetaY_RMS_vs_p->GetEY()[i]/gr_thetaY_RMS_vs_p->GetY()[i]), 2) );

      cout<<gr_thetaY_RMS_vs_p->GetEY()[i]<<endl;
  		gr_AEDM_over_thetaY_RMS_vs_p->SetPoint(i, p, y);
   		gr_AEDM_over_thetaY_RMS_vs_p->SetPointError(i, ep, ey);

  	}

    // Fit thetaY RMS with a pol3 
    TF1 *fitPol3 = new TF1("fitPol3", "pol3", 800, 2400);
    fitPol3->SetParameter(0, 40);
    fitPol3->SetParameter(1, -0.035);
    fitPol3->SetParameter(2, 1.325e-5);
    fitPol3->SetParameter(3, -2e-9);

    TF1 *fitPol2 = new TF1("fitPol2", "pol2", xmin, xmax);
    fitPol2->SetParameter(0, 40);
    fitPol2->SetParameter(1, 1.325e-5);
    fitPol2->SetParameter(2, -2e-9);

    TF1 *fitExp = new TF1("fitExp", "expo", xmin, xmax);


    // This fits too well, there's so many parameters it's just forcing itself to fit.
/*    TF1 *fitAsym = new TF1("fitAsym ", "[0] * (sqrt(x * (1-x)) * (1 + [1]*x) ) / ([2] + [3]*x - [4]*x*x)", xmin/PMAX, 0.8);//xmax/PMAX);//, xmin, xmax);
    fitAsym->SetParameter(0, 0.006);
    fitAsym->SetParameter(1, -0.8732);
    fitAsym->SetParameter(2, 0.7551);
    fitAsym->SetParameter(3, -1.865);
    fitAsym->SetParameter(4, -1.337);*/

    TF1 *fitAsym = new TF1("fitAsym ", "[0] * (sqrt(x * (1-x)) * (1 + [1]*x) ) / ([2] + [2]*x - [1]*x*x)", xmin/PMAX, 0.8);//xmax/PMAX);//, xmin, xmax);
    fitAsym->SetParameter(0, 2);
    fitAsym->SetParameter(1, 4);
    fitAsym->SetParameter(2, 5);


    DrawTF1(fitAsym, "", "../Images/MC/Dilution/dMu/5.4e-18/TestFits/f_asym_"+to_string(step));

    gr_thetaY_RMS_vs_p->Fit(fitPol3, "R");

    gr_AEDM_over_thetaY_RMS_vs_p->Fit(fitAsym, "R");

    gStyle->SetOptFit(222);

    gr_AEDM_vs_p->GetXaxis()->SetRangeUser(xmin, xmax);
    gr_thetaY_RMS_vs_p->GetXaxis()->SetRangeUser(xmin, xmax);
    gr_AEDM_over_thetaY_RMS_vs_p->GetXaxis()->SetRangeUser(xmin/PMAX, xmax/PMAX);
    gr_AEDM_over_thetaY_RMS_vs_p->GetYaxis()->SetRangeUser(0, 0.025);

    DrawTGraphErrors(gr_AEDM_vs_p, ";Decay vertex momentum [MeV]; A_{EDM} [mrad] / "+to_string(step)+" MeV", "../Images/MC/Dilution/dMu/5.4e-18/TestFits/gr_AEDM_vs_p_thetaY_"+to_string(step));
  	DrawTGraphErrors(gr_thetaY_RMS_vs_p , ";Decay vertex momentum [MeV]; #sigma_{#theta_{y}} [mrad] / "+to_string(step)+" MeV", "../Images/MC/Dilution/dMu/5.4e-18/TestFits/gr_thetaY_RMS_vs_p_"+to_string(step));
    DrawTGraphErrors(gr_AEDM_over_thetaY_RMS_vs_p, ";Decay vertex momentum [normalised units]; A_{EDM}/#sigma_{#theta_{y}} / "+to_string(step)+" MeV", "../Images/MC/Dilution/dMu/5.4e-18/TestFits/gr_AEDM_over_thetaY_RMS_vs_p_"+to_string(step));


    // 
  	fin->Close();

	return;

}

void DilutionTestFit() { 

	Run("trackReco_AAR_250MeV_BQ");

	return;

}