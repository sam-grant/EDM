void RecoVertexFit_S18()
{
//=========Macro generated from canvas: S18/c
//=========  (Tue Dec  7 01:11:50 2021) by ROOT version 6.24/04
   TCanvas *S18 = new TCanvas("S18", "c",0,0,800,600);
   S18->SetHighLightColor(2);
   S18->Range(467.2958,-0.015,3024.641,0.135);
   S18->SetFillColor(0);
   S18->SetBorderMode(0);
   S18->SetBorderSize(2);
   S18->SetFrameBorderMode(0);
   S18->SetFrameBorderMode(0);
   
   Double_t S18_trackReco_fx1063[11] = {
   452.1153,
   653.259,
   880.6386,
   1123.037,
   1370.835,
   1619.675,
   1866.351,
   2115.144,
   2363.223,
   2612.271,
   2787.59};
   Double_t S18_trackReco_fy1063[11] = {
   -0.1983612,
   0.1007469,
   0.04247719,
   0.07099755,
   0.06238868,
   0.08473406,
   0.07700416,
   0.03842846,
   0.03498285,
   0.09140762,
   0.02762337};
   Double_t S18_trackReco_fex1063[11] = {
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
   Double_t S18_trackReco_fey1063[11] = {
   0.1107707,
   0.03705102,
   0.02115334,
   0.0173629,
   0.01601287,
   0.01530312,
   0.01556238,
   0.01646739,
   0.01786378,
   0.01757159,
   0.0418298};
   TGraphErrors *gre = new TGraphErrors(11,S18_trackReco_fx1063,S18_trackReco_fy1063,S18_trackReco_fex1063,S18_trackReco_fey1063);
   gre->SetName("S18_trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_trackReco1063 = new TH1F("Graph_S18_trackReco1063","",100,218.5678,3021.138);
   Graph_S18_trackReco1063->SetMinimum(0);
   Graph_S18_trackReco1063->SetMaximum(0.12);
   Graph_S18_trackReco1063->SetDirectory(0);
   Graph_S18_trackReco1063->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S18_trackReco1063->SetLineColor(ci);
   Graph_S18_trackReco1063->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_trackReco1063->GetXaxis()->SetRange(19,91);
   Graph_S18_trackReco1063->GetXaxis()->CenterTitle(true);
   Graph_S18_trackReco1063->GetXaxis()->SetLabelFont(42);
   Graph_S18_trackReco1063->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_trackReco1063->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_trackReco1063->GetXaxis()->SetTitleFont(42);
   Graph_S18_trackReco1063->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S18_trackReco1063->GetYaxis()->CenterTitle(true);
   Graph_S18_trackReco1063->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_trackReco1063->GetYaxis()->SetLabelFont(42);
   Graph_S18_trackReco1063->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_trackReco1063->GetYaxis()->SetTitleOffset(1.25);
   Graph_S18_trackReco1063->GetYaxis()->SetTitleFont(42);
   Graph_S18_trackReco1063->GetZaxis()->SetLabelFont(42);
   Graph_S18_trackReco1063->GetZaxis()->SetTitleOffset(1);
   Graph_S18_trackReco1063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_trackReco1063);
   
   
   TF1 *ParabolaFunc1064 = new TF1("*ParabolaFunc",750,2750,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2750,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1064->SetRange(750,2750);
   ParabolaFunc1064->SetName("ParabolaFunc");
   ParabolaFunc1064->SetTitle("ParabolaFunc");
   ParabolaFunc1064->SetSavedPoint(0,0.05885653);
   ParabolaFunc1064->SetSavedPoint(1,0.05911022);
   ParabolaFunc1064->SetSavedPoint(2,0.05935942);
   ParabolaFunc1064->SetSavedPoint(3,0.05960414);
   ParabolaFunc1064->SetSavedPoint(4,0.05984438);
   ParabolaFunc1064->SetSavedPoint(5,0.06008014);
   ParabolaFunc1064->SetSavedPoint(6,0.06031142);
   ParabolaFunc1064->SetSavedPoint(7,0.06053822);
   ParabolaFunc1064->SetSavedPoint(8,0.06076054);
   ParabolaFunc1064->SetSavedPoint(9,0.06097838);
   ParabolaFunc1064->SetSavedPoint(10,0.06119174);
   ParabolaFunc1064->SetSavedPoint(11,0.06140062);
   ParabolaFunc1064->SetSavedPoint(12,0.06160501);
   ParabolaFunc1064->SetSavedPoint(13,0.06180493);
   ParabolaFunc1064->SetSavedPoint(14,0.06200037);
   ParabolaFunc1064->SetSavedPoint(15,0.06219133);
   ParabolaFunc1064->SetSavedPoint(16,0.06237781);
   ParabolaFunc1064->SetSavedPoint(17,0.06255981);
   ParabolaFunc1064->SetSavedPoint(18,0.06273733);
   ParabolaFunc1064->SetSavedPoint(19,0.06291036);
   ParabolaFunc1064->SetSavedPoint(20,0.06307892);
   ParabolaFunc1064->SetSavedPoint(21,0.063243);
   ParabolaFunc1064->SetSavedPoint(22,0.0634026);
   ParabolaFunc1064->SetSavedPoint(23,0.06355771);
   ParabolaFunc1064->SetSavedPoint(24,0.06370835);
   ParabolaFunc1064->SetSavedPoint(25,0.06385451);
   ParabolaFunc1064->SetSavedPoint(26,0.06399618);
   ParabolaFunc1064->SetSavedPoint(27,0.06413338);
   ParabolaFunc1064->SetSavedPoint(28,0.0642661);
   ParabolaFunc1064->SetSavedPoint(29,0.06439433);
   ParabolaFunc1064->SetSavedPoint(30,0.06451809);
   ParabolaFunc1064->SetSavedPoint(31,0.06463736);
   ParabolaFunc1064->SetSavedPoint(32,0.06475216);
   ParabolaFunc1064->SetSavedPoint(33,0.06486247);
   ParabolaFunc1064->SetSavedPoint(34,0.06496831);
   ParabolaFunc1064->SetSavedPoint(35,0.06506966);
   ParabolaFunc1064->SetSavedPoint(36,0.06516654);
   ParabolaFunc1064->SetSavedPoint(37,0.06525893);
   ParabolaFunc1064->SetSavedPoint(38,0.06534685);
   ParabolaFunc1064->SetSavedPoint(39,0.06543028);
   ParabolaFunc1064->SetSavedPoint(40,0.06550924);
   ParabolaFunc1064->SetSavedPoint(41,0.06558371);
   ParabolaFunc1064->SetSavedPoint(42,0.0656537);
   ParabolaFunc1064->SetSavedPoint(43,0.06571922);
   ParabolaFunc1064->SetSavedPoint(44,0.06578025);
   ParabolaFunc1064->SetSavedPoint(45,0.0658368);
   ParabolaFunc1064->SetSavedPoint(46,0.06588888);
   ParabolaFunc1064->SetSavedPoint(47,0.06593647);
   ParabolaFunc1064->SetSavedPoint(48,0.06597958);
   ParabolaFunc1064->SetSavedPoint(49,0.06601821);
   ParabolaFunc1064->SetSavedPoint(50,0.06605237);
   ParabolaFunc1064->SetSavedPoint(51,0.06608204);
   ParabolaFunc1064->SetSavedPoint(52,0.06610723);
   ParabolaFunc1064->SetSavedPoint(53,0.06612794);
   ParabolaFunc1064->SetSavedPoint(54,0.06614417);
   ParabolaFunc1064->SetSavedPoint(55,0.06615592);
   ParabolaFunc1064->SetSavedPoint(56,0.0661632);
   ParabolaFunc1064->SetSavedPoint(57,0.06616599);
   ParabolaFunc1064->SetSavedPoint(58,0.0661643);
   ParabolaFunc1064->SetSavedPoint(59,0.06615813);
   ParabolaFunc1064->SetSavedPoint(60,0.06614748);
   ParabolaFunc1064->SetSavedPoint(61,0.06613235);
   ParabolaFunc1064->SetSavedPoint(62,0.06611274);
   ParabolaFunc1064->SetSavedPoint(63,0.06608865);
   ParabolaFunc1064->SetSavedPoint(64,0.06606008);
   ParabolaFunc1064->SetSavedPoint(65,0.06602703);
   ParabolaFunc1064->SetSavedPoint(66,0.0659895);
   ParabolaFunc1064->SetSavedPoint(67,0.06594749);
   ParabolaFunc1064->SetSavedPoint(68,0.065901);
   ParabolaFunc1064->SetSavedPoint(69,0.06585002);
   ParabolaFunc1064->SetSavedPoint(70,0.06579457);
   ParabolaFunc1064->SetSavedPoint(71,0.06573464);
   ParabolaFunc1064->SetSavedPoint(72,0.06567023);
   ParabolaFunc1064->SetSavedPoint(73,0.06560134);
   ParabolaFunc1064->SetSavedPoint(74,0.06552797);
   ParabolaFunc1064->SetSavedPoint(75,0.06545011);
   ParabolaFunc1064->SetSavedPoint(76,0.06536778);
   ParabolaFunc1064->SetSavedPoint(77,0.06528097);
   ParabolaFunc1064->SetSavedPoint(78,0.06518968);
   ParabolaFunc1064->SetSavedPoint(79,0.0650939);
   ParabolaFunc1064->SetSavedPoint(80,0.06499365);
   ParabolaFunc1064->SetSavedPoint(81,0.06488892);
   ParabolaFunc1064->SetSavedPoint(82,0.0647797);
   ParabolaFunc1064->SetSavedPoint(83,0.06466601);
   ParabolaFunc1064->SetSavedPoint(84,0.06454783);
   ParabolaFunc1064->SetSavedPoint(85,0.06442518);
   ParabolaFunc1064->SetSavedPoint(86,0.06429805);
   ParabolaFunc1064->SetSavedPoint(87,0.06416643);
   ParabolaFunc1064->SetSavedPoint(88,0.06403034);
   ParabolaFunc1064->SetSavedPoint(89,0.06388976);
   ParabolaFunc1064->SetSavedPoint(90,0.06374471);
   ParabolaFunc1064->SetSavedPoint(91,0.06359517);
   ParabolaFunc1064->SetSavedPoint(92,0.06344116);
   ParabolaFunc1064->SetSavedPoint(93,0.06328266);
   ParabolaFunc1064->SetSavedPoint(94,0.06311969);
   ParabolaFunc1064->SetSavedPoint(95,0.06295223);
   ParabolaFunc1064->SetSavedPoint(96,0.06278029);
   ParabolaFunc1064->SetSavedPoint(97,0.06260388);
   ParabolaFunc1064->SetSavedPoint(98,0.06242298);
   ParabolaFunc1064->SetSavedPoint(99,0.0622376);
   ParabolaFunc1064->SetSavedPoint(100,0.06204775);
   ParabolaFunc1064->SetSavedPoint(101,750);
   ParabolaFunc1064->SetSavedPoint(102,2750);
   ParabolaFunc1064->SetFillColor(19);
   ParabolaFunc1064->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1064->SetLineColor(ci);
   ParabolaFunc1064->SetLineWidth(3);
   ParabolaFunc1064->SetChisquare(11.14017);
   ParabolaFunc1064->SetNDF(5);
   ParabolaFunc1064->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1064->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1064->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1064->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1064->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1064->SetParameter(0,-5.600225e-09);
   ParabolaFunc1064->SetParError(0,2.237147e-08);
   ParabolaFunc1064->SetParLimits(0,0,0);
   ParabolaFunc1064->SetParameter(1,2.11964e-05);
   ParabolaFunc1064->SetParError(1,8.009851e-05);
   ParabolaFunc1064->SetParLimits(1,0,0);
   ParabolaFunc1064->SetParameter(2,0.04610936);
   ParabolaFunc1064->SetParError(2,0.06737915);
   ParabolaFunc1064->SetParLimits(2,0,0);
   ParabolaFunc1064->SetParent(gre);
   gre->GetListOfFunctions()->Add(ParabolaFunc1064);
   gre->Draw("ap");
   
   TF1 *ParabolaFunc1065 = new TF1("*ParabolaFunc",750,2750,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2750,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1065->SetRange(750,2750);
   ParabolaFunc1065->SetName("ParabolaFunc");
   ParabolaFunc1065->SetTitle("ParabolaFunc");
   ParabolaFunc1065->SetSavedPoint(0,0.05885653);
   ParabolaFunc1065->SetSavedPoint(1,0.05911022);
   ParabolaFunc1065->SetSavedPoint(2,0.05935942);
   ParabolaFunc1065->SetSavedPoint(3,0.05960414);
   ParabolaFunc1065->SetSavedPoint(4,0.05984438);
   ParabolaFunc1065->SetSavedPoint(5,0.06008014);
   ParabolaFunc1065->SetSavedPoint(6,0.06031142);
   ParabolaFunc1065->SetSavedPoint(7,0.06053822);
   ParabolaFunc1065->SetSavedPoint(8,0.06076054);
   ParabolaFunc1065->SetSavedPoint(9,0.06097838);
   ParabolaFunc1065->SetSavedPoint(10,0.06119174);
   ParabolaFunc1065->SetSavedPoint(11,0.06140062);
   ParabolaFunc1065->SetSavedPoint(12,0.06160501);
   ParabolaFunc1065->SetSavedPoint(13,0.06180493);
   ParabolaFunc1065->SetSavedPoint(14,0.06200037);
   ParabolaFunc1065->SetSavedPoint(15,0.06219133);
   ParabolaFunc1065->SetSavedPoint(16,0.06237781);
   ParabolaFunc1065->SetSavedPoint(17,0.06255981);
   ParabolaFunc1065->SetSavedPoint(18,0.06273733);
   ParabolaFunc1065->SetSavedPoint(19,0.06291036);
   ParabolaFunc1065->SetSavedPoint(20,0.06307892);
   ParabolaFunc1065->SetSavedPoint(21,0.063243);
   ParabolaFunc1065->SetSavedPoint(22,0.0634026);
   ParabolaFunc1065->SetSavedPoint(23,0.06355771);
   ParabolaFunc1065->SetSavedPoint(24,0.06370835);
   ParabolaFunc1065->SetSavedPoint(25,0.06385451);
   ParabolaFunc1065->SetSavedPoint(26,0.06399618);
   ParabolaFunc1065->SetSavedPoint(27,0.06413338);
   ParabolaFunc1065->SetSavedPoint(28,0.0642661);
   ParabolaFunc1065->SetSavedPoint(29,0.06439433);
   ParabolaFunc1065->SetSavedPoint(30,0.06451809);
   ParabolaFunc1065->SetSavedPoint(31,0.06463736);
   ParabolaFunc1065->SetSavedPoint(32,0.06475216);
   ParabolaFunc1065->SetSavedPoint(33,0.06486247);
   ParabolaFunc1065->SetSavedPoint(34,0.06496831);
   ParabolaFunc1065->SetSavedPoint(35,0.06506966);
   ParabolaFunc1065->SetSavedPoint(36,0.06516654);
   ParabolaFunc1065->SetSavedPoint(37,0.06525893);
   ParabolaFunc1065->SetSavedPoint(38,0.06534685);
   ParabolaFunc1065->SetSavedPoint(39,0.06543028);
   ParabolaFunc1065->SetSavedPoint(40,0.06550924);
   ParabolaFunc1065->SetSavedPoint(41,0.06558371);
   ParabolaFunc1065->SetSavedPoint(42,0.0656537);
   ParabolaFunc1065->SetSavedPoint(43,0.06571922);
   ParabolaFunc1065->SetSavedPoint(44,0.06578025);
   ParabolaFunc1065->SetSavedPoint(45,0.0658368);
   ParabolaFunc1065->SetSavedPoint(46,0.06588888);
   ParabolaFunc1065->SetSavedPoint(47,0.06593647);
   ParabolaFunc1065->SetSavedPoint(48,0.06597958);
   ParabolaFunc1065->SetSavedPoint(49,0.06601821);
   ParabolaFunc1065->SetSavedPoint(50,0.06605237);
   ParabolaFunc1065->SetSavedPoint(51,0.06608204);
   ParabolaFunc1065->SetSavedPoint(52,0.06610723);
   ParabolaFunc1065->SetSavedPoint(53,0.06612794);
   ParabolaFunc1065->SetSavedPoint(54,0.06614417);
   ParabolaFunc1065->SetSavedPoint(55,0.06615592);
   ParabolaFunc1065->SetSavedPoint(56,0.0661632);
   ParabolaFunc1065->SetSavedPoint(57,0.06616599);
   ParabolaFunc1065->SetSavedPoint(58,0.0661643);
   ParabolaFunc1065->SetSavedPoint(59,0.06615813);
   ParabolaFunc1065->SetSavedPoint(60,0.06614748);
   ParabolaFunc1065->SetSavedPoint(61,0.06613235);
   ParabolaFunc1065->SetSavedPoint(62,0.06611274);
   ParabolaFunc1065->SetSavedPoint(63,0.06608865);
   ParabolaFunc1065->SetSavedPoint(64,0.06606008);
   ParabolaFunc1065->SetSavedPoint(65,0.06602703);
   ParabolaFunc1065->SetSavedPoint(66,0.0659895);
   ParabolaFunc1065->SetSavedPoint(67,0.06594749);
   ParabolaFunc1065->SetSavedPoint(68,0.065901);
   ParabolaFunc1065->SetSavedPoint(69,0.06585002);
   ParabolaFunc1065->SetSavedPoint(70,0.06579457);
   ParabolaFunc1065->SetSavedPoint(71,0.06573464);
   ParabolaFunc1065->SetSavedPoint(72,0.06567023);
   ParabolaFunc1065->SetSavedPoint(73,0.06560134);
   ParabolaFunc1065->SetSavedPoint(74,0.06552797);
   ParabolaFunc1065->SetSavedPoint(75,0.06545011);
   ParabolaFunc1065->SetSavedPoint(76,0.06536778);
   ParabolaFunc1065->SetSavedPoint(77,0.06528097);
   ParabolaFunc1065->SetSavedPoint(78,0.06518968);
   ParabolaFunc1065->SetSavedPoint(79,0.0650939);
   ParabolaFunc1065->SetSavedPoint(80,0.06499365);
   ParabolaFunc1065->SetSavedPoint(81,0.06488892);
   ParabolaFunc1065->SetSavedPoint(82,0.0647797);
   ParabolaFunc1065->SetSavedPoint(83,0.06466601);
   ParabolaFunc1065->SetSavedPoint(84,0.06454783);
   ParabolaFunc1065->SetSavedPoint(85,0.06442518);
   ParabolaFunc1065->SetSavedPoint(86,0.06429805);
   ParabolaFunc1065->SetSavedPoint(87,0.06416643);
   ParabolaFunc1065->SetSavedPoint(88,0.06403034);
   ParabolaFunc1065->SetSavedPoint(89,0.06388976);
   ParabolaFunc1065->SetSavedPoint(90,0.06374471);
   ParabolaFunc1065->SetSavedPoint(91,0.06359517);
   ParabolaFunc1065->SetSavedPoint(92,0.06344116);
   ParabolaFunc1065->SetSavedPoint(93,0.06328266);
   ParabolaFunc1065->SetSavedPoint(94,0.06311969);
   ParabolaFunc1065->SetSavedPoint(95,0.06295223);
   ParabolaFunc1065->SetSavedPoint(96,0.06278029);
   ParabolaFunc1065->SetSavedPoint(97,0.06260388);
   ParabolaFunc1065->SetSavedPoint(98,0.06242298);
   ParabolaFunc1065->SetSavedPoint(99,0.0622376);
   ParabolaFunc1065->SetSavedPoint(100,0.06204775);
   ParabolaFunc1065->SetSavedPoint(101,750);
   ParabolaFunc1065->SetSavedPoint(102,2750);
   ParabolaFunc1065->SetFillColor(19);
   ParabolaFunc1065->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1065->SetLineColor(ci);
   ParabolaFunc1065->SetLineWidth(3);
   ParabolaFunc1065->SetChisquare(11.14017);
   ParabolaFunc1065->SetNDF(5);
   ParabolaFunc1065->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1065->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1065->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1065->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1065->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1065->SetParameter(0,-5.600225e-09);
   ParabolaFunc1065->SetParError(0,2.237147e-08);
   ParabolaFunc1065->SetParLimits(0,0,0);
   ParabolaFunc1065->SetParameter(1,2.11964e-05);
   ParabolaFunc1065->SetParError(1,8.009851e-05);
   ParabolaFunc1065->SetParLimits(1,0,0);
   ParabolaFunc1065->SetParameter(2,0.04610936);
   ParabolaFunc1065->SetParError(2,0.06737915);
   ParabolaFunc1065->SetParLimits(2,0,0);
   ParabolaFunc1065->Draw("SAME");
   
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
   pt_LaTex = pt->AddText("2.23
");
   pt_LaTex = pt->AddText("-6e-09
#pm2e-08
");
   pt_LaTex = pt->AddText("2e-05
#pm8e-05
");
   pt_LaTex = pt->AddText("0.05
#pm0.07
");
   pt->Draw();
   S18->Modified();
   S18->cd();
   S18->SetSelected(S18);
}
