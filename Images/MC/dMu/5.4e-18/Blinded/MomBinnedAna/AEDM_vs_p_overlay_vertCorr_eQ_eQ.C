void AEDM_vs_p_overlay_vertCorr_eQ_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Mar 24 00:35:41 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(249.5,-0.10625,2850.5,0.45625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_AEDM_vs_p_fx1122[17] = {
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
   Double_t S0_AEDM_vs_p_fy1122[17] = {
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
   Double_t S0_AEDM_vs_p_fex1122[17] = {
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
   Double_t S0_AEDM_vs_p_fey1122[17] = {
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
   TGraphErrors *gre = new TGraphErrors(17,S0_AEDM_vs_p_fx1122,S0_AEDM_vs_p_fy1122,S0_AEDM_vs_p_fex1122,S0_AEDM_vs_p_fey1122);
   gre->SetName("S0_AEDM_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_AEDM_vs_p1122 = new TH1F("Graph_S0_AEDM_vs_p1122","",100,530,2570);
   Graph_S0_AEDM_vs_p1122->SetMinimum(-0.05);
   Graph_S0_AEDM_vs_p1122->SetMaximum(0.4);
   Graph_S0_AEDM_vs_p1122->SetDirectory(0);
   Graph_S0_AEDM_vs_p1122->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_AEDM_vs_p1122->SetLineColor(ci);
   Graph_S0_AEDM_vs_p1122->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S0_AEDM_vs_p1122->GetXaxis()->SetRange(0,101);
   Graph_S0_AEDM_vs_p1122->GetXaxis()->CenterTitle(true);
   Graph_S0_AEDM_vs_p1122->GetXaxis()->SetLabelFont(42);
   Graph_S0_AEDM_vs_p1122->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_AEDM_vs_p1122->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_AEDM_vs_p1122->GetXaxis()->SetTitleFont(42);
   Graph_S0_AEDM_vs_p1122->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0_AEDM_vs_p1122->GetYaxis()->CenterTitle(true);
   Graph_S0_AEDM_vs_p1122->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_AEDM_vs_p1122->GetYaxis()->SetLabelFont(42);
   Graph_S0_AEDM_vs_p1122->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_AEDM_vs_p1122->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_AEDM_vs_p1122->GetYaxis()->SetTitleFont(42);
   Graph_S0_AEDM_vs_p1122->GetZaxis()->SetLabelFont(42);
   Graph_S0_AEDM_vs_p1122->GetZaxis()->SetTitleOffset(1);
   Graph_S0_AEDM_vs_p1122->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_AEDM_vs_p1122);
   
   gre->Draw("ap");
   
   Double_t S12_AEDM_vs_p_fx1123[17] = {
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
   Double_t S12_AEDM_vs_p_fy1123[17] = {
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
   Double_t S12_AEDM_vs_p_fex1123[17] = {
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
   Double_t S12_AEDM_vs_p_fey1123[17] = {
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
   gre = new TGraphErrors(17,S12_AEDM_vs_p_fx1123,S12_AEDM_vs_p_fy1123,S12_AEDM_vs_p_fex1123,S12_AEDM_vs_p_fey1123);
   gre->SetName("S12_AEDM_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_AEDM_vs_p1123 = new TH1F("Graph_S12_AEDM_vs_p1123","S12",100,530,2570);
   Graph_S12_AEDM_vs_p1123->SetMinimum(0.02290286);
   Graph_S12_AEDM_vs_p1123->SetMaximum(0.3700217);
   Graph_S12_AEDM_vs_p1123->SetDirectory(0);
   Graph_S12_AEDM_vs_p1123->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_AEDM_vs_p1123->SetLineColor(ci);
   Graph_S12_AEDM_vs_p1123->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S12_AEDM_vs_p1123->GetXaxis()->SetRange(0,101);
   Graph_S12_AEDM_vs_p1123->GetXaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p1123->GetXaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p1123->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_AEDM_vs_p1123->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_AEDM_vs_p1123->GetXaxis()->SetTitleFont(42);
   Graph_S12_AEDM_vs_p1123->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S12_AEDM_vs_p1123->GetYaxis()->CenterTitle(true);
   Graph_S12_AEDM_vs_p1123->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_AEDM_vs_p1123->GetYaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p1123->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_AEDM_vs_p1123->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_AEDM_vs_p1123->GetYaxis()->SetTitleFont(42);
   Graph_S12_AEDM_vs_p1123->GetZaxis()->SetLabelFont(42);
   Graph_S12_AEDM_vs_p1123->GetZaxis()->SetTitleOffset(1);
   Graph_S12_AEDM_vs_p1123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_AEDM_vs_p1123);
   
   gre->Draw("p ");
   
   Double_t S18_AEDM_vs_p_fx1124[17] = {
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
   Double_t S18_AEDM_vs_p_fy1124[17] = {
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
   Double_t S18_AEDM_vs_p_fex1124[17] = {
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
   Double_t S18_AEDM_vs_p_fey1124[17] = {
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
   gre = new TGraphErrors(17,S18_AEDM_vs_p_fx1124,S18_AEDM_vs_p_fy1124,S18_AEDM_vs_p_fex1124,S18_AEDM_vs_p_fey1124);
   gre->SetName("S18_AEDM_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_AEDM_vs_p1124 = new TH1F("Graph_S18_AEDM_vs_p1124","S18",100,530,2570);
   Graph_S18_AEDM_vs_p1124->SetMinimum(0.01113929);
   Graph_S18_AEDM_vs_p1124->SetMaximum(0.3133326);
   Graph_S18_AEDM_vs_p1124->SetDirectory(0);
   Graph_S18_AEDM_vs_p1124->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_AEDM_vs_p1124->SetLineColor(ci);
   Graph_S18_AEDM_vs_p1124->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_S18_AEDM_vs_p1124->GetXaxis()->SetRange(0,101);
   Graph_S18_AEDM_vs_p1124->GetXaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p1124->GetXaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p1124->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p1124->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_AEDM_vs_p1124->GetXaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p1124->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S18_AEDM_vs_p1124->GetYaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p1124->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_AEDM_vs_p1124->GetYaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p1124->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p1124->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_AEDM_vs_p1124->GetYaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p1124->GetZaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p1124->GetZaxis()->SetTitleOffset(1);
   Graph_S18_AEDM_vs_p1124->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_AEDM_vs_p1124);
   
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
