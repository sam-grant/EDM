void BrResRMS_vs_N()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:50:16 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-1657106,0.1907146,1.491396e+07,2.34352);
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
   1.94131,
   1.385587,
   1.108227,
   1.01777,
   0.8925951,
   0.8055295,
   0.7449384,
   0.695647,
   0.6868744,
   0.6174501,
   0.5863751,
   0.5767058,
   0.5620841};
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
   0.04340901,
   0.03098267,
   0.02478071,
   0.02275803,
   0.01995903,
   0.01801219,
   0.01665733,
   0.01555514,
   0.01535898,
   0.0138066,
   0.01311175,
   0.01289553,
   0.01256858};
   TGraphErrors *gre = new TGraphErrors(13,Truth_fx1108,Truth_fy1108,Truth_fex1108,Truth_fey1108);
   gre->SetName("Truth");
   gre->SetTitle(";CTAGs;RMS of meas #minus true B_{r} [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Truth1108 = new TH1F("Graph_Truth1108","",100,0,1.366686e+07);
   Graph_Truth1108->SetMinimum(0.4059951);
   Graph_Truth1108->SetMaximum(2.128239);
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
   TGaxis *gaxis = new TGaxis(0,2.128239,1.325685e+07,2.128239,0,344.5,510,"-");
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
