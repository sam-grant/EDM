void trackReco_gr_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  2 13:55:06 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(509.5829,-0.5216493,2733.732,0.4986014);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t trackReco_gr_pull_fx1021[7] = {
   880.2744,
   1123.049,
   1371.147,
   1620.244,
   1867.075,
   2115.6,
   2363.041};
   Double_t trackReco_gr_pull_fy1021[7] = {
   0.002184068,
   0.1125281,
   -0.3516075,
   0.3285596,
   0.02058618,
   -0.1965297,
   0.08151719};
   Double_t trackReco_gr_pull_fex1021[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t trackReco_gr_pull_fey1021[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(7,trackReco_gr_pull_fx1021,trackReco_gr_pull_fy1021,trackReco_gr_pull_fex1021,trackReco_gr_pull_fey1021);
   gre->SetName("trackReco_gr_pull");
   gre->SetTitle(";Decay vertex momentum [MeV];Pull [#sigma]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackReco_gr_pull1021 = new TH1F("Graph_trackReco_gr_pull1021","",100,731.9978,2511.317);
   Graph_trackReco_gr_pull1021->SetMinimum(-0.4196243);
   Graph_trackReco_gr_pull1021->SetMaximum(0.3965763);
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
   Graph_trackReco_gr_pull1021->GetYaxis()->SetTitle("Pull [#sigma]");
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
