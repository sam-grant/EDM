void RecoVertexFit_S12S18()
{
//=========Macro generated from canvas: S12S18/c
//=========  (Tue Feb 22 00:54:07 2022) by ROOT version 6.24/06
   TCanvas *S12S18 = new TCanvas("S12S18", "c",0,0,800,600);
   S12S18->SetHighLightColor(2);
   S12S18->Range(467.0851,-0.0425,3024.551,0.1825);
   S12S18->SetFillColor(0);
   S12S18->SetBorderMode(0);
   S12S18->SetBorderSize(2);
   S12S18->SetFrameBorderMode(0);
   S12S18->SetFrameBorderMode(0);
   
   Double_t S12S18_trackReco_fx1015[11] = {
   451.9038,
   653.315,
   880.4707,
   1123.079,
   1370.969,
   1620.017,
   1866.66,
   2115.009,
   2362.994,
   2613.175,
   2787.49};
   Double_t S12S18_trackReco_fy1015[11] = {
   -0.1629792,
   0.05558581,
   0.08265026,
   0.1004429,
   0.09719715,
   0.1070955,
   0.09246163,
   0.06744454,
   0.05030738,
   0.06483693,
   0.008862714};
   Double_t S12S18_trackReco_fex1015[11] = {
   0,
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
   Double_t S12S18_trackReco_fey1015[11] = {
   0.08122952,
   0.02867921,
   0.01682687,
   0.013446,
   0.01141677,
   0.009907567,
   0.009332662,
   0.00935596,
   0.009693623,
   0.009277983,
   0.0213147};
   TGraphErrors *gre = new TGraphErrors(11,S12S18_trackReco_fx1015,S12S18_trackReco_fy1015,S12S18_trackReco_fex1015,S12S18_trackReco_fey1015);
   gre->SetName("S12S18_trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_trackReco1015 = new TH1F("Graph_S12S18_trackReco1015","",100,218.3453,3021.048);
   Graph_S12S18_trackReco1015->SetMinimum(-0.02);
   Graph_S12S18_trackReco1015->SetMaximum(0.16);
   Graph_S12S18_trackReco1015->SetDirectory(0);
   Graph_S12S18_trackReco1015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12S18_trackReco1015->SetLineColor(ci);
   Graph_S12S18_trackReco1015->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12S18_trackReco1015->GetXaxis()->SetRange(19,91);
   Graph_S12S18_trackReco1015->GetXaxis()->CenterTitle(true);
   Graph_S12S18_trackReco1015->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_trackReco1015->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_trackReco1015->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_trackReco1015->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_trackReco1015->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S12S18_trackReco1015->GetYaxis()->CenterTitle(true);
   Graph_S12S18_trackReco1015->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_trackReco1015->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_trackReco1015->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_trackReco1015->GetYaxis()->SetTitleOffset(1.25);
   Graph_S12S18_trackReco1015->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_trackReco1015->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_trackReco1015->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_trackReco1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_trackReco1015);
   
   
   TF1 *DilutionFunc1016 = new TF1("*DilutionFunc",750,2750,2);
    //The original function : DilutionFunc had originally been created by:
    //TF1 *DilutionFunc = new TF1("DilutionFunc",DilutionFunc,750,2750,2, 1, TF1::EAddToList::kNo);
   DilutionFunc1016->SetRange(750,2750);
   DilutionFunc1016->SetName("DilutionFunc");
   DilutionFunc1016->SetTitle("DilutionFunc");
   DilutionFunc1016->SetSavedPoint(0,0.1072289);
   DilutionFunc1016->SetSavedPoint(1,0.1070085);
   DilutionFunc1016->SetSavedPoint(2,0.1067816);
   DilutionFunc1016->SetSavedPoint(3,0.1065484);
   DilutionFunc1016->SetSavedPoint(4,0.1063088);
   DilutionFunc1016->SetSavedPoint(5,0.1060627);
   DilutionFunc1016->SetSavedPoint(6,0.1058101);
   DilutionFunc1016->SetSavedPoint(7,0.1055509);
   DilutionFunc1016->SetSavedPoint(8,0.1052852);
   DilutionFunc1016->SetSavedPoint(9,0.105013);
   DilutionFunc1016->SetSavedPoint(10,0.1047341);
   DilutionFunc1016->SetSavedPoint(11,0.1044486);
   DilutionFunc1016->SetSavedPoint(12,0.1041564);
   DilutionFunc1016->SetSavedPoint(13,0.1038576);
   DilutionFunc1016->SetSavedPoint(14,0.103552);
   DilutionFunc1016->SetSavedPoint(15,0.1032396);
   DilutionFunc1016->SetSavedPoint(16,0.1029205);
   DilutionFunc1016->SetSavedPoint(17,0.1025945);
   DilutionFunc1016->SetSavedPoint(18,0.1022617);
   DilutionFunc1016->SetSavedPoint(19,0.1019221);
   DilutionFunc1016->SetSavedPoint(20,0.1015755);
   DilutionFunc1016->SetSavedPoint(21,0.101222);
   DilutionFunc1016->SetSavedPoint(22,0.1008615);
   DilutionFunc1016->SetSavedPoint(23,0.100494);
   DilutionFunc1016->SetSavedPoint(24,0.1001196);
   DilutionFunc1016->SetSavedPoint(25,0.09973802);
   DilutionFunc1016->SetSavedPoint(26,0.09934941);
   DilutionFunc1016->SetSavedPoint(27,0.09895368);
   DilutionFunc1016->SetSavedPoint(28,0.09855082);
   DilutionFunc1016->SetSavedPoint(29,0.09814079);
   DilutionFunc1016->SetSavedPoint(30,0.09772357);
   DilutionFunc1016->SetSavedPoint(31,0.09729911);
   DilutionFunc1016->SetSavedPoint(32,0.0968674);
   DilutionFunc1016->SetSavedPoint(33,0.09642841);
   DilutionFunc1016->SetSavedPoint(34,0.0959821);
   DilutionFunc1016->SetSavedPoint(35,0.09552845);
   DilutionFunc1016->SetSavedPoint(36,0.09506742);
   DilutionFunc1016->SetSavedPoint(37,0.09459899);
   DilutionFunc1016->SetSavedPoint(38,0.09412313);
   DilutionFunc1016->SetSavedPoint(39,0.0936398);
   DilutionFunc1016->SetSavedPoint(40,0.09314899);
   DilutionFunc1016->SetSavedPoint(41,0.09265065);
   DilutionFunc1016->SetSavedPoint(42,0.09214476);
   DilutionFunc1016->SetSavedPoint(43,0.0916313);
   DilutionFunc1016->SetSavedPoint(44,0.09111022);
   DilutionFunc1016->SetSavedPoint(45,0.09058151);
   DilutionFunc1016->SetSavedPoint(46,0.09004513);
   DilutionFunc1016->SetSavedPoint(47,0.08950105);
   DilutionFunc1016->SetSavedPoint(48,0.08894925);
   DilutionFunc1016->SetSavedPoint(49,0.08838969);
   DilutionFunc1016->SetSavedPoint(50,0.08782235);
   DilutionFunc1016->SetSavedPoint(51,0.08724719);
   DilutionFunc1016->SetSavedPoint(52,0.08666418);
   DilutionFunc1016->SetSavedPoint(53,0.08607331);
   DilutionFunc1016->SetSavedPoint(54,0.08547453);
   DilutionFunc1016->SetSavedPoint(55,0.08486782);
   DilutionFunc1016->SetSavedPoint(56,0.08425315);
   DilutionFunc1016->SetSavedPoint(57,0.08363048);
   DilutionFunc1016->SetSavedPoint(58,0.0829998);
   DilutionFunc1016->SetSavedPoint(59,0.08236106);
   DilutionFunc1016->SetSavedPoint(60,0.08171425);
   DilutionFunc1016->SetSavedPoint(61,0.08105933);
   DilutionFunc1016->SetSavedPoint(62,0.08039627);
   DilutionFunc1016->SetSavedPoint(63,0.07972505);
   DilutionFunc1016->SetSavedPoint(64,0.07904562);
   DilutionFunc1016->SetSavedPoint(65,0.07835797);
   DilutionFunc1016->SetSavedPoint(66,0.07766207);
   DilutionFunc1016->SetSavedPoint(67,0.07695788);
   DilutionFunc1016->SetSavedPoint(68,0.07624538);
   DilutionFunc1016->SetSavedPoint(69,0.07552453);
   DilutionFunc1016->SetSavedPoint(70,0.07479531);
   DilutionFunc1016->SetSavedPoint(71,0.07405769);
   DilutionFunc1016->SetSavedPoint(72,0.07331163);
   DilutionFunc1016->SetSavedPoint(73,0.07255712);
   DilutionFunc1016->SetSavedPoint(74,0.07179411);
   DilutionFunc1016->SetSavedPoint(75,0.07102258);
   DilutionFunc1016->SetSavedPoint(76,0.07024251);
   DilutionFunc1016->SetSavedPoint(77,0.06945385);
   DilutionFunc1016->SetSavedPoint(78,0.06865659);
   DilutionFunc1016->SetSavedPoint(79,0.06785069);
   DilutionFunc1016->SetSavedPoint(80,0.06703612);
   DilutionFunc1016->SetSavedPoint(81,0.06621286);
   DilutionFunc1016->SetSavedPoint(82,0.06538087);
   DilutionFunc1016->SetSavedPoint(83,0.06454013);
   DilutionFunc1016->SetSavedPoint(84,0.0636906);
   DilutionFunc1016->SetSavedPoint(85,0.06283225);
   DilutionFunc1016->SetSavedPoint(86,0.06196507);
   DilutionFunc1016->SetSavedPoint(87,0.06108901);
   DilutionFunc1016->SetSavedPoint(88,0.06020405);
   DilutionFunc1016->SetSavedPoint(89,0.05931015);
   DilutionFunc1016->SetSavedPoint(90,0.0584073);
   DilutionFunc1016->SetSavedPoint(91,0.05749546);
   DilutionFunc1016->SetSavedPoint(92,0.05657459);
   DilutionFunc1016->SetSavedPoint(93,0.05564468);
   DilutionFunc1016->SetSavedPoint(94,0.05470569);
   DilutionFunc1016->SetSavedPoint(95,0.05375759);
   DilutionFunc1016->SetSavedPoint(96,0.05280035);
   DilutionFunc1016->SetSavedPoint(97,0.05183395);
   DilutionFunc1016->SetSavedPoint(98,0.05085835);
   DilutionFunc1016->SetSavedPoint(99,0.04987352);
   DilutionFunc1016->SetSavedPoint(100,0.04887944);
   DilutionFunc1016->SetSavedPoint(101,750);
   DilutionFunc1016->SetSavedPoint(102,2750);
   DilutionFunc1016->SetFillColor(19);
   DilutionFunc1016->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1016->SetLineColor(ci);
   DilutionFunc1016->SetLineWidth(3);
   DilutionFunc1016->SetChisquare(9.813457);
   DilutionFunc1016->SetNDF(6);
   DilutionFunc1016->GetXaxis()->SetLabelFont(42);
   DilutionFunc1016->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1016->GetXaxis()->SetTitleFont(42);
   DilutionFunc1016->GetYaxis()->SetLabelFont(42);
   DilutionFunc1016->GetYaxis()->SetTitleFont(42);
   DilutionFunc1016->SetParameter(0,0.1111734);
   DilutionFunc1016->SetParError(0,0.008053802);
   DilutionFunc1016->SetParLimits(0,0,0);
   DilutionFunc1016->SetParameter(1,-0.000140173);
   DilutionFunc1016->SetParError(1,1.110269e-05);
   DilutionFunc1016->SetParLimits(1,0,0);
   DilutionFunc1016->SetParent(gre);
   gre->GetListOfFunctions()->Add(DilutionFunc1016);
   gre->Draw("ap");
   
   TF1 *DilutionFunc1017 = new TF1("*DilutionFunc",750,2750,2);
    //The original function : DilutionFunc had originally been created by:
    //TF1 *DilutionFunc = new TF1("DilutionFunc",DilutionFunc,750,2750,2, 1, TF1::EAddToList::kNo);
   DilutionFunc1017->SetRange(750,2750);
   DilutionFunc1017->SetName("DilutionFunc");
   DilutionFunc1017->SetTitle("DilutionFunc");
   DilutionFunc1017->SetSavedPoint(0,0.1072289);
   DilutionFunc1017->SetSavedPoint(1,0.1070085);
   DilutionFunc1017->SetSavedPoint(2,0.1067816);
   DilutionFunc1017->SetSavedPoint(3,0.1065484);
   DilutionFunc1017->SetSavedPoint(4,0.1063088);
   DilutionFunc1017->SetSavedPoint(5,0.1060627);
   DilutionFunc1017->SetSavedPoint(6,0.1058101);
   DilutionFunc1017->SetSavedPoint(7,0.1055509);
   DilutionFunc1017->SetSavedPoint(8,0.1052852);
   DilutionFunc1017->SetSavedPoint(9,0.105013);
   DilutionFunc1017->SetSavedPoint(10,0.1047341);
   DilutionFunc1017->SetSavedPoint(11,0.1044486);
   DilutionFunc1017->SetSavedPoint(12,0.1041564);
   DilutionFunc1017->SetSavedPoint(13,0.1038576);
   DilutionFunc1017->SetSavedPoint(14,0.103552);
   DilutionFunc1017->SetSavedPoint(15,0.1032396);
   DilutionFunc1017->SetSavedPoint(16,0.1029205);
   DilutionFunc1017->SetSavedPoint(17,0.1025945);
   DilutionFunc1017->SetSavedPoint(18,0.1022617);
   DilutionFunc1017->SetSavedPoint(19,0.1019221);
   DilutionFunc1017->SetSavedPoint(20,0.1015755);
   DilutionFunc1017->SetSavedPoint(21,0.101222);
   DilutionFunc1017->SetSavedPoint(22,0.1008615);
   DilutionFunc1017->SetSavedPoint(23,0.100494);
   DilutionFunc1017->SetSavedPoint(24,0.1001196);
   DilutionFunc1017->SetSavedPoint(25,0.09973802);
   DilutionFunc1017->SetSavedPoint(26,0.09934941);
   DilutionFunc1017->SetSavedPoint(27,0.09895368);
   DilutionFunc1017->SetSavedPoint(28,0.09855082);
   DilutionFunc1017->SetSavedPoint(29,0.09814079);
   DilutionFunc1017->SetSavedPoint(30,0.09772357);
   DilutionFunc1017->SetSavedPoint(31,0.09729911);
   DilutionFunc1017->SetSavedPoint(32,0.0968674);
   DilutionFunc1017->SetSavedPoint(33,0.09642841);
   DilutionFunc1017->SetSavedPoint(34,0.0959821);
   DilutionFunc1017->SetSavedPoint(35,0.09552845);
   DilutionFunc1017->SetSavedPoint(36,0.09506742);
   DilutionFunc1017->SetSavedPoint(37,0.09459899);
   DilutionFunc1017->SetSavedPoint(38,0.09412313);
   DilutionFunc1017->SetSavedPoint(39,0.0936398);
   DilutionFunc1017->SetSavedPoint(40,0.09314899);
   DilutionFunc1017->SetSavedPoint(41,0.09265065);
   DilutionFunc1017->SetSavedPoint(42,0.09214476);
   DilutionFunc1017->SetSavedPoint(43,0.0916313);
   DilutionFunc1017->SetSavedPoint(44,0.09111022);
   DilutionFunc1017->SetSavedPoint(45,0.09058151);
   DilutionFunc1017->SetSavedPoint(46,0.09004513);
   DilutionFunc1017->SetSavedPoint(47,0.08950105);
   DilutionFunc1017->SetSavedPoint(48,0.08894925);
   DilutionFunc1017->SetSavedPoint(49,0.08838969);
   DilutionFunc1017->SetSavedPoint(50,0.08782235);
   DilutionFunc1017->SetSavedPoint(51,0.08724719);
   DilutionFunc1017->SetSavedPoint(52,0.08666418);
   DilutionFunc1017->SetSavedPoint(53,0.08607331);
   DilutionFunc1017->SetSavedPoint(54,0.08547453);
   DilutionFunc1017->SetSavedPoint(55,0.08486782);
   DilutionFunc1017->SetSavedPoint(56,0.08425315);
   DilutionFunc1017->SetSavedPoint(57,0.08363048);
   DilutionFunc1017->SetSavedPoint(58,0.0829998);
   DilutionFunc1017->SetSavedPoint(59,0.08236106);
   DilutionFunc1017->SetSavedPoint(60,0.08171425);
   DilutionFunc1017->SetSavedPoint(61,0.08105933);
   DilutionFunc1017->SetSavedPoint(62,0.08039627);
   DilutionFunc1017->SetSavedPoint(63,0.07972505);
   DilutionFunc1017->SetSavedPoint(64,0.07904562);
   DilutionFunc1017->SetSavedPoint(65,0.07835797);
   DilutionFunc1017->SetSavedPoint(66,0.07766207);
   DilutionFunc1017->SetSavedPoint(67,0.07695788);
   DilutionFunc1017->SetSavedPoint(68,0.07624538);
   DilutionFunc1017->SetSavedPoint(69,0.07552453);
   DilutionFunc1017->SetSavedPoint(70,0.07479531);
   DilutionFunc1017->SetSavedPoint(71,0.07405769);
   DilutionFunc1017->SetSavedPoint(72,0.07331163);
   DilutionFunc1017->SetSavedPoint(73,0.07255712);
   DilutionFunc1017->SetSavedPoint(74,0.07179411);
   DilutionFunc1017->SetSavedPoint(75,0.07102258);
   DilutionFunc1017->SetSavedPoint(76,0.07024251);
   DilutionFunc1017->SetSavedPoint(77,0.06945385);
   DilutionFunc1017->SetSavedPoint(78,0.06865659);
   DilutionFunc1017->SetSavedPoint(79,0.06785069);
   DilutionFunc1017->SetSavedPoint(80,0.06703612);
   DilutionFunc1017->SetSavedPoint(81,0.06621286);
   DilutionFunc1017->SetSavedPoint(82,0.06538087);
   DilutionFunc1017->SetSavedPoint(83,0.06454013);
   DilutionFunc1017->SetSavedPoint(84,0.0636906);
   DilutionFunc1017->SetSavedPoint(85,0.06283225);
   DilutionFunc1017->SetSavedPoint(86,0.06196507);
   DilutionFunc1017->SetSavedPoint(87,0.06108901);
   DilutionFunc1017->SetSavedPoint(88,0.06020405);
   DilutionFunc1017->SetSavedPoint(89,0.05931015);
   DilutionFunc1017->SetSavedPoint(90,0.0584073);
   DilutionFunc1017->SetSavedPoint(91,0.05749546);
   DilutionFunc1017->SetSavedPoint(92,0.05657459);
   DilutionFunc1017->SetSavedPoint(93,0.05564468);
   DilutionFunc1017->SetSavedPoint(94,0.05470569);
   DilutionFunc1017->SetSavedPoint(95,0.05375759);
   DilutionFunc1017->SetSavedPoint(96,0.05280035);
   DilutionFunc1017->SetSavedPoint(97,0.05183395);
   DilutionFunc1017->SetSavedPoint(98,0.05085835);
   DilutionFunc1017->SetSavedPoint(99,0.04987352);
   DilutionFunc1017->SetSavedPoint(100,0.04887944);
   DilutionFunc1017->SetSavedPoint(101,750);
   DilutionFunc1017->SetSavedPoint(102,2750);
   DilutionFunc1017->SetFillColor(19);
   DilutionFunc1017->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1017->SetLineColor(ci);
   DilutionFunc1017->SetLineWidth(3);
   DilutionFunc1017->SetChisquare(9.813457);
   DilutionFunc1017->SetNDF(6);
   DilutionFunc1017->GetXaxis()->SetLabelFont(42);
   DilutionFunc1017->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1017->GetXaxis()->SetTitleFont(42);
   DilutionFunc1017->GetYaxis()->SetLabelFont(42);
   DilutionFunc1017->GetYaxis()->SetTitleFont(42);
   DilutionFunc1017->SetParameter(0,0.1111734);
   DilutionFunc1017->SetParError(0,0.008053802);
   DilutionFunc1017->SetParLimits(0,0,0);
   DilutionFunc1017->SetParameter(1,-0.000140173);
   DilutionFunc1017->SetParError(1,1.110269e-05);
   DilutionFunc1017->SetParLimits(1,0,0);
   DilutionFunc1017->Draw("SAME");
   
   TLegend *leg = new TLegend(0.125,0.79,0.875,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12S18_trackReco","Sim: reco vertices","lpf");
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
   pt_LaTex = pt->AddText("1.64
");
   pt_LaTex = pt->AddText("0.1
#pm0.008
");
   pt_LaTex = pt->AddText("-0.0001
#pm1e-05
");
   pt->Draw();
   S12S18->Modified();
   S12S18->cd();
   S12S18->SetSelected(S12S18);
}
