void AEDM_vs_p_overlay_vertCorr_pValQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 23 21:34:03 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(249.5,-0.10625,2850.5,0.45625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_AEDM_vs_p_fx1020[17] = {
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
   Double_t S0_AEDM_vs_p_fy1020[17] = {
   0.1238904,
   0.2167985,
   0.2268763,
   0.1757707,
   0.1793951,
   0.1724394,
   0.2267121,
   0.1317923,
   0.2185096,
   0.1093743,
   0.1689653,
   0.1720266,
   0.1960062,
   0.1598298,
   0.1356789,
   0.1872669,
   0.12619};
   Double_t S0_AEDM_vs_p_fex1020[17] = {
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
   Double_t S0_AEDM_vs_p_fey1020[17] = {
   0.05517383,
   0.05155164,
   0.04864531,
   0.04611259,
   0.04398917,
   0.04211751,
   0.04042852,
   0.03901715,
   0.03784942,
   0.03675435,
   0.03568267,
   0.0349129,
   0.03451148,
   0.03410973,
   0.03370115,
   0.03347924,
   0.03318404};
   TGraphErrors *gre = new TGraphErrors(17,S0_AEDM_vs_p_fx1020,S0_AEDM_vs_p_fy1020,S0_AEDM_vs_p_fex1020,S0_AEDM_vs_p_fey1020);
   gre->SetName("S0_AEDM_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_AEDM_vs_p1020 = new TH1F("Graph_S0_AEDM_vs_p1020","",100,530,2570);
   Graph_S0_AEDM_vs_p1020->SetMinimum(-0.05);
   Graph_S0_AEDM_vs_p1020->SetMaximum(0.4);
   Graph_S0_AEDM_vs_p1020->SetDirectory(0);
   Graph_S0_AEDM_vs_p1020->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_AEDM_vs_p1020->SetLineColor(ci);
   Graph_S0_AEDM_vs_p1020->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0_AEDM_vs_p1020->GetXaxis()->SetRange(0,101);
   Graph_S0_AEDM_vs_p1020->GetXaxis()->CenterTitle(true);
   Graph_S0_AEDM_vs_p1020->GetXaxis()->SetLabelFont(42);
   Graph_S0_AEDM_vs_p1020->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_AEDM_vs_p1020->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_AEDM_vs_p1020->GetXaxis()->SetTitleFont(42);
   Graph_S0_AEDM_vs_p1020->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0_AEDM_vs_p1020->GetYaxis()->CenterTitle(true);
   Graph_S0_AEDM_vs_p1020->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_AEDM_vs_p1020->GetYaxis()->SetLabelFont(42);
   Graph_S0_AEDM_vs_p1020->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_AEDM_vs_p1020->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_AEDM_vs_p1020->GetYaxis()->SetTitleFont(42);
   Graph_S0_AEDM_vs_p1020->GetZaxis()->SetLabelFont(42);
   Graph_S0_AEDM_vs_p1020->GetZaxis()->SetTitleOffset(1);
   Graph_S0_AEDM_vs_p1020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_AEDM_vs_p1020);
   
   gre->Draw("ap");
   
   Double_t S12_AEDM_vs_p_fx1021[17] = {
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
   Double_t S12_AEDM_vs_p_fy1021[17] = {
   0.2833648,
   0.2734854,
   0.1426348,
   0.1713277,
   0.1972012,
   0.06778446,
   0.2418101,
   0.2217283,
   0.1778858,
   0.1763189,
   0.1006469,
   0.1874228,
   0.1115179,
   0.087174,
   0.1288426,
   0.1476021,
   0.1021234};
   Double_t S12_AEDM_vs_p_fex1021[17] = {
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
   Double_t S12_AEDM_vs_p_fey1021[17] = {
   0.05507416,
   0.05157379,
   0.04866048,
   0.04613272,
   0.04427763,
   0.04241345,
   0.04066791,
   0.03914341,
   0.03794165,
   0.03689217,
   0.03590089,
   0.0351506,
   0.0347027,
   0.03435048,
   0.03396147,
   0.03378691,
   0.03374823};
   gre = new TGraphErrors(17,S12_AEDM_vs_p_fx1021,S12_AEDM_vs_p_fy1021,S12_AEDM_vs_p_fex1021,S12_AEDM_vs_p_fey1021);
   gre->SetName("S12_AEDM_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_AEDM_vs_p1021 = new TH1F("Graph_S12_AEDM_vs_p1021","S12",100,530,2570);
   Graph_S12_AEDM_vs_p1021->SetMinimum(0.02283391);
   Graph_S12_AEDM_vs_p1021->SetMaximum(0.3697458);
   Graph_S12_AEDM_vs_p1021->SetDirectory(0);
   Graph_S12_AEDM_vs_p1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_AEDM_vs_p1021->SetLineColor(ci);
   Graph_S12_AEDM_vs_p1021->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S12_AEDM_vs_p1021->GetXaxis()->SetRange(0,101);
   Graph_S12_AEDM_vs_p1021->GetXaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p1021->GetXaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p1021->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_AEDM_vs_p1021->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_AEDM_vs_p1021->GetXaxis()->SetTitleFont(42);
   Graph_S12_AEDM_vs_p1021->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S12_AEDM_vs_p1021->GetYaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p1021->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_AEDM_vs_p1021->GetYaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p1021->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_AEDM_vs_p1021->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_AEDM_vs_p1021->GetYaxis()->SetTitleFont(42);
   Graph_S12_AEDM_vs_p1021->GetZaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p1021->GetZaxis()->SetTitleOffset(1);
   Graph_S12_AEDM_vs_p1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_AEDM_vs_p1021);
   
   gre->Draw("p ");
   
   Double_t S18_AEDM_vs_p_fx1022[17] = {
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
   Double_t S18_AEDM_vs_p_fy1022[17] = {
   0.1939162,
   0.06397132,
   0.1929744,
   0.06637604,
   0.1643872,
   0.2238758,
   0.1456805,
   0.1327011,
   0.2476268,
   0.1435202,
   0.1984882,
   0.1386593,
   0.1244961,
   0.1813797,
   0.14926,
   0.1098361,
   0.1395511};
   Double_t S18_AEDM_vs_p_fex1022[17] = {
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
   Double_t S18_AEDM_vs_p_fey1022[17] = {
   0.05516536,
   0.05169779,
   0.04871572,
   0.04645038,
   0.04445638,
   0.04259736,
   0.04089596,
   0.0394344,
   0.0382636,
   0.03695804,
   0.03618056,
   0.03556409,
   0.03489396,
   0.03476357,
   0.03426765,
   0.03387262,
   0.03392576};
   gre = new TGraphErrors(17,S18_AEDM_vs_p_fx1022,S18_AEDM_vs_p_fy1022,S18_AEDM_vs_p_fex1022,S18_AEDM_vs_p_fey1022);
   gre->SetName("S18_AEDM_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_AEDM_vs_p1022 = new TH1F("Graph_S18_AEDM_vs_p1022","S18",100,530,2570);
   Graph_S18_AEDM_vs_p1022->SetMinimum(0.01104618);
   Graph_S18_AEDM_vs_p1022->SetMaximum(0.313252);
   Graph_S18_AEDM_vs_p1022->SetDirectory(0);
   Graph_S18_AEDM_vs_p1022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_AEDM_vs_p1022->SetLineColor(ci);
   Graph_S18_AEDM_vs_p1022->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S18_AEDM_vs_p1022->GetXaxis()->SetRange(0,101);
   Graph_S18_AEDM_vs_p1022->GetXaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p1022->GetXaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p1022->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p1022->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_AEDM_vs_p1022->GetXaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p1022->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S18_AEDM_vs_p1022->GetYaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p1022->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_AEDM_vs_p1022->GetYaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p1022->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p1022->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_AEDM_vs_p1022->GetYaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p1022->GetZaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p1022->GetZaxis()->SetTitleOffset(1);
   Graph_S18_AEDM_vs_p1022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_AEDM_vs_p1022);
   
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
