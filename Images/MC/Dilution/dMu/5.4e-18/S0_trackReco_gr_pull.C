void S0_trackReco_gr_pull()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 00:54:06 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(446.0848,-2.367438,3049.135,2.731474);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_trackReco_gr_pull_fx1001[8] = {
   879.9265,
   1123.052,
   1371.41,
   1620.742,
   1868,
   2116.568,
   2363.186,
   2615.293};
   Double_t S0_trackReco_gr_pull_fy1001[8] = {
   -1.517619,
   -0.9851415,
   1.881656,
   1.219996,
   -1.241454,
   0.4506518,
   -0.4361115,
   0.08692743};
   Double_t S0_trackReco_gr_pull_fex1001[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_trackReco_gr_pull_fey1001[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(8,S0_trackReco_gr_pull_fx1001,S0_trackReco_gr_pull_fy1001,S0_trackReco_gr_pull_fex1001,S0_trackReco_gr_pull_fey1001);
   gre->SetName("S0_trackReco_gr_pull");
   gre->SetTitle(";Decay vertex momentum [MeV];Pull [#sigma] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_trackReco_gr_pull1001 = new TH1F("Graph_S0_trackReco_gr_pull1001","",100,706.3898,2788.83);
   Graph_S0_trackReco_gr_pull1001->SetMinimum(-1.857547);
   Graph_S0_trackReco_gr_pull1001->SetMaximum(2.221583);
   Graph_S0_trackReco_gr_pull1001->SetDirectory(0);
   Graph_S0_trackReco_gr_pull1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_trackReco_gr_pull1001->SetLineColor(ci);
   Graph_S0_trackReco_gr_pull1001->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0_trackReco_gr_pull1001->GetXaxis()->CenterTitle(true);
   Graph_S0_trackReco_gr_pull1001->GetXaxis()->SetLabelFont(42);
   Graph_S0_trackReco_gr_pull1001->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_trackReco_gr_pull1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_trackReco_gr_pull1001->GetXaxis()->SetTitleFont(42);
   Graph_S0_trackReco_gr_pull1001->GetYaxis()->SetTitle("Pull [#sigma] / 250 MeV");
   Graph_S0_trackReco_gr_pull1001->GetYaxis()->CenterTitle(true);
   Graph_S0_trackReco_gr_pull1001->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_trackReco_gr_pull1001->GetYaxis()->SetLabelFont(42);
   Graph_S0_trackReco_gr_pull1001->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_trackReco_gr_pull1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0_trackReco_gr_pull1001->GetYaxis()->SetTitleFont(42);
   Graph_S0_trackReco_gr_pull1001->GetZaxis()->SetLabelFont(42);
   Graph_S0_trackReco_gr_pull1001->GetZaxis()->SetTitleOffset(1);
   Graph_S0_trackReco_gr_pull1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_trackReco_gr_pull1001);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
