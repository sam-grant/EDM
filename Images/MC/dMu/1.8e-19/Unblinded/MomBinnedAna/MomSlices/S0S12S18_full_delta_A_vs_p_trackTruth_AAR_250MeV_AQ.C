void S0S12S18_full_delta_A_vs_p_trackTruth_AAR_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Sep 27 11:33:22 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-251.625,-0.6756346,3254.625,0.9857752);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1148[12] = {
   125,
   375,
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t Graph0_fy1148[12] = {
   0,
   0,
   0,
   0.09790359,
   -0.2195764,
   0.166616,
   0.1656779,
   -0.001096371,
   0.2826039,
   0.4239823,
   0,
   0};
   Double_t Graph0_fex1148[12] = {
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125};
   Double_t Graph0_fey1148[12] = {
   0,
   0,
   0,
   0.214324,
   0.1791565,
   0.1613972,
   0.1572754,
   0.1690228,
   0.2023446,
   0.2848913,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1148,Graph0_fy1148,Graph0_fex1148,Graph0_fey1148);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV] in range: p #minus 125 < p < p #plus 125;#delta' [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01148 = new TH1F("Graph_Graph01148","",100,0,3300);
   Graph_Graph01148->SetMinimum(-0.5094936);
   Graph_Graph01148->SetMaximum(0.8196342);
   Graph_Graph01148->SetDirectory(0);
   Graph_Graph01148->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01148->SetLineColor(ci);
   Graph_Graph01148->GetXaxis()->SetTitle("p [MeV] in range: p #minus 125 < p < p #plus 125");
   Graph_Graph01148->GetXaxis()->SetRange(4,88);
   Graph_Graph01148->GetXaxis()->CenterTitle(true);
   Graph_Graph01148->GetXaxis()->SetLabelFont(42);
   Graph_Graph01148->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01148->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01148->GetXaxis()->SetTitleFont(42);
   Graph_Graph01148->GetYaxis()->SetTitle("#delta' [mrad]");
   Graph_Graph01148->GetYaxis()->CenterTitle(true);
   Graph_Graph01148->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01148->GetYaxis()->SetLabelFont(42);
   Graph_Graph01148->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01148->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01148->GetYaxis()->SetTitleFont(42);
   Graph_Graph01148->GetZaxis()->SetLabelFont(42);
   Graph_Graph01148->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01148->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01148);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
