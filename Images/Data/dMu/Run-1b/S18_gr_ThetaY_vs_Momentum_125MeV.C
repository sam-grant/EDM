void S18_gr_ThetaY_vs_Momentum_125MeV()
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
   
   Double_t S18_gr_ThetaY_vs_Momentum_fx1002[24] = {
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
   Double_t S18_gr_ThetaY_vs_Momentum_fy1002[24] = {
   0,
   0,
   10.21559,
   2.973946,
   2.344216,
   -0.1575195,
   0.1128344,
   0.3417219,
   -0.4366674,
   -0.4138131,
   -0.4803629,
   -0.3631548,
   -0.2882156,
   -0.2047488,
   -0.1490305,
   -0.08774184,
   -0.0851891,
   -0.04824941,
   -0.03150094,
   -0.1131044,
   -0.04138313,
   -0.01882066,
   -0.2477924,
   0.06432542};
   Double_t S18_gr_ThetaY_vs_Momentum_fex1002[24] = {
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
   Double_t S18_gr_ThetaY_vs_Momentum_fey1002[24] = {
   0,
   0,
   1.477216,
   0.1314741,
   0.06421224,
   0.03913687,
   0.02746516,
   0.0226961,
   0.02000989,
   0.01809946,
   0.01710157,
   0.01630833,
   0.01624681,
   0.01585618,
   0.01651329,
   0.01679158,
   0.01770126,
   0.01796658,
   0.01880861,
   0.02031422,
   0.02125043,
   0.02297069,
   0.05798373,
   0.9590602};
   TGraphErrors *gre = new TGraphErrors(24,S18_gr_ThetaY_vs_Momentum_fx1002,S18_gr_ThetaY_vs_Momentum_fy1002,S18_gr_ThetaY_vs_Momentum_fex1002,S18_gr_ThetaY_vs_Momentum_fey1002);
   gre->SetName("S18_gr_ThetaY_vs_Momentum");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 125 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_gr_ThetaY_vs_Momentum1002 = new TH1F("Graph_S18_gr_ThetaY_vs_Momentum1002","",100,0,3225);
   Graph_S18_gr_ThetaY_vs_Momentum1002->SetMinimum(-2.5);
   Graph_S18_gr_ThetaY_vs_Momentum1002->SetMaximum(2.5);
   Graph_S18_gr_ThetaY_vs_Momentum1002->SetDirectory(0);
   Graph_S18_gr_ThetaY_vs_Momentum1002->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S18_gr_ThetaY_vs_Momentum1002->SetLineColor(ci);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetXaxis()->SetRange(24,78);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetXaxis()->CenterTitle(true);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetXaxis()->SetLabelFont(42);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetXaxis()->SetTitleFont(42);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 125 MeV");
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetYaxis()->CenterTitle(true);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetYaxis()->SetLabelFont(42);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetYaxis()->SetTitleFont(42);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetZaxis()->SetLabelFont(42);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetZaxis()->SetTitleOffset(1);
   Graph_S18_gr_ThetaY_vs_Momentum1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_gr_ThetaY_vs_Momentum1002);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
