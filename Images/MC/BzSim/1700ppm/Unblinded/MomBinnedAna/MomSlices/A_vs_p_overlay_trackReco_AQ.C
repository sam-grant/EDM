void A_vs_p_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 12 22:04:29 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-412.5,-2.5,3712.5,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0S12S18_A_vs_p_fx1168[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t S0S12S18_A_vs_p_fy1168[15] = {
   -0.4800468,
   -0.1345925,
   0.1116814,
   0.08225469,
   0.2579466,
   0.1558618,
   0.1610208,
   0.1829512,
   0.176855,
   0.1779803,
   0.1274771,
   0.1677232,
   0.1389147,
   0.09757922,
   -0.004488936};
   Double_t S0S12S18_A_vs_p_fex1168[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S0S12S18_A_vs_p_fey1168[15] = {
   0.8334053,
   0.1344214,
   0.04541862,
   0.03525836,
   0.03117023,
   0.02884097,
   0.0269594,
   0.02555135,
   0.02466232,
   0.02460337,
   0.02521695,
   0.02655564,
   0.02848599,
   0.02930166,
   0.04006122};
   TGraphErrors *gre = new TGraphErrors(15,S0S12S18_A_vs_p_fx1168,S0S12S18_A_vs_p_fy1168,S0S12S18_A_vs_p_fex1168,S0S12S18_A_vs_p_fey1168);
   gre->SetName("S0S12S18_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_A_vs_p1168 = new TH1F("Graph_S0S12S18_A_vs_p1168","",100,0,3300);
   Graph_S0S12S18_A_vs_p1168->SetMinimum(-2);
   Graph_S0S12S18_A_vs_p1168->SetMaximum(2);
   Graph_S0S12S18_A_vs_p1168->SetDirectory(0);
   Graph_S0S12S18_A_vs_p1168->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_A_vs_p1168->SetLineColor(ci);
   Graph_S0S12S18_A_vs_p1168->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0S12S18_A_vs_p1168->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1168->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1168->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1168->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_A_vs_p1168->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1168->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0S12S18_A_vs_p1168->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_A_vs_p1168->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_A_vs_p1168->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1168->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_A_vs_p1168->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_A_vs_p1168->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_A_vs_p1168->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_A_vs_p1168->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_A_vs_p1168->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_A_vs_p1168);
   
   gre->Draw("ap");
   
   Double_t S12S18_A_vs_p_fx1169[30] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900,
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t S12S18_A_vs_p_fy1169[30] = {
   -0.4800468,
   -0.1345925,
   0.1116814,
   0.08225469,
   0.2579466,
   0.1558618,
   0.1610208,
   0.1829512,
   0.176855,
   0.1779803,
   0.1274771,
   0.1677232,
   0.1389147,
   0.09757922,
   -0.004488936,
   0.2361333,
   -0.2118816,
   0.1091818,
   0.04063463,
   0.2540016,
   0.156806,
   0.1947639,
   0.198963,
   0.1554666,
   0.1482704,
   0.09069325,
   0.1732348,
   0.1453227,
   0.07596638,
   -0.05170386};
   Double_t S12S18_A_vs_p_fex1169[30] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S12S18_A_vs_p_fey1169[30] = {
   0.8334053,
   0.1344214,
   0.04541862,
   0.03525836,
   0.03117023,
   0.02884097,
   0.0269594,
   0.02555135,
   0.02466232,
   0.02460337,
   0.02521695,
   0.02655564,
   0.02848599,
   0.02930166,
   0.04006122,
   1.011235,
   0.1634775,
   0.05566233,
   0.04315811,
   0.03816618,
   0.0352774,
   0.03299719,
   0.03129113,
   0.03030673,
   0.0303578,
   0.03139854,
   0.0335351,
   0.03608743,
   0.0365183,
   0.05162181};
   gre = new TGraphErrors(30,S12S18_A_vs_p_fx1169,S12S18_A_vs_p_fy1169,S12S18_A_vs_p_fex1169,S12S18_A_vs_p_fey1169);
   gre->SetName("S12S18_A_vs_p");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_A_vs_p1169 = new TH1F("Graph_S12S18_A_vs_p1169","S12S18",100,0,3300);
   Graph_S12S18_A_vs_p1169->SetMinimum(-1.569534);
   Graph_S12S18_A_vs_p1169->SetMaximum(1.50345);
   Graph_S12S18_A_vs_p1169->SetDirectory(0);
   Graph_S12S18_A_vs_p1169->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_A_vs_p1169->SetLineColor(ci);
   Graph_S12S18_A_vs_p1169->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12S18_A_vs_p1169->GetXaxis()->CenterTitle(true);
   Graph_S12S18_A_vs_p1169->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_A_vs_p1169->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_A_vs_p1169->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_A_vs_p1169->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_A_vs_p1169->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12S18_A_vs_p1169->GetYaxis()->CenterTitle(true);
   Graph_S12S18_A_vs_p1169->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_A_vs_p1169->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_A_vs_p1169->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_A_vs_p1169->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_A_vs_p1169->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_A_vs_p1169->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_A_vs_p1169->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_A_vs_p1169->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_A_vs_p1169);
   
   gre->Draw("p ");
   
   Double_t S12_A_vs_p_fx1170[45] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900,
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900,
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t S12_A_vs_p_fy1170[45] = {
   -0.4800468,
   -0.1345925,
   0.1116814,
   0.08225469,
   0.2579466,
   0.1558618,
   0.1610208,
   0.1829512,
   0.176855,
   0.1779803,
   0.1274771,
   0.1677232,
   0.1389147,
   0.09757922,
   -0.004488936,
   0.2361333,
   -0.2118816,
   0.1091818,
   0.04063463,
   0.2540016,
   0.156806,
   0.1947639,
   0.198963,
   0.1554666,
   0.1482704,
   0.09069325,
   0.1732348,
   0.1453227,
   0.07596638,
   -0.05170386,
   -0.09218955,
   -0.3549316,
   0.06863904,
   0.0232447,
   0.2840833,
   0.1780387,
   0.2286589,
   0.2144736,
   0.09168912,
   0.1623859,
   0.1118111,
   0.1565891,
   0.1634278,
   0.09175553,
   -0.1014684};
   Double_t S12_A_vs_p_fex1170[45] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S12_A_vs_p_fey1170[45] = {
   0.8334053,
   0.1344214,
   0.04541862,
   0.03525836,
   0.03117023,
   0.02884097,
   0.0269594,
   0.02555135,
   0.02466232,
   0.02460337,
   0.02521695,
   0.02655564,
   0.02848599,
   0.02930166,
   0.04006122,
   1.011235,
   0.1634775,
   0.05566233,
   0.04315811,
   0.03816618,
   0.0352774,
   0.03299719,
   0.03129113,
   0.03030673,
   0.0303578,
   0.03139854,
   0.0335351,
   0.03608743,
   0.0365183,
   0.05162181,
   1.248731,
   0.2271895,
   0.07873084,
   0.06112719,
   0.05410751,
   0.04989621,
   0.04663883,
   0.04416485,
   0.04257697,
   0.04259416,
   0.04385316,
   0.04642792,
   0.05044546,
   0.05079099,
   0.07165383};
   gre = new TGraphErrors(45,S12_A_vs_p_fx1170,S12_A_vs_p_fy1170,S12_A_vs_p_fex1170,S12_A_vs_p_fey1170);
   gre->SetName("S12_A_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_A_vs_p1170 = new TH1F("Graph_S12_A_vs_p1170","S12",100,0,3300);
   Graph_S12_A_vs_p1170->SetMinimum(-1.599749);
   Graph_S12_A_vs_p1170->SetMaximum(1.506197);
   Graph_S12_A_vs_p1170->SetDirectory(0);
   Graph_S12_A_vs_p1170->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_A_vs_p1170->SetLineColor(ci);
   Graph_S12_A_vs_p1170->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12_A_vs_p1170->GetXaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1170->GetXaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1170->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1170->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_A_vs_p1170->GetXaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1170->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12_A_vs_p1170->GetYaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1170->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_A_vs_p1170->GetYaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1170->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1170->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_A_vs_p1170->GetYaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1170->GetZaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1170->GetZaxis()->SetTitleOffset(1);
   Graph_S12_A_vs_p1170->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_A_vs_p1170);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0S12S18_A_vs_p","S0S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12S18_A_vs_p","S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_A_vs_p","S12","lpf");
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
