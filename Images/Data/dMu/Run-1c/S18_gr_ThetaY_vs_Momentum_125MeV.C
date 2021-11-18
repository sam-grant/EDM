void S18_gr_ThetaY_vs_Momentum_125MeV()
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
   
   Double_t S18_gr_ThetaY_vs_Momentum_fx1002[24] = {
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
   Double_t S18_gr_ThetaY_vs_Momentum_fy1002[24] = {
   0,
   0,
   8.165148,
   2.695391,
   2.089776,
   -0.4318506,
   -0.1987046,
   0.09708573,
   -0.6634069,
   -0.5777684,
   -0.6311672,
   -0.4964418,
   -0.3739544,
   -0.2940918,
   -0.2318526,
   -0.1639195,
   -0.1775286,
   -0.152947,
   -0.09540266,
   -0.1456224,
   -0.09707111,
   -0.0859101,
   -0.2603554,
   0.1786817};
   Double_t S18_gr_ThetaY_vs_Momentum_fex1002[24] = {
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
   Double_t S18_gr_ThetaY_vs_Momentum_fey1002[24] = {
   0,
   0,
   1.164756,
   0.1090949,
   0.05268501,
   0.03235767,
   0.02264455,
   0.01870902,
   0.01646364,
   0.01488742,
   0.01410551,
   0.01344607,
   0.01347503,
   0.01313114,
   0.01372528,
   0.01391837,
   0.01462,
   0.01493986,
   0.01566731,
   0.016893,
   0.01777622,
   0.01952624,
   0.050197,
   0.7778443};
   TGraphErrors *gre = new TGraphErrors(24,S18_gr_ThetaY_vs_Momentum_fx1002,S18_gr_ThetaY_vs_Momentum_fy1002,S18_gr_ThetaY_vs_Momentum_fex1002,S18_gr_ThetaY_vs_Momentum_fey1002);
   gre->SetName("S18_gr_ThetaY_vs_Momentum");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 125 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_gr_ThetaY_vs_Momentum1002 = new TH1F("Graph_S18_gr_ThetaY_vs_Momentum1002","",100,0,3225);
   Graph_S18_gr_ThetaY_vs_Momentum1002->SetMinimum(-2.5);
   Graph_S18_gr_ThetaY_vs_Momentum1002->SetMaximum(2.5);
   Graph_S18_gr_ThetaY_vs_Momentum1002->SetDirectory(0);
   Graph_S18_gr_ThetaY_vs_Momentum1002->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S18_gr_ThetaY_vs_Momentum1002->SetLineColor(ci);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetXaxis()->SetRange(24,78);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetXaxis()->CenterTitle(true);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetXaxis()->SetLabelFont(42);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetXaxis()->SetTitleFont(42);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 125 MeV");
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetYaxis()->CenterTitle(true);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetYaxis()->SetLabelFont(42);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetYaxis()->SetTitleFont(42);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetZaxis()->SetLabelFont(42);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetZaxis()->SetTitleOffset(1);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_gr_ThetaY_vs_Momentum1002);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
