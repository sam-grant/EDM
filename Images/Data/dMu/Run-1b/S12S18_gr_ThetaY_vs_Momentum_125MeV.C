void S12S18_gr_ThetaY_vs_Momentum_125MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Nov 10 16:12:51 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(520.0312,-3.125,2737.219,3.125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12S18_gr_ThetaY_vs_Momentum_fx1003[24] = {
   62.5,
   187.5,
   312.5,
   437.5,
   562.5,
   687.5,
   812.5,
   937.5,
   1062.5,
   1187.5,
   1312.5,
   1437.5,
   1562.5,
   1687.5,
   1812.5,
   1937.5,
   2062.5,
   2187.5,
   2312.5,
   2437.5,
   2562.5,
   2687.5,
   2812.5,
   2937.5};
   Double_t S12S18_gr_ThetaY_vs_Momentum_fy1003[24] = {
   0,
   0,
   9.470773,
   3.092064,
   2.38741,
   -0.1104127,
   0.1616061,
   0.4136642,
   -0.3655142,
   -0.3793217,
   -0.4963814,
   -0.417161,
   -0.260616,
   -0.1631624,
   -0.1073707,
   -0.0536776,
   -0.07693158,
   -0.05437575,
   -0.02591768,
   -0.05942792,
   0.006586986,
   0.05110488,
   -0.03334497,
   0.08246849};
   Double_t S12S18_gr_ThetaY_vs_Momentum_fex1003[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12S18_gr_ThetaY_vs_Momentum_fey1003[24] = {
   0,
   0,
   1.093452,
   0.09502672,
   0.04646089,
   0.0279583,
   0.01940345,
   0.01595528,
   0.01405999,
   0.01268768,
   0.01191923,
   0.01131094,
   0.01128043,
   0.01093955,
   0.01133375,
   0.0114496,
   0.01198336,
   0.01215429,
   0.01268177,
   0.01367513,
   0.01443935,
   0.01558228,
   0.03837695,
   0.6808935};
   TGraphErrors *gre = new TGraphErrors(24,S12S18_gr_ThetaY_vs_Momentum_fx1003,S12S18_gr_ThetaY_vs_Momentum_fy1003,S12S18_gr_ThetaY_vs_Momentum_fex1003,S12S18_gr_ThetaY_vs_Momentum_fey1003);
   gre->SetName("S12S18_gr_ThetaY_vs_Momentum");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 125 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_gr_ThetaY_vs_Momentum1003 = new TH1F("Graph_S12S18_gr_ThetaY_vs_Momentum1003","",100,0,3225);
   Graph_S12S18_gr_ThetaY_vs_Momentum1003->SetMinimum(-2.5);
   Graph_S12S18_gr_ThetaY_vs_Momentum1003->SetMaximum(2.5);
   Graph_S12S18_gr_ThetaY_vs_Momentum1003->SetDirectory(0);
   Graph_S12S18_gr_ThetaY_vs_Momentum1003->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12S18_gr_ThetaY_vs_Momentum1003->SetLineColor(ci);
   Graph_S12S18_gr_ThetaY_vs_Momentum1003->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12S18_gr_ThetaY_vs_Momentum1003->GetXaxis()->SetRange(24,78);
   Graph_S12S18_gr_ThetaY_vs_Momentum1003->GetXaxis()->CenterTitle(true);
   Graph_S12S18_gr_ThetaY_vs_Momentum1003->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_gr_ThetaY_vs_Momentum1003->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_gr_ThetaY_vs_Momentum1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_gr_ThetaY_vs_Momentum1003->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_gr_ThetaY_vs_Momentum1003->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 125 MeV");
   Graph_S12S18_gr_ThetaY_vs_Momentum1003->GetYaxis()->CenterTitle(true);
   Graph_S12S18_gr_ThetaY_vs_Momentum1003->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_gr_ThetaY_vs_Momentum1003->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_gr_ThetaY_vs_Momentum1003->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_gr_ThetaY_vs_Momentum1003->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_gr_ThetaY_vs_Momentum1003->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_gr_ThetaY_vs_Momentum1003->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_gr_ThetaY_vs_Momentum1003->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_gr_ThetaY_vs_Momentum1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_gr_ThetaY_vs_Momentum1003);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
