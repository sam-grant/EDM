void S0S12S18_full_thetaYMaxDiff_vs_p_trackReco_AAR_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Sep 13 15:26:48 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-251.625,-123.5505,3254.625,1281.408);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1146[12] = {
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
   Double_t Graph0_fy1146[12] = {
   994.8998,
   1044.216,
   1042.072,
   885.5466,
   501.7383,
   308.762,
   388.0967,
   216.5623,
   171.5345,
   156.5252,
   113.6416,
   383.8083};
   Double_t Graph0_fex1146[12] = {
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
   Double_t Graph0_fey1146[12] = {
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329,
   3.032329};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1146,Graph0_fy1146,Graph0_fex1146,Graph0_fey1146);
   gre->SetName("Graph0");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 125 < p < p #plus 125 MeV;(#Delta#theta_{y})_{MAX} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01146 = new TH1F("Graph_Graph01146","",100,0,3300);
   Graph_Graph01146->SetMinimum(16.94534);
   Graph_Graph01146->SetMaximum(1140.912);
   Graph_Graph01146->SetDirectory(0);
   Graph_Graph01146->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01146->SetLineColor(ci);
   Graph_Graph01146->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 125 < p < p #plus 125 MeV");
   Graph_Graph01146->GetXaxis()->SetRange(4,88);
   Graph_Graph01146->GetXaxis()->CenterTitle(true);
   Graph_Graph01146->GetXaxis()->SetLabelFont(42);
   Graph_Graph01146->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01146->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01146->GetXaxis()->SetTitleFont(42);
   Graph_Graph01146->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad]");
   Graph_Graph01146->GetYaxis()->CenterTitle(true);
   Graph_Graph01146->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01146->GetYaxis()->SetLabelFont(42);
   Graph_Graph01146->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01146->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01146->GetYaxis()->SetTitleFont(42);
   Graph_Graph01146->GetZaxis()->SetLabelFont(42);
   Graph_Graph01146->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01146->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01146);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
