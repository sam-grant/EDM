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
   
   Double_t S12_gr_ThetaY_vs_Momentum_fx1013[24] = {
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
   Double_t S12_gr_ThetaY_vs_Momentum_fy1013[24] = {
   0,
   0,
   8.19567,
   2.008229,
   1.532943,
   -0.7626716,
   -0.4542418,
   -0.0708361,
   -0.7996347,
   -0.785792,
   -0.9032438,
   -0.7967818,
   -0.5683084,
   -0.3903896,
   -0.3294255,
   -0.2532162,
   -0.2839071,
   -0.2161442,
   -0.20877,
   -0.1824227,
   -0.07503558,
   0.04771933,
   0.1064728,
   -0.2328277};
   Double_t S12_gr_ThetaY_vs_Momentum_fex1013[24] = {
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
   Double_t S12_gr_ThetaY_vs_Momentum_fey1013[24] = {
   0,
   0,
   0.9120609,
   0.08126999,
   0.03964929,
   0.02363417,
   0.0162384,
   0.01333275,
   0.01174144,
   0.01059412,
   0.009927119,
   0.009369696,
   0.009374894,
   0.009044164,
   0.009343249,
   0.009391406,
   0.009804531,
   0.009904345,
   0.01036089,
   0.01116441,
   0.0118936,
   0.0127738,
   0.03106099,
   0.4976815};
   TGraphErrors *gre = new TGraphErrors(24,S12_gr_ThetaY_vs_Momentum_fx1013,S12_gr_ThetaY_vs_Momentum_fy1013,S12_gr_ThetaY_vs_Momentum_fex1013,S12_gr_ThetaY_vs_Momentum_fey1013);
   gre->SetName("S12_gr_ThetaY_vs_Momentum");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 125 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_gr_ThetaY_vs_Momentum1013 = new TH1F("Graph_S12_gr_ThetaY_vs_Momentum1013","",100,0,3225);
   Graph_S12_gr_ThetaY_vs_Momentum1013->SetMinimum(-2.5);
   Graph_S12_gr_ThetaY_vs_Momentum1013->SetMaximum(2.5);
   Graph_S12_gr_ThetaY_vs_Momentum1013->SetDirectory(0);
   Graph_S12_gr_ThetaY_vs_Momentum1013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12_gr_ThetaY_vs_Momentum1013->SetLineColor(ci);
   Graph_S12_gr_ThetaY_vs_Momentum1013->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_gr_ThetaY_vs_Momentum1013->GetXaxis()->SetRange(24,78);
   Graph_S12_gr_ThetaY_vs_Momentum1013->GetXaxis()->CenterTitle(true);
   Graph_S12_gr_ThetaY_vs_Momentum1013->GetXaxis()->SetLabelFont(42);
   Graph_S12_gr_ThetaY_vs_Momentum1013->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_gr_ThetaY_vs_Momentum1013->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_gr_ThetaY_vs_Momentum1013->GetXaxis()->SetTitleFont(42);
   Graph_S12_gr_ThetaY_vs_Momentum1013->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 125 MeV");
   Graph_S12_gr_ThetaY_vs_Momentum1013->GetYaxis()->CenterTitle(true);
   Graph_S12_gr_ThetaY_vs_Momentum1013->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_gr_ThetaY_vs_Momentum1013->GetYaxis()->SetLabelFont(42);
   Graph_S12_gr_ThetaY_vs_Momentum1013->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_gr_ThetaY_vs_Momentum1013->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_gr_ThetaY_vs_Momentum1013->GetYaxis()->SetTitleFont(42);
   Graph_S12_gr_ThetaY_vs_Momentum1013->GetZaxis()->SetLabelFont(42);
   Graph_S12_gr_ThetaY_vs_Momentum1013->GetZaxis()->SetTitleOffset(1);
   Graph_S12_gr_ThetaY_vs_Momentum1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_gr_ThetaY_vs_Momentum1013);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
