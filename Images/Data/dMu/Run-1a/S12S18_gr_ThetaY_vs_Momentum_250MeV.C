void S12S18_gr_ThetaY_vs_Momentum_250MeV()
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
   
   Double_t S12S18_gr_ThetaY_vs_Momentum_fx1009[12] = {
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
   Double_t S12S18_gr_ThetaY_vs_Momentum_fy1009[12] = {
   0,
   2.971916,
   0.6469991,
   0.2577453,
   -0.4363025,
   -0.5040598,
   -0.256284,
   -0.1024212,
   -0.08786204,
   -0.05601225,
   -0.008968482,
   -0.03542305};
   Double_t S12S18_gr_ThetaY_vs_Momentum_fex1009[12] = {
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
   Double_t S12S18_gr_ThetaY_vs_Momentum_fey1009[12] = {
   0,
   0.1125617,
   0.02841304,
   0.01452458,
   0.01106048,
   0.009630859,
   0.009237963,
   0.009453527,
   0.01000458,
   0.01095339,
   0.01247932,
   0.04550062};
   TGraphErrors *gre = new TGraphErrors(12,S12S18_gr_ThetaY_vs_Momentum_fx1009,S12S18_gr_ThetaY_vs_Momentum_fy1009,S12S18_gr_ThetaY_vs_Momentum_fex1009,S12S18_gr_ThetaY_vs_Momentum_fey1009);
   gre->SetName("S12S18_gr_ThetaY_vs_Momentum");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_gr_ThetaY_vs_Momentum1009 = new TH1F("Graph_S12S18_gr_ThetaY_vs_Momentum1009","",100,0,3150);
   Graph_S12S18_gr_ThetaY_vs_Momentum1009->SetMinimum(-2.5);
   Graph_S12S18_gr_ThetaY_vs_Momentum1009->SetMaximum(2.5);
   Graph_S12S18_gr_ThetaY_vs_Momentum1009->SetDirectory(0);
   Graph_S12S18_gr_ThetaY_vs_Momentum1009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12S18_gr_ThetaY_vs_Momentum1009->SetLineColor(ci);
   Graph_S12S18_gr_ThetaY_vs_Momentum1009->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12S18_gr_ThetaY_vs_Momentum1009->GetXaxis()->SetRange(24,80);
   Graph_S12S18_gr_ThetaY_vs_Momentum1009->GetXaxis()->CenterTitle(true);
   Graph_S12S18_gr_ThetaY_vs_Momentum1009->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_gr_ThetaY_vs_Momentum1009->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_gr_ThetaY_vs_Momentum1009->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_gr_ThetaY_vs_Momentum1009->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_gr_ThetaY_vs_Momentum1009->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_S12S18_gr_ThetaY_vs_Momentum1009->GetYaxis()->CenterTitle(true);
   Graph_S12S18_gr_ThetaY_vs_Momentum1009->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_gr_ThetaY_vs_Momentum1009->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_gr_ThetaY_vs_Momentum1009->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_gr_ThetaY_vs_Momentum1009->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_gr_ThetaY_vs_Momentum1009->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_gr_ThetaY_vs_Momentum1009->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_gr_ThetaY_vs_Momentum1009->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_gr_ThetaY_vs_Momentum1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_gr_ThetaY_vs_Momentum1009);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
