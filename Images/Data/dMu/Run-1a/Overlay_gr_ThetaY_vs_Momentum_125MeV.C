void Overlay_gr_ThetaY_vs_Momentum_125MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov  4 10:31:15 2021) by ROOT version 6.24/04
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
   11.46904,
   3.103462,
   2.402345,
   -0.1422934,
   0.1410364,
   0.4779825,
   -0.3373425,
   -0.3819512,
   -0.5550679,
   -0.4924053,
   -0.3087816,
   -0.1521733,
   -0.0679572,
   -0.0607373,
   -0.09005761,
   -0.06821106,
   -0.06697914,
   -0.0157791,
   0.01927923,
   0.04629928,
   0.1964576,
   -0.91443};
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
   1.83092,
   0.1637997,
   0.07915589,
   0.04694017,
   0.03222398,
   0.02635989,
   0.02316722,
   0.02086245,
   0.01947572,
   0.01843334,
   0.01838618,
   0.01770005,
   0.01824572,
   0.01830385,
   0.01907162,
   0.01924792,
   0.02012873,
   0.02167873,
   0.02294431,
   0.02491223,
   0.06137148,
   1.229156};
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
   8.803111,
   2.711936,
   2.316161,
   -0.1790197,
   0.06168617,
   0.2847191,
   -0.5243242,
   -0.5068458,
   -0.5364623,
   -0.4263998,
   -0.338658,
   -0.2135922,
   -0.1740428,
   -0.1112897,
   -0.1252894,
   -0.06168246,
   -0.04390712,
   -0.1036323,
   -0.06111527,
   -0.04755503,
   -0.3341897,
   0.7504632};
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
   1.714614,
   0.15597,
   0.07536161,
   0.04608012,
   0.03223544,
   0.02662742,
   0.0234208,
   0.02116132,
   0.02001694,
   0.01904639,
   0.01904583,
   0.01853754,
   0.01933662,
   0.01956704,
   0.02061325,
   0.02099171,
   0.02203333,
   0.02370505,
   0.02488706,
   0.02687931,
   0.06778841,
   1.029207};
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
   10.06269,
   2.900318,
   2.357459,
   -0.1609143,
   0.10162,
   0.3829038,
   -0.4291185,
   -0.4430476,
   -0.5460822,
   -0.4607091,
   -0.3230719,
   -0.1811928,
   -0.1174922,
   -0.08421394,
   -0.1062774,
   -0.06521793,
   -0.0565274,
   -0.05526679,
   -0.01743721,
   0.003626473,
   -0.03581346,
   0.07657788};
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
   1.252488,
   0.1129634,
   0.05458238,
   0.03288376,
   0.02279032,
   0.01873371,
   0.01647132,
   0.01485704,
   0.01395914,
   0.01324612,
   0.0132285,
   0.0128022,
   0.01327117,
   0.01336723,
   0.01399903,
   0.01418691,
   0.01486109,
   0.01599913,
   0.01686975,
   0.01827416,
   0.04557412,
   0.7992054};
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
