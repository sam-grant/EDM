void ABz_vs_p_slice_overlay_vertCorr_eQ_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 23:13:58 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-412.5,-2.5,3712.5,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_ABz_vs_p_slice_fx1502[15] = {
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
   Double_t S0_ABz_vs_p_slice_fy1502[15] = {
   21.11772,
   0.3484031,
   0.6543223,
   0.3894257,
   0.1824029,
   -0.08000187,
   0.06620989,
   0.1757901,
   0.1423132,
   0.01367152,
   0.2344337,
   0.1484802,
   0.1218109,
   -0.1211212,
   0.2039042};
   Double_t S0_ABz_vs_p_slice_fex1502[15] = {
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
   Double_t S0_ABz_vs_p_slice_fey1502[15] = {
   3.528291,
   0.6696955,
   0.236921,
   0.1784256,
   0.153418,
   0.1385256,
   0.1275979,
   0.117598,
   0.111534,
   0.10866,
   0.1049121,
   0.1063108,
   0.1088871,
   0.1174469,
   0.1558484};
   TGraphErrors *gre = new TGraphErrors(15,S0_ABz_vs_p_slice_fx1502,S0_ABz_vs_p_slice_fy1502,S0_ABz_vs_p_slice_fex1502,S0_ABz_vs_p_slice_fey1502);
   gre->SetName("S0_ABz_vs_p_slice");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_ABz_vs_p_slice1502 = new TH1F("Graph_S0_ABz_vs_p_slice1502","",100,0,3300);
   Graph_S0_ABz_vs_p_slice1502->SetMinimum(-2);
   Graph_S0_ABz_vs_p_slice1502->SetMaximum(2);
   Graph_S0_ABz_vs_p_slice1502->SetDirectory(0);
   Graph_S0_ABz_vs_p_slice1502->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_ABz_vs_p_slice1502->SetLineColor(ci);
   Graph_S0_ABz_vs_p_slice1502->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0_ABz_vs_p_slice1502->GetXaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p_slice1502->GetXaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p_slice1502->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p_slice1502->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p_slice1502->GetXaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p_slice1502->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0_ABz_vs_p_slice1502->GetYaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p_slice1502->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_ABz_vs_p_slice1502->GetYaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p_slice1502->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p_slice1502->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p_slice1502->GetYaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p_slice1502->GetZaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p_slice1502->GetZaxis()->SetTitleOffset(1);
   Graph_S0_ABz_vs_p_slice1502->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_ABz_vs_p_slice1502);
   
   gre->Draw("ap");
   
   Double_t S12_ABz_vs_p_slice_fx1503[15] = {
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
   Double_t S12_ABz_vs_p_slice_fy1503[15] = {
   12.95703,
   -0.8352871,
   -0.202598,
   0.1023662,
   0.3499625,
   0.05386529,
   0.4778215,
   -0.0126871,
   0.2742239,
   0.1036317,
   0.0373246,
   0.2200694,
   -0.01549856,
   -0.1273188,
   0.02860521};
   Double_t S12_ABz_vs_p_slice_fex1503[15] = {
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
   Double_t S12_ABz_vs_p_slice_fey1503[15] = {
   2.061457,
   0.6477893,
   0.2358544,
   0.1783748,
   0.1536439,
   0.1395245,
   0.1271591,
   0.1201428,
   0.1124596,
   0.1074342,
   0.1082058,
   0.106487,
   0.1114063,
   0.1159475,
   0.1553138};
   gre = new TGraphErrors(15,S12_ABz_vs_p_slice_fx1503,S12_ABz_vs_p_slice_fy1503,S12_ABz_vs_p_slice_fex1503,S12_ABz_vs_p_slice_fey1503);
   gre->SetName("S12_ABz_vs_p_slice");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_ABz_vs_p_slice1503 = new TH1F("Graph_S12_ABz_vs_p_slice1503","S12",100,0,3300);
   Graph_S12_ABz_vs_p_slice1503->SetMinimum(-3.133232);
   Graph_S12_ABz_vs_p_slice1503->SetMaximum(16.66864);
   Graph_S12_ABz_vs_p_slice1503->SetDirectory(0);
   Graph_S12_ABz_vs_p_slice1503->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_ABz_vs_p_slice1503->SetLineColor(ci);
   Graph_S12_ABz_vs_p_slice1503->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12_ABz_vs_p_slice1503->GetXaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p_slice1503->GetXaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p_slice1503->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p_slice1503->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_ABz_vs_p_slice1503->GetXaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p_slice1503->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12_ABz_vs_p_slice1503->GetYaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p_slice1503->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_ABz_vs_p_slice1503->GetYaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p_slice1503->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p_slice1503->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_ABz_vs_p_slice1503->GetYaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p_slice1503->GetZaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p_slice1503->GetZaxis()->SetTitleOffset(1);
   Graph_S12_ABz_vs_p_slice1503->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_ABz_vs_p_slice1503);
   
   gre->Draw("p ");
   
   Double_t S18_ABz_vs_p_slice_fx1504[15] = {
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
   Double_t S18_ABz_vs_p_slice_fy1504[15] = {
   -53.63553,
   -0.3628871,
   -0.2079282,
   0.1456474,
   0.1068868,
   0.2149259,
   0.1380944,
   0.2693624,
   0.08466477,
   0.3250853,
   -0.01018799,
   0.1663687,
   0.09062648,
   0.01589583,
   0.4398457};
   Double_t S18_ABz_vs_p_slice_fex1504[15] = {
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
   Double_t S18_ABz_vs_p_slice_fey1504[15] = {
   1.327341,
   0.6663217,
   0.2353888,
   0.1766293,
   0.1555063,
   0.1414506,
   0.129057,
   0.1193956,
   0.1135674,
   0.1081957,
   0.1075123,
   0.1098063,
   0.1109001,
   0.1221082,
   0.1542606};
   gre = new TGraphErrors(15,S18_ABz_vs_p_slice_fx1504,S18_ABz_vs_p_slice_fy1504,S18_ABz_vs_p_slice_fex1504,S18_ABz_vs_p_slice_fey1504);
   gre->SetName("S18_ABz_vs_p_slice");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_ABz_vs_p_slice1504 = new TH1F("Graph_S18_ABz_vs_p_slice1504","S18",100,0,3300);
   Graph_S18_ABz_vs_p_slice1504->SetMinimum(-60.51857);
   Graph_S18_ABz_vs_p_slice1504->SetMaximum(6.149804);
   Graph_S18_ABz_vs_p_slice1504->SetDirectory(0);
   Graph_S18_ABz_vs_p_slice1504->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_ABz_vs_p_slice1504->SetLineColor(ci);
   Graph_S18_ABz_vs_p_slice1504->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S18_ABz_vs_p_slice1504->GetXaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p_slice1504->GetXaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p_slice1504->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p_slice1504->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_ABz_vs_p_slice1504->GetXaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p_slice1504->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S18_ABz_vs_p_slice1504->GetYaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p_slice1504->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_ABz_vs_p_slice1504->GetYaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p_slice1504->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p_slice1504->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_ABz_vs_p_slice1504->GetYaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p_slice1504->GetZaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p_slice1504->GetZaxis()->SetTitleOffset(1);
   Graph_S18_ABz_vs_p_slice1504->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_ABz_vs_p_slice1504);
   
   gre->Draw("p ");
   
   Double_t S12S18_ABz_vs_p_slice_fx1505[15] = {
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
   Double_t S12S18_ABz_vs_p_slice_fy1505[15] = {
   33.97677,
   -0.5240326,
   -0.2091798,
   0.1223552,
   0.2373937,
   0.1341501,
   0.3085551,
   0.1348223,
   0.1810663,
   0.2089641,
   0.01289337,
   0.19118,
   0.03649588,
   -0.0607043,
   0.05746716};
   Double_t S12S18_ABz_vs_p_slice_fex1505[15] = {
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
   Double_t S12S18_ABz_vs_p_slice_fey1505[15] = {
   1.472124,
   0.4703632,
   0.1669392,
   0.1256805,
   0.1094211,
   0.09943643,
   0.09071227,
   0.0848517,
   0.08007033,
   0.07643602,
   0.0764828,
   0.07681515,
   0.07919376,
   0.08549137,
   0.1232342};
   gre = new TGraphErrors(15,S12S18_ABz_vs_p_slice_fx1505,S12S18_ABz_vs_p_slice_fy1505,S12S18_ABz_vs_p_slice_fex1505,S12S18_ABz_vs_p_slice_fey1505);
   gre->SetName("S12S18_ABz_vs_p_slice");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_ABz_vs_p_slice1505 = new TH1F("Graph_S12S18_ABz_vs_p_slice1505","S12S18",100,0,3300);
   Graph_S12S18_ABz_vs_p_slice1505->SetMinimum(-4.638724);
   Graph_S12S18_ABz_vs_p_slice1505->SetMaximum(39.09322);
   Graph_S12S18_ABz_vs_p_slice1505->SetDirectory(0);
   Graph_S12S18_ABz_vs_p_slice1505->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_ABz_vs_p_slice1505->SetLineColor(ci);
   Graph_S12S18_ABz_vs_p_slice1505->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12S18_ABz_vs_p_slice1505->GetXaxis()->CenterTitle(true);
   Graph_S12S18_ABz_vs_p_slice1505->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_ABz_vs_p_slice1505->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_ABz_vs_p_slice1505->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_ABz_vs_p_slice1505->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_ABz_vs_p_slice1505->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12S18_ABz_vs_p_slice1505->GetYaxis()->CenterTitle(true);
   Graph_S12S18_ABz_vs_p_slice1505->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_ABz_vs_p_slice1505->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_ABz_vs_p_slice1505->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_ABz_vs_p_slice1505->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_ABz_vs_p_slice1505->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_ABz_vs_p_slice1505->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_ABz_vs_p_slice1505->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_ABz_vs_p_slice1505->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_ABz_vs_p_slice1505);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_ABz_vs_p_slice_fx1506[15] = {
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
   Double_t S0S12S18_ABz_vs_p_slice_fy1506[15] = {
   21.59193,
   -0.2239914,
   0.07834806,
   0.2116165,
   0.2182861,
   0.06686058,
   0.2240158,
   0.1516977,
   0.1670204,
   0.1416426,
   0.08712483,
   0.1788451,
   0.07195925,
   -0.0750897,
   0.1033383};
   Double_t S0S12S18_ABz_vs_p_slice_fex1506[15] = {
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
   Double_t S0S12S18_ABz_vs_p_slice_fey1506[15] = {
   0.8482899,
   0.3882869,
   0.1366293,
   0.1028397,
   0.08917315,
   0.08086019,
   0.07399585,
   0.06889292,
   0.06514537,
   0.06261535,
   0.06193345,
   0.06244021,
   0.06448088,
   0.06999947,
   0.1009807};
   gre = new TGraphErrors(15,S0S12S18_ABz_vs_p_slice_fx1506,S0S12S18_ABz_vs_p_slice_fy1506,S0S12S18_ABz_vs_p_slice_fex1506,S0S12S18_ABz_vs_p_slice_fey1506);
   gre->SetName("S0S12S18_ABz_vs_p_slice");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_ABz_vs_p_slice1506 = new TH1F("Graph_S0S12S18_ABz_vs_p_slice1506","S0S12S18",100,0,3300);
   Graph_S0S12S18_ABz_vs_p_slice1506->SetMinimum(-2.917528);
   Graph_S0S12S18_ABz_vs_p_slice1506->SetMaximum(24.74547);
   Graph_S0S12S18_ABz_vs_p_slice1506->SetDirectory(0);
   Graph_S0S12S18_ABz_vs_p_slice1506->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_ABz_vs_p_slice1506->SetLineColor(ci);
   Graph_S0S12S18_ABz_vs_p_slice1506->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0S12S18_ABz_vs_p_slice1506->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_ABz_vs_p_slice1506->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p_slice1506->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_ABz_vs_p_slice1506->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_ABz_vs_p_slice1506->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_ABz_vs_p_slice1506->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0S12S18_ABz_vs_p_slice1506->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_ABz_vs_p_slice1506->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_ABz_vs_p_slice1506->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p_slice1506->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_ABz_vs_p_slice1506->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_ABz_vs_p_slice1506->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_ABz_vs_p_slice1506->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p_slice1506->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_ABz_vs_p_slice1506->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_ABz_vs_p_slice1506);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_ABz_vs_p_slice","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_ABz_vs_p_slice","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_ABz_vs_p_slice","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12S18_ABz_vs_p_slice","S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S0S12S18_ABz_vs_p_slice","S0S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff6600");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
