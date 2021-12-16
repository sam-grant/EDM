void S0S12S18_trackReco_gr_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 01:11:51 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(446.8204,-2.560597,3047.464,2.107722);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0S12S18_trackReco_gr_pull_fx1069[8] = {
   880.261,
   1123.043,
   1371.131,
   1620.23,
   1867.05,
   2115.574,
   2362.998,
   2614.023};
   Double_t S0S12S18_trackReco_gr_pull_fy1069[8] = {
   -0.3696362,
   -0.02024864,
   -0.1524493,
   1.130676,
   0.3885309,
   -0.7283319,
   -1.782544,
   1.329669};
   Double_t S0S12S18_trackReco_gr_pull_fex1069[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0S12S18_trackReco_gr_pull_fey1069[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(8,S0S12S18_trackReco_gr_pull_fx1069,S0S12S18_trackReco_gr_pull_fy1069,S0S12S18_trackReco_gr_pull_fex1069,S0S12S18_trackReco_gr_pull_fey1069);
   gre->SetName("S0S12S18_trackReco_gr_pull");
   gre->SetTitle(";Decay vertex momentum [MeV];Pull [#sigma] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_trackReco_gr_pull1069 = new TH1F("Graph_S0S12S18_trackReco_gr_pull1069","",100,706.8848,2787.4);
   Graph_S0S12S18_trackReco_gr_pull1069->SetMinimum(-2.093765);
   Graph_S0S12S18_trackReco_gr_pull1069->SetMaximum(1.64089);
   Graph_S0S12S18_trackReco_gr_pull1069->SetDirectory(0);
   Graph_S0S12S18_trackReco_gr_pull1069->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_trackReco_gr_pull1069->SetLineColor(ci);
   Graph_S0S12S18_trackReco_gr_pull1069->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0S12S18_trackReco_gr_pull1069->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_trackReco_gr_pull1069->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackReco_gr_pull1069->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_trackReco_gr_pull1069->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_trackReco_gr_pull1069->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_trackReco_gr_pull1069->GetYaxis()->SetTitle("Pull [#sigma] / 250 MeV");
   Graph_S0S12S18_trackReco_gr_pull1069->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_trackReco_gr_pull1069->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_trackReco_gr_pull1069->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackReco_gr_pull1069->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_trackReco_gr_pull1069->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_trackReco_gr_pull1069->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_trackReco_gr_pull1069->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackReco_gr_pull1069->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_trackReco_gr_pull1069->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_trackReco_gr_pull1069);
   
   gre->Draw("apl");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
