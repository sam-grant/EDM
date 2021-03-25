void ABz_vs_p_overlay_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Mar 24 17:43:58 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(249.5,-0.04375,2850.5,0.39375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_ABz_vs_p_fx1182[17] = {
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
   Double_t S0_ABz_vs_p_fy1182[17] = {
   0.2201636,
   0.2007767,
   0.2130978,
   0.186478,
   0.1773745,
   0.1193181,
   0.1389157,
   0.1588594,
   0.1642413,
   0.2103475,
   0.2427106,
   0.1911357,
   0.1610586,
   0.1216877,
   0.2022196,
   0.1419841,
   0.1147857};
   Double_t S0_ABz_vs_p_fex1182[17] = {
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
   Double_t S0_ABz_vs_p_fey1182[17] = {
   0.05555067,
   0.05160378,
   0.04875856,
   0.04632301,
   0.04426411,
   0.0423724,
   0.04077653,
   0.0392966,
   0.0380792,
   0.03687051,
   0.0361273,
   0.03557445,
   0.03506935,
   0.03487718,
   0.03484987,
   0.03509464,
   0.03484546};
   TGraphErrors *gre = new TGraphErrors(17,S0_ABz_vs_p_fx1182,S0_ABz_vs_p_fy1182,S0_ABz_vs_p_fex1182,S0_ABz_vs_p_fey1182);
   gre->SetName("S0_ABz_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_ABz_vs_p1182 = new TH1F("Graph_S0_ABz_vs_p1182","",100,530,2570);
   Graph_S0_ABz_vs_p1182->SetMinimum(0);
   Graph_S0_ABz_vs_p1182->SetMaximum(0.35);
   Graph_S0_ABz_vs_p1182->SetDirectory(0);
   Graph_S0_ABz_vs_p1182->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_ABz_vs_p1182->SetLineColor(ci);
   Graph_S0_ABz_vs_p1182->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0_ABz_vs_p1182->GetXaxis()->SetRange(0,101);
   Graph_S0_ABz_vs_p1182->GetXaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p1182->GetXaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p1182->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p1182->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p1182->GetXaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p1182->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0_ABz_vs_p1182->GetYaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p1182->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_ABz_vs_p1182->GetYaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p1182->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p1182->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p1182->GetYaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p1182->GetZaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p1182->GetZaxis()->SetTitleOffset(1);
   Graph_S0_ABz_vs_p1182->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_ABz_vs_p1182);
   
   gre->Draw("ap");
   
   Double_t S12_ABz_vs_p_fx1183[17] = {
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
   Double_t S12_ABz_vs_p_fy1183[17] = {
   0.1123738,
   0.2279174,
   0.2287438,
   0.1485434,
   0.1079277,
   0.2526611,
   0.2335347,
   0.2057287,
   0.1638589,
   0.1786536,
   0.1110226,
   0.1407759,
   0.1625519,
   0.09719933,
   0.0533888,
   0.1425342,
   0.1018104};
   Double_t S12_ABz_vs_p_fex1183[17] = {
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
   Double_t S12_ABz_vs_p_fey1183[17] = {
   0.05557717,
   0.05189741,
   0.04901382,
   0.0465743,
   0.0444187,
   0.04251886,
   0.04085047,
   0.03961108,
   0.0383305,
   0.03713636,
   0.0363301,
   0.0358317,
   0.03544218,
   0.03521686,
   0.03521135,
   0.03521412,
   0.03553734};
   gre = new TGraphErrors(17,S12_ABz_vs_p_fx1183,S12_ABz_vs_p_fy1183,S12_ABz_vs_p_fex1183,S12_ABz_vs_p_fey1183);
   gre->SetName("S12_ABz_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_ABz_vs_p1183 = new TH1F("Graph_S12_ABz_vs_p1183","S12",100,530,2570);
   Graph_S12_ABz_vs_p1183->SetMinimum(0.0163597);
   Graph_S12_ABz_vs_p1183->SetMaximum(0.3228802);
   Graph_S12_ABz_vs_p1183->SetDirectory(0);
   Graph_S12_ABz_vs_p1183->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_ABz_vs_p1183->SetLineColor(ci);
   Graph_S12_ABz_vs_p1183->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S12_ABz_vs_p1183->GetXaxis()->SetRange(0,101);
   Graph_S12_ABz_vs_p1183->GetXaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p1183->GetXaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p1183->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p1183->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_ABz_vs_p1183->GetXaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p1183->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12_ABz_vs_p1183->GetYaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p1183->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_ABz_vs_p1183->GetYaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p1183->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p1183->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_ABz_vs_p1183->GetYaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p1183->GetZaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p1183->GetZaxis()->SetTitleOffset(1);
   Graph_S12_ABz_vs_p1183->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_ABz_vs_p1183);
   
   gre->Draw("p ");
   
   Double_t S18_ABz_vs_p_fx1184[17] = {
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
   Double_t S18_ABz_vs_p_fy1184[17] = {
   0.1973028,
   0.1208855,
   0.2452864,
   0.1866453,
   0.157536,
   0.1808359,
   0.140245,
   0.1346604,
   0.151482,
   0.1737802,
   0.1054481,
   0.1913525,
   0.06706661,
   0.129052,
   0.0984123,
   0.175929,
   0.09212518};
   Double_t S18_ABz_vs_p_fex1184[17] = {
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
   Double_t S18_ABz_vs_p_fey1184[17] = {
   0.05563339,
   0.05206445,
   0.04902827,
   0.04675054,
   0.0447158,
   0.04260622,
   0.04131545,
   0.03974347,
   0.03855494,
   0.037415,
   0.03672822,
   0.03614655,
   0.03586735,
   0.03556111,
   0.03535824,
   0.03559818,
   0.03582148};
   gre = new TGraphErrors(17,S18_ABz_vs_p_fx1184,S18_ABz_vs_p_fy1184,S18_ABz_vs_p_fex1184,S18_ABz_vs_p_fey1184);
   gre->SetName("S18_ABz_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_ABz_vs_p1184 = new TH1F("Graph_S18_ABz_vs_p1184","S18",100,530,2570);
   Graph_S18_ABz_vs_p1184->SetMinimum(0.004887716);
   Graph_S18_ABz_vs_p1184->SetMaximum(0.3206262);
   Graph_S18_ABz_vs_p1184->SetDirectory(0);
   Graph_S18_ABz_vs_p1184->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_ABz_vs_p1184->SetLineColor(ci);
   Graph_S18_ABz_vs_p1184->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S18_ABz_vs_p1184->GetXaxis()->SetRange(0,101);
   Graph_S18_ABz_vs_p1184->GetXaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p1184->GetXaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p1184->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p1184->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_ABz_vs_p1184->GetXaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p1184->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S18_ABz_vs_p1184->GetYaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p1184->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_ABz_vs_p1184->GetYaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p1184->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p1184->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_ABz_vs_p1184->GetYaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p1184->GetZaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p1184->GetZaxis()->SetTitleOffset(1);
   Graph_S18_ABz_vs_p1184->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_ABz_vs_p1184);
   
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
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
