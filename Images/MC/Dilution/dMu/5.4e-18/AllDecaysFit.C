void AllDecaysFit()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 01:11:51 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(495.751,-0.03125,3033.06,0.28125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t allDecays_fx1075[12] = {
   124.3988,
   374.0376,
   623.6681,
   873.2521,
   1122.83,
   1372.241,
   1621.489,
   1870.59,
   2119.347,
   2367.262,
   2613.214,
   2850.256};
   Double_t allDecays_fy1075[12] = {
   0.15454,
   0.1922184,
   0.1839745,
   0.1879667,
   0.1790254,
   0.1663879,
   0.1507712,
   0.1366993,
   0.09842933,
   0.09438763,
   0.05544906,
   0.03108191};
   Double_t allDecays_fex1075[12] = {
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
   Double_t allDecays_fey1075[12] = {
   0.04230085,
   0.01695192,
   0.01249909,
   0.01022605,
   0.008802339,
   0.007839308,
   0.007137349,
   0.006625887,
   0.006244778,
   0.005982922,
   0.005849702,
   0.006016584};
   TGraphErrors *gre = new TGraphErrors(12,allDecays_fx1075,allDecays_fy1075,allDecays_fex1075,allDecays_fey1075);
   gre->SetName("allDecays");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_allDecays1075 = new TH1F("Graph_allDecays1075","",100,0,3122.841);
   Graph_allDecays1075->SetMinimum(0);
   Graph_allDecays1075->SetMaximum(0.25);
   Graph_allDecays1075->SetDirectory(0);
   Graph_allDecays1075->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_allDecays1075->SetLineColor(ci);
   Graph_allDecays1075->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_allDecays1075->GetXaxis()->SetRange(25,89);
   Graph_allDecays1075->GetXaxis()->CenterTitle(true);
   Graph_allDecays1075->GetXaxis()->SetLabelFont(42);
   Graph_allDecays1075->GetXaxis()->SetTitleSize(0.04);
   Graph_allDecays1075->GetXaxis()->SetTitleOffset(1.1);
   Graph_allDecays1075->GetXaxis()->SetTitleFont(42);
   Graph_allDecays1075->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_allDecays1075->GetYaxis()->CenterTitle(true);
   Graph_allDecays1075->GetYaxis()->SetNdivisions(4000510);
   Graph_allDecays1075->GetYaxis()->SetLabelFont(42);
   Graph_allDecays1075->GetYaxis()->SetTitleSize(0.04);
   Graph_allDecays1075->GetYaxis()->SetTitleOffset(1.25);
   Graph_allDecays1075->GetYaxis()->SetTitleFont(42);
   Graph_allDecays1075->GetZaxis()->SetLabelFont(42);
   Graph_allDecays1075->GetZaxis()->SetTitleOffset(1);
   Graph_allDecays1075->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_allDecays1075);
   
   
   TF1 *ParabolaFunc1076 = new TF1("*ParabolaFunc",750,2750,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2750,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1076->SetRange(750,2750);
   ParabolaFunc1076->SetName("ParabolaFunc");
   ParabolaFunc1076->SetTitle("ParabolaFunc");
   ParabolaFunc1076->SetSavedPoint(0,0.1922491);
   ParabolaFunc1076->SetSavedPoint(1,0.1917059);
   ParabolaFunc1076->SetSavedPoint(2,0.1911431);
   ParabolaFunc1076->SetSavedPoint(3,0.1905609);
   ParabolaFunc1076->SetSavedPoint(4,0.1899591);
   ParabolaFunc1076->SetSavedPoint(5,0.1893379);
   ParabolaFunc1076->SetSavedPoint(6,0.1886971);
   ParabolaFunc1076->SetSavedPoint(7,0.1880369);
   ParabolaFunc1076->SetSavedPoint(8,0.1873571);
   ParabolaFunc1076->SetSavedPoint(9,0.1866578);
   ParabolaFunc1076->SetSavedPoint(10,0.1859391);
   ParabolaFunc1076->SetSavedPoint(11,0.1852008);
   ParabolaFunc1076->SetSavedPoint(12,0.184443);
   ParabolaFunc1076->SetSavedPoint(13,0.1836658);
   ParabolaFunc1076->SetSavedPoint(14,0.182869);
   ParabolaFunc1076->SetSavedPoint(15,0.1820527);
   ParabolaFunc1076->SetSavedPoint(16,0.1812169);
   ParabolaFunc1076->SetSavedPoint(17,0.1803617);
   ParabolaFunc1076->SetSavedPoint(18,0.1794869);
   ParabolaFunc1076->SetSavedPoint(19,0.1785926);
   ParabolaFunc1076->SetSavedPoint(20,0.1776788);
   ParabolaFunc1076->SetSavedPoint(21,0.1767455);
   ParabolaFunc1076->SetSavedPoint(22,0.1757927);
   ParabolaFunc1076->SetSavedPoint(23,0.1748204);
   ParabolaFunc1076->SetSavedPoint(24,0.1738287);
   ParabolaFunc1076->SetSavedPoint(25,0.1728174);
   ParabolaFunc1076->SetSavedPoint(26,0.1717866);
   ParabolaFunc1076->SetSavedPoint(27,0.1707363);
   ParabolaFunc1076->SetSavedPoint(28,0.1696665);
   ParabolaFunc1076->SetSavedPoint(29,0.1685772);
   ParabolaFunc1076->SetSavedPoint(30,0.1674683);
   ParabolaFunc1076->SetSavedPoint(31,0.16634);
   ParabolaFunc1076->SetSavedPoint(32,0.1651922);
   ParabolaFunc1076->SetSavedPoint(33,0.1640249);
   ParabolaFunc1076->SetSavedPoint(34,0.1628381);
   ParabolaFunc1076->SetSavedPoint(35,0.1616318);
   ParabolaFunc1076->SetSavedPoint(36,0.160406);
   ParabolaFunc1076->SetSavedPoint(37,0.1591606);
   ParabolaFunc1076->SetSavedPoint(38,0.1578958);
   ParabolaFunc1076->SetSavedPoint(39,0.1566115);
   ParabolaFunc1076->SetSavedPoint(40,0.1553077);
   ParabolaFunc1076->SetSavedPoint(41,0.1539843);
   ParabolaFunc1076->SetSavedPoint(42,0.1526415);
   ParabolaFunc1076->SetSavedPoint(43,0.1512792);
   ParabolaFunc1076->SetSavedPoint(44,0.1498973);
   ParabolaFunc1076->SetSavedPoint(45,0.148496);
   ParabolaFunc1076->SetSavedPoint(46,0.1470752);
   ParabolaFunc1076->SetSavedPoint(47,0.1456348);
   ParabolaFunc1076->SetSavedPoint(48,0.144175);
   ParabolaFunc1076->SetSavedPoint(49,0.1426956);
   ParabolaFunc1076->SetSavedPoint(50,0.1411968);
   ParabolaFunc1076->SetSavedPoint(51,0.1396784);
   ParabolaFunc1076->SetSavedPoint(52,0.1381406);
   ParabolaFunc1076->SetSavedPoint(53,0.1365832);
   ParabolaFunc1076->SetSavedPoint(54,0.1350064);
   ParabolaFunc1076->SetSavedPoint(55,0.13341);
   ParabolaFunc1076->SetSavedPoint(56,0.1317942);
   ParabolaFunc1076->SetSavedPoint(57,0.1301588);
   ParabolaFunc1076->SetSavedPoint(58,0.1285039);
   ParabolaFunc1076->SetSavedPoint(59,0.1268296);
   ParabolaFunc1076->SetSavedPoint(60,0.1251357);
   ParabolaFunc1076->SetSavedPoint(61,0.1234223);
   ParabolaFunc1076->SetSavedPoint(62,0.1216895);
   ParabolaFunc1076->SetSavedPoint(63,0.1199371);
   ParabolaFunc1076->SetSavedPoint(64,0.1181652);
   ParabolaFunc1076->SetSavedPoint(65,0.1163738);
   ParabolaFunc1076->SetSavedPoint(66,0.1145629);
   ParabolaFunc1076->SetSavedPoint(67,0.1127326);
   ParabolaFunc1076->SetSavedPoint(68,0.1108827);
   ParabolaFunc1076->SetSavedPoint(69,0.1090133);
   ParabolaFunc1076->SetSavedPoint(70,0.1071244);
   ParabolaFunc1076->SetSavedPoint(71,0.105216);
   ParabolaFunc1076->SetSavedPoint(72,0.1032881);
   ParabolaFunc1076->SetSavedPoint(73,0.1013407);
   ParabolaFunc1076->SetSavedPoint(74,0.09937383);
   ParabolaFunc1076->SetSavedPoint(75,0.09738743);
   ParabolaFunc1076->SetSavedPoint(76,0.09538153);
   ParabolaFunc1076->SetSavedPoint(77,0.09335612);
   ParabolaFunc1076->SetSavedPoint(78,0.09131122);
   ParabolaFunc1076->SetSavedPoint(79,0.08924681);
   ParabolaFunc1076->SetSavedPoint(80,0.0871629);
   ParabolaFunc1076->SetSavedPoint(81,0.08505949);
   ParabolaFunc1076->SetSavedPoint(82,0.08293658);
   ParabolaFunc1076->SetSavedPoint(83,0.08079416);
   ParabolaFunc1076->SetSavedPoint(84,0.07863224);
   ParabolaFunc1076->SetSavedPoint(85,0.07645082);
   ParabolaFunc1076->SetSavedPoint(86,0.0742499);
   ParabolaFunc1076->SetSavedPoint(87,0.07202948);
   ParabolaFunc1076->SetSavedPoint(88,0.06978955);
   ParabolaFunc1076->SetSavedPoint(89,0.06753013);
   ParabolaFunc1076->SetSavedPoint(90,0.0652512);
   ParabolaFunc1076->SetSavedPoint(91,0.06295276);
   ParabolaFunc1076->SetSavedPoint(92,0.06063483);
   ParabolaFunc1076->SetSavedPoint(93,0.05829739);
   ParabolaFunc1076->SetSavedPoint(94,0.05594046);
   ParabolaFunc1076->SetSavedPoint(95,0.05356401);
   ParabolaFunc1076->SetSavedPoint(96,0.05116807);
   ParabolaFunc1076->SetSavedPoint(97,0.04875263);
   ParabolaFunc1076->SetSavedPoint(98,0.04631768);
   ParabolaFunc1076->SetSavedPoint(99,0.04386323);
   ParabolaFunc1076->SetSavedPoint(100,0.04138928);
   ParabolaFunc1076->SetSavedPoint(101,750);
   ParabolaFunc1076->SetSavedPoint(102,2750);
   ParabolaFunc1076->SetFillColor(19);
   ParabolaFunc1076->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1076->SetLineColor(ci);
   ParabolaFunc1076->SetLineWidth(3);
   ParabolaFunc1076->SetChisquare(6.46561);
   ParabolaFunc1076->SetNDF(5);
   ParabolaFunc1076->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1076->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1076->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1076->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1076->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1076->SetParameter(0,-2.437758e-08);
   ParabolaFunc1076->SetParError(0,9.266725e-09);
   ParabolaFunc1076->SetParLimits(0,0,0);
   ParabolaFunc1076->SetParameter(1,9.891598e-06);
   ParabolaFunc1076->SetParError(1,3.41443e-05);
   ParabolaFunc1076->SetParLimits(1,0,0);
   ParabolaFunc1076->SetParameter(2,0.1985428);
   ParabolaFunc1076->SetParError(2,0.02966916);
   ParabolaFunc1076->SetParLimits(2,0,0);
   ParabolaFunc1076->SetParent(gre);
   gre->GetListOfFunctions()->Add(ParabolaFunc1076);
   gre->Draw("ap");
   
   TF1 *ParabolaFunc1077 = new TF1("*ParabolaFunc",750,2750,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2750,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1077->SetRange(750,2750);
   ParabolaFunc1077->SetName("ParabolaFunc");
   ParabolaFunc1077->SetTitle("ParabolaFunc");
   ParabolaFunc1077->SetSavedPoint(0,0.1922491);
   ParabolaFunc1077->SetSavedPoint(1,0.1917059);
   ParabolaFunc1077->SetSavedPoint(2,0.1911431);
   ParabolaFunc1077->SetSavedPoint(3,0.1905609);
   ParabolaFunc1077->SetSavedPoint(4,0.1899591);
   ParabolaFunc1077->SetSavedPoint(5,0.1893379);
   ParabolaFunc1077->SetSavedPoint(6,0.1886971);
   ParabolaFunc1077->SetSavedPoint(7,0.1880369);
   ParabolaFunc1077->SetSavedPoint(8,0.1873571);
   ParabolaFunc1077->SetSavedPoint(9,0.1866578);
   ParabolaFunc1077->SetSavedPoint(10,0.1859391);
   ParabolaFunc1077->SetSavedPoint(11,0.1852008);
   ParabolaFunc1077->SetSavedPoint(12,0.184443);
   ParabolaFunc1077->SetSavedPoint(13,0.1836658);
   ParabolaFunc1077->SetSavedPoint(14,0.182869);
   ParabolaFunc1077->SetSavedPoint(15,0.1820527);
   ParabolaFunc1077->SetSavedPoint(16,0.1812169);
   ParabolaFunc1077->SetSavedPoint(17,0.1803617);
   ParabolaFunc1077->SetSavedPoint(18,0.1794869);
   ParabolaFunc1077->SetSavedPoint(19,0.1785926);
   ParabolaFunc1077->SetSavedPoint(20,0.1776788);
   ParabolaFunc1077->SetSavedPoint(21,0.1767455);
   ParabolaFunc1077->SetSavedPoint(22,0.1757927);
   ParabolaFunc1077->SetSavedPoint(23,0.1748204);
   ParabolaFunc1077->SetSavedPoint(24,0.1738287);
   ParabolaFunc1077->SetSavedPoint(25,0.1728174);
   ParabolaFunc1077->SetSavedPoint(26,0.1717866);
   ParabolaFunc1077->SetSavedPoint(27,0.1707363);
   ParabolaFunc1077->SetSavedPoint(28,0.1696665);
   ParabolaFunc1077->SetSavedPoint(29,0.1685772);
   ParabolaFunc1077->SetSavedPoint(30,0.1674683);
   ParabolaFunc1077->SetSavedPoint(31,0.16634);
   ParabolaFunc1077->SetSavedPoint(32,0.1651922);
   ParabolaFunc1077->SetSavedPoint(33,0.1640249);
   ParabolaFunc1077->SetSavedPoint(34,0.1628381);
   ParabolaFunc1077->SetSavedPoint(35,0.1616318);
   ParabolaFunc1077->SetSavedPoint(36,0.160406);
   ParabolaFunc1077->SetSavedPoint(37,0.1591606);
   ParabolaFunc1077->SetSavedPoint(38,0.1578958);
   ParabolaFunc1077->SetSavedPoint(39,0.1566115);
   ParabolaFunc1077->SetSavedPoint(40,0.1553077);
   ParabolaFunc1077->SetSavedPoint(41,0.1539843);
   ParabolaFunc1077->SetSavedPoint(42,0.1526415);
   ParabolaFunc1077->SetSavedPoint(43,0.1512792);
   ParabolaFunc1077->SetSavedPoint(44,0.1498973);
   ParabolaFunc1077->SetSavedPoint(45,0.148496);
   ParabolaFunc1077->SetSavedPoint(46,0.1470752);
   ParabolaFunc1077->SetSavedPoint(47,0.1456348);
   ParabolaFunc1077->SetSavedPoint(48,0.144175);
   ParabolaFunc1077->SetSavedPoint(49,0.1426956);
   ParabolaFunc1077->SetSavedPoint(50,0.1411968);
   ParabolaFunc1077->SetSavedPoint(51,0.1396784);
   ParabolaFunc1077->SetSavedPoint(52,0.1381406);
   ParabolaFunc1077->SetSavedPoint(53,0.1365832);
   ParabolaFunc1077->SetSavedPoint(54,0.1350064);
   ParabolaFunc1077->SetSavedPoint(55,0.13341);
   ParabolaFunc1077->SetSavedPoint(56,0.1317942);
   ParabolaFunc1077->SetSavedPoint(57,0.1301588);
   ParabolaFunc1077->SetSavedPoint(58,0.1285039);
   ParabolaFunc1077->SetSavedPoint(59,0.1268296);
   ParabolaFunc1077->SetSavedPoint(60,0.1251357);
   ParabolaFunc1077->SetSavedPoint(61,0.1234223);
   ParabolaFunc1077->SetSavedPoint(62,0.1216895);
   ParabolaFunc1077->SetSavedPoint(63,0.1199371);
   ParabolaFunc1077->SetSavedPoint(64,0.1181652);
   ParabolaFunc1077->SetSavedPoint(65,0.1163738);
   ParabolaFunc1077->SetSavedPoint(66,0.1145629);
   ParabolaFunc1077->SetSavedPoint(67,0.1127326);
   ParabolaFunc1077->SetSavedPoint(68,0.1108827);
   ParabolaFunc1077->SetSavedPoint(69,0.1090133);
   ParabolaFunc1077->SetSavedPoint(70,0.1071244);
   ParabolaFunc1077->SetSavedPoint(71,0.105216);
   ParabolaFunc1077->SetSavedPoint(72,0.1032881);
   ParabolaFunc1077->SetSavedPoint(73,0.1013407);
   ParabolaFunc1077->SetSavedPoint(74,0.09937383);
   ParabolaFunc1077->SetSavedPoint(75,0.09738743);
   ParabolaFunc1077->SetSavedPoint(76,0.09538153);
   ParabolaFunc1077->SetSavedPoint(77,0.09335612);
   ParabolaFunc1077->SetSavedPoint(78,0.09131122);
   ParabolaFunc1077->SetSavedPoint(79,0.08924681);
   ParabolaFunc1077->SetSavedPoint(80,0.0871629);
   ParabolaFunc1077->SetSavedPoint(81,0.08505949);
   ParabolaFunc1077->SetSavedPoint(82,0.08293658);
   ParabolaFunc1077->SetSavedPoint(83,0.08079416);
   ParabolaFunc1077->SetSavedPoint(84,0.07863224);
   ParabolaFunc1077->SetSavedPoint(85,0.07645082);
   ParabolaFunc1077->SetSavedPoint(86,0.0742499);
   ParabolaFunc1077->SetSavedPoint(87,0.07202948);
   ParabolaFunc1077->SetSavedPoint(88,0.06978955);
   ParabolaFunc1077->SetSavedPoint(89,0.06753013);
   ParabolaFunc1077->SetSavedPoint(90,0.0652512);
   ParabolaFunc1077->SetSavedPoint(91,0.06295276);
   ParabolaFunc1077->SetSavedPoint(92,0.06063483);
   ParabolaFunc1077->SetSavedPoint(93,0.05829739);
   ParabolaFunc1077->SetSavedPoint(94,0.05594046);
   ParabolaFunc1077->SetSavedPoint(95,0.05356401);
   ParabolaFunc1077->SetSavedPoint(96,0.05116807);
   ParabolaFunc1077->SetSavedPoint(97,0.04875263);
   ParabolaFunc1077->SetSavedPoint(98,0.04631768);
   ParabolaFunc1077->SetSavedPoint(99,0.04386323);
   ParabolaFunc1077->SetSavedPoint(100,0.04138928);
   ParabolaFunc1077->SetSavedPoint(101,750);
   ParabolaFunc1077->SetSavedPoint(102,2750);
   ParabolaFunc1077->SetFillColor(19);
   ParabolaFunc1077->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1077->SetLineColor(ci);
   ParabolaFunc1077->SetLineWidth(3);
   ParabolaFunc1077->SetChisquare(6.46561);
   ParabolaFunc1077->SetNDF(5);
   ParabolaFunc1077->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1077->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1077->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1077->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1077->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1077->SetParameter(0,-2.437758e-08);
   ParabolaFunc1077->SetParError(0,9.266725e-09);
   ParabolaFunc1077->SetParLimits(0,0,0);
   ParabolaFunc1077->SetParameter(1,9.891598e-06);
   ParabolaFunc1077->SetParError(1,3.41443e-05);
   ParabolaFunc1077->SetParLimits(1,0,0);
   ParabolaFunc1077->SetParameter(2,0.1985428);
   ParabolaFunc1077->SetParError(2,0.02966916);
   ParabolaFunc1077->SetParLimits(2,0,0);
   ParabolaFunc1077->Draw("SAME");
   
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
   entry=leg->AddEntry("ParabolaFunc","Fit: ap^{2}+bp+d_{0}","lpf");
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
   pt_LaTex = pt->AddText("a [MeV^{-2}]");
   pt_LaTex = pt->AddText("b [MeV^{-1}]");
   pt_LaTex = pt->AddText("d_{0}");
   pt->Draw();
   
   pt = new TPaveText(0.4,0.2,0.55,0.45,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("1.29
");
   pt_LaTex = pt->AddText("(-2.4#pm0.9)#times10^{-8}");
   pt_LaTex = pt->AddText("(1.0#pm3.0)#times10^{-5}");
   pt_LaTex = pt->AddText("0.20#pm0.03");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
