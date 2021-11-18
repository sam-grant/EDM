void S12_gr_ThetaY_vs_Momentum_125MeV()
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
   7.865925,
   2.880425,
   2.100289,
   -0.2917905,
   -0.1006352,
   0.276917,
   -0.5015831,
   -0.5217377,
   -0.6934057,
   -0.5917972,
   -0.3730454,
   -0.2395112,
   -0.1827572,
   -0.0860574,
   -0.1500784,
   -0.1093826,
   -0.08298579,
   -0.05360478,
   -0.01567724,
   0.1416599,
   0.1322077,
   1.134421};
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
   1.288706,
   0.1134504,
   0.05494573,
   0.03273473,
   0.02244018,
   0.01835738,
   0.0160881,
   0.01454646,
   0.01362863,
   0.01285257,
   0.01287188,
   0.01240965,
   0.0127775,
   0.01286013,
   0.01339897,
   0.01359284,
   0.01417884,
   0.01529479,
   0.01630899,
   0.01768652,
   0.04351559,
   0.7080979};
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
