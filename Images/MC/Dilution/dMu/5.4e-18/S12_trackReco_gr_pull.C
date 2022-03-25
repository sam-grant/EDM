void S12_trackReco_gr_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 22 09:46:12 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(446.8291,-2.536406,3047.862,2.316398);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_trackReco_gr_pull_fx1005[8] = {
   880.3346,
   1123.176,
   1371.112,
   1620.329,
   1866.848,
   2115.055,
   2362.648,
   2614.356};
   Double_t S12_trackReco_gr_pull_fy1005[8] = {
   -1.727606,
   -0.2173884,
   -0.7476826,
   1.475756,
   1.507597,
   0.9192038,
   -1.465949,
   -0.4826984};
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
   
   TH1F *Graph_S12_trackReco_gr_pull1005 = new TH1F("Graph_S12_trackReco_gr_pull1005","",100,706.9324,2787.759);
   Graph_S12_trackReco_gr_pull1005->SetMinimum(-2.051126);
   Graph_S12_trackReco_gr_pull1005->SetMaximum(1.831117);
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
