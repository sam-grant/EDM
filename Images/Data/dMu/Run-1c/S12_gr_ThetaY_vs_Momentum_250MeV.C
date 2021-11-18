void S12_gr_ThetaY_vs_Momentum_250MeV()
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
   
   Double_t S12_gr_ThetaY_vs_Momentum_fx1007[12] = {
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
   Double_t S12_gr_ThetaY_vs_Momentum_fy1007[12] = {
   0,
   2.930075,
   0.4654179,
   0.1098701,
   -0.5119697,
   -0.6432125,
   -0.3098986,
   -0.1388791,
   -0.1318355,
   -0.07097823,
   0.04765302,
   0.1354555};
   Double_t S12_gr_ThetaY_vs_Momentum_fex1007[12] = {
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
   Double_t S12_gr_ThetaY_vs_Momentum_fey1007[12] = {
   0,
   0.1130654,
   0.02836733,
   0.01426027,
   0.01081632,
   0.009373866,
   0.008970796,
   0.009097714,
   0.009580134,
   0.01045785,
   0.01206894,
   0.04343804};
   TGraphErrors *gre = new TGraphErrors(12,S12_gr_ThetaY_vs_Momentum_fx1007,S12_gr_ThetaY_vs_Momentum_fy1007,S12_gr_ThetaY_vs_Momentum_fex1007,S12_gr_ThetaY_vs_Momentum_fey1007);
   gre->SetName("S12_gr_ThetaY_vs_Momentum");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_gr_ThetaY_vs_Momentum1007 = new TH1F("Graph_S12_gr_ThetaY_vs_Momentum1007","",100,0,3150);
   Graph_S12_gr_ThetaY_vs_Momentum1007->SetMinimum(-2.5);
   Graph_S12_gr_ThetaY_vs_Momentum1007->SetMaximum(2.5);
   Graph_S12_gr_ThetaY_vs_Momentum1007->SetDirectory(0);
   Graph_S12_gr_ThetaY_vs_Momentum1007->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12_gr_ThetaY_vs_Momentum1007->SetLineColor(ci);
   Graph_S12_gr_ThetaY_vs_Momentum1007->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_gr_ThetaY_vs_Momentum1007->GetXaxis()->SetRange(24,80);
   Graph_S12_gr_ThetaY_vs_Momentum1007->GetXaxis()->CenterTitle(true);
   Graph_S12_gr_ThetaY_vs_Momentum1007->GetXaxis()->SetLabelFont(42);
   Graph_S12_gr_ThetaY_vs_Momentum1007->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_gr_ThetaY_vs_Momentum1007->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_gr_ThetaY_vs_Momentum1007->GetXaxis()->SetTitleFont(42);
   Graph_S12_gr_ThetaY_vs_Momentum1007->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_S12_gr_ThetaY_vs_Momentum1007->GetYaxis()->CenterTitle(true);
   Graph_S12_gr_ThetaY_vs_Momentum1007->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_gr_ThetaY_vs_Momentum1007->GetYaxis()->SetLabelFont(42);
   Graph_S12_gr_ThetaY_vs_Momentum1007->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_gr_ThetaY_vs_Momentum1007->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_gr_ThetaY_vs_Momentum1007->GetYaxis()->SetTitleFont(42);
   Graph_S12_gr_ThetaY_vs_Momentum1007->GetZaxis()->SetLabelFont(42);
   Graph_S12_gr_ThetaY_vs_Momentum1007->GetZaxis()->SetTitleOffset(1);
   Graph_S12_gr_ThetaY_vs_Momentum1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_gr_ThetaY_vs_Momentum1007);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
