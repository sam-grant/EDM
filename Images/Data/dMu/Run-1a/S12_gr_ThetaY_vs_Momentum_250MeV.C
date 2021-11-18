void S12_gr_ThetaY_vs_Momentum_250MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Nov 10 16:08:44 2021) by ROOT version 6.24/04
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
   3.185593,
   0.6583846,
   0.3288422,
   -0.3603857,
   -0.524141,
   -0.2346264,
   -0.06467899,
   -0.08024025,
   -0.04597652,
   0.03016701,
   0.1936771};
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
   0.1632401,
   0.04073225,
   0.02047761,
   0.01554274,
   0.0134186,
   0.0128045,
   0.01297293,
   0.01360485,
   0.01483317,
   0.01698323,
   0.06129882};
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
