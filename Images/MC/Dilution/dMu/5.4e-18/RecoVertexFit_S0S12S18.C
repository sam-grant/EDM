void RecoVertexFit_S0S12S18()
{
//=========Macro generated from canvas: S0S12S18/c
//=========  (Thu Feb  3 13:23:11 2022) by ROOT version 6.24/06
   TCanvas *S0S12S18 = new TCanvas("S0S12S18", "c",0,0,800,600);
   S0S12S18->SetHighLightColor(2);
   S0S12S18->Range(467.0454,-0.015,3025.337,0.135);
   S0S12S18->SetFillColor(0);
   S0S12S18->SetBorderMode(0);
   S0S12S18->SetBorderSize(2);
   S0S12S18->SetFrameBorderMode(0);
   S0S12S18->SetFrameBorderMode(0);
   
   Double_t S0S12S18_trackReco_fx1019[11] = {
   451.8592,
   653.3031,
   880.3064,
   1123.077,
   1371.079,
   1620.197,
   1866.983,
   2115.419,
   2362.996,
   2613.822,
   2788.198};
   Double_t S0S12S18_trackReco_fy1019[11] = {
   0.01077999,
   0.07617128,
   0.06456952,
   0.06444563,
   0.0756173,
   0.08247464,
   0.06920049,
   0.05982219,
   0.03669315,
   0.05222194,
   0.00656032};
   Double_t S0S12S18_trackReco_fex1019[11] = {
   0,
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
   Double_t S0S12S18_trackReco_fey1019[11] = {
   0.05192708,
   0.01739844,
   0.00999607,
   0.008210948,
   0.007529262,
   0.007168123,
   0.007193737,
   0.00754926,
   0.008061344,
   0.00798505,
   0.01817734};
   TGraphErrors *gre = new TGraphErrors(11,S0S12S18_trackReco_fx1019,S0S12S18_trackReco_fy1019,S0S12S18_trackReco_fex1019,S0S12S18_trackReco_fey1019);
   gre->SetName("S0S12S18_trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_trackReco1019 = new TH1F("Graph_S0S12S18_trackReco1019","",100,218.2253,3021.832);
   Graph_S0S12S18_trackReco1019->SetMinimum(0);
   Graph_S0S12S18_trackReco1019->SetMaximum(0.12);
   Graph_S0S12S18_trackReco1019->SetDirectory(0);
   Graph_S0S12S18_trackReco1019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_trackReco1019->SetLineColor(ci);
   Graph_S0S12S18_trackReco1019->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0S12S18_trackReco1019->GetXaxis()->SetRange(19,91);
   Graph_S0S12S18_trackReco1019->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_trackReco1019->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackReco1019->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_trackReco1019->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_trackReco1019->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_trackReco1019->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S0S12S18_trackReco1019->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_trackReco1019->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_trackReco1019->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackReco1019->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_trackReco1019->GetYaxis()->SetTitleOffset(1.25);
   Graph_S0S12S18_trackReco1019->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_trackReco1019->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackReco1019->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_trackReco1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_trackReco1019);
   
   
   TF1 *ParabolaFunc1020 = new TF1("*ParabolaFunc",750,2750,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2750,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1020->SetRange(750,2750);
   ParabolaFunc1020->SetName("ParabolaFunc");
   ParabolaFunc1020->SetTitle("ParabolaFunc");
   ParabolaFunc1020->SetSavedPoint(0,0.06097518);
   ParabolaFunc1020->SetSavedPoint(1,0.06166556);
   ParabolaFunc1020->SetSavedPoint(2,0.06233625);
   ParabolaFunc1020->SetSavedPoint(3,0.06298725);
   ParabolaFunc1020->SetSavedPoint(4,0.06361855);
   ParabolaFunc1020->SetSavedPoint(5,0.06423015);
   ParabolaFunc1020->SetSavedPoint(6,0.06482207);
   ParabolaFunc1020->SetSavedPoint(7,0.06539429);
   ParabolaFunc1020->SetSavedPoint(8,0.06594681);
   ParabolaFunc1020->SetSavedPoint(9,0.06647964);
   ParabolaFunc1020->SetSavedPoint(10,0.06699278);
   ParabolaFunc1020->SetSavedPoint(11,0.06748622);
   ParabolaFunc1020->SetSavedPoint(12,0.06795997);
   ParabolaFunc1020->SetSavedPoint(13,0.06841402);
   ParabolaFunc1020->SetSavedPoint(14,0.06884838);
   ParabolaFunc1020->SetSavedPoint(15,0.06926305);
   ParabolaFunc1020->SetSavedPoint(16,0.06965802);
   ParabolaFunc1020->SetSavedPoint(17,0.0700333);
   ParabolaFunc1020->SetSavedPoint(18,0.07038888);
   ParabolaFunc1020->SetSavedPoint(19,0.07072477);
   ParabolaFunc1020->SetSavedPoint(20,0.07104096);
   ParabolaFunc1020->SetSavedPoint(21,0.07133747);
   ParabolaFunc1020->SetSavedPoint(22,0.07161427);
   ParabolaFunc1020->SetSavedPoint(23,0.07187139);
   ParabolaFunc1020->SetSavedPoint(24,0.0721088);
   ParabolaFunc1020->SetSavedPoint(25,0.07232653);
   ParabolaFunc1020->SetSavedPoint(26,0.07252456);
   ParabolaFunc1020->SetSavedPoint(27,0.0727029);
   ParabolaFunc1020->SetSavedPoint(28,0.07286154);
   ParabolaFunc1020->SetSavedPoint(29,0.07300049);
   ParabolaFunc1020->SetSavedPoint(30,0.07311974);
   ParabolaFunc1020->SetSavedPoint(31,0.0732193);
   ParabolaFunc1020->SetSavedPoint(32,0.07329917);
   ParabolaFunc1020->SetSavedPoint(33,0.07335934);
   ParabolaFunc1020->SetSavedPoint(34,0.07339982);
   ParabolaFunc1020->SetSavedPoint(35,0.0734206);
   ParabolaFunc1020->SetSavedPoint(36,0.07342169);
   ParabolaFunc1020->SetSavedPoint(37,0.07340309);
   ParabolaFunc1020->SetSavedPoint(38,0.07336479);
   ParabolaFunc1020->SetSavedPoint(39,0.07330679);
   ParabolaFunc1020->SetSavedPoint(40,0.07322911);
   ParabolaFunc1020->SetSavedPoint(41,0.07313173);
   ParabolaFunc1020->SetSavedPoint(42,0.07301465);
   ParabolaFunc1020->SetSavedPoint(43,0.07287788);
   ParabolaFunc1020->SetSavedPoint(44,0.07272142);
   ParabolaFunc1020->SetSavedPoint(45,0.07254526);
   ParabolaFunc1020->SetSavedPoint(46,0.07234941);
   ParabolaFunc1020->SetSavedPoint(47,0.07213386);
   ParabolaFunc1020->SetSavedPoint(48,0.07189863);
   ParabolaFunc1020->SetSavedPoint(49,0.07164369);
   ParabolaFunc1020->SetSavedPoint(50,0.07136906);
   ParabolaFunc1020->SetSavedPoint(51,0.07107474);
   ParabolaFunc1020->SetSavedPoint(52,0.07076073);
   ParabolaFunc1020->SetSavedPoint(53,0.07042702);
   ParabolaFunc1020->SetSavedPoint(54,0.07007361);
   ParabolaFunc1020->SetSavedPoint(55,0.06970051);
   ParabolaFunc1020->SetSavedPoint(56,0.06930772);
   ParabolaFunc1020->SetSavedPoint(57,0.06889523);
   ParabolaFunc1020->SetSavedPoint(58,0.06846305);
   ParabolaFunc1020->SetSavedPoint(59,0.06801118);
   ParabolaFunc1020->SetSavedPoint(60,0.06753961);
   ParabolaFunc1020->SetSavedPoint(61,0.06704835);
   ParabolaFunc1020->SetSavedPoint(62,0.06653739);
   ParabolaFunc1020->SetSavedPoint(63,0.06600674);
   ParabolaFunc1020->SetSavedPoint(64,0.06545639);
   ParabolaFunc1020->SetSavedPoint(65,0.06488635);
   ParabolaFunc1020->SetSavedPoint(66,0.06429662);
   ParabolaFunc1020->SetSavedPoint(67,0.06368719);
   ParabolaFunc1020->SetSavedPoint(68,0.06305807);
   ParabolaFunc1020->SetSavedPoint(69,0.06240925);
   ParabolaFunc1020->SetSavedPoint(70,0.06174074);
   ParabolaFunc1020->SetSavedPoint(71,0.06105254);
   ParabolaFunc1020->SetSavedPoint(72,0.06034464);
   ParabolaFunc1020->SetSavedPoint(73,0.05961705);
   ParabolaFunc1020->SetSavedPoint(74,0.05886976);
   ParabolaFunc1020->SetSavedPoint(75,0.05810278);
   ParabolaFunc1020->SetSavedPoint(76,0.05731611);
   ParabolaFunc1020->SetSavedPoint(77,0.05650974);
   ParabolaFunc1020->SetSavedPoint(78,0.05568367);
   ParabolaFunc1020->SetSavedPoint(79,0.05483792);
   ParabolaFunc1020->SetSavedPoint(80,0.05397247);
   ParabolaFunc1020->SetSavedPoint(81,0.05308732);
   ParabolaFunc1020->SetSavedPoint(82,0.05218248);
   ParabolaFunc1020->SetSavedPoint(83,0.05125795);
   ParabolaFunc1020->SetSavedPoint(84,0.05031372);
   ParabolaFunc1020->SetSavedPoint(85,0.0493498);
   ParabolaFunc1020->SetSavedPoint(86,0.04836618);
   ParabolaFunc1020->SetSavedPoint(87,0.04736287);
   ParabolaFunc1020->SetSavedPoint(88,0.04633987);
   ParabolaFunc1020->SetSavedPoint(89,0.04529717);
   ParabolaFunc1020->SetSavedPoint(90,0.04423478);
   ParabolaFunc1020->SetSavedPoint(91,0.04315269);
   ParabolaFunc1020->SetSavedPoint(92,0.04205091);
   ParabolaFunc1020->SetSavedPoint(93,0.04092944);
   ParabolaFunc1020->SetSavedPoint(94,0.03978827);
   ParabolaFunc1020->SetSavedPoint(95,0.03862741);
   ParabolaFunc1020->SetSavedPoint(96,0.03744685);
   ParabolaFunc1020->SetSavedPoint(97,0.0362466);
   ParabolaFunc1020->SetSavedPoint(98,0.03502665);
   ParabolaFunc1020->SetSavedPoint(99,0.03378701);
   ParabolaFunc1020->SetSavedPoint(100,0.03252768);
   ParabolaFunc1020->SetSavedPoint(101,750);
   ParabolaFunc1020->SetSavedPoint(102,2750);
   ParabolaFunc1020->SetFillColor(19);
   ParabolaFunc1020->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1020->SetLineColor(ci);
   ParabolaFunc1020->SetLineWidth(3);
   ParabolaFunc1020->SetChisquare(9.026573);
   ParabolaFunc1020->SetNDF(5);
   ParabolaFunc1020->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1020->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1020->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1020->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1020->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1020->SetParameter(0,-2.461763e-08);
   ParabolaFunc1020->SetParError(0,1.036052e-08);
   ParabolaFunc1020->SetParLimits(0,0,0);
   ParabolaFunc1020->SetParameter(1,7.193797e-05);
   ParabolaFunc1020->SetParError(1,3.722371e-05);
   ParabolaFunc1020->SetParLimits(1,0,0);
   ParabolaFunc1020->SetParameter(2,0.02086912);
   ParabolaFunc1020->SetParError(2,0.03143976);
   ParabolaFunc1020->SetParLimits(2,0,0);
   ParabolaFunc1020->SetParent(gre);
   gre->GetListOfFunctions()->Add(ParabolaFunc1020);
   gre->Draw("ap");
   
   TF1 *ParabolaFunc1021 = new TF1("*ParabolaFunc",750,2750,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2750,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1021->SetRange(750,2750);
   ParabolaFunc1021->SetName("ParabolaFunc");
   ParabolaFunc1021->SetTitle("ParabolaFunc");
   ParabolaFunc1021->SetSavedPoint(0,0.06097518);
   ParabolaFunc1021->SetSavedPoint(1,0.06166556);
   ParabolaFunc1021->SetSavedPoint(2,0.06233625);
   ParabolaFunc1021->SetSavedPoint(3,0.06298725);
   ParabolaFunc1021->SetSavedPoint(4,0.06361855);
   ParabolaFunc1021->SetSavedPoint(5,0.06423015);
   ParabolaFunc1021->SetSavedPoint(6,0.06482207);
   ParabolaFunc1021->SetSavedPoint(7,0.06539429);
   ParabolaFunc1021->SetSavedPoint(8,0.06594681);
   ParabolaFunc1021->SetSavedPoint(9,0.06647964);
   ParabolaFunc1021->SetSavedPoint(10,0.06699278);
   ParabolaFunc1021->SetSavedPoint(11,0.06748622);
   ParabolaFunc1021->SetSavedPoint(12,0.06795997);
   ParabolaFunc1021->SetSavedPoint(13,0.06841402);
   ParabolaFunc1021->SetSavedPoint(14,0.06884838);
   ParabolaFunc1021->SetSavedPoint(15,0.06926305);
   ParabolaFunc1021->SetSavedPoint(16,0.06965802);
   ParabolaFunc1021->SetSavedPoint(17,0.0700333);
   ParabolaFunc1021->SetSavedPoint(18,0.07038888);
   ParabolaFunc1021->SetSavedPoint(19,0.07072477);
   ParabolaFunc1021->SetSavedPoint(20,0.07104096);
   ParabolaFunc1021->SetSavedPoint(21,0.07133747);
   ParabolaFunc1021->SetSavedPoint(22,0.07161427);
   ParabolaFunc1021->SetSavedPoint(23,0.07187139);
   ParabolaFunc1021->SetSavedPoint(24,0.0721088);
   ParabolaFunc1021->SetSavedPoint(25,0.07232653);
   ParabolaFunc1021->SetSavedPoint(26,0.07252456);
   ParabolaFunc1021->SetSavedPoint(27,0.0727029);
   ParabolaFunc1021->SetSavedPoint(28,0.07286154);
   ParabolaFunc1021->SetSavedPoint(29,0.07300049);
   ParabolaFunc1021->SetSavedPoint(30,0.07311974);
   ParabolaFunc1021->SetSavedPoint(31,0.0732193);
   ParabolaFunc1021->SetSavedPoint(32,0.07329917);
   ParabolaFunc1021->SetSavedPoint(33,0.07335934);
   ParabolaFunc1021->SetSavedPoint(34,0.07339982);
   ParabolaFunc1021->SetSavedPoint(35,0.0734206);
   ParabolaFunc1021->SetSavedPoint(36,0.07342169);
   ParabolaFunc1021->SetSavedPoint(37,0.07340309);
   ParabolaFunc1021->SetSavedPoint(38,0.07336479);
   ParabolaFunc1021->SetSavedPoint(39,0.07330679);
   ParabolaFunc1021->SetSavedPoint(40,0.07322911);
   ParabolaFunc1021->SetSavedPoint(41,0.07313173);
   ParabolaFunc1021->SetSavedPoint(42,0.07301465);
   ParabolaFunc1021->SetSavedPoint(43,0.07287788);
   ParabolaFunc1021->SetSavedPoint(44,0.07272142);
   ParabolaFunc1021->SetSavedPoint(45,0.07254526);
   ParabolaFunc1021->SetSavedPoint(46,0.07234941);
   ParabolaFunc1021->SetSavedPoint(47,0.07213386);
   ParabolaFunc1021->SetSavedPoint(48,0.07189863);
   ParabolaFunc1021->SetSavedPoint(49,0.07164369);
   ParabolaFunc1021->SetSavedPoint(50,0.07136906);
   ParabolaFunc1021->SetSavedPoint(51,0.07107474);
   ParabolaFunc1021->SetSavedPoint(52,0.07076073);
   ParabolaFunc1021->SetSavedPoint(53,0.07042702);
   ParabolaFunc1021->SetSavedPoint(54,0.07007361);
   ParabolaFunc1021->SetSavedPoint(55,0.06970051);
   ParabolaFunc1021->SetSavedPoint(56,0.06930772);
   ParabolaFunc1021->SetSavedPoint(57,0.06889523);
   ParabolaFunc1021->SetSavedPoint(58,0.06846305);
   ParabolaFunc1021->SetSavedPoint(59,0.06801118);
   ParabolaFunc1021->SetSavedPoint(60,0.06753961);
   ParabolaFunc1021->SetSavedPoint(61,0.06704835);
   ParabolaFunc1021->SetSavedPoint(62,0.06653739);
   ParabolaFunc1021->SetSavedPoint(63,0.06600674);
   ParabolaFunc1021->SetSavedPoint(64,0.06545639);
   ParabolaFunc1021->SetSavedPoint(65,0.06488635);
   ParabolaFunc1021->SetSavedPoint(66,0.06429662);
   ParabolaFunc1021->SetSavedPoint(67,0.06368719);
   ParabolaFunc1021->SetSavedPoint(68,0.06305807);
   ParabolaFunc1021->SetSavedPoint(69,0.06240925);
   ParabolaFunc1021->SetSavedPoint(70,0.06174074);
   ParabolaFunc1021->SetSavedPoint(71,0.06105254);
   ParabolaFunc1021->SetSavedPoint(72,0.06034464);
   ParabolaFunc1021->SetSavedPoint(73,0.05961705);
   ParabolaFunc1021->SetSavedPoint(74,0.05886976);
   ParabolaFunc1021->SetSavedPoint(75,0.05810278);
   ParabolaFunc1021->SetSavedPoint(76,0.05731611);
   ParabolaFunc1021->SetSavedPoint(77,0.05650974);
   ParabolaFunc1021->SetSavedPoint(78,0.05568367);
   ParabolaFunc1021->SetSavedPoint(79,0.05483792);
   ParabolaFunc1021->SetSavedPoint(80,0.05397247);
   ParabolaFunc1021->SetSavedPoint(81,0.05308732);
   ParabolaFunc1021->SetSavedPoint(82,0.05218248);
   ParabolaFunc1021->SetSavedPoint(83,0.05125795);
   ParabolaFunc1021->SetSavedPoint(84,0.05031372);
   ParabolaFunc1021->SetSavedPoint(85,0.0493498);
   ParabolaFunc1021->SetSavedPoint(86,0.04836618);
   ParabolaFunc1021->SetSavedPoint(87,0.04736287);
   ParabolaFunc1021->SetSavedPoint(88,0.04633987);
   ParabolaFunc1021->SetSavedPoint(89,0.04529717);
   ParabolaFunc1021->SetSavedPoint(90,0.04423478);
   ParabolaFunc1021->SetSavedPoint(91,0.04315269);
   ParabolaFunc1021->SetSavedPoint(92,0.04205091);
   ParabolaFunc1021->SetSavedPoint(93,0.04092944);
   ParabolaFunc1021->SetSavedPoint(94,0.03978827);
   ParabolaFunc1021->SetSavedPoint(95,0.03862741);
   ParabolaFunc1021->SetSavedPoint(96,0.03744685);
   ParabolaFunc1021->SetSavedPoint(97,0.0362466);
   ParabolaFunc1021->SetSavedPoint(98,0.03502665);
   ParabolaFunc1021->SetSavedPoint(99,0.03378701);
   ParabolaFunc1021->SetSavedPoint(100,0.03252768);
   ParabolaFunc1021->SetSavedPoint(101,750);
   ParabolaFunc1021->SetSavedPoint(102,2750);
   ParabolaFunc1021->SetFillColor(19);
   ParabolaFunc1021->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1021->SetLineColor(ci);
   ParabolaFunc1021->SetLineWidth(3);
   ParabolaFunc1021->SetChisquare(9.026573);
   ParabolaFunc1021->SetNDF(5);
   ParabolaFunc1021->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1021->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1021->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1021->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1021->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1021->SetParameter(0,-2.461763e-08);
   ParabolaFunc1021->SetParError(0,1.036052e-08);
   ParabolaFunc1021->SetParLimits(0,0,0);
   ParabolaFunc1021->SetParameter(1,7.193797e-05);
   ParabolaFunc1021->SetParError(1,3.722371e-05);
   ParabolaFunc1021->SetParLimits(1,0,0);
   ParabolaFunc1021->SetParameter(2,0.02086912);
   ParabolaFunc1021->SetParError(2,0.03143976);
   ParabolaFunc1021->SetParLimits(2,0,0);
   ParabolaFunc1021->Draw("SAME");
   
   TLegend *leg = new TLegend(0.125,0.79,0.875,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0S12S18_trackReco","Sim: reco vertices","lpf");
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
   pt_LaTex = pt->AddText("1.81
");
   pt_LaTex = pt->AddText("(-2#pm1)#times10^{-8}");
   pt_LaTex = pt->AddText("(7#pm4)#times10^{-5}");
   pt_LaTex = pt->AddText("0.02#pm0.03");
   pt->Draw();
   S0S12S18->Modified();
   S0S12S18->cd();
   S0S12S18->SetSelected(S0S12S18);
}
