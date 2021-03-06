void S12_PureBzModuloFit_1600_1800_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 12:22:41 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-0.5964689,-1.024541,5.36822,0.7470049);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1221[87] = {
   0.02508807,
   0.07526421,
   0.1254403,
   0.1756165,
   0.2257926,
   0.2759688,
   0.3261449,
   0.376321,
   0.4264972,
   0.4766733,
   0.5268495,
   0.5770256,
   0.6272017,
   0.6773779,
   0.727554,
   0.7777301,
   0.8279063,
   0.8780824,
   0.9282586,
   0.9784347,
   1.028611,
   1.078787,
   1.128963,
   1.179139,
   1.229315,
   1.279492,
   1.329668,
   1.379844,
   1.43002,
   1.480196,
   1.530372,
   1.580548,
   1.630724,
   1.680901,
   1.731077,
   1.781253,
   1.831429,
   1.881605,
   1.931781,
   1.981957,
   2.032134,
   2.08231,
   2.132486,
   2.182662,
   2.232838,
   2.283014,
   2.33319,
   2.383367,
   2.433543,
   2.483719,
   2.533895,
   2.584071,
   2.634247,
   2.684423,
   2.7346,
   2.784776,
   2.834952,
   2.885128,
   2.935304,
   2.98548,
   3.035656,
   3.085832,
   3.136009,
   3.186185,
   3.236361,
   3.286537,
   3.336713,
   3.386889,
   3.437065,
   3.487242,
   3.537418,
   3.587594,
   3.63777,
   3.687946,
   3.738122,
   3.788298,
   3.838475,
   3.888651,
   3.938827,
   3.989003,
   4.039179,
   4.089355,
   4.139531,
   4.189708,
   4.239884,
   4.29006,
   4.340236};
   Double_t Graph0_fy1221[87] = {
   0.1290654,
   0.05868206,
   0.001102131,
   0.1893654,
   -0.2746475,
   0.02432046,
   -0.5435503,
   -0.2646934,
   -0.3707799,
   -0.3442222,
   -0.02929419,
   -0.1404456,
   -0.1457792,
   -0.2247262,
   -0.2669323,
   -0.5125118,
   -0.2217718,
   -0.1407922,
   0.04324895,
   -0.4083722,
   -0.1922035,
   -0.03472106,
   -0.4170562,
   -0.4766709,
   -0.1915077,
   -0.00309629,
   -0.1514428,
   -0.3735499,
   -0.1988338,
   -0.1397881,
   -0.2579208,
   -0.1012514,
   -0.3780658,
   -0.2465304,
   -0.3166996,
   -0.4213345,
   -0.2940999,
   -0.2207866,
   -0.3628704,
   -0.2247702,
   -0.4737783,
   -0.1185175,
   -0.288061,
   -0.03361345,
   -0.2864554,
   -0.4133373,
   -0.3009655,
   -0.4093367,
   0.2162403,
   -0.4960868,
   -0.3992164,
   -0.4888179,
   -0.02025316,
   -0.2825482,
   -0.357204,
   -0.174626,
   -0.5506063,
   -0.3075283,
   -0.3524441,
   -0.3066627,
   -0.09071425,
   -0.03339518,
   0.2547175,
   -0.1315874,
   -0.4499576,
   -0.2070656,
   -0.06630794,
   -0.03806959,
   -0.1846924,
   -0.03503951,
   -0.02548254,
   0.06984017,
   -0.2349925,
   0.2743896,
   0.08757737,
   0.1901803,
   -0.289596,
   0.05070474,
   -0.01847575,
   0.1919477,
   0.173798,
   0.07636778,
   0.01203756,
   0.1788426,
   0.2646465,
   0.1648379,
   0.0469236};
   Double_t Graph0_fex1221[87] = {
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
   Double_t Graph0_fey1221[87] = {
   0.1820285,
   0.1786092,
   0.1841071,
   0.1814075,
   0.1797703,
   0.1762783,
   0.1857327,
   0.1799728,
   0.1769998,
   0.1832494,
   0.1760804,
   0.1700164,
   0.1746603,
   0.1746324,
   0.1688773,
   0.1783785,
   0.1711281,
   0.1713356,
   0.1780488,
   0.1745323,
   0.1683959,
   0.1707971,
   0.1660026,
   0.1674263,
   0.1710831,
   0.1654445,
   0.1635848,
   0.1669825,
   0.1639701,
   0.1623533,
   0.1656489,
   0.1605071,
   0.1614718,
   0.1666271,
   0.1597031,
   0.1575498,
   0.1657931,
   0.1599334,
   0.1602579,
   0.1615718,
   0.1576811,
   0.1584687,
   0.1639074,
   0.1567592,
   0.1597965,
   0.1635594,
   0.1579761,
   0.1600199,
   0.1653588,
   0.1569302,
   0.1626605,
   0.1634322,
   0.1599198,
   0.1667902,
   0.1677094,
   0.1589218,
   0.1620758,
   0.1768971,
   0.1624601,
   0.1625229,
   0.1692319,
   0.1686341,
   0.1742825,
   0.1728691,
   0.1726243,
   0.1750927,
   0.1727022,
   0.1701866,
   0.1779611,
   0.1796782,
   0.1727227,
   0.1779686,
   0.1814076,
   0.1768424,
   0.1842945,
   0.1813342,
   0.1821687,
   0.1836856,
   0.1873359,
   0.181964,
   0.1905912,
   0.1843146,
   0.1850309,
   0.1866508,
   0.1871009,
   0.1820398,
   0.1923331};
   TGraphErrors *gre = new TGraphErrors(87,Graph0_fx1221,Graph0_fy1221,Graph0_fex1221,Graph0_fey1221);
   gre->SetName("Graph0");
   gre->SetTitle("S12, 1600 < p [MeV] < 1800");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01221 = new TH1F("Graph_Graph01221","S12, 1600 < p [MeV] < 1800",100,0,4.771751);
   Graph_Graph01221->SetMinimum(-0.847386);
   Graph_Graph01221->SetMaximum(0.5698504);
   Graph_Graph01221->SetDirectory(0);
   Graph_Graph01221->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01221->SetLineColor(ci);
   Graph_Graph01221->GetXaxis()->SetTitle("t_{g#minus2}^{mod} [#mus]");
   Graph_Graph01221->GetXaxis()->CenterTitle(true);
   Graph_Graph01221->GetXaxis()->SetLabelFont(42);
   Graph_Graph01221->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01221->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01221->GetXaxis()->SetTitleFont(42);
   Graph_Graph01221->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 50 ns");
   Graph_Graph01221->GetYaxis()->CenterTitle(true);
   Graph_Graph01221->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01221->GetYaxis()->SetLabelFont(42);
   Graph_Graph01221->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01221->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01221->GetYaxis()->SetTitleFont(42);
   Graph_Graph01221->GetZaxis()->SetLabelFont(42);
   Graph_Graph01221->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01221->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01221);
   
   
   TF1 *PureBzFunc1222 = new TF1("*PureBzFunc",0,4.365324,4);
    //The original function : PureBzFunc had originally been created by:
    //TF1 *PureBzFunc = new TF1("PureBzFunc",PureBzFunc,0,4.365324,4, 1, TF1::EAddToList::kNo);
   PureBzFunc1222->SetRange(0,4.365324);
   PureBzFunc1222->SetName("PureBzFunc");
   PureBzFunc1222->SetTitle("PureBzFunc");
   PureBzFunc1222->SetSavedPoint(0,-0.0179865);
   PureBzFunc1222->SetSavedPoint(1,-0.01819721);
   PureBzFunc1222->SetSavedPoint(2,-0.01897973);
   PureBzFunc1222->SetSavedPoint(3,-0.020331);
   PureBzFunc1222->SetSavedPoint(4,-0.02224567);
   PureBzFunc1222->SetSavedPoint(5,-0.02471618);
   PureBzFunc1222->SetSavedPoint(6,-0.0277328);
   PureBzFunc1222->SetSavedPoint(7,-0.0312836);
   PureBzFunc1222->SetSavedPoint(8,-0.03535459);
   PureBzFunc1222->SetSavedPoint(9,-0.03992969);
   PureBzFunc1222->SetSavedPoint(10,-0.04499084);
   PureBzFunc1222->SetSavedPoint(11,-0.05051808);
   PureBzFunc1222->SetSavedPoint(12,-0.05648959);
   PureBzFunc1222->SetSavedPoint(13,-0.0628818);
   PureBzFunc1222->SetSavedPoint(14,-0.06966949);
   PureBzFunc1222->SetSavedPoint(15,-0.07682586);
   PureBzFunc1222->SetSavedPoint(16,-0.08432268);
   PureBzFunc1222->SetSavedPoint(17,-0.09213035);
   PureBzFunc1222->SetSavedPoint(18,-0.1002181);
   PureBzFunc1222->SetSavedPoint(19,-0.1085539);
   PureBzFunc1222->SetSavedPoint(20,-0.117105);
   PureBzFunc1222->SetSavedPoint(21,-0.1258376);
   PureBzFunc1222->SetSavedPoint(22,-0.1347171);
   PureBzFunc1222->SetSavedPoint(23,-0.1437087);
   PureBzFunc1222->SetSavedPoint(24,-0.1527767);
   PureBzFunc1222->SetSavedPoint(25,-0.1618855);
   PureBzFunc1222->SetSavedPoint(26,-0.1709989);
   PureBzFunc1222->SetSavedPoint(27,-0.1800812);
   PureBzFunc1222->SetSavedPoint(28,-0.1890964);
   PureBzFunc1222->SetSavedPoint(29,-0.198009);
   PureBzFunc1222->SetSavedPoint(30,-0.2067838);
   PureBzFunc1222->SetSavedPoint(31,-0.2153861);
   PureBzFunc1222->SetSavedPoint(32,-0.2237821);
   PureBzFunc1222->SetSavedPoint(33,-0.2319385);
   PureBzFunc1222->SetSavedPoint(34,-0.2398232);
   PureBzFunc1222->SetSavedPoint(35,-0.2474051);
   PureBzFunc1222->SetSavedPoint(36,-0.2546542);
   PureBzFunc1222->SetSavedPoint(37,-0.261542);
   PureBzFunc1222->SetSavedPoint(38,-0.2680412);
   PureBzFunc1222->SetSavedPoint(39,-0.2741262);
   PureBzFunc1222->SetSavedPoint(40,-0.279773);
   PureBzFunc1222->SetSavedPoint(41,-0.2849593);
   PureBzFunc1222->SetSavedPoint(42,-0.2896647);
   PureBzFunc1222->SetSavedPoint(43,-0.2938705);
   PureBzFunc1222->SetSavedPoint(44,-0.2975602);
   PureBzFunc1222->SetSavedPoint(45,-0.3007192);
   PureBzFunc1222->SetSavedPoint(46,-0.303335);
   PureBzFunc1222->SetSavedPoint(47,-0.3053974);
   PureBzFunc1222->SetSavedPoint(48,-0.3068981);
   PureBzFunc1222->SetSavedPoint(49,-0.3078313);
   PureBzFunc1222->SetSavedPoint(50,-0.3081932);
   PureBzFunc1222->SetSavedPoint(51,-0.3079825);
   PureBzFunc1222->SetSavedPoint(52,-0.3072);
   PureBzFunc1222->SetSavedPoint(53,-0.3058487);
   PureBzFunc1222->SetSavedPoint(54,-0.3039341);
   PureBzFunc1222->SetSavedPoint(55,-0.3014635);
   PureBzFunc1222->SetSavedPoint(56,-0.2984469);
   PureBzFunc1222->SetSavedPoint(57,-0.2948961);
   PureBzFunc1222->SetSavedPoint(58,-0.2908251);
   PureBzFunc1222->SetSavedPoint(59,-0.28625);
   PureBzFunc1222->SetSavedPoint(60,-0.2811889);
   PureBzFunc1222->SetSavedPoint(61,-0.2756616);
   PureBzFunc1222->SetSavedPoint(62,-0.2696901);
   PureBzFunc1222->SetSavedPoint(63,-0.2632979);
   PureBzFunc1222->SetSavedPoint(64,-0.2565102);
   PureBzFunc1222->SetSavedPoint(65,-0.2493539);
   PureBzFunc1222->SetSavedPoint(66,-0.241857);
   PureBzFunc1222->SetSavedPoint(67,-0.2340494);
   PureBzFunc1222->SetSavedPoint(68,-0.2259616);
   PureBzFunc1222->SetSavedPoint(69,-0.2176258);
   PureBzFunc1222->SetSavedPoint(70,-0.2090747);
   PureBzFunc1222->SetSavedPoint(71,-0.2003422);
   PureBzFunc1222->SetSavedPoint(72,-0.1914626);
   PureBzFunc1222->SetSavedPoint(73,-0.182471);
   PureBzFunc1222->SetSavedPoint(74,-0.173403);
   PureBzFunc1222->SetSavedPoint(75,-0.1642943);
   PureBzFunc1222->SetSavedPoint(76,-0.1551808);
   PureBzFunc1222->SetSavedPoint(77,-0.1460985);
   PureBzFunc1222->SetSavedPoint(78,-0.1370833);
   PureBzFunc1222->SetSavedPoint(79,-0.1281707);
   PureBzFunc1222->SetSavedPoint(80,-0.1193959);
   PureBzFunc1222->SetSavedPoint(81,-0.1107936);
   PureBzFunc1222->SetSavedPoint(82,-0.1023976);
   PureBzFunc1222->SetSavedPoint(83,-0.09424121);
   PureBzFunc1222->SetSavedPoint(84,-0.08635651);
   PureBzFunc1222->SetSavedPoint(85,-0.07877463);
   PureBzFunc1222->SetSavedPoint(86,-0.07152551);
   PureBzFunc1222->SetSavedPoint(87,-0.06463775);
   PureBzFunc1222->SetSavedPoint(88,-0.05813854);
   PureBzFunc1222->SetSavedPoint(89,-0.05205352);
   PureBzFunc1222->SetSavedPoint(90,-0.04640671);
   PureBzFunc1222->SetSavedPoint(91,-0.0412204);
   PureBzFunc1222->SetSavedPoint(92,-0.03651505);
   PureBzFunc1222->SetSavedPoint(93,-0.03230923);
   PureBzFunc1222->SetSavedPoint(94,-0.02861954);
   PureBzFunc1222->SetSavedPoint(95,-0.02546055);
   PureBzFunc1222->SetSavedPoint(96,-0.02284472);
   PureBzFunc1222->SetSavedPoint(97,-0.02078237);
   PureBzFunc1222->SetSavedPoint(98,-0.01928164);
   PureBzFunc1222->SetSavedPoint(99,-0.01834846);
   PureBzFunc1222->SetSavedPoint(100,-0.0179865);
   PureBzFunc1222->SetSavedPoint(101,0);
   PureBzFunc1222->SetSavedPoint(102,4.365324);
   PureBzFunc1222->SetFillColor(19);
   PureBzFunc1222->SetFillStyle(0);
   PureBzFunc1222->SetLineColor(2);
   PureBzFunc1222->SetLineWidth(2);
   PureBzFunc1222->SetChisquare(100.0036);
   PureBzFunc1222->SetNDF(85);
   PureBzFunc1222->GetXaxis()->SetLabelFont(42);
   PureBzFunc1222->GetXaxis()->SetTitleOffset(1);
   PureBzFunc1222->GetXaxis()->SetTitleFont(42);
   PureBzFunc1222->GetYaxis()->SetLabelFont(42);
   PureBzFunc1222->GetYaxis()->SetTitleFont(42);
   PureBzFunc1222->SetParameter(0,0.1451084);
   PureBzFunc1222->SetParError(0,0.02601751);
   PureBzFunc1222->SetParLimits(0,0,0);
   PureBzFunc1222->SetParameter(1,1.43934);
   PureBzFunc1222->SetParError(1,0);
   PureBzFunc1222->SetParLimits(1,1.43934,1.43934);
   PureBzFunc1222->SetParameter(2,-0.008300154);
   PureBzFunc1222->SetParError(2,0);
   PureBzFunc1222->SetParLimits(2,-0.008300154,-0.008300154);
   PureBzFunc1222->SetParameter(3,-0.1630899);
   PureBzFunc1222->SetParError(3,0.01840151);
   PureBzFunc1222->SetParLimits(3,0,0);
   PureBzFunc1222->SetParent(gre);
   gre->GetListOfFunctions()->Add(PureBzFunc1222);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.7,0.62,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("5.4#times10^{5}");
   pt_LaTex = pt->AddText("1.18
");
   pt_LaTex = pt->AddText("0.145
#pm0.03
");
   pt_LaTex = pt->AddText("-0.16
#pm0.02
");
   pt->Draw();
   
   pt = new TPaveText(0.5,0.62,0.7,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("N");
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("A_{Bz} [mrad]");
   pt_LaTex = pt->AddText("c [mrad]");
   pt->Draw();
   
   pt = new TPaveText(0.2,0.7,0.4,0.8,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("700 < p [MeV] < 2400");
   pt_LaTex = pt->AddText("0 < t [#mus] < 300");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.125,0.15,0.875,0.25,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","Sim   ","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("PureBzFunc","A_{Bz}cos(#omega_{a}t #plus #phi) #plus c","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TF1 *PureBzFunc1223 = new TF1("*PureBzFunc",0,4.365324,4);
    //The original function : PureBzFunc had originally been created by:
    //TF1 *PureBzFunc = new TF1("PureBzFunc",PureBzFunc,0,4.365324,4, 1, TF1::EAddToList::kNo);
   PureBzFunc1223->SetRange(0,4.365324);
   PureBzFunc1223->SetName("PureBzFunc");
   PureBzFunc1223->SetTitle("PureBzFunc");
   PureBzFunc1223->SetSavedPoint(0,-0.0179865);
   PureBzFunc1223->SetSavedPoint(1,-0.01819721);
   PureBzFunc1223->SetSavedPoint(2,-0.01897973);
   PureBzFunc1223->SetSavedPoint(3,-0.020331);
   PureBzFunc1223->SetSavedPoint(4,-0.02224567);
   PureBzFunc1223->SetSavedPoint(5,-0.02471618);
   PureBzFunc1223->SetSavedPoint(6,-0.0277328);
   PureBzFunc1223->SetSavedPoint(7,-0.0312836);
   PureBzFunc1223->SetSavedPoint(8,-0.03535459);
   PureBzFunc1223->SetSavedPoint(9,-0.03992969);
   PureBzFunc1223->SetSavedPoint(10,-0.04499084);
   PureBzFunc1223->SetSavedPoint(11,-0.05051808);
   PureBzFunc1223->SetSavedPoint(12,-0.05648959);
   PureBzFunc1223->SetSavedPoint(13,-0.0628818);
   PureBzFunc1223->SetSavedPoint(14,-0.06966949);
   PureBzFunc1223->SetSavedPoint(15,-0.07682586);
   PureBzFunc1223->SetSavedPoint(16,-0.08432268);
   PureBzFunc1223->SetSavedPoint(17,-0.09213035);
   PureBzFunc1223->SetSavedPoint(18,-0.1002181);
   PureBzFunc1223->SetSavedPoint(19,-0.1085539);
   PureBzFunc1223->SetSavedPoint(20,-0.117105);
   PureBzFunc1223->SetSavedPoint(21,-0.1258376);
   PureBzFunc1223->SetSavedPoint(22,-0.1347171);
   PureBzFunc1223->SetSavedPoint(23,-0.1437087);
   PureBzFunc1223->SetSavedPoint(24,-0.1527767);
   PureBzFunc1223->SetSavedPoint(25,-0.1618855);
   PureBzFunc1223->SetSavedPoint(26,-0.1709989);
   PureBzFunc1223->SetSavedPoint(27,-0.1800812);
   PureBzFunc1223->SetSavedPoint(28,-0.1890964);
   PureBzFunc1223->SetSavedPoint(29,-0.198009);
   PureBzFunc1223->SetSavedPoint(30,-0.2067838);
   PureBzFunc1223->SetSavedPoint(31,-0.2153861);
   PureBzFunc1223->SetSavedPoint(32,-0.2237821);
   PureBzFunc1223->SetSavedPoint(33,-0.2319385);
   PureBzFunc1223->SetSavedPoint(34,-0.2398232);
   PureBzFunc1223->SetSavedPoint(35,-0.2474051);
   PureBzFunc1223->SetSavedPoint(36,-0.2546542);
   PureBzFunc1223->SetSavedPoint(37,-0.261542);
   PureBzFunc1223->SetSavedPoint(38,-0.2680412);
   PureBzFunc1223->SetSavedPoint(39,-0.2741262);
   PureBzFunc1223->SetSavedPoint(40,-0.279773);
   PureBzFunc1223->SetSavedPoint(41,-0.2849593);
   PureBzFunc1223->SetSavedPoint(42,-0.2896647);
   PureBzFunc1223->SetSavedPoint(43,-0.2938705);
   PureBzFunc1223->SetSavedPoint(44,-0.2975602);
   PureBzFunc1223->SetSavedPoint(45,-0.3007192);
   PureBzFunc1223->SetSavedPoint(46,-0.303335);
   PureBzFunc1223->SetSavedPoint(47,-0.3053974);
   PureBzFunc1223->SetSavedPoint(48,-0.3068981);
   PureBzFunc1223->SetSavedPoint(49,-0.3078313);
   PureBzFunc1223->SetSavedPoint(50,-0.3081932);
   PureBzFunc1223->SetSavedPoint(51,-0.3079825);
   PureBzFunc1223->SetSavedPoint(52,-0.3072);
   PureBzFunc1223->SetSavedPoint(53,-0.3058487);
   PureBzFunc1223->SetSavedPoint(54,-0.3039341);
   PureBzFunc1223->SetSavedPoint(55,-0.3014635);
   PureBzFunc1223->SetSavedPoint(56,-0.2984469);
   PureBzFunc1223->SetSavedPoint(57,-0.2948961);
   PureBzFunc1223->SetSavedPoint(58,-0.2908251);
   PureBzFunc1223->SetSavedPoint(59,-0.28625);
   PureBzFunc1223->SetSavedPoint(60,-0.2811889);
   PureBzFunc1223->SetSavedPoint(61,-0.2756616);
   PureBzFunc1223->SetSavedPoint(62,-0.2696901);
   PureBzFunc1223->SetSavedPoint(63,-0.2632979);
   PureBzFunc1223->SetSavedPoint(64,-0.2565102);
   PureBzFunc1223->SetSavedPoint(65,-0.2493539);
   PureBzFunc1223->SetSavedPoint(66,-0.241857);
   PureBzFunc1223->SetSavedPoint(67,-0.2340494);
   PureBzFunc1223->SetSavedPoint(68,-0.2259616);
   PureBzFunc1223->SetSavedPoint(69,-0.2176258);
   PureBzFunc1223->SetSavedPoint(70,-0.2090747);
   PureBzFunc1223->SetSavedPoint(71,-0.2003422);
   PureBzFunc1223->SetSavedPoint(72,-0.1914626);
   PureBzFunc1223->SetSavedPoint(73,-0.182471);
   PureBzFunc1223->SetSavedPoint(74,-0.173403);
   PureBzFunc1223->SetSavedPoint(75,-0.1642943);
   PureBzFunc1223->SetSavedPoint(76,-0.1551808);
   PureBzFunc1223->SetSavedPoint(77,-0.1460985);
   PureBzFunc1223->SetSavedPoint(78,-0.1370833);
   PureBzFunc1223->SetSavedPoint(79,-0.1281707);
   PureBzFunc1223->SetSavedPoint(80,-0.1193959);
   PureBzFunc1223->SetSavedPoint(81,-0.1107936);
   PureBzFunc1223->SetSavedPoint(82,-0.1023976);
   PureBzFunc1223->SetSavedPoint(83,-0.09424121);
   PureBzFunc1223->SetSavedPoint(84,-0.08635651);
   PureBzFunc1223->SetSavedPoint(85,-0.07877463);
   PureBzFunc1223->SetSavedPoint(86,-0.07152551);
   PureBzFunc1223->SetSavedPoint(87,-0.06463775);
   PureBzFunc1223->SetSavedPoint(88,-0.05813854);
   PureBzFunc1223->SetSavedPoint(89,-0.05205352);
   PureBzFunc1223->SetSavedPoint(90,-0.04640671);
   PureBzFunc1223->SetSavedPoint(91,-0.0412204);
   PureBzFunc1223->SetSavedPoint(92,-0.03651505);
   PureBzFunc1223->SetSavedPoint(93,-0.03230923);
   PureBzFunc1223->SetSavedPoint(94,-0.02861954);
   PureBzFunc1223->SetSavedPoint(95,-0.02546055);
   PureBzFunc1223->SetSavedPoint(96,-0.02284472);
   PureBzFunc1223->SetSavedPoint(97,-0.02078237);
   PureBzFunc1223->SetSavedPoint(98,-0.01928164);
   PureBzFunc1223->SetSavedPoint(99,-0.01834846);
   PureBzFunc1223->SetSavedPoint(100,-0.0179865);
   PureBzFunc1223->SetSavedPoint(101,0);
   PureBzFunc1223->SetSavedPoint(102,4.365324);
   PureBzFunc1223->SetFillColor(19);
   PureBzFunc1223->SetFillStyle(0);
   PureBzFunc1223->SetLineColor(2);
   PureBzFunc1223->SetLineWidth(2);
   PureBzFunc1223->SetChisquare(100.0036);
   PureBzFunc1223->SetNDF(85);
   PureBzFunc1223->GetXaxis()->SetLabelFont(42);
   PureBzFunc1223->GetXaxis()->SetTitleOffset(1);
   PureBzFunc1223->GetXaxis()->SetTitleFont(42);
   PureBzFunc1223->GetYaxis()->SetLabelFont(42);
   PureBzFunc1223->GetYaxis()->SetTitleFont(42);
   PureBzFunc1223->SetParameter(0,0.1451084);
   PureBzFunc1223->SetParError(0,0.02601751);
   PureBzFunc1223->SetParLimits(0,0,0);
   PureBzFunc1223->SetParameter(1,1.43934);
   PureBzFunc1223->SetParError(1,0);
   PureBzFunc1223->SetParLimits(1,1.43934,1.43934);
   PureBzFunc1223->SetParameter(2,-0.008300154);
   PureBzFunc1223->SetParError(2,0);
   PureBzFunc1223->SetParLimits(2,-0.008300154,-0.008300154);
   PureBzFunc1223->SetParameter(3,-0.1630899);
   PureBzFunc1223->SetParError(3,0.01840151);
   PureBzFunc1223->SetParLimits(3,0,0);
   PureBzFunc1223->Draw("same");
   
   pt = new TPaveText(0.2594724,0.9341608,0.7405276,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("S12, 1600 < p [MeV] < 1800");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
