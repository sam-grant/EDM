void BrResRMS_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:03 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.1782914,1.491396e+07,2.39301);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Truth_fx1186[13] = {
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
   Double_t Truth_fy1186[13] = {
   1.979625,
   1.426237,
   1.109921,
   1.010987,
   0.9066264,
   0.7974004,
   0.7940276,
   0.7115108,
   0.6657601,
   0.6379285,
   0.6295385,
   0.5866672,
   0.5599317};
   Double_t Truth_fex1186[13] = {
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
   Double_t Truth_fey1186[13] = {
   0.04426576,
   0.03189163,
   0.02481859,
   0.02260637,
   0.02027278,
   0.01783041,
   0.017755,
   0.01590987,
   0.01488685,
   0.01426452,
   0.01407691,
   0.01311828,
   0.01252045};
   TGraphErrors *gre = new TGraphErrors(13,Truth_fx1186,Truth_fy1186,Truth_fex1186,Truth_fey1186);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Truth1186 = new TH1F("Graph_Truth1186","",100,0,1.366686e+07);
   Graph_Truth1186->SetMinimum(0.3997633);
   Graph_Truth1186->SetMaximum(2.171538);
   Graph_Truth1186->SetDirectory(0);
   Graph_Truth1186->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Truth1186->SetLineColor(ci);
   Graph_Truth1186->GetXaxis()->SetTitle("CTAGs");
   Graph_Truth1186->GetXaxis()->SetRange(1,97);
   Graph_Truth1186->GetXaxis()->CenterTitle(true);
   Graph_Truth1186->GetXaxis()->SetLabelFont(42);
   Graph_Truth1186->GetXaxis()->SetTitleSize(0.04);
   Graph_Truth1186->GetXaxis()->SetTitleOffset(1.1);
   Graph_Truth1186->GetXaxis()->SetTitleFont(42);
   Graph_Truth1186->GetYaxis()->SetTitle("RMS of meas #minus true B_{r} [ppm]");
   Graph_Truth1186->GetYaxis()->CenterTitle(true);
   Graph_Truth1186->GetYaxis()->SetNdivisions(4000510);
   Graph_Truth1186->GetYaxis()->SetLabelFont(42);
   Graph_Truth1186->GetYaxis()->SetTitleSize(0.04);
   Graph_Truth1186->GetYaxis()->SetTitleOffset(1.1);
   Graph_Truth1186->GetYaxis()->SetTitleFont(42);
   Graph_Truth1186->GetZaxis()->SetLabelFont(42);
   Graph_Truth1186->GetZaxis()->SetTitleOffset(1);
   Graph_Truth1186->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Truth1186);
   
   gre->Draw("ap");
   TGaxis *gaxis = new TGaxis(0,2.171538,1.325685e+07,2.171538,0,344.5,510,"-");
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
