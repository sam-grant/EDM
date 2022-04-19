void allDecays_gr_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 20 00:05:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(438.2574,-2.856452,3048.213,2.391887);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t allDecays_gr_pull_fx1021[8] = {
   873.25,
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258,
   2613.22};
   Double_t allDecays_gr_pull_fy1021[8] = {
   0.0608281,
   0.2401339,
   -0.01056791,
   -0.1137367,
   0.6464161,
   -1.981729,
   1.517164,
   -0.2924621};
   Double_t allDecays_gr_pull_fex1021[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t allDecays_gr_pull_fey1021[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(8,allDecays_gr_pull_fx1021,allDecays_gr_pull_fy1021,allDecays_gr_pull_fex1021,allDecays_gr_pull_fey1021);
   gre->SetName("allDecays_gr_pull");
   gre->SetTitle(";Decay positron momentum [MeV];Pull [#sigma] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_allDecays_gr_pull1021 = new TH1F("Graph_allDecays_gr_pull1021","",100,699.253,2787.217);
   Graph_allDecays_gr_pull1021->SetMinimum(-2.331618);
   Graph_allDecays_gr_pull1021->SetMaximum(1.867053);
   Graph_allDecays_gr_pull1021->SetDirectory(0);
   Graph_allDecays_gr_pull1021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_allDecays_gr_pull1021->SetLineColor(ci);
   Graph_allDecays_gr_pull1021->GetXaxis()->SetTitle("Decay positron momentum [MeV]");
   Graph_allDecays_gr_pull1021->GetXaxis()->CenterTitle(true);
   Graph_allDecays_gr_pull1021->GetXaxis()->SetLabelFont(42);
   Graph_allDecays_gr_pull1021->GetXaxis()->SetTitleSize(0.04);
   Graph_allDecays_gr_pull1021->GetXaxis()->SetTitleOffset(1.1);
   Graph_allDecays_gr_pull1021->GetXaxis()->SetTitleFont(42);
   Graph_allDecays_gr_pull1021->GetYaxis()->SetTitle("Pull [#sigma] / 250 MeV");
   Graph_allDecays_gr_pull1021->GetYaxis()->CenterTitle(true);
   Graph_allDecays_gr_pull1021->GetYaxis()->SetNdivisions(4000510);
   Graph_allDecays_gr_pull1021->GetYaxis()->SetLabelFont(42);
   Graph_allDecays_gr_pull1021->GetYaxis()->SetTitleSize(0.04);
   Graph_allDecays_gr_pull1021->GetYaxis()->SetTitleOffset(1.2);
   Graph_allDecays_gr_pull1021->GetYaxis()->SetTitleFont(42);
   Graph_allDecays_gr_pull1021->GetZaxis()->SetLabelFont(42);
   Graph_allDecays_gr_pull1021->GetZaxis()->SetTitleOffset(1);
   Graph_allDecays_gr_pull1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_allDecays_gr_pull1021);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
