void FieldFitCheck_NSUBRUN_275_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  8 12:25:48 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-38.08146,45,54.81187);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1087[2] = {
   -30,
   30};
   Double_t Graph0_fy1087[2] = {
   -21.94092,
   38.67134};
   Double_t Graph0_fex1087[2] = {
   0,
   0};
   Double_t Graph0_fey1087[2] = {
   0.6583108,
   0.6583108};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1087,Graph0_fy1087,Graph0_fex1087,Graph0_fey1087);
   gre->SetName("Graph0");
   gre->SetTitle("275 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01087 = new TH1F("Graph_Graph01087","275 sub-runs",100,-36,36);
   Graph_Graph01087->SetMinimum(-28.79212);
   Graph_Graph01087->SetMaximum(45.52254);
   Graph_Graph01087->SetDirectory(0);
   Graph_Graph01087->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01087->SetLineColor(ci);
   Graph_Graph01087->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01087->GetXaxis()->CenterTitle(true);
   Graph_Graph01087->GetXaxis()->SetLabelFont(42);
   Graph_Graph01087->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01087->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01087->GetXaxis()->SetTitleFont(42);
   Graph_Graph01087->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01087->GetYaxis()->CenterTitle(true);
   Graph_Graph01087->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01087->GetYaxis()->SetLabelFont(42);
   Graph_Graph01087->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01087->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01087->GetYaxis()->SetTitleFont(42);
   Graph_Graph01087->GetZaxis()->SetLabelFont(42);
   Graph_Graph01087->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01087->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01087);
   
   
   TF1 *checkFit1088 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1088->SetFillColor(19);
   checkFit1088->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1088->SetLineColor(ci);
   checkFit1088->SetLineWidth(2);
   checkFit1088->SetChisquare(3.59923e-17);
   checkFit1088->SetNDF(0);
   checkFit1088->GetXaxis()->SetLabelFont(42);
   checkFit1088->GetXaxis()->SetTitleOffset(1);
   checkFit1088->GetXaxis()->SetTitleFont(42);
   checkFit1088->GetYaxis()->SetLabelFont(42);
   checkFit1088->GetYaxis()->SetTitleFont(42);
   checkFit1088->SetParameter(0,8.365209);
   checkFit1088->SetParError(0,0.465496);
   checkFit1088->SetParLimits(0,0,0);
   checkFit1088->SetParameter(1,1.010204);
   checkFit1088->SetParError(1,0.01551653);
   checkFit1088->SetParLimits(1,0,0);
   checkFit1088->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1088);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText(" 1.01#pm0.0155");
   pt_LaTex = pt->AddText(" 8.37#pm0.465");
   pt_LaTex = pt->AddText(" 8.28#pm0.478");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("#LTB_{r}^{Bkg}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,-8.280709,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.280709,-28.79212,-8.280709,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1089 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1089->SetFillColor(19);
   checkFit1089->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1089->SetLineColor(ci);
   checkFit1089->SetLineWidth(2);
   checkFit1089->SetChisquare(3.59923e-17);
   checkFit1089->SetNDF(0);
   checkFit1089->GetXaxis()->SetLabelFont(42);
   checkFit1089->GetXaxis()->SetTitleOffset(1);
   checkFit1089->GetXaxis()->SetTitleFont(42);
   checkFit1089->GetYaxis()->SetLabelFont(42);
   checkFit1089->GetYaxis()->SetTitleFont(42);
   checkFit1089->SetParameter(0,8.365209);
   checkFit1089->SetParError(0,0.465496);
   checkFit1089->SetParLimits(0,0,0);
   checkFit1089->SetParameter(1,1.010204);
   checkFit1089->SetParError(1,0.01551653);
   checkFit1089->SetParLimits(1,0,0);
   checkFit1089->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("275 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
