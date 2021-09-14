void S0S12S18_full_A_vs_p_trackReco_AAR_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Sep 13 15:26:48 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-251.625,-0.8158896,3254.625,0.9891904);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1140[12] = {
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
   Double_t Graph0_fy1140[12] = {
   0.08665039,
   0.09472849,
   0.1589652,
   0.185318,
   0.1650691,
   0.1740059,
   0.1684732,
   0.1625283,
   0.1211768,
   0.09276316,
   0.09874818,
   0.05578108};
   Double_t Graph0_fex1140[12] = {
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
   Double_t Graph0_fey1140[12] = {
   0.6016933,
   0.04066113,
   0.02025597,
   0.01662276,
   0.01500022,
   0.01382728,
   0.01306147,
   0.01281532,
   0.01299131,
   0.01367691,
   0.01396282,
   0.01671999};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1140,Graph0_fy1140,Graph0_fex1140,Graph0_fey1140);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01140 = new TH1F("Graph_Graph01140","S0S12S18",100,0,3300);
   Graph_Graph01140->SetMinimum(-0.6353816);
   Graph_Graph01140->SetMaximum(0.8086824);
   Graph_Graph01140->SetDirectory(0);
   Graph_Graph01140->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01140->SetLineColor(ci);
   Graph_Graph01140->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125 MeV");
   Graph_Graph01140->GetXaxis()->SetRange(4,88);
   Graph_Graph01140->GetXaxis()->CenterTitle(true);
   Graph_Graph01140->GetXaxis()->SetLabelFont(42);
   Graph_Graph01140->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01140->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01140->GetXaxis()->SetTitleFont(42);
   Graph_Graph01140->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01140->GetYaxis()->CenterTitle(true);
   Graph_Graph01140->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01140->GetYaxis()->SetLabelFont(42);
   Graph_Graph01140->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01140->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01140->GetYaxis()->SetTitleFont(42);
   Graph_Graph01140->GetZaxis()->SetLabelFont(42);
   Graph_Graph01140->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01140->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01140);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
