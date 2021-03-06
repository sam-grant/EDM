void S12_ModuloFit_2600_2800_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 16:42:24 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-0.5964689,-1.290153,5.36822,1.428701);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1071[87] = {
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
   Double_t Graph0_fy1071[87] = {
   -0.1064372,
   0.5826873,
   0.7020024,
   0.3165769,
   0.08978676,
   -0.572621,
   0.04079602,
   0.2375479,
   0.3852596,
   -0.2696214,
   -0.05431809,
   0.05812325,
   0.1715002,
   -0.1742876,
   -0.1042945,
   0.09298733,
   -0.03673019,
   -0.01860712,
   -0.0398929,
   0.1176471,
   -0.3668478,
   -0.05954735,
   -0.001028172,
   -0.3794842,
   0.1393361,
   -0.2756445,
   -0.3741569,
   -0.4671558,
   -0.173012,
   -0.2552157,
   -0.3426341,
   -0.214078,
   -0.04302977,
   -0.01962617,
   -0.3822655,
   -0.3147312,
   -0.2826116,
   -0.07939012,
   -0.1290195,
   -0.2151502,
   0.01905873,
   0.08488942,
   -0.265167,
   -0.002943341,
   -0.3538213,
   -0.2198413,
   -0.1719044,
   -0.08676509,
   -0.3184039,
   -0.03530962,
   -0.1885144,
   -0.2277056,
   -0.0634119,
   0.2772472,
   0.08065011,
   0.03517878,
   0.04327152,
   -0.2087454,
   -0.2915663,
   -0.3647833,
   -0.4373576,
   0.1956284,
   -0.1644289,
   0.2693302,
   0.269296,
   -0.163964,
   -0.210501,
   -0.4446919,
   -0.2207591,
   -0.2877103,
   0.2911877,
   -0.03711133,
   0.4231537,
   0.1821665,
   0.3889533,
   -0.02700524,
   -0.05535354,
   0.09491059,
   0.06531205,
   0.4183976,
   0.6494845,
   -0.1420674,
   -0.5134168,
   0.2352941,
   0.3082811,
   0.1613977,
   0.1977401};
   Double_t Graph0_fex1071[87] = {
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
   Double_t Graph0_fey1071[87] = {
   0.2796775,
   0.2863756,
   0.2735567,
   0.2803112,
   0.2526118,
   0.2643894,
   0.2393381,
   0.2441301,
   0.2334704,
   0.2396231,
   0.2172465,
   0.2122008,
   0.2133175,
   0.1958974,
   0.2084492,
   0.1988429,
   0.1779972,
   0.1796968,
   0.1840094,
   0.1678405,
   0.1645663,
   0.1668974,
   0.1608441,
   0.1598444,
   0.1587356,
   0.1429556,
   0.15185,
   0.1477686,
   0.146328,
   0.1410669,
   0.1462305,
   0.1418836,
   0.1351182,
   0.1370069,
   0.1307399,
   0.1314099,
   0.1320673,
   0.1264773,
   0.1261691,
   0.1293859,
   0.1278571,
   0.1260884,
   0.1320878,
   0.121699,
   0.1288639,
   0.1280636,
   0.130412,
   0.1274207,
   0.1276375,
   0.1238801,
   0.1316084,
   0.1326702,
   0.1358617,
   0.1384398,
   0.1400722,
   0.129244,
   0.1395758,
   0.1423953,
   0.1415712,
   0.1540407,
   0.1546177,
   0.152612,
   0.1573379,
   0.1562873,
   0.1619653,
   0.1660632,
   0.1744696,
   0.1692154,
   0.1861713,
   0.1795697,
   0.2032827,
   0.207088,
   0.2012714,
   0.2115503,
   0.2170901,
   0.2215828,
   0.2435296,
   0.2294781,
   0.2520773,
   0.2606495,
   0.2404983,
   0.2585537,
   0.2752472,
   0.2775307,
   0.3049552,
   0.2713389,
   0.2881076};
   TGraphErrors *gre = new TGraphErrors(87,Graph0_fx1071,Graph0_fy1071,Graph0_fex1071,Graph0_fey1071);
   gre->SetName("Graph0");
   gre->SetTitle("S12, 2600 < p [MeV] < 2800");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01071 = new TH1F("Graph_Graph01071","S12, 2600 < p [MeV] < 2800",100,0,4.771751);
   Graph_Graph01071->SetMinimum(-1.018267);
   Graph_Graph01071->SetMaximum(1.156816);
   Graph_Graph01071->SetDirectory(0);
   Graph_Graph01071->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01071->SetLineColor(ci);
   Graph_Graph01071->GetXaxis()->SetTitle("t_{g#minus2}^{mod} [#mus]");
   Graph_Graph01071->GetXaxis()->CenterTitle(true);
   Graph_Graph01071->GetXaxis()->SetLabelFont(42);
   Graph_Graph01071->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01071->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01071->GetXaxis()->SetTitleFont(42);
   Graph_Graph01071->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 50 ns");
   Graph_Graph01071->GetYaxis()->CenterTitle(true);
   Graph_Graph01071->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01071->GetYaxis()->SetLabelFont(42);
   Graph_Graph01071->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01071->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01071->GetYaxis()->SetTitleFont(42);
   Graph_Graph01071->GetZaxis()->SetLabelFont(42);
   Graph_Graph01071->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01071);
   
   
   TF1 *BzFunc1072 = new TF1("*BzFunc",0,4.365324,7);
    //The original function : BzFunc had originally been created by:
    //TF1 *BzFunc = new TF1("BzFunc",BzFunc,0,4.365324,7, 1, TF1::EAddToList::kNo);
   BzFunc1072->SetRange(0,4.365324);
   BzFunc1072->SetName("BzFunc");
   BzFunc1072->SetTitle("BzFunc");
   BzFunc1072->SetSavedPoint(0,0.08508998);
   BzFunc1072->SetSavedPoint(1,0.08107056);
   BzFunc1072->SetSavedPoint(2,0.07653508);
   BzFunc1072->SetSavedPoint(3,0.07150143);
   BzFunc1072->SetSavedPoint(4,0.06598947);
   BzFunc1072->SetSavedPoint(5,0.06002096);
   BzFunc1072->SetSavedPoint(6,0.05361945);
   BzFunc1072->SetSavedPoint(7,0.04681021);
   BzFunc1072->SetSavedPoint(8,0.03962011);
   BzFunc1072->SetSavedPoint(9,0.03207753);
   BzFunc1072->SetSavedPoint(10,0.02421223);
   BzFunc1072->SetSavedPoint(11,0.01605525);
   BzFunc1072->SetSavedPoint(12,0.007638789);
   BzFunc1072->SetSavedPoint(13,-0.00100394);
   BzFunc1072->SetSavedPoint(14,-0.009838828);
   BzFunc1072->SetSavedPoint(15,-0.01883101);
   BzFunc1072->SetSavedPoint(16,-0.02794499);
   BzFunc1072->SetSavedPoint(17,-0.03714481);
   BzFunc1072->SetSavedPoint(18,-0.04639416);
   BzFunc1072->SetSavedPoint(19,-0.05565653);
   BzFunc1072->SetSavedPoint(20,-0.06489537);
   BzFunc1072->SetSavedPoint(21,-0.07407422);
   BzFunc1072->SetSavedPoint(22,-0.08315686);
   BzFunc1072->SetSavedPoint(23,-0.09210743);
   BzFunc1072->SetSavedPoint(24,-0.1008906);
   BzFunc1072->SetSavedPoint(25,-0.1094718);
   BzFunc1072->SetSavedPoint(26,-0.117817);
   BzFunc1072->SetSavedPoint(27,-0.1258934);
   BzFunc1072->SetSavedPoint(28,-0.133669);
   BzFunc1072->SetSavedPoint(29,-0.1411133);
   BzFunc1072->SetSavedPoint(30,-0.1481967);
   BzFunc1072->SetSavedPoint(31,-0.1548915);
   BzFunc1072->SetSavedPoint(32,-0.161171);
   BzFunc1072->SetSavedPoint(33,-0.1670106);
   BzFunc1072->SetSavedPoint(34,-0.1723872);
   BzFunc1072->SetSavedPoint(35,-0.1772796);
   BzFunc1072->SetSavedPoint(36,-0.1816685);
   BzFunc1072->SetSavedPoint(37,-0.1855365);
   BzFunc1072->SetSavedPoint(38,-0.1888685);
   BzFunc1072->SetSavedPoint(39,-0.1916512);
   BzFunc1072->SetSavedPoint(40,-0.1938736);
   BzFunc1072->SetSavedPoint(41,-0.195527);
   BzFunc1072->SetSavedPoint(42,-0.1966049);
   BzFunc1072->SetSavedPoint(43,-0.197103);
   BzFunc1072->SetSavedPoint(44,-0.1970194);
   BzFunc1072->SetSavedPoint(45,-0.1963543);
   BzFunc1072->SetSavedPoint(46,-0.1951104);
   BzFunc1072->SetSavedPoint(47,-0.1932927);
   BzFunc1072->SetSavedPoint(48,-0.1909082);
   BzFunc1072->SetSavedPoint(49,-0.1879664);
   BzFunc1072->SetSavedPoint(50,-0.1844789);
   BzFunc1072->SetSavedPoint(51,-0.1804595);
   BzFunc1072->SetSavedPoint(52,-0.175924);
   BzFunc1072->SetSavedPoint(53,-0.1708904);
   BzFunc1072->SetSavedPoint(54,-0.1653784);
   BzFunc1072->SetSavedPoint(55,-0.1594099);
   BzFunc1072->SetSavedPoint(56,-0.1530084);
   BzFunc1072->SetSavedPoint(57,-0.1461991);
   BzFunc1072->SetSavedPoint(58,-0.139009);
   BzFunc1072->SetSavedPoint(59,-0.1314665);
   BzFunc1072->SetSavedPoint(60,-0.1236012);
   BzFunc1072->SetSavedPoint(61,-0.1154442);
   BzFunc1072->SetSavedPoint(62,-0.1070277);
   BzFunc1072->SetSavedPoint(63,-0.098385);
   BzFunc1072->SetSavedPoint(64,-0.08955011);
   BzFunc1072->SetSavedPoint(65,-0.08055793);
   BzFunc1072->SetSavedPoint(66,-0.07144394);
   BzFunc1072->SetSavedPoint(67,-0.06224413);
   BzFunc1072->SetSavedPoint(68,-0.05299478);
   BzFunc1072->SetSavedPoint(69,-0.04373241);
   BzFunc1072->SetSavedPoint(70,-0.03449356);
   BzFunc1072->SetSavedPoint(71,-0.02531471);
   BzFunc1072->SetSavedPoint(72,-0.01623208);
   BzFunc1072->SetSavedPoint(73,-0.007281503);
   BzFunc1072->SetSavedPoint(74,0.001501687);
   BzFunc1072->SetSavedPoint(75,0.01008283);
   BzFunc1072->SetSavedPoint(76,0.01842806);
   BzFunc1072->SetSavedPoint(77,0.02650444);
   BzFunc1072->SetSavedPoint(78,0.0342801);
   BzFunc1072->SetSavedPoint(79,0.04172434);
   BzFunc1072->SetSavedPoint(80,0.0488078);
   BzFunc1072->SetSavedPoint(81,0.05550252);
   BzFunc1072->SetSavedPoint(82,0.06178207);
   BzFunc1072->SetSavedPoint(83,0.06762168);
   BzFunc1072->SetSavedPoint(84,0.07299829);
   BzFunc1072->SetSavedPoint(85,0.07789069);
   BzFunc1072->SetSavedPoint(86,0.08227957);
   BzFunc1072->SetSavedPoint(87,0.08614761);
   BzFunc1072->SetSavedPoint(88,0.08947954);
   BzFunc1072->SetSavedPoint(89,0.09226222);
   BzFunc1072->SetSavedPoint(90,0.09448465);
   BzFunc1072->SetSavedPoint(91,0.09613808);
   BzFunc1072->SetSavedPoint(92,0.09721597);
   BzFunc1072->SetSavedPoint(93,0.09771408);
   BzFunc1072->SetSavedPoint(94,0.09763043);
   BzFunc1072->SetSavedPoint(95,0.09696536);
   BzFunc1072->SetSavedPoint(96,0.09572149);
   BzFunc1072->SetSavedPoint(97,0.09390372);
   BzFunc1072->SetSavedPoint(98,0.09151924);
   BzFunc1072->SetSavedPoint(99,0.08857746);
   BzFunc1072->SetSavedPoint(100,0.08508998);
   BzFunc1072->SetSavedPoint(101,0);
   BzFunc1072->SetSavedPoint(102,4.365324);
   BzFunc1072->SetFillColor(19);
   BzFunc1072->SetFillStyle(0);
   BzFunc1072->SetLineColor(2);
   BzFunc1072->SetLineWidth(2);
   BzFunc1072->SetChisquare(136.2423);
   BzFunc1072->SetNDF(84);
   BzFunc1072->GetXaxis()->SetLabelFont(42);
   BzFunc1072->GetXaxis()->SetTitleOffset(1);
   BzFunc1072->GetXaxis()->SetTitleFont(42);
   BzFunc1072->GetYaxis()->SetLabelFont(42);
   BzFunc1072->GetYaxis()->SetTitleFont(42);
   BzFunc1072->SetParameter(0,0.1342836);
   BzFunc1072->SetParError(0,0.02812134);
   BzFunc1072->SetParLimits(0,0,0);
   BzFunc1072->SetParameter(1,1.43934);
   BzFunc1072->SetParError(1,0);
   BzFunc1072->SetParLimits(1,1.43934,1.43934);
   BzFunc1072->SetParameter(2,-0.008300154);
   BzFunc1072->SetParError(2,0);
   BzFunc1072->SetParLimits(2,-0.008300154,-0.008300154);
   BzFunc1072->SetParameter(3,-0.06089396);
   BzFunc1072->SetParError(3,0.02502787);
   BzFunc1072->SetParLimits(3,0,0);
   BzFunc1072->SetParameter(4,1.43934);
   BzFunc1072->SetParError(4,0);
   BzFunc1072->SetParLimits(4,1.43934,1.43934);
   BzFunc1072->SetParameter(5,-0.008300154);
   BzFunc1072->SetParError(5,0);
   BzFunc1072->SetParLimits(5,-0.008300154,-0.008300154);
   BzFunc1072->SetParameter(6,-0.04969447);
   BzFunc1072->SetParError(6,0.01994675);
   BzFunc1072->SetParLimits(6,0,0);
   BzFunc1072->SetParent(gre);
   gre->GetListOfFunctions()->Add(BzFunc1072);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.7,0.62,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("1.33#times10^{5}");
   pt_LaTex = pt->AddText("1.62
");
   pt_LaTex = pt->AddText("0.134
#pm0.03
");
   pt_LaTex = pt->AddText("-0.061
#pm0.03
");
   pt_LaTex = pt->AddText("-0.05
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
   pt_LaTex = pt->AddText("A_{EDM} [mrad]");
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
   entry=leg->AddEntry("BzFunc","A_{Bz}cos(#omega_{a}t #plus #phi) #plus A_{EDM}sin(#omega_{a}t #plus #phi) #plus c","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TF1 *BzFunc1073 = new TF1("*BzFunc",0,4.365324,7);
    //The original function : BzFunc had originally been created by:
    //TF1 *BzFunc = new TF1("BzFunc",BzFunc,0,4.365324,7, 1, TF1::EAddToList::kNo);
   BzFunc1073->SetRange(0,4.365324);
   BzFunc1073->SetName("BzFunc");
   BzFunc1073->SetTitle("BzFunc");
   BzFunc1073->SetSavedPoint(0,0.08508998);
   BzFunc1073->SetSavedPoint(1,0.08107056);
   BzFunc1073->SetSavedPoint(2,0.07653508);
   BzFunc1073->SetSavedPoint(3,0.07150143);
   BzFunc1073->SetSavedPoint(4,0.06598947);
   BzFunc1073->SetSavedPoint(5,0.06002096);
   BzFunc1073->SetSavedPoint(6,0.05361945);
   BzFunc1073->SetSavedPoint(7,0.04681021);
   BzFunc1073->SetSavedPoint(8,0.03962011);
   BzFunc1073->SetSavedPoint(9,0.03207753);
   BzFunc1073->SetSavedPoint(10,0.02421223);
   BzFunc1073->SetSavedPoint(11,0.01605525);
   BzFunc1073->SetSavedPoint(12,0.007638789);
   BzFunc1073->SetSavedPoint(13,-0.00100394);
   BzFunc1073->SetSavedPoint(14,-0.009838828);
   BzFunc1073->SetSavedPoint(15,-0.01883101);
   BzFunc1073->SetSavedPoint(16,-0.02794499);
   BzFunc1073->SetSavedPoint(17,-0.03714481);
   BzFunc1073->SetSavedPoint(18,-0.04639416);
   BzFunc1073->SetSavedPoint(19,-0.05565653);
   BzFunc1073->SetSavedPoint(20,-0.06489537);
   BzFunc1073->SetSavedPoint(21,-0.07407422);
   BzFunc1073->SetSavedPoint(22,-0.08315686);
   BzFunc1073->SetSavedPoint(23,-0.09210743);
   BzFunc1073->SetSavedPoint(24,-0.1008906);
   BzFunc1073->SetSavedPoint(25,-0.1094718);
   BzFunc1073->SetSavedPoint(26,-0.117817);
   BzFunc1073->SetSavedPoint(27,-0.1258934);
   BzFunc1073->SetSavedPoint(28,-0.133669);
   BzFunc1073->SetSavedPoint(29,-0.1411133);
   BzFunc1073->SetSavedPoint(30,-0.1481967);
   BzFunc1073->SetSavedPoint(31,-0.1548915);
   BzFunc1073->SetSavedPoint(32,-0.161171);
   BzFunc1073->SetSavedPoint(33,-0.1670106);
   BzFunc1073->SetSavedPoint(34,-0.1723872);
   BzFunc1073->SetSavedPoint(35,-0.1772796);
   BzFunc1073->SetSavedPoint(36,-0.1816685);
   BzFunc1073->SetSavedPoint(37,-0.1855365);
   BzFunc1073->SetSavedPoint(38,-0.1888685);
   BzFunc1073->SetSavedPoint(39,-0.1916512);
   BzFunc1073->SetSavedPoint(40,-0.1938736);
   BzFunc1073->SetSavedPoint(41,-0.195527);
   BzFunc1073->SetSavedPoint(42,-0.1966049);
   BzFunc1073->SetSavedPoint(43,-0.197103);
   BzFunc1073->SetSavedPoint(44,-0.1970194);
   BzFunc1073->SetSavedPoint(45,-0.1963543);
   BzFunc1073->SetSavedPoint(46,-0.1951104);
   BzFunc1073->SetSavedPoint(47,-0.1932927);
   BzFunc1073->SetSavedPoint(48,-0.1909082);
   BzFunc1073->SetSavedPoint(49,-0.1879664);
   BzFunc1073->SetSavedPoint(50,-0.1844789);
   BzFunc1073->SetSavedPoint(51,-0.1804595);
   BzFunc1073->SetSavedPoint(52,-0.175924);
   BzFunc1073->SetSavedPoint(53,-0.1708904);
   BzFunc1073->SetSavedPoint(54,-0.1653784);
   BzFunc1073->SetSavedPoint(55,-0.1594099);
   BzFunc1073->SetSavedPoint(56,-0.1530084);
   BzFunc1073->SetSavedPoint(57,-0.1461991);
   BzFunc1073->SetSavedPoint(58,-0.139009);
   BzFunc1073->SetSavedPoint(59,-0.1314665);
   BzFunc1073->SetSavedPoint(60,-0.1236012);
   BzFunc1073->SetSavedPoint(61,-0.1154442);
   BzFunc1073->SetSavedPoint(62,-0.1070277);
   BzFunc1073->SetSavedPoint(63,-0.098385);
   BzFunc1073->SetSavedPoint(64,-0.08955011);
   BzFunc1073->SetSavedPoint(65,-0.08055793);
   BzFunc1073->SetSavedPoint(66,-0.07144394);
   BzFunc1073->SetSavedPoint(67,-0.06224413);
   BzFunc1073->SetSavedPoint(68,-0.05299478);
   BzFunc1073->SetSavedPoint(69,-0.04373241);
   BzFunc1073->SetSavedPoint(70,-0.03449356);
   BzFunc1073->SetSavedPoint(71,-0.02531471);
   BzFunc1073->SetSavedPoint(72,-0.01623208);
   BzFunc1073->SetSavedPoint(73,-0.007281503);
   BzFunc1073->SetSavedPoint(74,0.001501687);
   BzFunc1073->SetSavedPoint(75,0.01008283);
   BzFunc1073->SetSavedPoint(76,0.01842806);
   BzFunc1073->SetSavedPoint(77,0.02650444);
   BzFunc1073->SetSavedPoint(78,0.0342801);
   BzFunc1073->SetSavedPoint(79,0.04172434);
   BzFunc1073->SetSavedPoint(80,0.0488078);
   BzFunc1073->SetSavedPoint(81,0.05550252);
   BzFunc1073->SetSavedPoint(82,0.06178207);
   BzFunc1073->SetSavedPoint(83,0.06762168);
   BzFunc1073->SetSavedPoint(84,0.07299829);
   BzFunc1073->SetSavedPoint(85,0.07789069);
   BzFunc1073->SetSavedPoint(86,0.08227957);
   BzFunc1073->SetSavedPoint(87,0.08614761);
   BzFunc1073->SetSavedPoint(88,0.08947954);
   BzFunc1073->SetSavedPoint(89,0.09226222);
   BzFunc1073->SetSavedPoint(90,0.09448465);
   BzFunc1073->SetSavedPoint(91,0.09613808);
   BzFunc1073->SetSavedPoint(92,0.09721597);
   BzFunc1073->SetSavedPoint(93,0.09771408);
   BzFunc1073->SetSavedPoint(94,0.09763043);
   BzFunc1073->SetSavedPoint(95,0.09696536);
   BzFunc1073->SetSavedPoint(96,0.09572149);
   BzFunc1073->SetSavedPoint(97,0.09390372);
   BzFunc1073->SetSavedPoint(98,0.09151924);
   BzFunc1073->SetSavedPoint(99,0.08857746);
   BzFunc1073->SetSavedPoint(100,0.08508998);
   BzFunc1073->SetSavedPoint(101,0);
   BzFunc1073->SetSavedPoint(102,4.365324);
   BzFunc1073->SetFillColor(19);
   BzFunc1073->SetFillStyle(0);
   BzFunc1073->SetLineColor(2);
   BzFunc1073->SetLineWidth(2);
   BzFunc1073->SetChisquare(136.2423);
   BzFunc1073->SetNDF(84);
   BzFunc1073->GetXaxis()->SetLabelFont(42);
   BzFunc1073->GetXaxis()->SetTitleOffset(1);
   BzFunc1073->GetXaxis()->SetTitleFont(42);
   BzFunc1073->GetYaxis()->SetLabelFont(42);
   BzFunc1073->GetYaxis()->SetTitleFont(42);
   BzFunc1073->SetParameter(0,0.1342836);
   BzFunc1073->SetParError(0,0.02812134);
   BzFunc1073->SetParLimits(0,0,0);
   BzFunc1073->SetParameter(1,1.43934);
   BzFunc1073->SetParError(1,0);
   BzFunc1073->SetParLimits(1,1.43934,1.43934);
   BzFunc1073->SetParameter(2,-0.008300154);
   BzFunc1073->SetParError(2,0);
   BzFunc1073->SetParLimits(2,-0.008300154,-0.008300154);
   BzFunc1073->SetParameter(3,-0.06089396);
   BzFunc1073->SetParError(3,0.02502787);
   BzFunc1073->SetParLimits(3,0,0);
   BzFunc1073->SetParameter(4,1.43934);
   BzFunc1073->SetParError(4,0);
   BzFunc1073->SetParLimits(4,1.43934,1.43934);
   BzFunc1073->SetParameter(5,-0.008300154);
   BzFunc1073->SetParError(5,0);
   BzFunc1073->SetParLimits(5,-0.008300154,-0.008300154);
   BzFunc1073->SetParameter(6,-0.04969447);
   BzFunc1073->SetParError(6,0.01994675);
   BzFunc1073->SetParLimits(6,0,0);
   BzFunc1073->Draw("same");
   
   pt = new TPaveText(0.2594724,0.9341608,0.7405276,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("S12, 2600 < p [MeV] < 2800");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
