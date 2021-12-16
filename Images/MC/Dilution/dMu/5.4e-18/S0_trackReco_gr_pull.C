void S0_trackReco_gr_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 01:11:49 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(446.0854,-1.981942,3049.135,1.831283);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_trackReco_gr_pull_fx1053[8] = {
   879.9271,
   1123.054,
   1371.406,
   1620.739,
   1868.003,
   2116.569,
   2363.182,
   2615.294};
   Double_t S0_trackReco_gr_pull_fy1053[8] = {
   -0.1753584,
   -0.7311577,
   1.195746,
   0.7935989,
   -1.346404,
   0.1197207,
   -0.3148154,
   0.3947783};
   Double_t S0_trackReco_gr_pull_fex1053[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_trackReco_gr_pull_fey1053[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(8,S0_trackReco_gr_pull_fx1053,S0_trackReco_gr_pull_fy1053,S0_trackReco_gr_pull_fex1053,S0_trackReco_gr_pull_fey1053);
   gre->SetName("S0_trackReco_gr_pull");
   gre->SetTitle(";Decay vertex momentum [MeV];Pull [#sigma] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_trackReco_gr_pull1053 = new TH1F("Graph_S0_trackReco_gr_pull1053","",100,706.3904,2788.83);
   Graph_S0_trackReco_gr_pull1053->SetMinimum(-1.600619);
   Graph_S0_trackReco_gr_pull1053->SetMaximum(1.449961);
   Graph_S0_trackReco_gr_pull1053->SetDirectory(0);
   Graph_S0_trackReco_gr_pull1053->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_trackReco_gr_pull1053->SetLineColor(ci);
   Graph_S0_trackReco_gr_pull1053->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0_trackReco_gr_pull1053->GetXaxis()->CenterTitle(true);
   Graph_S0_trackReco_gr_pull1053->GetXaxis()->SetLabelFont(42);
   Graph_S0_trackReco_gr_pull1053->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_trackReco_gr_pull1053->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_trackReco_gr_pull1053->GetXaxis()->SetTitleFont(42);
   Graph_S0_trackReco_gr_pull1053->GetYaxis()->SetTitle("Pull [#sigma] / 250 MeV");
   Graph_S0_trackReco_gr_pull1053->GetYaxis()->CenterTitle(true);
   Graph_S0_trackReco_gr_pull1053->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_trackReco_gr_pull1053->GetYaxis()->SetLabelFont(42);
   Graph_S0_trackReco_gr_pull1053->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_trackReco_gr_pull1053->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0_trackReco_gr_pull1053->GetYaxis()->SetTitleFont(42);
   Graph_S0_trackReco_gr_pull1053->GetZaxis()->SetLabelFont(42);
   Graph_S0_trackReco_gr_pull1053->GetZaxis()->SetTitleOffset(1);
   Graph_S0_trackReco_gr_pull1053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_trackReco_gr_pull1053);
   
   gre->Draw("apl");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
