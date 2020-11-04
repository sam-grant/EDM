void BrResRMS_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:51:52 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.3261818,1.491396e+07,3.724861);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Truth_fx1108[13] = {
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
   Double_t Truth_fy1108[13] = {
   3.089301,
   2.270092,
   1.803061,
   1.660958,
   1.461126,
   1.321887,
   1.211915,
   1.130246,
   1.115206,
   1.011108,
   0.9555844,
   0.9375544,
   0.9130447};
   Double_t Truth_fex1108[13] = {
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
   Double_t Truth_fey1108[13] = {
   0.06911344,
   0.05076079,
   0.04031767,
   0.03714016,
   0.03267176,
   0.0295583,
   0.02709924,
   0.02527307,
   0.02493677,
   0.02260907,
   0.02136752,
   0.02096435,
   0.0204163};
   TGraphErrors *gre = new TGraphErrors(13,Truth_fx1108,Truth_fy1108,Truth_fex1108,Truth_fey1108);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Truth1108 = new TH1F("Graph_Truth1108","",100,0,1.366686e+07);
   Graph_Truth1108->SetMinimum(0.6660497);
   Graph_Truth1108->SetMaximum(3.384993);
   Graph_Truth1108->SetDirectory(0);
   Graph_Truth1108->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Truth1108->SetLineColor(ci);
   Graph_Truth1108->GetXaxis()->SetTitle("CTAGs");
   Graph_Truth1108->GetXaxis()->SetRange(1,97);
   Graph_Truth1108->GetXaxis()->CenterTitle(true);
   Graph_Truth1108->GetXaxis()->SetLabelFont(42);
   Graph_Truth1108->GetXaxis()->SetTitleSize(0.04);
   Graph_Truth1108->GetXaxis()->SetTitleOffset(1.1);
   Graph_Truth1108->GetXaxis()->SetTitleFont(42);
   Graph_Truth1108->GetYaxis()->SetTitle("RMS of meas #minus true B_{r} [ppm]");
   Graph_Truth1108->GetYaxis()->CenterTitle(true);
   Graph_Truth1108->GetYaxis()->SetNdivisions(4000510);
   Graph_Truth1108->GetYaxis()->SetLabelFont(42);
   Graph_Truth1108->GetYaxis()->SetTitleSize(0.04);
   Graph_Truth1108->GetYaxis()->SetTitleOffset(1.1);
   Graph_Truth1108->GetYaxis()->SetTitleFont(42);
   Graph_Truth1108->GetZaxis()->SetLabelFont(42);
   Graph_Truth1108->GetZaxis()->SetTitleOffset(1);
   Graph_Truth1108->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Truth1108);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,3.384993,1.325685e+07,3.384993,0,344.5,510,"-");
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
