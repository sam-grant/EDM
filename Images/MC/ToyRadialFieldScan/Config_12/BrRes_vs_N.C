void BrRes_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:57:25 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,-0.09765337,1.491396e+07,0.1052451);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1185[13] = {
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
   Double_t Graph0_fy1185[13] = {
   0.0323313,
   -0.007536875,
   -0.04205828,
   0.001058456,
   -0.01247625,
   0.003763426,
   0.02445054,
   0.009479924,
   0.002897106,
   9.378644e-05,
   -0.00834813,
   0.001422405,
   0.01466027};
   Double_t Graph0_fex1185[13] = {
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
   Double_t Graph0_fey1185[13] = {
   0.03909736,
   0.02846696,
   0.02177868,
   0.02058788,
   0.01756532,
   0.01694392,
   0.01479445,
   0.01410287,
   0.01302525,
   0.01249316,
   0.01188068,
   0.01185252,
   0.01065879};
   TGraphErrors *gre = new TGraphErrors(13,Graph0_fx1185,Graph0_fy1185,Graph0_fex1185,Graph0_fey1185);
   gre->SetName("Graph0");
   gre->SetTitle(";CTAGs;Meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01185 = new TH1F("Graph_Graph01185","",100,0,1.366686e+07);
   Graph_Graph01185->SetMinimum(-0.07736353);
   Graph_Graph01185->SetMaximum(0.08495522);
   Graph_Graph01185->SetDirectory(0);
   Graph_Graph01185->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01185->SetLineColor(ci);
   Graph_Graph01185->GetXaxis()->SetTitle("CTAGs");
   Graph_Graph01185->GetXaxis()->SetRange(1,97);
   Graph_Graph01185->GetXaxis()->CenterTitle(true);
   Graph_Graph01185->GetXaxis()->SetLabelFont(42);
   Graph_Graph01185->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01185->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01185->GetXaxis()->SetTitleFont(42);
   Graph_Graph01185->GetYaxis()->SetTitle("Meas #minus true B_{r} [ppm]");
   Graph_Graph01185->GetYaxis()->CenterTitle(true);
   Graph_Graph01185->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01185->GetYaxis()->SetLabelFont(42);
   Graph_Graph01185->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01185->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01185->GetYaxis()->SetTitleFont(42);
   Graph_Graph01185->GetZaxis()->SetLabelFont(42);
   Graph_Graph01185->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01185->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01185);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,0.08495522,1.325685e+07,0.08495522,0,344.5,510,"-");
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
