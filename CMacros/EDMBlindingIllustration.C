#include <iostream>

#include "FancyDraw.h"
#include "Utils.h"
#include "RootInclude.h"

#include "../Blinding/Blinders.hh"
#include "RootInclude.h"

using namespace blinding;

//double R = 3.5; // ppm shift
double boxWidth = 0.25;
double gausWidth = 0.7;

//double R = 10; // ppm shift
//double boxWidth = 0.3;
//double gausWidth = 0.8;

Blinders::fitType ftype = Blinders::kOmega_a;
//Blinders getBlinded( ftype, "Blinding string", boxWidth, gausWidth );

// CONSTANTS
double e = 1.6e-19; // J
double aMu = 11659208.9e-10; 
double mMu = 105.6583715; // u
double mMuKg = mMu * 1.79e-30; // kg
double B = 1.451269; // T
double c = 299792458.; // m/s
double cm2m = 100.0; // cm -> m
double hbar = 1.05457e-34;
double pmagic = mMu/std::sqrt(aMu);
double gmagic = std::sqrt( 1.+1./aMu );
double beta   = std::sqrt( 1.-1./(gmagic*gmagic) );
double d0 = 1.9e-19; // BNL edm limit in e.cm
double ppm = 1e-6;
double alpha = 0.10; //0.13; // asymmetry factor

// For sanity check d_mu plot
double blinded_edm_value(std::string tmp, double R) {

  Blinders getBlinded( ftype, tmp.c_str(), boxWidth, gausWidth );

  double omega_blind = getBlinded.paramToFreq(R); // this is the blinded omegaA value
  double omega_ref   = getBlinded.referenceValue(); // this is the reference omegaA value
  // How far from the ref value are we
  double omega_diff  =  ((omega_blind / omega_ref) - 1) / ppm; // this is (omega_blind - omega_ref) in units of ppm
  double dMu_blind   = omega_diff * d0; // this is the blinded dMu in e.cm

  if(tmp=="0") { 
      cout<<"omega_blind\t"<<omega_blind<<endl;
      cout<<"omega_ref\t"<<omega_ref<<endl;
      cout<<"omega_diff\t"<<omega_diff<<endl;
      cout<<"dMu_blind\t"<<dMu_blind<<endl;
   }

  return dMu_blind;

}

//std::vector<double> GetValues(int nEntries) { 
TH1D *GetHist(int nEntries, double R) { 

   TH1D *hist = new TH1D("h", "", 100, 1, 10);

   for (int i=0; i<nEntries; i++) {

      double xd0 = blinded_edm_value(to_string(i), R) / d0; 
      hist->Fill(xd0); 

   }

   return hist;

}

void DrawLimitPlot(TH1D *hist, std::string title, std::string fname) {

   TCanvas *c = new TCanvas("c","c",800,600);

   hist->SetTitle(title.c_str());

   //hist->SetStats(0);
   gStyle->SetOptStat(222210);
         
   hist->GetXaxis()->SetTitleSize(.04);
   hist->GetYaxis()->SetTitleSize(.04);
   hist->GetXaxis()->SetTitleOffset(1.1);
   hist->GetYaxis()->SetTitleOffset(1.1);
   hist->GetXaxis()->CenterTitle(1);
   hist->GetYaxis()->CenterTitle(1);
   hist->GetYaxis()->SetMaxDigits(4);
   hist->SetLineWidth(3);
   hist->SetLineColor(1);

   //c->SetRightMargin(0.13);

   hist->Draw("HIST");

   gPad->Update();

   TLine *line = new TLine(1.0,gPad->GetUymin(),1.0,gPad->GetUymax());
   line->SetLineWidth(3);
   line->SetLineColor(kRed);
   line->SetLineStyle(2);

   line->Draw("same");

   TPaveText *txt = new TPaveText(1.5,350,2.0,450);
   txt->AddText("BNL");
   txt->SetTextSize(26);
   txt->SetTextFont(44);
   txt->SetFillColor(0);
   txt->SetTextColor(kRed);
   txt->Draw("same");
   
   c->SaveAs((fname+".C").c_str());
   c->SaveAs((fname+".pdf").c_str());
   c->SaveAs((fname+".png").c_str());

   delete c;
   return; 
}

double GetUnderflows(int nStrings, double R) { 

   TH1D *hist = new TH1D("h", "", 200, 1, 20);

   for (int i=0; i<nStrings; i++) {

      double xd0 = blinded_edm_value(to_string(i), R) / d0; 
      hist->Fill(xd0); 

   }

   return hist->GetBinContent(0);

}

TGraphErrors *GetRScan(int nStrings) { 

   int n = 21; 

   double x_[n]; double ex_[n]; 
   double y_[n]; double ey_[n];

   for (int i_scan=0; i_scan<n; i_scan++) {

      double R = .25*i_scan;
      x_[i_scan] = R;
      ex_[i_scan] = 0;
      y_[i_scan] = (GetUnderflows(nStrings, R) / nStrings) * 100;
      ey_[i_scan] = 0;

   }

   return new TGraphErrors(n, x_, y_, ex_, ey_);

}


void DrawScan(TGraphErrors *graph, std::string title, std::string fname) {

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
   int n_points = graph->GetN();
   double xmax = graph->GetPointX(n_points-1);// + 50;
   double xmin = graph->GetPointX(0);// - 50; 
   double offset = (xmax - xmin) * 0.01;
   xmin = xmin - offset; 
   xmax = xmax + offset;

   graph->GetXaxis()->SetRangeUser(xmin, xmax);


   graph->Draw("AP");

   double firstZeroY;

   // Get first bin at zero 
   for(int i_point=0; i_point<n_points; i_point++) { 

      if(graph->GetPointY(i_point)==0) {
         firstZeroY = graph->GetPointX(i_point); 
         break;
      }

   }

   gPad->Update();

   TLine *line = new TLine(firstZeroY,gPad->GetUymin(),firstZeroY,gPad->GetUymax());
   line->SetLineWidth(3);
   line->SetLineColor(kRed);
   line->SetLineStyle(2);

   line->Draw("same");

   TPaveText *txt = new TPaveText(1.5,350,2.0,450);
   txt->AddText("Zero");
   txt->SetTextSize(26);
   txt->SetTextFont(44);
   txt->SetFillColor(0);
   txt->SetTextColor(kRed);
   //txt->Draw("same");

   //c->SetLogy();

   c->SaveAs((fname+".pdf").c_str());
   c->SaveAs((fname+".png").c_str());
   c->SaveAs((fname+".C").c_str());

   delete c;

   return;

}

int main() { 

   double R = 3.5;
   int nStrings = 1e4;

   TH1D *h_xd0 = GetHist(nStrings, R);

   DrawLimitPlot(h_xd0, ";#times d_{0};Random blinding strings", "../Images/tmp"); 

   cout<<h_xd0->GetBinContent(0)<<endl;

   TGraphErrors *RScan = GetRScan(nStrings);

   //RScan->GetXaxis()->SetRangeUser(2,5);

   DrawScan(RScan, ";R [ppm];Limits less than BNL / 10,000 blinding strings [%] ", "../Images/tmp2");

   return 0;

}