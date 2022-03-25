void AllDecaysFit()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 22 09:46:13 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(495.7923,-0.05375,3033.312,0.28375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t allDecays_fx1023[12] = {
   124.2539,
   373.7923,
   623.4572,
   873.0274,
   1122.67,
   1372.178,
   1621.49,
   1870.756,
   2119.553,
   2367.462,
   2613.359,
   2850.479};
   Double_t allDecays_fy1023[12] = {
   0.1744367,
   0.1848512,
   0.1806557,
   0.1607852,
   0.166076,
   0.1478725,
   0.1366553,
   0.122396,
   0.09858814,
   0.09293956,
   0.06052757,
   0.02845461};
   Double_t allDecays_fex1023[12] = {
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
   0,
   0};
   Double_t allDecays_fey1023[12] = {
   0.0331956,
   0.01328248,
   0.009768104,
   0.007959068,
   0.006830319,
   0.006060764,
   0.00551679,
   0.005123823,
   0.004841789,
   0.004655644,
   0.004566403,
   0.004713196};
   TGraphErrors *gre = new TGraphErrors(12,allDecays_fx1023,allDecays_fy1023,allDecays_fex1023,allDecays_fey1023);
   gre->SetName("allDecays");
   gre->SetTitle(";Decay positron momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_allDecays1023 = new TH1F("Graph_allDecays1023","",100,0,3123.101);
   Graph_allDecays1023->SetMinimum(-0.02);
   Graph_allDecays1023->SetMaximum(0.25);
   Graph_allDecays1023->SetDirectory(0);
   Graph_allDecays1023->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_allDecays1023->SetLineColor(ci);
   Graph_allDecays1023->GetXaxis()->SetTitle("Decay positron momentum [MeV]");
   Graph_allDecays1023->GetXaxis()->SetRange(25,89);
   Graph_allDecays1023->GetXaxis()->CenterTitle(true);
   Graph_allDecays1023->GetXaxis()->SetLabelFont(42);
   Graph_allDecays1023->GetXaxis()->SetTitleSize(0.04);
   Graph_allDecays1023->GetXaxis()->SetTitleOffset(1.1);
   Graph_allDecays1023->GetXaxis()->SetTitleFont(42);
   Graph_allDecays1023->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_allDecays1023->GetYaxis()->CenterTitle(true);
   Graph_allDecays1023->GetYaxis()->SetNdivisions(4000510);
   Graph_allDecays1023->GetYaxis()->SetLabelFont(42);
   Graph_allDecays1023->GetYaxis()->SetTitleSize(0.04);
   Graph_allDecays1023->GetYaxis()->SetTitleOffset(1.25);
   Graph_allDecays1023->GetYaxis()->SetTitleFont(42);
   Graph_allDecays1023->GetZaxis()->SetLabelFont(42);
   Graph_allDecays1023->GetZaxis()->SetTitleOffset(1);
   Graph_allDecays1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_allDecays1023);
   
   
   TF1 *DilutionFunc1024 = new TF1("*DilutionFunc",750,2750,2);
    //The original function : DilutionFunc had originally been created by:
    //TF1 *DilutionFunc = new TF1("DilutionFunc",DilutionFunc,750,2750,2, 1, TF1::EAddToList::kNo);
   DilutionFunc1024->SetRange(750,2750);
   DilutionFunc1024->SetName("DilutionFunc");
   DilutionFunc1024->SetTitle("DilutionFunc");
   DilutionFunc1024->SetSavedPoint(0,0.1692053);
   DilutionFunc1024->SetSavedPoint(1,0.1687587);
   DilutionFunc1024->SetSavedPoint(2,0.168299);
   DilutionFunc1024->SetSavedPoint(3,0.1678261);
   DilutionFunc1024->SetSavedPoint(4,0.1673401);
   DilutionFunc1024->SetSavedPoint(5,0.1668409);
   DilutionFunc1024->SetSavedPoint(6,0.1663284);
   DilutionFunc1024->SetSavedPoint(7,0.1658024);
   DilutionFunc1024->SetSavedPoint(8,0.1652631);
   DilutionFunc1024->SetSavedPoint(9,0.1647102);
   DilutionFunc1024->SetSavedPoint(10,0.1641438);
   DilutionFunc1024->SetSavedPoint(11,0.1635638);
   DilutionFunc1024->SetSavedPoint(12,0.16297);
   DilutionFunc1024->SetSavedPoint(13,0.1623625);
   DilutionFunc1024->SetSavedPoint(14,0.1617411);
   DilutionFunc1024->SetSavedPoint(15,0.1611059);
   DilutionFunc1024->SetSavedPoint(16,0.1604566);
   DilutionFunc1024->SetSavedPoint(17,0.1597934);
   DilutionFunc1024->SetSavedPoint(18,0.159116);
   DilutionFunc1024->SetSavedPoint(19,0.1584245);
   DilutionFunc1024->SetSavedPoint(20,0.1577187);
   DilutionFunc1024->SetSavedPoint(21,0.1569987);
   DilutionFunc1024->SetSavedPoint(22,0.1562643);
   DilutionFunc1024->SetSavedPoint(23,0.1555155);
   DilutionFunc1024->SetSavedPoint(24,0.1547521);
   DilutionFunc1024->SetSavedPoint(25,0.1539742);
   DilutionFunc1024->SetSavedPoint(26,0.1531817);
   DilutionFunc1024->SetSavedPoint(27,0.1523745);
   DilutionFunc1024->SetSavedPoint(28,0.1515526);
   DilutionFunc1024->SetSavedPoint(29,0.1507158);
   DilutionFunc1024->SetSavedPoint(30,0.1498641);
   DilutionFunc1024->SetSavedPoint(31,0.1489975);
   DilutionFunc1024->SetSavedPoint(32,0.1481158);
   DilutionFunc1024->SetSavedPoint(33,0.1472191);
   DilutionFunc1024->SetSavedPoint(34,0.1463072);
   DilutionFunc1024->SetSavedPoint(35,0.1453801);
   DilutionFunc1024->SetSavedPoint(36,0.1444377);
   DilutionFunc1024->SetSavedPoint(37,0.1434799);
   DilutionFunc1024->SetSavedPoint(38,0.1425068);
   DilutionFunc1024->SetSavedPoint(39,0.1415181);
   DilutionFunc1024->SetSavedPoint(40,0.1405139);
   DilutionFunc1024->SetSavedPoint(41,0.1394941);
   DilutionFunc1024->SetSavedPoint(42,0.1384586);
   DilutionFunc1024->SetSavedPoint(43,0.1374073);
   DilutionFunc1024->SetSavedPoint(44,0.1363403);
   DilutionFunc1024->SetSavedPoint(45,0.1352573);
   DilutionFunc1024->SetSavedPoint(46,0.1341584);
   DilutionFunc1024->SetSavedPoint(47,0.1330435);
   DilutionFunc1024->SetSavedPoint(48,0.1319126);
   DilutionFunc1024->SetSavedPoint(49,0.1307655);
   DilutionFunc1024->SetSavedPoint(50,0.1296021);
   DilutionFunc1024->SetSavedPoint(51,0.1284225);
   DilutionFunc1024->SetSavedPoint(52,0.1272266);
   DilutionFunc1024->SetSavedPoint(53,0.1260142);
   DilutionFunc1024->SetSavedPoint(54,0.1247854);
   DilutionFunc1024->SetSavedPoint(55,0.12354);
   DilutionFunc1024->SetSavedPoint(56,0.122278);
   DilutionFunc1024->SetSavedPoint(57,0.1209994);
   DilutionFunc1024->SetSavedPoint(58,0.119704);
   DilutionFunc1024->SetSavedPoint(59,0.1183918);
   DilutionFunc1024->SetSavedPoint(60,0.1170628);
   DilutionFunc1024->SetSavedPoint(61,0.1157168);
   DilutionFunc1024->SetSavedPoint(62,0.1143538);
   DilutionFunc1024->SetSavedPoint(63,0.1129737);
   DilutionFunc1024->SetSavedPoint(64,0.1115765);
   DilutionFunc1024->SetSavedPoint(65,0.1101621);
   DilutionFunc1024->SetSavedPoint(66,0.1087305);
   DilutionFunc1024->SetSavedPoint(67,0.1072815);
   DilutionFunc1024->SetSavedPoint(68,0.1058151);
   DilutionFunc1024->SetSavedPoint(69,0.1043312);
   DilutionFunc1024->SetSavedPoint(70,0.1028298);
   DilutionFunc1024->SetSavedPoint(71,0.1013109);
   DilutionFunc1024->SetSavedPoint(72,0.09977422);
   DilutionFunc1024->SetSavedPoint(73,0.09821985);
   DilutionFunc1024->SetSavedPoint(74,0.09664768);
   DilutionFunc1024->SetSavedPoint(75,0.09505766);
   DilutionFunc1024->SetSavedPoint(76,0.09344971);
   DilutionFunc1024->SetSavedPoint(77,0.09182377);
   DilutionFunc1024->SetSavedPoint(78,0.09017977);
   DilutionFunc1024->SetSavedPoint(79,0.08851764);
   DilutionFunc1024->SetSavedPoint(80,0.08683733);
   DilutionFunc1024->SetSavedPoint(81,0.08513876);
   DilutionFunc1024->SetSavedPoint(82,0.08342187);
   DilutionFunc1024->SetSavedPoint(83,0.08168659);
   DilutionFunc1024->SetSavedPoint(84,0.07993286);
   DilutionFunc1024->SetSavedPoint(85,0.07816061);
   DilutionFunc1024->SetSavedPoint(86,0.07636977);
   DilutionFunc1024->SetSavedPoint(87,0.07456028);
   DilutionFunc1024->SetSavedPoint(88,0.07273207);
   DilutionFunc1024->SetSavedPoint(89,0.07088508);
   DilutionFunc1024->SetSavedPoint(90,0.06901923);
   DilutionFunc1024->SetSavedPoint(91,0.06713447);
   DilutionFunc1024->SetSavedPoint(92,0.06523073);
   DilutionFunc1024->SetSavedPoint(93,0.06330795);
   DilutionFunc1024->SetSavedPoint(94,0.06136604);
   DilutionFunc1024->SetSavedPoint(95,0.05940496);
   DilutionFunc1024->SetSavedPoint(96,0.05742464);
   DilutionFunc1024->SetSavedPoint(97,0.055425);
   DilutionFunc1024->SetSavedPoint(98,0.05340598);
   DilutionFunc1024->SetSavedPoint(99,0.05136752);
   DilutionFunc1024->SetSavedPoint(100,0.04930954);
   DilutionFunc1024->SetSavedPoint(101,750);
   DilutionFunc1024->SetSavedPoint(102,2750);
   DilutionFunc1024->SetFillColor(19);
   DilutionFunc1024->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1024->SetLineColor(ci);
   DilutionFunc1024->SetLineWidth(3);
   DilutionFunc1024->SetChisquare(6.431059);
   DilutionFunc1024->SetNDF(6);
   DilutionFunc1024->GetXaxis()->SetLabelFont(42);
   DilutionFunc1024->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1024->GetXaxis()->SetTitleFont(42);
   DilutionFunc1024->GetYaxis()->SetLabelFont(42);
   DilutionFunc1024->GetYaxis()->SetTitleFont(42);
   DilutionFunc1024->SetParameter(0,0.1771685);
   DilutionFunc1024->SetParError(0,0.004123951);
   DilutionFunc1024->SetParLimits(0,0,0);
   DilutionFunc1024->SetParameter(1,-0.0001571462);
   DilutionFunc1024->SetParError(1,2.695618e-06);
   DilutionFunc1024->SetParLimits(1,0,0);
   DilutionFunc1024->SetParent(gre);
   gre->GetListOfFunctions()->Add(DilutionFunc1024);
   gre->Draw("ap");
   
   TF1 *DilutionFunc1025 = new TF1("*DilutionFunc",750,2750,2);
    //The original function : DilutionFunc had originally been created by:
    //TF1 *DilutionFunc = new TF1("DilutionFunc",DilutionFunc,750,2750,2, 1, TF1::EAddToList::kNo);
   DilutionFunc1025->SetRange(750,2750);
   DilutionFunc1025->SetName("DilutionFunc");
   DilutionFunc1025->SetTitle("DilutionFunc");
   DilutionFunc1025->SetSavedPoint(0,0.1692053);
   DilutionFunc1025->SetSavedPoint(1,0.1687587);
   DilutionFunc1025->SetSavedPoint(2,0.168299);
   DilutionFunc1025->SetSavedPoint(3,0.1678261);
   DilutionFunc1025->SetSavedPoint(4,0.1673401);
   DilutionFunc1025->SetSavedPoint(5,0.1668409);
   DilutionFunc1025->SetSavedPoint(6,0.1663284);
   DilutionFunc1025->SetSavedPoint(7,0.1658024);
   DilutionFunc1025->SetSavedPoint(8,0.1652631);
   DilutionFunc1025->SetSavedPoint(9,0.1647102);
   DilutionFunc1025->SetSavedPoint(10,0.1641438);
   DilutionFunc1025->SetSavedPoint(11,0.1635638);
   DilutionFunc1025->SetSavedPoint(12,0.16297);
   DilutionFunc1025->SetSavedPoint(13,0.1623625);
   DilutionFunc1025->SetSavedPoint(14,0.1617411);
   DilutionFunc1025->SetSavedPoint(15,0.1611059);
   DilutionFunc1025->SetSavedPoint(16,0.1604566);
   DilutionFunc1025->SetSavedPoint(17,0.1597934);
   DilutionFunc1025->SetSavedPoint(18,0.159116);
   DilutionFunc1025->SetSavedPoint(19,0.1584245);
   DilutionFunc1025->SetSavedPoint(20,0.1577187);
   DilutionFunc1025->SetSavedPoint(21,0.1569987);
   DilutionFunc1025->SetSavedPoint(22,0.1562643);
   DilutionFunc1025->SetSavedPoint(23,0.1555155);
   DilutionFunc1025->SetSavedPoint(24,0.1547521);
   DilutionFunc1025->SetSavedPoint(25,0.1539742);
   DilutionFunc1025->SetSavedPoint(26,0.1531817);
   DilutionFunc1025->SetSavedPoint(27,0.1523745);
   DilutionFunc1025->SetSavedPoint(28,0.1515526);
   DilutionFunc1025->SetSavedPoint(29,0.1507158);
   DilutionFunc1025->SetSavedPoint(30,0.1498641);
   DilutionFunc1025->SetSavedPoint(31,0.1489975);
   DilutionFunc1025->SetSavedPoint(32,0.1481158);
   DilutionFunc1025->SetSavedPoint(33,0.1472191);
   DilutionFunc1025->SetSavedPoint(34,0.1463072);
   DilutionFunc1025->SetSavedPoint(35,0.1453801);
   DilutionFunc1025->SetSavedPoint(36,0.1444377);
   DilutionFunc1025->SetSavedPoint(37,0.1434799);
   DilutionFunc1025->SetSavedPoint(38,0.1425068);
   DilutionFunc1025->SetSavedPoint(39,0.1415181);
   DilutionFunc1025->SetSavedPoint(40,0.1405139);
   DilutionFunc1025->SetSavedPoint(41,0.1394941);
   DilutionFunc1025->SetSavedPoint(42,0.1384586);
   DilutionFunc1025->SetSavedPoint(43,0.1374073);
   DilutionFunc1025->SetSavedPoint(44,0.1363403);
   DilutionFunc1025->SetSavedPoint(45,0.1352573);
   DilutionFunc1025->SetSavedPoint(46,0.1341584);
   DilutionFunc1025->SetSavedPoint(47,0.1330435);
   DilutionFunc1025->SetSavedPoint(48,0.1319126);
   DilutionFunc1025->SetSavedPoint(49,0.1307655);
   DilutionFunc1025->SetSavedPoint(50,0.1296021);
   DilutionFunc1025->SetSavedPoint(51,0.1284225);
   DilutionFunc1025->SetSavedPoint(52,0.1272266);
   DilutionFunc1025->SetSavedPoint(53,0.1260142);
   DilutionFunc1025->SetSavedPoint(54,0.1247854);
   DilutionFunc1025->SetSavedPoint(55,0.12354);
   DilutionFunc1025->SetSavedPoint(56,0.122278);
   DilutionFunc1025->SetSavedPoint(57,0.1209994);
   DilutionFunc1025->SetSavedPoint(58,0.119704);
   DilutionFunc1025->SetSavedPoint(59,0.1183918);
   DilutionFunc1025->SetSavedPoint(60,0.1170628);
   DilutionFunc1025->SetSavedPoint(61,0.1157168);
   DilutionFunc1025->SetSavedPoint(62,0.1143538);
   DilutionFunc1025->SetSavedPoint(63,0.1129737);
   DilutionFunc1025->SetSavedPoint(64,0.1115765);
   DilutionFunc1025->SetSavedPoint(65,0.1101621);
   DilutionFunc1025->SetSavedPoint(66,0.1087305);
   DilutionFunc1025->SetSavedPoint(67,0.1072815);
   DilutionFunc1025->SetSavedPoint(68,0.1058151);
   DilutionFunc1025->SetSavedPoint(69,0.1043312);
   DilutionFunc1025->SetSavedPoint(70,0.1028298);
   DilutionFunc1025->SetSavedPoint(71,0.1013109);
   DilutionFunc1025->SetSavedPoint(72,0.09977422);
   DilutionFunc1025->SetSavedPoint(73,0.09821985);
   DilutionFunc1025->SetSavedPoint(74,0.09664768);
   DilutionFunc1025->SetSavedPoint(75,0.09505766);
   DilutionFunc1025->SetSavedPoint(76,0.09344971);
   DilutionFunc1025->SetSavedPoint(77,0.09182377);
   DilutionFunc1025->SetSavedPoint(78,0.09017977);
   DilutionFunc1025->SetSavedPoint(79,0.08851764);
   DilutionFunc1025->SetSavedPoint(80,0.08683733);
   DilutionFunc1025->SetSavedPoint(81,0.08513876);
   DilutionFunc1025->SetSavedPoint(82,0.08342187);
   DilutionFunc1025->SetSavedPoint(83,0.08168659);
   DilutionFunc1025->SetSavedPoint(84,0.07993286);
   DilutionFunc1025->SetSavedPoint(85,0.07816061);
   DilutionFunc1025->SetSavedPoint(86,0.07636977);
   DilutionFunc1025->SetSavedPoint(87,0.07456028);
   DilutionFunc1025->SetSavedPoint(88,0.07273207);
   DilutionFunc1025->SetSavedPoint(89,0.07088508);
   DilutionFunc1025->SetSavedPoint(90,0.06901923);
   DilutionFunc1025->SetSavedPoint(91,0.06713447);
   DilutionFunc1025->SetSavedPoint(92,0.06523073);
   DilutionFunc1025->SetSavedPoint(93,0.06330795);
   DilutionFunc1025->SetSavedPoint(94,0.06136604);
   DilutionFunc1025->SetSavedPoint(95,0.05940496);
   DilutionFunc1025->SetSavedPoint(96,0.05742464);
   DilutionFunc1025->SetSavedPoint(97,0.055425);
   DilutionFunc1025->SetSavedPoint(98,0.05340598);
   DilutionFunc1025->SetSavedPoint(99,0.05136752);
   DilutionFunc1025->SetSavedPoint(100,0.04930954);
   DilutionFunc1025->SetSavedPoint(101,750);
   DilutionFunc1025->SetSavedPoint(102,2750);
   DilutionFunc1025->SetFillColor(19);
   DilutionFunc1025->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1025->SetLineColor(ci);
   DilutionFunc1025->SetLineWidth(3);
   DilutionFunc1025->SetChisquare(6.431059);
   DilutionFunc1025->SetNDF(6);
   DilutionFunc1025->GetXaxis()->SetLabelFont(42);
   DilutionFunc1025->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1025->GetXaxis()->SetTitleFont(42);
   DilutionFunc1025->GetYaxis()->SetLabelFont(42);
   DilutionFunc1025->GetYaxis()->SetTitleFont(42);
   DilutionFunc1025->SetParameter(0,0.1771685);
   DilutionFunc1025->SetParError(0,0.004123951);
   DilutionFunc1025->SetParLimits(0,0,0);
   DilutionFunc1025->SetParameter(1,-0.0001571462);
   DilutionFunc1025->SetParError(1,2.695618e-06);
   DilutionFunc1025->SetParLimits(1,0,0);
   DilutionFunc1025->Draw("SAME");
   
   TLegend *leg = new TLegend(0.125,0.79,0.875,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("allDecays","Sim: all decays","lpf");
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
   pt_LaTex = pt->AddText("1.07
");
   pt_LaTex = pt->AddText("0.177#pm0.004");
   pt_LaTex = pt->AddText("(-1.57#pm0.03)#times10^{-4}");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
