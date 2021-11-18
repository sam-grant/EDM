void Overlay_gr_ThetaY_vs_Momentum_125MeV()
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
   
   Double_t S12_gr_ThetaY_vs_Momentum_fx1004[24] = {
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
   Double_t S12_gr_ThetaY_vs_Momentum_fy1004[24] = {
   0,
   0,
   7.865925,
   2.880425,
   2.100289,
   -0.2917905,
   -0.1006352,
   0.276917,
   -0.5015831,
   -0.5217377,
   -0.6934057,
   -0.5917972,
   -0.3730454,
   -0.2395112,
   -0.1827572,
   -0.0860574,
   -0.1500784,
   -0.1093826,
   -0.08298579,
   -0.05360478,
   -0.01567724,
   0.1416599,
   0.1322077,
   1.134421};
   Double_t S12_gr_ThetaY_vs_Momentum_fex1004[24] = {
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
   Double_t S12_gr_ThetaY_vs_Momentum_fey1004[24] = {
   0,
   0,
   1.288706,
   0.1134504,
   0.05494573,
   0.03273473,
   0.02244018,
   0.01835738,
   0.0160881,
   0.01454646,
   0.01362863,
   0.01285257,
   0.01287188,
   0.01240965,
   0.0127775,
   0.01286013,
   0.01339897,
   0.01359284,
   0.01417884,
   0.01529479,
   0.01630899,
   0.01768652,
   0.04351559,
   0.7080979};
   TGraphErrors *gre = new TGraphErrors(24,S12_gr_ThetaY_vs_Momentum_fx1004,S12_gr_ThetaY_vs_Momentum_fy1004,S12_gr_ThetaY_vs_Momentum_fex1004,S12_gr_ThetaY_vs_Momentum_fey1004);
   gre->SetName("S12_gr_ThetaY_vs_Momentum");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 125 MeV");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_S12_gr_ThetaY_vs_Momentum10011004 = new TH1F("Graph_Graph_S12_gr_ThetaY_vs_Momentum10011004","",100,0,3225);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10011004->SetMinimum(-2.5);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10011004->SetMaximum(2.5);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10011004->SetDirectory(0);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10011004->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10011004->SetLineColor(ci);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10011004->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10011004->GetXaxis()->SetRange(24,78);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10011004->GetXaxis()->CenterTitle(true);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10011004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10011004->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10011004->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10011004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10011004->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 125 MeV");
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10011004->GetYaxis()->CenterTitle(true);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10011004->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10011004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10011004->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10011004->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10011004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10011004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10011004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10011004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_S12_gr_ThetaY_vs_Momentum10011004);
   
   gre->Draw("alp");
   
   Double_t S18_gr_ThetaY_vs_Momentum_fx1005[24] = {
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
   Double_t S18_gr_ThetaY_vs_Momentum_fy1005[24] = {
   0,
   0,
   8.165148,
   2.695391,
   2.089776,
   -0.4318506,
   -0.1987046,
   0.09708573,
   -0.6634069,
   -0.5777684,
   -0.6311672,
   -0.4964418,
   -0.3739544,
   -0.2940918,
   -0.2318526,
   -0.1639195,
   -0.1775286,
   -0.152947,
   -0.09540266,
   -0.1456224,
   -0.09707111,
   -0.0859101,
   -0.2603554,
   0.1786817};
   Double_t S18_gr_ThetaY_vs_Momentum_fex1005[24] = {
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
   Double_t S18_gr_ThetaY_vs_Momentum_fey1005[24] = {
   0,
   0,
   1.164756,
   0.1090949,
   0.05268501,
   0.03235767,
   0.02264455,
   0.01870902,
   0.01646364,
   0.01488742,
   0.01410551,
   0.01344607,
   0.01347503,
   0.01313114,
   0.01372528,
   0.01391837,
   0.01462,
   0.01493986,
   0.01566731,
   0.016893,
   0.01777622,
   0.01952624,
   0.050197,
   0.7778443};
   gre = new TGraphErrors(24,S18_gr_ThetaY_vs_Momentum_fx1005,S18_gr_ThetaY_vs_Momentum_fy1005,S18_gr_ThetaY_vs_Momentum_fex1005,S18_gr_ThetaY_vs_Momentum_fey1005);
   gre->SetName("S18_gr_ThetaY_vs_Momentum");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 125 MeV");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_S18_gr_ThetaY_vs_Momentum10021005 = new TH1F("Graph_Graph_S18_gr_ThetaY_vs_Momentum10021005","",100,0,3225);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10021005->SetMinimum(-2.5);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10021005->SetMaximum(2.5);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10021005->SetDirectory(0);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10021005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10021005->SetLineColor(ci);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10021005->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10021005->GetXaxis()->SetRange(24,78);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10021005->GetXaxis()->CenterTitle(true);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10021005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10021005->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10021005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10021005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10021005->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 125 MeV");
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10021005->GetYaxis()->CenterTitle(true);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10021005->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10021005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10021005->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10021005->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10021005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10021005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10021005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10021005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_S18_gr_ThetaY_vs_Momentum10021005);
   
   gre->Draw("lp ");
   
   Double_t S12S18_gr_ThetaY_vs_Momentum_fx1006[24] = {
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
   Double_t S12S18_gr_ThetaY_vs_Momentum_fy1006[24] = {
   0,
   0,
   8.02796,
   2.785223,
   2.094851,
   -0.3622345,
   -0.1488906,
   0.1892804,
   -0.5803825,
   -0.54895,
   -0.6635197,
   -0.5463995,
   -0.3734763,
   -0.2651152,
   -0.2054723,
   -0.1218455,
   -0.162591,
   -0.1291482,
   -0.0885482,
   -0.09455084,
   -0.05256841,
   0.04017469,
   -0.03509446,
   0.6798622};
   Double_t S12S18_gr_ThetaY_vs_Momentum_fex1006[24] = {
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
   Double_t S12S18_gr_ThetaY_vs_Momentum_fey1006[24] = {
   0,
   0,
   0.864259,
   0.07864082,
   0.0380291,
   0.02301295,
   0.01593979,
   0.0131036,
   0.01150666,
   0.01040453,
   0.00980131,
   0.009290959,
   0.009307906,
   0.00901938,
   0.009352258,
   0.009445557,
   0.009878034,
   0.0100542,
   0.01051301,
   0.01133902,
   0.01201809,
   0.01311192,
   0.03290593,
   0.5268014};
   gre = new TGraphErrors(24,S12S18_gr_ThetaY_vs_Momentum_fx1006,S12S18_gr_ThetaY_vs_Momentum_fy1006,S12S18_gr_ThetaY_vs_Momentum_fex1006,S12S18_gr_ThetaY_vs_Momentum_fey1006);
   gre->SetName("S12S18_gr_ThetaY_vs_Momentum");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 125 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10031006 = new TH1F("Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10031006","",100,0,3225);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10031006->SetMinimum(-2.5);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10031006->SetMaximum(2.5);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10031006->SetDirectory(0);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10031006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10031006->SetLineColor(ci);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10031006->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10031006->GetXaxis()->SetRange(24,78);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10031006->GetXaxis()->CenterTitle(true);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10031006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10031006->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10031006->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10031006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10031006->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 125 MeV");
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10031006->GetYaxis()->CenterTitle(true);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10031006->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10031006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10031006->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10031006->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10031006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10031006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10031006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10031006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10031006);
   
   gre->Draw("lp ");
   
   TLegend *leg = new TLegend(0.31,0.91,0.78,0.99,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12_gr_ThetaY_vs_Momentum","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S18_gr_ThetaY_vs_Momentum","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S12S18_gr_ThetaY_vs_Momentum","S12 & S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
