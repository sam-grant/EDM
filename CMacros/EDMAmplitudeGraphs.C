// Draw AEDM curves nicely

#include <iostream>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

using namespace std;

void DrawMainGraphs(string fname, double ymin, double ymax, bool acceptanceCorr = false) { 

   cout<<"---> Main graphs"<<endl;

   TFile *f1 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ.root"); 
   if(acceptanceCorr) f1 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_accepted.root"); 
   TFile *f2 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_acceptedDecays_WORLD_250MeV_AQ.root"); 
   TFile *f3 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackTruth_WORLD_250MeV_BQ.root"); 
   TFile *f4 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackReco_WORLD_250MeV_BQ.root"); 

   vector<TGraphErrors*> gr_;
   gr_.push_back((TGraphErrors*)f1->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY"));
   gr_.push_back((TGraphErrors*)f2->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY"));
   gr_.push_back((TGraphErrors*)f3->Get("MomentumBinnedAnalysis/ParameterScans/S0S12S18_AEDM_vs_p_thetaY"));
   gr_.push_back((TGraphErrors*)f4->Get("MomentumBinnedAnalysis/ParameterScans/S0S12S18_AEDM_vs_p_thetaY"));

   vector<string> labels_ = {"All decays", "Accepted decays", "Truth vertices", "Reco vertices"};

   vector<int> colours_ = {1,2,8,4};

   TCanvas *c = new TCanvas("c","c",800,600);
   TLegend *l = new TLegend(0.59, 0.69, 0.89, 0.89); 
   l->SetBorderSize(0);
   l->SetTextSize(24);
   l->SetTextFont(44);

   gr_.at(0)->GetXaxis()->SetTitleSize(.04);
   gr_.at(0)->GetYaxis()->SetTitleSize(.04);
   gr_.at(0)->GetXaxis()->SetTitleOffset(1.1);
   gr_.at(0)->GetYaxis()->SetTitleOffset(1.15);
   gr_.at(0)->GetXaxis()->CenterTitle(true);
   gr_.at(0)->GetYaxis()->CenterTitle(true);
   gr_.at(0)->GetYaxis()->SetMaxDigits(4);

   for(int i = 0; i<gr_.size(); i++) {

      // Purge fits
      TF1 *fit = (TF1*)gr_.at(i)->GetListOfFunctions()->At(0); 
      if(fit) {
         gr_.at(i)->GetListOfFunctions()->Remove(fit);
         delete fit;
      }

      // Set marker style & colour
      gr_.at(i)->SetMarkerStyle(20);
      gr_.at(i)->SetMarkerColor(colours_.at(i));
      gr_.at(i)->SetLineColor(colours_.at(i));

      // Set ranges
      gr_.at(i)->GetXaxis()->SetRangeUser(250, 3010);
      gr_.at(i)->GetYaxis()->SetRangeUser(ymin, ymax);
      l->AddEntry(gr_.at(i), labels_.at(i).c_str());

      if(i==0) gr_.at(i)->Draw("AP");
      else gr_.at(i)->Draw("P SAME");

   }

   l->Draw("SAME");

   c->SaveAs((fname+".pdf").c_str());
   c->SaveAs((fname+".png").c_str());
   c->SaveAs((fname+".C").c_str());

   delete c;

   f1->Close();
   f2->Close();
   f3->Close();
   f4->Close();

   return;

}


void DrawControlGraphs(string fname, double ymin, double ymax, bool acceptanceCorr = false) { 

   cout<<"---> Control graphs"<<endl;

   TFile *f1 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_acceptedDecaysControl_WORLD_250MeV_AQ.root"); 
   /// if(acceptanceCorr) f1 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_allDecays_WORLD_250MeV_AQ_accepted.root"); 
   TFile *f2 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackRecoControl_WORLD_250MeV_CQ.root"); 
   // TFile *f3 = TFile::Open("../Plots/MC/dMu/5.4e-18/Fits/edmFits_unblinded_trackRecoControl_WORLD_250MeV_BQ.root"); 

   vector<TGraphErrors*> gr_;
   gr_.push_back((TGraphErrors*)f1->Get("MomentumBinnedAnalysis/ParameterScans/AEDM_vs_p_thetaY"));
   gr_.push_back((TGraphErrors*)f2->Get("MomentumBinnedAnalysis/ParameterScans/S0S12S18_AEDM_vs_p_thetaY"));
   //gr_.push_back((TGraphErrors*)f3->Get("MomentumBinnedAnalysis/ParameterScans/S0S12S18_AEDM_vs_p_thetaY"));

   vector<string> labels_ = {"Accepted decays", "Reco vertices (#geq12 planes hit)"};//, "Reco vertices (all quality cuts)"};

   vector<int> colours_ = {2,4};//8,4};

   TCanvas *c = new TCanvas("c","c",800,600);
   TLegend *l = new TLegend(0.40, 0.79, 0.89, 0.89); 
   l->SetBorderSize(0);
   l->SetTextSize(24);
   l->SetTextFont(44);

   gr_.at(0)->SetTitle("Control sample");
   gr_.at(0)->GetXaxis()->SetTitleSize(.04);
   gr_.at(0)->GetYaxis()->SetTitleSize(.04);
   gr_.at(0)->GetXaxis()->SetTitleOffset(1.1);
   gr_.at(0)->GetYaxis()->SetTitleOffset(1.15);
   gr_.at(0)->GetXaxis()->CenterTitle(true);
   gr_.at(0)->GetYaxis()->CenterTitle(true);
   gr_.at(0)->GetYaxis()->SetMaxDigits(4);

   for(int i = 0; i<gr_.size(); i++) {

      // Purge fits
      TF1 *fit = (TF1*)gr_.at(i)->GetListOfFunctions()->At(0); 
      if(fit) {
         gr_.at(i)->GetListOfFunctions()->Remove(fit);
         delete fit;
      }

      // Set marker style & colour
      gr_.at(i)->SetMarkerStyle(20);
      gr_.at(i)->SetMarkerColor(colours_.at(i));
      gr_.at(i)->SetLineColor(colours_.at(i));

      // Set ranges
      gr_.at(i)->GetXaxis()->SetRangeUser(250, 3010);
      gr_.at(i)->GetYaxis()->SetRangeUser(ymin, ymax);
      l->AddEntry(gr_.at(i), labels_.at(i).c_str());

      if(i==0) gr_.at(i)->Draw("AP");
      else gr_.at(i)->Draw("P SAME");

   }

   l->Draw("SAME");

   c->SaveAs((fname+".pdf").c_str());
   c->SaveAs((fname+".png").c_str());
   c->SaveAs((fname+".C").c_str());

   delete c;

   f1->Close();
   f2->Close();
   //f3->Close();

   return;

}

int main() { 


   cout<<"\n****************** Drawing ******************"<<endl;

   // Graphs
   DrawMainGraphs("../Images/MC/dMu/5.4e-18/Acceptance/Main_AEDM_vs_p", 0, 0.4); 
   DrawMainGraphs("../Images/MC/dMu/5.4e-18/Acceptance/Main_AEDM_vs_p_accepted", 0, 0.4, true); 
   DrawControlGraphs("../Images/MC/dMu/5.4e-18/Acceptance/Control_AEDM_vs_p", 0, 0.35);

   return 0; 

}