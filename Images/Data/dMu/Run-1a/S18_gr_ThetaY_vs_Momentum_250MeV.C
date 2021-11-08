void S18_gr_ThetaY_vs_Momentum_250MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov  4 10:31:15 2021) by ROOT version 6.24/04
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
   2.773833,
   0.6361232,
   0.1849472,
   -0.5153242,
   -0.4824443,
   -0.2801666,
   -0.1457078,
   -0.09682676,
   -0.068201,
   -0.05567786,
   -0.3290725};
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
   0.1553948,
   0.03965306,
   0.02060374,
   0.01574175,
   0.0138303,
   0.01333999,
   0.01380356,
   0.01476323,
   0.01624283,
   0.01839594,
   0.0676508};
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
