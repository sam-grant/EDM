void RecoVertexFit_S0S12S18()
{
//=========Macro generated from canvas: S0S12S18/c
//=========  (Tue Feb 22 00:54:07 2022) by ROOT version 6.24/06
   TCanvas *S0S12S18 = new TCanvas("S0S12S18", "c",0,0,800,600);
   S0S12S18->SetHighLightColor(2);
   S0S12S18->Range(467.0302,-0.0425,3025.254,0.1825);
   S0S12S18->SetFillColor(0);
   S0S12S18->SetBorderMode(0);
   S0S12S18->SetBorderSize(2);
   S0S12S18->SetFrameBorderMode(0);
   S0S12S18->SetFrameBorderMode(0);
   
   Double_t S0S12S18_trackReco_fx1019[11] = {
   451.8445,
   653.3043,
   880.3432,
   1123.073,
   1371.072,
   1620.188,
   1866.987,
   2115.41,
   2363.046,
   2613.742,
   2788.122};
   Double_t S0S12S18_trackReco_fy1019[11] = {
   -0.147276,
   0.07545649,
   0.08476478,
   0.1017123,
   0.1117628,
   0.1120739,
   0.08709666,
   0.07055712,
   0.04861422,
   0.05481656,
   -0.004896646};
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
   0.07098693,
   0.0250771,
   0.01475872,
   0.01179495,
   0.01000019,
   0.008671079,
   0.008117709,
   0.008077422,
   0.008274364,
   0.00792881,
   0.01774593};
   TGraphErrors *gre = new TGraphErrors(11,S0S12S18_trackReco_fx1019,S0S12S18_trackReco_fy1019,S0S12S18_trackReco_fex1019,S0S12S18_trackReco_fey1019);
   gre->SetName("S0S12S18_trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_trackReco1019 = new TH1F("Graph_S0S12S18_trackReco1019","",100,218.2167,3021.75);
   Graph_S0S12S18_trackReco1019->SetMinimum(-0.02);
   Graph_S0S12S18_trackReco1019->SetMaximum(0.16);
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
   
   
   TF1 *DilutionFunc1020 = new TF1("*DilutionFunc",750,2750,2);
    //The original function : DilutionFunc had originally been created by:
    //TF1 *DilutionFunc = new TF1("DilutionFunc",DilutionFunc,750,2750,2, 1, TF1::EAddToList::kNo);
   DilutionFunc1020->SetRange(750,2750);
   DilutionFunc1020->SetName("DilutionFunc");
   DilutionFunc1020->SetTitle("DilutionFunc");
   DilutionFunc1020->SetSavedPoint(0,0.1155946);
   DilutionFunc1020->SetSavedPoint(1,0.1153088);
   DilutionFunc1020->SetSavedPoint(2,0.1150146);
   DilutionFunc1020->SetSavedPoint(3,0.114712);
   DilutionFunc1020->SetSavedPoint(4,0.1144011);
   DilutionFunc1020->SetSavedPoint(5,0.1140817);
   DilutionFunc1020->SetSavedPoint(6,0.1137538);
   DilutionFunc1020->SetSavedPoint(7,0.1134174);
   DilutionFunc1020->SetSavedPoint(8,0.1130724);
   DilutionFunc1020->SetSavedPoint(9,0.1127188);
   DilutionFunc1020->SetSavedPoint(10,0.1123566);
   DilutionFunc1020->SetSavedPoint(11,0.1119856);
   DilutionFunc1020->SetSavedPoint(12,0.1116059);
   DilutionFunc1020->SetSavedPoint(13,0.1112175);
   DilutionFunc1020->SetSavedPoint(14,0.1108202);
   DilutionFunc1020->SetSavedPoint(15,0.1104141);
   DilutionFunc1020->SetSavedPoint(16,0.109999);
   DilutionFunc1020->SetSavedPoint(17,0.1095751);
   DilutionFunc1020->SetSavedPoint(18,0.1091421);
   DilutionFunc1020->SetSavedPoint(19,0.1087001);
   DilutionFunc1020->SetSavedPoint(20,0.1082491);
   DilutionFunc1020->SetSavedPoint(21,0.1077889);
   DilutionFunc1020->SetSavedPoint(22,0.1073196);
   DilutionFunc1020->SetSavedPoint(23,0.1068411);
   DilutionFunc1020->SetSavedPoint(24,0.1063534);
   DilutionFunc1020->SetSavedPoint(25,0.1058564);
   DilutionFunc1020->SetSavedPoint(26,0.1053501);
   DilutionFunc1020->SetSavedPoint(27,0.1048345);
   DilutionFunc1020->SetSavedPoint(28,0.1043094);
   DilutionFunc1020->SetSavedPoint(29,0.1037749);
   DilutionFunc1020->SetSavedPoint(30,0.103231);
   DilutionFunc1020->SetSavedPoint(31,0.1026775);
   DilutionFunc1020->SetSavedPoint(32,0.1021145);
   DilutionFunc1020->SetSavedPoint(33,0.1015418);
   DilutionFunc1020->SetSavedPoint(34,0.1009596);
   DilutionFunc1020->SetSavedPoint(35,0.1003676);
   DilutionFunc1020->SetSavedPoint(36,0.09976592);
   DilutionFunc1020->SetSavedPoint(37,0.09915448);
   DilutionFunc1020->SetSavedPoint(38,0.09853323);
   DilutionFunc1020->SetSavedPoint(39,0.09790214);
   DilutionFunc1020->SetSavedPoint(40,0.09726116);
   DilutionFunc1020->SetSavedPoint(41,0.09661025);
   DilutionFunc1020->SetSavedPoint(42,0.09594937);
   DilutionFunc1020->SetSavedPoint(43,0.09527848);
   DilutionFunc1020->SetSavedPoint(44,0.09459754);
   DilutionFunc1020->SetSavedPoint(45,0.0939065);
   DilutionFunc1020->SetSavedPoint(46,0.09320533);
   DilutionFunc1020->SetSavedPoint(47,0.09249399);
   DilutionFunc1020->SetSavedPoint(48,0.09177242);
   DilutionFunc1020->SetSavedPoint(49,0.09104061);
   DilutionFunc1020->SetSavedPoint(50,0.09029849);
   DilutionFunc1020->SetSavedPoint(51,0.08954603);
   DilutionFunc1020->SetSavedPoint(52,0.08878319);
   DilutionFunc1020->SetSavedPoint(53,0.08800993);
   DilutionFunc1020->SetSavedPoint(54,0.08722621);
   DilutionFunc1020->SetSavedPoint(55,0.08643198);
   DilutionFunc1020->SetSavedPoint(56,0.08562721);
   DilutionFunc1020->SetSavedPoint(57,0.08481184);
   DilutionFunc1020->SetSavedPoint(58,0.08398586);
   DilutionFunc1020->SetSavedPoint(59,0.0831492);
   DilutionFunc1020->SetSavedPoint(60,0.08230183);
   DilutionFunc1020->SetSavedPoint(61,0.08144371);
   DilutionFunc1020->SetSavedPoint(62,0.0805748);
   DilutionFunc1020->SetSavedPoint(63,0.07969506);
   DilutionFunc1020->SetSavedPoint(64,0.07880444);
   DilutionFunc1020->SetSavedPoint(65,0.0779029);
   DilutionFunc1020->SetSavedPoint(66,0.07699041);
   DilutionFunc1020->SetSavedPoint(67,0.07606692);
   DilutionFunc1020->SetSavedPoint(68,0.07513239);
   DilutionFunc1020->SetSavedPoint(69,0.07418679);
   DilutionFunc1020->SetSavedPoint(70,0.07323006);
   DilutionFunc1020->SetSavedPoint(71,0.07226216);
   DilutionFunc1020->SetSavedPoint(72,0.07128307);
   DilutionFunc1020->SetSavedPoint(73,0.07029273);
   DilutionFunc1020->SetSavedPoint(74,0.0692911);
   DilutionFunc1020->SetSavedPoint(75,0.06827814);
   DilutionFunc1020->SetSavedPoint(76,0.06725382);
   DilutionFunc1020->SetSavedPoint(77,0.06621809);
   DilutionFunc1020->SetSavedPoint(78,0.06517091);
   DilutionFunc1020->SetSavedPoint(79,0.06411224);
   DilutionFunc1020->SetSavedPoint(80,0.06304203);
   DilutionFunc1020->SetSavedPoint(81,0.06196025);
   DilutionFunc1020->SetSavedPoint(82,0.06086685);
   DilutionFunc1020->SetSavedPoint(83,0.0597618);
   DilutionFunc1020->SetSavedPoint(84,0.05864505);
   DilutionFunc1020->SetSavedPoint(85,0.05751657);
   DilutionFunc1020->SetSavedPoint(86,0.0563763);
   DilutionFunc1020->SetSavedPoint(87,0.05522421);
   DilutionFunc1020->SetSavedPoint(88,0.05406027);
   DilutionFunc1020->SetSavedPoint(89,0.05288441);
   DilutionFunc1020->SetSavedPoint(90,0.05169662);
   DilutionFunc1020->SetSavedPoint(91,0.05049684);
   DilutionFunc1020->SetSavedPoint(92,0.04928503);
   DilutionFunc1020->SetSavedPoint(93,0.04806116);
   DilutionFunc1020->SetSavedPoint(94,0.04682517);
   DilutionFunc1020->SetSavedPoint(95,0.04557704);
   DilutionFunc1020->SetSavedPoint(96,0.04431672);
   DilutionFunc1020->SetSavedPoint(97,0.04304416);
   DilutionFunc1020->SetSavedPoint(98,0.04175934);
   DilutionFunc1020->SetSavedPoint(99,0.04046219);
   DilutionFunc1020->SetSavedPoint(100,0.0391527);
   DilutionFunc1020->SetSavedPoint(101,750);
   DilutionFunc1020->SetSavedPoint(102,2750);
   DilutionFunc1020->SetFillColor(19);
   DilutionFunc1020->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1020->SetLineColor(ci);
   DilutionFunc1020->SetLineWidth(3);
   DilutionFunc1020->SetChisquare(12.75817);
   DilutionFunc1020->SetNDF(6);
   DilutionFunc1020->GetXaxis()->SetLabelFont(42);
   DilutionFunc1020->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1020->GetXaxis()->SetTitleFont(42);
   DilutionFunc1020->GetYaxis()->SetLabelFont(42);
   DilutionFunc1020->GetYaxis()->SetTitleFont(42);
   DilutionFunc1020->SetParameter(0,0.1206958);
   DilutionFunc1020->SetParError(0,0.007006392);
   DilutionFunc1020->SetParLimits(0,0,0);
   DilutionFunc1020->SetParameter(1,-0.0001525475);
   DilutionFunc1020->SetParError(1,7.378262e-06);
   DilutionFunc1020->SetParLimits(1,0,0);
   DilutionFunc1020->SetParent(gre);
   gre->GetListOfFunctions()->Add(DilutionFunc1020);
   gre->Draw("ap");
   
   TF1 *DilutionFunc1021 = new TF1("*DilutionFunc",750,2750,2);
    //The original function : DilutionFunc had originally been created by:
    //TF1 *DilutionFunc = new TF1("DilutionFunc",DilutionFunc,750,2750,2, 1, TF1::EAddToList::kNo);
   DilutionFunc1021->SetRange(750,2750);
   DilutionFunc1021->SetName("DilutionFunc");
   DilutionFunc1021->SetTitle("DilutionFunc");
   DilutionFunc1021->SetSavedPoint(0,0.1155946);
   DilutionFunc1021->SetSavedPoint(1,0.1153088);
   DilutionFunc1021->SetSavedPoint(2,0.1150146);
   DilutionFunc1021->SetSavedPoint(3,0.114712);
   DilutionFunc1021->SetSavedPoint(4,0.1144011);
   DilutionFunc1021->SetSavedPoint(5,0.1140817);
   DilutionFunc1021->SetSavedPoint(6,0.1137538);
   DilutionFunc1021->SetSavedPoint(7,0.1134174);
   DilutionFunc1021->SetSavedPoint(8,0.1130724);
   DilutionFunc1021->SetSavedPoint(9,0.1127188);
   DilutionFunc1021->SetSavedPoint(10,0.1123566);
   DilutionFunc1021->SetSavedPoint(11,0.1119856);
   DilutionFunc1021->SetSavedPoint(12,0.1116059);
   DilutionFunc1021->SetSavedPoint(13,0.1112175);
   DilutionFunc1021->SetSavedPoint(14,0.1108202);
   DilutionFunc1021->SetSavedPoint(15,0.1104141);
   DilutionFunc1021->SetSavedPoint(16,0.109999);
   DilutionFunc1021->SetSavedPoint(17,0.1095751);
   DilutionFunc1021->SetSavedPoint(18,0.1091421);
   DilutionFunc1021->SetSavedPoint(19,0.1087001);
   DilutionFunc1021->SetSavedPoint(20,0.1082491);
   DilutionFunc1021->SetSavedPoint(21,0.1077889);
   DilutionFunc1021->SetSavedPoint(22,0.1073196);
   DilutionFunc1021->SetSavedPoint(23,0.1068411);
   DilutionFunc1021->SetSavedPoint(24,0.1063534);
   DilutionFunc1021->SetSavedPoint(25,0.1058564);
   DilutionFunc1021->SetSavedPoint(26,0.1053501);
   DilutionFunc1021->SetSavedPoint(27,0.1048345);
   DilutionFunc1021->SetSavedPoint(28,0.1043094);
   DilutionFunc1021->SetSavedPoint(29,0.1037749);
   DilutionFunc1021->SetSavedPoint(30,0.103231);
   DilutionFunc1021->SetSavedPoint(31,0.1026775);
   DilutionFunc1021->SetSavedPoint(32,0.1021145);
   DilutionFunc1021->SetSavedPoint(33,0.1015418);
   DilutionFunc1021->SetSavedPoint(34,0.1009596);
   DilutionFunc1021->SetSavedPoint(35,0.1003676);
   DilutionFunc1021->SetSavedPoint(36,0.09976592);
   DilutionFunc1021->SetSavedPoint(37,0.09915448);
   DilutionFunc1021->SetSavedPoint(38,0.09853323);
   DilutionFunc1021->SetSavedPoint(39,0.09790214);
   DilutionFunc1021->SetSavedPoint(40,0.09726116);
   DilutionFunc1021->SetSavedPoint(41,0.09661025);
   DilutionFunc1021->SetSavedPoint(42,0.09594937);
   DilutionFunc1021->SetSavedPoint(43,0.09527848);
   DilutionFunc1021->SetSavedPoint(44,0.09459754);
   DilutionFunc1021->SetSavedPoint(45,0.0939065);
   DilutionFunc1021->SetSavedPoint(46,0.09320533);
   DilutionFunc1021->SetSavedPoint(47,0.09249399);
   DilutionFunc1021->SetSavedPoint(48,0.09177242);
   DilutionFunc1021->SetSavedPoint(49,0.09104061);
   DilutionFunc1021->SetSavedPoint(50,0.09029849);
   DilutionFunc1021->SetSavedPoint(51,0.08954603);
   DilutionFunc1021->SetSavedPoint(52,0.08878319);
   DilutionFunc1021->SetSavedPoint(53,0.08800993);
   DilutionFunc1021->SetSavedPoint(54,0.08722621);
   DilutionFunc1021->SetSavedPoint(55,0.08643198);
   DilutionFunc1021->SetSavedPoint(56,0.08562721);
   DilutionFunc1021->SetSavedPoint(57,0.08481184);
   DilutionFunc1021->SetSavedPoint(58,0.08398586);
   DilutionFunc1021->SetSavedPoint(59,0.0831492);
   DilutionFunc1021->SetSavedPoint(60,0.08230183);
   DilutionFunc1021->SetSavedPoint(61,0.08144371);
   DilutionFunc1021->SetSavedPoint(62,0.0805748);
   DilutionFunc1021->SetSavedPoint(63,0.07969506);
   DilutionFunc1021->SetSavedPoint(64,0.07880444);
   DilutionFunc1021->SetSavedPoint(65,0.0779029);
   DilutionFunc1021->SetSavedPoint(66,0.07699041);
   DilutionFunc1021->SetSavedPoint(67,0.07606692);
   DilutionFunc1021->SetSavedPoint(68,0.07513239);
   DilutionFunc1021->SetSavedPoint(69,0.07418679);
   DilutionFunc1021->SetSavedPoint(70,0.07323006);
   DilutionFunc1021->SetSavedPoint(71,0.07226216);
   DilutionFunc1021->SetSavedPoint(72,0.07128307);
   DilutionFunc1021->SetSavedPoint(73,0.07029273);
   DilutionFunc1021->SetSavedPoint(74,0.0692911);
   DilutionFunc1021->SetSavedPoint(75,0.06827814);
   DilutionFunc1021->SetSavedPoint(76,0.06725382);
   DilutionFunc1021->SetSavedPoint(77,0.06621809);
   DilutionFunc1021->SetSavedPoint(78,0.06517091);
   DilutionFunc1021->SetSavedPoint(79,0.06411224);
   DilutionFunc1021->SetSavedPoint(80,0.06304203);
   DilutionFunc1021->SetSavedPoint(81,0.06196025);
   DilutionFunc1021->SetSavedPoint(82,0.06086685);
   DilutionFunc1021->SetSavedPoint(83,0.0597618);
   DilutionFunc1021->SetSavedPoint(84,0.05864505);
   DilutionFunc1021->SetSavedPoint(85,0.05751657);
   DilutionFunc1021->SetSavedPoint(86,0.0563763);
   DilutionFunc1021->SetSavedPoint(87,0.05522421);
   DilutionFunc1021->SetSavedPoint(88,0.05406027);
   DilutionFunc1021->SetSavedPoint(89,0.05288441);
   DilutionFunc1021->SetSavedPoint(90,0.05169662);
   DilutionFunc1021->SetSavedPoint(91,0.05049684);
   DilutionFunc1021->SetSavedPoint(92,0.04928503);
   DilutionFunc1021->SetSavedPoint(93,0.04806116);
   DilutionFunc1021->SetSavedPoint(94,0.04682517);
   DilutionFunc1021->SetSavedPoint(95,0.04557704);
   DilutionFunc1021->SetSavedPoint(96,0.04431672);
   DilutionFunc1021->SetSavedPoint(97,0.04304416);
   DilutionFunc1021->SetSavedPoint(98,0.04175934);
   DilutionFunc1021->SetSavedPoint(99,0.04046219);
   DilutionFunc1021->SetSavedPoint(100,0.0391527);
   DilutionFunc1021->SetSavedPoint(101,750);
   DilutionFunc1021->SetSavedPoint(102,2750);
   DilutionFunc1021->SetFillColor(19);
   DilutionFunc1021->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1021->SetLineColor(ci);
   DilutionFunc1021->SetLineWidth(3);
   DilutionFunc1021->SetChisquare(12.75817);
   DilutionFunc1021->SetNDF(6);
   DilutionFunc1021->GetXaxis()->SetLabelFont(42);
   DilutionFunc1021->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1021->GetXaxis()->SetTitleFont(42);
   DilutionFunc1021->GetYaxis()->SetLabelFont(42);
   DilutionFunc1021->GetYaxis()->SetTitleFont(42);
   DilutionFunc1021->SetParameter(0,0.1206958);
   DilutionFunc1021->SetParError(0,0.007006392);
   DilutionFunc1021->SetParLimits(0,0,0);
   DilutionFunc1021->SetParameter(1,-0.0001525475);
   DilutionFunc1021->SetParError(1,7.378262e-06);
   DilutionFunc1021->SetParLimits(1,0,0);
   DilutionFunc1021->Draw("SAME");
   
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
   pt_LaTex = pt->AddText("2.13
");
   pt_LaTex = pt->AddText("0.121#pm0.007");
   pt_LaTex = pt->AddText("(-1.52#pm0.07)#times10^{-4}");
   pt->Draw();
   S0S12S18->Modified();
   S0S12S18->cd();
   S0S12S18->SetSelected(S0S12S18);
}
