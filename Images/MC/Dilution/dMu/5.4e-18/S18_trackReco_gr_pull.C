void S18_trackReco_gr_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:54:07 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(447.6717,-2.884934,3045.011,2.410491);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S18_trackReco_gr_pull_fx1009[8] = {
   880.5616,
   1123.015,
   1370.8,
   1619.721,
   1866.492,
   2115.018,
   2363.349,
   2612.121};
   Double_t S18_trackReco_gr_pull_fy1009[8] = {
   0.08689971,
   -0.660787,
   1.35252,
   0.6997728,
   -0.01099966,
   -2.002363,
   -0.9356082,
   1.52792};
   Double_t S18_trackReco_gr_pull_fex1009[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_trackReco_gr_pull_fey1009[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(8,S18_trackReco_gr_pull_fx1009,S18_trackReco_gr_pull_fy1009,S18_trackReco_gr_pull_fex1009,S18_trackReco_gr_pull_fey1009);
   gre->SetName("S18_trackReco_gr_pull");
   gre->SetTitle(";Decay vertex momentum [MeV];Pull [#sigma] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_trackReco_gr_pull1009 = new TH1F("Graph_S18_trackReco_gr_pull1009","",100,707.4056,2785.277);
   Graph_S18_trackReco_gr_pull1009->SetMinimum(-2.355392);
   Graph_S18_trackReco_gr_pull1009->SetMaximum(1.880948);
   Graph_S18_trackReco_gr_pull1009->SetDirectory(0);
   Graph_S18_trackReco_gr_pull1009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S18_trackReco_gr_pull1009->SetLineColor(ci);
   Graph_S18_trackReco_gr_pull1009->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_trackReco_gr_pull1009->GetXaxis()->CenterTitle(true);
   Graph_S18_trackReco_gr_pull1009->GetXaxis()->SetLabelFont(42);
   Graph_S18_trackReco_gr_pull1009->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_trackReco_gr_pull1009->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_trackReco_gr_pull1009->GetXaxis()->SetTitleFont(42);
   Graph_S18_trackReco_gr_pull1009->GetYaxis()->SetTitle("Pull [#sigma] / 250 MeV");
   Graph_S18_trackReco_gr_pull1009->GetYaxis()->CenterTitle(true);
   Graph_S18_trackReco_gr_pull1009->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_trackReco_gr_pull1009->GetYaxis()->SetLabelFont(42);
   Graph_S18_trackReco_gr_pull1009->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_trackReco_gr_pull1009->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_trackReco_gr_pull1009->GetYaxis()->SetTitleFont(42);
   Graph_S18_trackReco_gr_pull1009->GetZaxis()->SetLabelFont(42);
   Graph_S18_trackReco_gr_pull1009->GetZaxis()->SetTitleOffset(1);
   Graph_S18_trackReco_gr_pull1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_trackReco_gr_pull1009);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
