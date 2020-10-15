void FieldFitCheck_NSUBRUN_125_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:41:38 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-70.87372,75,84.59277);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1129[11] = {
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
   Double_t Graph0_fy1129[11] = {
   -42.99009,
   -30.41557,
   -21.62784,
   -13.09917,
   -4.20494,
   9.972513,
   17.19309,
   28.00691,
   36.78872,
   45.94094,
   56.70913};
   Double_t Graph0_fex1129[11] = {
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
   Double_t Graph0_fey1129[11] = {
   1.972549,
   1.972549,
   1.972549,
   1.972549,
   1.972549,
   1.972549,
   1.972549,
   1.972549,
   1.972549,
   1.972549,
   1.972549};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1129,Graph0_fy1129,Graph0_fex1129,Graph0_fey1129);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 125");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01129 = new TH1F("Graph_Graph01129","Sub-runs 125",100,-60,60);
   Graph_Graph01129->SetMinimum(-55.32707);
   Graph_Graph01129->SetMaximum(69.04612);
   Graph_Graph01129->SetDirectory(0);
   Graph_Graph01129->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01129->SetLineColor(ci);
   Graph_Graph01129->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01129->GetXaxis()->CenterTitle(true);
   Graph_Graph01129->GetXaxis()->SetLabelFont(42);
   Graph_Graph01129->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01129->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01129->GetXaxis()->SetTitleFont(42);
   Graph_Graph01129->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01129->GetYaxis()->CenterTitle(true);
   Graph_Graph01129->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01129->GetYaxis()->SetLabelFont(42);
   Graph_Graph01129->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01129->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01129->GetYaxis()->SetTitleFont(42);
   Graph_Graph01129->GetZaxis()->SetLabelFont(42);
   Graph_Graph01129->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01129->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01129);
   
   
   TF1 *checkFit1130 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1130->SetFillColor(19);
   checkFit1130->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1130->SetLineColor(ci);
   checkFit1130->SetLineWidth(2);
   checkFit1130->SetChisquare(4.096263);
   checkFit1130->SetNDF(9);
   checkFit1130->GetXaxis()->SetLabelFont(42);
   checkFit1130->GetXaxis()->SetTitleOffset(1);
   checkFit1130->GetXaxis()->SetTitleFont(42);
   checkFit1130->GetYaxis()->SetLabelFont(42);
   checkFit1130->GetYaxis()->SetTitleFont(42);
   checkFit1130->SetParameter(0,7.479426);
   checkFit1130->SetParError(0,0.5947459);
   checkFit1130->SetParLimits(0,0,0);
   checkFit1130->SetParameter(1,0.9843473);
   checkFit1130->SetParError(1,0.01880752);
   checkFit1130->SetParLimits(1,0,0);
   checkFit1130->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1130);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.455");
   pt_LaTex = pt->AddText("0.984#pm0.0188");
   pt_LaTex = pt->AddText(" 7.48#pm0.595");
   pt_LaTex = pt->AddText(" #minus7.6#pm0.621");
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
   TLine *line = new TLine(-60,0,-7.598361,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.598361,-55.32707,-7.598361,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1131 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1131->SetFillColor(19);
   checkFit1131->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1131->SetLineColor(ci);
   checkFit1131->SetLineWidth(2);
   checkFit1131->SetChisquare(4.096263);
   checkFit1131->SetNDF(9);
   checkFit1131->GetXaxis()->SetLabelFont(42);
   checkFit1131->GetXaxis()->SetTitleOffset(1);
   checkFit1131->GetXaxis()->SetTitleFont(42);
   checkFit1131->GetYaxis()->SetLabelFont(42);
   checkFit1131->GetYaxis()->SetTitleFont(42);
   checkFit1131->SetParameter(0,7.479426);
   checkFit1131->SetParError(0,0.5947459);
   checkFit1131->SetParLimits(0,0,0);
   checkFit1131->SetParameter(1,0.9843473);
   checkFit1131->SetParError(1,0.01880752);
   checkFit1131->SetParLimits(1,0,0);
   checkFit1131->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 125");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
