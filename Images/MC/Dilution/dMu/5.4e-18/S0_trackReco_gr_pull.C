void S0_trackReco_gr_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 20 00:05:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(446.0786,-1.805121,3049.148,2.010452);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_trackReco_gr_pull_fx1001[8] = {
   879.9235,
   1123.046,
   1371.407,
   1620.72,
   1868.002,
   2116.574,
   2363.173,
   2615.303};
   Double_t S0_trackReco_gr_pull_fy1001[8] = {
   -0.9756652,
   -1.169192,
   1.374523,
   1.194303,
   -0.7326814,
   0.4460131,
   -0.3036975,
   -0.199314};
   Double_t S0_trackReco_gr_pull_fex1001[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_trackReco_gr_pull_fey1001[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(8,S0_trackReco_gr_pull_fx1001,S0_trackReco_gr_pull_fy1001,S0_trackReco_gr_pull_fex1001,S0_trackReco_gr_pull_fey1001);
   gre->SetName("S0_trackReco_gr_pull");
   gre->SetTitle(";Decay vertex momentum [MeV];Pull [#sigma] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_trackReco_gr_pull1001 = new TH1F("Graph_S0_trackReco_gr_pull1001","",100,706.3855,2788.841);
   Graph_S0_trackReco_gr_pull1001->SetMinimum(-1.423564);
   Graph_S0_trackReco_gr_pull1001->SetMaximum(1.628894);
   Graph_S0_trackReco_gr_pull1001->SetDirectory(0);
   Graph_S0_trackReco_gr_pull1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_trackReco_gr_pull1001->SetLineColor(ci);
   Graph_S0_trackReco_gr_pull1001->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0_trackReco_gr_pull1001->GetXaxis()->CenterTitle(true);
   Graph_S0_trackReco_gr_pull1001->GetXaxis()->SetLabelFont(42);
   Graph_S0_trackReco_gr_pull1001->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_trackReco_gr_pull1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_trackReco_gr_pull1001->GetXaxis()->SetTitleFont(42);
   Graph_S0_trackReco_gr_pull1001->GetYaxis()->SetTitle("Pull [#sigma] / 250 MeV");
   Graph_S0_trackReco_gr_pull1001->GetYaxis()->CenterTitle(true);
   Graph_S0_trackReco_gr_pull1001->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_trackReco_gr_pull1001->GetYaxis()->SetLabelFont(42);
   Graph_S0_trackReco_gr_pull1001->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_trackReco_gr_pull1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0_trackReco_gr_pull1001->GetYaxis()->SetTitleFont(42);
   Graph_S0_trackReco_gr_pull1001->GetZaxis()->SetLabelFont(42);
   Graph_S0_trackReco_gr_pull1001->GetZaxis()->SetTitleOffset(1);
   Graph_S0_trackReco_gr_pull1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_trackReco_gr_pull1001);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
