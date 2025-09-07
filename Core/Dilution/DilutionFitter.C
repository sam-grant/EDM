/*

  Samuel Grant

  Fit the "dilution function" to allDecays 

  This is the second stage in the EDM analysis chain. 

  The fit function is used later in GetTiltAngle.C.

  For some reason I can't fit the dilution curve directly. Instead, I fit A_EDM, then divide the normalisation of that
  fit by the tilt angle: which I then fix as the normalisation in the actual "fit".

*/

#include <iostream>

#include "../Common/RootInclude.h"
#include "../Common/FancyDraw.h"
#include "../Common/Utils.h"

using namespace std;

////////////////

const double delta_rest = 0.0495092; // rad
const double delta_lab = (delta_rest / GMAGIC) * 1e3; // mrad

string dMu = "5.4e-18";

double DilutionFunc(double *x, double *par) {
  x[0] = x[0]/PMAX;
  return  par[0] * ( (x[0]-1)*(2*x[0]+1) ) / ( 4*x[0]*x[0] - 5*x[0] -5 ) ; 
}

void DilutionFit(TGraphErrors *gr, bool fixNorm=false, double norm=1.0, double normErr=0.0) { // double p0, double p1, double p2, 
  
  TF1 *fnc = new TF1("DilutionFunc", DilutionFunc, 0, PMAX, 1);

  if (fixNorm) { 
    fnc->FixParameter(0, norm);
    fnc->SetParError(0, normErr);
  }

  gr->Fit(fnc, "MR");    

  return;

}

void DrawDilutionFit(TGraphErrors *gr, std::string fname) { 

   TCanvas *c = new TCanvas("c","c",800,600);

   gr->GetXaxis()->SetTitleSize(.04);
   gr->GetYaxis()->SetTitleSize(.04);
   gr->GetXaxis()->SetTitleOffset(1.1);
   gr->GetYaxis()->SetTitleOffset(1.25);
   gr->GetXaxis()->CenterTitle(true);
   gr->GetYaxis()->CenterTitle(true);
   gr->GetYaxis()->SetMaxDigits(4);

   // Set marker style & colour
   gr->SetMarkerStyle(20);
   gr->SetMarkerColor(kBlack);

   // Set ranges
   gr->GetXaxis()->SetRangeUser(0, PMAX);
   gr->GetYaxis()->SetRangeUser(0, 0.22);

   TString title = ";Momentum, p [MeV];Dilution, d / 250 MeV";
   gr->SetTitle(title);

   gr->Draw("AP");

   // Get function
   TF1 *fit = (TF1*)gr->GetFunction("DilutionFunc");
   fit->SetLineColor(kRed);
   fit->SetLineWidth(3);

   fit->Draw("SAME");

   // Draw legend
   TLegend *l = new TLegend(0.15,0.20,0.45,0.40);
   l->SetBorderSize(0);
   l->SetNColumns(1);
   l->AddEntry(gr, "All decays");
   l->AddEntry(fit, "d_{0}#frac{(p#minus1)(2p#plus1)}{4p^{2}#minus5p#minus5}"); 
   l->SetTextSize(26);
   l->SetTextFont(44);
   l->Draw("SAME");

   TPaveText *names = new TPaveText(0.645,0.715,0.89,0.89,"NDC");

   names->SetTextAlign(13);
   names->AddText("#chi^{2}/NDF");
   names->AddText("d_{0}"); 

   TPaveText *values = new TPaveText(0.80,0.715,0.89,0.89,"NDC");

   values->SetTextAlign(33);
   values->AddText(Round(fit->GetChisquare()/fit->GetNDF(),3));
   // values->AddText(Round(fit->GetParameter(0), 3)+"#pm"+Round(fit->GetParError(0), 3));
   // norm=0.936375±0.0031672
   values->AddText("0.936#pm0.003");

   names->SetTextSize(26);
   names->SetTextFont(44);
   names->SetFillColor(0);
   values->SetFillColor(0);
   values->SetTextFont(44);
   values->SetTextSize(26);

   names->Draw("SAME");
   values->Draw("SAME");

   c->SaveAs((fname+".pdf").c_str());

   delete c;

   return;

}

TGraphErrors *ConvertToDilution(TGraphErrors *gr) {

  int n = gr->GetN();

  double x[n]; double ex[n]; 
  double y[n]; double ey[n];

  for(int i = 0; i<n; i++) { 

    x[i] = gr->GetX()[i]; ex[i] = 0;
    y[i] = gr->GetY()[i] / delta_lab;
    ey[i] = gr->GetEY()[i] / delta_lab;

  }

  return new TGraphErrors(n, x, y, ex, ey);

}

void FitDilution(string config, TFile *fout, bool getError) { 

  // Setup output dir
  fout->mkdir("DilutionFit"); 

  // Get input
  TFile *fin = TFile::Open(("../../Plots/Sim/"+dMu+"/VerticalAngleFits/edmFits_unblinded_"+config+".root").c_str());
  
  // Get A_EDM vs p graph 
  TString grName = "MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY";
  TGraphErrors *gr = (TGraphErrors*)fin->Get(grName);

  // Fit A_EDM
  DilutionFit(gr); 
  fout->cd("DilutionFit");
  gr->SetName("DilutionFitAEDM");
  gr->Write();

  // Get A_EDM normalisation
  double norm = gr->GetFunction("DilutionFunc")->GetParameter(0) / delta_lab;
  double normErr = gr->GetFunction("DilutionFunc")->GetParError(0) / delta_lab;

  

  // Convert to diluton
  gr = ConvertToDilution(gr); 

  // Fit, with normalisation fixed 
  DilutionFit(gr, true, norm, normErr); 
  
  // Draw fit 
  DrawDilutionFit(gr, "../../Images/Sim/"+dMu+"/Dilution/dilutionFit_"+config);

  // Write to file
  fout->cd("DilutionFit");
  gr->SetName("DilutionFit");
  gr->Write();

  fin->Close();

  cout<<"\n---> Normalisation: "<<norm<<"±"<<normErr<<endl;

  return; 

}

int main() { 

  bool fit = true;
  bool write = true;

  string fname = "";
  if(write) fname += "../../Plots/Sim/5.4e-18/Dilution/dilutionFit.root";
  else if(!write) fname += "../../Plots/Test/dilutionFit.root";

  TFile *fout = new TFile(fname.c_str(), "RECREATE");

  FitDilution("allDecays_LAB_250MeV_noQ_randCorr", fout, true);

  fout->Write();
  fout->Close();

  cout<<"---> Written plots to "<<fname<<endl;

  return 0; 

}