void S12S18_gr_ThetaY_vs_Momentum_125MeV()
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
   10.06269,
   2.900318,
   2.357459,
   -0.1609143,
   0.10162,
   0.3829038,
   -0.4291185,
   -0.4430476,
   -0.5460822,
   -0.4607091,
   -0.3230719,
   -0.1811928,
   -0.1174922,
   -0.08421394,
   -0.1062774,
   -0.06521793,
   -0.0565274,
   -0.05526679,
   -0.01743721,
   0.003626473,
   -0.03581346,
   0.07657788};
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
   1.252488,
   0.1129634,
   0.05458238,
   0.03288376,
   0.02279032,
   0.01873371,
   0.01647132,
   0.01485704,
   0.01395914,
   0.01324612,
   0.0132285,
   0.0128022,
   0.01327117,
   0.01336723,
   0.01399903,
   0.01418691,
   0.01486109,
   0.01599913,
   0.01686975,
   0.01827416,
   0.04557412,
   0.7992054};
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
