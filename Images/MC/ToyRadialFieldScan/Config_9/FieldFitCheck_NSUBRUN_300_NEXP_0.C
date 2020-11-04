void FieldFitCheck_NSUBRUN_300_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:47 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-36.7304,45,52.37557);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1119[3] = {
   -30,
   30,
   0};
   Double_t Graph0_fy1119[3] = {
   -21.08059,
   36.72576,
   10.39175};
   Double_t Graph0_fex1119[3] = {
   0,
   0,
   0};
   Double_t Graph0_fey1119[3] = {
   0.7988157,
   0.7988157,
   0.7988157};
   TGraphErrors *gre = new TGraphErrors(3,Graph0_fx1119,Graph0_fy1119,Graph0_fex1119,Graph0_fey1119);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 300");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01119 = new TH1F("Graph_Graph01119","Sub-runs 300",100,-36,36);
   Graph_Graph01119->SetMinimum(-27.8198);
   Graph_Graph01119->SetMaximum(43.46497);
   Graph_Graph01119->SetDirectory(0);
   Graph_Graph01119->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01119->SetLineColor(ci);
   Graph_Graph01119->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01119->GetXaxis()->CenterTitle(true);
   Graph_Graph01119->GetXaxis()->SetLabelFont(42);
   Graph_Graph01119->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01119->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01119->GetXaxis()->SetTitleFont(42);
   Graph_Graph01119->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01119->GetYaxis()->CenterTitle(true);
   Graph_Graph01119->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01119->GetYaxis()->SetLabelFont(42);
   Graph_Graph01119->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01119->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01119->GetYaxis()->SetTitleFont(42);
   Graph_Graph01119->GetZaxis()->SetLabelFont(42);
   Graph_Graph01119->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01119->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01119);
   
   
   TF1 *checkFit1120 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1120->SetFillColor(19);
   checkFit1120->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1120->SetLineColor(ci);
   checkFit1120->SetLineWidth(2);
   checkFit1120->SetChisquare(6.896038);
   checkFit1120->SetNDF(1);
   checkFit1120->GetXaxis()->SetLabelFont(42);
   checkFit1120->GetXaxis()->SetTitleOffset(1);
   checkFit1120->GetXaxis()->SetTitleFont(42);
   checkFit1120->GetYaxis()->SetLabelFont(42);
   checkFit1120->GetYaxis()->SetTitleFont(42);
   checkFit1120->SetParameter(0,8.678975);
   checkFit1120->SetParError(0,0.4611965);
   checkFit1120->SetParLimits(0,0,0);
   checkFit1120->SetParameter(1,0.9634391);
   checkFit1120->SetParError(1,0.01882827);
   checkFit1120->SetParLimits(1,0,0);
   checkFit1120->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1120);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  6.9");
   pt_LaTex = pt->AddText("0.963#pm0.0188");
   pt_LaTex = pt->AddText(" 8.68#pm0.461");
   pt_LaTex = pt->AddText("#minus9.01#pm 0.51");
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
   TLine *line = new TLine(-36,0,-9.008328,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-9.008328,-27.8198,-9.008328,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1121 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1121->SetFillColor(19);
   checkFit1121->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1121->SetLineColor(ci);
   checkFit1121->SetLineWidth(2);
   checkFit1121->SetChisquare(6.896038);
   checkFit1121->SetNDF(1);
   checkFit1121->GetXaxis()->SetLabelFont(42);
   checkFit1121->GetXaxis()->SetTitleOffset(1);
   checkFit1121->GetXaxis()->SetTitleFont(42);
   checkFit1121->GetYaxis()->SetLabelFont(42);
   checkFit1121->GetYaxis()->SetTitleFont(42);
   checkFit1121->SetParameter(0,8.678975);
   checkFit1121->SetParError(0,0.4611965);
   checkFit1121->SetParLimits(0,0,0);
   checkFit1121->SetParameter(1,0.9634391);
   checkFit1121->SetParError(1,0.01882827);
   checkFit1121->SetParLimits(1,0,0);
   checkFit1121->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 300");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
