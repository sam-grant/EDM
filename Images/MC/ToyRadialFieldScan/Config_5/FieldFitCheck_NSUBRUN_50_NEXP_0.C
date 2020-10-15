void FieldFitCheck_NSUBRUN_50_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:41:32 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-74.00316,75,88.59223);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1051[11] = {
   -50,
   -40,
   -30,
   -20,
   -10,
   0,
   10,
   20,
   30,
   40,
   50};
   Double_t Graph0_fy1051[11] = {
   -43.80541,
   -30.04383,
   -17.96639,
   -14.28793,
   -4.806694,
   7.334011,
   11.18618,
   27.42846,
   40.51005,
   50.08164,
   58.39448};
   Double_t Graph0_fex1051[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1051[11] = {
   3.098518,
   3.098518,
   3.098518,
   3.098518,
   3.098518,
   3.098518,
   3.098518,
   3.098518,
   3.098518,
   3.098518,
   3.098518};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1051,Graph0_fy1051,Graph0_fex1051,Graph0_fey1051);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 50");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01051 = new TH1F("Graph_Graph01051","Sub-runs 50",100,-60,60);
   Graph_Graph01051->SetMinimum(-57.74362);
   Graph_Graph01051->SetMaximum(72.33269);
   Graph_Graph01051->SetDirectory(0);
   Graph_Graph01051->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01051->SetLineColor(ci);
   Graph_Graph01051->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01051->GetXaxis()->CenterTitle(true);
   Graph_Graph01051->GetXaxis()->SetLabelFont(42);
   Graph_Graph01051->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01051->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01051->GetXaxis()->SetTitleFont(42);
   Graph_Graph01051->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01051->GetYaxis()->CenterTitle(true);
   Graph_Graph01051->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01051->GetYaxis()->SetLabelFont(42);
   Graph_Graph01051->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01051->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01051->GetYaxis()->SetTitleFont(42);
   Graph_Graph01051->GetZaxis()->SetLabelFont(42);
   Graph_Graph01051->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01051);
   
   
   TF1 *checkFit1052 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1052->SetFillColor(19);
   checkFit1052->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1052->SetLineColor(ci);
   checkFit1052->SetLineWidth(2);
   checkFit1052->SetChisquare(9.650408);
   checkFit1052->SetNDF(9);
   checkFit1052->GetXaxis()->SetLabelFont(42);
   checkFit1052->GetXaxis()->SetTitleOffset(1);
   checkFit1052->GetXaxis()->SetTitleFont(42);
   checkFit1052->GetYaxis()->SetLabelFont(42);
   checkFit1052->GetYaxis()->SetTitleFont(42);
   checkFit1052->SetParameter(0,7.638596);
   checkFit1052->SetParError(0,0.9342384);
   checkFit1052->SetParLimits(0,0,0);
   checkFit1052->SetParameter(1,1.005778);
   checkFit1052->SetParError(1,0.02954321);
   checkFit1052->SetParLimits(1,0,0);
   checkFit1052->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1052);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.07");
   pt_LaTex = pt->AddText(" 1.01#pm0.0295");
   pt_LaTex = pt->AddText(" 7.64#pm0.934");
   pt_LaTex = pt->AddText("#minus7.59#pm0.955");
   pt->Draw();
   
   pt = new TPaveText(0.3,0.69,0.62,0.88,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient [mm/kV#upointppm]");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Background B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-60,0,-7.59471,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.59471,-57.74362,-7.59471,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1053 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1053->SetFillColor(19);
   checkFit1053->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1053->SetLineColor(ci);
   checkFit1053->SetLineWidth(2);
   checkFit1053->SetChisquare(9.650408);
   checkFit1053->SetNDF(9);
   checkFit1053->GetXaxis()->SetLabelFont(42);
   checkFit1053->GetXaxis()->SetTitleOffset(1);
   checkFit1053->GetXaxis()->SetTitleFont(42);
   checkFit1053->GetYaxis()->SetLabelFont(42);
   checkFit1053->GetYaxis()->SetTitleFont(42);
   checkFit1053->SetParameter(0,7.638596);
   checkFit1053->SetParError(0,0.9342384);
   checkFit1053->SetParLimits(0,0,0);
   checkFit1053->SetParameter(1,1.005778);
   checkFit1053->SetParError(1,0.02954321);
   checkFit1053->SetParLimits(1,0,0);
   checkFit1053->Draw("same");
   
   pt = new TPaveText(0.3851005,0.94,0.6148995,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 50");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
