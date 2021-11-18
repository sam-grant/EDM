void S18_gr_ThetaY_vs_Momentum_250MeV()
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
   
   Double_t S18_gr_ThetaY_vs_Momentum_fx1020[12] = {
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
   Double_t S18_gr_ThetaY_vs_Momentum_fy1020[12] = {
   0,
   1.986165,
   -0.02585154,
   -0.3663519,
   -0.8914288,
   -0.8086883,
   -0.5247661,
   -0.3568382,
   -0.2703879,
   -0.2281003,
   -0.1577336,
   -0.3747214};
   Double_t S18_gr_ThetaY_vs_Momentum_fex1020[12] = {
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
   Double_t S18_gr_ThetaY_vs_Momentum_fey1020[12] = {
   0,
   0.0796775,
   0.0204227,
   0.01063274,
   0.00813975,
   0.007180681,
   0.006948199,
   0.007235936,
   0.007744389,
   0.008563493,
   0.00974567,
   0.03713724};
   TGraphErrors *gre = new TGraphErrors(12,S18_gr_ThetaY_vs_Momentum_fx1020,S18_gr_ThetaY_vs_Momentum_fy1020,S18_gr_ThetaY_vs_Momentum_fex1020,S18_gr_ThetaY_vs_Momentum_fey1020);
   gre->SetName("S18_gr_ThetaY_vs_Momentum");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_gr_ThetaY_vs_Momentum1020 = new TH1F("Graph_S18_gr_ThetaY_vs_Momentum1020","",100,0,3150);
   Graph_S18_gr_ThetaY_vs_Momentum1020->SetMinimum(-2.5);
   Graph_S18_gr_ThetaY_vs_Momentum1020->SetMaximum(2.5);
   Graph_S18_gr_ThetaY_vs_Momentum1020->SetDirectory(0);
   Graph_S18_gr_ThetaY_vs_Momentum1020->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S18_gr_ThetaY_vs_Momentum1020->SetLineColor(ci);
   Graph_S18_gr_ThetaY_vs_Momentum1020->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_gr_ThetaY_vs_Momentum1020->GetXaxis()->SetRange(24,80);
   Graph_S18_gr_ThetaY_vs_Momentum1020->GetXaxis()->CenterTitle(true);
   Graph_S18_gr_ThetaY_vs_Momentum1020->GetXaxis()->SetLabelFont(42);
   Graph_S18_gr_ThetaY_vs_Momentum1020->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_gr_ThetaY_vs_Momentum1020->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_gr_ThetaY_vs_Momentum1020->GetXaxis()->SetTitleFont(42);
   Graph_S18_gr_ThetaY_vs_Momentum1020->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_S18_gr_ThetaY_vs_Momentum1020->GetYaxis()->CenterTitle(true);
   Graph_S18_gr_ThetaY_vs_Momentum1020->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_gr_ThetaY_vs_Momentum1020->GetYaxis()->SetLabelFont(42);
   Graph_S18_gr_ThetaY_vs_Momentum1020->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_gr_ThetaY_vs_Momentum1020->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_gr_ThetaY_vs_Momentum1020->GetYaxis()->SetTitleFont(42);
   Graph_S18_gr_ThetaY_vs_Momentum1020->GetZaxis()->SetLabelFont(42);
   Graph_S18_gr_ThetaY_vs_Momentum1020->GetZaxis()->SetTitleOffset(1);
   Graph_S18_gr_ThetaY_vs_Momentum1020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_gr_ThetaY_vs_Momentum1020);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
