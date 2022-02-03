void RecoVertexFit_S12S18()
{
//=========Macro generated from canvas: S12S18/c
//=========  (Thu Feb  3 13:23:11 2022) by ROOT version 6.24/06
   TCanvas *S12S18 = new TCanvas("S12S18", "c",0,0,800,600);
   S12S18->SetHighLightColor(2);
   S12S18->Range(467.115,-0.015,3024.556,0.135);
   S12S18->SetFillColor(0);
   S12S18->SetBorderMode(0);
   S12S18->SetBorderSize(2);
   S12S18->SetFrameBorderMode(0);
   S12S18->SetFrameBorderMode(0);
   
   Double_t S12S18_trackReco_fx1015[11] = {
   451.9338,
   653.315,
   880.4423,
   1123.086,
   1370.96,
   1619.999,
   1866.598,
   2114.954,
   2362.913,
   2613.194,
   2787.496};
   Double_t S12S18_trackReco_fy1015[11] = {
   -0.0148599,
   0.07621621,
   0.06051036,
   0.06086584,
   0.06408111,
   0.07700768,
   0.07316074,
   0.05563575,
   0.03535204,
   0.06306808,
   0.02708814};
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
   0.06045563,
   0.0202846,
   0.0116218,
   0.009546282,
   0.008768377,
   0.008353599,
   0.008440916,
   0.008930368,
   0.00965824,
   0.009553866,
   0.02238203};
   TGraphErrors *gre = new TGraphErrors(11,S12S18_trackReco_fx1015,S12S18_trackReco_fy1015,S12S18_trackReco_fex1015,S12S18_trackReco_fey1015);
   gre->SetName("S12S18_trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_trackReco1015 = new TH1F("Graph_S12S18_trackReco1015","",100,218.3776,3021.053);
   Graph_S12S18_trackReco1015->SetMinimum(0);
   Graph_S12S18_trackReco1015->SetMaximum(0.12);
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
   
   
   TF1 *ParabolaFunc1016 = new TF1("*ParabolaFunc",750,2750,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2750,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1016->SetRange(750,2750);
   ParabolaFunc1016->SetName("ParabolaFunc");
   ParabolaFunc1016->SetTitle("ParabolaFunc");
   ParabolaFunc1016->SetSavedPoint(0,0.05743643);
   ParabolaFunc1016->SetSavedPoint(1,0.05794421);
   ParabolaFunc1016->SetSavedPoint(2,0.05843899);
   ParabolaFunc1016->SetSavedPoint(3,0.05892077);
   ParabolaFunc1016->SetSavedPoint(4,0.05938953);
   ParabolaFunc1016->SetSavedPoint(5,0.0598453);
   ParabolaFunc1016->SetSavedPoint(6,0.06028806);
   ParabolaFunc1016->SetSavedPoint(7,0.06071781);
   ParabolaFunc1016->SetSavedPoint(8,0.06113456);
   ParabolaFunc1016->SetSavedPoint(9,0.0615383);
   ParabolaFunc1016->SetSavedPoint(10,0.06192903);
   ParabolaFunc1016->SetSavedPoint(11,0.06230676);
   ParabolaFunc1016->SetSavedPoint(12,0.06267149);
   ParabolaFunc1016->SetSavedPoint(13,0.06302321);
   ParabolaFunc1016->SetSavedPoint(14,0.06336193);
   ParabolaFunc1016->SetSavedPoint(15,0.06368764);
   ParabolaFunc1016->SetSavedPoint(16,0.06400034);
   ParabolaFunc1016->SetSavedPoint(17,0.06430004);
   ParabolaFunc1016->SetSavedPoint(18,0.06458673);
   ParabolaFunc1016->SetSavedPoint(19,0.06486042);
   ParabolaFunc1016->SetSavedPoint(20,0.06512111);
   ParabolaFunc1016->SetSavedPoint(21,0.06536878);
   ParabolaFunc1016->SetSavedPoint(22,0.06560346);
   ParabolaFunc1016->SetSavedPoint(23,0.06582512);
   ParabolaFunc1016->SetSavedPoint(24,0.06603379);
   ParabolaFunc1016->SetSavedPoint(25,0.06622944);
   ParabolaFunc1016->SetSavedPoint(26,0.06641209);
   ParabolaFunc1016->SetSavedPoint(27,0.06658174);
   ParabolaFunc1016->SetSavedPoint(28,0.06673838);
   ParabolaFunc1016->SetSavedPoint(29,0.06688202);
   ParabolaFunc1016->SetSavedPoint(30,0.06701265);
   ParabolaFunc1016->SetSavedPoint(31,0.06713027);
   ParabolaFunc1016->SetSavedPoint(32,0.06723489);
   ParabolaFunc1016->SetSavedPoint(33,0.0673265);
   ParabolaFunc1016->SetSavedPoint(34,0.06740511);
   ParabolaFunc1016->SetSavedPoint(35,0.06747071);
   ParabolaFunc1016->SetSavedPoint(36,0.06752331);
   ParabolaFunc1016->SetSavedPoint(37,0.06756291);
   ParabolaFunc1016->SetSavedPoint(38,0.06758949);
   ParabolaFunc1016->SetSavedPoint(39,0.06760307);
   ParabolaFunc1016->SetSavedPoint(40,0.06760365);
   ParabolaFunc1016->SetSavedPoint(41,0.06759122);
   ParabolaFunc1016->SetSavedPoint(42,0.06756579);
   ParabolaFunc1016->SetSavedPoint(43,0.06752735);
   ParabolaFunc1016->SetSavedPoint(44,0.0674759);
   ParabolaFunc1016->SetSavedPoint(45,0.06741145);
   ParabolaFunc1016->SetSavedPoint(46,0.067334);
   ParabolaFunc1016->SetSavedPoint(47,0.06724354);
   ParabolaFunc1016->SetSavedPoint(48,0.06714007);
   ParabolaFunc1016->SetSavedPoint(49,0.0670236);
   ParabolaFunc1016->SetSavedPoint(50,0.06689412);
   ParabolaFunc1016->SetSavedPoint(51,0.06675164);
   ParabolaFunc1016->SetSavedPoint(52,0.06659615);
   ParabolaFunc1016->SetSavedPoint(53,0.06642766);
   ParabolaFunc1016->SetSavedPoint(54,0.06624616);
   ParabolaFunc1016->SetSavedPoint(55,0.06605166);
   ParabolaFunc1016->SetSavedPoint(56,0.06584415);
   ParabolaFunc1016->SetSavedPoint(57,0.06562364);
   ParabolaFunc1016->SetSavedPoint(58,0.06539012);
   ParabolaFunc1016->SetSavedPoint(59,0.06514359);
   ParabolaFunc1016->SetSavedPoint(60,0.06488406);
   ParabolaFunc1016->SetSavedPoint(61,0.06461153);
   ParabolaFunc1016->SetSavedPoint(62,0.06432599);
   ParabolaFunc1016->SetSavedPoint(63,0.06402744);
   ParabolaFunc1016->SetSavedPoint(64,0.06371589);
   ParabolaFunc1016->SetSavedPoint(65,0.06339133);
   ParabolaFunc1016->SetSavedPoint(66,0.06305377);
   ParabolaFunc1016->SetSavedPoint(67,0.0627032);
   ParabolaFunc1016->SetSavedPoint(68,0.06233963);
   ParabolaFunc1016->SetSavedPoint(69,0.06196305);
   ParabolaFunc1016->SetSavedPoint(70,0.06157347);
   ParabolaFunc1016->SetSavedPoint(71,0.06117088);
   ParabolaFunc1016->SetSavedPoint(72,0.06075529);
   ParabolaFunc1016->SetSavedPoint(73,0.06032669);
   ParabolaFunc1016->SetSavedPoint(74,0.05988508);
   ParabolaFunc1016->SetSavedPoint(75,0.05943047);
   ParabolaFunc1016->SetSavedPoint(76,0.05896286);
   ParabolaFunc1016->SetSavedPoint(77,0.05848224);
   ParabolaFunc1016->SetSavedPoint(78,0.05798861);
   ParabolaFunc1016->SetSavedPoint(79,0.05748198);
   ParabolaFunc1016->SetSavedPoint(80,0.05696234);
   ParabolaFunc1016->SetSavedPoint(81,0.0564297);
   ParabolaFunc1016->SetSavedPoint(82,0.05588405);
   ParabolaFunc1016->SetSavedPoint(83,0.0553254);
   ParabolaFunc1016->SetSavedPoint(84,0.05475374);
   ParabolaFunc1016->SetSavedPoint(85,0.05416908);
   ParabolaFunc1016->SetSavedPoint(86,0.05357141);
   ParabolaFunc1016->SetSavedPoint(87,0.05296074);
   ParabolaFunc1016->SetSavedPoint(88,0.05233706);
   ParabolaFunc1016->SetSavedPoint(89,0.05170037);
   ParabolaFunc1016->SetSavedPoint(90,0.05105068);
   ParabolaFunc1016->SetSavedPoint(91,0.05038799);
   ParabolaFunc1016->SetSavedPoint(92,0.04971229);
   ParabolaFunc1016->SetSavedPoint(93,0.04902358);
   ParabolaFunc1016->SetSavedPoint(94,0.04832187);
   ParabolaFunc1016->SetSavedPoint(95,0.04760715);
   ParabolaFunc1016->SetSavedPoint(96,0.04687943);
   ParabolaFunc1016->SetSavedPoint(97,0.04613871);
   ParabolaFunc1016->SetSavedPoint(98,0.04538497);
   ParabolaFunc1016->SetSavedPoint(99,0.04461823);
   ParabolaFunc1016->SetSavedPoint(100,0.04383849);
   ParabolaFunc1016->SetSavedPoint(101,750);
   ParabolaFunc1016->SetSavedPoint(102,2750);
   ParabolaFunc1016->SetFillColor(19);
   ParabolaFunc1016->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1016->SetLineColor(ci);
   ParabolaFunc1016->SetLineWidth(3);
   ParabolaFunc1016->SetChisquare(9.919316);
   ParabolaFunc1016->SetNDF(5);
   ParabolaFunc1016->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1016->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1016->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1016->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1016->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1016->SetParameter(0,-1.625666e-08);
   ParabolaFunc1016->SetParError(0,1.219272e-08);
   ParabolaFunc1016->SetParLimits(0,0,0);
   ParabolaFunc1016->SetParameter(1,5.009936e-05);
   ParabolaFunc1016->SetParError(1,4.369922e-05);
   ParabolaFunc1016->SetParLimits(1,0,0);
   ParabolaFunc1016->SetParameter(2,0.02900628);
   ParabolaFunc1016->SetParError(2,0.03681978);
   ParabolaFunc1016->SetParLimits(2,0,0);
   ParabolaFunc1016->SetParent(gre);
   gre->GetListOfFunctions()->Add(ParabolaFunc1016);
   gre->Draw("ap");
   
   TF1 *ParabolaFunc1017 = new TF1("*ParabolaFunc",750,2750,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2750,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1017->SetRange(750,2750);
   ParabolaFunc1017->SetName("ParabolaFunc");
   ParabolaFunc1017->SetTitle("ParabolaFunc");
   ParabolaFunc1017->SetSavedPoint(0,0.05743643);
   ParabolaFunc1017->SetSavedPoint(1,0.05794421);
   ParabolaFunc1017->SetSavedPoint(2,0.05843899);
   ParabolaFunc1017->SetSavedPoint(3,0.05892077);
   ParabolaFunc1017->SetSavedPoint(4,0.05938953);
   ParabolaFunc1017->SetSavedPoint(5,0.0598453);
   ParabolaFunc1017->SetSavedPoint(6,0.06028806);
   ParabolaFunc1017->SetSavedPoint(7,0.06071781);
   ParabolaFunc1017->SetSavedPoint(8,0.06113456);
   ParabolaFunc1017->SetSavedPoint(9,0.0615383);
   ParabolaFunc1017->SetSavedPoint(10,0.06192903);
   ParabolaFunc1017->SetSavedPoint(11,0.06230676);
   ParabolaFunc1017->SetSavedPoint(12,0.06267149);
   ParabolaFunc1017->SetSavedPoint(13,0.06302321);
   ParabolaFunc1017->SetSavedPoint(14,0.06336193);
   ParabolaFunc1017->SetSavedPoint(15,0.06368764);
   ParabolaFunc1017->SetSavedPoint(16,0.06400034);
   ParabolaFunc1017->SetSavedPoint(17,0.06430004);
   ParabolaFunc1017->SetSavedPoint(18,0.06458673);
   ParabolaFunc1017->SetSavedPoint(19,0.06486042);
   ParabolaFunc1017->SetSavedPoint(20,0.06512111);
   ParabolaFunc1017->SetSavedPoint(21,0.06536878);
   ParabolaFunc1017->SetSavedPoint(22,0.06560346);
   ParabolaFunc1017->SetSavedPoint(23,0.06582512);
   ParabolaFunc1017->SetSavedPoint(24,0.06603379);
   ParabolaFunc1017->SetSavedPoint(25,0.06622944);
   ParabolaFunc1017->SetSavedPoint(26,0.06641209);
   ParabolaFunc1017->SetSavedPoint(27,0.06658174);
   ParabolaFunc1017->SetSavedPoint(28,0.06673838);
   ParabolaFunc1017->SetSavedPoint(29,0.06688202);
   ParabolaFunc1017->SetSavedPoint(30,0.06701265);
   ParabolaFunc1017->SetSavedPoint(31,0.06713027);
   ParabolaFunc1017->SetSavedPoint(32,0.06723489);
   ParabolaFunc1017->SetSavedPoint(33,0.0673265);
   ParabolaFunc1017->SetSavedPoint(34,0.06740511);
   ParabolaFunc1017->SetSavedPoint(35,0.06747071);
   ParabolaFunc1017->SetSavedPoint(36,0.06752331);
   ParabolaFunc1017->SetSavedPoint(37,0.06756291);
   ParabolaFunc1017->SetSavedPoint(38,0.06758949);
   ParabolaFunc1017->SetSavedPoint(39,0.06760307);
   ParabolaFunc1017->SetSavedPoint(40,0.06760365);
   ParabolaFunc1017->SetSavedPoint(41,0.06759122);
   ParabolaFunc1017->SetSavedPoint(42,0.06756579);
   ParabolaFunc1017->SetSavedPoint(43,0.06752735);
   ParabolaFunc1017->SetSavedPoint(44,0.0674759);
   ParabolaFunc1017->SetSavedPoint(45,0.06741145);
   ParabolaFunc1017->SetSavedPoint(46,0.067334);
   ParabolaFunc1017->SetSavedPoint(47,0.06724354);
   ParabolaFunc1017->SetSavedPoint(48,0.06714007);
   ParabolaFunc1017->SetSavedPoint(49,0.0670236);
   ParabolaFunc1017->SetSavedPoint(50,0.06689412);
   ParabolaFunc1017->SetSavedPoint(51,0.06675164);
   ParabolaFunc1017->SetSavedPoint(52,0.06659615);
   ParabolaFunc1017->SetSavedPoint(53,0.06642766);
   ParabolaFunc1017->SetSavedPoint(54,0.06624616);
   ParabolaFunc1017->SetSavedPoint(55,0.06605166);
   ParabolaFunc1017->SetSavedPoint(56,0.06584415);
   ParabolaFunc1017->SetSavedPoint(57,0.06562364);
   ParabolaFunc1017->SetSavedPoint(58,0.06539012);
   ParabolaFunc1017->SetSavedPoint(59,0.06514359);
   ParabolaFunc1017->SetSavedPoint(60,0.06488406);
   ParabolaFunc1017->SetSavedPoint(61,0.06461153);
   ParabolaFunc1017->SetSavedPoint(62,0.06432599);
   ParabolaFunc1017->SetSavedPoint(63,0.06402744);
   ParabolaFunc1017->SetSavedPoint(64,0.06371589);
   ParabolaFunc1017->SetSavedPoint(65,0.06339133);
   ParabolaFunc1017->SetSavedPoint(66,0.06305377);
   ParabolaFunc1017->SetSavedPoint(67,0.0627032);
   ParabolaFunc1017->SetSavedPoint(68,0.06233963);
   ParabolaFunc1017->SetSavedPoint(69,0.06196305);
   ParabolaFunc1017->SetSavedPoint(70,0.06157347);
   ParabolaFunc1017->SetSavedPoint(71,0.06117088);
   ParabolaFunc1017->SetSavedPoint(72,0.06075529);
   ParabolaFunc1017->SetSavedPoint(73,0.06032669);
   ParabolaFunc1017->SetSavedPoint(74,0.05988508);
   ParabolaFunc1017->SetSavedPoint(75,0.05943047);
   ParabolaFunc1017->SetSavedPoint(76,0.05896286);
   ParabolaFunc1017->SetSavedPoint(77,0.05848224);
   ParabolaFunc1017->SetSavedPoint(78,0.05798861);
   ParabolaFunc1017->SetSavedPoint(79,0.05748198);
   ParabolaFunc1017->SetSavedPoint(80,0.05696234);
   ParabolaFunc1017->SetSavedPoint(81,0.0564297);
   ParabolaFunc1017->SetSavedPoint(82,0.05588405);
   ParabolaFunc1017->SetSavedPoint(83,0.0553254);
   ParabolaFunc1017->SetSavedPoint(84,0.05475374);
   ParabolaFunc1017->SetSavedPoint(85,0.05416908);
   ParabolaFunc1017->SetSavedPoint(86,0.05357141);
   ParabolaFunc1017->SetSavedPoint(87,0.05296074);
   ParabolaFunc1017->SetSavedPoint(88,0.05233706);
   ParabolaFunc1017->SetSavedPoint(89,0.05170037);
   ParabolaFunc1017->SetSavedPoint(90,0.05105068);
   ParabolaFunc1017->SetSavedPoint(91,0.05038799);
   ParabolaFunc1017->SetSavedPoint(92,0.04971229);
   ParabolaFunc1017->SetSavedPoint(93,0.04902358);
   ParabolaFunc1017->SetSavedPoint(94,0.04832187);
   ParabolaFunc1017->SetSavedPoint(95,0.04760715);
   ParabolaFunc1017->SetSavedPoint(96,0.04687943);
   ParabolaFunc1017->SetSavedPoint(97,0.04613871);
   ParabolaFunc1017->SetSavedPoint(98,0.04538497);
   ParabolaFunc1017->SetSavedPoint(99,0.04461823);
   ParabolaFunc1017->SetSavedPoint(100,0.04383849);
   ParabolaFunc1017->SetSavedPoint(101,750);
   ParabolaFunc1017->SetSavedPoint(102,2750);
   ParabolaFunc1017->SetFillColor(19);
   ParabolaFunc1017->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1017->SetLineColor(ci);
   ParabolaFunc1017->SetLineWidth(3);
   ParabolaFunc1017->SetChisquare(9.919316);
   ParabolaFunc1017->SetNDF(5);
   ParabolaFunc1017->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1017->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1017->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1017->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1017->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1017->SetParameter(0,-1.625666e-08);
   ParabolaFunc1017->SetParError(0,1.219272e-08);
   ParabolaFunc1017->SetParLimits(0,0,0);
   ParabolaFunc1017->SetParameter(1,5.009936e-05);
   ParabolaFunc1017->SetParError(1,4.369922e-05);
   ParabolaFunc1017->SetParLimits(1,0,0);
   ParabolaFunc1017->SetParameter(2,0.02900628);
   ParabolaFunc1017->SetParError(2,0.03681978);
   ParabolaFunc1017->SetParLimits(2,0,0);
   ParabolaFunc1017->Draw("SAME");
   
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
   pt_LaTex = pt->AddText("1.98
");
   pt_LaTex = pt->AddText("-2e-08
#pm1e-08
");
   pt_LaTex = pt->AddText("5e-05
#pm4e-05
");
   pt_LaTex = pt->AddText("0.03
#pm0.04
");
   pt->Draw();
   S12S18->Modified();
   S12S18->cd();
   S12S18->SetSelected(S12S18);
}
