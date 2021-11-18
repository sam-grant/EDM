void S12S18_gr_ThetaY_vs_Momentum_125MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Nov 10 16:13:16 2021) by ROOT version 6.24/04
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
   8.02796,
   2.785223,
   2.094851,
   -0.3622345,
   -0.1488906,
   0.1892804,
   -0.5803825,
   -0.54895,
   -0.6635197,
   -0.5463995,
   -0.3734763,
   -0.2651152,
   -0.2054723,
   -0.1218455,
   -0.162591,
   -0.1291482,
   -0.0885482,
   -0.09455084,
   -0.05256841,
   0.04017469,
   -0.03509446,
   0.6798622};
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
   0.864259,
   0.07864082,
   0.0380291,
   0.02301295,
   0.01593979,
   0.0131036,
   0.01150666,
   0.01040453,
   0.00980131,
   0.009290959,
   0.009307906,
   0.00901938,
   0.009352258,
   0.009445557,
   0.009878034,
   0.0100542,
   0.01051301,
   0.01133902,
   0.01201809,
   0.01311192,
   0.03290593,
   0.5268014};
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
