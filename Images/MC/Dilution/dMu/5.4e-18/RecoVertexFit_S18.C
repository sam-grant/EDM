void RecoVertexFit_S18()
{
//=========Macro generated from canvas: S18/c
//=========  (Tue Feb 22 00:54:07 2022) by ROOT version 6.24/06
   TCanvas *S18 = new TCanvas("S18", "c",0,0,800,600);
   S18->SetHighLightColor(2);
   S18->Range(467.2185,-0.0425,3024.494,0.1825);
   S18->SetFillColor(0);
   S18->SetBorderMode(0);
   S18->SetBorderSize(2);
   S18->SetFrameBorderMode(0);
   S18->SetFrameBorderMode(0);
   
   Double_t S18_trackReco_fx1011[11] = {
   452.0383,
   653.2767,
   880.5616,
   1123.015,
   1370.8,
   1619.721,
   1866.492,
   2115.018,
   2363.349,
   2612.121,
   2787.449};
   Double_t S18_trackReco_fy1011[11] = {
   -0.09595682,
   0.08464054,
   0.09014953,
   0.07398835,
   0.1062493,
   0.0916857,
   0.07865627,
   0.04849252,
   0.0581374,
   0.08666633,
   0.01404991};
   Double_t S18_trackReco_fex1011[11] = {
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
   Double_t S18_trackReco_fey1011[11] = {
   0.1152951,
   0.04066353,
   0.02368547,
   0.01891923,
   0.0161502,
   0.0140735,
   0.01332187,
   0.0133559,
   0.01389836,
   0.01320703,
   0.0308389};
   TGraphErrors *gre = new TGraphErrors(11,S18_trackReco_fx1011,S18_trackReco_fy1011,S18_trackReco_fex1011,S18_trackReco_fey1011);
   gre->SetName("S18_trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_trackReco1011 = new TH1F("Graph_S18_trackReco1011","",100,218.4972,3020.99);
   Graph_S18_trackReco1011->SetMinimum(-0.02);
   Graph_S18_trackReco1011->SetMaximum(0.16);
   Graph_S18_trackReco1011->SetDirectory(0);
   Graph_S18_trackReco1011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S18_trackReco1011->SetLineColor(ci);
   Graph_S18_trackReco1011->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_trackReco1011->GetXaxis()->SetRange(19,91);
   Graph_S18_trackReco1011->GetXaxis()->CenterTitle(true);
   Graph_S18_trackReco1011->GetXaxis()->SetLabelFont(42);
   Graph_S18_trackReco1011->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_trackReco1011->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_trackReco1011->GetXaxis()->SetTitleFont(42);
   Graph_S18_trackReco1011->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S18_trackReco1011->GetYaxis()->CenterTitle(true);
   Graph_S18_trackReco1011->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_trackReco1011->GetYaxis()->SetLabelFont(42);
   Graph_S18_trackReco1011->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_trackReco1011->GetYaxis()->SetTitleOffset(1.25);
   Graph_S18_trackReco1011->GetYaxis()->SetTitleFont(42);
   Graph_S18_trackReco1011->GetZaxis()->SetLabelFont(42);
   Graph_S18_trackReco1011->GetZaxis()->SetTitleOffset(1);
   Graph_S18_trackReco1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_trackReco1011);
   
   
   TF1 *DilutionFunc1012 = new TF1("*DilutionFunc",750,2750,2);
    //The original function : DilutionFunc had originally been created by:
    //TF1 *DilutionFunc = new TF1("DilutionFunc",DilutionFunc,750,2750,2, 1, TF1::EAddToList::kNo);
   DilutionFunc1012->SetRange(750,2750);
   DilutionFunc1012->SetName("DilutionFunc");
   DilutionFunc1012->SetTitle("DilutionFunc");
   DilutionFunc1012->SetSavedPoint(0,0.08878043);
   DilutionFunc1012->SetSavedPoint(1,0.08868256);
   DilutionFunc1012->SetSavedPoint(2,0.08858192);
   DilutionFunc1012->SetSavedPoint(3,0.0884785);
   DilutionFunc1012->SetSavedPoint(4,0.08837229);
   DilutionFunc1012->SetSavedPoint(5,0.08826328);
   DilutionFunc1012->SetSavedPoint(6,0.08815145);
   DilutionFunc1012->SetSavedPoint(7,0.08803681);
   DilutionFunc1012->SetSavedPoint(8,0.08791934);
   DilutionFunc1012->SetSavedPoint(9,0.08779903);
   DilutionFunc1012->SetSavedPoint(10,0.08767586);
   DilutionFunc1012->SetSavedPoint(11,0.08754984);
   DilutionFunc1012->SetSavedPoint(12,0.08742094);
   DilutionFunc1012->SetSavedPoint(13,0.08728917);
   DilutionFunc1012->SetSavedPoint(14,0.0871545);
   DilutionFunc1012->SetSavedPoint(15,0.08701694);
   DilutionFunc1012->SetSavedPoint(16,0.08687646);
   DilutionFunc1012->SetSavedPoint(17,0.08673306);
   DilutionFunc1012->SetSavedPoint(18,0.08658673);
   DilutionFunc1012->SetSavedPoint(19,0.08643747);
   DilutionFunc1012->SetSavedPoint(20,0.08628525);
   DilutionFunc1012->SetSavedPoint(21,0.08613007);
   DilutionFunc1012->SetSavedPoint(22,0.08597192);
   DilutionFunc1012->SetSavedPoint(23,0.08581079);
   DilutionFunc1012->SetSavedPoint(24,0.08564667);
   DilutionFunc1012->SetSavedPoint(25,0.08547955);
   DilutionFunc1012->SetSavedPoint(26,0.08530942);
   DilutionFunc1012->SetSavedPoint(27,0.08513627);
   DilutionFunc1012->SetSavedPoint(28,0.08496009);
   DilutionFunc1012->SetSavedPoint(29,0.08478087);
   DilutionFunc1012->SetSavedPoint(30,0.08459859);
   DilutionFunc1012->SetSavedPoint(31,0.08441326);
   DilutionFunc1012->SetSavedPoint(32,0.08422486);
   DilutionFunc1012->SetSavedPoint(33,0.08403337);
   DilutionFunc1012->SetSavedPoint(34,0.0838388);
   DilutionFunc1012->SetSavedPoint(35,0.08364113);
   DilutionFunc1012->SetSavedPoint(36,0.08344034);
   DilutionFunc1012->SetSavedPoint(37,0.08323644);
   DilutionFunc1012->SetSavedPoint(38,0.0830294);
   DilutionFunc1012->SetSavedPoint(39,0.08281922);
   DilutionFunc1012->SetSavedPoint(40,0.0826059);
   DilutionFunc1012->SetSavedPoint(41,0.08238941);
   DilutionFunc1012->SetSavedPoint(42,0.08216975);
   DilutionFunc1012->SetSavedPoint(43,0.08194692);
   DilutionFunc1012->SetSavedPoint(44,0.08172089);
   DilutionFunc1012->SetSavedPoint(45,0.08149166);
   DilutionFunc1012->SetSavedPoint(46,0.08125922);
   DilutionFunc1012->SetSavedPoint(47,0.08102356);
   DilutionFunc1012->SetSavedPoint(48,0.08078467);
   DilutionFunc1012->SetSavedPoint(49,0.08054254);
   DilutionFunc1012->SetSavedPoint(50,0.08029716);
   DilutionFunc1012->SetSavedPoint(51,0.08004852);
   DilutionFunc1012->SetSavedPoint(52,0.07979661);
   DilutionFunc1012->SetSavedPoint(53,0.07954142);
   DilutionFunc1012->SetSavedPoint(54,0.07928294);
   DilutionFunc1012->SetSavedPoint(55,0.07902116);
   DilutionFunc1012->SetSavedPoint(56,0.07875607);
   DilutionFunc1012->SetSavedPoint(57,0.07848765);
   DilutionFunc1012->SetSavedPoint(58,0.07821591);
   DilutionFunc1012->SetSavedPoint(59,0.07794083);
   DilutionFunc1012->SetSavedPoint(60,0.07766239);
   DilutionFunc1012->SetSavedPoint(61,0.0773806);
   DilutionFunc1012->SetSavedPoint(62,0.07709544);
   DilutionFunc1012->SetSavedPoint(63,0.07680689);
   DilutionFunc1012->SetSavedPoint(64,0.07651496);
   DilutionFunc1012->SetSavedPoint(65,0.07621962);
   DilutionFunc1012->SetSavedPoint(66,0.07592088);
   DilutionFunc1012->SetSavedPoint(67,0.07561871);
   DilutionFunc1012->SetSavedPoint(68,0.07531311);
   DilutionFunc1012->SetSavedPoint(69,0.07500408);
   DilutionFunc1012->SetSavedPoint(70,0.07469159);
   DilutionFunc1012->SetSavedPoint(71,0.07437564);
   DilutionFunc1012->SetSavedPoint(72,0.07405623);
   DilutionFunc1012->SetSavedPoint(73,0.07373333);
   DilutionFunc1012->SetSavedPoint(74,0.07340694);
   DilutionFunc1012->SetSavedPoint(75,0.07307705);
   DilutionFunc1012->SetSavedPoint(76,0.07274365);
   DilutionFunc1012->SetSavedPoint(77,0.07240674);
   DilutionFunc1012->SetSavedPoint(78,0.07206629);
   DilutionFunc1012->SetSavedPoint(79,0.0717223);
   DilutionFunc1012->SetSavedPoint(80,0.07137476);
   DilutionFunc1012->SetSavedPoint(81,0.07102366);
   DilutionFunc1012->SetSavedPoint(82,0.07066899);
   DilutionFunc1012->SetSavedPoint(83,0.07031074);
   DilutionFunc1012->SetSavedPoint(84,0.0699489);
   DilutionFunc1012->SetSavedPoint(85,0.06958345);
   DilutionFunc1012->SetSavedPoint(86,0.0692144);
   DilutionFunc1012->SetSavedPoint(87,0.06884173);
   DilutionFunc1012->SetSavedPoint(88,0.06846543);
   DilutionFunc1012->SetSavedPoint(89,0.06808549);
   DilutionFunc1012->SetSavedPoint(90,0.06770189);
   DilutionFunc1012->SetSavedPoint(91,0.06731464);
   DilutionFunc1012->SetSavedPoint(92,0.06692372);
   DilutionFunc1012->SetSavedPoint(93,0.06652911);
   DilutionFunc1012->SetSavedPoint(94,0.06613082);
   DilutionFunc1012->SetSavedPoint(95,0.06572883);
   DilutionFunc1012->SetSavedPoint(96,0.06532312);
   DilutionFunc1012->SetSavedPoint(97,0.0649137);
   DilutionFunc1012->SetSavedPoint(98,0.06450054);
   DilutionFunc1012->SetSavedPoint(99,0.06408365);
   DilutionFunc1012->SetSavedPoint(100,0.063663);
   DilutionFunc1012->SetSavedPoint(101,750);
   DilutionFunc1012->SetSavedPoint(102,2750);
   DilutionFunc1012->SetFillColor(19);
   DilutionFunc1012->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1012->SetLineColor(ci);
   DilutionFunc1012->SetLineWidth(3);
   DilutionFunc1012->SetChisquare(9.982667);
   DilutionFunc1012->SetNDF(6);
   DilutionFunc1012->GetXaxis()->SetLabelFont(42);
   DilutionFunc1012->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1012->GetXaxis()->SetTitleFont(42);
   DilutionFunc1012->GetYaxis()->SetLabelFont(42);
   DilutionFunc1012->GetYaxis()->SetTitleFont(42);
   DilutionFunc1012->SetParameter(0,0.09054564);
   DilutionFunc1012->SetParError(0,0.01147847);
   DilutionFunc1012->SetParLimits(0,0,0);
   DilutionFunc1012->SetParameter(1,-0.0001047744);
   DilutionFunc1012->SetParError(1,3.220689e-05);
   DilutionFunc1012->SetParLimits(1,0,0);
   DilutionFunc1012->SetParent(gre);
   gre->GetListOfFunctions()->Add(DilutionFunc1012);
   gre->Draw("ap");
   
   TF1 *DilutionFunc1013 = new TF1("*DilutionFunc",750,2750,2);
    //The original function : DilutionFunc had originally been created by:
    //TF1 *DilutionFunc = new TF1("DilutionFunc",DilutionFunc,750,2750,2, 1, TF1::EAddToList::kNo);
   DilutionFunc1013->SetRange(750,2750);
   DilutionFunc1013->SetName("DilutionFunc");
   DilutionFunc1013->SetTitle("DilutionFunc");
   DilutionFunc1013->SetSavedPoint(0,0.08878043);
   DilutionFunc1013->SetSavedPoint(1,0.08868256);
   DilutionFunc1013->SetSavedPoint(2,0.08858192);
   DilutionFunc1013->SetSavedPoint(3,0.0884785);
   DilutionFunc1013->SetSavedPoint(4,0.08837229);
   DilutionFunc1013->SetSavedPoint(5,0.08826328);
   DilutionFunc1013->SetSavedPoint(6,0.08815145);
   DilutionFunc1013->SetSavedPoint(7,0.08803681);
   DilutionFunc1013->SetSavedPoint(8,0.08791934);
   DilutionFunc1013->SetSavedPoint(9,0.08779903);
   DilutionFunc1013->SetSavedPoint(10,0.08767586);
   DilutionFunc1013->SetSavedPoint(11,0.08754984);
   DilutionFunc1013->SetSavedPoint(12,0.08742094);
   DilutionFunc1013->SetSavedPoint(13,0.08728917);
   DilutionFunc1013->SetSavedPoint(14,0.0871545);
   DilutionFunc1013->SetSavedPoint(15,0.08701694);
   DilutionFunc1013->SetSavedPoint(16,0.08687646);
   DilutionFunc1013->SetSavedPoint(17,0.08673306);
   DilutionFunc1013->SetSavedPoint(18,0.08658673);
   DilutionFunc1013->SetSavedPoint(19,0.08643747);
   DilutionFunc1013->SetSavedPoint(20,0.08628525);
   DilutionFunc1013->SetSavedPoint(21,0.08613007);
   DilutionFunc1013->SetSavedPoint(22,0.08597192);
   DilutionFunc1013->SetSavedPoint(23,0.08581079);
   DilutionFunc1013->SetSavedPoint(24,0.08564667);
   DilutionFunc1013->SetSavedPoint(25,0.08547955);
   DilutionFunc1013->SetSavedPoint(26,0.08530942);
   DilutionFunc1013->SetSavedPoint(27,0.08513627);
   DilutionFunc1013->SetSavedPoint(28,0.08496009);
   DilutionFunc1013->SetSavedPoint(29,0.08478087);
   DilutionFunc1013->SetSavedPoint(30,0.08459859);
   DilutionFunc1013->SetSavedPoint(31,0.08441326);
   DilutionFunc1013->SetSavedPoint(32,0.08422486);
   DilutionFunc1013->SetSavedPoint(33,0.08403337);
   DilutionFunc1013->SetSavedPoint(34,0.0838388);
   DilutionFunc1013->SetSavedPoint(35,0.08364113);
   DilutionFunc1013->SetSavedPoint(36,0.08344034);
   DilutionFunc1013->SetSavedPoint(37,0.08323644);
   DilutionFunc1013->SetSavedPoint(38,0.0830294);
   DilutionFunc1013->SetSavedPoint(39,0.08281922);
   DilutionFunc1013->SetSavedPoint(40,0.0826059);
   DilutionFunc1013->SetSavedPoint(41,0.08238941);
   DilutionFunc1013->SetSavedPoint(42,0.08216975);
   DilutionFunc1013->SetSavedPoint(43,0.08194692);
   DilutionFunc1013->SetSavedPoint(44,0.08172089);
   DilutionFunc1013->SetSavedPoint(45,0.08149166);
   DilutionFunc1013->SetSavedPoint(46,0.08125922);
   DilutionFunc1013->SetSavedPoint(47,0.08102356);
   DilutionFunc1013->SetSavedPoint(48,0.08078467);
   DilutionFunc1013->SetSavedPoint(49,0.08054254);
   DilutionFunc1013->SetSavedPoint(50,0.08029716);
   DilutionFunc1013->SetSavedPoint(51,0.08004852);
   DilutionFunc1013->SetSavedPoint(52,0.07979661);
   DilutionFunc1013->SetSavedPoint(53,0.07954142);
   DilutionFunc1013->SetSavedPoint(54,0.07928294);
   DilutionFunc1013->SetSavedPoint(55,0.07902116);
   DilutionFunc1013->SetSavedPoint(56,0.07875607);
   DilutionFunc1013->SetSavedPoint(57,0.07848765);
   DilutionFunc1013->SetSavedPoint(58,0.07821591);
   DilutionFunc1013->SetSavedPoint(59,0.07794083);
   DilutionFunc1013->SetSavedPoint(60,0.07766239);
   DilutionFunc1013->SetSavedPoint(61,0.0773806);
   DilutionFunc1013->SetSavedPoint(62,0.07709544);
   DilutionFunc1013->SetSavedPoint(63,0.07680689);
   DilutionFunc1013->SetSavedPoint(64,0.07651496);
   DilutionFunc1013->SetSavedPoint(65,0.07621962);
   DilutionFunc1013->SetSavedPoint(66,0.07592088);
   DilutionFunc1013->SetSavedPoint(67,0.07561871);
   DilutionFunc1013->SetSavedPoint(68,0.07531311);
   DilutionFunc1013->SetSavedPoint(69,0.07500408);
   DilutionFunc1013->SetSavedPoint(70,0.07469159);
   DilutionFunc1013->SetSavedPoint(71,0.07437564);
   DilutionFunc1013->SetSavedPoint(72,0.07405623);
   DilutionFunc1013->SetSavedPoint(73,0.07373333);
   DilutionFunc1013->SetSavedPoint(74,0.07340694);
   DilutionFunc1013->SetSavedPoint(75,0.07307705);
   DilutionFunc1013->SetSavedPoint(76,0.07274365);
   DilutionFunc1013->SetSavedPoint(77,0.07240674);
   DilutionFunc1013->SetSavedPoint(78,0.07206629);
   DilutionFunc1013->SetSavedPoint(79,0.0717223);
   DilutionFunc1013->SetSavedPoint(80,0.07137476);
   DilutionFunc1013->SetSavedPoint(81,0.07102366);
   DilutionFunc1013->SetSavedPoint(82,0.07066899);
   DilutionFunc1013->SetSavedPoint(83,0.07031074);
   DilutionFunc1013->SetSavedPoint(84,0.0699489);
   DilutionFunc1013->SetSavedPoint(85,0.06958345);
   DilutionFunc1013->SetSavedPoint(86,0.0692144);
   DilutionFunc1013->SetSavedPoint(87,0.06884173);
   DilutionFunc1013->SetSavedPoint(88,0.06846543);
   DilutionFunc1013->SetSavedPoint(89,0.06808549);
   DilutionFunc1013->SetSavedPoint(90,0.06770189);
   DilutionFunc1013->SetSavedPoint(91,0.06731464);
   DilutionFunc1013->SetSavedPoint(92,0.06692372);
   DilutionFunc1013->SetSavedPoint(93,0.06652911);
   DilutionFunc1013->SetSavedPoint(94,0.06613082);
   DilutionFunc1013->SetSavedPoint(95,0.06572883);
   DilutionFunc1013->SetSavedPoint(96,0.06532312);
   DilutionFunc1013->SetSavedPoint(97,0.0649137);
   DilutionFunc1013->SetSavedPoint(98,0.06450054);
   DilutionFunc1013->SetSavedPoint(99,0.06408365);
   DilutionFunc1013->SetSavedPoint(100,0.063663);
   DilutionFunc1013->SetSavedPoint(101,750);
   DilutionFunc1013->SetSavedPoint(102,2750);
   DilutionFunc1013->SetFillColor(19);
   DilutionFunc1013->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1013->SetLineColor(ci);
   DilutionFunc1013->SetLineWidth(3);
   DilutionFunc1013->SetChisquare(9.982667);
   DilutionFunc1013->SetNDF(6);
   DilutionFunc1013->GetXaxis()->SetLabelFont(42);
   DilutionFunc1013->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1013->GetXaxis()->SetTitleFont(42);
   DilutionFunc1013->GetYaxis()->SetLabelFont(42);
   DilutionFunc1013->GetYaxis()->SetTitleFont(42);
   DilutionFunc1013->SetParameter(0,0.09054564);
   DilutionFunc1013->SetParError(0,0.01147847);
   DilutionFunc1013->SetParLimits(0,0,0);
   DilutionFunc1013->SetParameter(1,-0.0001047744);
   DilutionFunc1013->SetParError(1,3.220689e-05);
   DilutionFunc1013->SetParLimits(1,0,0);
   DilutionFunc1013->Draw("SAME");
   
   TLegend *leg = new TLegend(0.125,0.79,0.875,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S18_trackReco","Sim: reco vertices","lpf");
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
   pt_LaTex = pt->AddText("1.66
");
   pt_LaTex = pt->AddText("0.09
#pm0.01
");
   pt_LaTex = pt->AddText("-0.0001
#pm3e-05
");
   pt->Draw();
   S18->Modified();
   S18->cd();
   S18->SetSelected(S18);
}
