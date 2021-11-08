void S12_gr_ThetaY_vs_Momentum_125MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov  4 10:31:15 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(520.0312,-3.125,2737.219,3.125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_gr_ThetaY_vs_Momentum_fx1001[24] = {
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
   Double_t S12_gr_ThetaY_vs_Momentum_fy1001[24] = {
   0,
   0,
   11.46904,
   3.103462,
   2.402345,
   -0.1422934,
   0.1410364,
   0.4779825,
   -0.3373425,
   -0.3819512,
   -0.5550679,
   -0.4924053,
   -0.3087816,
   -0.1521733,
   -0.0679572,
   -0.0607373,
   -0.09005761,
   -0.06821106,
   -0.06697914,
   -0.0157791,
   0.01927923,
   0.04629928,
   0.1964576,
   -0.91443};
   Double_t S12_gr_ThetaY_vs_Momentum_fex1001[24] = {
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
   Double_t S12_gr_ThetaY_vs_Momentum_fey1001[24] = {
   0,
   0,
   1.83092,
   0.1637997,
   0.07915589,
   0.04694017,
   0.03222398,
   0.02635989,
   0.02316722,
   0.02086245,
   0.01947572,
   0.01843334,
   0.01838618,
   0.01770005,
   0.01824572,
   0.01830385,
   0.01907162,
   0.01924792,
   0.02012873,
   0.02167873,
   0.02294431,
   0.02491223,
   0.06137148,
   1.229156};
   TGraphErrors *gre = new TGraphErrors(24,S12_gr_ThetaY_vs_Momentum_fx1001,S12_gr_ThetaY_vs_Momentum_fy1001,S12_gr_ThetaY_vs_Momentum_fex1001,S12_gr_ThetaY_vs_Momentum_fey1001);
   gre->SetName("S12_gr_ThetaY_vs_Momentum");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 125 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_gr_ThetaY_vs_Momentum1001 = new TH1F("Graph_S12_gr_ThetaY_vs_Momentum1001","",100,0,3225);
   Graph_S12_gr_ThetaY_vs_Momentum1001->SetMinimum(-2.5);
   Graph_S12_gr_ThetaY_vs_Momentum1001->SetMaximum(2.5);
   Graph_S12_gr_ThetaY_vs_Momentum1001->SetDirectory(0);
   Graph_S12_gr_ThetaY_vs_Momentum1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12_gr_ThetaY_vs_Momentum1001->SetLineColor(ci);
   Graph_S12_gr_ThetaY_vs_Momentum1001->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_gr_ThetaY_vs_Momentum1001->GetXaxis()->SetRange(24,78);
   Graph_S12_gr_ThetaY_vs_Momentum1001->GetXaxis()->CenterTitle(true);
   Graph_S12_gr_ThetaY_vs_Momentum1001->GetXaxis()->SetLabelFont(42);
   Graph_S12_gr_ThetaY_vs_Momentum1001->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_gr_ThetaY_vs_Momentum1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_gr_ThetaY_vs_Momentum1001->GetXaxis()->SetTitleFont(42);
   Graph_S12_gr_ThetaY_vs_Momentum1001->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 125 MeV");
   Graph_S12_gr_ThetaY_vs_Momentum1001->GetYaxis()->CenterTitle(true);
   Graph_S12_gr_ThetaY_vs_Momentum1001->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_gr_ThetaY_vs_Momentum1001->GetYaxis()->SetLabelFont(42);
   Graph_S12_gr_ThetaY_vs_Momentum1001->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_gr_ThetaY_vs_Momentum1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_gr_ThetaY_vs_Momentum1001->GetYaxis()->SetTitleFont(42);
   Graph_S12_gr_ThetaY_vs_Momentum1001->GetZaxis()->SetLabelFont(42);
   Graph_S12_gr_ThetaY_vs_Momentum1001->GetZaxis()->SetTitleOffset(1);
   Graph_S12_gr_ThetaY_vs_Momentum1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_gr_ThetaY_vs_Momentum1001);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
