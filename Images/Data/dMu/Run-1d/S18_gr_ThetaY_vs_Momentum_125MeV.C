void S18_gr_ThetaY_vs_Momentum_125MeV()
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
   
   Double_t S18_gr_ThetaY_vs_Momentum_fx1014[24] = {
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
   Double_t S18_gr_ThetaY_vs_Momentum_fy1014[24] = {
   0,
   0,
   7.461316,
   1.928844,
   1.655048,
   -0.8523604,
   -0.5658514,
   -0.2052338,
   -0.9385468,
   -0.8468761,
   -0.8904077,
   -0.7237281,
   -0.5707601,
   -0.4724117,
   -0.4057933,
   -0.2972018,
   -0.2924651,
   -0.2429344,
   -0.2210554,
   -0.2384895,
   -0.1623137,
   -0.150799,
   -0.3721767,
   -1.056324};
   Double_t S18_gr_ThetaY_vs_Momentum_fex1014[24] = {
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
   Double_t S18_gr_ThetaY_vs_Momentum_fey1014[24] = {
   0,
   0,
   0.882477,
   0.07996672,
   0.03863184,
   0.02377195,
   0.01663195,
   0.01374588,
   0.01210064,
   0.01094861,
   0.01039079,
   0.009889401,
   0.009915018,
   0.009662169,
   0.01013053,
   0.01026254,
   0.01080343,
   0.01101805,
   0.01158587,
   0.01253726,
   0.01313675,
   0.01430741,
   0.03719221,
   0.6634832};
   TGraphErrors *gre = new TGraphErrors(24,S18_gr_ThetaY_vs_Momentum_fx1014,S18_gr_ThetaY_vs_Momentum_fy1014,S18_gr_ThetaY_vs_Momentum_fex1014,S18_gr_ThetaY_vs_Momentum_fey1014);
   gre->SetName("S18_gr_ThetaY_vs_Momentum");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 125 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_gr_ThetaY_vs_Momentum1014 = new TH1F("Graph_S18_gr_ThetaY_vs_Momentum1014","",100,0,3225);
   Graph_S18_gr_ThetaY_vs_Momentum1014->SetMinimum(-2.5);
   Graph_S18_gr_ThetaY_vs_Momentum1014->SetMaximum(2.5);
   Graph_S18_gr_ThetaY_vs_Momentum1014->SetDirectory(0);
   Graph_S18_gr_ThetaY_vs_Momentum1014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S18_gr_ThetaY_vs_Momentum1014->SetLineColor(ci);
   Graph_S18_gr_ThetaY_vs_Momentum1014->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_gr_ThetaY_vs_Momentum1014->GetXaxis()->SetRange(24,78);
   Graph_S18_gr_ThetaY_vs_Momentum1014->GetXaxis()->CenterTitle(true);
   Graph_S18_gr_ThetaY_vs_Momentum1014->GetXaxis()->SetLabelFont(42);
   Graph_S18_gr_ThetaY_vs_Momentum1014->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_gr_ThetaY_vs_Momentum1014->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_gr_ThetaY_vs_Momentum1014->GetXaxis()->SetTitleFont(42);
   Graph_S18_gr_ThetaY_vs_Momentum1014->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 125 MeV");
   Graph_S18_gr_ThetaY_vs_Momentum1014->GetYaxis()->CenterTitle(true);
   Graph_S18_gr_ThetaY_vs_Momentum1014->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_gr_ThetaY_vs_Momentum1014->GetYaxis()->SetLabelFont(42);
   Graph_S18_gr_ThetaY_vs_Momentum1014->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_gr_ThetaY_vs_Momentum1014->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_gr_ThetaY_vs_Momentum1014->GetYaxis()->SetTitleFont(42);
   Graph_S18_gr_ThetaY_vs_Momentum1014->GetZaxis()->SetLabelFont(42);
   Graph_S18_gr_ThetaY_vs_Momentum1014->GetZaxis()->SetTitleOffset(1);
   Graph_S18_gr_ThetaY_vs_Momentum1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_gr_ThetaY_vs_Momentum1014);
   
   gre->Draw("alp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
