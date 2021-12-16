void RecoVertexFit_S12()
{
//=========Macro generated from canvas: S12/c
//=========  (Tue Dec  7 01:11:50 2021) by ROOT version 6.24/04
   TCanvas *S12 = new TCanvas("S12", "c",0,0,800,600);
   S12->SetHighLightColor(2);
   S12->Range(466.7921,-0.015,3024.887,0.135);
   S12->SetFillColor(0);
   S12->SetBorderMode(0);
   S12->SetBorderSize(2);
   S12->SetFrameBorderMode(0);
   S12->SetFrameBorderMode(0);
   
   Double_t S12_trackReco_fx1059[11] = {
   451.6071,
   653.3642,
   880.2183,
   1123.039,
   1371.147,
   1620.261,
   1866.732,
   2114.885,
   2362.567,
   2614.236,
   2787.767};
   Double_t S12_trackReco_fy1059[11] = {
   0.09422805,
   0.08314432,
   0.09243632,
   0.08986559,
   0.06310816,
   0.07876938,
   0.09399702,
   0.06839063,
   0.0349796,
   0.04932758,
   0.01166716};
   Double_t S12_trackReco_fex1059[11] = {
   0,
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
   Double_t S12_trackReco_fey1059[11] = {
   0.1100058,
   0.03699345,
   0.02125165,
   0.01748089,
   0.01598468,
   0.01518205,
   0.01527061,
   0.01614408,
   0.01732056,
   0.01728981,
   0.03988681};
   TGraphErrors *gre = new TGraphErrors(11,S12_trackReco_fx1059,S12_trackReco_fy1059,S12_trackReco_fex1059,S12_trackReco_fey1059);
   gre->SetName("S12_trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_trackReco1059 = new TH1F("Graph_S12_trackReco1059","",100,217.9912,3021.382);
   Graph_S12_trackReco1059->SetMinimum(0);
   Graph_S12_trackReco1059->SetMaximum(0.12);
   Graph_S12_trackReco1059->SetDirectory(0);
   Graph_S12_trackReco1059->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12_trackReco1059->SetLineColor(ci);
   Graph_S12_trackReco1059->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_trackReco1059->GetXaxis()->SetRange(19,91);
   Graph_S12_trackReco1059->GetXaxis()->CenterTitle(true);
   Graph_S12_trackReco1059->GetXaxis()->SetLabelFont(42);
   Graph_S12_trackReco1059->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_trackReco1059->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_trackReco1059->GetXaxis()->SetTitleFont(42);
   Graph_S12_trackReco1059->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S12_trackReco1059->GetYaxis()->CenterTitle(true);
   Graph_S12_trackReco1059->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_trackReco1059->GetYaxis()->SetLabelFont(42);
   Graph_S12_trackReco1059->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_trackReco1059->GetYaxis()->SetTitleOffset(1.25);
   Graph_S12_trackReco1059->GetYaxis()->SetTitleFont(42);
   Graph_S12_trackReco1059->GetZaxis()->SetLabelFont(42);
   Graph_S12_trackReco1059->GetZaxis()->SetTitleOffset(1);
   Graph_S12_trackReco1059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_trackReco1059);
   
   
   TF1 *ParabolaFunc1060 = new TF1("*ParabolaFunc",750,2750,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2750,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1060->SetRange(750,2750);
   ParabolaFunc1060->SetName("ParabolaFunc");
   ParabolaFunc1060->SetTitle("ParabolaFunc");
   ParabolaFunc1060->SetSavedPoint(0,0.08432562);
   ParabolaFunc1060->SetSavedPoint(1,0.08450589);
   ParabolaFunc1060->SetSavedPoint(2,0.08467257);
   ParabolaFunc1060->SetSavedPoint(3,0.08482566);
   ParabolaFunc1060->SetSavedPoint(4,0.08496517);
   ParabolaFunc1060->SetSavedPoint(5,0.08509108);
   ParabolaFunc1060->SetSavedPoint(6,0.0852034);
   ParabolaFunc1060->SetSavedPoint(7,0.08530214);
   ParabolaFunc1060->SetSavedPoint(8,0.08538728);
   ParabolaFunc1060->SetSavedPoint(9,0.08545883);
   ParabolaFunc1060->SetSavedPoint(10,0.0855168);
   ParabolaFunc1060->SetSavedPoint(11,0.08556117);
   ParabolaFunc1060->SetSavedPoint(12,0.08559196);
   ParabolaFunc1060->SetSavedPoint(13,0.08560916);
   ParabolaFunc1060->SetSavedPoint(14,0.08561276);
   ParabolaFunc1060->SetSavedPoint(15,0.08560278);
   ParabolaFunc1060->SetSavedPoint(16,0.08557921);
   ParabolaFunc1060->SetSavedPoint(17,0.08554204);
   ParabolaFunc1060->SetSavedPoint(18,0.08549129);
   ParabolaFunc1060->SetSavedPoint(19,0.08542695);
   ParabolaFunc1060->SetSavedPoint(20,0.08534902);
   ParabolaFunc1060->SetSavedPoint(21,0.0852575);
   ParabolaFunc1060->SetSavedPoint(22,0.08515239);
   ParabolaFunc1060->SetSavedPoint(23,0.08503369);
   ParabolaFunc1060->SetSavedPoint(24,0.0849014);
   ParabolaFunc1060->SetSavedPoint(25,0.08475552);
   ParabolaFunc1060->SetSavedPoint(26,0.08459605);
   ParabolaFunc1060->SetSavedPoint(27,0.08442299);
   ParabolaFunc1060->SetSavedPoint(28,0.08423634);
   ParabolaFunc1060->SetSavedPoint(29,0.08403611);
   ParabolaFunc1060->SetSavedPoint(30,0.08382228);
   ParabolaFunc1060->SetSavedPoint(31,0.08359486);
   ParabolaFunc1060->SetSavedPoint(32,0.08335386);
   ParabolaFunc1060->SetSavedPoint(33,0.08309926);
   ParabolaFunc1060->SetSavedPoint(34,0.08283107);
   ParabolaFunc1060->SetSavedPoint(35,0.0825493);
   ParabolaFunc1060->SetSavedPoint(36,0.08225393);
   ParabolaFunc1060->SetSavedPoint(37,0.08194498);
   ParabolaFunc1060->SetSavedPoint(38,0.08162244);
   ParabolaFunc1060->SetSavedPoint(39,0.0812863);
   ParabolaFunc1060->SetSavedPoint(40,0.08093658);
   ParabolaFunc1060->SetSavedPoint(41,0.08057327);
   ParabolaFunc1060->SetSavedPoint(42,0.08019636);
   ParabolaFunc1060->SetSavedPoint(43,0.07980587);
   ParabolaFunc1060->SetSavedPoint(44,0.07940179);
   ParabolaFunc1060->SetSavedPoint(45,0.07898412);
   ParabolaFunc1060->SetSavedPoint(46,0.07855286);
   ParabolaFunc1060->SetSavedPoint(47,0.07810801);
   ParabolaFunc1060->SetSavedPoint(48,0.07764957);
   ParabolaFunc1060->SetSavedPoint(49,0.07717754);
   ParabolaFunc1060->SetSavedPoint(50,0.07669192);
   ParabolaFunc1060->SetSavedPoint(51,0.07619271);
   ParabolaFunc1060->SetSavedPoint(52,0.07567991);
   ParabolaFunc1060->SetSavedPoint(53,0.07515352);
   ParabolaFunc1060->SetSavedPoint(54,0.07461355);
   ParabolaFunc1060->SetSavedPoint(55,0.07405998);
   ParabolaFunc1060->SetSavedPoint(56,0.07349282);
   ParabolaFunc1060->SetSavedPoint(57,0.07291208);
   ParabolaFunc1060->SetSavedPoint(58,0.07231774);
   ParabolaFunc1060->SetSavedPoint(59,0.07170982);
   ParabolaFunc1060->SetSavedPoint(60,0.0710883);
   ParabolaFunc1060->SetSavedPoint(61,0.0704532);
   ParabolaFunc1060->SetSavedPoint(62,0.0698045);
   ParabolaFunc1060->SetSavedPoint(63,0.06914222);
   ParabolaFunc1060->SetSavedPoint(64,0.06846634);
   ParabolaFunc1060->SetSavedPoint(65,0.06777688);
   ParabolaFunc1060->SetSavedPoint(66,0.06707383);
   ParabolaFunc1060->SetSavedPoint(67,0.06635719);
   ParabolaFunc1060->SetSavedPoint(68,0.06562695);
   ParabolaFunc1060->SetSavedPoint(69,0.06488313);
   ParabolaFunc1060->SetSavedPoint(70,0.06412572);
   ParabolaFunc1060->SetSavedPoint(71,0.06335472);
   ParabolaFunc1060->SetSavedPoint(72,0.06257013);
   ParabolaFunc1060->SetSavedPoint(73,0.06177195);
   ParabolaFunc1060->SetSavedPoint(74,0.06096018);
   ParabolaFunc1060->SetSavedPoint(75,0.06013482);
   ParabolaFunc1060->SetSavedPoint(76,0.05929587);
   ParabolaFunc1060->SetSavedPoint(77,0.05844334);
   ParabolaFunc1060->SetSavedPoint(78,0.05757721);
   ParabolaFunc1060->SetSavedPoint(79,0.05669749);
   ParabolaFunc1060->SetSavedPoint(80,0.05580418);
   ParabolaFunc1060->SetSavedPoint(81,0.05489729);
   ParabolaFunc1060->SetSavedPoint(82,0.0539768);
   ParabolaFunc1060->SetSavedPoint(83,0.05304272);
   ParabolaFunc1060->SetSavedPoint(84,0.05209506);
   ParabolaFunc1060->SetSavedPoint(85,0.0511338);
   ParabolaFunc1060->SetSavedPoint(86,0.05015896);
   ParabolaFunc1060->SetSavedPoint(87,0.04917052);
   ParabolaFunc1060->SetSavedPoint(88,0.0481685);
   ParabolaFunc1060->SetSavedPoint(89,0.04715289);
   ParabolaFunc1060->SetSavedPoint(90,0.04612368);
   ParabolaFunc1060->SetSavedPoint(91,0.04508089);
   ParabolaFunc1060->SetSavedPoint(92,0.04402451);
   ParabolaFunc1060->SetSavedPoint(93,0.04295454);
   ParabolaFunc1060->SetSavedPoint(94,0.04187098);
   ParabolaFunc1060->SetSavedPoint(95,0.04077383);
   ParabolaFunc1060->SetSavedPoint(96,0.03966308);
   ParabolaFunc1060->SetSavedPoint(97,0.03853875);
   ParabolaFunc1060->SetSavedPoint(98,0.03740083);
   ParabolaFunc1060->SetSavedPoint(99,0.03624933);
   ParabolaFunc1060->SetSavedPoint(100,0.03508423);
   ParabolaFunc1060->SetSavedPoint(101,750);
   ParabolaFunc1060->SetSavedPoint(102,2750);
   ParabolaFunc1060->SetFillColor(19);
   ParabolaFunc1060->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1060->SetLineColor(ci);
   ParabolaFunc1060->SetLineWidth(3);
   ParabolaFunc1060->SetChisquare(5.154643);
   ParabolaFunc1060->SetNDF(5);
   ParabolaFunc1060->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1060->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1060->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1060->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1060->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1060->SetParameter(0,-1.6987e-08);
   ParabolaFunc1060->SetParError(0,2.212322e-08);
   ParabolaFunc1060->SetParLimits(0,0,0);
   ParabolaFunc1060->SetParameter(1,3.483379e-05);
   ParabolaFunc1060->SetParError(1,7.937811e-05);
   ParabolaFunc1060->SetParLimits(1,0,0);
   ParabolaFunc1060->SetParameter(2,0.06775546);
   ParabolaFunc1060->SetParError(2,0.06698898);
   ParabolaFunc1060->SetParLimits(2,0,0);
   ParabolaFunc1060->SetParent(gre);
   gre->GetListOfFunctions()->Add(ParabolaFunc1060);
   gre->Draw("ap");
   
   TF1 *ParabolaFunc1061 = new TF1("*ParabolaFunc",750,2750,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2750,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1061->SetRange(750,2750);
   ParabolaFunc1061->SetName("ParabolaFunc");
   ParabolaFunc1061->SetTitle("ParabolaFunc");
   ParabolaFunc1061->SetSavedPoint(0,0.08432562);
   ParabolaFunc1061->SetSavedPoint(1,0.08450589);
   ParabolaFunc1061->SetSavedPoint(2,0.08467257);
   ParabolaFunc1061->SetSavedPoint(3,0.08482566);
   ParabolaFunc1061->SetSavedPoint(4,0.08496517);
   ParabolaFunc1061->SetSavedPoint(5,0.08509108);
   ParabolaFunc1061->SetSavedPoint(6,0.0852034);
   ParabolaFunc1061->SetSavedPoint(7,0.08530214);
   ParabolaFunc1061->SetSavedPoint(8,0.08538728);
   ParabolaFunc1061->SetSavedPoint(9,0.08545883);
   ParabolaFunc1061->SetSavedPoint(10,0.0855168);
   ParabolaFunc1061->SetSavedPoint(11,0.08556117);
   ParabolaFunc1061->SetSavedPoint(12,0.08559196);
   ParabolaFunc1061->SetSavedPoint(13,0.08560916);
   ParabolaFunc1061->SetSavedPoint(14,0.08561276);
   ParabolaFunc1061->SetSavedPoint(15,0.08560278);
   ParabolaFunc1061->SetSavedPoint(16,0.08557921);
   ParabolaFunc1061->SetSavedPoint(17,0.08554204);
   ParabolaFunc1061->SetSavedPoint(18,0.08549129);
   ParabolaFunc1061->SetSavedPoint(19,0.08542695);
   ParabolaFunc1061->SetSavedPoint(20,0.08534902);
   ParabolaFunc1061->SetSavedPoint(21,0.0852575);
   ParabolaFunc1061->SetSavedPoint(22,0.08515239);
   ParabolaFunc1061->SetSavedPoint(23,0.08503369);
   ParabolaFunc1061->SetSavedPoint(24,0.0849014);
   ParabolaFunc1061->SetSavedPoint(25,0.08475552);
   ParabolaFunc1061->SetSavedPoint(26,0.08459605);
   ParabolaFunc1061->SetSavedPoint(27,0.08442299);
   ParabolaFunc1061->SetSavedPoint(28,0.08423634);
   ParabolaFunc1061->SetSavedPoint(29,0.08403611);
   ParabolaFunc1061->SetSavedPoint(30,0.08382228);
   ParabolaFunc1061->SetSavedPoint(31,0.08359486);
   ParabolaFunc1061->SetSavedPoint(32,0.08335386);
   ParabolaFunc1061->SetSavedPoint(33,0.08309926);
   ParabolaFunc1061->SetSavedPoint(34,0.08283107);
   ParabolaFunc1061->SetSavedPoint(35,0.0825493);
   ParabolaFunc1061->SetSavedPoint(36,0.08225393);
   ParabolaFunc1061->SetSavedPoint(37,0.08194498);
   ParabolaFunc1061->SetSavedPoint(38,0.08162244);
   ParabolaFunc1061->SetSavedPoint(39,0.0812863);
   ParabolaFunc1061->SetSavedPoint(40,0.08093658);
   ParabolaFunc1061->SetSavedPoint(41,0.08057327);
   ParabolaFunc1061->SetSavedPoint(42,0.08019636);
   ParabolaFunc1061->SetSavedPoint(43,0.07980587);
   ParabolaFunc1061->SetSavedPoint(44,0.07940179);
   ParabolaFunc1061->SetSavedPoint(45,0.07898412);
   ParabolaFunc1061->SetSavedPoint(46,0.07855286);
   ParabolaFunc1061->SetSavedPoint(47,0.07810801);
   ParabolaFunc1061->SetSavedPoint(48,0.07764957);
   ParabolaFunc1061->SetSavedPoint(49,0.07717754);
   ParabolaFunc1061->SetSavedPoint(50,0.07669192);
   ParabolaFunc1061->SetSavedPoint(51,0.07619271);
   ParabolaFunc1061->SetSavedPoint(52,0.07567991);
   ParabolaFunc1061->SetSavedPoint(53,0.07515352);
   ParabolaFunc1061->SetSavedPoint(54,0.07461355);
   ParabolaFunc1061->SetSavedPoint(55,0.07405998);
   ParabolaFunc1061->SetSavedPoint(56,0.07349282);
   ParabolaFunc1061->SetSavedPoint(57,0.07291208);
   ParabolaFunc1061->SetSavedPoint(58,0.07231774);
   ParabolaFunc1061->SetSavedPoint(59,0.07170982);
   ParabolaFunc1061->SetSavedPoint(60,0.0710883);
   ParabolaFunc1061->SetSavedPoint(61,0.0704532);
   ParabolaFunc1061->SetSavedPoint(62,0.0698045);
   ParabolaFunc1061->SetSavedPoint(63,0.06914222);
   ParabolaFunc1061->SetSavedPoint(64,0.06846634);
   ParabolaFunc1061->SetSavedPoint(65,0.06777688);
   ParabolaFunc1061->SetSavedPoint(66,0.06707383);
   ParabolaFunc1061->SetSavedPoint(67,0.06635719);
   ParabolaFunc1061->SetSavedPoint(68,0.06562695);
   ParabolaFunc1061->SetSavedPoint(69,0.06488313);
   ParabolaFunc1061->SetSavedPoint(70,0.06412572);
   ParabolaFunc1061->SetSavedPoint(71,0.06335472);
   ParabolaFunc1061->SetSavedPoint(72,0.06257013);
   ParabolaFunc1061->SetSavedPoint(73,0.06177195);
   ParabolaFunc1061->SetSavedPoint(74,0.06096018);
   ParabolaFunc1061->SetSavedPoint(75,0.06013482);
   ParabolaFunc1061->SetSavedPoint(76,0.05929587);
   ParabolaFunc1061->SetSavedPoint(77,0.05844334);
   ParabolaFunc1061->SetSavedPoint(78,0.05757721);
   ParabolaFunc1061->SetSavedPoint(79,0.05669749);
   ParabolaFunc1061->SetSavedPoint(80,0.05580418);
   ParabolaFunc1061->SetSavedPoint(81,0.05489729);
   ParabolaFunc1061->SetSavedPoint(82,0.0539768);
   ParabolaFunc1061->SetSavedPoint(83,0.05304272);
   ParabolaFunc1061->SetSavedPoint(84,0.05209506);
   ParabolaFunc1061->SetSavedPoint(85,0.0511338);
   ParabolaFunc1061->SetSavedPoint(86,0.05015896);
   ParabolaFunc1061->SetSavedPoint(87,0.04917052);
   ParabolaFunc1061->SetSavedPoint(88,0.0481685);
   ParabolaFunc1061->SetSavedPoint(89,0.04715289);
   ParabolaFunc1061->SetSavedPoint(90,0.04612368);
   ParabolaFunc1061->SetSavedPoint(91,0.04508089);
   ParabolaFunc1061->SetSavedPoint(92,0.04402451);
   ParabolaFunc1061->SetSavedPoint(93,0.04295454);
   ParabolaFunc1061->SetSavedPoint(94,0.04187098);
   ParabolaFunc1061->SetSavedPoint(95,0.04077383);
   ParabolaFunc1061->SetSavedPoint(96,0.03966308);
   ParabolaFunc1061->SetSavedPoint(97,0.03853875);
   ParabolaFunc1061->SetSavedPoint(98,0.03740083);
   ParabolaFunc1061->SetSavedPoint(99,0.03624933);
   ParabolaFunc1061->SetSavedPoint(100,0.03508423);
   ParabolaFunc1061->SetSavedPoint(101,750);
   ParabolaFunc1061->SetSavedPoint(102,2750);
   ParabolaFunc1061->SetFillColor(19);
   ParabolaFunc1061->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1061->SetLineColor(ci);
   ParabolaFunc1061->SetLineWidth(3);
   ParabolaFunc1061->SetChisquare(5.154643);
   ParabolaFunc1061->SetNDF(5);
   ParabolaFunc1061->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1061->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1061->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1061->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1061->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1061->SetParameter(0,-1.6987e-08);
   ParabolaFunc1061->SetParError(0,2.212322e-08);
   ParabolaFunc1061->SetParLimits(0,0,0);
   ParabolaFunc1061->SetParameter(1,3.483379e-05);
   ParabolaFunc1061->SetParError(1,7.937811e-05);
   ParabolaFunc1061->SetParLimits(1,0,0);
   ParabolaFunc1061->SetParameter(2,0.06775546);
   ParabolaFunc1061->SetParError(2,0.06698898);
   ParabolaFunc1061->SetParLimits(2,0,0);
   ParabolaFunc1061->Draw("SAME");
   
   TLegend *leg = new TLegend(0.125,0.79,0.875,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12_trackReco","Sim: reco vertices","lpf");
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
   pt_LaTex = pt->AddText("1.03
");
   pt_LaTex = pt->AddText("-2e-08
#pm2e-08
");
   pt_LaTex = pt->AddText("3e-05
#pm8e-05
");
   pt_LaTex = pt->AddText("0.07
#pm0.07
");
   pt->Draw();
   S12->Modified();
   S12->cd();
   S12->SetSelected(S12);
}
