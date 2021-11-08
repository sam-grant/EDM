void S18_gr_ThetaY_vs_Momentum_125MeV()
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
   8.803111,
   2.711936,
   2.316161,
   -0.1790197,
   0.06168617,
   0.2847191,
   -0.5243242,
   -0.5068458,
   -0.5364623,
   -0.4263998,
   -0.338658,
   -0.2135922,
   -0.1740428,
   -0.1112897,
   -0.1252894,
   -0.06168246,
   -0.04390712,
   -0.1036323,
   -0.06111527,
   -0.04755503,
   -0.3341897,
   0.7504632};
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
   1.714614,
   0.15597,
   0.07536161,
   0.04608012,
   0.03223544,
   0.02662742,
   0.0234208,
   0.02116132,
   0.02001694,
   0.01904639,
   0.01904583,
   0.01853754,
   0.01933662,
   0.01956704,
   0.02061325,
   0.02099171,
   0.02203333,
   0.02370505,
   0.02488706,
   0.02687931,
   0.06778841,
   1.029207};
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
