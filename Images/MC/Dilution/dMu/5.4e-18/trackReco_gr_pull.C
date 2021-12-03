void trackReco_gr_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 18:01:23 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(446.8279,-2.511222,3047.507,2.042686);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t trackReco_gr_pull_fx1021[8] = {
   880.2744,
   1123.049,
   1371.147,
   1620.244,
   1867.075,
   2115.6,
   2363.041,
   2614.061};
   Double_t trackReco_gr_pull_fy1021[8] = {
   -0.4175322,
   0.0298131,
   -0.01247553,
   0.9009048,
   0.387572,
   -0.6206138,
   -1.752237,
   1.283702};
   Double_t trackReco_gr_pull_fex1021[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t trackReco_gr_pull_fey1021[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(8,trackReco_gr_pull_fx1021,trackReco_gr_pull_fy1021,trackReco_gr_pull_fex1021,trackReco_gr_pull_fey1021);
   gre->SetName("trackReco_gr_pull");
   gre->SetTitle(";Decay vertex momentum [MeV];Pull [#sigma] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackReco_gr_pull1021 = new TH1F("Graph_trackReco_gr_pull1021","",100,706.8958,2787.439);
   Graph_trackReco_gr_pull1021->SetMinimum(-2.055831);
   Graph_trackReco_gr_pull1021->SetMaximum(1.587295);
   Graph_trackReco_gr_pull1021->SetDirectory(0);
   Graph_trackReco_gr_pull1021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_trackReco_gr_pull1021->SetLineColor(ci);
   Graph_trackReco_gr_pull1021->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_trackReco_gr_pull1021->GetXaxis()->CenterTitle(true);
   Graph_trackReco_gr_pull1021->GetXaxis()->SetLabelFont(42);
   Graph_trackReco_gr_pull1021->GetXaxis()->SetTitleSize(0.04);
   Graph_trackReco_gr_pull1021->GetXaxis()->SetTitleOffset(1.1);
   Graph_trackReco_gr_pull1021->GetXaxis()->SetTitleFont(42);
   Graph_trackReco_gr_pull1021->GetYaxis()->SetTitle("Pull [#sigma] / 250 MeV");
   Graph_trackReco_gr_pull1021->GetYaxis()->CenterTitle(true);
   Graph_trackReco_gr_pull1021->GetYaxis()->SetNdivisions(4000510);
   Graph_trackReco_gr_pull1021->GetYaxis()->SetLabelFont(42);
   Graph_trackReco_gr_pull1021->GetYaxis()->SetTitleSize(0.04);
   Graph_trackReco_gr_pull1021->GetYaxis()->SetTitleOffset(1.2);
   Graph_trackReco_gr_pull1021->GetYaxis()->SetTitleFont(42);
   Graph_trackReco_gr_pull1021->GetZaxis()->SetLabelFont(42);
   Graph_trackReco_gr_pull1021->GetZaxis()->SetTitleOffset(1);
   Graph_trackReco_gr_pull1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackReco_gr_pull1021);
   
   gre->Draw("apl");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
