void Overlay_gr_ThetaY_vs_Momentum_125MeV()
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
   8.623022,
   3.218364,
   2.434419,
   -0.06181836,
   0.2096355,
   0.4833259,
   -0.2968332,
   -0.3463154,
   -0.5113812,
   -0.4667923,
   -0.2353529,
   -0.1258611,
   -0.07089369,
   -0.02424162,
   -0.0699209,
   -0.05955399,
   -0.02130844,
   -0.01567843,
   0.04722133,
   0.1095246,
   0.1341536,
   0.09926762};
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
   1.623806,
   0.1374846,
   0.0673065,
   0.03995259,
   0.02741507,
   0.02243377,
   0.0197593,
   0.01779022,
   0.01662104,
   0.01570063,
   0.01567335,
   0.01511162,
   0.01558254,
   0.01565246,
   0.0162816,
   0.01650393,
   0.01717196,
   0.01849099,
   0.01967885,
   0.02120349,
   0.05112808,
   0.9649046};
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
   9.470773,
   3.092064,
   2.38741,
   -0.1104127,
   0.1616061,
   0.4136642,
   -0.3655142,
   -0.3793217,
   -0.4963814,
   -0.417161,
   -0.260616,
   -0.1631624,
   -0.1073707,
   -0.0536776,
   -0.07693158,
   -0.05437575,
   -0.02591768,
   -0.05942792,
   0.006586986,
   0.05110488,
   -0.03334497,
   0.08246849};
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
   1.093452,
   0.09502672,
   0.04646089,
   0.0279583,
   0.01940345,
   0.01595528,
   0.01405999,
   0.01268768,
   0.01191923,
   0.01131094,
   0.01128043,
   0.01093955,
   0.01133375,
   0.0114496,
   0.01198336,
   0.01215429,
   0.01268177,
   0.01367513,
   0.01443935,
   0.01558228,
   0.03837695,
   0.6808935};
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
