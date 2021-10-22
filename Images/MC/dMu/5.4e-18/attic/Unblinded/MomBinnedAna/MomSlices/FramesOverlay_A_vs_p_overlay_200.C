void FramesOverlay_A_vs_p_overlay_200()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 17 23:32:39 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,53,800,600);
   c->Range(-437.25,-1.9875,3605.25,16.8875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t A_vs_p_fx1001[15] = {
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
   Double_t A_vs_p_fy1001[15] = {
   -0.03344519,
   0.02374971,
   0.1881962,
   0.2581935,
   0.3083799,
   0.3009868,
   0.2912504,
   0.2589665,
   0.2737311,
   0.2211239,
   0.1701326,
   0.1643491,
   0.1290435,
   0.08355536,
   0.04951287};
   Double_t A_vs_p_fex1001[15] = {
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
   Double_t A_vs_p_fey1001[15] = {
   0.03882464,
   0.02833203,
   0.02434236,
   0.02172466,
   0.01904832,
   0.01690381,
   0.01533809,
   0.01414989,
   0.01321338,
   0.01247497,
   0.0118929,
   0.0114571,
   0.01115361,
   0.01101994,
   0.01129885};
   TGraphErrors *gre = new TGraphErrors(15,A_vs_p_fx1001,A_vs_p_fy1001,A_vs_p_fex1001,A_vs_p_fey1001);
   gre->SetName("A_vs_p");
   gre->SetTitle(";p_{e^{+} WORLD} [MeV] in range: p #minus 100 < p < p #plus 100 MeV;A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_A_vs_p1001 = new TH1F("Graph_A_vs_p1001","",100,0,3300);
   Graph_A_vs_p1001->SetMinimum(-0.1);
   Graph_A_vs_p1001->SetMaximum(15);
   Graph_A_vs_p1001->SetDirectory(0);
   Graph_A_vs_p1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1001->SetLineColor(ci);
   Graph_A_vs_p1001->GetXaxis()->SetTitle("p_{e^{+} WORLD} [MeV] in range: p #minus 100 < p < p #plus 100 MeV");
   Graph_A_vs_p1001->GetXaxis()->SetRange(0,97);
   Graph_A_vs_p1001->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1001->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1001->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1001->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1001->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_A_vs_p1001->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1001->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1001->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1001->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_A_vs_p1001->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1001->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1001->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1001);
   
   gre->Draw("ap");
   
   Double_t A_vs_p_fx1002[15] = {
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
   Double_t A_vs_p_fy1002[15] = {
   -0.03344519,
   0.02374971,
   0.1881962,
   0.2581935,
   0.3083799,
   0.3009868,
   0.2912504,
   0.2589665,
   0.2737311,
   0.2211239,
   0.1701326,
   0.1643491,
   0.1290435,
   0.08355536,
   0.04951287};
   Double_t A_vs_p_fex1002[15] = {
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
   Double_t A_vs_p_fey1002[15] = {
   0.03882464,
   0.02833203,
   0.02434236,
   0.02172466,
   0.01904832,
   0.01690381,
   0.01533809,
   0.01414989,
   0.01321338,
   0.01247497,
   0.0118929,
   0.0114571,
   0.01115361,
   0.01101994,
   0.01129885};
   gre = new TGraphErrors(15,A_vs_p_fx1002,A_vs_p_fy1002,A_vs_p_fex1002,A_vs_p_fey1002);
   gre->SetName("A_vs_p");
   gre->SetTitle(";p [MeV] in range: p #minus 100 < p < p #plus 100 MeV;A_{EDM} [mrad]");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_A_vs_p1002 = new TH1F("Graph_A_vs_p1002","",100,0,3300);
   Graph_A_vs_p1002->SetMinimum(-0.1122396);
   Graph_A_vs_p1002->SetMaximum(0.367398);
   Graph_A_vs_p1002->SetDirectory(0);
   Graph_A_vs_p1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1002->SetLineColor(ci);
   Graph_A_vs_p1002->GetXaxis()->SetTitle("p [MeV] in range: p #minus 100 < p < p #plus 100 MeV");
   Graph_A_vs_p1002->GetXaxis()->SetRange(0,97);
   Graph_A_vs_p1002->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1002->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1002->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1002->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1002->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_A_vs_p1002->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1002->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1002->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1002->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1002->GetYaxis()->SetTitleOffset(1.2);
   Graph_A_vs_p1002->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1002->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1002->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1002);
   
   gre->Draw("p ");
   
   Double_t A_vs_p_fx1003[15] = {
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
   Double_t A_vs_p_fy1003[15] = {
   0.07452184,
   1.370557,
   4.087311,
   4.869278,
   7.643838,
   9.093655,
   10.78724,
   10.55675,
   12.22887,
   10.47291,
   8.462203,
   8.555412,
   7.03904,
   4.698917,
   2.596642};
   Double_t A_vs_p_fex1003[15] = {
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
   Double_t A_vs_p_fey1003[15] = {
   0.2492237,
   0.3945616,
   0.4764994,
   0.5300001,
   0.5668013,
   0.5916524,
   0.6064882,
   0.6123629,
   0.6104577,
   0.6065757,
   0.6028463,
   0.6016504,
   0.6035849,
   0.6111239,
   0.6370813};
   gre = new TGraphErrors(15,A_vs_p_fx1003,A_vs_p_fy1003,A_vs_p_fex1003,A_vs_p_fey1003);
   gre->SetName("A_vs_p");
   gre->SetTitle(";p [MeV] in range: p #minus 100 < p < p #plus 100 MeV;A_{EDM} [mrad]");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_A_vs_p1003 = new TH1F("Graph_A_vs_p1003","",100,0,3300);
   Graph_A_vs_p1003->SetMinimum(-1.476105);
   Graph_A_vs_p1003->SetMaximum(14.14073);
   Graph_A_vs_p1003->SetDirectory(0);
   Graph_A_vs_p1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1003->SetLineColor(ci);
   Graph_A_vs_p1003->GetXaxis()->SetTitle("p [MeV] in range: p #minus 100 < p < p #plus 100 MeV");
   Graph_A_vs_p1003->GetXaxis()->SetRange(0,97);
   Graph_A_vs_p1003->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1003->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1003->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1003->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1003->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_A_vs_p1003->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1003->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1003->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1003->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1003->GetYaxis()->SetTitleOffset(1.2);
   Graph_A_vs_p1003->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1003->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1003->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1003);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.59,0.69,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("A_vs_p","WORLD","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("A_vs_p","AAR","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("A_vs_p","MRF","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
