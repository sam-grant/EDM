void BrResRMS_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:21:34 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.05233549,1.491396e+07,0.780701);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Truth_fx1212[13] = {
   980385,
   1945311,
   2907125,
   3831858,
   4797147,
   5761945,
   6724437,
   7689564,
   8654560,
   9619580,
   1.058317e+07,
   1.154995e+07,
   1.251354e+07};
   Double_t Truth_fy1212[13] = {
   0.6448866,
   0.4471132,
   0.3685088,
   0.3114926,
   0.2918364,
   0.2725662,
   0.2457452,
   0.2336315,
   0.2077695,
   0.2044325,
   0.1974499,
   0.1915417,
   0.1777033};
   Double_t Truth_fex1212[13] = {
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
   0,
   0,
   0};
   Double_t Truth_fey1212[13] = {
   0.0144201,
   0.009997756,
   0.008240106,
   0.006965187,
   0.006525661,
   0.006094766,
   0.005495029,
   0.00522416,
   0.004645866,
   0.00457125,
   0.004415114,
   0.004283004,
   0.003973567};
   TGraphErrors *gre = new TGraphErrors(13,Truth_fx1212,Truth_fy1212,Truth_fex1212,Truth_fey1212);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Truth1212 = new TH1F("Graph_Truth1212","",100,0,1.366686e+07);
   Graph_Truth1212->SetMinimum(0.125172);
   Graph_Truth1212->SetMaximum(0.7078644);
   Graph_Truth1212->SetDirectory(0);
   Graph_Truth1212->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Truth1212->SetLineColor(ci);
   Graph_Truth1212->GetXaxis()->SetTitle("CTAGs");
   Graph_Truth1212->GetXaxis()->SetRange(1,97);
   Graph_Truth1212->GetXaxis()->CenterTitle(true);
   Graph_Truth1212->GetXaxis()->SetLabelFont(42);
   Graph_Truth1212->GetXaxis()->SetTitleSize(0.04);
   Graph_Truth1212->GetXaxis()->SetTitleOffset(1.1);
   Graph_Truth1212->GetXaxis()->SetTitleFont(42);
   Graph_Truth1212->GetYaxis()->SetTitle("RMS of meas #minus true B_{r} [ppm]");
   Graph_Truth1212->GetYaxis()->CenterTitle(true);
   Graph_Truth1212->GetYaxis()->SetNdivisions(4000510);
   Graph_Truth1212->GetYaxis()->SetLabelFont(42);
   Graph_Truth1212->GetYaxis()->SetTitleSize(0.04);
   Graph_Truth1212->GetYaxis()->SetTitleOffset(1.1);
   Graph_Truth1212->GetYaxis()->SetTitleFont(42);
   Graph_Truth1212->GetZaxis()->SetLabelFont(42);
   Graph_Truth1212->GetZaxis()->SetTitleOffset(1);
   Graph_Truth1212->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Truth1212);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,0.7078644,1.325685e+07,0.7078644,0,344.5,510,"-");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.04);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1.1);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("Sub-runs");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
