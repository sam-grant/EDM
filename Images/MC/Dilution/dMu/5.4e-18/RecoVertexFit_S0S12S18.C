void RecoVertexFit_S0S12S18()
{
//=========Macro generated from canvas: S0S12S18/c
//=========  (Tue Dec  7 01:11:51 2021) by ROOT version 6.24/04
   TCanvas *S0S12S18 = new TCanvas("S0S12S18", "c",0,0,800,600);
   S0S12S18->SetHighLightColor(2);
   S0S12S18->Range(466.9763,-0.015,3025.645,0.135);
   S0S12S18->SetFillColor(0);
   S0S12S18->SetBorderMode(0);
   S0S12S18->SetBorderSize(2);
   S0S12S18->SetFrameBorderMode(0);
   S0S12S18->SetFrameBorderMode(0);
   
   Double_t S0S12S18_trackReco_fx1071[11] = {
   451.7878,
   653.2973,
   880.261,
   1123.043,
   1371.131,
   1620.23,
   1867.05,
   2115.574,
   2362.998,
   2614.023,
   2788.472};
   Double_t S0S12S18_trackReco_fy1071[11] = {
   -0.008641496,
   0.0904474,
   0.07294539,
   0.08128732,
   0.08112969,
   0.09043276,
   0.07881371,
   0.06044737,
   0.03843148,
   0.05430127,
   -0.003981642};
   Double_t S0S12S18_trackReco_fex1071[11] = {
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
   Double_t S0S12S18_trackReco_fey1071[11] = {
   0.06378572,
   0.02135186,
   0.01227176,
   0.01008195,
   0.009240946,
   0.008796052,
   0.008815584,
   0.009231367,
   0.009808522,
   0.009731092,
   0.0220131};
   TGraphErrors *gre = new TGraphErrors(11,S0S12S18_trackReco_fx1071,S0S12S18_trackReco_fy1071,S0S12S18_trackReco_fex1071,S0S12S18_trackReco_fey1071);
   gre->SetName("S0S12S18_trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_trackReco1071 = new TH1F("Graph_S0S12S18_trackReco1071","",100,218.1194,3022.14);
   Graph_S0S12S18_trackReco1071->SetMinimum(0);
   Graph_S0S12S18_trackReco1071->SetMaximum(0.12);
   Graph_S0S12S18_trackReco1071->SetDirectory(0);
   Graph_S0S12S18_trackReco1071->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_trackReco1071->SetLineColor(ci);
   Graph_S0S12S18_trackReco1071->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0S12S18_trackReco1071->GetXaxis()->SetRange(19,91);
   Graph_S0S12S18_trackReco1071->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_trackReco1071->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackReco1071->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_trackReco1071->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_trackReco1071->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_trackReco1071->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S0S12S18_trackReco1071->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_trackReco1071->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_trackReco1071->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackReco1071->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_trackReco1071->GetYaxis()->SetTitleOffset(1.25);
   Graph_S0S12S18_trackReco1071->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_trackReco1071->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_trackReco1071->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_trackReco1071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_trackReco1071);
   
   
   TF1 *ParabolaFunc1072 = new TF1("*ParabolaFunc",750,2750,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2750,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1072->SetRange(750,2750);
   ParabolaFunc1072->SetName("ParabolaFunc");
   ParabolaFunc1072->SetTitle("ParabolaFunc");
   ParabolaFunc1072->SetSavedPoint(0,0.0741127);
   ParabolaFunc1072->SetSavedPoint(1,0.07468518);
   ParabolaFunc1072->SetSavedPoint(2,0.07523762);
   ParabolaFunc1072->SetSavedPoint(3,0.07577001);
   ParabolaFunc1072->SetSavedPoint(4,0.07628237);
   ParabolaFunc1072->SetSavedPoint(5,0.07677468);
   ParabolaFunc1072->SetSavedPoint(6,0.07724696);
   ParabolaFunc1072->SetSavedPoint(7,0.07769919);
   ParabolaFunc1072->SetSavedPoint(8,0.07813138);
   ParabolaFunc1072->SetSavedPoint(9,0.07854354);
   ParabolaFunc1072->SetSavedPoint(10,0.07893565);
   ParabolaFunc1072->SetSavedPoint(11,0.07930772);
   ParabolaFunc1072->SetSavedPoint(12,0.07965975);
   ParabolaFunc1072->SetSavedPoint(13,0.07999174);
   ParabolaFunc1072->SetSavedPoint(14,0.0803037);
   ParabolaFunc1072->SetSavedPoint(15,0.08059561);
   ParabolaFunc1072->SetSavedPoint(16,0.08086748);
   ParabolaFunc1072->SetSavedPoint(17,0.08111931);
   ParabolaFunc1072->SetSavedPoint(18,0.0813511);
   ParabolaFunc1072->SetSavedPoint(19,0.08156285);
   ParabolaFunc1072->SetSavedPoint(20,0.08175456);
   ParabolaFunc1072->SetSavedPoint(21,0.08192622);
   ParabolaFunc1072->SetSavedPoint(22,0.08207785);
   ParabolaFunc1072->SetSavedPoint(23,0.08220944);
   ParabolaFunc1072->SetSavedPoint(24,0.08232099);
   ParabolaFunc1072->SetSavedPoint(25,0.0824125);
   ParabolaFunc1072->SetSavedPoint(26,0.08248396);
   ParabolaFunc1072->SetSavedPoint(27,0.08253539);
   ParabolaFunc1072->SetSavedPoint(28,0.08256677);
   ParabolaFunc1072->SetSavedPoint(29,0.08257812);
   ParabolaFunc1072->SetSavedPoint(30,0.08256943);
   ParabolaFunc1072->SetSavedPoint(31,0.08254069);
   ParabolaFunc1072->SetSavedPoint(32,0.08249192);
   ParabolaFunc1072->SetSavedPoint(33,0.0824231);
   ParabolaFunc1072->SetSavedPoint(34,0.08233424);
   ParabolaFunc1072->SetSavedPoint(35,0.08222535);
   ParabolaFunc1072->SetSavedPoint(36,0.08209641);
   ParabolaFunc1072->SetSavedPoint(37,0.08194743);
   ParabolaFunc1072->SetSavedPoint(38,0.08177842);
   ParabolaFunc1072->SetSavedPoint(39,0.08158936);
   ParabolaFunc1072->SetSavedPoint(40,0.08138026);
   ParabolaFunc1072->SetSavedPoint(41,0.08115112);
   ParabolaFunc1072->SetSavedPoint(42,0.08090194);
   ParabolaFunc1072->SetSavedPoint(43,0.08063272);
   ParabolaFunc1072->SetSavedPoint(44,0.08034346);
   ParabolaFunc1072->SetSavedPoint(45,0.08003416);
   ParabolaFunc1072->SetSavedPoint(46,0.07970482);
   ParabolaFunc1072->SetSavedPoint(47,0.07935544);
   ParabolaFunc1072->SetSavedPoint(48,0.07898602);
   ParabolaFunc1072->SetSavedPoint(49,0.07859656);
   ParabolaFunc1072->SetSavedPoint(50,0.07818706);
   ParabolaFunc1072->SetSavedPoint(51,0.07775752);
   ParabolaFunc1072->SetSavedPoint(52,0.07730793);
   ParabolaFunc1072->SetSavedPoint(53,0.07683831);
   ParabolaFunc1072->SetSavedPoint(54,0.07634865);
   ParabolaFunc1072->SetSavedPoint(55,0.07583894);
   ParabolaFunc1072->SetSavedPoint(56,0.0753092);
   ParabolaFunc1072->SetSavedPoint(57,0.07475941);
   ParabolaFunc1072->SetSavedPoint(58,0.07418959);
   ParabolaFunc1072->SetSavedPoint(59,0.07359972);
   ParabolaFunc1072->SetSavedPoint(60,0.07298982);
   ParabolaFunc1072->SetSavedPoint(61,0.07235987);
   ParabolaFunc1072->SetSavedPoint(62,0.07170989);
   ParabolaFunc1072->SetSavedPoint(63,0.07103986);
   ParabolaFunc1072->SetSavedPoint(64,0.07034979);
   ParabolaFunc1072->SetSavedPoint(65,0.06963969);
   ParabolaFunc1072->SetSavedPoint(66,0.06890954);
   ParabolaFunc1072->SetSavedPoint(67,0.06815935);
   ParabolaFunc1072->SetSavedPoint(68,0.06738912);
   ParabolaFunc1072->SetSavedPoint(69,0.06659885);
   ParabolaFunc1072->SetSavedPoint(70,0.06578854);
   ParabolaFunc1072->SetSavedPoint(71,0.06495819);
   ParabolaFunc1072->SetSavedPoint(72,0.0641078);
   ParabolaFunc1072->SetSavedPoint(73,0.06323737);
   ParabolaFunc1072->SetSavedPoint(74,0.0623469);
   ParabolaFunc1072->SetSavedPoint(75,0.06143639);
   ParabolaFunc1072->SetSavedPoint(76,0.06050584);
   ParabolaFunc1072->SetSavedPoint(77,0.05955525);
   ParabolaFunc1072->SetSavedPoint(78,0.05858462);
   ParabolaFunc1072->SetSavedPoint(79,0.05759395);
   ParabolaFunc1072->SetSavedPoint(80,0.05658323);
   ParabolaFunc1072->SetSavedPoint(81,0.05555248);
   ParabolaFunc1072->SetSavedPoint(82,0.05450169);
   ParabolaFunc1072->SetSavedPoint(83,0.05343085);
   ParabolaFunc1072->SetSavedPoint(84,0.05233998);
   ParabolaFunc1072->SetSavedPoint(85,0.05122906);
   ParabolaFunc1072->SetSavedPoint(86,0.05009811);
   ParabolaFunc1072->SetSavedPoint(87,0.04894711);
   ParabolaFunc1072->SetSavedPoint(88,0.04777608);
   ParabolaFunc1072->SetSavedPoint(89,0.046585);
   ParabolaFunc1072->SetSavedPoint(90,0.04537388);
   ParabolaFunc1072->SetSavedPoint(91,0.04414273);
   ParabolaFunc1072->SetSavedPoint(92,0.04289153);
   ParabolaFunc1072->SetSavedPoint(93,0.04162029);
   ParabolaFunc1072->SetSavedPoint(94,0.04032902);
   ParabolaFunc1072->SetSavedPoint(95,0.0390177);
   ParabolaFunc1072->SetSavedPoint(96,0.03768634);
   ParabolaFunc1072->SetSavedPoint(97,0.03633494);
   ParabolaFunc1072->SetSavedPoint(98,0.0349635);
   ParabolaFunc1072->SetSavedPoint(99,0.03357202);
   ParabolaFunc1072->SetSavedPoint(100,0.0321605);
   ParabolaFunc1072->SetSavedPoint(101,750);
   ParabolaFunc1072->SetSavedPoint(102,2750);
   ParabolaFunc1072->SetFillColor(19);
   ParabolaFunc1072->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1072->SetLineColor(ci);
   ParabolaFunc1072->SetLineWidth(3);
   ParabolaFunc1072->SetChisquare(7.065615);
   ParabolaFunc1072->SetNDF(5);
   ParabolaFunc1072->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1072->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1072->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1072->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1072->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1072->SetParameter(0,-2.505046e-08);
   ParabolaFunc1072->SetParError(0,1.268059e-08);
   ParabolaFunc1072->SetParLimits(0,0,0);
   ParabolaFunc1072->SetParameter(1,6.670049e-05);
   ParabolaFunc1072->SetParError(1,4.558874e-05);
   ParabolaFunc1072->SetParLimits(1,0,0);
   ParabolaFunc1072->SetParameter(2,0.03817822);
   ParabolaFunc1072->SetParError(2,0.0385284);
   ParabolaFunc1072->SetParLimits(2,0,0);
   ParabolaFunc1072->SetParent(gre);
   gre->GetListOfFunctions()->Add(ParabolaFunc1072);
   gre->Draw("ap");
   
   TF1 *ParabolaFunc1073 = new TF1("*ParabolaFunc",750,2750,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2750,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1073->SetRange(750,2750);
   ParabolaFunc1073->SetName("ParabolaFunc");
   ParabolaFunc1073->SetTitle("ParabolaFunc");
   ParabolaFunc1073->SetSavedPoint(0,0.0741127);
   ParabolaFunc1073->SetSavedPoint(1,0.07468518);
   ParabolaFunc1073->SetSavedPoint(2,0.07523762);
   ParabolaFunc1073->SetSavedPoint(3,0.07577001);
   ParabolaFunc1073->SetSavedPoint(4,0.07628237);
   ParabolaFunc1073->SetSavedPoint(5,0.07677468);
   ParabolaFunc1073->SetSavedPoint(6,0.07724696);
   ParabolaFunc1073->SetSavedPoint(7,0.07769919);
   ParabolaFunc1073->SetSavedPoint(8,0.07813138);
   ParabolaFunc1073->SetSavedPoint(9,0.07854354);
   ParabolaFunc1073->SetSavedPoint(10,0.07893565);
   ParabolaFunc1073->SetSavedPoint(11,0.07930772);
   ParabolaFunc1073->SetSavedPoint(12,0.07965975);
   ParabolaFunc1073->SetSavedPoint(13,0.07999174);
   ParabolaFunc1073->SetSavedPoint(14,0.0803037);
   ParabolaFunc1073->SetSavedPoint(15,0.08059561);
   ParabolaFunc1073->SetSavedPoint(16,0.08086748);
   ParabolaFunc1073->SetSavedPoint(17,0.08111931);
   ParabolaFunc1073->SetSavedPoint(18,0.0813511);
   ParabolaFunc1073->SetSavedPoint(19,0.08156285);
   ParabolaFunc1073->SetSavedPoint(20,0.08175456);
   ParabolaFunc1073->SetSavedPoint(21,0.08192622);
   ParabolaFunc1073->SetSavedPoint(22,0.08207785);
   ParabolaFunc1073->SetSavedPoint(23,0.08220944);
   ParabolaFunc1073->SetSavedPoint(24,0.08232099);
   ParabolaFunc1073->SetSavedPoint(25,0.0824125);
   ParabolaFunc1073->SetSavedPoint(26,0.08248396);
   ParabolaFunc1073->SetSavedPoint(27,0.08253539);
   ParabolaFunc1073->SetSavedPoint(28,0.08256677);
   ParabolaFunc1073->SetSavedPoint(29,0.08257812);
   ParabolaFunc1073->SetSavedPoint(30,0.08256943);
   ParabolaFunc1073->SetSavedPoint(31,0.08254069);
   ParabolaFunc1073->SetSavedPoint(32,0.08249192);
   ParabolaFunc1073->SetSavedPoint(33,0.0824231);
   ParabolaFunc1073->SetSavedPoint(34,0.08233424);
   ParabolaFunc1073->SetSavedPoint(35,0.08222535);
   ParabolaFunc1073->SetSavedPoint(36,0.08209641);
   ParabolaFunc1073->SetSavedPoint(37,0.08194743);
   ParabolaFunc1073->SetSavedPoint(38,0.08177842);
   ParabolaFunc1073->SetSavedPoint(39,0.08158936);
   ParabolaFunc1073->SetSavedPoint(40,0.08138026);
   ParabolaFunc1073->SetSavedPoint(41,0.08115112);
   ParabolaFunc1073->SetSavedPoint(42,0.08090194);
   ParabolaFunc1073->SetSavedPoint(43,0.08063272);
   ParabolaFunc1073->SetSavedPoint(44,0.08034346);
   ParabolaFunc1073->SetSavedPoint(45,0.08003416);
   ParabolaFunc1073->SetSavedPoint(46,0.07970482);
   ParabolaFunc1073->SetSavedPoint(47,0.07935544);
   ParabolaFunc1073->SetSavedPoint(48,0.07898602);
   ParabolaFunc1073->SetSavedPoint(49,0.07859656);
   ParabolaFunc1073->SetSavedPoint(50,0.07818706);
   ParabolaFunc1073->SetSavedPoint(51,0.07775752);
   ParabolaFunc1073->SetSavedPoint(52,0.07730793);
   ParabolaFunc1073->SetSavedPoint(53,0.07683831);
   ParabolaFunc1073->SetSavedPoint(54,0.07634865);
   ParabolaFunc1073->SetSavedPoint(55,0.07583894);
   ParabolaFunc1073->SetSavedPoint(56,0.0753092);
   ParabolaFunc1073->SetSavedPoint(57,0.07475941);
   ParabolaFunc1073->SetSavedPoint(58,0.07418959);
   ParabolaFunc1073->SetSavedPoint(59,0.07359972);
   ParabolaFunc1073->SetSavedPoint(60,0.07298982);
   ParabolaFunc1073->SetSavedPoint(61,0.07235987);
   ParabolaFunc1073->SetSavedPoint(62,0.07170989);
   ParabolaFunc1073->SetSavedPoint(63,0.07103986);
   ParabolaFunc1073->SetSavedPoint(64,0.07034979);
   ParabolaFunc1073->SetSavedPoint(65,0.06963969);
   ParabolaFunc1073->SetSavedPoint(66,0.06890954);
   ParabolaFunc1073->SetSavedPoint(67,0.06815935);
   ParabolaFunc1073->SetSavedPoint(68,0.06738912);
   ParabolaFunc1073->SetSavedPoint(69,0.06659885);
   ParabolaFunc1073->SetSavedPoint(70,0.06578854);
   ParabolaFunc1073->SetSavedPoint(71,0.06495819);
   ParabolaFunc1073->SetSavedPoint(72,0.0641078);
   ParabolaFunc1073->SetSavedPoint(73,0.06323737);
   ParabolaFunc1073->SetSavedPoint(74,0.0623469);
   ParabolaFunc1073->SetSavedPoint(75,0.06143639);
   ParabolaFunc1073->SetSavedPoint(76,0.06050584);
   ParabolaFunc1073->SetSavedPoint(77,0.05955525);
   ParabolaFunc1073->SetSavedPoint(78,0.05858462);
   ParabolaFunc1073->SetSavedPoint(79,0.05759395);
   ParabolaFunc1073->SetSavedPoint(80,0.05658323);
   ParabolaFunc1073->SetSavedPoint(81,0.05555248);
   ParabolaFunc1073->SetSavedPoint(82,0.05450169);
   ParabolaFunc1073->SetSavedPoint(83,0.05343085);
   ParabolaFunc1073->SetSavedPoint(84,0.05233998);
   ParabolaFunc1073->SetSavedPoint(85,0.05122906);
   ParabolaFunc1073->SetSavedPoint(86,0.05009811);
   ParabolaFunc1073->SetSavedPoint(87,0.04894711);
   ParabolaFunc1073->SetSavedPoint(88,0.04777608);
   ParabolaFunc1073->SetSavedPoint(89,0.046585);
   ParabolaFunc1073->SetSavedPoint(90,0.04537388);
   ParabolaFunc1073->SetSavedPoint(91,0.04414273);
   ParabolaFunc1073->SetSavedPoint(92,0.04289153);
   ParabolaFunc1073->SetSavedPoint(93,0.04162029);
   ParabolaFunc1073->SetSavedPoint(94,0.04032902);
   ParabolaFunc1073->SetSavedPoint(95,0.0390177);
   ParabolaFunc1073->SetSavedPoint(96,0.03768634);
   ParabolaFunc1073->SetSavedPoint(97,0.03633494);
   ParabolaFunc1073->SetSavedPoint(98,0.0349635);
   ParabolaFunc1073->SetSavedPoint(99,0.03357202);
   ParabolaFunc1073->SetSavedPoint(100,0.0321605);
   ParabolaFunc1073->SetSavedPoint(101,750);
   ParabolaFunc1073->SetSavedPoint(102,2750);
   ParabolaFunc1073->SetFillColor(19);
   ParabolaFunc1073->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1073->SetLineColor(ci);
   ParabolaFunc1073->SetLineWidth(3);
   ParabolaFunc1073->SetChisquare(7.065615);
   ParabolaFunc1073->SetNDF(5);
   ParabolaFunc1073->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1073->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1073->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1073->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1073->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1073->SetParameter(0,-2.505046e-08);
   ParabolaFunc1073->SetParError(0,1.268059e-08);
   ParabolaFunc1073->SetParLimits(0,0,0);
   ParabolaFunc1073->SetParameter(1,6.670049e-05);
   ParabolaFunc1073->SetParError(1,4.558874e-05);
   ParabolaFunc1073->SetParLimits(1,0,0);
   ParabolaFunc1073->SetParameter(2,0.03817822);
   ParabolaFunc1073->SetParError(2,0.0385284);
   ParabolaFunc1073->SetParLimits(2,0,0);
   ParabolaFunc1073->Draw("SAME");
   
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
   pt_LaTex = pt->AddText("1.41
");
   pt_LaTex = pt->AddText("(-3#pm1)#times10^{-8}");
   pt_LaTex = pt->AddText("(7#pm5)#times10^{-5}");
   pt_LaTex = pt->AddText("0.04#pm0.04");
   pt->Draw();
   S0S12S18->Modified();
   S0S12S18->cd();
   S0S12S18->SetSelected(S0S12S18);
}
