void S18_gr_ThetaY_vs_Momentum_250MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Nov 10 16:12:51 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(500.0625,-3.125,2744.438,3.125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S18_gr_ThetaY_vs_Momentum_fx1008[12] = {
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
   Double_t S18_gr_ThetaY_vs_Momentum_fy1008[12] = {
   0,
   3.049274,
   0.6588813,
   0.2393778,
   -0.4249046,
   -0.4229833,
   -0.2491606,
   -0.1214698,
   -0.06861854,
   -0.06453573,
   -0.03235473,
   -0.2467348};
   Double_t S18_gr_ThetaY_vs_Momentum_fex1008[12] = {
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
   Double_t S18_gr_ThetaY_vs_Momentum_fey1008[12] = {
   0,
   0.1310469,
   0.03371677,
   0.01755773,
   0.01345676,
   0.01182989,
   0.01139206,
   0.01181526,
   0.01265815,
   0.01389065,
   0.01571548,
   0.05787894};
   TGraphErrors *gre = new TGraphErrors(12,S18_gr_ThetaY_vs_Momentum_fx1008,S18_gr_ThetaY_vs_Momentum_fy1008,S18_gr_ThetaY_vs_Momentum_fex1008,S18_gr_ThetaY_vs_Momentum_fey1008);
   gre->SetName("S18_gr_ThetaY_vs_Momentum");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_gr_ThetaY_vs_Momentum1008 = new TH1F("Graph_S18_gr_ThetaY_vs_Momentum1008","",100,0,3150);
   Graph_S18_gr_ThetaY_vs_Momentum1008->SetMinimum(-2.5);
   Graph_S18_gr_ThetaY_vs_Momentum1008->SetMaximum(2.5);
   Graph_S18_gr_ThetaY_vs_Momentum1008->SetDirectory(0);
   Graph_S18_gr_ThetaY_vs_Momentum1008->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S18_gr_ThetaY_vs_Momentum1008->SetLineColor(ci);
   Graph_S18_gr_ThetaY_vs_Momentum1008->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_gr_ThetaY_vs_Momentum1008->GetXaxis()->SetRange(24,80);
   Graph_S18_gr_ThetaY_vs_Momentum1008->GetXaxis()->CenterTitle(true);
   Graph_S18_gr_ThetaY_vs_Momentum1008->GetXaxis()->SetLabelFont(42);
   Graph_S18_gr_ThetaY_vs_Momentum1008->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_gr_ThetaY_vs_Momentum1008->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_gr_ThetaY_vs_Momentum1008->GetXaxis()->SetTitleFont(42);
   Graph_S18_gr_ThetaY_vs_Momentum1008->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_S18_gr_ThetaY_vs_Momentum1008->GetYaxis()->CenterTitle(true);
   Graph_S18_gr_ThetaY_vs_Momentum1008->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_gr_ThetaY_vs_Momentum1008->GetYaxis()->SetLabelFont(42);
   Graph_S18_gr_ThetaY_vs_Momentum1008->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_gr_ThetaY_vs_Momentum1008->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_gr_ThetaY_vs_Momentum1008->GetYaxis()->SetTitleFont(42);
   Graph_S18_gr_ThetaY_vs_Momentum1008->GetZaxis()->SetLabelFont(42);
   Graph_S18_gr_ThetaY_vs_Momentum1008->GetZaxis()->SetTitleOffset(1);
   Graph_S18_gr_ThetaY_vs_Momentum1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_gr_ThetaY_vs_Momentum1008);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
