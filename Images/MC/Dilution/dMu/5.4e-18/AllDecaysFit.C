void AllDecaysFit()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 20 00:05:56 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(495.7533,-0.05375,3033.074,0.28375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t allDecays_fx1023[12] = {
   124.3987,
   374.0359,
   623.6717,
   873.25,
   1122.829,
   1372.245,
   1621.478,
   1870.594,
   2119.355,
   2367.258,
   2613.22,
   2850.269};
   Double_t allDecays_fy1023[12] = {
   0.1597191,
   0.1925079,
   0.1866843,
   0.1876633,
   0.1797078,
   0.1653251,
   0.1494763,
   0.1363227,
   0.09834259,
   0.0948815,
   0.05608911,
   0.03204086};
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
   0.04200587,
   0.01683296,
   0.01241166,
   0.01015493,
   0.008740876,
   0.007783745,
   0.007086902,
   0.006579648,
   0.006200557,
   0.005940834,
   0.005809123,
   0.005973244};
   TGraphErrors *gre = new TGraphErrors(12,allDecays_fx1023,allDecays_fy1023,allDecays_fex1023,allDecays_fey1023);
   gre->SetName("allDecays");
   gre->SetTitle(";Decay positron momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_allDecays1023 = new TH1F("Graph_allDecays1023","",100,0,3122.856);
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
   DilutionFunc1024->SetSavedPoint(0,0.1907337);
   DilutionFunc1024->SetSavedPoint(1,0.1901776);
   DilutionFunc1024->SetSavedPoint(2,0.1896052);
   DilutionFunc1024->SetSavedPoint(3,0.1890165);
   DilutionFunc1024->SetSavedPoint(4,0.1884112);
   DilutionFunc1024->SetSavedPoint(5,0.1877894);
   DilutionFunc1024->SetSavedPoint(6,0.1871509);
   DilutionFunc1024->SetSavedPoint(7,0.1864957);
   DilutionFunc1024->SetSavedPoint(8,0.1858237);
   DilutionFunc1024->SetSavedPoint(9,0.1851348);
   DilutionFunc1024->SetSavedPoint(10,0.1844289);
   DilutionFunc1024->SetSavedPoint(11,0.183706);
   DilutionFunc1024->SetSavedPoint(12,0.1829659);
   DilutionFunc1024->SetSavedPoint(13,0.1822085);
   DilutionFunc1024->SetSavedPoint(14,0.1814338);
   DilutionFunc1024->SetSavedPoint(15,0.1806417);
   DilutionFunc1024->SetSavedPoint(16,0.1798321);
   DilutionFunc1024->SetSavedPoint(17,0.1790049);
   DilutionFunc1024->SetSavedPoint(18,0.1781601);
   DilutionFunc1024->SetSavedPoint(19,0.1772974);
   DilutionFunc1024->SetSavedPoint(20,0.176417);
   DilutionFunc1024->SetSavedPoint(21,0.1755186);
   DilutionFunc1024->SetSavedPoint(22,0.1746022);
   DilutionFunc1024->SetSavedPoint(23,0.1736677);
   DilutionFunc1024->SetSavedPoint(24,0.172715);
   DilutionFunc1024->SetSavedPoint(25,0.1717441);
   DilutionFunc1024->SetSavedPoint(26,0.1707548);
   DilutionFunc1024->SetSavedPoint(27,0.1697471);
   DilutionFunc1024->SetSavedPoint(28,0.1687208);
   DilutionFunc1024->SetSavedPoint(29,0.1676759);
   DilutionFunc1024->SetSavedPoint(30,0.1666123);
   DilutionFunc1024->SetSavedPoint(31,0.16553);
   DilutionFunc1024->SetSavedPoint(32,0.1644288);
   DilutionFunc1024->SetSavedPoint(33,0.1633086);
   DilutionFunc1024->SetSavedPoint(34,0.1621694);
   DilutionFunc1024->SetSavedPoint(35,0.161011);
   DilutionFunc1024->SetSavedPoint(36,0.1598335);
   DilutionFunc1024->SetSavedPoint(37,0.1586367);
   DilutionFunc1024->SetSavedPoint(38,0.1574204);
   DilutionFunc1024->SetSavedPoint(39,0.1561847);
   DilutionFunc1024->SetSavedPoint(40,0.1549295);
   DilutionFunc1024->SetSavedPoint(41,0.1536546);
   DilutionFunc1024->SetSavedPoint(42,0.15236);
   DilutionFunc1024->SetSavedPoint(43,0.1510456);
   DilutionFunc1024->SetSavedPoint(44,0.1497113);
   DilutionFunc1024->SetSavedPoint(45,0.148357);
   DilutionFunc1024->SetSavedPoint(46,0.1469827);
   DilutionFunc1024->SetSavedPoint(47,0.1455882);
   DilutionFunc1024->SetSavedPoint(48,0.1441734);
   DilutionFunc1024->SetSavedPoint(49,0.1427384);
   DilutionFunc1024->SetSavedPoint(50,0.1412829);
   DilutionFunc1024->SetSavedPoint(51,0.1398069);
   DilutionFunc1024->SetSavedPoint(52,0.1383104);
   DilutionFunc1024->SetSavedPoint(53,0.1367932);
   DilutionFunc1024->SetSavedPoint(54,0.1352553);
   DilutionFunc1024->SetSavedPoint(55,0.1336965);
   DilutionFunc1024->SetSavedPoint(56,0.1321168);
   DilutionFunc1024->SetSavedPoint(57,0.1305161);
   DilutionFunc1024->SetSavedPoint(58,0.1288943);
   DilutionFunc1024->SetSavedPoint(59,0.1272513);
   DilutionFunc1024->SetSavedPoint(60,0.125587);
   DilutionFunc1024->SetSavedPoint(61,0.1239014);
   DilutionFunc1024->SetSavedPoint(62,0.1221944);
   DilutionFunc1024->SetSavedPoint(63,0.1204659);
   DilutionFunc1024->SetSavedPoint(64,0.1187157);
   DilutionFunc1024->SetSavedPoint(65,0.1169439);
   DilutionFunc1024->SetSavedPoint(66,0.1151503);
   DilutionFunc1024->SetSavedPoint(67,0.1133348);
   DilutionFunc1024->SetSavedPoint(68,0.1114974);
   DilutionFunc1024->SetSavedPoint(69,0.1096379);
   DilutionFunc1024->SetSavedPoint(70,0.1077564);
   DilutionFunc1024->SetSavedPoint(71,0.1058526);
   DilutionFunc1024->SetSavedPoint(72,0.1039265);
   DilutionFunc1024->SetSavedPoint(73,0.1019781);
   DilutionFunc1024->SetSavedPoint(74,0.1000072);
   DilutionFunc1024->SetSavedPoint(75,0.09801374);
   DilutionFunc1024->SetSavedPoint(76,0.09599766);
   DilutionFunc1024->SetSavedPoint(77,0.09395887);
   DilutionFunc1024->SetSavedPoint(78,0.09189728);
   DilutionFunc1024->SetSavedPoint(79,0.0898128);
   DilutionFunc1024->SetSavedPoint(80,0.08770535);
   DilutionFunc1024->SetSavedPoint(81,0.08557483);
   DilutionFunc1024->SetSavedPoint(82,0.08342118);
   DilutionFunc1024->SetSavedPoint(83,0.08124429);
   DilutionFunc1024->SetSavedPoint(84,0.07904409);
   DilutionFunc1024->SetSavedPoint(85,0.07682049);
   DilutionFunc1024->SetSavedPoint(86,0.0745734);
   DilutionFunc1024->SetSavedPoint(87,0.07230274);
   DilutionFunc1024->SetSavedPoint(88,0.07000842);
   DilutionFunc1024->SetSavedPoint(89,0.06769036);
   DilutionFunc1024->SetSavedPoint(90,0.06534847);
   DilutionFunc1024->SetSavedPoint(91,0.06298267);
   DilutionFunc1024->SetSavedPoint(92,0.06059287);
   DilutionFunc1024->SetSavedPoint(93,0.05817898);
   DilutionFunc1024->SetSavedPoint(94,0.05574093);
   DilutionFunc1024->SetSavedPoint(95,0.05327861);
   DilutionFunc1024->SetSavedPoint(96,0.05079196);
   DilutionFunc1024->SetSavedPoint(97,0.04828087);
   DilutionFunc1024->SetSavedPoint(98,0.04574528);
   DilutionFunc1024->SetSavedPoint(99,0.04318509);
   DilutionFunc1024->SetSavedPoint(100,0.04060021);
   DilutionFunc1024->SetSavedPoint(101,750);
   DilutionFunc1024->SetSavedPoint(102,2750);
   DilutionFunc1024->SetFillColor(19);
   DilutionFunc1024->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1024->SetLineColor(ci);
   DilutionFunc1024->SetLineWidth(3);
   DilutionFunc1024->SetChisquare(6.806835);
   DilutionFunc1024->SetNDF(6);
   DilutionFunc1024->GetXaxis()->SetLabelFont(42);
   DilutionFunc1024->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1024->GetXaxis()->SetTitleFont(42);
   DilutionFunc1024->GetYaxis()->SetLabelFont(42);
   DilutionFunc1024->GetYaxis()->SetTitleFont(42);
   DilutionFunc1024->SetParameter(0,0.2006323);
   DilutionFunc1024->SetParError(0,0.00527276);
   DilutionFunc1024->SetParLimits(0,0,0);
   DilutionFunc1024->SetParameter(1,-0.000164367);
   DilutionFunc1024->SetParError(1,2.735552e-06);
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
   DilutionFunc1025->SetSavedPoint(0,0.1907337);
   DilutionFunc1025->SetSavedPoint(1,0.1901776);
   DilutionFunc1025->SetSavedPoint(2,0.1896052);
   DilutionFunc1025->SetSavedPoint(3,0.1890165);
   DilutionFunc1025->SetSavedPoint(4,0.1884112);
   DilutionFunc1025->SetSavedPoint(5,0.1877894);
   DilutionFunc1025->SetSavedPoint(6,0.1871509);
   DilutionFunc1025->SetSavedPoint(7,0.1864957);
   DilutionFunc1025->SetSavedPoint(8,0.1858237);
   DilutionFunc1025->SetSavedPoint(9,0.1851348);
   DilutionFunc1025->SetSavedPoint(10,0.1844289);
   DilutionFunc1025->SetSavedPoint(11,0.183706);
   DilutionFunc1025->SetSavedPoint(12,0.1829659);
   DilutionFunc1025->SetSavedPoint(13,0.1822085);
   DilutionFunc1025->SetSavedPoint(14,0.1814338);
   DilutionFunc1025->SetSavedPoint(15,0.1806417);
   DilutionFunc1025->SetSavedPoint(16,0.1798321);
   DilutionFunc1025->SetSavedPoint(17,0.1790049);
   DilutionFunc1025->SetSavedPoint(18,0.1781601);
   DilutionFunc1025->SetSavedPoint(19,0.1772974);
   DilutionFunc1025->SetSavedPoint(20,0.176417);
   DilutionFunc1025->SetSavedPoint(21,0.1755186);
   DilutionFunc1025->SetSavedPoint(22,0.1746022);
   DilutionFunc1025->SetSavedPoint(23,0.1736677);
   DilutionFunc1025->SetSavedPoint(24,0.172715);
   DilutionFunc1025->SetSavedPoint(25,0.1717441);
   DilutionFunc1025->SetSavedPoint(26,0.1707548);
   DilutionFunc1025->SetSavedPoint(27,0.1697471);
   DilutionFunc1025->SetSavedPoint(28,0.1687208);
   DilutionFunc1025->SetSavedPoint(29,0.1676759);
   DilutionFunc1025->SetSavedPoint(30,0.1666123);
   DilutionFunc1025->SetSavedPoint(31,0.16553);
   DilutionFunc1025->SetSavedPoint(32,0.1644288);
   DilutionFunc1025->SetSavedPoint(33,0.1633086);
   DilutionFunc1025->SetSavedPoint(34,0.1621694);
   DilutionFunc1025->SetSavedPoint(35,0.161011);
   DilutionFunc1025->SetSavedPoint(36,0.1598335);
   DilutionFunc1025->SetSavedPoint(37,0.1586367);
   DilutionFunc1025->SetSavedPoint(38,0.1574204);
   DilutionFunc1025->SetSavedPoint(39,0.1561847);
   DilutionFunc1025->SetSavedPoint(40,0.1549295);
   DilutionFunc1025->SetSavedPoint(41,0.1536546);
   DilutionFunc1025->SetSavedPoint(42,0.15236);
   DilutionFunc1025->SetSavedPoint(43,0.1510456);
   DilutionFunc1025->SetSavedPoint(44,0.1497113);
   DilutionFunc1025->SetSavedPoint(45,0.148357);
   DilutionFunc1025->SetSavedPoint(46,0.1469827);
   DilutionFunc1025->SetSavedPoint(47,0.1455882);
   DilutionFunc1025->SetSavedPoint(48,0.1441734);
   DilutionFunc1025->SetSavedPoint(49,0.1427384);
   DilutionFunc1025->SetSavedPoint(50,0.1412829);
   DilutionFunc1025->SetSavedPoint(51,0.1398069);
   DilutionFunc1025->SetSavedPoint(52,0.1383104);
   DilutionFunc1025->SetSavedPoint(53,0.1367932);
   DilutionFunc1025->SetSavedPoint(54,0.1352553);
   DilutionFunc1025->SetSavedPoint(55,0.1336965);
   DilutionFunc1025->SetSavedPoint(56,0.1321168);
   DilutionFunc1025->SetSavedPoint(57,0.1305161);
   DilutionFunc1025->SetSavedPoint(58,0.1288943);
   DilutionFunc1025->SetSavedPoint(59,0.1272513);
   DilutionFunc1025->SetSavedPoint(60,0.125587);
   DilutionFunc1025->SetSavedPoint(61,0.1239014);
   DilutionFunc1025->SetSavedPoint(62,0.1221944);
   DilutionFunc1025->SetSavedPoint(63,0.1204659);
   DilutionFunc1025->SetSavedPoint(64,0.1187157);
   DilutionFunc1025->SetSavedPoint(65,0.1169439);
   DilutionFunc1025->SetSavedPoint(66,0.1151503);
   DilutionFunc1025->SetSavedPoint(67,0.1133348);
   DilutionFunc1025->SetSavedPoint(68,0.1114974);
   DilutionFunc1025->SetSavedPoint(69,0.1096379);
   DilutionFunc1025->SetSavedPoint(70,0.1077564);
   DilutionFunc1025->SetSavedPoint(71,0.1058526);
   DilutionFunc1025->SetSavedPoint(72,0.1039265);
   DilutionFunc1025->SetSavedPoint(73,0.1019781);
   DilutionFunc1025->SetSavedPoint(74,0.1000072);
   DilutionFunc1025->SetSavedPoint(75,0.09801374);
   DilutionFunc1025->SetSavedPoint(76,0.09599766);
   DilutionFunc1025->SetSavedPoint(77,0.09395887);
   DilutionFunc1025->SetSavedPoint(78,0.09189728);
   DilutionFunc1025->SetSavedPoint(79,0.0898128);
   DilutionFunc1025->SetSavedPoint(80,0.08770535);
   DilutionFunc1025->SetSavedPoint(81,0.08557483);
   DilutionFunc1025->SetSavedPoint(82,0.08342118);
   DilutionFunc1025->SetSavedPoint(83,0.08124429);
   DilutionFunc1025->SetSavedPoint(84,0.07904409);
   DilutionFunc1025->SetSavedPoint(85,0.07682049);
   DilutionFunc1025->SetSavedPoint(86,0.0745734);
   DilutionFunc1025->SetSavedPoint(87,0.07230274);
   DilutionFunc1025->SetSavedPoint(88,0.07000842);
   DilutionFunc1025->SetSavedPoint(89,0.06769036);
   DilutionFunc1025->SetSavedPoint(90,0.06534847);
   DilutionFunc1025->SetSavedPoint(91,0.06298267);
   DilutionFunc1025->SetSavedPoint(92,0.06059287);
   DilutionFunc1025->SetSavedPoint(93,0.05817898);
   DilutionFunc1025->SetSavedPoint(94,0.05574093);
   DilutionFunc1025->SetSavedPoint(95,0.05327861);
   DilutionFunc1025->SetSavedPoint(96,0.05079196);
   DilutionFunc1025->SetSavedPoint(97,0.04828087);
   DilutionFunc1025->SetSavedPoint(98,0.04574528);
   DilutionFunc1025->SetSavedPoint(99,0.04318509);
   DilutionFunc1025->SetSavedPoint(100,0.04060021);
   DilutionFunc1025->SetSavedPoint(101,750);
   DilutionFunc1025->SetSavedPoint(102,2750);
   DilutionFunc1025->SetFillColor(19);
   DilutionFunc1025->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1025->SetLineColor(ci);
   DilutionFunc1025->SetLineWidth(3);
   DilutionFunc1025->SetChisquare(6.806835);
   DilutionFunc1025->SetNDF(6);
   DilutionFunc1025->GetXaxis()->SetLabelFont(42);
   DilutionFunc1025->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1025->GetXaxis()->SetTitleFont(42);
   DilutionFunc1025->GetYaxis()->SetLabelFont(42);
   DilutionFunc1025->GetYaxis()->SetTitleFont(42);
   DilutionFunc1025->SetParameter(0,0.2006323);
   DilutionFunc1025->SetParError(0,0.00527276);
   DilutionFunc1025->SetParLimits(0,0,0);
   DilutionFunc1025->SetParameter(1,-0.000164367);
   DilutionFunc1025->SetParError(1,2.735552e-06);
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
   pt_LaTex = pt->AddText("1.13
");
   pt_LaTex = pt->AddText("0.177#pm0.004");
   pt_LaTex = pt->AddText("(-1.57#pm0.03)#times10^{-4}");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
