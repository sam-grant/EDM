void S12_FullModuloFit_800_2600_trackReco_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:12:03 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-0.6024336,-1.25,4.944727,1.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1123[87] = {
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
   Double_t Graph0_fy1123[87] = {
   -0.2623737,
   -0.1297804,
   -0.06164797,
   0.1520311,
   -0.09589613,
   -0.05536182,
   -0.2552236,
   0.2835974,
   -0.128346,
   -0.1968732,
   -0.1914643,
   -0.01027211,
   -0.3888232,
   -0.1645194,
   -0.2319146,
   -0.2187547,
   -0.4002623,
   -0.1203835,
   -0.07637789,
   -0.4229642,
   -0.3944797,
   -0.3196567,
   -0.1460119,
   -0.3018337,
   -0.2328155,
   -0.3333982,
   -0.2447528,
   -0.1709899,
   -0.2986573,
   -0.3248574,
   -0.04194905,
   -0.2953204,
   -0.3814205,
   -0.5142601,
   -0.4314531,
   -0.4767719,
   -0.4005993,
   -0.609292,
   -0.5357957,
   -0.3455503,
   -0.414783,
   -0.4812978,
   -0.3847814,
   -0.2418795,
   -0.3398149,
   -0.3174678,
   -0.4684975,
   -0.3334253,
   -0.5664716,
   -0.4583025,
   -0.3149141,
   -0.3845258,
   -0.4255641,
   -0.2874237,
   -0.5988922,
   -0.4334273,
   -0.3893629,
   -0.3919506,
   -0.2508482,
   -0.4772435,
   -0.5680159,
   -0.3642966,
   -0.159601,
   -0.4989654,
   -0.169922,
   -0.3158299,
   -0.05932102,
   -0.4376143,
   -0.03492933,
   -0.2357442,
   -0.1896039,
   -0.252191,
   -0.4666239,
   0.03773356,
   0.02380952,
   -0.0642143,
   -0.1007233,
   -0.1951276,
   -0.2594266,
   -0.1382756,
   -0.3302568,
   0.1086396,
   -0.1681682,
   -0.1285012,
   0.02407985,
   0.2012606,
   0.02843443};
   Double_t Graph0_fex1123[87] = {
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
   Double_t Graph0_fey1123[87] = {
   0.1276478,
   0.1285373,
   0.1256667,
   0.1282819,
   0.126638,
   0.1259404,
   0.1281003,
   0.1278429,
   0.1245534,
   0.1267069,
   0.1258525,
   0.1250842,
   0.1228713,
   0.1248204,
   0.1224677,
   0.1212661,
   0.1222531,
   0.1209703,
   0.1216903,
   0.1189067,
   0.1187656,
   0.1193276,
   0.1160534,
   0.1169995,
   0.1174767,
   0.1161829,
   0.1151493,
   0.1148191,
   0.1152567,
   0.1132151,
   0.1124759,
   0.1135257,
   0.1112784,
   0.1129695,
   0.11181,
   0.1111947,
   0.1115967,
   0.1112945,
   0.1099539,
   0.1104977,
   0.1115107,
   0.1099407,
   0.1105225,
   0.1109726,
   0.1089781,
   0.1118746,
   0.1121762,
   0.110189,
   0.1123073,
   0.1125498,
   0.1115806,
   0.1124746,
   0.113632,
   0.1127556,
   0.1148911,
   0.1139701,
   0.1151882,
   0.1167772,
   0.114762,
   0.1157281,
   0.1178704,
   0.1180565,
   0.1191308,
   0.1205674,
   0.1184557,
   0.1181758,
   0.1225999,
   0.1243753,
   0.1222385,
   0.1250837,
   0.1248432,
   0.1241631,
   0.1258563,
   0.1249666,
   0.127462,
   0.1264791,
   0.1296783,
   0.1292586,
   0.1299443,
   0.1268864,
   0.1312224,
   0.1321173,
   0.1315931,
   0.1320678,
   0.1312178,
   0.1301184,
   0.1319583};
   TGraphErrors *gre = new TGraphErrors(87,Graph0_fx1123,Graph0_fy1123,Graph0_fex1123,Graph0_fey1123);
   gre->SetName("Graph0");
   gre->SetTitle("S12, 800-2600");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01123 = new TH1F("Graph_Graph01123","S12, 800-2600",100,0,4.771751);
   Graph_Graph01123->SetMinimum(-1);
   Graph_Graph01123->SetMaximum(1);
   Graph_Graph01123->SetDirectory(0);
   Graph_Graph01123->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01123->SetLineColor(ci);
   Graph_Graph01123->GetXaxis()->SetTitle("t_{g#minus2}^{mod} [#mus]");
   Graph_Graph01123->GetXaxis()->SetRange(0,92);
   Graph_Graph01123->GetXaxis()->CenterTitle(true);
   Graph_Graph01123->GetXaxis()->SetLabelFont(42);
   Graph_Graph01123->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01123->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01123->GetXaxis()->SetTitleFont(42);
   Graph_Graph01123->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 50 ns");
   Graph_Graph01123->GetYaxis()->CenterTitle(true);
   Graph_Graph01123->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01123->GetYaxis()->SetLabelFont(42);
   Graph_Graph01123->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01123->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01123->GetYaxis()->SetTitleFont(42);
   Graph_Graph01123->GetZaxis()->SetLabelFont(42);
   Graph_Graph01123->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01123);
   
   
   TF1 *FullBzFunc1124 = new TF1("*FullBzFunc",0,4.365324,7);
    //The original function : FullBzFunc had originally been created by:
    //TF1 *FullBzFunc = new TF1("FullBzFunc",FullBzFunc,0,4.365324,7, 1, TF1::EAddToList::kNo);
   FullBzFunc1124->SetRange(0,4.365324);
   FullBzFunc1124->SetName("FullBzFunc");
   FullBzFunc1124->SetTitle("FullBzFunc");
   FullBzFunc1124->SetSavedPoint(0,-0.08078982);
   FullBzFunc1124->SetSavedPoint(1,-0.08029338);
   FullBzFunc1124->SetSavedPoint(2,-0.08049834);
   FullBzFunc1124->SetSavedPoint(3,-0.08140388);
   FullBzFunc1124->SetSavedPoint(4,-0.08300643);
   FullBzFunc1124->SetSavedPoint(5,-0.08529967);
   FullBzFunc1124->SetSavedPoint(6,-0.08827454);
   FullBzFunc1124->SetSavedPoint(7,-0.0919193);
   FullBzFunc1124->SetSavedPoint(8,-0.09621958);
   FullBzFunc1124->SetSavedPoint(9,-0.1011584);
   FullBzFunc1124->SetSavedPoint(10,-0.1067163);
   FullBzFunc1124->SetSavedPoint(11,-0.1128712);
   FullBzFunc1124->SetSavedPoint(12,-0.119599);
   FullBzFunc1124->SetSavedPoint(13,-0.1268731);
   FullBzFunc1124->SetSavedPoint(14,-0.1346647);
   FullBzFunc1124->SetSavedPoint(15,-0.1429432);
   FullBzFunc1124->SetSavedPoint(16,-0.1516758);
   FullBzFunc1124->SetSavedPoint(17,-0.160828);
   FullBzFunc1124->SetSavedPoint(18,-0.1703639);
   FullBzFunc1124->SetSavedPoint(19,-0.1802456);
   FullBzFunc1124->SetSavedPoint(20,-0.1904343);
   FullBzFunc1124->SetSavedPoint(21,-0.2008897);
   FullBzFunc1124->SetSavedPoint(22,-0.2115705);
   FullBzFunc1124->SetSavedPoint(23,-0.2224347);
   FullBzFunc1124->SetSavedPoint(24,-0.2334393);
   FullBzFunc1124->SetSavedPoint(25,-0.2445408);
   FullBzFunc1124->SetSavedPoint(26,-0.2556956);
   FullBzFunc1124->SetSavedPoint(27,-0.2668595);
   FullBzFunc1124->SetSavedPoint(28,-0.2779885);
   FullBzFunc1124->SetSavedPoint(29,-0.2890387);
   FullBzFunc1124->SetSavedPoint(30,-0.2999665);
   FullBzFunc1124->SetSavedPoint(31,-0.3107287);
   FullBzFunc1124->SetSavedPoint(32,-0.3212829);
   FullBzFunc1124->SetSavedPoint(33,-0.3315874);
   FullBzFunc1124->SetSavedPoint(34,-0.3416015);
   FullBzFunc1124->SetSavedPoint(35,-0.3512858);
   FullBzFunc1124->SetSavedPoint(36,-0.360602);
   FullBzFunc1124->SetSavedPoint(37,-0.3695133);
   FullBzFunc1124->SetSavedPoint(38,-0.3779846);
   FullBzFunc1124->SetSavedPoint(39,-0.3859825);
   FullBzFunc1124->SetSavedPoint(40,-0.3934753);
   FullBzFunc1124->SetSavedPoint(41,-0.4004335);
   FullBzFunc1124->SetSavedPoint(42,-0.4068297);
   FullBzFunc1124->SetSavedPoint(43,-0.4126386);
   FullBzFunc1124->SetSavedPoint(44,-0.4178372);
   FullBzFunc1124->SetSavedPoint(45,-0.4224051);
   FullBzFunc1124->SetSavedPoint(46,-0.4263243);
   FullBzFunc1124->SetSavedPoint(47,-0.4295792);
   FullBzFunc1124->SetSavedPoint(48,-0.432157);
   FullBzFunc1124->SetSavedPoint(49,-0.4340476);
   FullBzFunc1124->SetSavedPoint(50,-0.4352435);
   FullBzFunc1124->SetSavedPoint(51,-0.4357399);
   FullBzFunc1124->SetSavedPoint(52,-0.435535);
   FullBzFunc1124->SetSavedPoint(53,-0.4346294);
   FullBzFunc1124->SetSavedPoint(54,-0.4330269);
   FullBzFunc1124->SetSavedPoint(55,-0.4307336);
   FullBzFunc1124->SetSavedPoint(56,-0.4277588);
   FullBzFunc1124->SetSavedPoint(57,-0.424114);
   FullBzFunc1124->SetSavedPoint(58,-0.4198137);
   FullBzFunc1124->SetSavedPoint(59,-0.4148749);
   FullBzFunc1124->SetSavedPoint(60,-0.409317);
   FullBzFunc1124->SetSavedPoint(61,-0.4031621);
   FullBzFunc1124->SetSavedPoint(62,-0.3964343);
   FullBzFunc1124->SetSavedPoint(63,-0.3891602);
   FullBzFunc1124->SetSavedPoint(64,-0.3813686);
   FullBzFunc1124->SetSavedPoint(65,-0.3730901);
   FullBzFunc1124->SetSavedPoint(66,-0.3643575);
   FullBzFunc1124->SetSavedPoint(67,-0.3552053);
   FullBzFunc1124->SetSavedPoint(68,-0.3456694);
   FullBzFunc1124->SetSavedPoint(69,-0.3357877);
   FullBzFunc1124->SetSavedPoint(70,-0.325599);
   FullBzFunc1124->SetSavedPoint(71,-0.3151436);
   FullBzFunc1124->SetSavedPoint(72,-0.3044628);
   FullBzFunc1124->SetSavedPoint(73,-0.2935986);
   FullBzFunc1124->SetSavedPoint(74,-0.282594);
   FullBzFunc1124->SetSavedPoint(75,-0.2714925);
   FullBzFunc1124->SetSavedPoint(76,-0.2603377);
   FullBzFunc1124->SetSavedPoint(77,-0.2491738);
   FullBzFunc1124->SetSavedPoint(78,-0.2380448);
   FullBzFunc1124->SetSavedPoint(79,-0.2269946);
   FullBzFunc1124->SetSavedPoint(80,-0.2160668);
   FullBzFunc1124->SetSavedPoint(81,-0.2053046);
   FullBzFunc1124->SetSavedPoint(82,-0.1947504);
   FullBzFunc1124->SetSavedPoint(83,-0.1844459);
   FullBzFunc1124->SetSavedPoint(84,-0.1744318);
   FullBzFunc1124->SetSavedPoint(85,-0.1647475);
   FullBzFunc1124->SetSavedPoint(86,-0.1554313);
   FullBzFunc1124->SetSavedPoint(87,-0.14652);
   FullBzFunc1124->SetSavedPoint(88,-0.1380487);
   FullBzFunc1124->SetSavedPoint(89,-0.1300508);
   FullBzFunc1124->SetSavedPoint(90,-0.122558);
   FullBzFunc1124->SetSavedPoint(91,-0.1155998);
   FullBzFunc1124->SetSavedPoint(92,-0.1092036);
   FullBzFunc1124->SetSavedPoint(93,-0.1033947);
   FullBzFunc1124->SetSavedPoint(94,-0.09819609);
   FullBzFunc1124->SetSavedPoint(95,-0.09362817);
   FullBzFunc1124->SetSavedPoint(96,-0.08970902);
   FullBzFunc1124->SetSavedPoint(97,-0.08645411);
   FullBzFunc1124->SetSavedPoint(98,-0.08387627);
   FullBzFunc1124->SetSavedPoint(99,-0.08198569);
   FullBzFunc1124->SetSavedPoint(100,-0.08078982);
   FullBzFunc1124->SetSavedPoint(101,0);
   FullBzFunc1124->SetSavedPoint(102,4.365324);
   FullBzFunc1124->SetFillColor(19);
   FullBzFunc1124->SetFillStyle(0);
   FullBzFunc1124->SetLineColor(2);
   FullBzFunc1124->SetLineWidth(3);
   FullBzFunc1124->SetChisquare(107.5064);
   FullBzFunc1124->SetNDF(84);
   FullBzFunc1124->GetXaxis()->SetLabelFont(42);
   FullBzFunc1124->GetXaxis()->SetTitleOffset(1);
   FullBzFunc1124->GetXaxis()->SetTitleFont(42);
   FullBzFunc1124->GetYaxis()->SetLabelFont(42);
   FullBzFunc1124->GetYaxis()->SetTitleFont(42);
   FullBzFunc1124->SetParameter(0,0.1772648);
   FullBzFunc1124->SetParError(0,0.01817765);
   FullBzFunc1124->SetParLimits(0,0,0);
   FullBzFunc1124->SetParameter(1,1.43934);
   FullBzFunc1124->SetParError(1,0);
   FullBzFunc1124->SetParLimits(1,1.43934,1.43934);
   FullBzFunc1124->SetParameter(2,-0.002874202);
   FullBzFunc1124->SetParError(2,0);
   FullBzFunc1124->SetParLimits(2,-0.002874202,-0.002874202);
   FullBzFunc1124->SetParameter(3,0.01296636);
   FullBzFunc1124->SetParError(3,0.01809529);
   FullBzFunc1124->SetParLimits(3,0,0);
   FullBzFunc1124->SetParameter(4,1.43934);
   FullBzFunc1124->SetParError(4,0);
   FullBzFunc1124->SetParLimits(4,1.43934,1.43934);
   FullBzFunc1124->SetParameter(5,-0.002874202);
   FullBzFunc1124->SetParError(5,0);
   FullBzFunc1124->SetParLimits(5,-0.002874202,-0.002874202);
   FullBzFunc1124->SetParameter(6,-0.2580166);
   FullBzFunc1124->SetParError(6,0.01286533);
   FullBzFunc1124->SetParLimits(6,0,0);
   FullBzFunc1124->SetParent(gre);
   gre->GetListOfFunctions()->Add(FullBzFunc1124);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.7,0.62,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("1.75#times10^{6}");
   pt_LaTex = pt->AddText("1.28
");
   pt_LaTex = pt->AddText("0.18
#pm0.02
");
   pt_LaTex = pt->AddText("0.01
#pm0.02
");
   pt_LaTex = pt->AddText("-0.258
#pm0.01
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
   
   TF1 *FullBzFunc1125 = new TF1("*FullBzFunc",0,4.365324,7);
    //The original function : FullBzFunc had originally been created by:
    //TF1 *FullBzFunc = new TF1("FullBzFunc",FullBzFunc,0,4.365324,7, 1, TF1::EAddToList::kNo);
   FullBzFunc1125->SetRange(0,4.365324);
   FullBzFunc1125->SetName("FullBzFunc");
   FullBzFunc1125->SetTitle("FullBzFunc");
   FullBzFunc1125->SetSavedPoint(0,-0.08078982);
   FullBzFunc1125->SetSavedPoint(1,-0.08029338);
   FullBzFunc1125->SetSavedPoint(2,-0.08049834);
   FullBzFunc1125->SetSavedPoint(3,-0.08140388);
   FullBzFunc1125->SetSavedPoint(4,-0.08300643);
   FullBzFunc1125->SetSavedPoint(5,-0.08529967);
   FullBzFunc1125->SetSavedPoint(6,-0.08827454);
   FullBzFunc1125->SetSavedPoint(7,-0.0919193);
   FullBzFunc1125->SetSavedPoint(8,-0.09621958);
   FullBzFunc1125->SetSavedPoint(9,-0.1011584);
   FullBzFunc1125->SetSavedPoint(10,-0.1067163);
   FullBzFunc1125->SetSavedPoint(11,-0.1128712);
   FullBzFunc1125->SetSavedPoint(12,-0.119599);
   FullBzFunc1125->SetSavedPoint(13,-0.1268731);
   FullBzFunc1125->SetSavedPoint(14,-0.1346647);
   FullBzFunc1125->SetSavedPoint(15,-0.1429432);
   FullBzFunc1125->SetSavedPoint(16,-0.1516758);
   FullBzFunc1125->SetSavedPoint(17,-0.160828);
   FullBzFunc1125->SetSavedPoint(18,-0.1703639);
   FullBzFunc1125->SetSavedPoint(19,-0.1802456);
   FullBzFunc1125->SetSavedPoint(20,-0.1904343);
   FullBzFunc1125->SetSavedPoint(21,-0.2008897);
   FullBzFunc1125->SetSavedPoint(22,-0.2115705);
   FullBzFunc1125->SetSavedPoint(23,-0.2224347);
   FullBzFunc1125->SetSavedPoint(24,-0.2334393);
   FullBzFunc1125->SetSavedPoint(25,-0.2445408);
   FullBzFunc1125->SetSavedPoint(26,-0.2556956);
   FullBzFunc1125->SetSavedPoint(27,-0.2668595);
   FullBzFunc1125->SetSavedPoint(28,-0.2779885);
   FullBzFunc1125->SetSavedPoint(29,-0.2890387);
   FullBzFunc1125->SetSavedPoint(30,-0.2999665);
   FullBzFunc1125->SetSavedPoint(31,-0.3107287);
   FullBzFunc1125->SetSavedPoint(32,-0.3212829);
   FullBzFunc1125->SetSavedPoint(33,-0.3315874);
   FullBzFunc1125->SetSavedPoint(34,-0.3416015);
   FullBzFunc1125->SetSavedPoint(35,-0.3512858);
   FullBzFunc1125->SetSavedPoint(36,-0.360602);
   FullBzFunc1125->SetSavedPoint(37,-0.3695133);
   FullBzFunc1125->SetSavedPoint(38,-0.3779846);
   FullBzFunc1125->SetSavedPoint(39,-0.3859825);
   FullBzFunc1125->SetSavedPoint(40,-0.3934753);
   FullBzFunc1125->SetSavedPoint(41,-0.4004335);
   FullBzFunc1125->SetSavedPoint(42,-0.4068297);
   FullBzFunc1125->SetSavedPoint(43,-0.4126386);
   FullBzFunc1125->SetSavedPoint(44,-0.4178372);
   FullBzFunc1125->SetSavedPoint(45,-0.4224051);
   FullBzFunc1125->SetSavedPoint(46,-0.4263243);
   FullBzFunc1125->SetSavedPoint(47,-0.4295792);
   FullBzFunc1125->SetSavedPoint(48,-0.432157);
   FullBzFunc1125->SetSavedPoint(49,-0.4340476);
   FullBzFunc1125->SetSavedPoint(50,-0.4352435);
   FullBzFunc1125->SetSavedPoint(51,-0.4357399);
   FullBzFunc1125->SetSavedPoint(52,-0.435535);
   FullBzFunc1125->SetSavedPoint(53,-0.4346294);
   FullBzFunc1125->SetSavedPoint(54,-0.4330269);
   FullBzFunc1125->SetSavedPoint(55,-0.4307336);
   FullBzFunc1125->SetSavedPoint(56,-0.4277588);
   FullBzFunc1125->SetSavedPoint(57,-0.424114);
   FullBzFunc1125->SetSavedPoint(58,-0.4198137);
   FullBzFunc1125->SetSavedPoint(59,-0.4148749);
   FullBzFunc1125->SetSavedPoint(60,-0.409317);
   FullBzFunc1125->SetSavedPoint(61,-0.4031621);
   FullBzFunc1125->SetSavedPoint(62,-0.3964343);
   FullBzFunc1125->SetSavedPoint(63,-0.3891602);
   FullBzFunc1125->SetSavedPoint(64,-0.3813686);
   FullBzFunc1125->SetSavedPoint(65,-0.3730901);
   FullBzFunc1125->SetSavedPoint(66,-0.3643575);
   FullBzFunc1125->SetSavedPoint(67,-0.3552053);
   FullBzFunc1125->SetSavedPoint(68,-0.3456694);
   FullBzFunc1125->SetSavedPoint(69,-0.3357877);
   FullBzFunc1125->SetSavedPoint(70,-0.325599);
   FullBzFunc1125->SetSavedPoint(71,-0.3151436);
   FullBzFunc1125->SetSavedPoint(72,-0.3044628);
   FullBzFunc1125->SetSavedPoint(73,-0.2935986);
   FullBzFunc1125->SetSavedPoint(74,-0.282594);
   FullBzFunc1125->SetSavedPoint(75,-0.2714925);
   FullBzFunc1125->SetSavedPoint(76,-0.2603377);
   FullBzFunc1125->SetSavedPoint(77,-0.2491738);
   FullBzFunc1125->SetSavedPoint(78,-0.2380448);
   FullBzFunc1125->SetSavedPoint(79,-0.2269946);
   FullBzFunc1125->SetSavedPoint(80,-0.2160668);
   FullBzFunc1125->SetSavedPoint(81,-0.2053046);
   FullBzFunc1125->SetSavedPoint(82,-0.1947504);
   FullBzFunc1125->SetSavedPoint(83,-0.1844459);
   FullBzFunc1125->SetSavedPoint(84,-0.1744318);
   FullBzFunc1125->SetSavedPoint(85,-0.1647475);
   FullBzFunc1125->SetSavedPoint(86,-0.1554313);
   FullBzFunc1125->SetSavedPoint(87,-0.14652);
   FullBzFunc1125->SetSavedPoint(88,-0.1380487);
   FullBzFunc1125->SetSavedPoint(89,-0.1300508);
   FullBzFunc1125->SetSavedPoint(90,-0.122558);
   FullBzFunc1125->SetSavedPoint(91,-0.1155998);
   FullBzFunc1125->SetSavedPoint(92,-0.1092036);
   FullBzFunc1125->SetSavedPoint(93,-0.1033947);
   FullBzFunc1125->SetSavedPoint(94,-0.09819609);
   FullBzFunc1125->SetSavedPoint(95,-0.09362817);
   FullBzFunc1125->SetSavedPoint(96,-0.08970902);
   FullBzFunc1125->SetSavedPoint(97,-0.08645411);
   FullBzFunc1125->SetSavedPoint(98,-0.08387627);
   FullBzFunc1125->SetSavedPoint(99,-0.08198569);
   FullBzFunc1125->SetSavedPoint(100,-0.08078982);
   FullBzFunc1125->SetSavedPoint(101,0);
   FullBzFunc1125->SetSavedPoint(102,4.365324);
   FullBzFunc1125->SetFillColor(19);
   FullBzFunc1125->SetFillStyle(0);
   FullBzFunc1125->SetLineColor(2);
   FullBzFunc1125->SetLineWidth(3);
   FullBzFunc1125->SetChisquare(107.5064);
   FullBzFunc1125->SetNDF(84);
   FullBzFunc1125->GetXaxis()->SetLabelFont(42);
   FullBzFunc1125->GetXaxis()->SetTitleOffset(1);
   FullBzFunc1125->GetXaxis()->SetTitleFont(42);
   FullBzFunc1125->GetYaxis()->SetLabelFont(42);
   FullBzFunc1125->GetYaxis()->SetTitleFont(42);
   FullBzFunc1125->SetParameter(0,0.1772648);
   FullBzFunc1125->SetParError(0,0.01817765);
   FullBzFunc1125->SetParLimits(0,0,0);
   FullBzFunc1125->SetParameter(1,1.43934);
   FullBzFunc1125->SetParError(1,0);
   FullBzFunc1125->SetParLimits(1,1.43934,1.43934);
   FullBzFunc1125->SetParameter(2,-0.002874202);
   FullBzFunc1125->SetParError(2,0);
   FullBzFunc1125->SetParLimits(2,-0.002874202,-0.002874202);
   FullBzFunc1125->SetParameter(3,0.01296636);
   FullBzFunc1125->SetParError(3,0.01809529);
   FullBzFunc1125->SetParLimits(3,0,0);
   FullBzFunc1125->SetParameter(4,1.43934);
   FullBzFunc1125->SetParError(4,0);
   FullBzFunc1125->SetParLimits(4,1.43934,1.43934);
   FullBzFunc1125->SetParameter(5,-0.002874202);
   FullBzFunc1125->SetParError(5,0);
   FullBzFunc1125->SetParLimits(5,-0.002874202,-0.002874202);
   FullBzFunc1125->SetParameter(6,-0.2580166);
   FullBzFunc1125->SetParError(6,0.01286533);
   FullBzFunc1125->SetParLimits(6,0,0);
   FullBzFunc1125->Draw("same");
   
   pt = new TPaveText(0.3706533,0.9362587,0.6293467,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("S12, 800-2600");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
