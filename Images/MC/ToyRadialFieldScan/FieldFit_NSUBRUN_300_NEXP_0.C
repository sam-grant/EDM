void FieldFit_NSUBRUN_300_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 19:09:43 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.2009513,45,0.1450759);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1119[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1119[4] = {
   0.08439648,
   0.002612455,
   -0.06456156,
   -0.1402718};
   Double_t Graph0_fex1119[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1119[4] = {
   0.003008262,
   0.003008262,
   0.003008262,
   0.003008262};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1119,Graph0_fy1119,Graph0_fex1119,Graph0_fey1119);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 300");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01119 = new TH1F("Graph_Graph01119","Sub-runs 300",100,-36,36);
   Graph_Graph01119->SetMinimum(-0.1663486);
   Graph_Graph01119->SetMaximum(0.1104732);
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
   Graph_Graph01119->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
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
   
   
   TF1 *fieldLineFit1120 = new TF1("fieldLineFit","pol 1",-36,36, TF1::EAddToList::kNo);
   fieldLineFit1120->SetFillColor(19);
   fieldLineFit1120->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fieldLineFit1120->SetLineColor(ci);
   fieldLineFit1120->SetLineWidth(2);
   fieldLineFit1120->SetChisquare(3.979174);
   fieldLineFit1120->SetNDF(2);
   fieldLineFit1120->GetXaxis()->SetLabelFont(42);
   fieldLineFit1120->GetXaxis()->SetTitleOffset(1);
   fieldLineFit1120->GetXaxis()->SetTitleFont(42);
   fieldLineFit1120->GetYaxis()->SetLabelFont(42);
   fieldLineFit1120->GetYaxis()->SetTitleFont(42);
   fieldLineFit1120->SetParameter(0,-0.02945611);
   fieldLineFit1120->SetParError(0,0.001504131);
   fieldLineFit1120->SetParLimits(0,0,0);
   fieldLineFit1120->SetParameter(1,-0.003705894);
   fieldLineFit1120->SetParError(1,6.72668e-05);
   fieldLineFit1120->SetParLimits(1,0,0);
   fieldLineFit1120->SetParent(gre);
   gre->GetListOfFunctions()->Add(fieldLineFit1120);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.99");
   pt_LaTex = pt->AddText("#minus0.00371#pm6.73e-05");
   pt_LaTex = pt->AddText("#minus0.0295#pm0.0015");
   pt_LaTex = pt->AddText("#minus7.95#pm0.406");
   pt->Draw();
   
   pt = new TPaveText(0.3,0.69,0.62,0.88,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient [mm/kV#upointppm]");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Residual B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,-7.948448,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.948448,-0.1663486,-7.948448,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *fieldLineFit1121 = new TF1("fieldLineFit","pol 1",-36,36, TF1::EAddToList::kNo);
   fieldLineFit1121->SetFillColor(19);
   fieldLineFit1121->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fieldLineFit1121->SetLineColor(ci);
   fieldLineFit1121->SetLineWidth(2);
   fieldLineFit1121->SetChisquare(3.979174);
   fieldLineFit1121->SetNDF(2);
   fieldLineFit1121->GetXaxis()->SetLabelFont(42);
   fieldLineFit1121->GetXaxis()->SetTitleOffset(1);
   fieldLineFit1121->GetXaxis()->SetTitleFont(42);
   fieldLineFit1121->GetYaxis()->SetLabelFont(42);
   fieldLineFit1121->GetYaxis()->SetTitleFont(42);
   fieldLineFit1121->SetParameter(0,-0.02945611);
   fieldLineFit1121->SetParError(0,0.001504131);
   fieldLineFit1121->SetParLimits(0,0,0);
   fieldLineFit1121->SetParameter(1,-0.003705894);
   fieldLineFit1121->SetParError(1,6.72668e-05);
   fieldLineFit1121->SetParLimits(1,0,0);
   fieldLineFit1121->Draw("same");
   
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
