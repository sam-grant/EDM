void S12S18_trackReco_gr_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 20 00:05:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(447.2048,-1.607832,3046.477,1.769479);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12S18_trackReco_gr_pull_fx1013[8] = {
   880.4168,
   1123.105,
   1371.026,
   1619.994,
   1866.738,
   2115.059,
   2362.927,
   2613.265};
   Double_t S12S18_trackReco_gr_pull_fy1013[8] = {
   -1.044947,
   -0.6213495,
   0.2851918,
   1.206594,
   1.175297,
   -0.8139496,
   -1.013999,
   0.3339755};
   Double_t S12S18_trackReco_gr_pull_fex1013[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12S18_trackReco_gr_pull_fey1013[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(8,S12S18_trackReco_gr_pull_fx1013,S12S18_trackReco_gr_pull_fy1013,S12S18_trackReco_gr_pull_fex1013,S12S18_trackReco_gr_pull_fey1013);
   gre->SetName("S12S18_trackReco_gr_pull");
   gre->SetTitle(";Decay vertex momentum [MeV];Pull [#sigma] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_trackReco_gr_pull1013 = new TH1F("Graph_S12S18_trackReco_gr_pull1013","",100,707.132,2786.55);
   Graph_S12S18_trackReco_gr_pull1013->SetMinimum(-1.270101);
   Graph_S12S18_trackReco_gr_pull1013->SetMaximum(1.431748);
   Graph_S12S18_trackReco_gr_pull1013->SetDirectory(0);
   Graph_S12S18_trackReco_gr_pull1013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12S18_trackReco_gr_pull1013->SetLineColor(ci);
   Graph_S12S18_trackReco_gr_pull1013->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12S18_trackReco_gr_pull1013->GetXaxis()->CenterTitle(true);
   Graph_S12S18_trackReco_gr_pull1013->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_trackReco_gr_pull1013->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_trackReco_gr_pull1013->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_trackReco_gr_pull1013->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_trackReco_gr_pull1013->GetYaxis()->SetTitle("Pull [#sigma] / 250 MeV");
   Graph_S12S18_trackReco_gr_pull1013->GetYaxis()->CenterTitle(true);
   Graph_S12S18_trackReco_gr_pull1013->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_trackReco_gr_pull1013->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_trackReco_gr_pull1013->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_trackReco_gr_pull1013->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_trackReco_gr_pull1013->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_trackReco_gr_pull1013->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_trackReco_gr_pull1013->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_trackReco_gr_pull1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_trackReco_gr_pull1013);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
