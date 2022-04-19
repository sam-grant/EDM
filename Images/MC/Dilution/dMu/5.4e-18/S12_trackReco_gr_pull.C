void S12_trackReco_gr_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 20 00:05:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(446.7616,-2.393433,3047.88,2.272799);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_trackReco_gr_pull_fx1005[8] = {
   880.2814,
   1123.172,
   1371.155,
   1620.23,
   1866.957,
   2115.041,
   2362.635,
   2614.361};
   Double_t S12_trackReco_gr_pull_fy1005[8] = {
   -1.615727,
   0.1665334,
   -0.6782397,
   0.8911957,
   1.495094,
   0.600223,
   -0.907503,
   -0.5613457};
   Double_t S12_trackReco_gr_pull_fex1005[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_trackReco_gr_pull_fey1005[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(8,S12_trackReco_gr_pull_fx1005,S12_trackReco_gr_pull_fy1005,S12_trackReco_gr_pull_fex1005,S12_trackReco_gr_pull_fey1005);
   gre->SetName("S12_trackReco_gr_pull");
   gre->SetTitle(";Decay vertex momentum [MeV];Pull [#sigma] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_trackReco_gr_pull1005 = new TH1F("Graph_S12_trackReco_gr_pull1005","",100,706.8735,2787.769);
   Graph_S12_trackReco_gr_pull1005->SetMinimum(-1.926809);
   Graph_S12_trackReco_gr_pull1005->SetMaximum(1.806176);
   Graph_S12_trackReco_gr_pull1005->SetDirectory(0);
   Graph_S12_trackReco_gr_pull1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12_trackReco_gr_pull1005->SetLineColor(ci);
   Graph_S12_trackReco_gr_pull1005->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_trackReco_gr_pull1005->GetXaxis()->CenterTitle(true);
   Graph_S12_trackReco_gr_pull1005->GetXaxis()->SetLabelFont(42);
   Graph_S12_trackReco_gr_pull1005->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_trackReco_gr_pull1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_trackReco_gr_pull1005->GetXaxis()->SetTitleFont(42);
   Graph_S12_trackReco_gr_pull1005->GetYaxis()->SetTitle("Pull [#sigma] / 250 MeV");
   Graph_S12_trackReco_gr_pull1005->GetYaxis()->CenterTitle(true);
   Graph_S12_trackReco_gr_pull1005->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_trackReco_gr_pull1005->GetYaxis()->SetLabelFont(42);
   Graph_S12_trackReco_gr_pull1005->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_trackReco_gr_pull1005->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_trackReco_gr_pull1005->GetYaxis()->SetTitleFont(42);
   Graph_S12_trackReco_gr_pull1005->GetZaxis()->SetLabelFont(42);
   Graph_S12_trackReco_gr_pull1005->GetZaxis()->SetTitleOffset(1);
   Graph_S12_trackReco_gr_pull1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_trackReco_gr_pull1005);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
