void simpleModuloFit_5_noQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Mar 17 20:38:43 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.5487514,-0.6008347,4.938762,0.3055672);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1011[87] = {
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
   Double_t Graph0_fy1011[87] = {
   -0.1843408,
   -0.02540466,
   -0.06035873,
   -0.1743128,
   -0.01924341,
   -0.129333,
   -0.1352165,
   -0.05972598,
   0.008808741,
   -0.110582,
   -0.005830113,
   -0.04273014,
   0.01767654,
   -0.1733356,
   -0.1116865,
   -0.01773402,
   -0.04886717,
   -0.04166381,
   0.0583999,
   -0.1028344,
   -0.08107793,
   -0.05672439,
   -0.05292893,
   -0.02265506,
   -0.0753954,
   -0.04644782,
   -0.08027402,
   -0.1292587,
   -0.09987437,
   -0.0700379,
   -0.1048117,
   -0.06002077,
   -0.087652,
   -0.09427989,
   -0.0924704,
   0.03584133,
   -0.04526781,
   -0.1119602,
   -0.1068581,
   -0.1442399,
   -0.08150681,
   -0.1478621,
   -0.08183973,
   -0.1246957,
   -0.122096,
   -0.08147697,
   -0.09272273,
   -0.1437828,
   -0.1398412,
   -0.162729,
   -0.1734433,
   -0.07955943,
   -0.1920613,
   -0.19285,
   -0.1055618,
   -0.09491122,
   -0.1714576,
   -0.1954426,
   -0.2544732,
   -0.1291332,
   -0.2285392,
   -0.1946636,
   -0.3384113,
   -0.1715379,
   -0.2529374,
   -0.2345092,
   -0.2194678,
   -0.1359984,
   -0.2678628,
   -0.1785435,
   -0.2939778,
   -0.2526719,
   -0.3778094,
   -0.2294807,
   -0.2078721,
   -0.2249443,
   -0.2230405,
   -0.2305421,
   -0.1181477,
   -0.3318196,
   -0.3016434,
   -0.006954877,
   -0.190146,
   -0.329299,
   0.05472805,
   -0.2836453,
   -0.06031412};
   Double_t Graph0_fex1011[87] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1011[87] = {
   0.09733804,
   0.09452223,
   0.08902201,
   0.08996057,
   0.08589215,
   0.08613655,
   0.08106629,
   0.07959366,
   0.08005658,
   0.0746616,
   0.07229203,
   0.07004248,
   0.06945223,
   0.0666454,
   0.06333853,
   0.06263605,
   0.06185727,
   0.05923092,
   0.05894091,
   0.05658161,
   0.05425295,
   0.05374739,
   0.05387758,
   0.05129445,
   0.05139663,
   0.05045914,
   0.04904131,
   0.04952618,
   0.04750567,
   0.04711162,
   0.0467839,
   0.04614426,
   0.04508407,
   0.04549435,
   0.04482328,
   0.04430436,
   0.04417734,
   0.04377152,
   0.04342364,
   0.04403712,
   0.04408822,
   0.04320745,
   0.04345323,
   0.04406359,
   0.04287209,
   0.04408351,
   0.044515,
   0.04448165,
   0.04500837,
   0.04546222,
   0.04547489,
   0.0464442,
   0.04646748,
   0.0472253,
   0.0482917,
   0.04886545,
   0.04909361,
   0.04957064,
   0.05055589,
   0.05116551,
   0.05328724,
   0.05431793,
   0.05458386,
   0.05620531,
   0.05739749,
   0.05954945,
   0.0623473,
   0.06276864,
   0.06480425,
   0.06837103,
   0.06703523,
   0.07132538,
   0.07195837,
   0.07625467,
   0.07608974,
   0.08172719,
   0.08148693,
   0.08708454,
   0.08641999,
   0.09259241,
   0.09391519,
   0.09504063,
   0.0949209,
   0.09377149,
   0.09977212,
   0.09635878,
   0.09602391};
   TGraphErrors *gre = new TGraphErrors(87,Graph0_fx1011,Graph0_fy1011,Graph0_fex1011,Graph0_fey1011);
   gre->SetName("Graph0");
   gre->SetTitle("2500<p<3000 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01011 = new TH1F("Graph_Graph01011","2500<p<3000 MeV",100,0,4.771751);
   Graph_Graph01011->SetMinimum(-0.5101945);
   Graph_Graph01011->SetMaximum(0.214927);
   Graph_Graph01011->SetDirectory(0);
   Graph_Graph01011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01011->SetLineColor(ci);
   Graph_Graph01011->GetXaxis()->SetTitle("t_{g#minus2}^{mod} [#mus]");
   Graph_Graph01011->GetXaxis()->SetRange(1,92);
   Graph_Graph01011->GetXaxis()->CenterTitle(true);
   Graph_Graph01011->GetXaxis()->SetLabelFont(42);
   Graph_Graph01011->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01011->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01011->GetXaxis()->SetTitleFont(42);
   Graph_Graph01011->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01011->GetYaxis()->CenterTitle(true);
   Graph_Graph01011->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01011->GetYaxis()->SetLabelFont(42);
   Graph_Graph01011->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01011->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01011->GetYaxis()->SetTitleFont(42);
   Graph_Graph01011->GetZaxis()->SetLabelFont(42);
   Graph_Graph01011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01011);
   
   
   TF1 *SimpleSinFunc1012 = new TF1("*SimpleSinFunc",0,4.365324,3);
    //The original function : SimpleSinFunc had originally been created by:
    //TF1 *SimpleSinFunc = new TF1("SimpleSinFunc",SimpleSinFunc,0,4.365324,3, 1, TF1::EAddToList::kNo);
   SimpleSinFunc1012->SetRange(0,4.365324);
   SimpleSinFunc1012->SetName("SimpleSinFunc");
   SimpleSinFunc1012->SetTitle("SimpleSinFunc");
   SimpleSinFunc1012->SetSavedPoint(0,-0.1275491);
   SimpleSinFunc1012->SetSavedPoint(1,-0.1224986);
   SimpleSinFunc1012->SetSavedPoint(2,-0.117468);
   SimpleSinFunc1012->SetSavedPoint(3,-0.1124773);
   SimpleSinFunc1012->SetSavedPoint(4,-0.107546);
   SimpleSinFunc1012->SetSavedPoint(5,-0.1026936);
   SimpleSinFunc1012->SetSavedPoint(6,-0.09793938);
   SimpleSinFunc1012->SetSavedPoint(7,-0.09330198);
   SimpleSinFunc1012->SetSavedPoint(8,-0.08879974);
   SimpleSinFunc1012->SetSavedPoint(9,-0.08445042);
   SimpleSinFunc1012->SetSavedPoint(10,-0.08027119);
   SimpleSinFunc1012->SetSavedPoint(11,-0.07627855);
   SimpleSinFunc1012->SetSavedPoint(12,-0.07248825);
   SimpleSinFunc1012->SetSavedPoint(13,-0.06891525);
   SimpleSinFunc1012->SetSavedPoint(14,-0.06557366);
   SimpleSinFunc1012->SetSavedPoint(15,-0.06247665);
   SimpleSinFunc1012->SetSavedPoint(16,-0.05963645);
   SimpleSinFunc1012->SetSavedPoint(17,-0.05706427);
   SimpleSinFunc1012->SetSavedPoint(18,-0.05477026);
   SimpleSinFunc1012->SetSavedPoint(19,-0.05276348);
   SimpleSinFunc1012->SetSavedPoint(20,-0.05105184);
   SimpleSinFunc1012->SetSavedPoint(21,-0.0496421);
   SimpleSinFunc1012->SetSavedPoint(22,-0.04853983);
   SimpleSinFunc1012->SetSavedPoint(23,-0.04774937);
   SimpleSinFunc1012->SetSavedPoint(24,-0.04727384);
   SimpleSinFunc1012->SetSavedPoint(25,-0.04711512);
   SimpleSinFunc1012->SetSavedPoint(26,-0.04727384);
   SimpleSinFunc1012->SetSavedPoint(27,-0.04774937);
   SimpleSinFunc1012->SetSavedPoint(28,-0.04853983);
   SimpleSinFunc1012->SetSavedPoint(29,-0.0496421);
   SimpleSinFunc1012->SetSavedPoint(30,-0.05105184);
   SimpleSinFunc1012->SetSavedPoint(31,-0.05276348);
   SimpleSinFunc1012->SetSavedPoint(32,-0.05477026);
   SimpleSinFunc1012->SetSavedPoint(33,-0.05706427);
   SimpleSinFunc1012->SetSavedPoint(34,-0.05963645);
   SimpleSinFunc1012->SetSavedPoint(35,-0.06247665);
   SimpleSinFunc1012->SetSavedPoint(36,-0.06557366);
   SimpleSinFunc1012->SetSavedPoint(37,-0.06891525);
   SimpleSinFunc1012->SetSavedPoint(38,-0.07248825);
   SimpleSinFunc1012->SetSavedPoint(39,-0.07627855);
   SimpleSinFunc1012->SetSavedPoint(40,-0.08027119);
   SimpleSinFunc1012->SetSavedPoint(41,-0.08445042);
   SimpleSinFunc1012->SetSavedPoint(42,-0.08879974);
   SimpleSinFunc1012->SetSavedPoint(43,-0.09330198);
   SimpleSinFunc1012->SetSavedPoint(44,-0.09793938);
   SimpleSinFunc1012->SetSavedPoint(45,-0.1026936);
   SimpleSinFunc1012->SetSavedPoint(46,-0.107546);
   SimpleSinFunc1012->SetSavedPoint(47,-0.1124773);
   SimpleSinFunc1012->SetSavedPoint(48,-0.117468);
   SimpleSinFunc1012->SetSavedPoint(49,-0.1224986);
   SimpleSinFunc1012->SetSavedPoint(50,-0.1275491);
   SimpleSinFunc1012->SetSavedPoint(51,-0.1325996);
   SimpleSinFunc1012->SetSavedPoint(52,-0.1376301);
   SimpleSinFunc1012->SetSavedPoint(53,-0.1426209);
   SimpleSinFunc1012->SetSavedPoint(54,-0.1475522);
   SimpleSinFunc1012->SetSavedPoint(55,-0.1524046);
   SimpleSinFunc1012->SetSavedPoint(56,-0.1571588);
   SimpleSinFunc1012->SetSavedPoint(57,-0.1617962);
   SimpleSinFunc1012->SetSavedPoint(58,-0.1662985);
   SimpleSinFunc1012->SetSavedPoint(59,-0.1706478);
   SimpleSinFunc1012->SetSavedPoint(60,-0.174827);
   SimpleSinFunc1012->SetSavedPoint(61,-0.1788196);
   SimpleSinFunc1012->SetSavedPoint(62,-0.1826099);
   SimpleSinFunc1012->SetSavedPoint(63,-0.1861829);
   SimpleSinFunc1012->SetSavedPoint(64,-0.1895245);
   SimpleSinFunc1012->SetSavedPoint(65,-0.1926216);
   SimpleSinFunc1012->SetSavedPoint(66,-0.1954617);
   SimpleSinFunc1012->SetSavedPoint(67,-0.1980339);
   SimpleSinFunc1012->SetSavedPoint(68,-0.2003279);
   SimpleSinFunc1012->SetSavedPoint(69,-0.2023347);
   SimpleSinFunc1012->SetSavedPoint(70,-0.2040464);
   SimpleSinFunc1012->SetSavedPoint(71,-0.2054561);
   SimpleSinFunc1012->SetSavedPoint(72,-0.2065584);
   SimpleSinFunc1012->SetSavedPoint(73,-0.2073488);
   SimpleSinFunc1012->SetSavedPoint(74,-0.2078244);
   SimpleSinFunc1012->SetSavedPoint(75,-0.2079831);
   SimpleSinFunc1012->SetSavedPoint(76,-0.2078244);
   SimpleSinFunc1012->SetSavedPoint(77,-0.2073488);
   SimpleSinFunc1012->SetSavedPoint(78,-0.2065584);
   SimpleSinFunc1012->SetSavedPoint(79,-0.2054561);
   SimpleSinFunc1012->SetSavedPoint(80,-0.2040464);
   SimpleSinFunc1012->SetSavedPoint(81,-0.2023347);
   SimpleSinFunc1012->SetSavedPoint(82,-0.2003279);
   SimpleSinFunc1012->SetSavedPoint(83,-0.1980339);
   SimpleSinFunc1012->SetSavedPoint(84,-0.1954617);
   SimpleSinFunc1012->SetSavedPoint(85,-0.1926216);
   SimpleSinFunc1012->SetSavedPoint(86,-0.1895245);
   SimpleSinFunc1012->SetSavedPoint(87,-0.1861829);
   SimpleSinFunc1012->SetSavedPoint(88,-0.1826099);
   SimpleSinFunc1012->SetSavedPoint(89,-0.1788196);
   SimpleSinFunc1012->SetSavedPoint(90,-0.174827);
   SimpleSinFunc1012->SetSavedPoint(91,-0.1706478);
   SimpleSinFunc1012->SetSavedPoint(92,-0.1662985);
   SimpleSinFunc1012->SetSavedPoint(93,-0.1617962);
   SimpleSinFunc1012->SetSavedPoint(94,-0.1571588);
   SimpleSinFunc1012->SetSavedPoint(95,-0.1524046);
   SimpleSinFunc1012->SetSavedPoint(96,-0.1475522);
   SimpleSinFunc1012->SetSavedPoint(97,-0.1426209);
   SimpleSinFunc1012->SetSavedPoint(98,-0.1376301);
   SimpleSinFunc1012->SetSavedPoint(99,-0.1325996);
   SimpleSinFunc1012->SetSavedPoint(100,-0.1275491);
   SimpleSinFunc1012->SetSavedPoint(101,0);
   SimpleSinFunc1012->SetSavedPoint(102,4.365324);
   SimpleSinFunc1012->SetFillColor(19);
   SimpleSinFunc1012->SetFillStyle(0);
   SimpleSinFunc1012->SetLineColor(2);
   SimpleSinFunc1012->SetLineWidth(3);
   SimpleSinFunc1012->SetChisquare(88.18251);
   SimpleSinFunc1012->SetNDF(85);
   SimpleSinFunc1012->GetXaxis()->SetLabelFont(42);
   SimpleSinFunc1012->GetXaxis()->SetTitleOffset(1);
   SimpleSinFunc1012->GetXaxis()->SetTitleFont(42);
   SimpleSinFunc1012->GetYaxis()->SetLabelFont(42);
   SimpleSinFunc1012->GetYaxis()->SetTitleFont(42);
   SimpleSinFunc1012->SetParameter(0,0.08043397);
   SimpleSinFunc1012->SetParError(0,0.008551124);
   SimpleSinFunc1012->SetParLimits(0,0,0);
   SimpleSinFunc1012->SetParameter(1,1.43934);
   SimpleSinFunc1012->SetParError(1,0);
   SimpleSinFunc1012->SetParLimits(1,1.43934,1.43934);
   SimpleSinFunc1012->SetParameter(2,-0.1275491);
   SimpleSinFunc1012->SetParError(2,0.006045075);
   SimpleSinFunc1012->SetParLimits(2,0,0);
   SimpleSinFunc1012->SetParent(gre);
   gre->GetListOfFunctions()->Add(SimpleSinFunc1012);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.59,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("1.42#times10^{6}");
   pt_LaTex = pt->AddText(" 1.04");
   pt_LaTex = pt->AddText("0.0804#pm0.009");
   pt_LaTex = pt->AddText("-0.128#pm0.006");
   pt->Draw();
   
   pt = new TPaveText(0.52,0.595,0.69,0.88,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("N");
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("A_{EDM}^{BLIND} [mrad]");
   pt_LaTex = pt->AddText("c [mrad]");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.11,0.79,0.45,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("SimpleSinFunc","A_{EDM} sin(#omega_{a}t) + c","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TF1 *SimpleSinFunc1013 = new TF1("*SimpleSinFunc",0,4.365324,3);
    //The original function : SimpleSinFunc had originally been created by:
    //TF1 *SimpleSinFunc = new TF1("SimpleSinFunc",SimpleSinFunc,0,4.365324,3, 1, TF1::EAddToList::kNo);
   SimpleSinFunc1013->SetRange(0,4.365324);
   SimpleSinFunc1013->SetName("SimpleSinFunc");
   SimpleSinFunc1013->SetTitle("SimpleSinFunc");
   SimpleSinFunc1013->SetSavedPoint(0,-0.1275491);
   SimpleSinFunc1013->SetSavedPoint(1,-0.1224986);
   SimpleSinFunc1013->SetSavedPoint(2,-0.117468);
   SimpleSinFunc1013->SetSavedPoint(3,-0.1124773);
   SimpleSinFunc1013->SetSavedPoint(4,-0.107546);
   SimpleSinFunc1013->SetSavedPoint(5,-0.1026936);
   SimpleSinFunc1013->SetSavedPoint(6,-0.09793938);
   SimpleSinFunc1013->SetSavedPoint(7,-0.09330198);
   SimpleSinFunc1013->SetSavedPoint(8,-0.08879974);
   SimpleSinFunc1013->SetSavedPoint(9,-0.08445042);
   SimpleSinFunc1013->SetSavedPoint(10,-0.08027119);
   SimpleSinFunc1013->SetSavedPoint(11,-0.07627855);
   SimpleSinFunc1013->SetSavedPoint(12,-0.07248825);
   SimpleSinFunc1013->SetSavedPoint(13,-0.06891525);
   SimpleSinFunc1013->SetSavedPoint(14,-0.06557366);
   SimpleSinFunc1013->SetSavedPoint(15,-0.06247665);
   SimpleSinFunc1013->SetSavedPoint(16,-0.05963645);
   SimpleSinFunc1013->SetSavedPoint(17,-0.05706427);
   SimpleSinFunc1013->SetSavedPoint(18,-0.05477026);
   SimpleSinFunc1013->SetSavedPoint(19,-0.05276348);
   SimpleSinFunc1013->SetSavedPoint(20,-0.05105184);
   SimpleSinFunc1013->SetSavedPoint(21,-0.0496421);
   SimpleSinFunc1013->SetSavedPoint(22,-0.04853983);
   SimpleSinFunc1013->SetSavedPoint(23,-0.04774937);
   SimpleSinFunc1013->SetSavedPoint(24,-0.04727384);
   SimpleSinFunc1013->SetSavedPoint(25,-0.04711512);
   SimpleSinFunc1013->SetSavedPoint(26,-0.04727384);
   SimpleSinFunc1013->SetSavedPoint(27,-0.04774937);
   SimpleSinFunc1013->SetSavedPoint(28,-0.04853983);
   SimpleSinFunc1013->SetSavedPoint(29,-0.0496421);
   SimpleSinFunc1013->SetSavedPoint(30,-0.05105184);
   SimpleSinFunc1013->SetSavedPoint(31,-0.05276348);
   SimpleSinFunc1013->SetSavedPoint(32,-0.05477026);
   SimpleSinFunc1013->SetSavedPoint(33,-0.05706427);
   SimpleSinFunc1013->SetSavedPoint(34,-0.05963645);
   SimpleSinFunc1013->SetSavedPoint(35,-0.06247665);
   SimpleSinFunc1013->SetSavedPoint(36,-0.06557366);
   SimpleSinFunc1013->SetSavedPoint(37,-0.06891525);
   SimpleSinFunc1013->SetSavedPoint(38,-0.07248825);
   SimpleSinFunc1013->SetSavedPoint(39,-0.07627855);
   SimpleSinFunc1013->SetSavedPoint(40,-0.08027119);
   SimpleSinFunc1013->SetSavedPoint(41,-0.08445042);
   SimpleSinFunc1013->SetSavedPoint(42,-0.08879974);
   SimpleSinFunc1013->SetSavedPoint(43,-0.09330198);
   SimpleSinFunc1013->SetSavedPoint(44,-0.09793938);
   SimpleSinFunc1013->SetSavedPoint(45,-0.1026936);
   SimpleSinFunc1013->SetSavedPoint(46,-0.107546);
   SimpleSinFunc1013->SetSavedPoint(47,-0.1124773);
   SimpleSinFunc1013->SetSavedPoint(48,-0.117468);
   SimpleSinFunc1013->SetSavedPoint(49,-0.1224986);
   SimpleSinFunc1013->SetSavedPoint(50,-0.1275491);
   SimpleSinFunc1013->SetSavedPoint(51,-0.1325996);
   SimpleSinFunc1013->SetSavedPoint(52,-0.1376301);
   SimpleSinFunc1013->SetSavedPoint(53,-0.1426209);
   SimpleSinFunc1013->SetSavedPoint(54,-0.1475522);
   SimpleSinFunc1013->SetSavedPoint(55,-0.1524046);
   SimpleSinFunc1013->SetSavedPoint(56,-0.1571588);
   SimpleSinFunc1013->SetSavedPoint(57,-0.1617962);
   SimpleSinFunc1013->SetSavedPoint(58,-0.1662985);
   SimpleSinFunc1013->SetSavedPoint(59,-0.1706478);
   SimpleSinFunc1013->SetSavedPoint(60,-0.174827);
   SimpleSinFunc1013->SetSavedPoint(61,-0.1788196);
   SimpleSinFunc1013->SetSavedPoint(62,-0.1826099);
   SimpleSinFunc1013->SetSavedPoint(63,-0.1861829);
   SimpleSinFunc1013->SetSavedPoint(64,-0.1895245);
   SimpleSinFunc1013->SetSavedPoint(65,-0.1926216);
   SimpleSinFunc1013->SetSavedPoint(66,-0.1954617);
   SimpleSinFunc1013->SetSavedPoint(67,-0.1980339);
   SimpleSinFunc1013->SetSavedPoint(68,-0.2003279);
   SimpleSinFunc1013->SetSavedPoint(69,-0.2023347);
   SimpleSinFunc1013->SetSavedPoint(70,-0.2040464);
   SimpleSinFunc1013->SetSavedPoint(71,-0.2054561);
   SimpleSinFunc1013->SetSavedPoint(72,-0.2065584);
   SimpleSinFunc1013->SetSavedPoint(73,-0.2073488);
   SimpleSinFunc1013->SetSavedPoint(74,-0.2078244);
   SimpleSinFunc1013->SetSavedPoint(75,-0.2079831);
   SimpleSinFunc1013->SetSavedPoint(76,-0.2078244);
   SimpleSinFunc1013->SetSavedPoint(77,-0.2073488);
   SimpleSinFunc1013->SetSavedPoint(78,-0.2065584);
   SimpleSinFunc1013->SetSavedPoint(79,-0.2054561);
   SimpleSinFunc1013->SetSavedPoint(80,-0.2040464);
   SimpleSinFunc1013->SetSavedPoint(81,-0.2023347);
   SimpleSinFunc1013->SetSavedPoint(82,-0.2003279);
   SimpleSinFunc1013->SetSavedPoint(83,-0.1980339);
   SimpleSinFunc1013->SetSavedPoint(84,-0.1954617);
   SimpleSinFunc1013->SetSavedPoint(85,-0.1926216);
   SimpleSinFunc1013->SetSavedPoint(86,-0.1895245);
   SimpleSinFunc1013->SetSavedPoint(87,-0.1861829);
   SimpleSinFunc1013->SetSavedPoint(88,-0.1826099);
   SimpleSinFunc1013->SetSavedPoint(89,-0.1788196);
   SimpleSinFunc1013->SetSavedPoint(90,-0.174827);
   SimpleSinFunc1013->SetSavedPoint(91,-0.1706478);
   SimpleSinFunc1013->SetSavedPoint(92,-0.1662985);
   SimpleSinFunc1013->SetSavedPoint(93,-0.1617962);
   SimpleSinFunc1013->SetSavedPoint(94,-0.1571588);
   SimpleSinFunc1013->SetSavedPoint(95,-0.1524046);
   SimpleSinFunc1013->SetSavedPoint(96,-0.1475522);
   SimpleSinFunc1013->SetSavedPoint(97,-0.1426209);
   SimpleSinFunc1013->SetSavedPoint(98,-0.1376301);
   SimpleSinFunc1013->SetSavedPoint(99,-0.1325996);
   SimpleSinFunc1013->SetSavedPoint(100,-0.1275491);
   SimpleSinFunc1013->SetSavedPoint(101,0);
   SimpleSinFunc1013->SetSavedPoint(102,4.365324);
   SimpleSinFunc1013->SetFillColor(19);
   SimpleSinFunc1013->SetFillStyle(0);
   SimpleSinFunc1013->SetLineColor(2);
   SimpleSinFunc1013->SetLineWidth(3);
   SimpleSinFunc1013->SetChisquare(88.18251);
   SimpleSinFunc1013->SetNDF(85);
   SimpleSinFunc1013->GetXaxis()->SetLabelFont(42);
   SimpleSinFunc1013->GetXaxis()->SetTitleOffset(1);
   SimpleSinFunc1013->GetXaxis()->SetTitleFont(42);
   SimpleSinFunc1013->GetYaxis()->SetLabelFont(42);
   SimpleSinFunc1013->GetYaxis()->SetTitleFont(42);
   SimpleSinFunc1013->SetParameter(0,0.08043397);
   SimpleSinFunc1013->SetParError(0,0.008551124);
   SimpleSinFunc1013->SetParLimits(0,0,0);
   SimpleSinFunc1013->SetParameter(1,1.43934);
   SimpleSinFunc1013->SetParError(1,0);
   SimpleSinFunc1013->SetParLimits(1,1.43934,1.43934);
   SimpleSinFunc1013->SetParameter(2,-0.1275491);
   SimpleSinFunc1013->SetParError(2,0.006045075);
   SimpleSinFunc1013->SetParLimits(2,0,0);
   SimpleSinFunc1013->Draw("same");
   
   pt = new TPaveText(0.3342211,0.9341608,0.6657789,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("2500<p<3000 MeV");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
