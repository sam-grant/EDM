void AEDM_vs_p_overlay_vertCorr_eQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 23 19:19:31 2021) by ROOT version 6.22/06
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
   0.1238097,
   0.2168275,
   0.2269321,
   0.1758355,
   0.1794212,
   0.1723778,
   0.2266528,
   0.1318347,
   0.2185134,
   0.1093872,
   0.1689766,
   0.1718953,
   0.1961462,
   0.159734,
   0.1356518,
   0.1871239,
   0.1260062};
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
   0.0551739,
   0.05155177,
   0.04864536,
   0.04611252,
   0.04398916,
   0.04211734,
   0.04042884,
   0.03901726,
   0.03784934,
   0.03675434,
   0.03568263,
   0.03491284,
   0.03451144,
   0.03410956,
   0.03370104,
   0.0334786,
   0.03318408};
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
   0.2836227,
   0.2734952,
   0.142587,
   0.1714194,
   0.1971915,
   0.06786095,
   0.2417512,
   0.2217183,
   0.1778864,
   0.1761976,
   0.100795,
   0.1875868,
   0.1115039,
   0.08750653,
   0.1285029,
   0.1474064,
   0.1020685};
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
   0.05507414,
   0.05157382,
   0.04866071,
   0.04613259,
   0.04427759,
   0.04241332,
   0.04066775,
   0.03914351,
   0.03794192,
   0.03689219,
   0.0359008,
   0.03515054,
   0.03470272,
   0.03435009,
   0.03396125,
   0.03378705,
   0.03374835};
   gre = new TGraphErrors(17,S12_AEDM_vs_p_fx1021,S12_AEDM_vs_p_fy1021,S12_AEDM_vs_p_fex1021,S12_AEDM_vs_p_fey1021);
   gre->SetName("S12_AEDM_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_AEDM_vs_p1021 = new TH1F("Graph_S12_AEDM_vs_p1021","S12",100,530,2570);
   Graph_S12_AEDM_vs_p1021->SetMinimum(0.02290286);
   Graph_S12_AEDM_vs_p1021->SetMaximum(0.3700217);
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
   0.1939894,
   0.06407445,
   0.1928787,
   0.06640724,
   0.1644033,
   0.223908,
   0.1456721,
   0.1325812,
   0.2477096,
   0.1434932,
   0.1984547,
   0.1385411,
   0.124556,
   0.1813401,
   0.1491437,
   0.1098704,
   0.1395741};
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
   0.05516545,
   0.05169746,
   0.04871574,
   0.04645052,
   0.04445638,
   0.04259721,
   0.04089589,
   0.03943466,
   0.03826347,
   0.03695809,
   0.03618042,
   0.03556438,
   0.03489437,
   0.0347635,
   0.03426748,
   0.03387256,
   0.03392484};
   gre = new TGraphErrors(17,S18_AEDM_vs_p_fx1022,S18_AEDM_vs_p_fy1022,S18_AEDM_vs_p_fex1022,S18_AEDM_vs_p_fey1022);
   gre->SetName("S18_AEDM_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_AEDM_vs_p1022 = new TH1F("Graph_S18_AEDM_vs_p1022","S18",100,530,2570);
   Graph_S18_AEDM_vs_p1022->SetMinimum(0.01113929);
   Graph_S18_AEDM_vs_p1022->SetMaximum(0.3133326);
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
