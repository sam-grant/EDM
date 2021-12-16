void S12S18_trackReco_gr_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 01:11:50 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(447.2191,-2.86829,3046.475,2.305123);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12S18_trackReco_gr_pull_fx1065[8] = {
   880.4285,
   1123.038,
   1370.992,
   1619.971,
   1866.545,
   2115.011,
   2362.886,
   2613.266};
   Double_t S12S18_trackReco_gr_pull_fy1065[8] = {
   -0.3558221,
   0.5057164,
   -1.014374,
   0.841502,
   1.442887,
   -1.033698,
   -2.006055,
   1.391126};
   Double_t S12S18_trackReco_gr_pull_fex1065[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12S18_trackReco_gr_pull_fey1065[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(8,S12S18_trackReco_gr_pull_fx1065,S12S18_trackReco_gr_pull_fy1065,S12S18_trackReco_gr_pull_fex1065,S12S18_trackReco_gr_pull_fey1065);
   gre->SetName("S12S18_trackReco_gr_pull");
   gre->SetTitle(";Decay vertex momentum [MeV];Pull [#sigma] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_trackReco_gr_pull1065 = new TH1F("Graph_S12S18_trackReco_gr_pull1065","",100,707.1447,2786.549);
   Graph_S12S18_trackReco_gr_pull1065->SetMinimum(-2.350949);
   Graph_S12S18_trackReco_gr_pull1065->SetMaximum(1.787782);
   Graph_S12S18_trackReco_gr_pull1065->SetDirectory(0);
   Graph_S12S18_trackReco_gr_pull1065->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12S18_trackReco_gr_pull1065->SetLineColor(ci);
   Graph_S12S18_trackReco_gr_pull1065->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12S18_trackReco_gr_pull1065->GetXaxis()->CenterTitle(true);
   Graph_S12S18_trackReco_gr_pull1065->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_trackReco_gr_pull1065->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_trackReco_gr_pull1065->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_trackReco_gr_pull1065->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_trackReco_gr_pull1065->GetYaxis()->SetTitle("Pull [#sigma] / 250 MeV");
   Graph_S12S18_trackReco_gr_pull1065->GetYaxis()->CenterTitle(true);
   Graph_S12S18_trackReco_gr_pull1065->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_trackReco_gr_pull1065->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_trackReco_gr_pull1065->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_trackReco_gr_pull1065->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_trackReco_gr_pull1065->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_trackReco_gr_pull1065->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_trackReco_gr_pull1065->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_trackReco_gr_pull1065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_trackReco_gr_pull1065);
   
   gre->Draw("apl");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
