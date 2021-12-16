void allDecays_gr_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 01:11:51 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(438.2616,-2.696068,3048.204,2.352177);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t allDecays_gr_pull_fx1073[8] = {
   873.2521,
   1122.83,
   1372.241,
   1621.489,
   1870.59,
   2119.347,
   2367.262,
   2613.214};
   Double_t allDecays_gr_pull_fy1073[8] = {
   -0.06106322,
   0.01249049,
   0.02239007,
   0.03971022,
   0.7475382,
   -1.854693,
   1.510803,
   -0.4223986};
   Double_t allDecays_gr_pull_fex1073[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t allDecays_gr_pull_fey1073[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(8,allDecays_gr_pull_fx1073,allDecays_gr_pull_fy1073,allDecays_gr_pull_fex1073,allDecays_gr_pull_fey1073);
   gre->SetName("allDecays_gr_pull");
   gre->SetTitle(";Decay vertex momentum [MeV];Pull [#sigma] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_allDecays_gr_pull1073 = new TH1F("Graph_allDecays_gr_pull1073","",100,699.2559,2787.21);
   Graph_allDecays_gr_pull1073->SetMinimum(-2.191243);
   Graph_allDecays_gr_pull1073->SetMaximum(1.847353);
   Graph_allDecays_gr_pull1073->SetDirectory(0);
   Graph_allDecays_gr_pull1073->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_allDecays_gr_pull1073->SetLineColor(ci);
   Graph_allDecays_gr_pull1073->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_allDecays_gr_pull1073->GetXaxis()->CenterTitle(true);
   Graph_allDecays_gr_pull1073->GetXaxis()->SetLabelFont(42);
   Graph_allDecays_gr_pull1073->GetXaxis()->SetTitleSize(0.04);
   Graph_allDecays_gr_pull1073->GetXaxis()->SetTitleOffset(1.1);
   Graph_allDecays_gr_pull1073->GetXaxis()->SetTitleFont(42);
   Graph_allDecays_gr_pull1073->GetYaxis()->SetTitle("Pull [#sigma] / 250 MeV");
   Graph_allDecays_gr_pull1073->GetYaxis()->CenterTitle(true);
   Graph_allDecays_gr_pull1073->GetYaxis()->SetNdivisions(4000510);
   Graph_allDecays_gr_pull1073->GetYaxis()->SetLabelFont(42);
   Graph_allDecays_gr_pull1073->GetYaxis()->SetTitleSize(0.04);
   Graph_allDecays_gr_pull1073->GetYaxis()->SetTitleOffset(1.2);
   Graph_allDecays_gr_pull1073->GetYaxis()->SetTitleFont(42);
   Graph_allDecays_gr_pull1073->GetZaxis()->SetLabelFont(42);
   Graph_allDecays_gr_pull1073->GetZaxis()->SetTitleOffset(1);
   Graph_allDecays_gr_pull1073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_allDecays_gr_pull1073);
   
   gre->Draw("apl");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
