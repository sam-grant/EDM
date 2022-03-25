void RecoVertexFit_S12S18()
{
//=========Macro generated from canvas: S12S18/c
//=========  (Tue Mar 22 09:46:12 2022) by ROOT version 6.24/06
   TCanvas *S12S18 = new TCanvas("S12S18", "c",0,0,800,600);
   S12S18->SetHighLightColor(2);
   S12S18->Range(467.1197,-0.03875,3024.623,0.14875);
   S12S18->SetFillColor(0);
   S12S18->SetBorderMode(0);
   S12S18->SetBorderSize(2);
   S12S18->SetFrameBorderMode(0);
   S12S18->SetFrameBorderMode(0);
   
   Double_t S12S18_trackReco_fx1015[11] = {
   451.9382,
   653.3303,
   880.435,
   1123.103,
   1370.968,
   1620.027,
   1866.672,
   2115.073,
   2362.944,
   2613.205,
   2787.558};
   Double_t S12S18_trackReco_fy1015[11] = {
   -0.01234076,
   0.06589668,
   0.0641917,
   0.06402773,
   0.07049242,
   0.08078533,
   0.07626638,
   0.05895869,
   0.04515202,
   0.0595785,
   0.01358762};
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
   0.05288724,
   0.01769138,
   0.01014396,
   0.008331621,
   0.007649837,
   0.00728629,
   0.007362272,
   0.00779578,
   0.008424826,
   0.008325287,
   0.01944704};
   TGraphErrors *gre = new TGraphErrors(11,S12S18_trackReco_fx1015,S12S18_trackReco_fy1015,S12S18_trackReco_fex1015,S12S18_trackReco_fey1015);
   gre->SetName("S12S18_trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_trackReco1015 = new TH1F("Graph_S12S18_trackReco1015","",100,218.3762,3021.12);
   Graph_S12S18_trackReco1015->SetMinimum(-0.02);
   Graph_S12S18_trackReco1015->SetMaximum(0.13);
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
   DilutionFunc1016->SetSavedPoint(0,0.07427228);
   DilutionFunc1016->SetSavedPoint(1,0.07419022);
   DilutionFunc1016->SetSavedPoint(2,0.07410584);
   DilutionFunc1016->SetSavedPoint(3,0.07401913);
   DilutionFunc1016->SetSavedPoint(4,0.07393008);
   DilutionFunc1016->SetSavedPoint(5,0.07383868);
   DilutionFunc1016->SetSavedPoint(6,0.07374493);
   DilutionFunc1016->SetSavedPoint(7,0.07364881);
   DilutionFunc1016->SetSavedPoint(8,0.07355032);
   DilutionFunc1016->SetSavedPoint(9,0.07344944);
   DilutionFunc1016->SetSavedPoint(10,0.07334618);
   DilutionFunc1016->SetSavedPoint(11,0.07324051);
   DilutionFunc1016->SetSavedPoint(12,0.07313244);
   DilutionFunc1016->SetSavedPoint(13,0.07302196);
   DilutionFunc1016->SetSavedPoint(14,0.07290905);
   DilutionFunc1016->SetSavedPoint(15,0.07279371);
   DilutionFunc1016->SetSavedPoint(16,0.07267593);
   DilutionFunc1016->SetSavedPoint(17,0.0725557);
   DilutionFunc1016->SetSavedPoint(18,0.07243301);
   DilutionFunc1016->SetSavedPoint(19,0.07230785);
   DilutionFunc1016->SetSavedPoint(20,0.07218023);
   DilutionFunc1016->SetSavedPoint(21,0.07205012);
   DilutionFunc1016->SetSavedPoint(22,0.07191752);
   DilutionFunc1016->SetSavedPoint(23,0.07178242);
   DilutionFunc1016->SetSavedPoint(24,0.07164481);
   DilutionFunc1016->SetSavedPoint(25,0.07150469);
   DilutionFunc1016->SetSavedPoint(26,0.07136204);
   DilutionFunc1016->SetSavedPoint(27,0.07121686);
   DilutionFunc1016->SetSavedPoint(28,0.07106914);
   DilutionFunc1016->SetSavedPoint(29,0.07091887);
   DilutionFunc1016->SetSavedPoint(30,0.07076604);
   DilutionFunc1016->SetSavedPoint(31,0.07061064);
   DilutionFunc1016->SetSavedPoint(32,0.07045267);
   DilutionFunc1016->SetSavedPoint(33,0.07029212);
   DilutionFunc1016->SetSavedPoint(34,0.07012898);
   DilutionFunc1016->SetSavedPoint(35,0.06996323);
   DilutionFunc1016->SetSavedPoint(36,0.06979488);
   DilutionFunc1016->SetSavedPoint(37,0.06962391);
   DilutionFunc1016->SetSavedPoint(38,0.06945032);
   DilutionFunc1016->SetSavedPoint(39,0.06927409);
   DilutionFunc1016->SetSavedPoint(40,0.06909522);
   DilutionFunc1016->SetSavedPoint(41,0.0689137);
   DilutionFunc1016->SetSavedPoint(42,0.06872952);
   DilutionFunc1016->SetSavedPoint(43,0.06854268);
   DilutionFunc1016->SetSavedPoint(44,0.06835316);
   DilutionFunc1016->SetSavedPoint(45,0.06816096);
   DilutionFunc1016->SetSavedPoint(46,0.06796606);
   DilutionFunc1016->SetSavedPoint(47,0.06776846);
   DilutionFunc1016->SetSavedPoint(48,0.06756816);
   DilutionFunc1016->SetSavedPoint(49,0.06736513);
   DilutionFunc1016->SetSavedPoint(50,0.06715939);
   DilutionFunc1016->SetSavedPoint(51,0.0669509);
   DilutionFunc1016->SetSavedPoint(52,0.06673968);
   DilutionFunc1016->SetSavedPoint(53,0.0665257);
   DilutionFunc1016->SetSavedPoint(54,0.06630897);
   DilutionFunc1016->SetSavedPoint(55,0.06608946);
   DilutionFunc1016->SetSavedPoint(56,0.06586718);
   DilutionFunc1016->SetSavedPoint(57,0.06564212);
   DilutionFunc1016->SetSavedPoint(58,0.06541426);
   DilutionFunc1016->SetSavedPoint(59,0.06518361);
   DilutionFunc1016->SetSavedPoint(60,0.06495014);
   DilutionFunc1016->SetSavedPoint(61,0.06471385);
   DilutionFunc1016->SetSavedPoint(62,0.06447474);
   DilutionFunc1016->SetSavedPoint(63,0.06423279);
   DilutionFunc1016->SetSavedPoint(64,0.063988);
   DilutionFunc1016->SetSavedPoint(65,0.06374036);
   DilutionFunc1016->SetSavedPoint(66,0.06348986);
   DilutionFunc1016->SetSavedPoint(67,0.06323649);
   DilutionFunc1016->SetSavedPoint(68,0.06298025);
   DilutionFunc1016->SetSavedPoint(69,0.06272112);
   DilutionFunc1016->SetSavedPoint(70,0.06245909);
   DilutionFunc1016->SetSavedPoint(71,0.06219416);
   DilutionFunc1016->SetSavedPoint(72,0.06192633);
   DilutionFunc1016->SetSavedPoint(73,0.06165557);
   DilutionFunc1016->SetSavedPoint(74,0.06138189);
   DilutionFunc1016->SetSavedPoint(75,0.06110527);
   DilutionFunc1016->SetSavedPoint(76,0.06082571);
   DilutionFunc1016->SetSavedPoint(77,0.06054319);
   DilutionFunc1016->SetSavedPoint(78,0.06025772);
   DilutionFunc1016->SetSavedPoint(79,0.05996927);
   DilutionFunc1016->SetSavedPoint(80,0.05967785);
   DilutionFunc1016->SetSavedPoint(81,0.05938344);
   DilutionFunc1016->SetSavedPoint(82,0.05908604);
   DilutionFunc1016->SetSavedPoint(83,0.05878564);
   DilutionFunc1016->SetSavedPoint(84,0.05848222);
   DilutionFunc1016->SetSavedPoint(85,0.05817579);
   DilutionFunc1016->SetSavedPoint(86,0.05786633);
   DilutionFunc1016->SetSavedPoint(87,0.05755383);
   DilutionFunc1016->SetSavedPoint(88,0.05723829);
   DilutionFunc1016->SetSavedPoint(89,0.05691969);
   DilutionFunc1016->SetSavedPoint(90,0.05659803);
   DilutionFunc1016->SetSavedPoint(91,0.05627331);
   DilutionFunc1016->SetSavedPoint(92,0.0559455);
   DilutionFunc1016->SetSavedPoint(93,0.05561461);
   DilutionFunc1016->SetSavedPoint(94,0.05528062);
   DilutionFunc1016->SetSavedPoint(95,0.05494353);
   DilutionFunc1016->SetSavedPoint(96,0.05460333);
   DilutionFunc1016->SetSavedPoint(97,0.05426001);
   DilutionFunc1016->SetSavedPoint(98,0.05391356);
   DilutionFunc1016->SetSavedPoint(99,0.05356397);
   DilutionFunc1016->SetSavedPoint(100,0.05321124);
   DilutionFunc1016->SetSavedPoint(101,750);
   DilutionFunc1016->SetSavedPoint(102,2750);
   DilutionFunc1016->SetFillColor(19);
   DilutionFunc1016->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1016->SetLineColor(ci);
   DilutionFunc1016->SetLineWidth(3);
   DilutionFunc1016->SetChisquare(10.10967);
   DilutionFunc1016->SetNDF(6);
   DilutionFunc1016->GetXaxis()->SetLabelFont(42);
   DilutionFunc1016->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1016->GetXaxis()->SetTitleFont(42);
   DilutionFunc1016->GetYaxis()->SetLabelFont(42);
   DilutionFunc1016->GetYaxis()->SetTitleFont(42);
   DilutionFunc1016->SetParameter(0,0.07575223);
   DilutionFunc1016->SetParError(0,0.005625511);
   DilutionFunc1016->SetParLimits(0,0,0);
   DilutionFunc1016->SetParameter(1,-0.000104883);
   DilutionFunc1016->SetParError(1,2.137562e-05);
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
   DilutionFunc1017->SetSavedPoint(0,0.07427228);
   DilutionFunc1017->SetSavedPoint(1,0.07419022);
   DilutionFunc1017->SetSavedPoint(2,0.07410584);
   DilutionFunc1017->SetSavedPoint(3,0.07401913);
   DilutionFunc1017->SetSavedPoint(4,0.07393008);
   DilutionFunc1017->SetSavedPoint(5,0.07383868);
   DilutionFunc1017->SetSavedPoint(6,0.07374493);
   DilutionFunc1017->SetSavedPoint(7,0.07364881);
   DilutionFunc1017->SetSavedPoint(8,0.07355032);
   DilutionFunc1017->SetSavedPoint(9,0.07344944);
   DilutionFunc1017->SetSavedPoint(10,0.07334618);
   DilutionFunc1017->SetSavedPoint(11,0.07324051);
   DilutionFunc1017->SetSavedPoint(12,0.07313244);
   DilutionFunc1017->SetSavedPoint(13,0.07302196);
   DilutionFunc1017->SetSavedPoint(14,0.07290905);
   DilutionFunc1017->SetSavedPoint(15,0.07279371);
   DilutionFunc1017->SetSavedPoint(16,0.07267593);
   DilutionFunc1017->SetSavedPoint(17,0.0725557);
   DilutionFunc1017->SetSavedPoint(18,0.07243301);
   DilutionFunc1017->SetSavedPoint(19,0.07230785);
   DilutionFunc1017->SetSavedPoint(20,0.07218023);
   DilutionFunc1017->SetSavedPoint(21,0.07205012);
   DilutionFunc1017->SetSavedPoint(22,0.07191752);
   DilutionFunc1017->SetSavedPoint(23,0.07178242);
   DilutionFunc1017->SetSavedPoint(24,0.07164481);
   DilutionFunc1017->SetSavedPoint(25,0.07150469);
   DilutionFunc1017->SetSavedPoint(26,0.07136204);
   DilutionFunc1017->SetSavedPoint(27,0.07121686);
   DilutionFunc1017->SetSavedPoint(28,0.07106914);
   DilutionFunc1017->SetSavedPoint(29,0.07091887);
   DilutionFunc1017->SetSavedPoint(30,0.07076604);
   DilutionFunc1017->SetSavedPoint(31,0.07061064);
   DilutionFunc1017->SetSavedPoint(32,0.07045267);
   DilutionFunc1017->SetSavedPoint(33,0.07029212);
   DilutionFunc1017->SetSavedPoint(34,0.07012898);
   DilutionFunc1017->SetSavedPoint(35,0.06996323);
   DilutionFunc1017->SetSavedPoint(36,0.06979488);
   DilutionFunc1017->SetSavedPoint(37,0.06962391);
   DilutionFunc1017->SetSavedPoint(38,0.06945032);
   DilutionFunc1017->SetSavedPoint(39,0.06927409);
   DilutionFunc1017->SetSavedPoint(40,0.06909522);
   DilutionFunc1017->SetSavedPoint(41,0.0689137);
   DilutionFunc1017->SetSavedPoint(42,0.06872952);
   DilutionFunc1017->SetSavedPoint(43,0.06854268);
   DilutionFunc1017->SetSavedPoint(44,0.06835316);
   DilutionFunc1017->SetSavedPoint(45,0.06816096);
   DilutionFunc1017->SetSavedPoint(46,0.06796606);
   DilutionFunc1017->SetSavedPoint(47,0.06776846);
   DilutionFunc1017->SetSavedPoint(48,0.06756816);
   DilutionFunc1017->SetSavedPoint(49,0.06736513);
   DilutionFunc1017->SetSavedPoint(50,0.06715939);
   DilutionFunc1017->SetSavedPoint(51,0.0669509);
   DilutionFunc1017->SetSavedPoint(52,0.06673968);
   DilutionFunc1017->SetSavedPoint(53,0.0665257);
   DilutionFunc1017->SetSavedPoint(54,0.06630897);
   DilutionFunc1017->SetSavedPoint(55,0.06608946);
   DilutionFunc1017->SetSavedPoint(56,0.06586718);
   DilutionFunc1017->SetSavedPoint(57,0.06564212);
   DilutionFunc1017->SetSavedPoint(58,0.06541426);
   DilutionFunc1017->SetSavedPoint(59,0.06518361);
   DilutionFunc1017->SetSavedPoint(60,0.06495014);
   DilutionFunc1017->SetSavedPoint(61,0.06471385);
   DilutionFunc1017->SetSavedPoint(62,0.06447474);
   DilutionFunc1017->SetSavedPoint(63,0.06423279);
   DilutionFunc1017->SetSavedPoint(64,0.063988);
   DilutionFunc1017->SetSavedPoint(65,0.06374036);
   DilutionFunc1017->SetSavedPoint(66,0.06348986);
   DilutionFunc1017->SetSavedPoint(67,0.06323649);
   DilutionFunc1017->SetSavedPoint(68,0.06298025);
   DilutionFunc1017->SetSavedPoint(69,0.06272112);
   DilutionFunc1017->SetSavedPoint(70,0.06245909);
   DilutionFunc1017->SetSavedPoint(71,0.06219416);
   DilutionFunc1017->SetSavedPoint(72,0.06192633);
   DilutionFunc1017->SetSavedPoint(73,0.06165557);
   DilutionFunc1017->SetSavedPoint(74,0.06138189);
   DilutionFunc1017->SetSavedPoint(75,0.06110527);
   DilutionFunc1017->SetSavedPoint(76,0.06082571);
   DilutionFunc1017->SetSavedPoint(77,0.06054319);
   DilutionFunc1017->SetSavedPoint(78,0.06025772);
   DilutionFunc1017->SetSavedPoint(79,0.05996927);
   DilutionFunc1017->SetSavedPoint(80,0.05967785);
   DilutionFunc1017->SetSavedPoint(81,0.05938344);
   DilutionFunc1017->SetSavedPoint(82,0.05908604);
   DilutionFunc1017->SetSavedPoint(83,0.05878564);
   DilutionFunc1017->SetSavedPoint(84,0.05848222);
   DilutionFunc1017->SetSavedPoint(85,0.05817579);
   DilutionFunc1017->SetSavedPoint(86,0.05786633);
   DilutionFunc1017->SetSavedPoint(87,0.05755383);
   DilutionFunc1017->SetSavedPoint(88,0.05723829);
   DilutionFunc1017->SetSavedPoint(89,0.05691969);
   DilutionFunc1017->SetSavedPoint(90,0.05659803);
   DilutionFunc1017->SetSavedPoint(91,0.05627331);
   DilutionFunc1017->SetSavedPoint(92,0.0559455);
   DilutionFunc1017->SetSavedPoint(93,0.05561461);
   DilutionFunc1017->SetSavedPoint(94,0.05528062);
   DilutionFunc1017->SetSavedPoint(95,0.05494353);
   DilutionFunc1017->SetSavedPoint(96,0.05460333);
   DilutionFunc1017->SetSavedPoint(97,0.05426001);
   DilutionFunc1017->SetSavedPoint(98,0.05391356);
   DilutionFunc1017->SetSavedPoint(99,0.05356397);
   DilutionFunc1017->SetSavedPoint(100,0.05321124);
   DilutionFunc1017->SetSavedPoint(101,750);
   DilutionFunc1017->SetSavedPoint(102,2750);
   DilutionFunc1017->SetFillColor(19);
   DilutionFunc1017->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1017->SetLineColor(ci);
   DilutionFunc1017->SetLineWidth(3);
   DilutionFunc1017->SetChisquare(10.10967);
   DilutionFunc1017->SetNDF(6);
   DilutionFunc1017->GetXaxis()->SetLabelFont(42);
   DilutionFunc1017->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1017->GetXaxis()->SetTitleFont(42);
   DilutionFunc1017->GetYaxis()->SetLabelFont(42);
   DilutionFunc1017->GetYaxis()->SetTitleFont(42);
   DilutionFunc1017->SetParameter(0,0.07575223);
   DilutionFunc1017->SetParError(0,0.005625511);
   DilutionFunc1017->SetParLimits(0,0,0);
   DilutionFunc1017->SetParameter(1,-0.000104883);
   DilutionFunc1017->SetParError(1,2.137562e-05);
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
   pt_LaTex = pt->AddText("1.68
");
   pt_LaTex = pt->AddText("0.08
#pm0.006
");
   pt_LaTex = pt->AddText("-0.0001
#pm2e-05
");
   pt->Draw();
   S12S18->Modified();
   S12S18->cd();
   S12S18->SetSelected(S12S18);
}
