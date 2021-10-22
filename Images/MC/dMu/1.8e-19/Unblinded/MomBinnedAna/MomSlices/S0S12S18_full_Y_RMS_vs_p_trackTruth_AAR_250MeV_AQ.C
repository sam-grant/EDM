void S0S12S18_full_Y_RMS_vs_p_trackTruth_AAR_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Sep 27 11:33:21 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-251.625,12.14438,3254.625,13.28066);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1142[12] = {
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
   Double_t Graph0_fy1142[12] = {
   12.73692,
   12.82506,
   12.68281,
   12.57162,
   12.48695,
   12.45585,
   12.4393,
   12.40479,
   12.37995,
   12.3479,
   12.3495,
   12.37539};
   Double_t Graph0_fex1142[12] = {
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
   Double_t Graph0_fey1142[12] = {
   0.3543507,
   0.009407985,
   0.005583313,
   0.005518207,
   0.005872531,
   0.006330454,
   0.006968529,
   0.007956103,
   0.009473493,
   0.011951,
   0.01574167,
   0.02577513};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1142,Graph0_fy1142,Graph0_fex1142,Graph0_fey1142);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125 MeV;#sigma_{y} [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01142 = new TH1F("Graph_Graph01142","",100,0,3300);
   Graph_Graph01142->SetMinimum(12.258);
   Graph_Graph01142->SetMaximum(13.16703);
   Graph_Graph01142->SetDirectory(0);
   Graph_Graph01142->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01142->SetLineColor(ci);
   Graph_Graph01142->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125 MeV");
   Graph_Graph01142->GetXaxis()->SetRange(4,88);
   Graph_Graph01142->GetXaxis()->CenterTitle(true);
   Graph_Graph01142->GetXaxis()->SetLabelFont(42);
   Graph_Graph01142->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01142->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01142->GetXaxis()->SetTitleFont(42);
   Graph_Graph01142->GetYaxis()->SetTitle("#sigma_{y} [mm]");
   Graph_Graph01142->GetYaxis()->CenterTitle(true);
   Graph_Graph01142->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01142->GetYaxis()->SetLabelFont(42);
   Graph_Graph01142->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01142->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01142->GetYaxis()->SetTitleFont(42);
   Graph_Graph01142->GetZaxis()->SetLabelFont(42);
   Graph_Graph01142->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01142->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01142);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
