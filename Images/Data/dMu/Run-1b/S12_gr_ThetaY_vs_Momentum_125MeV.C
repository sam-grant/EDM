void S12_gr_ThetaY_vs_Momentum_125MeV()
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
   8.623022,
   3.218364,
   2.434419,
   -0.06181836,
   0.2096355,
   0.4833259,
   -0.2968332,
   -0.3463154,
   -0.5113812,
   -0.4667923,
   -0.2353529,
   -0.1258611,
   -0.07089369,
   -0.02424162,
   -0.0699209,
   -0.05955399,
   -0.02130844,
   -0.01567843,
   0.04722133,
   0.1095246,
   0.1341536,
   0.09926762};
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
   1.623806,
   0.1374846,
   0.0673065,
   0.03995259,
   0.02741507,
   0.02243377,
   0.0197593,
   0.01779022,
   0.01662104,
   0.01570063,
   0.01567335,
   0.01511162,
   0.01558254,
   0.01565246,
   0.0162816,
   0.01650393,
   0.01717196,
   0.01849099,
   0.01967885,
   0.02120349,
   0.05112808,
   0.9649046};
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
