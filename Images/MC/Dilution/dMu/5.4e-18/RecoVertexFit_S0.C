void RecoVertexFit_S0()
{
//=========Macro generated from canvas: S0/c
//=========  (Tue Feb 22 00:54:06 2022) by ROOT version 6.24/06
   TCanvas *S0 = new TCanvas("S0", "c",0,0,800,600);
   S0->SetHighLightColor(2);
   S0->Range(466.8485,-0.0425,3026.846,0.1825);
   S0->SetFillColor(0);
   S0->SetBorderMode(0);
   S0->SetBorderSize(2);
   S0->SetFrameBorderMode(0);
   S0->SetFrameBorderMode(0);
   
   Double_t S0_trackReco_fx1003[11] = {
   451.6521,
   653.2702,
   879.9265,
   1123.052,
   1371.41,
   1620.742,
   1868,
   2116.568,
   2363.186,
   2615.293,
   2789.549};
   Double_t S0_trackReco_fy1003[11] = {
   -0.09525966,
   0.1404137,
   0.09170242,
   0.1061599,
   0.1588496,
   0.1286133,
   0.07065536,
   0.0796958,
   0.04415059,
   0.02731853,
   -0.03673226};
   Double_t S0_trackReco_fex1003[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_trackReco_fey1003[11] = {
   0.1459337,
   0.0516724,
   0.03072077,
   0.02456332,
   0.02072479,
   0.01792119,
   0.01644969,
   0.01600459,
   0.01587969,
   0.01526188,
   0.031968};
   TGraphErrors *gre = new TGraphErrors(11,S0_trackReco_fx1003,S0_trackReco_fy1003,S0_trackReco_fex1003,S0_trackReco_fey1003);
   gre->SetName("S0_trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_trackReco1003 = new TH1F("Graph_S0_trackReco1003","",100,217.8624,3023.339);
   Graph_S0_trackReco1003->SetMinimum(-0.02);
   Graph_S0_trackReco1003->SetMaximum(0.16);
   Graph_S0_trackReco1003->SetDirectory(0);
   Graph_S0_trackReco1003->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_trackReco1003->SetLineColor(ci);
   Graph_S0_trackReco1003->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0_trackReco1003->GetXaxis()->SetRange(19,91);
   Graph_S0_trackReco1003->GetXaxis()->CenterTitle(true);
   Graph_S0_trackReco1003->GetXaxis()->SetLabelFont(42);
   Graph_S0_trackReco1003->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_trackReco1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_trackReco1003->GetXaxis()->SetTitleFont(42);
   Graph_S0_trackReco1003->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S0_trackReco1003->GetYaxis()->CenterTitle(true);
   Graph_S0_trackReco1003->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_trackReco1003->GetYaxis()->SetLabelFont(42);
   Graph_S0_trackReco1003->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_trackReco1003->GetYaxis()->SetTitleOffset(1.25);
   Graph_S0_trackReco1003->GetYaxis()->SetTitleFont(42);
   Graph_S0_trackReco1003->GetZaxis()->SetLabelFont(42);
   Graph_S0_trackReco1003->GetZaxis()->SetTitleOffset(1);
   Graph_S0_trackReco1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_trackReco1003);
   
   
   TF1 *DilutionFunc1004 = new TF1("*DilutionFunc",750,2750,2);
    //The original function : DilutionFunc had originally been created by:
    //TF1 *DilutionFunc = new TF1("DilutionFunc",DilutionFunc,750,2750,2, 1, TF1::EAddToList::kNo);
   DilutionFunc1004->SetRange(750,2750);
   DilutionFunc1004->SetName("DilutionFunc");
   DilutionFunc1004->SetTitle("DilutionFunc");
   DilutionFunc1004->SetSavedPoint(0,0.1416912);
   DilutionFunc1004->SetSavedPoint(1,0.1412122);
   DilutionFunc1004->SetSavedPoint(2,0.140719);
   DilutionFunc1004->SetSavedPoint(3,0.1402116);
   DilutionFunc1004->SetSavedPoint(4,0.1396899);
   DilutionFunc1004->SetSavedPoint(5,0.1391539);
   DilutionFunc1004->SetSavedPoint(6,0.1386034);
   DilutionFunc1004->SetSavedPoint(7,0.1380385);
   DilutionFunc1004->SetSavedPoint(8,0.1374589);
   DilutionFunc1004->SetSavedPoint(9,0.1368646);
   DilutionFunc1004->SetSavedPoint(10,0.1362556);
   DilutionFunc1004->SetSavedPoint(11,0.1356317);
   DilutionFunc1004->SetSavedPoint(12,0.134993);
   DilutionFunc1004->SetSavedPoint(13,0.1343392);
   DilutionFunc1004->SetSavedPoint(14,0.1336704);
   DilutionFunc1004->SetSavedPoint(15,0.1329864);
   DilutionFunc1004->SetSavedPoint(16,0.1322872);
   DilutionFunc1004->SetSavedPoint(17,0.1315727);
   DilutionFunc1004->SetSavedPoint(18,0.1308428);
   DilutionFunc1004->SetSavedPoint(19,0.1300975);
   DilutionFunc1004->SetSavedPoint(20,0.1293366);
   DilutionFunc1004->SetSavedPoint(21,0.1285602);
   DilutionFunc1004->SetSavedPoint(22,0.127768);
   DilutionFunc1004->SetSavedPoint(23,0.12696);
   DilutionFunc1004->SetSavedPoint(24,0.1261362);
   DilutionFunc1004->SetSavedPoint(25,0.1252965);
   DilutionFunc1004->SetSavedPoint(26,0.1244408);
   DilutionFunc1004->SetSavedPoint(27,0.123569);
   DilutionFunc1004->SetSavedPoint(28,0.122681);
   DilutionFunc1004->SetSavedPoint(29,0.1217768);
   DilutionFunc1004->SetSavedPoint(30,0.1208562);
   DilutionFunc1004->SetSavedPoint(31,0.1199193);
   DilutionFunc1004->SetSavedPoint(32,0.1189659);
   DilutionFunc1004->SetSavedPoint(33,0.117996);
   DilutionFunc1004->SetSavedPoint(34,0.1170094);
   DilutionFunc1004->SetSavedPoint(35,0.1160061);
   DilutionFunc1004->SetSavedPoint(36,0.114986);
   DilutionFunc1004->SetSavedPoint(37,0.1139491);
   DilutionFunc1004->SetSavedPoint(38,0.1128952);
   DilutionFunc1004->SetSavedPoint(39,0.1118243);
   DilutionFunc1004->SetSavedPoint(40,0.1107363);
   DilutionFunc1004->SetSavedPoint(41,0.1096311);
   DilutionFunc1004->SetSavedPoint(42,0.1085086);
   DilutionFunc1004->SetSavedPoint(43,0.1073689);
   DilutionFunc1004->SetSavedPoint(44,0.1062117);
   DilutionFunc1004->SetSavedPoint(45,0.105037);
   DilutionFunc1004->SetSavedPoint(46,0.1038447);
   DilutionFunc1004->SetSavedPoint(47,0.1026349);
   DilutionFunc1004->SetSavedPoint(48,0.1014072);
   DilutionFunc1004->SetSavedPoint(49,0.1001618);
   DilutionFunc1004->SetSavedPoint(50,0.09889852);
   DilutionFunc1004->SetSavedPoint(51,0.09761727);
   DilutionFunc1004->SetSavedPoint(52,0.09631797);
   DilutionFunc1004->SetSavedPoint(53,0.09500056);
   DilutionFunc1004->SetSavedPoint(54,0.09366496);
   DilutionFunc1004->SetSavedPoint(55,0.09231109);
   DilutionFunc1004->SetSavedPoint(56,0.09093886);
   DilutionFunc1004->SetSavedPoint(57,0.08954821);
   DilutionFunc1004->SetSavedPoint(58,0.08813906);
   DilutionFunc1004->SetSavedPoint(59,0.08671132);
   DilutionFunc1004->SetSavedPoint(60,0.08526491);
   DilutionFunc1004->SetSavedPoint(61,0.08379977);
   DilutionFunc1004->SetSavedPoint(62,0.08231581);
   DilutionFunc1004->SetSavedPoint(63,0.08081295);
   DilutionFunc1004->SetSavedPoint(64,0.07929112);
   DilutionFunc1004->SetSavedPoint(65,0.07775024);
   DilutionFunc1004->SetSavedPoint(66,0.07619022);
   DilutionFunc1004->SetSavedPoint(67,0.074611);
   DilutionFunc1004->SetSavedPoint(68,0.07301249);
   DilutionFunc1004->SetSavedPoint(69,0.07139461);
   DilutionFunc1004->SetSavedPoint(70,0.06975729);
   DilutionFunc1004->SetSavedPoint(71,0.06810045);
   DilutionFunc1004->SetSavedPoint(72,0.066424);
   DilutionFunc1004->SetSavedPoint(73,0.06472789);
   DilutionFunc1004->SetSavedPoint(74,0.06301201);
   DilutionFunc1004->SetSavedPoint(75,0.0612763);
   DilutionFunc1004->SetSavedPoint(76,0.05952068);
   DilutionFunc1004->SetSavedPoint(77,0.05774507);
   DilutionFunc1004->SetSavedPoint(78,0.05594939);
   DilutionFunc1004->SetSavedPoint(79,0.05413356);
   DilutionFunc1004->SetSavedPoint(80,0.05229751);
   DilutionFunc1004->SetSavedPoint(81,0.05044115);
   DilutionFunc1004->SetSavedPoint(82,0.04856441);
   DilutionFunc1004->SetSavedPoint(83,0.04666722);
   DilutionFunc1004->SetSavedPoint(84,0.04474949);
   DilutionFunc1004->SetSavedPoint(85,0.04281114);
   DilutionFunc1004->SetSavedPoint(86,0.0408521);
   DilutionFunc1004->SetSavedPoint(87,0.03887228);
   DilutionFunc1004->SetSavedPoint(88,0.03687162);
   DilutionFunc1004->SetSavedPoint(89,0.03485003);
   DilutionFunc1004->SetSavedPoint(90,0.03280743);
   DilutionFunc1004->SetSavedPoint(91,0.03074374);
   DilutionFunc1004->SetSavedPoint(92,0.0286589);
   DilutionFunc1004->SetSavedPoint(93,0.02655281);
   DilutionFunc1004->SetSavedPoint(94,0.02442541);
   DilutionFunc1004->SetSavedPoint(95,0.02227661);
   DilutionFunc1004->SetSavedPoint(96,0.02010633);
   DilutionFunc1004->SetSavedPoint(97,0.0179145);
   DilutionFunc1004->SetSavedPoint(98,0.01570104);
   DilutionFunc1004->SetSavedPoint(99,0.01346587);
   DilutionFunc1004->SetSavedPoint(100,0.01120891);
   DilutionFunc1004->SetSavedPoint(101,750);
   DilutionFunc1004->SetSavedPoint(102,2750);
   DilutionFunc1004->SetFillColor(19);
   DilutionFunc1004->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1004->SetLineColor(ci);
   DilutionFunc1004->SetLineWidth(3);
   DilutionFunc1004->SetChisquare(10.24474);
   DilutionFunc1004->SetNDF(6);
   DilutionFunc1004->GetXaxis()->SetLabelFont(42);
   DilutionFunc1004->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1004->GetXaxis()->SetTitleFont(42);
   DilutionFunc1004->GetYaxis()->SetLabelFont(42);
   DilutionFunc1004->GetYaxis()->SetTitleFont(42);
   DilutionFunc1004->SetParameter(0,0.1501978);
   DilutionFunc1004->SetParError(0,0.01428493);
   DilutionFunc1004->SetParLimits(0,0,0);
   DilutionFunc1004->SetParameter(1,-0.0001756489);
   DilutionFunc1004->SetParError(1,8.290751e-06);
   DilutionFunc1004->SetParLimits(1,0,0);
   DilutionFunc1004->SetParent(gre);
   gre->GetListOfFunctions()->Add(DilutionFunc1004);
   gre->Draw("ap");
   
   TF1 *DilutionFunc1005 = new TF1("*DilutionFunc",750,2750,2);
    //The original function : DilutionFunc had originally been created by:
    //TF1 *DilutionFunc = new TF1("DilutionFunc",DilutionFunc,750,2750,2, 1, TF1::EAddToList::kNo);
   DilutionFunc1005->SetRange(750,2750);
   DilutionFunc1005->SetName("DilutionFunc");
   DilutionFunc1005->SetTitle("DilutionFunc");
   DilutionFunc1005->SetSavedPoint(0,0.1416912);
   DilutionFunc1005->SetSavedPoint(1,0.1412122);
   DilutionFunc1005->SetSavedPoint(2,0.140719);
   DilutionFunc1005->SetSavedPoint(3,0.1402116);
   DilutionFunc1005->SetSavedPoint(4,0.1396899);
   DilutionFunc1005->SetSavedPoint(5,0.1391539);
   DilutionFunc1005->SetSavedPoint(6,0.1386034);
   DilutionFunc1005->SetSavedPoint(7,0.1380385);
   DilutionFunc1005->SetSavedPoint(8,0.1374589);
   DilutionFunc1005->SetSavedPoint(9,0.1368646);
   DilutionFunc1005->SetSavedPoint(10,0.1362556);
   DilutionFunc1005->SetSavedPoint(11,0.1356317);
   DilutionFunc1005->SetSavedPoint(12,0.134993);
   DilutionFunc1005->SetSavedPoint(13,0.1343392);
   DilutionFunc1005->SetSavedPoint(14,0.1336704);
   DilutionFunc1005->SetSavedPoint(15,0.1329864);
   DilutionFunc1005->SetSavedPoint(16,0.1322872);
   DilutionFunc1005->SetSavedPoint(17,0.1315727);
   DilutionFunc1005->SetSavedPoint(18,0.1308428);
   DilutionFunc1005->SetSavedPoint(19,0.1300975);
   DilutionFunc1005->SetSavedPoint(20,0.1293366);
   DilutionFunc1005->SetSavedPoint(21,0.1285602);
   DilutionFunc1005->SetSavedPoint(22,0.127768);
   DilutionFunc1005->SetSavedPoint(23,0.12696);
   DilutionFunc1005->SetSavedPoint(24,0.1261362);
   DilutionFunc1005->SetSavedPoint(25,0.1252965);
   DilutionFunc1005->SetSavedPoint(26,0.1244408);
   DilutionFunc1005->SetSavedPoint(27,0.123569);
   DilutionFunc1005->SetSavedPoint(28,0.122681);
   DilutionFunc1005->SetSavedPoint(29,0.1217768);
   DilutionFunc1005->SetSavedPoint(30,0.1208562);
   DilutionFunc1005->SetSavedPoint(31,0.1199193);
   DilutionFunc1005->SetSavedPoint(32,0.1189659);
   DilutionFunc1005->SetSavedPoint(33,0.117996);
   DilutionFunc1005->SetSavedPoint(34,0.1170094);
   DilutionFunc1005->SetSavedPoint(35,0.1160061);
   DilutionFunc1005->SetSavedPoint(36,0.114986);
   DilutionFunc1005->SetSavedPoint(37,0.1139491);
   DilutionFunc1005->SetSavedPoint(38,0.1128952);
   DilutionFunc1005->SetSavedPoint(39,0.1118243);
   DilutionFunc1005->SetSavedPoint(40,0.1107363);
   DilutionFunc1005->SetSavedPoint(41,0.1096311);
   DilutionFunc1005->SetSavedPoint(42,0.1085086);
   DilutionFunc1005->SetSavedPoint(43,0.1073689);
   DilutionFunc1005->SetSavedPoint(44,0.1062117);
   DilutionFunc1005->SetSavedPoint(45,0.105037);
   DilutionFunc1005->SetSavedPoint(46,0.1038447);
   DilutionFunc1005->SetSavedPoint(47,0.1026349);
   DilutionFunc1005->SetSavedPoint(48,0.1014072);
   DilutionFunc1005->SetSavedPoint(49,0.1001618);
   DilutionFunc1005->SetSavedPoint(50,0.09889852);
   DilutionFunc1005->SetSavedPoint(51,0.09761727);
   DilutionFunc1005->SetSavedPoint(52,0.09631797);
   DilutionFunc1005->SetSavedPoint(53,0.09500056);
   DilutionFunc1005->SetSavedPoint(54,0.09366496);
   DilutionFunc1005->SetSavedPoint(55,0.09231109);
   DilutionFunc1005->SetSavedPoint(56,0.09093886);
   DilutionFunc1005->SetSavedPoint(57,0.08954821);
   DilutionFunc1005->SetSavedPoint(58,0.08813906);
   DilutionFunc1005->SetSavedPoint(59,0.08671132);
   DilutionFunc1005->SetSavedPoint(60,0.08526491);
   DilutionFunc1005->SetSavedPoint(61,0.08379977);
   DilutionFunc1005->SetSavedPoint(62,0.08231581);
   DilutionFunc1005->SetSavedPoint(63,0.08081295);
   DilutionFunc1005->SetSavedPoint(64,0.07929112);
   DilutionFunc1005->SetSavedPoint(65,0.07775024);
   DilutionFunc1005->SetSavedPoint(66,0.07619022);
   DilutionFunc1005->SetSavedPoint(67,0.074611);
   DilutionFunc1005->SetSavedPoint(68,0.07301249);
   DilutionFunc1005->SetSavedPoint(69,0.07139461);
   DilutionFunc1005->SetSavedPoint(70,0.06975729);
   DilutionFunc1005->SetSavedPoint(71,0.06810045);
   DilutionFunc1005->SetSavedPoint(72,0.066424);
   DilutionFunc1005->SetSavedPoint(73,0.06472789);
   DilutionFunc1005->SetSavedPoint(74,0.06301201);
   DilutionFunc1005->SetSavedPoint(75,0.0612763);
   DilutionFunc1005->SetSavedPoint(76,0.05952068);
   DilutionFunc1005->SetSavedPoint(77,0.05774507);
   DilutionFunc1005->SetSavedPoint(78,0.05594939);
   DilutionFunc1005->SetSavedPoint(79,0.05413356);
   DilutionFunc1005->SetSavedPoint(80,0.05229751);
   DilutionFunc1005->SetSavedPoint(81,0.05044115);
   DilutionFunc1005->SetSavedPoint(82,0.04856441);
   DilutionFunc1005->SetSavedPoint(83,0.04666722);
   DilutionFunc1005->SetSavedPoint(84,0.04474949);
   DilutionFunc1005->SetSavedPoint(85,0.04281114);
   DilutionFunc1005->SetSavedPoint(86,0.0408521);
   DilutionFunc1005->SetSavedPoint(87,0.03887228);
   DilutionFunc1005->SetSavedPoint(88,0.03687162);
   DilutionFunc1005->SetSavedPoint(89,0.03485003);
   DilutionFunc1005->SetSavedPoint(90,0.03280743);
   DilutionFunc1005->SetSavedPoint(91,0.03074374);
   DilutionFunc1005->SetSavedPoint(92,0.0286589);
   DilutionFunc1005->SetSavedPoint(93,0.02655281);
   DilutionFunc1005->SetSavedPoint(94,0.02442541);
   DilutionFunc1005->SetSavedPoint(95,0.02227661);
   DilutionFunc1005->SetSavedPoint(96,0.02010633);
   DilutionFunc1005->SetSavedPoint(97,0.0179145);
   DilutionFunc1005->SetSavedPoint(98,0.01570104);
   DilutionFunc1005->SetSavedPoint(99,0.01346587);
   DilutionFunc1005->SetSavedPoint(100,0.01120891);
   DilutionFunc1005->SetSavedPoint(101,750);
   DilutionFunc1005->SetSavedPoint(102,2750);
   DilutionFunc1005->SetFillColor(19);
   DilutionFunc1005->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1005->SetLineColor(ci);
   DilutionFunc1005->SetLineWidth(3);
   DilutionFunc1005->SetChisquare(10.24474);
   DilutionFunc1005->SetNDF(6);
   DilutionFunc1005->GetXaxis()->SetLabelFont(42);
   DilutionFunc1005->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1005->GetXaxis()->SetTitleFont(42);
   DilutionFunc1005->GetYaxis()->SetLabelFont(42);
   DilutionFunc1005->GetYaxis()->SetTitleFont(42);
   DilutionFunc1005->SetParameter(0,0.1501978);
   DilutionFunc1005->SetParError(0,0.01428493);
   DilutionFunc1005->SetParLimits(0,0,0);
   DilutionFunc1005->SetParameter(1,-0.0001756489);
   DilutionFunc1005->SetParError(1,8.290751e-06);
   DilutionFunc1005->SetParLimits(1,0,0);
   DilutionFunc1005->Draw("SAME");
   
   TLegend *leg = new TLegend(0.125,0.79,0.875,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_trackReco","Sim: reco vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("DilutionFunc","Fit: a(bp-1)^{2}(2bp+1)","lpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.15,0.2,0.3,0.45,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("#chi^{2}/NDF");
   pt_LaTex = pt->AddText("a");
   pt_LaTex = pt->AddText("b [MeV^{-1}]");
   pt->Draw();
   
   pt = new TPaveText(0.4,0.2,0.55,0.45,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("1.71
");
   pt_LaTex = pt->AddText("0.2
#pm0.01
");
   pt_LaTex = pt->AddText("-0.0002
#pm8e-06
");
   pt->Draw();
   S0->Modified();
   S0->cd();
   S0->SetSelected(S0);
}
