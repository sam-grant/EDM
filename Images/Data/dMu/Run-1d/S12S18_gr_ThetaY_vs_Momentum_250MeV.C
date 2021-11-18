void S12S18_gr_ThetaY_vs_Momentum_250MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Nov 10 16:13:16 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(500.0625,-3.125,2744.438,3.125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12S18_gr_ThetaY_vs_Momentum_fx1021[12] = {
   125,
   375,
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t S12S18_gr_ThetaY_vs_Momentum_fy1021[12] = {
   0,
   2.027659,
   -0.03122951,
   -0.3015978,
   -0.840135,
   -0.8307809,
   -0.5030884,
   -0.3231137,
   -0.2610507,
   -0.2112397,
   -0.08367844,
   -0.09156682};
   Double_t S12S18_gr_ThetaY_vs_Momentum_fex1021[12] = {
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
   Double_t S12S18_gr_ThetaY_vs_Momentum_fey1021[12] = {
   0,
   0.05680139,
   0.01445916,
   0.00741331,
   0.005663664,
   0.004949082,
   0.004760562,
   0.004896564,
   0.005191649,
   0.005701165,
   0.006516978,
   0.02382507};
   TGraphErrors *gre = new TGraphErrors(12,S12S18_gr_ThetaY_vs_Momentum_fx1021,S12S18_gr_ThetaY_vs_Momentum_fy1021,S12S18_gr_ThetaY_vs_Momentum_fex1021,S12S18_gr_ThetaY_vs_Momentum_fey1021);
   gre->SetName("S12S18_gr_ThetaY_vs_Momentum");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_gr_ThetaY_vs_Momentum1021 = new TH1F("Graph_S12S18_gr_ThetaY_vs_Momentum1021","",100,0,3150);
   Graph_S12S18_gr_ThetaY_vs_Momentum1021->SetMinimum(-2.5);
   Graph_S12S18_gr_ThetaY_vs_Momentum1021->SetMaximum(2.5);
   Graph_S12S18_gr_ThetaY_vs_Momentum1021->SetDirectory(0);
   Graph_S12S18_gr_ThetaY_vs_Momentum1021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12S18_gr_ThetaY_vs_Momentum1021->SetLineColor(ci);
   Graph_S12S18_gr_ThetaY_vs_Momentum1021->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12S18_gr_ThetaY_vs_Momentum1021->GetXaxis()->SetRange(24,80);
   Graph_S12S18_gr_ThetaY_vs_Momentum1021->GetXaxis()->CenterTitle(true);
   Graph_S12S18_gr_ThetaY_vs_Momentum1021->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_gr_ThetaY_vs_Momentum1021->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_gr_ThetaY_vs_Momentum1021->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_gr_ThetaY_vs_Momentum1021->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_gr_ThetaY_vs_Momentum1021->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_S12S18_gr_ThetaY_vs_Momentum1021->GetYaxis()->CenterTitle(true);
   Graph_S12S18_gr_ThetaY_vs_Momentum1021->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_gr_ThetaY_vs_Momentum1021->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_gr_ThetaY_vs_Momentum1021->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_gr_ThetaY_vs_Momentum1021->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_gr_ThetaY_vs_Momentum1021->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_gr_ThetaY_vs_Momentum1021->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_gr_ThetaY_vs_Momentum1021->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_gr_ThetaY_vs_Momentum1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_gr_ThetaY_vs_Momentum1021);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
