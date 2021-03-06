void FullModuloFit_1200_1400_truth_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:11:43 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-0.6024336,-1.25,4.944727,1.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1019[87] = {
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
   0.5268494,
   0.5770256,
   0.6272017,
   0.6773778,
   0.727554,
   0.7777301,
   0.8279063,
   0.8780824,
   0.9282585,
   0.9784347,
   1.028611,
   1.078787,
   1.128963,
   1.179139,
   1.229315,
   1.279491,
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
   2.383366,
   2.433543,
   2.483719,
   2.533895,
   2.584071,
   2.634247,
   2.684423,
   2.734599,
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
   3.838474,
   3.888651,
   3.938827,
   3.989003,
   4.039179,
   4.089355,
   4.139531,
   4.189707,
   4.239884,
   4.29006,
   4.340236};
   Double_t Graph0_fy1019[87] = {
   0.2884319,
   -0.05504378,
   0.1845562,
   0.06099436,
   0.4837642,
   0.3383987,
   -0.1398976,
   0.2438017,
   0.3292413,
   0.1310329,
   -0.55656,
   -0.6083348,
   0.1419496,
   -0.01549312,
   0.1289379,
   0.2676819,
   -0.4022318,
   0.04407433,
   -0.1380786,
   0.2202818,
   0.02383444,
   0.1158227,
   0.45594,
   0.1288558,
   -0.8947368,
   -0.1889611,
   0.182646,
   -0.1628944,
   -0.2068805,
   0.2865075,
   -0.01099026,
   -0.07732497,
   0.2868106,
   0.1239399,
   -0.423616,
   -0.05669172,
   -0.08084961,
   -0.585102,
   -0.0106172,
   -0.2513882,
   -0.3353195,
   -0.4635949,
   -0.08959203,
   -0.2323023,
   0.2426778,
   -0.4467354,
   -0.1949463,
   -0.1605283,
   -0.4902232,
   -0.4338447,
   -0.09362375,
   -0.1034972,
   0.02518892,
   -0.5683462,
   -0.3571429,
   -0.08438146,
   -0.06744282,
   -0.4747725,
   -0.06496311,
   -0.3045341,
   -0.3192455,
   -0.2193443,
   0.2199954,
   -0.05110274,
   0.1280168,
   0.2908048,
   -0.1809006,
   -0.02155407,
   0.2431247,
   0.3294916,
   -0.336894,
   -0.472162,
   -0.1201969,
   -0.09489489,
   -0.1043117,
   0.4456915,
   0.2912235,
   -0.01433455,
   0.09344585,
   0.3720996,
   0.2459652,
   0.2100889,
   0.2427062,
   0.1444975,
   0.007829978,
   0.2751189,
   0.217655};
   Double_t Graph0_fex1019[87] = {
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
   Double_t Graph0_fey1019[87] = {
   0.2563732,
   0.2511971,
   0.2510717,
   0.2557221,
   0.250919,
   0.2572719,
   0.2557942,
   0.2538501,
   0.2560886,
   0.2576867,
   0.2536067,
   0.2550848,
   0.2543801,
   0.2550096,
   0.2539658,
   0.2519022,
   0.2521336,
   0.2498237,
   0.2510255,
   0.2540827,
   0.2552811,
   0.2533258,
   0.252328,
   0.2513056,
   0.2534432,
   0.2504465,
   0.2528095,
   0.2501368,
   0.2561606,
   0.2513839,
   0.250465,
   0.2553268,
   0.2564762,
   0.2521324,
   0.2509252,
   0.2561753,
   0.2491062,
   0.253583,
   0.2521718,
   0.2553867,
   0.2538687,
   0.2511424,
   0.2507673,
   0.2506762,
   0.2523702,
   0.2525699,
   0.2571163,
   0.2524434,
   0.2490657,
   0.2545562,
   0.2563881,
   0.2538469,
   0.254899,
   0.2553372,
   0.2533366,
   0.254165,
   0.2550823,
   0.2556083,
   0.2554082,
   0.2576992,
   0.2584416,
   0.2554855,
   0.2508742,
   0.257276,
   0.2525436,
   0.2553086,
   0.2610578,
   0.2570947,
   0.2561888,
   0.2598769,
   0.2601476,
   0.2600968,
   0.2592259,
   0.2606225,
   0.2626251,
   0.2630336,
   0.2499233,
   0.2496118,
   0.2525297,
   0.2529182,
   0.2543566,
   0.2527993,
   0.2531307,
   0.2526703,
   0.2501969,
   0.2558029,
   0.2502957};
   TGraphErrors *gre = new TGraphErrors(87,Graph0_fx1019,Graph0_fy1019,Graph0_fex1019,Graph0_fey1019);
   gre->SetName("Graph0");
   gre->SetTitle("1200 < p [MeV] < 1400");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01019 = new TH1F("Graph_Graph01019","1200 < p [MeV] < 1400",100,0,4.771751);
   Graph_Graph01019->SetMinimum(-1);
   Graph_Graph01019->SetMaximum(1);
   Graph_Graph01019->SetDirectory(0);
   Graph_Graph01019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01019->SetLineColor(ci);
   Graph_Graph01019->GetXaxis()->SetTitle("t_{g#minus2}^{mod} [#mus]");
   Graph_Graph01019->GetXaxis()->SetRange(0,92);
   Graph_Graph01019->GetXaxis()->CenterTitle(true);
   Graph_Graph01019->GetXaxis()->SetLabelFont(42);
   Graph_Graph01019->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01019->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01019->GetXaxis()->SetTitleFont(42);
   Graph_Graph01019->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 50 ns");
   Graph_Graph01019->GetYaxis()->CenterTitle(true);
   Graph_Graph01019->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01019->GetYaxis()->SetLabelFont(42);
   Graph_Graph01019->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01019->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01019->GetYaxis()->SetTitleFont(42);
   Graph_Graph01019->GetZaxis()->SetLabelFont(42);
   Graph_Graph01019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01019);
   
   
   TF1 *FullBzFunc1020 = new TF1("*FullBzFunc",0,4.365324,7);
    //The original function : FullBzFunc had originally been created by:
    //TF1 *FullBzFunc = new TF1("FullBzFunc",FullBzFunc,0,4.365324,7, 1, TF1::EAddToList::kNo);
   FullBzFunc1020->SetRange(0,4.365324);
   FullBzFunc1020->SetName("FullBzFunc");
   FullBzFunc1020->SetTitle("FullBzFunc");
   FullBzFunc1020->SetSavedPoint(0,0.1451178);
   FullBzFunc1020->SetSavedPoint(1,0.1457832);
   FullBzFunc1020->SetSavedPoint(2,0.1457269);
   FullBzFunc1020->SetSavedPoint(3,0.1449493);
   FullBzFunc1020->SetSavedPoint(4,0.1434534);
   FullBzFunc1020->SetSavedPoint(5,0.1412451);
   FullBzFunc1020->SetSavedPoint(6,0.1383331);
   FullBzFunc1020->SetSavedPoint(7,0.1347289);
   FullBzFunc1020->SetSavedPoint(8,0.1304468);
   FullBzFunc1020->SetSavedPoint(9,0.1255036);
   FullBzFunc1020->SetSavedPoint(10,0.1199188);
   FullBzFunc1020->SetSavedPoint(11,0.1137145);
   FullBzFunc1020->SetSavedPoint(12,0.1069152);
   FullBzFunc1020->SetSavedPoint(13,0.09954769);
   FullBzFunc1020->SetSavedPoint(14,0.09164106);
   FullBzFunc1020->SetSavedPoint(15,0.08322652);
   FullBzFunc1020->SetSavedPoint(16,0.07433727);
   FullBzFunc1020->SetSavedPoint(17,0.06500839);
   FullBzFunc1020->SetSavedPoint(18,0.0552767);
   FullBzFunc1020->SetSavedPoint(19,0.04518062);
   FullBzFunc1020->SetSavedPoint(20,0.03475997);
   FullBzFunc1020->SetSavedPoint(21,0.02405589);
   FullBzFunc1020->SetSavedPoint(22,0.01311063);
   FullBzFunc1020->SetSavedPoint(23,0.001967368);
   FullBzFunc1020->SetSavedPoint(24,-0.009329905);
   FullBzFunc1020->SetSavedPoint(25,-0.02073661);
   FullBzFunc1020->SetSavedPoint(26,-0.03220772);
   FullBzFunc1020->SetSavedPoint(27,-0.04369798);
   FullBzFunc1020->SetSavedPoint(28,-0.05516203);
   FullBzFunc1020->SetSavedPoint(29,-0.06655463);
   FullBzFunc1020->SetSavedPoint(30,-0.07783083);
   FullBzFunc1020->SetSavedPoint(31,-0.08894611);
   FullBzFunc1020->SetSavedPoint(32,-0.09985661);
   FullBzFunc1020->SetSavedPoint(33,-0.1105193);
   FullBzFunc1020->SetSavedPoint(34,-0.120892);
   FullBzFunc1020->SetSavedPoint(35,-0.1309339);
   FullBzFunc1020->SetSavedPoint(36,-0.1406053);
   FullBzFunc1020->SetSavedPoint(37,-0.1498681);
   FullBzFunc1020->SetSavedPoint(38,-0.1586856);
   FullBzFunc1020->SetSavedPoint(39,-0.1670231);
   FullBzFunc1020->SetSavedPoint(40,-0.1748477);
   FullBzFunc1020->SetSavedPoint(41,-0.1821286);
   FullBzFunc1020->SetSavedPoint(42,-0.1888369);
   FullBzFunc1020->SetSavedPoint(43,-0.1949462);
   FullBzFunc1020->SetSavedPoint(44,-0.2004323);
   FullBzFunc1020->SetSavedPoint(45,-0.2052738);
   FullBzFunc1020->SetSavedPoint(46,-0.2094513);
   FullBzFunc1020->SetSavedPoint(47,-0.2129485);
   FullBzFunc1020->SetSavedPoint(48,-0.2157515);
   FullBzFunc1020->SetSavedPoint(49,-0.2178493);
   FullBzFunc1020->SetSavedPoint(50,-0.2192336);
   FullBzFunc1020->SetSavedPoint(51,-0.219899);
   FullBzFunc1020->SetSavedPoint(52,-0.2198427);
   FullBzFunc1020->SetSavedPoint(53,-0.2190651);
   FullBzFunc1020->SetSavedPoint(54,-0.2175692);
   FullBzFunc1020->SetSavedPoint(55,-0.2153609);
   FullBzFunc1020->SetSavedPoint(56,-0.2124489);
   FullBzFunc1020->SetSavedPoint(57,-0.2088447);
   FullBzFunc1020->SetSavedPoint(58,-0.2045625);
   FullBzFunc1020->SetSavedPoint(59,-0.1996193);
   FullBzFunc1020->SetSavedPoint(60,-0.1940346);
   FullBzFunc1020->SetSavedPoint(61,-0.1878303);
   FullBzFunc1020->SetSavedPoint(62,-0.181031);
   FullBzFunc1020->SetSavedPoint(63,-0.1736635);
   FullBzFunc1020->SetSavedPoint(64,-0.1657568);
   FullBzFunc1020->SetSavedPoint(65,-0.1573423);
   FullBzFunc1020->SetSavedPoint(66,-0.148453);
   FullBzFunc1020->SetSavedPoint(67,-0.1391242);
   FullBzFunc1020->SetSavedPoint(68,-0.1293925);
   FullBzFunc1020->SetSavedPoint(69,-0.1192964);
   FullBzFunc1020->SetSavedPoint(70,-0.1088757);
   FullBzFunc1020->SetSavedPoint(71,-0.09817166);
   FullBzFunc1020->SetSavedPoint(72,-0.0872264);
   FullBzFunc1020->SetSavedPoint(73,-0.07608314);
   FullBzFunc1020->SetSavedPoint(74,-0.06478587);
   FullBzFunc1020->SetSavedPoint(75,-0.05337916);
   FullBzFunc1020->SetSavedPoint(76,-0.04190805);
   FullBzFunc1020->SetSavedPoint(77,-0.03041779);
   FullBzFunc1020->SetSavedPoint(78,-0.01895374);
   FullBzFunc1020->SetSavedPoint(79,-0.007561137);
   FullBzFunc1020->SetSavedPoint(80,0.003715055);
   FullBzFunc1020->SetSavedPoint(81,0.01483034);
   FullBzFunc1020->SetSavedPoint(82,0.02574084);
   FullBzFunc1020->SetSavedPoint(83,0.0364035);
   FullBzFunc1020->SetSavedPoint(84,0.04677624);
   FullBzFunc1020->SetSavedPoint(85,0.05681813);
   FullBzFunc1020->SetSavedPoint(86,0.06648954);
   FullBzFunc1020->SetSavedPoint(87,0.07575229);
   FullBzFunc1020->SetSavedPoint(88,0.08456983);
   FullBzFunc1020->SetSavedPoint(89,0.09290736);
   FullBzFunc1020->SetSavedPoint(90,0.100732);
   FullBzFunc1020->SetSavedPoint(91,0.1080128);
   FullBzFunc1020->SetSavedPoint(92,0.1147211);
   FullBzFunc1020->SetSavedPoint(93,0.1208304);
   FullBzFunc1020->SetSavedPoint(94,0.1263166);
   FullBzFunc1020->SetSavedPoint(95,0.131158);
   FullBzFunc1020->SetSavedPoint(96,0.1353355);
   FullBzFunc1020->SetSavedPoint(97,0.1388327);
   FullBzFunc1020->SetSavedPoint(98,0.1416357);
   FullBzFunc1020->SetSavedPoint(99,0.1437335);
   FullBzFunc1020->SetSavedPoint(100,0.1451178);
   FullBzFunc1020->SetSavedPoint(101,0);
   FullBzFunc1020->SetSavedPoint(102,4.365324);
   FullBzFunc1020->SetFillColor(19);
   FullBzFunc1020->SetFillStyle(0);
   FullBzFunc1020->SetLineColor(2);
   FullBzFunc1020->SetLineWidth(3);
   FullBzFunc1020->SetChisquare(87.09128);
   FullBzFunc1020->SetNDF(84);
   FullBzFunc1020->GetXaxis()->SetLabelFont(42);
   FullBzFunc1020->GetXaxis()->SetTitleOffset(1);
   FullBzFunc1020->GetXaxis()->SetTitleFont(42);
   FullBzFunc1020->GetYaxis()->SetLabelFont(42);
   FullBzFunc1020->GetYaxis()->SetTitleFont(42);
   FullBzFunc1020->SetParameter(0,0.1815113);
   FullBzFunc1020->SetParError(0,0.03845302);
   FullBzFunc1020->SetParLimits(0,0,0);
   FullBzFunc1020->SetParameter(1,1.43934);
   FullBzFunc1020->SetParError(1,0);
   FullBzFunc1020->SetParLimits(1,1.43934,1.43934);
   FullBzFunc1020->SetParameter(2,0.03419061);
   FullBzFunc1020->SetParError(2,0);
   FullBzFunc1020->SetParLimits(2,0.03419061,0.03419061);
   FullBzFunc1020->SetParameter(3,0.02253922);
   FullBzFunc1020->SetParError(3,0.03861749);
   FullBzFunc1020->SetParLimits(3,0,0);
   FullBzFunc1020->SetParameter(4,1.43934);
   FullBzFunc1020->SetParError(4,0);
   FullBzFunc1020->SetParLimits(4,1.43934,1.43934);
   FullBzFunc1020->SetParameter(5,0.03419061);
   FullBzFunc1020->SetParError(5,0);
   FullBzFunc1020->SetParLimits(5,0.03419061,0.03419061);
   FullBzFunc1020->SetParameter(6,-0.03705789);
   FullBzFunc1020->SetParError(6,0.02724912);
   FullBzFunc1020->SetParLimits(6,0,0);
   FullBzFunc1020->SetParent(gre);
   gre->GetListOfFunctions()->Add(FullBzFunc1020);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.7,0.62,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("5#times10^{5}");
   pt_LaTex = pt->AddText("1.04
");
   pt_LaTex = pt->AddText("0.18
#pm0.04
");
   pt_LaTex = pt->AddText("0.02
#pm0.04
");
   pt_LaTex = pt->AddText("-0.0371
#pm0.03
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
   pt_LaTex = pt->AddText("30.6 < t [#mus] < 305.6");
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
   entry=leg->AddEntry("FullBzFunc","A_{Bz}cos(#omega_{a}t #plus #phi) #plus A_{EDM}sin(#omega_{a}t #plus #phi) #plus c","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TF1 *FullBzFunc1021 = new TF1("*FullBzFunc",0,4.365324,7);
    //The original function : FullBzFunc had originally been created by:
    //TF1 *FullBzFunc = new TF1("FullBzFunc",FullBzFunc,0,4.365324,7, 1, TF1::EAddToList::kNo);
   FullBzFunc1021->SetRange(0,4.365324);
   FullBzFunc1021->SetName("FullBzFunc");
   FullBzFunc1021->SetTitle("FullBzFunc");
   FullBzFunc1021->SetSavedPoint(0,0.1451178);
   FullBzFunc1021->SetSavedPoint(1,0.1457832);
   FullBzFunc1021->SetSavedPoint(2,0.1457269);
   FullBzFunc1021->SetSavedPoint(3,0.1449493);
   FullBzFunc1021->SetSavedPoint(4,0.1434534);
   FullBzFunc1021->SetSavedPoint(5,0.1412451);
   FullBzFunc1021->SetSavedPoint(6,0.1383331);
   FullBzFunc1021->SetSavedPoint(7,0.1347289);
   FullBzFunc1021->SetSavedPoint(8,0.1304468);
   FullBzFunc1021->SetSavedPoint(9,0.1255036);
   FullBzFunc1021->SetSavedPoint(10,0.1199188);
   FullBzFunc1021->SetSavedPoint(11,0.1137145);
   FullBzFunc1021->SetSavedPoint(12,0.1069152);
   FullBzFunc1021->SetSavedPoint(13,0.09954769);
   FullBzFunc1021->SetSavedPoint(14,0.09164106);
   FullBzFunc1021->SetSavedPoint(15,0.08322652);
   FullBzFunc1021->SetSavedPoint(16,0.07433727);
   FullBzFunc1021->SetSavedPoint(17,0.06500839);
   FullBzFunc1021->SetSavedPoint(18,0.0552767);
   FullBzFunc1021->SetSavedPoint(19,0.04518062);
   FullBzFunc1021->SetSavedPoint(20,0.03475997);
   FullBzFunc1021->SetSavedPoint(21,0.02405589);
   FullBzFunc1021->SetSavedPoint(22,0.01311063);
   FullBzFunc1021->SetSavedPoint(23,0.001967368);
   FullBzFunc1021->SetSavedPoint(24,-0.009329905);
   FullBzFunc1021->SetSavedPoint(25,-0.02073661);
   FullBzFunc1021->SetSavedPoint(26,-0.03220772);
   FullBzFunc1021->SetSavedPoint(27,-0.04369798);
   FullBzFunc1021->SetSavedPoint(28,-0.05516203);
   FullBzFunc1021->SetSavedPoint(29,-0.06655463);
   FullBzFunc1021->SetSavedPoint(30,-0.07783083);
   FullBzFunc1021->SetSavedPoint(31,-0.08894611);
   FullBzFunc1021->SetSavedPoint(32,-0.09985661);
   FullBzFunc1021->SetSavedPoint(33,-0.1105193);
   FullBzFunc1021->SetSavedPoint(34,-0.120892);
   FullBzFunc1021->SetSavedPoint(35,-0.1309339);
   FullBzFunc1021->SetSavedPoint(36,-0.1406053);
   FullBzFunc1021->SetSavedPoint(37,-0.1498681);
   FullBzFunc1021->SetSavedPoint(38,-0.1586856);
   FullBzFunc1021->SetSavedPoint(39,-0.1670231);
   FullBzFunc1021->SetSavedPoint(40,-0.1748477);
   FullBzFunc1021->SetSavedPoint(41,-0.1821286);
   FullBzFunc1021->SetSavedPoint(42,-0.1888369);
   FullBzFunc1021->SetSavedPoint(43,-0.1949462);
   FullBzFunc1021->SetSavedPoint(44,-0.2004323);
   FullBzFunc1021->SetSavedPoint(45,-0.2052738);
   FullBzFunc1021->SetSavedPoint(46,-0.2094513);
   FullBzFunc1021->SetSavedPoint(47,-0.2129485);
   FullBzFunc1021->SetSavedPoint(48,-0.2157515);
   FullBzFunc1021->SetSavedPoint(49,-0.2178493);
   FullBzFunc1021->SetSavedPoint(50,-0.2192336);
   FullBzFunc1021->SetSavedPoint(51,-0.219899);
   FullBzFunc1021->SetSavedPoint(52,-0.2198427);
   FullBzFunc1021->SetSavedPoint(53,-0.2190651);
   FullBzFunc1021->SetSavedPoint(54,-0.2175692);
   FullBzFunc1021->SetSavedPoint(55,-0.2153609);
   FullBzFunc1021->SetSavedPoint(56,-0.2124489);
   FullBzFunc1021->SetSavedPoint(57,-0.2088447);
   FullBzFunc1021->SetSavedPoint(58,-0.2045625);
   FullBzFunc1021->SetSavedPoint(59,-0.1996193);
   FullBzFunc1021->SetSavedPoint(60,-0.1940346);
   FullBzFunc1021->SetSavedPoint(61,-0.1878303);
   FullBzFunc1021->SetSavedPoint(62,-0.181031);
   FullBzFunc1021->SetSavedPoint(63,-0.1736635);
   FullBzFunc1021->SetSavedPoint(64,-0.1657568);
   FullBzFunc1021->SetSavedPoint(65,-0.1573423);
   FullBzFunc1021->SetSavedPoint(66,-0.148453);
   FullBzFunc1021->SetSavedPoint(67,-0.1391242);
   FullBzFunc1021->SetSavedPoint(68,-0.1293925);
   FullBzFunc1021->SetSavedPoint(69,-0.1192964);
   FullBzFunc1021->SetSavedPoint(70,-0.1088757);
   FullBzFunc1021->SetSavedPoint(71,-0.09817166);
   FullBzFunc1021->SetSavedPoint(72,-0.0872264);
   FullBzFunc1021->SetSavedPoint(73,-0.07608314);
   FullBzFunc1021->SetSavedPoint(74,-0.06478587);
   FullBzFunc1021->SetSavedPoint(75,-0.05337916);
   FullBzFunc1021->SetSavedPoint(76,-0.04190805);
   FullBzFunc1021->SetSavedPoint(77,-0.03041779);
   FullBzFunc1021->SetSavedPoint(78,-0.01895374);
   FullBzFunc1021->SetSavedPoint(79,-0.007561137);
   FullBzFunc1021->SetSavedPoint(80,0.003715055);
   FullBzFunc1021->SetSavedPoint(81,0.01483034);
   FullBzFunc1021->SetSavedPoint(82,0.02574084);
   FullBzFunc1021->SetSavedPoint(83,0.0364035);
   FullBzFunc1021->SetSavedPoint(84,0.04677624);
   FullBzFunc1021->SetSavedPoint(85,0.05681813);
   FullBzFunc1021->SetSavedPoint(86,0.06648954);
   FullBzFunc1021->SetSavedPoint(87,0.07575229);
   FullBzFunc1021->SetSavedPoint(88,0.08456983);
   FullBzFunc1021->SetSavedPoint(89,0.09290736);
   FullBzFunc1021->SetSavedPoint(90,0.100732);
   FullBzFunc1021->SetSavedPoint(91,0.1080128);
   FullBzFunc1021->SetSavedPoint(92,0.1147211);
   FullBzFunc1021->SetSavedPoint(93,0.1208304);
   FullBzFunc1021->SetSavedPoint(94,0.1263166);
   FullBzFunc1021->SetSavedPoint(95,0.131158);
   FullBzFunc1021->SetSavedPoint(96,0.1353355);
   FullBzFunc1021->SetSavedPoint(97,0.1388327);
   FullBzFunc1021->SetSavedPoint(98,0.1416357);
   FullBzFunc1021->SetSavedPoint(99,0.1437335);
   FullBzFunc1021->SetSavedPoint(100,0.1451178);
   FullBzFunc1021->SetSavedPoint(101,0);
   FullBzFunc1021->SetSavedPoint(102,4.365324);
   FullBzFunc1021->SetFillColor(19);
   FullBzFunc1021->SetFillStyle(0);
   FullBzFunc1021->SetLineColor(2);
   FullBzFunc1021->SetLineWidth(3);
   FullBzFunc1021->SetChisquare(87.09128);
   FullBzFunc1021->SetNDF(84);
   FullBzFunc1021->GetXaxis()->SetLabelFont(42);
   FullBzFunc1021->GetXaxis()->SetTitleOffset(1);
   FullBzFunc1021->GetXaxis()->SetTitleFont(42);
   FullBzFunc1021->GetYaxis()->SetLabelFont(42);
   FullBzFunc1021->GetYaxis()->SetTitleFont(42);
   FullBzFunc1021->SetParameter(0,0.1815113);
   FullBzFunc1021->SetParError(0,0.03845302);
   FullBzFunc1021->SetParLimits(0,0,0);
   FullBzFunc1021->SetParameter(1,1.43934);
   FullBzFunc1021->SetParError(1,0);
   FullBzFunc1021->SetParLimits(1,1.43934,1.43934);
   FullBzFunc1021->SetParameter(2,0.03419061);
   FullBzFunc1021->SetParError(2,0);
   FullBzFunc1021->SetParLimits(2,0.03419061,0.03419061);
   FullBzFunc1021->SetParameter(3,0.02253922);
   FullBzFunc1021->SetParError(3,0.03861749);
   FullBzFunc1021->SetParLimits(3,0,0);
   FullBzFunc1021->SetParameter(4,1.43934);
   FullBzFunc1021->SetParError(4,0);
   FullBzFunc1021->SetParLimits(4,1.43934,1.43934);
   FullBzFunc1021->SetParameter(5,0.03419061);
   FullBzFunc1021->SetParError(5,0);
   FullBzFunc1021->SetParLimits(5,0.03419061,0.03419061);
   FullBzFunc1021->SetParameter(6,-0.03705789);
   FullBzFunc1021->SetParError(6,0.02724912);
   FullBzFunc1021->SetParLimits(6,0,0);
   FullBzFunc1021->Draw("same");
   
   pt = new TPaveText(0.3021859,0.9341608,0.6978141,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("1200 < p [MeV] < 1400");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
