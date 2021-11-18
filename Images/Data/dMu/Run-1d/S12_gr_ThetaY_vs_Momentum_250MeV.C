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
   
   Double_t S12_gr_ThetaY_vs_Momentum_fx1019[12] = {
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
   Double_t S12_gr_ThetaY_vs_Momentum_fy1019[12] = {
   0,
   2.069536,
   -0.03658911,
   -0.2409712,
   -0.7924915,
   -0.8506415,
   -0.4841469,
   -0.2949412,
   -0.2534465,
   -0.1980212,
   -0.02510931,
   0.105196};
   Double_t S12_gr_ThetaY_vs_Momentum_fex1019[12] = {
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
   Double_t S12_gr_ThetaY_vs_Momentum_fey1019[12] = {
   0,
   0.08098593,
   0.02047372,
   0.01034097,
   0.007885288,
   0.006830473,
   0.006535377,
   0.006650371,
   0.006996612,
   0.007640124,
   0.008763008,
   0.03100099};
   TGraphErrors *gre = new TGraphErrors(12,S12_gr_ThetaY_vs_Momentum_fx1019,S12_gr_ThetaY_vs_Momentum_fy1019,S12_gr_ThetaY_vs_Momentum_fex1019,S12_gr_ThetaY_vs_Momentum_fey1019);
   gre->SetName("S12_gr_ThetaY_vs_Momentum");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_gr_ThetaY_vs_Momentum1019 = new TH1F("Graph_S12_gr_ThetaY_vs_Momentum1019","",100,0,3150);
   Graph_S12_gr_ThetaY_vs_Momentum1019->SetMinimum(-2.5);
   Graph_S12_gr_ThetaY_vs_Momentum1019->SetMaximum(2.5);
   Graph_S12_gr_ThetaY_vs_Momentum1019->SetDirectory(0);
   Graph_S12_gr_ThetaY_vs_Momentum1019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12_gr_ThetaY_vs_Momentum1019->SetLineColor(ci);
   Graph_S12_gr_ThetaY_vs_Momentum1019->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_gr_ThetaY_vs_Momentum1019->GetXaxis()->SetRange(24,80);
   Graph_S12_gr_ThetaY_vs_Momentum1019->GetXaxis()->CenterTitle(true);
   Graph_S12_gr_ThetaY_vs_Momentum1019->GetXaxis()->SetLabelFont(42);
   Graph_S12_gr_ThetaY_vs_Momentum1019->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_gr_ThetaY_vs_Momentum1019->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_gr_ThetaY_vs_Momentum1019->GetXaxis()->SetTitleFont(42);
   Graph_S12_gr_ThetaY_vs_Momentum1019->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_S12_gr_ThetaY_vs_Momentum1019->GetYaxis()->CenterTitle(true);
   Graph_S12_gr_ThetaY_vs_Momentum1019->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_gr_ThetaY_vs_Momentum1019->GetYaxis()->SetLabelFont(42);
   Graph_S12_gr_ThetaY_vs_Momentum1019->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_gr_ThetaY_vs_Momentum1019->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_gr_ThetaY_vs_Momentum1019->GetYaxis()->SetTitleFont(42);
   Graph_S12_gr_ThetaY_vs_Momentum1019->GetZaxis()->SetLabelFont(42);
   Graph_S12_gr_ThetaY_vs_Momentum1019->GetZaxis()->SetTitleOffset(1);
   Graph_S12_gr_ThetaY_vs_Momentum1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_gr_ThetaY_vs_Momentum1019);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
