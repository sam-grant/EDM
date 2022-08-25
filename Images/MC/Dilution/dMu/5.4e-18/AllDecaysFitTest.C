#ifdef __CLING__
#pragma cling optimize(0)
#endif
void AllDecaysFitTest()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Aug 16 13:46:20 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-394.2603,-0.0275,3548.343,0.2475);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t allDecays_fx1003[12] = {
   124.3991,
   374.0341,
   623.7056,
   873.2706,
   1122.785,
   1372.229,
   1621.527,
   1870.634,
   2119.341,
   2367.305,
   2613.177,
   2850.267};
   Double_t allDecays_fy1003[12] = {
   0.1815013,
   0.1879351,
   0.1873144,
   0.1772456,
   0.1676309,
   0.1552691,
   0.1479931,
   0.1314705,
   0.1124427,
   0.08895676,
   0.06696907,
   0.03460224};
   Double_t allDecays_fex1003[12] = {
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
   Double_t allDecays_fey1003[12] = {
   0.007833994,
   0.0031414,
   0.002315717,
   0.001893978,
   0.001631612,
   0.001451678,
   0.001322653,
   0.001227599,
   0.001157624,
   0.001109479,
   0.001083587,
   0.001115188};
   TGraphErrors *gre = new TGraphErrors(12,allDecays_fx1003,allDecays_fy1003,allDecays_fex1003,allDecays_fey1003);
   gre->SetName("allDecays");
   gre->SetTitle(";Momentum, p [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_allDecays1003 = new TH1F("Graph_allDecays1003","",100,0,3122.854);
   Graph_allDecays1003->SetMinimum(0);
   Graph_allDecays1003->SetMaximum(0.22);
   Graph_allDecays1003->SetDirectory(0);
   Graph_allDecays1003->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_allDecays1003->SetLineColor(ci);
   Graph_allDecays1003->GetXaxis()->SetTitle("Momentum, p [MeV]");
   Graph_allDecays1003->GetXaxis()->SetRange(1,101);
   Graph_allDecays1003->GetXaxis()->CenterTitle(true);
   Graph_allDecays1003->GetXaxis()->SetLabelFont(42);
   Graph_allDecays1003->GetXaxis()->SetTitleSize(0.04);
   Graph_allDecays1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_allDecays1003->GetXaxis()->SetTitleFont(42);
   Graph_allDecays1003->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_allDecays1003->GetYaxis()->CenterTitle(true);
   Graph_allDecays1003->GetYaxis()->SetNdivisions(4000510);
   Graph_allDecays1003->GetYaxis()->SetLabelFont(42);
   Graph_allDecays1003->GetYaxis()->SetTitleSize(0.04);
   Graph_allDecays1003->GetYaxis()->SetTitleOffset(1.25);
   Graph_allDecays1003->GetYaxis()->SetTitleFont(42);
   Graph_allDecays1003->GetZaxis()->SetLabelFont(42);
   Graph_allDecays1003->GetZaxis()->SetTitleOffset(1);
   Graph_allDecays1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_allDecays1003);
   
   
   TF1 *DilutionFunc1004 = new TF1("*DilutionFunc",0,3154.083,1);
    //The original function : DilutionFunc had originally been created by:
    //TF1 *DilutionFunc = new TF1("DilutionFunc",DilutionFunc,0,3154.083,1, 1, TF1::EAddToList::kNo);
   DilutionFunc1004->SetRange(0,3154.083);
   DilutionFunc1004->SetName("DilutionFunc");
   DilutionFunc1004->SetTitle("DilutionFunc");
   DilutionFunc1004->SetSavedPoint(0,0.2);
   DilutionFunc1004->SetSavedPoint(1,0.1999756);
   DilutionFunc1004->SetSavedPoint(2,0.1999039);
   DilutionFunc1004->SetSavedPoint(3,0.199786);
   DilutionFunc1004->SetSavedPoint(4,0.1996233);
   DilutionFunc1004->SetSavedPoint(5,0.1994169);
   DilutionFunc1004->SetSavedPoint(6,0.1991679);
   DilutionFunc1004->SetSavedPoint(7,0.1988772);
   DilutionFunc1004->SetSavedPoint(8,0.1985458);
   DilutionFunc1004->SetSavedPoint(9,0.1981745);
   DilutionFunc1004->SetSavedPoint(10,0.1977641);
   DilutionFunc1004->SetSavedPoint(11,0.1973154);
   DilutionFunc1004->SetSavedPoint(12,0.1968289);
   DilutionFunc1004->SetSavedPoint(13,0.1963054);
   DilutionFunc1004->SetSavedPoint(14,0.1957453);
   DilutionFunc1004->SetSavedPoint(15,0.1951493);
   DilutionFunc1004->SetSavedPoint(16,0.1945177);
   DilutionFunc1004->SetSavedPoint(17,0.1938511);
   DilutionFunc1004->SetSavedPoint(18,0.1931498);
   DilutionFunc1004->SetSavedPoint(19,0.1924141);
   DilutionFunc1004->SetSavedPoint(20,0.1916445);
   DilutionFunc1004->SetSavedPoint(21,0.190841);
   DilutionFunc1004->SetSavedPoint(22,0.1900041);
   DilutionFunc1004->SetSavedPoint(23,0.1891339);
   DilutionFunc1004->SetSavedPoint(24,0.1882306);
   DilutionFunc1004->SetSavedPoint(25,0.1872944);
   DilutionFunc1004->SetSavedPoint(26,0.1863253);
   DilutionFunc1004->SetSavedPoint(27,0.1853235);
   DilutionFunc1004->SetSavedPoint(28,0.184289);
   DilutionFunc1004->SetSavedPoint(29,0.1832219);
   DilutionFunc1004->SetSavedPoint(30,0.1821222);
   DilutionFunc1004->SetSavedPoint(31,0.1809898);
   DilutionFunc1004->SetSavedPoint(32,0.1798247);
   DilutionFunc1004->SetSavedPoint(33,0.1786269);
   DilutionFunc1004->SetSavedPoint(34,0.1773962);
   DilutionFunc1004->SetSavedPoint(35,0.1761325);
   DilutionFunc1004->SetSavedPoint(36,0.1748358);
   DilutionFunc1004->SetSavedPoint(37,0.1735058);
   DilutionFunc1004->SetSavedPoint(38,0.1721424);
   DilutionFunc1004->SetSavedPoint(39,0.1707453);
   DilutionFunc1004->SetSavedPoint(40,0.1693143);
   DilutionFunc1004->SetSavedPoint(41,0.1678492);
   DilutionFunc1004->SetSavedPoint(42,0.1663496);
   DilutionFunc1004->SetSavedPoint(43,0.1648154);
   DilutionFunc1004->SetSavedPoint(44,0.163246);
   DilutionFunc1004->SetSavedPoint(45,0.1616413);
   DilutionFunc1004->SetSavedPoint(46,0.1600008);
   DilutionFunc1004->SetSavedPoint(47,0.1583241);
   DilutionFunc1004->SetSavedPoint(48,0.1566108);
   DilutionFunc1004->SetSavedPoint(49,0.1548605);
   DilutionFunc1004->SetSavedPoint(50,0.1530727);
   DilutionFunc1004->SetSavedPoint(51,0.1512468);
   DilutionFunc1004->SetSavedPoint(52,0.1493825);
   DilutionFunc1004->SetSavedPoint(53,0.1474791);
   DilutionFunc1004->SetSavedPoint(54,0.145536);
   DilutionFunc1004->SetSavedPoint(55,0.1435527);
   DilutionFunc1004->SetSavedPoint(56,0.1415286);
   DilutionFunc1004->SetSavedPoint(57,0.1394629);
   DilutionFunc1004->SetSavedPoint(58,0.137355);
   DilutionFunc1004->SetSavedPoint(59,0.1352041);
   DilutionFunc1004->SetSavedPoint(60,0.1330096);
   DilutionFunc1004->SetSavedPoint(61,0.1307707);
   DilutionFunc1004->SetSavedPoint(62,0.1284865);
   DilutionFunc1004->SetSavedPoint(63,0.1261562);
   DilutionFunc1004->SetSavedPoint(64,0.1237789);
   DilutionFunc1004->SetSavedPoint(65,0.1213538);
   DilutionFunc1004->SetSavedPoint(66,0.1188798);
   DilutionFunc1004->SetSavedPoint(67,0.116356);
   DilutionFunc1004->SetSavedPoint(68,0.1137814);
   DilutionFunc1004->SetSavedPoint(69,0.1111548);
   DilutionFunc1004->SetSavedPoint(70,0.1084752);
   DilutionFunc1004->SetSavedPoint(71,0.1057415);
   DilutionFunc1004->SetSavedPoint(72,0.1029524);
   DilutionFunc1004->SetSavedPoint(73,0.1001067);
   DilutionFunc1004->SetSavedPoint(74,0.09720309);
   DilutionFunc1004->SetSavedPoint(75,0.09424025);
   DilutionFunc1004->SetSavedPoint(76,0.09121676);
   DilutionFunc1004->SetSavedPoint(77,0.08813119);
   DilutionFunc1004->SetSavedPoint(78,0.08498202);
   DilutionFunc1004->SetSavedPoint(79,0.08176769);
   DilutionFunc1004->SetSavedPoint(80,0.07848657);
   DilutionFunc1004->SetSavedPoint(81,0.07513697);
   DilutionFunc1004->SetSavedPoint(82,0.07171711);
   DilutionFunc1004->SetSavedPoint(83,0.06822518);
   DilutionFunc1004->SetSavedPoint(84,0.06465926);
   DilutionFunc1004->SetSavedPoint(85,0.06101737);
   DilutionFunc1004->SetSavedPoint(86,0.05729744);
   DilutionFunc1004->SetSavedPoint(87,0.05349732);
   DilutionFunc1004->SetSavedPoint(88,0.04961478);
   DilutionFunc1004->SetSavedPoint(89,0.04564748);
   DilutionFunc1004->SetSavedPoint(90,0.04159299);
   DilutionFunc1004->SetSavedPoint(91,0.03744878);
   DilutionFunc1004->SetSavedPoint(92,0.0332122);
   DilutionFunc1004->SetSavedPoint(93,0.02888051);
   DilutionFunc1004->SetSavedPoint(94,0.02445082);
   DilutionFunc1004->SetSavedPoint(95,0.01992014);
   DilutionFunc1004->SetSavedPoint(96,0.01528533);
   DilutionFunc1004->SetSavedPoint(97,0.01054313);
   DilutionFunc1004->SetSavedPoint(98,0.00569011);
   DilutionFunc1004->SetSavedPoint(99,0.0007227033);
   DilutionFunc1004->SetSavedPoint(100,0);
   DilutionFunc1004->SetSavedPoint(101,0);
   DilutionFunc1004->SetSavedPoint(102,3154.083);
   DilutionFunc1004->SetFillColor(19);
   DilutionFunc1004->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1004->SetLineColor(ci);
   DilutionFunc1004->SetLineWidth(3);
   DilutionFunc1004->SetChisquare(157.9578);
   DilutionFunc1004->SetNDF(12);
   DilutionFunc1004->GetXaxis()->SetLabelFont(42);
   DilutionFunc1004->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1004->GetXaxis()->SetTitleFont(42);
   DilutionFunc1004->GetYaxis()->SetLabelFont(42);
   DilutionFunc1004->GetYaxis()->SetTitleFont(42);
   DilutionFunc1004->SetParameter(0,1);
   DilutionFunc1004->SetParError(0,0);
   DilutionFunc1004->SetParLimits(0,1,1);
   DilutionFunc1004->SetParent(gre);
   gre->GetListOfFunctions()->Add(DilutionFunc1004);
   gre->Draw("ap");
   
   TF1 *DilutionFunc1005 = new TF1("*DilutionFunc",0,3154.083,1);
    //The original function : DilutionFunc had originally been created by:
    //TF1 *DilutionFunc = new TF1("DilutionFunc",DilutionFunc,0,3154.083,1, 1, TF1::EAddToList::kNo);
   DilutionFunc1005->SetRange(0,3154.083);
   DilutionFunc1005->SetName("DilutionFunc");
   DilutionFunc1005->SetTitle("DilutionFunc");
   DilutionFunc1005->SetSavedPoint(0,0.2);
   DilutionFunc1005->SetSavedPoint(1,0.1999756);
   DilutionFunc1005->SetSavedPoint(2,0.1999039);
   DilutionFunc1005->SetSavedPoint(3,0.199786);
   DilutionFunc1005->SetSavedPoint(4,0.1996233);
   DilutionFunc1005->SetSavedPoint(5,0.1994169);
   DilutionFunc1005->SetSavedPoint(6,0.1991679);
   DilutionFunc1005->SetSavedPoint(7,0.1988772);
   DilutionFunc1005->SetSavedPoint(8,0.1985458);
   DilutionFunc1005->SetSavedPoint(9,0.1981745);
   DilutionFunc1005->SetSavedPoint(10,0.1977641);
   DilutionFunc1005->SetSavedPoint(11,0.1973154);
   DilutionFunc1005->SetSavedPoint(12,0.1968289);
   DilutionFunc1005->SetSavedPoint(13,0.1963054);
   DilutionFunc1005->SetSavedPoint(14,0.1957453);
   DilutionFunc1005->SetSavedPoint(15,0.1951493);
   DilutionFunc1005->SetSavedPoint(16,0.1945177);
   DilutionFunc1005->SetSavedPoint(17,0.1938511);
   DilutionFunc1005->SetSavedPoint(18,0.1931498);
   DilutionFunc1005->SetSavedPoint(19,0.1924141);
   DilutionFunc1005->SetSavedPoint(20,0.1916445);
   DilutionFunc1005->SetSavedPoint(21,0.190841);
   DilutionFunc1005->SetSavedPoint(22,0.1900041);
   DilutionFunc1005->SetSavedPoint(23,0.1891339);
   DilutionFunc1005->SetSavedPoint(24,0.1882306);
   DilutionFunc1005->SetSavedPoint(25,0.1872944);
   DilutionFunc1005->SetSavedPoint(26,0.1863253);
   DilutionFunc1005->SetSavedPoint(27,0.1853235);
   DilutionFunc1005->SetSavedPoint(28,0.184289);
   DilutionFunc1005->SetSavedPoint(29,0.1832219);
   DilutionFunc1005->SetSavedPoint(30,0.1821222);
   DilutionFunc1005->SetSavedPoint(31,0.1809898);
   DilutionFunc1005->SetSavedPoint(32,0.1798247);
   DilutionFunc1005->SetSavedPoint(33,0.1786269);
   DilutionFunc1005->SetSavedPoint(34,0.1773962);
   DilutionFunc1005->SetSavedPoint(35,0.1761325);
   DilutionFunc1005->SetSavedPoint(36,0.1748358);
   DilutionFunc1005->SetSavedPoint(37,0.1735058);
   DilutionFunc1005->SetSavedPoint(38,0.1721424);
   DilutionFunc1005->SetSavedPoint(39,0.1707453);
   DilutionFunc1005->SetSavedPoint(40,0.1693143);
   DilutionFunc1005->SetSavedPoint(41,0.1678492);
   DilutionFunc1005->SetSavedPoint(42,0.1663496);
   DilutionFunc1005->SetSavedPoint(43,0.1648154);
   DilutionFunc1005->SetSavedPoint(44,0.163246);
   DilutionFunc1005->SetSavedPoint(45,0.1616413);
   DilutionFunc1005->SetSavedPoint(46,0.1600008);
   DilutionFunc1005->SetSavedPoint(47,0.1583241);
   DilutionFunc1005->SetSavedPoint(48,0.1566108);
   DilutionFunc1005->SetSavedPoint(49,0.1548605);
   DilutionFunc1005->SetSavedPoint(50,0.1530727);
   DilutionFunc1005->SetSavedPoint(51,0.1512468);
   DilutionFunc1005->SetSavedPoint(52,0.1493825);
   DilutionFunc1005->SetSavedPoint(53,0.1474791);
   DilutionFunc1005->SetSavedPoint(54,0.145536);
   DilutionFunc1005->SetSavedPoint(55,0.1435527);
   DilutionFunc1005->SetSavedPoint(56,0.1415286);
   DilutionFunc1005->SetSavedPoint(57,0.1394629);
   DilutionFunc1005->SetSavedPoint(58,0.137355);
   DilutionFunc1005->SetSavedPoint(59,0.1352041);
   DilutionFunc1005->SetSavedPoint(60,0.1330096);
   DilutionFunc1005->SetSavedPoint(61,0.1307707);
   DilutionFunc1005->SetSavedPoint(62,0.1284865);
   DilutionFunc1005->SetSavedPoint(63,0.1261562);
   DilutionFunc1005->SetSavedPoint(64,0.1237789);
   DilutionFunc1005->SetSavedPoint(65,0.1213538);
   DilutionFunc1005->SetSavedPoint(66,0.1188798);
   DilutionFunc1005->SetSavedPoint(67,0.116356);
   DilutionFunc1005->SetSavedPoint(68,0.1137814);
   DilutionFunc1005->SetSavedPoint(69,0.1111548);
   DilutionFunc1005->SetSavedPoint(70,0.1084752);
   DilutionFunc1005->SetSavedPoint(71,0.1057415);
   DilutionFunc1005->SetSavedPoint(72,0.1029524);
   DilutionFunc1005->SetSavedPoint(73,0.1001067);
   DilutionFunc1005->SetSavedPoint(74,0.09720309);
   DilutionFunc1005->SetSavedPoint(75,0.09424025);
   DilutionFunc1005->SetSavedPoint(76,0.09121676);
   DilutionFunc1005->SetSavedPoint(77,0.08813119);
   DilutionFunc1005->SetSavedPoint(78,0.08498202);
   DilutionFunc1005->SetSavedPoint(79,0.08176769);
   DilutionFunc1005->SetSavedPoint(80,0.07848657);
   DilutionFunc1005->SetSavedPoint(81,0.07513697);
   DilutionFunc1005->SetSavedPoint(82,0.07171711);
   DilutionFunc1005->SetSavedPoint(83,0.06822518);
   DilutionFunc1005->SetSavedPoint(84,0.06465926);
   DilutionFunc1005->SetSavedPoint(85,0.06101737);
   DilutionFunc1005->SetSavedPoint(86,0.05729744);
   DilutionFunc1005->SetSavedPoint(87,0.05349732);
   DilutionFunc1005->SetSavedPoint(88,0.04961478);
   DilutionFunc1005->SetSavedPoint(89,0.04564748);
   DilutionFunc1005->SetSavedPoint(90,0.04159299);
   DilutionFunc1005->SetSavedPoint(91,0.03744878);
   DilutionFunc1005->SetSavedPoint(92,0.0332122);
   DilutionFunc1005->SetSavedPoint(93,0.02888051);
   DilutionFunc1005->SetSavedPoint(94,0.02445082);
   DilutionFunc1005->SetSavedPoint(95,0.01992014);
   DilutionFunc1005->SetSavedPoint(96,0.01528533);
   DilutionFunc1005->SetSavedPoint(97,0.01054313);
   DilutionFunc1005->SetSavedPoint(98,0.00569011);
   DilutionFunc1005->SetSavedPoint(99,0.0007227033);
   DilutionFunc1005->SetSavedPoint(100,0);
   DilutionFunc1005->SetSavedPoint(101,0);
   DilutionFunc1005->SetSavedPoint(102,3154.083);
   DilutionFunc1005->SetFillColor(19);
   DilutionFunc1005->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1005->SetLineColor(ci);
   DilutionFunc1005->SetLineWidth(3);
   DilutionFunc1005->SetChisquare(157.9578);
   DilutionFunc1005->SetNDF(12);
   DilutionFunc1005->GetXaxis()->SetLabelFont(42);
   DilutionFunc1005->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1005->GetXaxis()->SetTitleFont(42);
   DilutionFunc1005->GetYaxis()->SetLabelFont(42);
   DilutionFunc1005->GetYaxis()->SetTitleFont(42);
   DilutionFunc1005->SetParameter(0,1);
   DilutionFunc1005->SetParError(0,0);
   DilutionFunc1005->SetParLimits(0,1,1);
   DilutionFunc1005->Draw("SAME");
   
   TLegend *leg = new TLegend(0.65,0.715,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(26);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("allDecays","All decays","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("DilutionFunc","#frac{(p#minus1)(2p#plus1)}{4p^{2}#minus5p#minus5}","lpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
