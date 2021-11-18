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
   
   Double_t S12S18_gr_ThetaY_vs_Momentum_fx1015[24] = {
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
   Double_t S12S18_gr_ThetaY_vs_Momentum_fy1015[24] = {
   0,
   0,
   7.818614,
   1.968363,
   1.595151,
   -0.8069976,
   -0.5083996,
   -0.135639,
   -0.8666736,
   -0.815147,
   -0.8971432,
   -0.7623394,
   -0.5694579,
   -0.4284053,
   -0.3642423,
   -0.2731958,
   -0.2877629,
   -0.228113,
   -0.2141886,
   -0.2069298,
   -0.1139018,
   -0.03886126,
   -0.08977526,
   -0.5681437};
   Double_t S12S18_gr_ThetaY_vs_Momentum_fex1015[24] = {
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
   Double_t S12S18_gr_ThetaY_vs_Momentum_fey1015[24] = {
   0,
   0,
   0.6342524,
   0.05700422,
   0.02767031,
   0.01676069,
   0.01161915,
   0.009570588,
   0.008426739,
   0.007613563,
   0.007177909,
   0.006801741,
   0.006812135,
   0.006603069,
   0.006868391,
   0.006928314,
   0.007260391,
   0.007365807,
   0.007723329,
   0.008338237,
   0.008817557,
   0.009531278,
   0.02386661,
   0.4012622};
   TGraphErrors *gre = new TGraphErrors(24,S12S18_gr_ThetaY_vs_Momentum_fx1015,S12S18_gr_ThetaY_vs_Momentum_fy1015,S12S18_gr_ThetaY_vs_Momentum_fex1015,S12S18_gr_ThetaY_vs_Momentum_fey1015);
   gre->SetName("S12S18_gr_ThetaY_vs_Momentum");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 125 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_gr_ThetaY_vs_Momentum1015 = new TH1F("Graph_S12S18_gr_ThetaY_vs_Momentum1015","",100,0,3225);
   Graph_S12S18_gr_ThetaY_vs_Momentum1015->SetMinimum(-2.5);
   Graph_S12S18_gr_ThetaY_vs_Momentum1015->SetMaximum(2.5);
   Graph_S12S18_gr_ThetaY_vs_Momentum1015->SetDirectory(0);
   Graph_S12S18_gr_ThetaY_vs_Momentum1015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12S18_gr_ThetaY_vs_Momentum1015->SetLineColor(ci);
   Graph_S12S18_gr_ThetaY_vs_Momentum1015->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12S18_gr_ThetaY_vs_Momentum1015->GetXaxis()->SetRange(24,78);
   Graph_S12S18_gr_ThetaY_vs_Momentum1015->GetXaxis()->CenterTitle(true);
   Graph_S12S18_gr_ThetaY_vs_Momentum1015->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_gr_ThetaY_vs_Momentum1015->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_gr_ThetaY_vs_Momentum1015->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_gr_ThetaY_vs_Momentum1015->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_gr_ThetaY_vs_Momentum1015->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 125 MeV");
   Graph_S12S18_gr_ThetaY_vs_Momentum1015->GetYaxis()->CenterTitle(true);
   Graph_S12S18_gr_ThetaY_vs_Momentum1015->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_gr_ThetaY_vs_Momentum1015->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_gr_ThetaY_vs_Momentum1015->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_gr_ThetaY_vs_Momentum1015->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_gr_ThetaY_vs_Momentum1015->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_gr_ThetaY_vs_Momentum1015->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_gr_ThetaY_vs_Momentum1015->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_gr_ThetaY_vs_Momentum1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_gr_ThetaY_vs_Momentum1015);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
