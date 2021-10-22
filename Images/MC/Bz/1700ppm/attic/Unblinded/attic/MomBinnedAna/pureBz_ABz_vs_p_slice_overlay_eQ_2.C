void pureBz_ABz_vs_p_slice_overlay_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 12:22:50 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-410,-0.725,3690,0.525);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_pureBz_ABz_vs_p_slice_fx1332[14] = {
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
   Double_t S0_pureBz_ABz_vs_p_slice_fy1332[14] = {
   -0.03361443,
   0.1158735,
   0.182326,
   0.207118,
   0.1817813,
   0.1292716,
   0.160619,
   0.2254905,
   0.1769918,
   0.1579049,
   0.1305425,
   0.1261891,
   0.06383084,
   0.06676691};
   Double_t S0_pureBz_ABz_vs_p_slice_fex1332[14] = {
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
   Double_t S0_pureBz_ABz_vs_p_slice_fey1332[14] = {
   0.1578006,
   0.05438322,
   0.04088614,
   0.03552558,
   0.03207243,
   0.02943943,
   0.02740029,
   0.02585293,
   0.02503388,
   0.02470874,
   0.02482221,
   0.02550233,
   0.02754942,
   0.0419133};
   TGraphErrors *gre = new TGraphErrors(14,S0_pureBz_ABz_vs_p_slice_fx1332,S0_pureBz_ABz_vs_p_slice_fy1332,S0_pureBz_ABz_vs_p_slice_fex1332,S0_pureBz_ABz_vs_p_slice_fey1332);
   gre->SetName("S0_pureBz_ABz_vs_p_slice");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_pureBz_ABz_vs_p_slice1332 = new TH1F("Graph_S0_pureBz_ABz_vs_p_slice1332","",100,0,3280);
   Graph_S0_pureBz_ABz_vs_p_slice1332->SetMinimum(-0.6);
   Graph_S0_pureBz_ABz_vs_p_slice1332->SetMaximum(0.4);
   Graph_S0_pureBz_ABz_vs_p_slice1332->SetDirectory(0);
   Graph_S0_pureBz_ABz_vs_p_slice1332->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_pureBz_ABz_vs_p_slice1332->SetLineColor(ci);
   Graph_S0_pureBz_ABz_vs_p_slice1332->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0_pureBz_ABz_vs_p_slice1332->GetXaxis()->CenterTitle(true);
   Graph_S0_pureBz_ABz_vs_p_slice1332->GetXaxis()->SetLabelFont(42);
   Graph_S0_pureBz_ABz_vs_p_slice1332->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_pureBz_ABz_vs_p_slice1332->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_pureBz_ABz_vs_p_slice1332->GetXaxis()->SetTitleFont(42);
   Graph_S0_pureBz_ABz_vs_p_slice1332->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0_pureBz_ABz_vs_p_slice1332->GetYaxis()->CenterTitle(true);
   Graph_S0_pureBz_ABz_vs_p_slice1332->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_pureBz_ABz_vs_p_slice1332->GetYaxis()->SetLabelFont(42);
   Graph_S0_pureBz_ABz_vs_p_slice1332->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_pureBz_ABz_vs_p_slice1332->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_pureBz_ABz_vs_p_slice1332->GetYaxis()->SetTitleFont(42);
   Graph_S0_pureBz_ABz_vs_p_slice1332->GetZaxis()->SetLabelFont(42);
   Graph_S0_pureBz_ABz_vs_p_slice1332->GetZaxis()->SetTitleOffset(1);
   Graph_S0_pureBz_ABz_vs_p_slice1332->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_pureBz_ABz_vs_p_slice1332);
   
   gre->Draw("ap");
   
   Double_t S12_pureBz_ABz_vs_p_slice_fx1333[14] = {
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
   Double_t S12_pureBz_ABz_vs_p_slice_fy1333[14] = {
   -0.3244835,
   0.05579922,
   0.05169974,
   0.2281411,
   0.1276182,
   0.2432068,
   0.1850447,
   0.1451084,
   0.1518044,
   0.07489377,
   0.124059,
   0.08236399,
   0.1332341,
   -0.005670101};
   Double_t S12_pureBz_ABz_vs_p_slice_fex1333[14] = {
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
   Double_t S12_pureBz_ABz_vs_p_slice_fey1333[14] = {
   0.1523901,
   0.05466079,
   0.04098984,
   0.03572095,
   0.03222504,
   0.02951595,
   0.02759995,
   0.02601751,
   0.02525132,
   0.02495504,
   0.02508781,
   0.0259448,
   0.02811803,
   0.04299848};
   gre = new TGraphErrors(14,S12_pureBz_ABz_vs_p_slice_fx1333,S12_pureBz_ABz_vs_p_slice_fy1333,S12_pureBz_ABz_vs_p_slice_fex1333,S12_pureBz_ABz_vs_p_slice_fey1333);
   gre->SetName("S12_pureBz_ABz_vs_p_slice");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_pureBz_ABz_vs_p_slice1333 = new TH1F("Graph_S12_pureBz_ABz_vs_p_slice1333","S12",100,0,3280);
   Graph_S12_pureBz_ABz_vs_p_slice1333->SetMinimum(-0.5518333);
   Graph_S12_pureBz_ABz_vs_p_slice1333->SetMaximum(0.3476824);
   Graph_S12_pureBz_ABz_vs_p_slice1333->SetDirectory(0);
   Graph_S12_pureBz_ABz_vs_p_slice1333->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_pureBz_ABz_vs_p_slice1333->SetLineColor(ci);
   Graph_S12_pureBz_ABz_vs_p_slice1333->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12_pureBz_ABz_vs_p_slice1333->GetXaxis()->CenterTitle(true);
   Graph_S12_pureBz_ABz_vs_p_slice1333->GetXaxis()->SetLabelFont(42);
   Graph_S12_pureBz_ABz_vs_p_slice1333->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_pureBz_ABz_vs_p_slice1333->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_pureBz_ABz_vs_p_slice1333->GetXaxis()->SetTitleFont(42);
   Graph_S12_pureBz_ABz_vs_p_slice1333->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12_pureBz_ABz_vs_p_slice1333->GetYaxis()->CenterTitle(true);
   Graph_S12_pureBz_ABz_vs_p_slice1333->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_pureBz_ABz_vs_p_slice1333->GetYaxis()->SetLabelFont(42);
   Graph_S12_pureBz_ABz_vs_p_slice1333->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_pureBz_ABz_vs_p_slice1333->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_pureBz_ABz_vs_p_slice1333->GetYaxis()->SetTitleFont(42);
   Graph_S12_pureBz_ABz_vs_p_slice1333->GetZaxis()->SetLabelFont(42);
   Graph_S12_pureBz_ABz_vs_p_slice1333->GetZaxis()->SetTitleOffset(1);
   Graph_S12_pureBz_ABz_vs_p_slice1333->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_pureBz_ABz_vs_p_slice1333);
   
   gre->Draw("p ");
   
   Double_t S18_pureBz_ABz_vs_p_slice_fx1334[14] = {
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
   Double_t S18_pureBz_ABz_vs_p_slice_fy1334[14] = {
   -0.08498581,
   0.09679071,
   0.1427293,
   0.1827238,
   0.1717321,
   0.1600356,
   0.1434386,
   0.140226,
   0.132739,
   0.1144485,
   0.136694,
   0.1092057,
   0.04974424,
   -0.001221467};
   Double_t S18_pureBz_ABz_vs_p_slice_fex1334[14] = {
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
   Double_t S18_pureBz_ABz_vs_p_slice_fey1334[14] = {
   0.1566808,
   0.05477412,
   0.04097944,
   0.03578529,
   0.0323875,
   0.02971511,
   0.02772902,
   0.02626013,
   0.02550829,
   0.02514384,
   0.02533455,
   0.02620137,
   0.02857897,
   0.0440188};
   gre = new TGraphErrors(14,S18_pureBz_ABz_vs_p_slice_fx1334,S18_pureBz_ABz_vs_p_slice_fy1334,S18_pureBz_ABz_vs_p_slice_fex1334,S18_pureBz_ABz_vs_p_slice_fey1334);
   gre->SetName("S18_pureBz_ABz_vs_p_slice");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_pureBz_ABz_vs_p_slice1334 = new TH1F("Graph_S18_pureBz_ABz_vs_p_slice1334","S18",100,0,3280);
   Graph_S18_pureBz_ABz_vs_p_slice1334->SetMinimum(-0.2876842);
   Graph_S18_pureBz_ABz_vs_p_slice1334->SetMaximum(0.2645266);
   Graph_S18_pureBz_ABz_vs_p_slice1334->SetDirectory(0);
   Graph_S18_pureBz_ABz_vs_p_slice1334->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_pureBz_ABz_vs_p_slice1334->SetLineColor(ci);
   Graph_S18_pureBz_ABz_vs_p_slice1334->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S18_pureBz_ABz_vs_p_slice1334->GetXaxis()->CenterTitle(true);
   Graph_S18_pureBz_ABz_vs_p_slice1334->GetXaxis()->SetLabelFont(42);
   Graph_S18_pureBz_ABz_vs_p_slice1334->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_pureBz_ABz_vs_p_slice1334->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_pureBz_ABz_vs_p_slice1334->GetXaxis()->SetTitleFont(42);
   Graph_S18_pureBz_ABz_vs_p_slice1334->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S18_pureBz_ABz_vs_p_slice1334->GetYaxis()->CenterTitle(true);
   Graph_S18_pureBz_ABz_vs_p_slice1334->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_pureBz_ABz_vs_p_slice1334->GetYaxis()->SetLabelFont(42);
   Graph_S18_pureBz_ABz_vs_p_slice1334->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_pureBz_ABz_vs_p_slice1334->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_pureBz_ABz_vs_p_slice1334->GetYaxis()->SetTitleFont(42);
   Graph_S18_pureBz_ABz_vs_p_slice1334->GetZaxis()->SetLabelFont(42);
   Graph_S18_pureBz_ABz_vs_p_slice1334->GetZaxis()->SetTitleOffset(1);
   Graph_S18_pureBz_ABz_vs_p_slice1334->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_pureBz_ABz_vs_p_slice1334);
   
   gre->Draw("p ");
   
   Double_t S12S18_pureBz_ABz_vs_p_slice_fx1335[14] = {
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
   Double_t S12S18_pureBz_ABz_vs_p_slice_fy1335[14] = {
   -0.2075,
   0.07590858,
   0.0965204,
   0.20511,
   0.1501896,
   0.2023636,
   0.1643672,
   0.1424921,
   0.1422935,
   0.09425113,
   0.1301702,
   0.09632512,
   0.09347058,
   -0.007294172};
   Double_t S12S18_pureBz_ABz_vs_p_slice_fex1335[14] = {
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
   Double_t S12S18_pureBz_ABz_vs_p_slice_fey1335[14] = {
   0.1093314,
   0.03869572,
   0.02898343,
   0.02528352,
   0.02284624,
   0.02094296,
   0.01956409,
   0.01848425,
   0.01794892,
   0.01771561,
   0.01783195,
   0.01844642,
   0.02006506,
   0.03102097};
   gre = new TGraphErrors(14,S12S18_pureBz_ABz_vs_p_slice_fx1335,S12S18_pureBz_ABz_vs_p_slice_fy1335,S12S18_pureBz_ABz_vs_p_slice_fex1335,S12S18_pureBz_ABz_vs_p_slice_fey1335);
   gre->SetName("S12S18_pureBz_ABz_vs_p_slice");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_pureBz_ABz_vs_p_slice1335 = new TH1F("Graph_S12S18_pureBz_ABz_vs_p_slice1335","S12S18",100,0,3280);
   Graph_S12S18_pureBz_ABz_vs_p_slice1335->SetMinimum(-0.3715539);
   Graph_S12S18_pureBz_ABz_vs_p_slice1335->SetMaximum(0.285116);
   Graph_S12S18_pureBz_ABz_vs_p_slice1335->SetDirectory(0);
   Graph_S12S18_pureBz_ABz_vs_p_slice1335->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_pureBz_ABz_vs_p_slice1335->SetLineColor(ci);
   Graph_S12S18_pureBz_ABz_vs_p_slice1335->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12S18_pureBz_ABz_vs_p_slice1335->GetXaxis()->CenterTitle(true);
   Graph_S12S18_pureBz_ABz_vs_p_slice1335->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_pureBz_ABz_vs_p_slice1335->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_pureBz_ABz_vs_p_slice1335->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_pureBz_ABz_vs_p_slice1335->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_pureBz_ABz_vs_p_slice1335->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12S18_pureBz_ABz_vs_p_slice1335->GetYaxis()->CenterTitle(true);
   Graph_S12S18_pureBz_ABz_vs_p_slice1335->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_pureBz_ABz_vs_p_slice1335->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_pureBz_ABz_vs_p_slice1335->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_pureBz_ABz_vs_p_slice1335->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_pureBz_ABz_vs_p_slice1335->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_pureBz_ABz_vs_p_slice1335->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_pureBz_ABz_vs_p_slice1335->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_pureBz_ABz_vs_p_slice1335->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_pureBz_ABz_vs_p_slice1335);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_pureBz_ABz_vs_p_slice_fx1336[14] = {
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
   Double_t S0S12S18_pureBz_ABz_vs_p_slice_fy1336[14] = {
   -0.1516498,
   0.09007676,
   0.125452,
   0.2057121,
   0.1613362,
   0.1776827,
   0.1630449,
   0.1704718,
   0.1537273,
   0.1159073,
   0.1303759,
   0.1061205,
   0.0830691,
   0.02095264};
   Double_t S0S12S18_pureBz_ABz_vs_p_slice_fex1336[14] = {
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
   Double_t S0S12S18_pureBz_ABz_vs_p_slice_fey1336[14] = {
   0.08991685,
   0.03153195,
   0.02364714,
   0.02060099,
   0.01860951,
   0.0170672,
   0.01592372,
   0.0150379,
   0.01458872,
   0.01439909,
   0.0144846,
   0.01495263,
   0.01622935,
   0.02510083};
   gre = new TGraphErrors(14,S0S12S18_pureBz_ABz_vs_p_slice_fx1336,S0S12S18_pureBz_ABz_vs_p_slice_fy1336,S0S12S18_pureBz_ABz_vs_p_slice_fex1336,S0S12S18_pureBz_ABz_vs_p_slice_fey1336);
   gre->SetName("S0S12S18_pureBz_ABz_vs_p_slice");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_pureBz_ABz_vs_p_slice1336 = new TH1F("Graph_S0S12S18_pureBz_ABz_vs_p_slice1336","S0S12S18",100,0,3280);
   Graph_S0S12S18_pureBz_ABz_vs_p_slice1336->SetMinimum(-0.2883546);
   Graph_S0S12S18_pureBz_ABz_vs_p_slice1336->SetMaximum(0.273101);
   Graph_S0S12S18_pureBz_ABz_vs_p_slice1336->SetDirectory(0);
   Graph_S0S12S18_pureBz_ABz_vs_p_slice1336->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_pureBz_ABz_vs_p_slice1336->SetLineColor(ci);
   Graph_S0S12S18_pureBz_ABz_vs_p_slice1336->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0S12S18_pureBz_ABz_vs_p_slice1336->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_pureBz_ABz_vs_p_slice1336->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_pureBz_ABz_vs_p_slice1336->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_pureBz_ABz_vs_p_slice1336->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_pureBz_ABz_vs_p_slice1336->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_pureBz_ABz_vs_p_slice1336->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0S12S18_pureBz_ABz_vs_p_slice1336->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_pureBz_ABz_vs_p_slice1336->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_pureBz_ABz_vs_p_slice1336->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_pureBz_ABz_vs_p_slice1336->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_pureBz_ABz_vs_p_slice1336->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_pureBz_ABz_vs_p_slice1336->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_pureBz_ABz_vs_p_slice1336->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_pureBz_ABz_vs_p_slice1336->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_pureBz_ABz_vs_p_slice1336->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_pureBz_ABz_vs_p_slice1336);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_pureBz_ABz_vs_p_slice","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_pureBz_ABz_vs_p_slice","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_pureBz_ABz_vs_p_slice","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12S18_pureBz_ABz_vs_p_slice","S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S0S12S18_pureBz_ABz_vs_p_slice","S0S12S18","lpf");
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
