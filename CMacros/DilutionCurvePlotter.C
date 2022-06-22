// Draw dilution curves nicely

#include <iostream>

#include "RootInclude.h"
#include "FancyDraw.h"
#include "Utils.h"

using namespace std;

const double delta_calc = 1.699245178; // mrad
string dMu = "5.4e-18";

const double xmin = 0;//750;
const double xmax = PMAX;//2500;

const int nTrials = 1e3;

void DrawAllGraphs(TFile *input, int step, string fname, double ymin, double ymax) { 

    cout<<"---> All graphs"<<endl;

   vector<TGraphErrors*> gr_;
   gr_.push_back((TGraphErrors*)input->Get(("DilutionFits/AQ/Decays/"+to_string(step)+"MeV/d_vs_p/allDecays").c_str()));
   gr_.push_back((TGraphErrors*)input->Get(("DilutionFits/AQ/Decays/"+to_string(step)+"MeV/d_vs_p/acceptedDecays").c_str()));
   gr_.push_back((TGraphErrors*)input->Get(("DilutionFits/BQ/Tracks/"+to_string(step)+"MeV/d_vs_p/S0S12S18_trackTruth").c_str()));
   gr_.push_back((TGraphErrors*)input->Get(("DilutionFits/BQ/Tracks/"+to_string(step)+"MeV/d_vs_p/S0S12S18_trackReco").c_str()));

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

   return;

}

void DrawVertexGraphs(TFile *input, int step, string fname, string qual, double ymin, double ymax) { 

  cout<<"---> Vertex graphs "<<qual<<endl;

   vector<string> stn_ = {"S0", "S12", "S18", "S12S18", "S0S12S18"};

   for(auto& stn : stn_) {

      vector<TGraphErrors*> gr_;
      gr_.push_back((TGraphErrors*)input->Get(("DilutionFits/"+qual+"/Tracks/"+to_string(step)+"MeV/d_vs_p/"+stn+"_trackTruth").c_str()));
      gr_.push_back((TGraphErrors*)input->Get(("DilutionFits/"+qual+"/Tracks/"+to_string(step)+"MeV/d_vs_p/"+stn+"_trackReco").c_str()));

      vector<string> labels_ = {"Truth vertices", "Reco vertices"};

      vector<int> markerStyles_ = {20,24};

      TCanvas *c = new TCanvas(stn.c_str(),"",800,600);
      TLegend *l = new TLegend(0.25, 0.91, 0.75, 0.99); 

      l->SetNColumns(2);
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
         gr_.at(i)->SetMarkerStyle(markerStyles_.at(i));

         // Set ranges
         gr_.at(i)->GetXaxis()->SetRangeUser(240, 3010);
         gr_.at(i)->GetYaxis()->SetRangeUser(ymin, ymax);
         l->AddEntry(gr_.at(i), labels_.at(i).c_str());

         if(i==0) gr_.at(i)->Draw("AP");
         else gr_.at(i)->Draw("P SAME");

      }

      // Draw lines
      gPad->Update();
      TLine *line1 = new TLine(xmin, gPad->GetUymin(), xmin, gPad->GetUymax());
      TLine *line2 = new TLine(xmax, gPad->GetUymin(), xmax, gPad->GetUymax());

      line1->SetLineWidth(3);
      line1->SetLineStyle(kDashed);
      line1->SetLineColor(kRed);

      line2->SetLineWidth(3);
      line2->SetLineStyle(kDashed);
      line2->SetLineColor(kRed);

      line1->Draw("SAME");
      line2->Draw("SAME");

      l->Draw("SAME");

      c->SaveAs((fname+"_"+stn+"_"+qual+".pdf").c_str());
      c->SaveAs((fname+"_"+stn+"_"+qual+".png").c_str());
      c->SaveAs((fname+"_"+stn+"_"+qual+".C").c_str());

      delete c;

   }

   // 

   return;

}

void DrawVertexErrorGraphs(TFile *input, int step, string fname, string qual, double ymin, double ymax) { 

  cout<<"---> Vertex error graphs "<<qual<<endl;

   vector<string> stn_ = {"S0", "S12", "S18", "S12S18", "S0S12S18"};

   for(auto& stn : stn_) {

      vector<TGraphErrors*> gr_;
      gr_.push_back((TGraphErrors*)input->Get(("DilutionFits/"+qual+"/Tracks/"+to_string(step)+"MeV/d_vs_p/"+stn+"_trackTruth").c_str()));
      gr_.push_back((TGraphErrors*)input->Get(("DilutionFits/"+qual+"/Tracks/"+to_string(step)+"MeV/d_vs_p/"+stn+"_trackReco").c_str()));

      // Get errors as TGraph
      for(auto& gr : gr_) { 

         int n = gr->GetN();
         double x[n]; double y[n];
         double ex[n]; double ey[n];

         for(int i=0; i<n; i++) {

            x[i] = gr->GetX()[i];
            y[i] = gr->GetEY()[i];
            ex[i] = gr->GetEX()[i];
            ey[i] = 0.;

         }

         gr = new TGraphErrors(n, x, y, ex, ey);

      }

      vector<string> labels_ = {"Truth vertices", "Reco vertices"};

      vector<int> markerStyles_ = {20,24};

      TCanvas *c = new TCanvas(stn.c_str(),"",800,600);
      TLegend *l = new TLegend(0.25, 0.91, 0.75, 0.99); 
      l->SetNColumns(2);

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

      gr_.at(0)->SetTitle((";Decay vertex momentum [MeV];#deltad_{EDM} / "+to_string(step)+" MeV").c_str());

      for(int i = 0; i<gr_.size(); i++) {

         // Purge fits
         TF1 *fit = (TF1*)gr_.at(i)->GetListOfFunctions()->At(0); 
         if(fit) {
            gr_.at(i)->GetListOfFunctions()->Remove(fit);
            delete fit;
         }

         // Set marker style & colour
         gr_.at(i)->SetMarkerStyle(markerStyles_.at(i));

         // Set ranges
         gr_.at(i)->GetXaxis()->SetRangeUser(240, 3010);
         gr_.at(i)->GetYaxis()->SetRangeUser(ymin, ymax);
         l->AddEntry(gr_.at(i), labels_.at(i).c_str());

         if(i==0) gr_.at(i)->Draw("AP");
         else gr_.at(i)->Draw("P SAME");

      }

      // Draw lines
      gPad->Update();
      TLine *line1 = new TLine(xmin, gPad->GetUymin(), xmin, gPad->GetUymax());
      TLine *line2 = new TLine(xmax, gPad->GetUymin(), xmax, gPad->GetUymax());

      line1->SetLineWidth(3);
      line1->SetLineStyle(kDashed);
      line1->SetLineColor(kRed);

      line2->SetLineWidth(3);
      line2->SetLineStyle(kDashed);
      line2->SetLineColor(kRed);

      line1->Draw("SAME");
      line2->Draw("SAME");

      l->Draw("SAME");

      c->SaveAs((fname+"_"+stn+"_"+qual+".pdf").c_str());
      c->SaveAs((fname+"_"+stn+"_"+qual+".png").c_str());
      c->SaveAs((fname+"_"+stn+"_"+qual+".C").c_str());

      delete c;

   }

   return;

}

void DrawAllFits(TFile *input, int step, string fname, double ymin, double ymax) { 

  cout<<"---> All fits"<<endl;

   vector<TGraphErrors*> gr_;
   gr_.push_back((TGraphErrors*)input->Get(("DilutionFits/AQ/Decays/"+to_string(step)+"MeV/d_vs_p/allDecays").c_str()));
   gr_.push_back((TGraphErrors*)input->Get(("DilutionFits/AQ/Decays/"+to_string(step)+"MeV/d_vs_p/acceptedDecays").c_str()));
   gr_.push_back((TGraphErrors*)input->Get(("DilutionFits/BQ/Tracks/"+to_string(step)+"MeV/d_vs_p/S0S12S18_trackTruth").c_str()));
   gr_.push_back((TGraphErrors*)input->Get(("DilutionFits/BQ/Tracks/"+to_string(step)+"MeV/d_vs_p/S0S12S18_trackReco").c_str()));

   vector<string> labels_ = {"All decays", "Accepted decays", "Truth vertices", "Reco vertices"};

   TString title = ";Decay vertex momentum [MeV];d_{EDM} / "+to_string(step)+" MeV";
   gr_.at(0)->SetTitle(title);

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

      // Set marker style & colour
      gr_.at(i)->SetMarkerStyle(20);
      gr_.at(i)->SetMarkerColor(colours_.at(i));

      // Set ranges
      gr_.at(i)->GetXaxis()->SetRangeUser(xmin, xmax);
      gr_.at(i)->GetYaxis()->SetRangeUser(ymin, ymax);
      l->AddEntry(gr_.at(i), labels_.at(i).c_str());

      if(i==0) gr_.at(i)->Draw("AP");
      else gr_.at(i)->Draw("P SAME");

      // Get functions
      TF1 *fit = (TF1*)gr_.at(i)->GetFunction("ParabolaFunc");
      fit->SetLineColor(colours_.at(i));
      fit->SetLineWidth(3);
      fit->Draw("SAME");

   }

   l->Draw("SAME");

   c->SaveAs((fname+".pdf").c_str());
   c->SaveAs((fname+".png").c_str());
   c->SaveAs((fname+".C").c_str());

   delete c;

   return;

}

void DrawErrorBars(TGraphErrors *gr, std::string title, std::string fname) {

   TGraphErrors *gr_err = new TGraphErrors();

   for(int i(0); i<gr->GetN(); i++) {

      gr_err->SetPoint(i, gr->GetX()[i], gr->GetEY()[i]);
      gr_err->SetPointError(i, 0, 0);      

   }

   TCanvas *c = new TCanvas("c","c",800,600);

   gr_err->GetXaxis()->SetTitleSize(.04);
   gr_err->GetYaxis()->SetTitleSize(.04);
   gr_err->GetXaxis()->SetTitleOffset(1.1);
   gr_err->GetYaxis()->SetTitleOffset(1.25);
   gr_err->GetXaxis()->CenterTitle(true);
   gr_err->GetYaxis()->CenterTitle(true);
   gr_err->GetYaxis()->SetMaxDigits(4);

   // Set marker style & colour
   gr_err->SetMarkerStyle(20);
   gr_err->SetMarkerColor(kBlack); 

   gr_err->SetTitle(title.c_str());

   gr_err->Draw("APL");

   c->SaveAs((fname+".pdf").c_str());
   c->SaveAs((fname+".png").c_str());
   c->SaveAs((fname+".C").c_str());

   delete c;

   return;

}

void DrawRecoVertexFit(TFile *input, int step, string fname, double ymin, double ymax) { 

  cout<<"---> Reco vertex fit"<<endl;

   vector<string> stn_ = {"S0", "S12", "S18", "S12S18", "S0S12S18"};

   for(auto& stn : stn_) {

      TGraphErrors *gr = (TGraphErrors*)input->Get(("DilutionFits/BQ/Tracks/"+to_string(step)+"MeV/d_vs_p/"+stn+"_trackReco").c_str());
      
      TH1D *h_pull = (TH1D*)input->Get(("DilutionFits/BQ/Tracks/"+to_string(step)+"MeV/d_vs_p/"+stn+"_trackReco_h_pull").c_str());
      TGraphErrors *gr_pull = (TGraphErrors*)input->Get(("DilutionFits/BQ/Tracks/"+to_string(step)+"MeV/d_vs_p/"+stn+"_trackReco_gr_pull").c_str());

      DrawTH1(h_pull, "", "../Images/MC/Dilution/dMu/5.4e-18/"+stn+"_trackReco_h_pull");
      DrawTGraphErrors(gr_pull, ";Decay vertex momentum [MeV];Pull [#sigma] / 250 MeV", "../Images/MC/Dilution/dMu/5.4e-18/"+stn+"_trackReco_gr_pull");
      DrawErrorBars(gr, ";Decay vertex momentum [MeV];#deltad_{EDM} / 250 MeV", "../Images/MC/Dilution/dMu/5.4e-18/"+stn+"_trackRecoErrors");

      TCanvas *c = new TCanvas(stn.c_str(),"c",800,600);

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

      // EDIT
      // Set ranges
      gr->GetXaxis()->SetRangeUser(xmin, xmax);
      gr->GetYaxis()->SetRangeUser(ymin, ymax);

      TString title = ";Decay vertex momentum [MeV];d_{EDM} / "+to_string(step)+" MeV";
      gr->SetTitle(title);

      gr->Draw("AP");

      // Get function
      TF1 *fit = (TF1*)gr->GetFunction("DilutionFunc");
      fit->SetLineColor(kRed);
      fit->SetLineWidth(3);
      fit->Draw("SAME");

      // Draw legend
      TLegend *l = new TLegend(0.125,0.79,0.875,0.89);
      l->SetBorderSize(0);
      l->SetNColumns(2);
      l->AddEntry(gr,"Sim: reco vertices");
      // [0] * ( ( ([1]*x) - 1)^2 * (2*([1]*x) +1) )
      l->AddEntry(fit, "a(bp-1)^{2}(2bp+1)");//p^{2}+bp+d_{0}");
      l->Draw("SAME");

      TPaveText *names = new TPaveText(0.15,0.20,0.30,0.45,"NDC");

      names->SetTextAlign(13);
      names->AddText("#chi^{2}/NDF");
      names->AddText("a") ; 
      names->AddText("b [MeV^{-1}]" );
      //names->AddText("d_{0}");

      TPaveText *values = new TPaveText(0.40,0.20,0.55,0.45,"NDC");
      // TPaveText *values = new TPaveText(0.30,0.20,0.45,0.45,"NDC");

      values->SetTextAlign(33);
      values->AddText(Round(fit->GetChisquare()/fit->GetNDF(),3));
      if(stn!="S0S12S18") {
         values->AddText(Round(fit->GetParameter(0), 1)+"#pm"+Round(fit->GetParError(0), 1));
         values->AddText(Round(fit->GetParameter(1), 1)+"#pm"+Round(fit->GetParError(1), 1));
         //values->AddText(Round(fit->GetParameter(2), 1)+"#pm"+Round(fit->GetParError(2), 1));
      } else {
         // a = -2.50505e-08±1.26806e-08
         // b = 6.67005e-05±4.55887e-05
         // d0 = 0.0381782±0.0385284
         //values->AddText("(-3#pm1)#times10^{-8}"); 
         //values->AddText("(7#pm5)#times10^{-5}");
         //values->AddText("0.04#pm0.04");
         // Higher stats sample 
         // *** Fit results ***
         // chi2/ndf = 1.81291
         // a = -2.74672e-08±1.12949e-08
         // b = 8.05708e-05±4.05808e-05
         // d0 = 0.0209841±0.0342749
         // *** *** ***
         // Higher stats reweighted
         // *** Fit results ***
         // chi2/ndf = 1.80531
         // a = -2.46176e-08±1.03605e-08
         // b = 7.1938e-05±3.72237e-05
         // d0 = 0.0208691±0.0314398
         // *** *** ***
         //values->AddText("(-2#pm1)#times10^{-8}"); 
         //values->AddText("(7#pm4)#times10^{-5}");
         //values->AddText("0.02#pm0.03");
         //values->AddText(Round(fit->GetParameter(0), 1)+"#pm"+Round(fit->GetParError(0), 1));
         //values->AddText(Round(fit->GetParameter(1), 1)+"#pm"+Round(fit->GetParError(1), 1));
         // No reweighting
         // a = 0.0924297±0.00669039
         // b = -0.000138633±1.29502e-05
         // Reweighting 
         // a = 0.079909±0.00547423
         // b = -0.000127703±1.42269e-05
         // First acceptance correction
         // a = 0.126598±0.00786631
         // b = -0.000147831±8.341e-06
         // First acceptance correction with reweighting
         // a = 0.120696±0.00700639
         // b = -0.000152548±7.37826e-06

         // More stats
         // *** Fit results ***
         // chi2/ndf = 2.10545
         // a = 0.0824647±0.00494
         // b = -0.000125922±1.27708e-05
         // *** *** ***

         values->AddText("0.082#pm0.005"); 
         values->AddText("(-1.3#pm0.1)#times10^{-4}");
      }
 
      cout<<"\n*** Fit results ***"<<endl;
      cout<<"chi2/ndf = "<<fit->GetChisquare()/fit->GetNDF()<<endl;
      cout<<"a = "<<fit->GetParameter(0)<<"±"<<fit->GetParError(0)<<endl;
      cout<<"b = "<<fit->GetParameter(1)<<"±"<<fit->GetParError(1)<<endl;
      cout<<"*** *** ***\n"<<endl;

      names->SetTextSize(26);
      names->SetTextFont(44);
      names->SetFillColor(0);
      values->SetFillColor(0);
      values->SetTextFont(44);
      values->SetTextSize(26);

      names->Draw("SAME");
      values->Draw("SAME");

      c->SaveAs((fname+"_"+stn+".pdf").c_str());
      c->SaveAs((fname+"_"+stn+".png").c_str());
      c->SaveAs((fname+"_"+stn+".C").c_str());

      delete c;

   }

   return;

}

void DrawAllDecaysFit(TFile *input, int step, string fname, double ymin, double ymax) { 

  cout<<"\n---> All decays fit"<<endl;

   TGraphErrors *gr = (TGraphErrors*)input->Get(("DilutionFits/AQ/Decays/"+to_string(step)+"MeV/d_vs_p/allDecays").c_str());
      
   TH1D *h_pull = (TH1D*)input->Get(("DilutionFits/AQ/Decays/"+to_string(step)+"MeV/d_vs_p/allDecays_h_pull").c_str());
   TGraphErrors *gr_pull = (TGraphErrors*)input->Get(("DilutionFits/AQ/Decays/"+to_string(step)+"MeV/d_vs_p/allDecays_gr_pull").c_str());

   DrawTH1(h_pull, "", "../Images/MC/Dilution/dMu/5.4e-18/allDecays_h_pull");
   DrawTGraphErrors(gr_pull, ";Decay positron momentum [MeV];Pull [#sigma] / 250 MeV", "../Images/MC/Dilution/dMu/5.4e-18/allDecays_gr_pull");
   DrawErrorBars(gr, ";Decay positron momentum [MeV];#deltad_{EDM} / 250 MeV", "../Images/MC/Dilution/dMu/5.4e-18/allDecaysErrors");

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

   // EDIT
   // Set ranges
   gr->GetXaxis()->SetRangeUser(xmin, xmax);
   gr->GetYaxis()->SetRangeUser(ymin, ymax);

   TString title = ";Momentum, p [MeV];d_{EDM} / "+to_string(step)+" MeV";
   gr->SetTitle(title);

   gr->Draw("AP");

   // Get function
   TF1 *fit = (TF1*)gr->GetFunction("DilutionFunc");
   fit->SetLineColor(kRed);
   fit->SetLineWidth(3);

   gr->Fit(fit);


   fit->Draw("SAME");

   // Draw legend
   //TLegend *l = new TLegend(0.125,0.79,0.875,0.89);
   //TLegend *l = new TLegend(0.125,0.25,0.45,0.45);
   //TLegend *l = new TLegend(0.125,0.25,0.45,0.45);
   //TLegend *l = new TLegend(0.15,0.15,0.50,0.50);
   TLegend *l = new TLegend(0.59,0.69,0.89,0.89);
   l->SetBorderSize(0);
   l->SetNColumns(1);
   l->AddEntry(gr,"Sim: all decays");
   // [0] * ( ( ([1]*x) - 1)^2 * (2*([1]*x) +1) )
   //l->AddEntry(fit, "Fit: a(bp-1)^{2}(2bp+1)");//p^{2}+bp+d_{0}");
   //l->AddEntry(fit, "Fit: a(bp-1)^{2}(2bp+1)");//p^{2}+bp+d_{0}");
   l->AddEntry(fit, "#frac{(p#minus1)(2p#plus1)}{4p^{2}#minus5p#minus5}");//p^{2}+bp+d_{0}");
   l->SetTextSize(26);
   l->SetTextFont(44);
   l->Draw("SAME");

   TPaveText *names = new TPaveText(0.15,0.20,0.30,0.45,"NDC");

   names->SetTextAlign(13);
   names->AddText("#chi^{2}/NDF");
   //names->AddText("a") ; 
   //names->AddText("b [MeV^{-1}]" );
      //names->AddText("d_{0}");

   TPaveText *values = new TPaveText(0.40,0.20,0.55,0.45,"NDC");
   // TPaveText *values = new TPaveText(0.30,0.20,0.45,0.45,"NDC");

   values->SetTextAlign(33);
   values->AddText(Round(fit->GetChisquare()/fit->GetNDF(),3));

   //values->AddText(Round(fit->GetParameter(0), 1)+"#pm"+Round(fit->GetParError(0), 1));
   //values->AddText(Round(fit->GetParameter(1), 1)+"#pm"+Round(fit->GetParError(1), 1));

   //values->AddText("0.177#pm0.004"); 
   //values->AddText("(-1.57#pm0.03)#times10^{-4}");

   cout<<"\n*** Fit results ***"<<endl;
   cout<<"chi2/ndf = "<<fit->GetChisquare()/fit->GetNDF()<<endl;
   cout<<"a = "<<fit->GetParameter(0)<<"±"<<fit->GetParError(0)<<endl;
   cout<<"b = "<<fit->GetParameter(1)<<"±"<<fit->GetParError(1)<<endl;
   cout<<"*** *** ***\n"<<endl;

   names->SetTextSize(26);
   names->SetTextFont(44);
   names->SetFillColor(0);
   values->SetFillColor(0);
   values->SetTextFont(44);
   values->SetTextSize(26);

   //names->Draw("SAME");
   //values->Draw("SAME");

   c->SaveAs((fname+".pdf").c_str());
   c->SaveAs((fname+".png").c_str());
   c->SaveAs((fname+".C").c_str());

   delete c;

   return;

}


void DrawRecoVertexFitFullRange(TFile *input, int step, string fname, double ymin, double ymax) { 

  cout<<"---> Reco vertex fit"<<endl;

   TGraphErrors *gr = (TGraphErrors*)input->Get(("DilutionFits/BQ/Tracks/"+to_string(step)+"MeV/d_vs_p/trackReco").c_str());
   
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

   gr->GetYaxis()->SetRangeUser(ymin, ymax);

   TString title = ";Decay vertex momentum [MeV];d_{EDM} / "+to_string(step)+" MeV";
   gr->SetTitle(title);

   gr->Draw("AP");

   // Get function
   TF1 *fit = (TF1*)gr->GetFunction("ParabolaFunc");
   fit->SetLineColor(kRed);
   fit->SetLineWidth(3);
   fit->Draw("SAME");

   // Draw legend
   TLegend *l = new TLegend(0.125,0.79,0.875,0.89);
   l->SetBorderSize(0);
   l->SetNColumns(2);
   l->AddEntry(gr,"Sim: reco vertices");
   l->AddEntry(fit, "Fit: ap^{2}+bp+d_{0}");
   l->Draw("SAME");

   TPaveText *names = new TPaveText(0.20,0.20,0.45,0.45,"NDC");

   names->SetTextAlign(13);
   names->AddText("#chi^{2}/NDF");
   names->AddText("a [MeV^{-2}]") ; 
   names->AddText("b [MeV^{-1}]" );
   names->AddText("d_{0}");

   TPaveText *values = new TPaveText(0.45,0.20,0.60,0.45,"NDC");
   values->SetTextAlign(33);
   values->AddText(Round(fit->GetChisquare()/fit->GetNDF(),3));
   values->AddText("(-2#pm1)#times10^{-8}");
   values->AddText("(6#pm5)#times10^{-4}");
   values->AddText(Round(fit->GetParameter(2), 1)+"#pm"+Round(fit->GetParError(2), 1));

   cout<<"\n*** Fit results ***"<<endl;
   cout<<"chi2/ndf = "<<fit->GetChisquare()/fit->GetNDF()<<endl;
   cout<<"a = "<<fit->GetParameter(0)<<"±"<<fit->GetParError(0)<<endl;
   cout<<"b = "<<fit->GetParameter(1)<<"±"<<fit->GetParError(1)<<endl;
   cout<<"d0 = "<<fit->GetParameter(2)<<"±"<<fit->GetParError(2)<<endl;
   cout<<"*** *** ***\n"<<endl;

   names->SetTextSize(26);
   names->SetTextFont(44);
   names->SetFillColor(0);
   values->SetFillColor(0);
   values->SetTextFont(44);
   values->SetTextSize(26);

   names->Draw("SAME");
   values->Draw("SAME");

   c->SaveAs((fname+".pdf").c_str());
   c->SaveAs((fname+".png").c_str());
   c->SaveAs((fname+".C").c_str());

   delete c;

   return;

}

void DrawAllFitsControl(TFile *input, int step, string fname, double ymin, double ymax) { 

   vector<TGraphErrors*> gr_;
   
   gr_.push_back((TGraphErrors*)input->Get(("DilutionFits/AQ/Decays/"+to_string(step)+"MeV/d_vs_p/acceptedDecaysControl").c_str()));
   gr_.push_back((TGraphErrors*)input->Get(("DilutionFits/CQ/Tracks/"+to_string(step)+"MeV/d_vs_p/trackRecoControl").c_str()));
   gr_.push_back((TGraphErrors*)input->Get(("DilutionFits/BQ/Tracks/"+to_string(step)+"MeV/d_vs_p/trackRecoControl").c_str()));

   vector<string> labels_ = {"Accepted decays", "Reco vertices (#geq12 planes hit)", "Reco vertices (all quality cuts)"};

   vector<int> colours_ = {1,2,4};

   TCanvas *c = new TCanvas("c","c",800,600);

   TLegend *l = new TLegend(0.11, 0.69, 0.59, 0.89); 

   //l->SetNColumns(3);
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

      // Set marker style & colour
      gr_.at(i)->SetMarkerStyle(20);
      gr_.at(i)->SetMarkerColor(colours_.at(i));

      // Set ranges
      gr_.at(i)->GetXaxis()->SetRangeUser(xmin, xmax);
      gr_.at(i)->GetYaxis()->SetRangeUser(ymin, ymax);
      l->AddEntry(gr_.at(i), labels_.at(i).c_str());

      if(i==0) gr_.at(i)->Draw("AP");
      else gr_.at(i)->Draw("P SAME");

      // Get functions
      TF1 *fit = (TF1*)gr_.at(i)->GetFunction("ParabolaFunc");
      fit->SetLineColor(colours_.at(i));
      fit->SetLineWidth(3);
      fit->Draw("SAME");

   }

   l->Draw("SAME");

   c->SaveAs((fname+".pdf").c_str());
   c->SaveAs((fname+".png").c_str());
   c->SaveAs((fname+".C").c_str());

   delete c;

   return;

}

void DrawMottFunctionsOLD(TFile *input, int step, string fname, double ymin, double ymax) {

   cout<<"---> Mott functions"<<endl;

   vector<string> stn_ = {"S0", "S12", "S18", "S12S18", "S0S12S18"};

   for(auto& stn : stn_) {

      // Get graph  
      TGraphErrors *gr = (TGraphErrors*)input->Get(("DilutionFits/BQ/Tracks/"+to_string(step)+"MeV/d_vs_p/"+stn+"_trackReco").c_str());

      // Get functions
      vector<TF1*> funcs_; 
      for(int i = 0; i<nTrials; i++) { 
        TF1 *trialFunc = (TF1*)input->Get(("DilutionFits/BQ/Tracks/"+to_string(step)+"MeV/d_vs_p/"+stn+"_trackRecoTrials/"+to_string(i)).c_str());
        funcs_.push_back(trialFunc);
      }

      TCanvas *c = new TCanvas("c","c",800,600);

      string title = stn+";Decay vertex momentum [MeV];d_{EDM} / "+to_string(step)+" MeV";

      funcs_.at(0)->SetTitle(title.c_str());
      funcs_.at(0)->GetXaxis()->SetTitleSize(.04);
      funcs_.at(0)->GetYaxis()->SetTitleSize(.04);
      funcs_.at(0)->GetXaxis()->SetTitleOffset(1.1);
      funcs_.at(0)->GetYaxis()->SetTitleOffset(1.1);
      funcs_.at(0)->GetXaxis()->CenterTitle(true);
      funcs_.at(0)->GetYaxis()->CenterTitle(true);
      funcs_.at(0)->GetYaxis()->SetMaxDigits(4);
  
      funcs_.at(0)->GetYaxis()->SetRangeUser(ymin,ymax);

      gStyle->SetPalette(kRainBow);
      vector<float> colours_ = { 55, 56.5, 58, 59.5, 61, 62.5, 64, 65.5, 67, 68.5, 70, 71.5, 73, 74.5, 76, 77.5, 79, 80.5, 82, 83.5, 85, 86.5, 88, 89.5, 91, 92.5};

      for(int i = 0; i<funcs_.size(); i++) {
         funcs_.at(i)->SetLineWidth(3);
         funcs_.at(i)->SetLineColor(i*0.1);
         if(i==0) funcs_.at(i)->Draw();
         else funcs_.at(i)->Draw("SAME");
      }

      // Purge converged fit
      TF1 *mainFit = (TF1*)gr->GetListOfFunctions()->At(0); 
      gr->GetListOfFunctions()->Remove(mainFit);
      delete mainFit;

      gr->SetMarkerStyle(20);
      gr->SetMarkerColor(kBlack);
      gr->SetFillColor(kBlack);
      gr->SetLineColor(kBlack);
      gr->Draw("P SAME");

      c->SaveAs((fname+"_"+stn+".pdf").c_str());
      c->SaveAs((fname+"_"+stn+".png").c_str());
      c->SaveAs((fname+"_"+stn+".C").c_str());

      delete c;

      // Mott ellipse & sphere
      TH3D *mottEllipse = (TH3D*)input->Get(("DilutionFits/BQ/Tracks/"+to_string(step)+"MeV/d_vs_p/"+stn+"_trackRecoTrials/ellipse3D").c_str());
      TH3D *mottSphere= (TH3D*)input->Get(("DilutionFits/BQ/Tracks/"+to_string(step)+"MeV/d_vs_p/"+stn+"_trackRecoTrials/sphere3D").c_str());

      DrawTH3(mottEllipse, "", "../Images/MC/Dilution/dMu/"+dMu+"/"+stn+"_MottEllipse"+to_string(nTrials));
      DrawTH3(mottSphere, "", "../Images/MC/Dilution/dMu/"+dMu+"/"+stn+"_MottSphere"+to_string(nTrials));

      delete mottEllipse;
      delete mottSphere;

   }

  return;

}

void DrawMottFunctions(TFile *input, int step, string fname, double ymin, double ymax) {

   cout<<"---> Mott functions"<<endl;

   // Get graph  
   TGraphErrors *gr = (TGraphErrors*)input->Get(("DilutionFits/AQ/Decays/"+to_string(step)+"MeV/d_vs_p/allDecays").c_str());

   // Get functions
   vector<TF1*> funcs_; 
   for(int i = 0; i<nTrials; i++) { 
      TF1 *trialFunc = (TF1*)input->Get(("DilutionFits/AQ/Decays/"+to_string(step)+"MeV/d_vs_p/allDecaysTrials/"+to_string(i)).c_str());
      funcs_.push_back(trialFunc);
   }

   TCanvas *c = new TCanvas("c","c",800,600);

   string title = ";Decay vertex momentum [MeV];d_{EDM} / "+to_string(step)+" MeV";

   funcs_.at(0)->SetTitle(title.c_str());
   funcs_.at(0)->GetXaxis()->SetTitleSize(.04);
   funcs_.at(0)->GetYaxis()->SetTitleSize(.04);
   funcs_.at(0)->GetXaxis()->SetTitleOffset(1.1);
   funcs_.at(0)->GetYaxis()->SetTitleOffset(1.1);
   funcs_.at(0)->GetXaxis()->CenterTitle(true);
   funcs_.at(0)->GetYaxis()->CenterTitle(true);
   funcs_.at(0)->GetYaxis()->SetMaxDigits(4);
  
   funcs_.at(0)->GetYaxis()->SetRangeUser(ymin,ymax);

   gStyle->SetPalette(kRainBow);
   vector<float> colours_ = { 55, 56.5, 58, 59.5, 61, 62.5, 64, 65.5, 67, 68.5, 70, 71.5, 73, 74.5, 76, 77.5, 79, 80.5, 82, 83.5, 85, 86.5, 88, 89.5, 91, 92.5};

   for(int i = 0; i<funcs_.size(); i++) {
      funcs_.at(i)->SetLineWidth(3);
      funcs_.at(i)->SetLineColor(i*0.1);
      if(i==0) funcs_.at(i)->Draw();
      else funcs_.at(i)->Draw("SAME");
   }

   // Purge converged fit
   TF1 *mainFit = (TF1*)gr->GetListOfFunctions()->At(0); 
   gr->GetListOfFunctions()->Remove(mainFit);

   delete mainFit;

   gr->SetMarkerStyle(20);
   gr->SetMarkerColor(kBlack);
   gr->SetFillColor(kBlack);
   gr->SetLineColor(kBlack);
   gr->Draw("P SAME");

   c->SaveAs((fname+".pdf").c_str());
   c->SaveAs((fname+".png").c_str());
   c->SaveAs((fname+".C").c_str());

   delete c;

   TGraphErrors *mottSphere = (TGraphErrors*)input->Get(("DilutionFits/AQ/Decays/"+to_string(step)+"MeV/d_vs_p/allDecaysTrials/sphere2D").c_str());
   TGraphErrors *mottEllipse = (TGraphErrors*)input->Get(("DilutionFits/AQ/Decays/"+to_string(step)+"MeV/d_vs_p/allDecaysTrials/ellipse2D").c_str());

   DrawTGraphErrors(mottSphere, ";#sigma_{i};#sigma_{j}", "../Images/MC/Dilution/dMu/"+dMu+"/MottSphere"+to_string(nTrials));
   DrawTGraphErrors(mottEllipse, ";i;j", "../Images/MC/Dilution/dMu/"+dMu+"/MottEllipse"+to_string(nTrials));

   // Mott ellipse & sphere
   //TH3D *mottSphere= (TH3D*)
   //TH2D *mottSphere= (TH2D*)input->Get(("DilutionFits/AQ/Decays/"+to_string(step)+"MeV/d_vs_p/allDecaysTrials/sphere2D").c_str());
   //TH3D *mottEllipse = (TH3D*)input->Get(("DilutionFits/AQ/Decays/"+to_string(step)+"MeV/d_vs_p/allDecaysTrials/ellipse2D").c_str());
   //TH2D *mottEllipse = (TH2D*)input->Get(("DilutionFits/AQ/Decays/"+to_string(step)+"MeV/d_vs_p/allDecaysTrials/ellipse2D").c_str());

   //cout<<mottEllipse<<endl;
   //cout<<mottSphere<<endl;

   //DrawTH2Test(mottEllipse, "", "../Images/MC/Dilution/dMu/"+dMu+"/MottEllipse"+to_string(nTrials));
   //DrawTH2(mottSphere, "", "../Images/MC/Dilution/dMu/"+dMu+"/MottSphere"+to_string(nTrials));

   //delete mottEllipse;
   //delete mottSphere;

   return;

}

int main() { 

   bool fit = true;
   bool write = false;

   TString inputFileName = "../Plots/MC/dMu/Dilution/dilutionCurves.test.root";//refit.acceptanceCorrected.reweight.root";
   TFile *inputFile = TFile::Open(inputFileName);

   cout<<"Opened input file "<<inputFileName<<", "<<inputFile<<endl;

   cout<<"\n****************** Drawing ******************"<<endl;

  // DrawRecoVertexFit(inputFile, 250, "../Images/MC/Dilution/dMu/"+dMu+"/RecoVertexFit", -0.02, 0.13); // 0, 0.12
   DrawAllDecaysFit(inputFile, 250, "../Images/MC/Dilution/dMu/"+dMu+"/AllDecaysFitTest", 0, .22);//0.06, 0.22); 
  // DrawMottFunctions(inputFile, 250, "../Images/MC/Dilution/dMu/"+dMu+"/MottFunctionsOverlay"+to_string(nTrials), 0, 0.25);

/*   // Graphs
   DrawAllGraphs(inputFile, 250, "../Images/MC/Dilution/dMu/"+dMu+"/AllGraphs", -0.1,0.25);
   //DrawAllGraphs2(inputFile, 250, "../Images/MC/Dilution/dMu/"+dMu+"/AllGraphs2", -0.1,0.25);
   DrawVertexGraphs(inputFile, 250, "../Images/MC/Dilution/dMu/"+dMu+"/VertexGraphs", "AQ", 0,0.125);
   DrawVertexGraphs(inputFile, 250, "../Images/MC/Dilution/dMu/"+dMu+"/VertexGraphs", "BQ", 0,0.125);
   DrawVertexErrorGraphs(inputFile, 250, "../Images/MC/Dilution/dMu/"+dMu+"/VertexErrorGraphs", "AQ", 0, 0.03);
   DrawVertexErrorGraphs(inputFile, 250, "../Images/MC/Dilution/dMu/"+dMu+"/VertexErrorGraphs", "BQ", 0, 0.03);

   // Fits
   DrawAllFits(inputFile, 250, "../Images/MC/Dilution/dMu/"+dMu+"/AllFits", 0, 0.225); 
   DrawRecoVertexFit(inputFile, 250, "../Images/MC/Dilution/dMu/"+dMu+"/RecoVertexFit", 0, 0.12);
   DrawAllDecaysFit(inputFile, 250, "../Images/MC/Dilution/dMu/"+dMu+"/AllDecaysFit", 0, 0.25);

*/
/*   
   
   
   DrawVertexErrorGraphs(inputFile, 250, "../Images/MC/Dilution/dMu/"+dMu+"/VertexErrorGraphs", "BQ", 0, 0.075);



   
   DrawRecoVertexFitFullRange(inputFile, 250, "../Images/MC/Dilution/dMu/"+dMu+"/RecoVertexFit_FullRange",-0.20, 0.20);
   DrawAllFitsControl(inputFile, 250, "../Images/MC/Dilution/dMu/"+dMu+"/AllControlFits", 0, 0.225); 

   // Fit trials
   DrawMottFunctions(inputFile, 250, "../Images/MC/Dilution/dMu/"+dMu+"/MottFunctionsOverlay"+to_string(nTrials), 0, 0.12);*/

   inputFile->Close();

   return 0; 

}