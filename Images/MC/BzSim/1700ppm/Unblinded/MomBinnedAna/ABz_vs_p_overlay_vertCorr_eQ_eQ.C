void ABz_vs_p_overlay_vertCorr_eQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Mar 25 01:08:03 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(249.5,-0.10625,2850.5,0.45625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_ABz_vs_p_fx1236[17] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350};
   Double_t S0_ABz_vs_p_fy1236[17] = {
   0.218688,
   0.2004022,
   0.2129523,
   0.1866144,
   0.1774694,
   0.1192586,
   0.1394172,
   0.1580928,
   0.1641812,
   0.2101356,
   0.2431177,
   0.1919616,
   0.16137,
   0.1218891,
   0.2031738,
   0.1418547,
   0.1143337};
   Double_t S0_ABz_vs_p_fex1236[17] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S0_ABz_vs_p_fey1236[17] = {
   0.05555179,
   0.05160342,
   0.04875867,
   0.04632276,
   0.04426443,
   0.04237316,
   0.04077639,
   0.0392966,
   0.03807796,
   0.03686813,
   0.03612836,
   0.03557377,
   0.03506977,
   0.03487851,
   0.03484842,
   0.03509671,
   0.03484222};
   TGraphErrors *gre = new TGraphErrors(17,S0_ABz_vs_p_fx1236,S0_ABz_vs_p_fy1236,S0_ABz_vs_p_fex1236,S0_ABz_vs_p_fey1236);
   gre->SetName("S0_ABz_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_ABz_vs_p1236 = new TH1F("Graph_S0_ABz_vs_p1236","",100,530,2570);
   Graph_S0_ABz_vs_p1236->SetMinimum(-0.05);
   Graph_S0_ABz_vs_p1236->SetMaximum(0.4);
   Graph_S0_ABz_vs_p1236->SetDirectory(0);
   Graph_S0_ABz_vs_p1236->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_ABz_vs_p1236->SetLineColor(ci);
   Graph_S0_ABz_vs_p1236->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0_ABz_vs_p1236->GetXaxis()->SetRange(0,101);
   Graph_S0_ABz_vs_p1236->GetXaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p1236->GetXaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p1236->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p1236->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p1236->GetXaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p1236->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0_ABz_vs_p1236->GetYaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p1236->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_ABz_vs_p1236->GetYaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p1236->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p1236->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p1236->GetYaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p1236->GetZaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p1236->GetZaxis()->SetTitleOffset(1);
   Graph_S0_ABz_vs_p1236->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_ABz_vs_p1236);
   
   gre->Draw("ap");
   
   Double_t S12_ABz_vs_p_fx1237[17] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350};
   Double_t S12_ABz_vs_p_fy1237[17] = {
   0.112346,
   0.2284641,
   0.2298705,
   0.1491088,
   0.1083007,
   0.2520815,
   0.233808,
   0.2055879,
   0.16325,
   0.1794054,
   0.1101097,
   0.1407454,
   0.1646151,
   0.09719062,
   0.05342014,
   0.1429536,
   0.1019988};
   Double_t S12_ABz_vs_p_fex1237[17] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S12_ABz_vs_p_fey1237[17] = {
   0.05558188,
   0.05190077,
   0.04901675,
   0.04657556,
   0.0444191,
   0.0425187,
   0.04085047,
   0.03960779,
   0.03833185,
   0.03713979,
   0.03633008,
   0.03583027,
   0.03544353,
   0.03521581,
   0.03521349,
   0.0352139,
   0.03553729};
   gre = new TGraphErrors(17,S12_ABz_vs_p_fx1237,S12_ABz_vs_p_fy1237,S12_ABz_vs_p_fex1237,S12_ABz_vs_p_fey1237);
   gre->SetName("S12_ABz_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_ABz_vs_p1237 = new TH1F("Graph_S12_ABz_vs_p1237","S12",100,530,2570);
   Graph_S12_ABz_vs_p1237->SetMinimum(0.01638599);
   Graph_S12_ABz_vs_p1237->SetMaximum(0.3222396);
   Graph_S12_ABz_vs_p1237->SetDirectory(0);
   Graph_S12_ABz_vs_p1237->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_ABz_vs_p1237->SetLineColor(ci);
   Graph_S12_ABz_vs_p1237->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S12_ABz_vs_p1237->GetXaxis()->SetRange(0,101);
   Graph_S12_ABz_vs_p1237->GetXaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p1237->GetXaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p1237->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p1237->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_ABz_vs_p1237->GetXaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p1237->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12_ABz_vs_p1237->GetYaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p1237->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_ABz_vs_p1237->GetYaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p1237->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p1237->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_ABz_vs_p1237->GetYaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p1237->GetZaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p1237->GetZaxis()->SetTitleOffset(1);
   Graph_S12_ABz_vs_p1237->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_ABz_vs_p1237);
   
   gre->Draw("p ");
   
   Double_t S18_ABz_vs_p_fx1238[17] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350};
   Double_t S18_ABz_vs_p_fy1238[17] = {
   0.1942837,
   0.1192923,
   0.2455541,
   0.1871625,
   0.1576012,
   0.181529,
   0.1418884,
   0.1344271,
   0.1508369,
   0.1744841,
   0.1036169,
   0.1914862,
   0.06620002,
   0.1296577,
   0.09737582,
   0.1752363,
   0.09159839};
   Double_t S18_ABz_vs_p_fex1238[17] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S18_ABz_vs_p_fey1238[17] = {
   0.0556377,
   0.05206688,
   0.0490294,
   0.04675169,
   0.04471807,
   0.04260699,
   0.04131463,
   0.03974514,
   0.0385564,
   0.03741406,
   0.03672956,
   0.03614771,
   0.03587095,
   0.03556004,
   0.03535795,
   0.035595,
   0.03581938};
   gre = new TGraphErrors(17,S18_ABz_vs_p_fx1238,S18_ABz_vs_p_fy1238,S18_ABz_vs_p_fex1238,S18_ABz_vs_p_fey1238);
   gre->SetName("S18_ABz_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_ABz_vs_p1238 = new TH1F("Graph_S18_ABz_vs_p1238","S18",100,530,2570);
   Graph_S18_ABz_vs_p1238->SetMinimum(0.003903625);
   Graph_S18_ABz_vs_p1238->SetMaximum(0.321009);
   Graph_S18_ABz_vs_p1238->SetDirectory(0);
   Graph_S18_ABz_vs_p1238->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_ABz_vs_p1238->SetLineColor(ci);
   Graph_S18_ABz_vs_p1238->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S18_ABz_vs_p1238->GetXaxis()->SetRange(0,101);
   Graph_S18_ABz_vs_p1238->GetXaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p1238->GetXaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p1238->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p1238->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_ABz_vs_p1238->GetXaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p1238->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S18_ABz_vs_p1238->GetYaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p1238->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_ABz_vs_p1238->GetYaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p1238->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p1238->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_ABz_vs_p1238->GetYaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p1238->GetZaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p1238->GetZaxis()->SetTitleOffset(1);
   Graph_S18_ABz_vs_p1238->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_ABz_vs_p1238);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_ABz_vs_p_fx1239[17] = {
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350};
   Double_t S0S12S18_ABz_vs_p_fy1239[17] = {
   0.1750259,
   0.182694,
   0.2291287,
   0.1742689,
   0.1481371,
   0.1838931,
   0.1717037,
   0.166441,
   0.1596914,
   0.1876476,
   0.1536671,
   0.1742382,
   0.1311594,
   0.1150739,
   0.1176685,
   0.152626,
   0.1029536};
   Double_t S0S12S18_ABz_vs_p_fex1239[17] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t S0S12S18_ABz_vs_p_fey1239[17] = {
   0.0321032,
   0.0299465,
   0.02825858,
   0.02688159,
   0.02567975,
   0.02454362,
   0.02366569,
   0.02284121,
   0.02213091,
   0.02144879,
   0.02101765,
   0.02070509,
   0.02048093,
   0.0203414,
   0.02030018,
   0.02039192,
   0.02045476};
   gre = new TGraphErrors(17,S0S12S18_ABz_vs_p_fx1239,S0S12S18_ABz_vs_p_fy1239,S0S12S18_ABz_vs_p_fex1239,S0S12S18_ABz_vs_p_fey1239);
   gre->SetName("S0S12S18_ABz_vs_p");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_ABz_vs_p1239 = new TH1F("Graph_S0S12S18_ABz_vs_p1239","S0S12S18",100,530,2570);
   Graph_S0S12S18_ABz_vs_p1239->SetMinimum(0.06501004);
   Graph_S0S12S18_ABz_vs_p1239->SetMaximum(0.2748762);
   Graph_S0S12S18_ABz_vs_p1239->SetDirectory(0);
   Graph_S0S12S18_ABz_vs_p1239->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_ABz_vs_p1239->SetLineColor(ci);
   Graph_S0S12S18_ABz_vs_p1239->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0S12S18_ABz_vs_p1239->GetXaxis()->SetRange(0,101);
   Graph_S0S12S18_ABz_vs_p1239->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_ABz_vs_p1239->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p1239->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_ABz_vs_p1239->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_ABz_vs_p1239->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_ABz_vs_p1239->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0S12S18_ABz_vs_p1239->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_ABz_vs_p1239->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_ABz_vs_p1239->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p1239->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_ABz_vs_p1239->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_ABz_vs_p1239->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_ABz_vs_p1239->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p1239->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_ABz_vs_p1239->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_ABz_vs_p1239);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_ABz_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_ABz_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_ABz_vs_p","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S0S12S18_ABz_vs_p","S0S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
