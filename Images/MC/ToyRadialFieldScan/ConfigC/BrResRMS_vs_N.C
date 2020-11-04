void BrResRMS_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:20:11 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.1026402,1.491396e+07,1.347434);
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
   1.115035,
   0.8231751,
   0.656463,
   0.5847554,
   0.5216524,
   0.4783061,
   0.4480747,
   0.3821968,
   0.3750647,
   0.3631704,
   0.3474001,
   0.3297062,
   0.3171986};
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
   0.02493295,
   0.01840676,
   0.01467896,
   0.01307553,
   0.0116645,
   0.01069525,
   0.01001926,
   0.008546181,
   0.008386701,
   0.008120737,
   0.007768102,
   0.007372455,
   0.007092777};
   TGraphErrors *gre = new TGraphErrors(13,Truth_fx1212,Truth_fy1212,Truth_fex1212,Truth_fey1212);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Truth1212 = new TH1F("Graph_Truth1212","",100,0,1.366686e+07);
   Graph_Truth1212->SetMinimum(0.2271196);
   Graph_Truth1212->SetMaximum(1.222955);
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
   TGaxis *gaxis = new TGaxis(0,1.222955,1.325685e+07,1.222955,0,344.5,510,"-");
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
