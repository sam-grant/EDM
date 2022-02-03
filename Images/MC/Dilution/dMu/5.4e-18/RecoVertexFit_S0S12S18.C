void RecoVertexFit_S0S12S18()
{
//=========Macro generated from canvas: S0S12S18/c
//=========  (Thu Feb  3 14:38:47 2022) by ROOT version 6.24/06
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
   
   
   TF1 *DilutionFunc1020 = new TF1("*DilutionFunc",750,2750,2);
    //The original function : DilutionFunc had originally been created by:
    //TF1 *DilutionFunc = new TF1("DilutionFunc",DilutionFunc,750,2750,2, 1, TF1::EAddToList::kNo);
   DilutionFunc1020->SetRange(750,2750);
   DilutionFunc1020->SetName("DilutionFunc");
   DilutionFunc1020->SetTitle("DilutionFunc");
   DilutionFunc1020->SetSavedPoint(0,0.07756955);
   DilutionFunc1020->SetSavedPoint(1,0.07743917);
   DilutionFunc1020->SetSavedPoint(2,0.07730504);
   DilutionFunc1020->SetSavedPoint(3,0.07716716);
   DilutionFunc1020->SetSavedPoint(4,0.0770255);
   DilutionFunc1020->SetSavedPoint(5,0.07688005);
   DilutionFunc1020->SetSavedPoint(6,0.07673079);
   DilutionFunc1020->SetSavedPoint(7,0.07657772);
   DilutionFunc1020->SetSavedPoint(8,0.0764208);
   DilutionFunc1020->SetSavedPoint(9,0.07626003);
   DilutionFunc1020->SetSavedPoint(10,0.07609539);
   DilutionFunc1020->SetSavedPoint(11,0.07592686);
   DilutionFunc1020->SetSavedPoint(12,0.07575443);
   DilutionFunc1020->SetSavedPoint(13,0.07557808);
   DilutionFunc1020->SetSavedPoint(14,0.07539779);
   DilutionFunc1020->SetSavedPoint(15,0.07521356);
   DilutionFunc1020->SetSavedPoint(16,0.07502536);
   DilutionFunc1020->SetSavedPoint(17,0.07483318);
   DilutionFunc1020->SetSavedPoint(18,0.074637);
   DilutionFunc1020->SetSavedPoint(19,0.0744368);
   DilutionFunc1020->SetSavedPoint(20,0.07423258);
   DilutionFunc1020->SetSavedPoint(21,0.07402431);
   DilutionFunc1020->SetSavedPoint(22,0.07381197);
   DilutionFunc1020->SetSavedPoint(23,0.07359556);
   DilutionFunc1020->SetSavedPoint(24,0.07337506);
   DilutionFunc1020->SetSavedPoint(25,0.07315044);
   DilutionFunc1020->SetSavedPoint(26,0.0729217);
   DilutionFunc1020->SetSavedPoint(27,0.07268882);
   DilutionFunc1020->SetSavedPoint(28,0.07245177);
   DilutionFunc1020->SetSavedPoint(29,0.07221056);
   DilutionFunc1020->SetSavedPoint(30,0.07196515);
   DilutionFunc1020->SetSavedPoint(31,0.07171554);
   DilutionFunc1020->SetSavedPoint(32,0.07146171);
   DilutionFunc1020->SetSavedPoint(33,0.07120363);
   DilutionFunc1020->SetSavedPoint(34,0.07094131);
   DilutionFunc1020->SetSavedPoint(35,0.07067471);
   DilutionFunc1020->SetSavedPoint(36,0.07040383);
   DilutionFunc1020->SetSavedPoint(37,0.07012865);
   DilutionFunc1020->SetSavedPoint(38,0.06984915);
   DilutionFunc1020->SetSavedPoint(39,0.06956532);
   DilutionFunc1020->SetSavedPoint(40,0.06927713);
   DilutionFunc1020->SetSavedPoint(41,0.06898458);
   DilutionFunc1020->SetSavedPoint(42,0.06868765);
   DilutionFunc1020->SetSavedPoint(43,0.06838632);
   DilutionFunc1020->SetSavedPoint(44,0.06808058);
   DilutionFunc1020->SetSavedPoint(45,0.06777041);
   DilutionFunc1020->SetSavedPoint(46,0.06745579);
   DilutionFunc1020->SetSavedPoint(47,0.06713671);
   DilutionFunc1020->SetSavedPoint(48,0.06681315);
   DilutionFunc1020->SetSavedPoint(49,0.0664851);
   DilutionFunc1020->SetSavedPoint(50,0.06615254);
   DilutionFunc1020->SetSavedPoint(51,0.06581545);
   DilutionFunc1020->SetSavedPoint(52,0.06547383);
   DilutionFunc1020->SetSavedPoint(53,0.06512764);
   DilutionFunc1020->SetSavedPoint(54,0.06477689);
   DilutionFunc1020->SetSavedPoint(55,0.06442154);
   DilutionFunc1020->SetSavedPoint(56,0.06406159);
   DilutionFunc1020->SetSavedPoint(57,0.06369701);
   DilutionFunc1020->SetSavedPoint(58,0.0633278);
   DilutionFunc1020->SetSavedPoint(59,0.06295394);
   DilutionFunc1020->SetSavedPoint(60,0.0625754);
   DilutionFunc1020->SetSavedPoint(61,0.06219218);
   DilutionFunc1020->SetSavedPoint(62,0.06180426);
   DilutionFunc1020->SetSavedPoint(63,0.06141163);
   DilutionFunc1020->SetSavedPoint(64,0.06101426);
   DilutionFunc1020->SetSavedPoint(65,0.06061214);
   DilutionFunc1020->SetSavedPoint(66,0.06020525);
   DilutionFunc1020->SetSavedPoint(67,0.05979359);
   DilutionFunc1020->SetSavedPoint(68,0.05937712);
   DilutionFunc1020->SetSavedPoint(69,0.05895585);
   DilutionFunc1020->SetSavedPoint(70,0.05852974);
   DilutionFunc1020->SetSavedPoint(71,0.05809879);
   DilutionFunc1020->SetSavedPoint(72,0.05766298);
   DilutionFunc1020->SetSavedPoint(73,0.05722229);
   DilutionFunc1020->SetSavedPoint(74,0.05677671);
   DilutionFunc1020->SetSavedPoint(75,0.05632622);
   DilutionFunc1020->SetSavedPoint(76,0.05587081);
   DilutionFunc1020->SetSavedPoint(77,0.05541045);
   DilutionFunc1020->SetSavedPoint(78,0.05494514);
   DilutionFunc1020->SetSavedPoint(79,0.05447486);
   DilutionFunc1020->SetSavedPoint(80,0.05399958);
   DilutionFunc1020->SetSavedPoint(81,0.05351931);
   DilutionFunc1020->SetSavedPoint(82,0.05303401);
   DilutionFunc1020->SetSavedPoint(83,0.05254367);
   DilutionFunc1020->SetSavedPoint(84,0.05204828);
   DilutionFunc1020->SetSavedPoint(85,0.05154783);
   DilutionFunc1020->SetSavedPoint(86,0.05104228);
   DilutionFunc1020->SetSavedPoint(87,0.05053164);
   DilutionFunc1020->SetSavedPoint(88,0.05001588);
   DilutionFunc1020->SetSavedPoint(89,0.04949499);
   DilutionFunc1020->SetSavedPoint(90,0.04896895);
   DilutionFunc1020->SetSavedPoint(91,0.04843775);
   DilutionFunc1020->SetSavedPoint(92,0.04790136);
   DilutionFunc1020->SetSavedPoint(93,0.04735978);
   DilutionFunc1020->SetSavedPoint(94,0.04681299);
   DilutionFunc1020->SetSavedPoint(95,0.04626097);
   DilutionFunc1020->SetSavedPoint(96,0.0457037);
   DilutionFunc1020->SetSavedPoint(97,0.04514117);
   DilutionFunc1020->SetSavedPoint(98,0.04457337);
   DilutionFunc1020->SetSavedPoint(99,0.04400027);
   DilutionFunc1020->SetSavedPoint(100,0.04342187);
   DilutionFunc1020->SetSavedPoint(101,750);
   DilutionFunc1020->SetSavedPoint(102,2750);
   DilutionFunc1020->SetFillColor(19);
   DilutionFunc1020->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1020->SetLineColor(ci);
   DilutionFunc1020->SetLineWidth(3);
   DilutionFunc1020->SetChisquare(12.51771);
   DilutionFunc1020->SetNDF(6);
   DilutionFunc1020->GetXaxis()->SetLabelFont(42);
   DilutionFunc1020->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1020->GetXaxis()->SetTitleFont(42);
   DilutionFunc1020->GetYaxis()->SetLabelFont(42);
   DilutionFunc1020->GetYaxis()->SetTitleFont(42);
   DilutionFunc1020->SetParameter(0,0.07990904);
   DilutionFunc1020->SetParError(0,0.005474227);
   DilutionFunc1020->SetParLimits(0,0,0);
   DilutionFunc1020->SetParameter(1,-0.0001277026);
   DilutionFunc1020->SetParError(1,1.422689e-05);
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
   DilutionFunc1021->SetSavedPoint(0,0.07756955);
   DilutionFunc1021->SetSavedPoint(1,0.07743917);
   DilutionFunc1021->SetSavedPoint(2,0.07730504);
   DilutionFunc1021->SetSavedPoint(3,0.07716716);
   DilutionFunc1021->SetSavedPoint(4,0.0770255);
   DilutionFunc1021->SetSavedPoint(5,0.07688005);
   DilutionFunc1021->SetSavedPoint(6,0.07673079);
   DilutionFunc1021->SetSavedPoint(7,0.07657772);
   DilutionFunc1021->SetSavedPoint(8,0.0764208);
   DilutionFunc1021->SetSavedPoint(9,0.07626003);
   DilutionFunc1021->SetSavedPoint(10,0.07609539);
   DilutionFunc1021->SetSavedPoint(11,0.07592686);
   DilutionFunc1021->SetSavedPoint(12,0.07575443);
   DilutionFunc1021->SetSavedPoint(13,0.07557808);
   DilutionFunc1021->SetSavedPoint(14,0.07539779);
   DilutionFunc1021->SetSavedPoint(15,0.07521356);
   DilutionFunc1021->SetSavedPoint(16,0.07502536);
   DilutionFunc1021->SetSavedPoint(17,0.07483318);
   DilutionFunc1021->SetSavedPoint(18,0.074637);
   DilutionFunc1021->SetSavedPoint(19,0.0744368);
   DilutionFunc1021->SetSavedPoint(20,0.07423258);
   DilutionFunc1021->SetSavedPoint(21,0.07402431);
   DilutionFunc1021->SetSavedPoint(22,0.07381197);
   DilutionFunc1021->SetSavedPoint(23,0.07359556);
   DilutionFunc1021->SetSavedPoint(24,0.07337506);
   DilutionFunc1021->SetSavedPoint(25,0.07315044);
   DilutionFunc1021->SetSavedPoint(26,0.0729217);
   DilutionFunc1021->SetSavedPoint(27,0.07268882);
   DilutionFunc1021->SetSavedPoint(28,0.07245177);
   DilutionFunc1021->SetSavedPoint(29,0.07221056);
   DilutionFunc1021->SetSavedPoint(30,0.07196515);
   DilutionFunc1021->SetSavedPoint(31,0.07171554);
   DilutionFunc1021->SetSavedPoint(32,0.07146171);
   DilutionFunc1021->SetSavedPoint(33,0.07120363);
   DilutionFunc1021->SetSavedPoint(34,0.07094131);
   DilutionFunc1021->SetSavedPoint(35,0.07067471);
   DilutionFunc1021->SetSavedPoint(36,0.07040383);
   DilutionFunc1021->SetSavedPoint(37,0.07012865);
   DilutionFunc1021->SetSavedPoint(38,0.06984915);
   DilutionFunc1021->SetSavedPoint(39,0.06956532);
   DilutionFunc1021->SetSavedPoint(40,0.06927713);
   DilutionFunc1021->SetSavedPoint(41,0.06898458);
   DilutionFunc1021->SetSavedPoint(42,0.06868765);
   DilutionFunc1021->SetSavedPoint(43,0.06838632);
   DilutionFunc1021->SetSavedPoint(44,0.06808058);
   DilutionFunc1021->SetSavedPoint(45,0.06777041);
   DilutionFunc1021->SetSavedPoint(46,0.06745579);
   DilutionFunc1021->SetSavedPoint(47,0.06713671);
   DilutionFunc1021->SetSavedPoint(48,0.06681315);
   DilutionFunc1021->SetSavedPoint(49,0.0664851);
   DilutionFunc1021->SetSavedPoint(50,0.06615254);
   DilutionFunc1021->SetSavedPoint(51,0.06581545);
   DilutionFunc1021->SetSavedPoint(52,0.06547383);
   DilutionFunc1021->SetSavedPoint(53,0.06512764);
   DilutionFunc1021->SetSavedPoint(54,0.06477689);
   DilutionFunc1021->SetSavedPoint(55,0.06442154);
   DilutionFunc1021->SetSavedPoint(56,0.06406159);
   DilutionFunc1021->SetSavedPoint(57,0.06369701);
   DilutionFunc1021->SetSavedPoint(58,0.0633278);
   DilutionFunc1021->SetSavedPoint(59,0.06295394);
   DilutionFunc1021->SetSavedPoint(60,0.0625754);
   DilutionFunc1021->SetSavedPoint(61,0.06219218);
   DilutionFunc1021->SetSavedPoint(62,0.06180426);
   DilutionFunc1021->SetSavedPoint(63,0.06141163);
   DilutionFunc1021->SetSavedPoint(64,0.06101426);
   DilutionFunc1021->SetSavedPoint(65,0.06061214);
   DilutionFunc1021->SetSavedPoint(66,0.06020525);
   DilutionFunc1021->SetSavedPoint(67,0.05979359);
   DilutionFunc1021->SetSavedPoint(68,0.05937712);
   DilutionFunc1021->SetSavedPoint(69,0.05895585);
   DilutionFunc1021->SetSavedPoint(70,0.05852974);
   DilutionFunc1021->SetSavedPoint(71,0.05809879);
   DilutionFunc1021->SetSavedPoint(72,0.05766298);
   DilutionFunc1021->SetSavedPoint(73,0.05722229);
   DilutionFunc1021->SetSavedPoint(74,0.05677671);
   DilutionFunc1021->SetSavedPoint(75,0.05632622);
   DilutionFunc1021->SetSavedPoint(76,0.05587081);
   DilutionFunc1021->SetSavedPoint(77,0.05541045);
   DilutionFunc1021->SetSavedPoint(78,0.05494514);
   DilutionFunc1021->SetSavedPoint(79,0.05447486);
   DilutionFunc1021->SetSavedPoint(80,0.05399958);
   DilutionFunc1021->SetSavedPoint(81,0.05351931);
   DilutionFunc1021->SetSavedPoint(82,0.05303401);
   DilutionFunc1021->SetSavedPoint(83,0.05254367);
   DilutionFunc1021->SetSavedPoint(84,0.05204828);
   DilutionFunc1021->SetSavedPoint(85,0.05154783);
   DilutionFunc1021->SetSavedPoint(86,0.05104228);
   DilutionFunc1021->SetSavedPoint(87,0.05053164);
   DilutionFunc1021->SetSavedPoint(88,0.05001588);
   DilutionFunc1021->SetSavedPoint(89,0.04949499);
   DilutionFunc1021->SetSavedPoint(90,0.04896895);
   DilutionFunc1021->SetSavedPoint(91,0.04843775);
   DilutionFunc1021->SetSavedPoint(92,0.04790136);
   DilutionFunc1021->SetSavedPoint(93,0.04735978);
   DilutionFunc1021->SetSavedPoint(94,0.04681299);
   DilutionFunc1021->SetSavedPoint(95,0.04626097);
   DilutionFunc1021->SetSavedPoint(96,0.0457037);
   DilutionFunc1021->SetSavedPoint(97,0.04514117);
   DilutionFunc1021->SetSavedPoint(98,0.04457337);
   DilutionFunc1021->SetSavedPoint(99,0.04400027);
   DilutionFunc1021->SetSavedPoint(100,0.04342187);
   DilutionFunc1021->SetSavedPoint(101,750);
   DilutionFunc1021->SetSavedPoint(102,2750);
   DilutionFunc1021->SetFillColor(19);
   DilutionFunc1021->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1021->SetLineColor(ci);
   DilutionFunc1021->SetLineWidth(3);
   DilutionFunc1021->SetChisquare(12.51771);
   DilutionFunc1021->SetNDF(6);
   DilutionFunc1021->GetXaxis()->SetLabelFont(42);
   DilutionFunc1021->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1021->GetXaxis()->SetTitleFont(42);
   DilutionFunc1021->GetYaxis()->SetLabelFont(42);
   DilutionFunc1021->GetYaxis()->SetTitleFont(42);
   DilutionFunc1021->SetParameter(0,0.07990904);
   DilutionFunc1021->SetParError(0,0.005474227);
   DilutionFunc1021->SetParLimits(0,0,0);
   DilutionFunc1021->SetParameter(1,-0.0001277026);
   DilutionFunc1021->SetParError(1,1.422689e-05);
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
   pt_LaTex = pt->AddText("b");
   pt->Draw();
   
   pt = new TPaveText(0.4,0.2,0.55,0.45,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("2.09
");
   pt_LaTex = pt->AddText("0.080#pm0.005");
   pt_LaTex = pt->AddText("(-1.3#pm0.1)#times10^{-4}");
   pt->Draw();
   S0S12S18->Modified();
   S0S12S18->cd();
   S0S12S18->SetSelected(S0S12S18);
}
