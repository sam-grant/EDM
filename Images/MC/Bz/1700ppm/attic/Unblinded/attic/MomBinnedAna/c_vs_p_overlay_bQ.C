void c_vs_p_overlay_bQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 14:57:37 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(249.5,-2.5,2850.5,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1176[17] = {
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
   Double_t S0_c_vs_p_fy1176[17] = {
   -0.2844286,
   -0.2155237,
   -0.1307401,
   -0.139955,
   -0.3008061,
   -0.05779121,
   -0.1186274,
   -0.2032069,
   -0.1462977,
   -0.1117732,
   -0.1429681,
   -0.08957198,
   -0.06987061,
   0.05066464,
   0.02730481,
   -0.03614971,
   -0.01527773};
   Double_t S0_c_vs_p_fex1176[17] = {
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
   Double_t S0_c_vs_p_fey1176[17] = {
   0.06591673,
   0.05617741,
   0.05015705,
   0.04655762,
   0.04433039,
   0.04265952,
   0.04124335,
   0.04027796,
   0.03969705,
   0.03851494,
   0.03833041,
   0.03837034,
   0.03898298,
   0.03955721,
   0.04022285,
   0.04090848,
   0.04163239};
   TGraphErrors *gre = new TGraphErrors(17,S0_c_vs_p_fx1176,S0_c_vs_p_fy1176,S0_c_vs_p_fex1176,S0_c_vs_p_fey1176);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1176 = new TH1F("Graph_S0_c_vs_p1176","",100,530,2570);
   Graph_S0_c_vs_p1176->SetMinimum(-2);
   Graph_S0_c_vs_p1176->SetMaximum(2);
   Graph_S0_c_vs_p1176->SetDirectory(0);
   Graph_S0_c_vs_p1176->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1176->SetLineColor(ci);
   Graph_S0_c_vs_p1176->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0_c_vs_p1176->GetXaxis()->SetRange(0,101);
   Graph_S0_c_vs_p1176->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1176->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1176->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1176->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1176->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1176->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1176->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1176->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1176->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1176->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1176->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1176->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1176->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1176->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1176->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1176);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1177[17] = {
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
   Double_t S12_c_vs_p_fy1177[17] = {
   -0.6528888,
   -0.6669807,
   -0.5840532,
   -0.5142963,
   -0.4432206,
   -0.5177361,
   -0.4435642,
   -0.3649918,
   -0.3436277,
   -0.2741137,
   -0.2260391,
   -0.1732395,
   -0.1601749,
   -0.1359605,
   -0.1179947,
   -0.1147926,
   -0.1820713};
   Double_t S12_c_vs_p_fex1177[17] = {
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
   Double_t S12_c_vs_p_fey1177[17] = {
   0.06579039,
   0.05616385,
   0.04993833,
   0.04647641,
   0.04415206,
   0.04246822,
   0.04099222,
   0.04027168,
   0.03956403,
   0.03885695,
   0.03864827,
   0.03923566,
   0.0398359,
   0.04116989,
   0.04255288,
   0.04390763,
   0.04573972};
   gre = new TGraphErrors(17,S12_c_vs_p_fx1177,S12_c_vs_p_fy1177,S12_c_vs_p_fex1177,S12_c_vs_p_fey1177);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1177 = new TH1F("Graph_S12_c_vs_p1177","S12",100,530,2570);
   Graph_S12_c_vs_p1177->SetMinimum(-0.7883705);
   Graph_S12_c_vs_p1177->SetMaximum(-0.005658974);
   Graph_S12_c_vs_p1177->SetDirectory(0);
   Graph_S12_c_vs_p1177->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1177->SetLineColor(ci);
   Graph_S12_c_vs_p1177->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S12_c_vs_p1177->GetXaxis()->SetRange(0,101);
   Graph_S12_c_vs_p1177->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1177->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1177->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1177->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1177->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1177->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1177->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1177->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1177->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1177->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1177->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1177->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1177->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1177->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1177->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1177);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1178[17] = {
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
   Double_t S18_c_vs_p_fy1178[17] = {
   -0.5005333,
   -0.5202894,
   -0.4991161,
   -0.3406305,
   -0.3930852,
   -0.384128,
   -0.3107714,
   -0.3547764,
   -0.2736951,
   -0.2476072,
   -0.2095191,
   -0.208702,
   -0.2421115,
   -0.1352053,
   -0.1181139,
   -0.1566025,
   -0.08730517};
   Double_t S18_c_vs_p_fex1178[17] = {
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
   Double_t S18_c_vs_p_fey1178[17] = {
   0.06550608,
   0.05599232,
   0.04944961,
   0.04599207,
   0.04407948,
   0.04237697,
   0.04124428,
   0.04043447,
   0.03968335,
   0.0391528,
   0.03952975,
   0.03974037,
   0.0409884,
   0.04179459,
   0.04288319,
   0.04522551,
   0.04731433};
   gre = new TGraphErrors(17,S18_c_vs_p_fx1178,S18_c_vs_p_fy1178,S18_c_vs_p_fex1178,S18_c_vs_p_fey1178);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1178 = new TH1F("Graph_S18_c_vs_p1178","S18",100,530,2570);
   Graph_S18_c_vs_p1178->SetMinimum(-0.6299108);
   Graph_S18_c_vs_p1178->SetMaximum(0.01363825);
   Graph_S18_c_vs_p1178->SetDirectory(0);
   Graph_S18_c_vs_p1178->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1178->SetLineColor(ci);
   Graph_S18_c_vs_p1178->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S18_c_vs_p1178->GetXaxis()->SetRange(0,101);
   Graph_S18_c_vs_p1178->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1178->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1178->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1178->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1178->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1178->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1178->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1178->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1178->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1178->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1178->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1178->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1178->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1178->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1178->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1178);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_c_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_c_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_c_vs_p","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
