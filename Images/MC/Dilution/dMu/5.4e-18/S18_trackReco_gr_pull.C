void S18_trackReco_gr_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 20 00:05:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(447.6543,-2.511408,3045.043,1.815682);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S18_trackReco_gr_pull_fx1009[8] = {
   880.5524,
   1123.038,
   1370.896,
   1619.753,
   1866.511,
   2115.078,
   2363.235,
   2612.145};
   Double_t S18_trackReco_gr_pull_fy1009[8] = {
   0.1402245,
   -1.046826,
   1.0945,
   0.7961467,
   0.1520338,
   -1.790226,
   -0.4911371,
   1.046092};
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
   
   TH1F *Graph_S18_trackReco_gr_pull1009 = new TH1F("Graph_S18_trackReco_gr_pull1009","",100,707.3931,2785.304);
   Graph_S18_trackReco_gr_pull1009->SetMinimum(-2.078699);
   Graph_S18_trackReco_gr_pull1009->SetMaximum(1.382973);
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
