void EDM_vs_p_slice_overlay_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 20:17:16 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-4.625,3378.375,1.625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_AEDM_vs_p_fx1168[15] = {
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
   Double_t S0_AEDM_vs_p_fy1168[15] = {
   -0.9718072,
   0.1037797,
   0.05145689,
   0.1261949,
   0.2219082,
   0.1771942,
   0.1991227,
   0.1737698,
   0.1378269,
   0.1838282,
   0.1481293,
   0.1586322,
   0.1090449,
   0.05718187,
   0.06986146};
   Double_t S0_AEDM_vs_p_fex1168[15] = {
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
   Double_t S0_AEDM_vs_p_fey1168[15] = {
   1.028955,
   0.1557322,
   0.05392799,
   0.04062356,
   0.03547061,
   0.03189816,
   0.02922615,
   0.02721538,
   0.0256545,
   0.02459087,
   0.02402982,
   0.02364303,
   0.02373521,
   0.0242578,
   0.03438917};
   TGraphErrors *gre = new TGraphErrors(15,S0_AEDM_vs_p_fx1168,S0_AEDM_vs_p_fy1168,S0_AEDM_vs_p_fex1168,S0_AEDM_vs_p_fey1168);
   gre->SetName("S0_AEDM_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_AEDM_vs_p1168 = new TH1F("Graph_S0_AEDM_vs_p1168","",100,0,3300);
   Graph_S0_AEDM_vs_p1168->SetMinimum(-4);
   Graph_S0_AEDM_vs_p1168->SetMaximum(1);
   Graph_S0_AEDM_vs_p1168->SetDirectory(0);
   Graph_S0_AEDM_vs_p1168->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_AEDM_vs_p1168->SetLineColor(ci);
   Graph_S0_AEDM_vs_p1168->GetXaxis()->SetTitle("p [MeV]: in range p #minus 200 < p < p #plus 200 MeV");
   Graph_S0_AEDM_vs_p1168->GetXaxis()->SetRange(1,91);
   Graph_S0_AEDM_vs_p1168->GetXaxis()->CenterTitle(true);
   Graph_S0_AEDM_vs_p1168->GetXaxis()->SetLabelFont(42);
   Graph_S0_AEDM_vs_p1168->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_AEDM_vs_p1168->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_AEDM_vs_p1168->GetXaxis()->SetTitleFont(42);
   Graph_S0_AEDM_vs_p1168->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0_AEDM_vs_p1168->GetYaxis()->CenterTitle(true);
   Graph_S0_AEDM_vs_p1168->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_AEDM_vs_p1168->GetYaxis()->SetLabelFont(42);
   Graph_S0_AEDM_vs_p1168->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_AEDM_vs_p1168->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_AEDM_vs_p1168->GetYaxis()->SetTitleFont(42);
   Graph_S0_AEDM_vs_p1168->GetZaxis()->SetLabelFont(42);
   Graph_S0_AEDM_vs_p1168->GetZaxis()->SetTitleOffset(1);
   Graph_S0_AEDM_vs_p1168->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_AEDM_vs_p1168);
   
   gre->Draw("ap");
   
   Double_t S12_AEDM_vs_p_fx1169[15] = {
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
   Double_t S12_AEDM_vs_p_fy1169[15] = {
   -0.2835642,
   0.09904946,
   0.06676862,
   0.223888,
   0.2097578,
   0.1849012,
   0.152826,
   0.1993279,
   0.1396801,
   0.1503389,
   0.1081067,
   0.1271958,
   0.1273023,
   0.1211828,
   -0.0070482};
   Double_t S12_AEDM_vs_p_fex1169[15] = {
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
   Double_t S12_AEDM_vs_p_fey1169[15] = {
   0.9699031,
   0.1508008,
   0.05412255,
   0.04056139,
   0.03548536,
   0.03201127,
   0.02941615,
   0.02729521,
   0.0257844,
   0.02474569,
   0.02421628,
   0.02394851,
   0.02419302,
   0.02504136,
   0.03559669};
   gre = new TGraphErrors(15,S12_AEDM_vs_p_fx1169,S12_AEDM_vs_p_fy1169,S12_AEDM_vs_p_fex1169,S12_AEDM_vs_p_fey1169);
   gre->SetName("S12_AEDM_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_AEDM_vs_p1169 = new TH1F("Graph_S12_AEDM_vs_p1169","S12",100,0,3300);
   Graph_S12_AEDM_vs_p1169->SetMinimum(-1.447448);
   Graph_S12_AEDM_vs_p1169->SetMaximum(0.8803195);
   Graph_S12_AEDM_vs_p1169->SetDirectory(0);
   Graph_S12_AEDM_vs_p1169->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_AEDM_vs_p1169->SetLineColor(ci);
   Graph_S12_AEDM_vs_p1169->GetXaxis()->SetTitle("p [MeV]: in range p #minus 200 < p < p #plus 200 MeV");
   Graph_S12_AEDM_vs_p1169->GetXaxis()->SetRange(1,91);
   Graph_S12_AEDM_vs_p1169->GetXaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p1169->GetXaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p1169->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_AEDM_vs_p1169->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_AEDM_vs_p1169->GetXaxis()->SetTitleFont(42);
   Graph_S12_AEDM_vs_p1169->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S12_AEDM_vs_p1169->GetYaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p1169->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_AEDM_vs_p1169->GetYaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p1169->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_AEDM_vs_p1169->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_AEDM_vs_p1169->GetYaxis()->SetTitleFont(42);
   Graph_S12_AEDM_vs_p1169->GetZaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p1169->GetZaxis()->SetTitleOffset(1);
   Graph_S12_AEDM_vs_p1169->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_AEDM_vs_p1169);
   
   gre->Draw("p ");
   
   Double_t S18_AEDM_vs_p_fx1170[15] = {
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
   Double_t S18_AEDM_vs_p_fy1170[15] = {
   -1.541876,
   0.3885142,
   0.03992226,
   0.2091435,
   0.1288299,
   0.1135913,
   0.1855633,
   0.1882517,
   0.1705682,
   0.1317487,
   0.1649574,
   0.1241594,
   0.1346543,
   0.07115036,
   0.02376957};
   Double_t S18_AEDM_vs_p_fex1170[15] = {
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
   Double_t S18_AEDM_vs_p_fey1170[15] = {
   1.014134,
   0.1533544,
   0.05422984,
   0.04060318,
   0.03554101,
   0.03218403,
   0.0295637,
   0.02751323,
   0.02589959,
   0.02496517,
   0.02446885,
   0.02403522,
   0.02443198,
   0.02532668,
   0.03697939};
   gre = new TGraphErrors(15,S18_AEDM_vs_p_fx1170,S18_AEDM_vs_p_fy1170,S18_AEDM_vs_p_fex1170,S18_AEDM_vs_p_fey1170);
   gre->SetName("S18_AEDM_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_AEDM_vs_p1170 = new TH1F("Graph_S18_AEDM_vs_p1170","S18",100,0,3300);
   Graph_S18_AEDM_vs_p1170->SetMinimum(-2.865798);
   Graph_S18_AEDM_vs_p1170->SetMaximum(0.8516565);
   Graph_S18_AEDM_vs_p1170->SetDirectory(0);
   Graph_S18_AEDM_vs_p1170->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_AEDM_vs_p1170->SetLineColor(ci);
   Graph_S18_AEDM_vs_p1170->GetXaxis()->SetTitle("p [MeV]: in range p #minus 200 < p < p #plus 200 MeV");
   Graph_S18_AEDM_vs_p1170->GetXaxis()->SetRange(1,91);
   Graph_S18_AEDM_vs_p1170->GetXaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p1170->GetXaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p1170->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p1170->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_AEDM_vs_p1170->GetXaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p1170->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S18_AEDM_vs_p1170->GetYaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p1170->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_AEDM_vs_p1170->GetYaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p1170->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p1170->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_AEDM_vs_p1170->GetYaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p1170->GetZaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p1170->GetZaxis()->SetTitleOffset(1);
   Graph_S18_AEDM_vs_p1170->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_AEDM_vs_p1170);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_AEDM_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_AEDM_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_AEDM_vs_p","S18","lpf");
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
