void RecoVertexFit_S18()
{
//=========Macro generated from canvas: S18/c
//=========  (Wed Apr 20 00:05:56 2022) by ROOT version 6.24/06
   TCanvas *S18 = new TCanvas("S18", "c",0,0,800,600);
   S18->SetHighLightColor(2);
   S18->Range(467.1931,-0.03875,3024.45,0.14875);
   S18->SetFillColor(0);
   S18->SetBorderMode(0);
   S18->SetBorderSize(2);
   S18->SetFrameBorderMode(0);
   S18->SetFrameBorderMode(0);
   
   Double_t S18_trackReco_fx1011[11] = {
   452.0131,
   653.3092,
   880.5524,
   1123.038,
   1370.896,
   1619.753,
   1866.511,
   2115.078,
   2363.235,
   2612.145,
   2787.407};
   Double_t S18_trackReco_fy1011[11] = {
   0.006587367,
   0.08168876,
   0.0761623,
   0.06079386,
   0.08397168,
   0.07884345,
   0.07039193,
   0.04659772,
   0.05841401,
   0.07426278,
   0.02279272};
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
   0.07577585,
   0.02527539,
   0.01445133,
   0.01185775,
   0.01093664,
   0.01045243,
   0.01061239,
   0.01124848,
   0.01218366,
   0.01196544,
   0.02859223};
   TGraphErrors *gre = new TGraphErrors(11,S18_trackReco_fx1011,S18_trackReco_fy1011,S18_trackReco_fex1011,S18_trackReco_fey1011);
   gre->SetName("S18_trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_trackReco1011 = new TH1F("Graph_S18_trackReco1011","",100,218.4737,3020.947);
   Graph_S18_trackReco1011->SetMinimum(-0.02);
   Graph_S18_trackReco1011->SetMaximum(0.13);
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
   DilutionFunc1012->SetSavedPoint(0,0.07453668);
   DilutionFunc1012->SetSavedPoint(1,0.07447971);
   DilutionFunc1012->SetSavedPoint(2,0.07442114);
   DilutionFunc1012->SetSavedPoint(3,0.07436097);
   DilutionFunc1012->SetSavedPoint(4,0.0742992);
   DilutionFunc1012->SetSavedPoint(5,0.07423582);
   DilutionFunc1012->SetSavedPoint(6,0.07417082);
   DilutionFunc1012->SetSavedPoint(7,0.0741042);
   DilutionFunc1012->SetSavedPoint(8,0.07403596);
   DilutionFunc1012->SetSavedPoint(9,0.07396608);
   DilutionFunc1012->SetSavedPoint(10,0.07389457);
   DilutionFunc1012->SetSavedPoint(11,0.07382142);
   DilutionFunc1012->SetSavedPoint(12,0.07374663);
   DilutionFunc1012->SetSavedPoint(13,0.07367018);
   DilutionFunc1012->SetSavedPoint(14,0.07359208);
   DilutionFunc1012->SetSavedPoint(15,0.07351232);
   DilutionFunc1012->SetSavedPoint(16,0.0734309);
   DilutionFunc1012->SetSavedPoint(17,0.0733478);
   DilutionFunc1012->SetSavedPoint(18,0.07326303);
   DilutionFunc1012->SetSavedPoint(19,0.07317658);
   DilutionFunc1012->SetSavedPoint(20,0.07308845);
   DilutionFunc1012->SetSavedPoint(21,0.07299862);
   DilutionFunc1012->SetSavedPoint(22,0.0729071);
   DilutionFunc1012->SetSavedPoint(23,0.07281388);
   DilutionFunc1012->SetSavedPoint(24,0.07271896);
   DilutionFunc1012->SetSavedPoint(25,0.07262233);
   DilutionFunc1012->SetSavedPoint(26,0.07252398);
   DilutionFunc1012->SetSavedPoint(27,0.07242392);
   DilutionFunc1012->SetSavedPoint(28,0.07232212);
   DilutionFunc1012->SetSavedPoint(29,0.0722186);
   DilutionFunc1012->SetSavedPoint(30,0.07211335);
   DilutionFunc1012->SetSavedPoint(31,0.07200636);
   DilutionFunc1012->SetSavedPoint(32,0.07189762);
   DilutionFunc1012->SetSavedPoint(33,0.07178713);
   DilutionFunc1012->SetSavedPoint(34,0.07167489);
   DilutionFunc1012->SetSavedPoint(35,0.07156089);
   DilutionFunc1012->SetSavedPoint(36,0.07144513);
   DilutionFunc1012->SetSavedPoint(37,0.0713276);
   DilutionFunc1012->SetSavedPoint(38,0.07120829);
   DilutionFunc1012->SetSavedPoint(39,0.07108721);
   DilutionFunc1012->SetSavedPoint(40,0.07096434);
   DilutionFunc1012->SetSavedPoint(41,0.07083968);
   DilutionFunc1012->SetSavedPoint(42,0.07071323);
   DilutionFunc1012->SetSavedPoint(43,0.07058498);
   DilutionFunc1012->SetSavedPoint(44,0.07045493);
   DilutionFunc1012->SetSavedPoint(45,0.07032307);
   DilutionFunc1012->SetSavedPoint(46,0.07018939);
   DilutionFunc1012->SetSavedPoint(47,0.0700539);
   DilutionFunc1012->SetSavedPoint(48,0.06991658);
   DilutionFunc1012->SetSavedPoint(49,0.06977744);
   DilutionFunc1012->SetSavedPoint(50,0.06963646);
   DilutionFunc1012->SetSavedPoint(51,0.06949364);
   DilutionFunc1012->SetSavedPoint(52,0.06934898);
   DilutionFunc1012->SetSavedPoint(53,0.06920248);
   DilutionFunc1012->SetSavedPoint(54,0.06905412);
   DilutionFunc1012->SetSavedPoint(55,0.0689039);
   DilutionFunc1012->SetSavedPoint(56,0.06875182);
   DilutionFunc1012->SetSavedPoint(57,0.06859787);
   DilutionFunc1012->SetSavedPoint(58,0.06844205);
   DilutionFunc1012->SetSavedPoint(59,0.06828435);
   DilutionFunc1012->SetSavedPoint(60,0.06812477);
   DilutionFunc1012->SetSavedPoint(61,0.0679633);
   DilutionFunc1012->SetSavedPoint(62,0.06779994);
   DilutionFunc1012->SetSavedPoint(63,0.06763468);
   DilutionFunc1012->SetSavedPoint(64,0.06746752);
   DilutionFunc1012->SetSavedPoint(65,0.06729845);
   DilutionFunc1012->SetSavedPoint(66,0.06712747);
   DilutionFunc1012->SetSavedPoint(67,0.06695457);
   DilutionFunc1012->SetSavedPoint(68,0.06677975);
   DilutionFunc1012->SetSavedPoint(69,0.066603);
   DilutionFunc1012->SetSavedPoint(70,0.06642432);
   DilutionFunc1012->SetSavedPoint(71,0.0662437);
   DilutionFunc1012->SetSavedPoint(72,0.06606114);
   DilutionFunc1012->SetSavedPoint(73,0.06587663);
   DilutionFunc1012->SetSavedPoint(74,0.06569018);
   DilutionFunc1012->SetSavedPoint(75,0.06550176);
   DilutionFunc1012->SetSavedPoint(76,0.06531138);
   DilutionFunc1012->SetSavedPoint(77,0.06511904);
   DilutionFunc1012->SetSavedPoint(78,0.06492472);
   DilutionFunc1012->SetSavedPoint(79,0.06472843);
   DilutionFunc1012->SetSavedPoint(80,0.06453016);
   DilutionFunc1012->SetSavedPoint(81,0.0643299);
   DilutionFunc1012->SetSavedPoint(82,0.06412765);
   DilutionFunc1012->SetSavedPoint(83,0.0639234);
   DilutionFunc1012->SetSavedPoint(84,0.06371715);
   DilutionFunc1012->SetSavedPoint(85,0.06350889);
   DilutionFunc1012->SetSavedPoint(86,0.06329862);
   DilutionFunc1012->SetSavedPoint(87,0.06308634);
   DilutionFunc1012->SetSavedPoint(88,0.06287204);
   DilutionFunc1012->SetSavedPoint(89,0.06265571);
   DilutionFunc1012->SetSavedPoint(90,0.06243734);
   DilutionFunc1012->SetSavedPoint(91,0.06221695);
   DilutionFunc1012->SetSavedPoint(92,0.06199451);
   DilutionFunc1012->SetSavedPoint(93,0.06177002);
   DilutionFunc1012->SetSavedPoint(94,0.06154349);
   DilutionFunc1012->SetSavedPoint(95,0.06131489);
   DilutionFunc1012->SetSavedPoint(96,0.06108424);
   DilutionFunc1012->SetSavedPoint(97,0.06085152);
   DilutionFunc1012->SetSavedPoint(98,0.06061673);
   DilutionFunc1012->SetSavedPoint(99,0.06037987);
   DilutionFunc1012->SetSavedPoint(100,0.06014093);
   DilutionFunc1012->SetSavedPoint(101,750);
   DilutionFunc1012->SetSavedPoint(102,2750);
   DilutionFunc1012->SetFillColor(19);
   DilutionFunc1012->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1012->SetLineColor(ci);
   DilutionFunc1012->SetLineWidth(3);
   DilutionFunc1012->SetChisquare(7.510836);
   DilutionFunc1012->SetNDF(6);
   DilutionFunc1012->GetXaxis()->SetLabelFont(42);
   DilutionFunc1012->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1012->GetXaxis()->SetTitleFont(42);
   DilutionFunc1012->GetYaxis()->SetLabelFont(42);
   DilutionFunc1012->GetYaxis()->SetTitleFont(42);
   DilutionFunc1012->SetParameter(0,0.0755682);
   DilutionFunc1012->SetParError(0,0.008059061);
   DilutionFunc1012->SetParLimits(0,0,0);
   DilutionFunc1012->SetParameter(1,-8.802286e-05);
   DilutionFunc1012->SetParError(1,3.948611e-05);
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
   DilutionFunc1013->SetSavedPoint(0,0.07453668);
   DilutionFunc1013->SetSavedPoint(1,0.07447971);
   DilutionFunc1013->SetSavedPoint(2,0.07442114);
   DilutionFunc1013->SetSavedPoint(3,0.07436097);
   DilutionFunc1013->SetSavedPoint(4,0.0742992);
   DilutionFunc1013->SetSavedPoint(5,0.07423582);
   DilutionFunc1013->SetSavedPoint(6,0.07417082);
   DilutionFunc1013->SetSavedPoint(7,0.0741042);
   DilutionFunc1013->SetSavedPoint(8,0.07403596);
   DilutionFunc1013->SetSavedPoint(9,0.07396608);
   DilutionFunc1013->SetSavedPoint(10,0.07389457);
   DilutionFunc1013->SetSavedPoint(11,0.07382142);
   DilutionFunc1013->SetSavedPoint(12,0.07374663);
   DilutionFunc1013->SetSavedPoint(13,0.07367018);
   DilutionFunc1013->SetSavedPoint(14,0.07359208);
   DilutionFunc1013->SetSavedPoint(15,0.07351232);
   DilutionFunc1013->SetSavedPoint(16,0.0734309);
   DilutionFunc1013->SetSavedPoint(17,0.0733478);
   DilutionFunc1013->SetSavedPoint(18,0.07326303);
   DilutionFunc1013->SetSavedPoint(19,0.07317658);
   DilutionFunc1013->SetSavedPoint(20,0.07308845);
   DilutionFunc1013->SetSavedPoint(21,0.07299862);
   DilutionFunc1013->SetSavedPoint(22,0.0729071);
   DilutionFunc1013->SetSavedPoint(23,0.07281388);
   DilutionFunc1013->SetSavedPoint(24,0.07271896);
   DilutionFunc1013->SetSavedPoint(25,0.07262233);
   DilutionFunc1013->SetSavedPoint(26,0.07252398);
   DilutionFunc1013->SetSavedPoint(27,0.07242392);
   DilutionFunc1013->SetSavedPoint(28,0.07232212);
   DilutionFunc1013->SetSavedPoint(29,0.0722186);
   DilutionFunc1013->SetSavedPoint(30,0.07211335);
   DilutionFunc1013->SetSavedPoint(31,0.07200636);
   DilutionFunc1013->SetSavedPoint(32,0.07189762);
   DilutionFunc1013->SetSavedPoint(33,0.07178713);
   DilutionFunc1013->SetSavedPoint(34,0.07167489);
   DilutionFunc1013->SetSavedPoint(35,0.07156089);
   DilutionFunc1013->SetSavedPoint(36,0.07144513);
   DilutionFunc1013->SetSavedPoint(37,0.0713276);
   DilutionFunc1013->SetSavedPoint(38,0.07120829);
   DilutionFunc1013->SetSavedPoint(39,0.07108721);
   DilutionFunc1013->SetSavedPoint(40,0.07096434);
   DilutionFunc1013->SetSavedPoint(41,0.07083968);
   DilutionFunc1013->SetSavedPoint(42,0.07071323);
   DilutionFunc1013->SetSavedPoint(43,0.07058498);
   DilutionFunc1013->SetSavedPoint(44,0.07045493);
   DilutionFunc1013->SetSavedPoint(45,0.07032307);
   DilutionFunc1013->SetSavedPoint(46,0.07018939);
   DilutionFunc1013->SetSavedPoint(47,0.0700539);
   DilutionFunc1013->SetSavedPoint(48,0.06991658);
   DilutionFunc1013->SetSavedPoint(49,0.06977744);
   DilutionFunc1013->SetSavedPoint(50,0.06963646);
   DilutionFunc1013->SetSavedPoint(51,0.06949364);
   DilutionFunc1013->SetSavedPoint(52,0.06934898);
   DilutionFunc1013->SetSavedPoint(53,0.06920248);
   DilutionFunc1013->SetSavedPoint(54,0.06905412);
   DilutionFunc1013->SetSavedPoint(55,0.0689039);
   DilutionFunc1013->SetSavedPoint(56,0.06875182);
   DilutionFunc1013->SetSavedPoint(57,0.06859787);
   DilutionFunc1013->SetSavedPoint(58,0.06844205);
   DilutionFunc1013->SetSavedPoint(59,0.06828435);
   DilutionFunc1013->SetSavedPoint(60,0.06812477);
   DilutionFunc1013->SetSavedPoint(61,0.0679633);
   DilutionFunc1013->SetSavedPoint(62,0.06779994);
   DilutionFunc1013->SetSavedPoint(63,0.06763468);
   DilutionFunc1013->SetSavedPoint(64,0.06746752);
   DilutionFunc1013->SetSavedPoint(65,0.06729845);
   DilutionFunc1013->SetSavedPoint(66,0.06712747);
   DilutionFunc1013->SetSavedPoint(67,0.06695457);
   DilutionFunc1013->SetSavedPoint(68,0.06677975);
   DilutionFunc1013->SetSavedPoint(69,0.066603);
   DilutionFunc1013->SetSavedPoint(70,0.06642432);
   DilutionFunc1013->SetSavedPoint(71,0.0662437);
   DilutionFunc1013->SetSavedPoint(72,0.06606114);
   DilutionFunc1013->SetSavedPoint(73,0.06587663);
   DilutionFunc1013->SetSavedPoint(74,0.06569018);
   DilutionFunc1013->SetSavedPoint(75,0.06550176);
   DilutionFunc1013->SetSavedPoint(76,0.06531138);
   DilutionFunc1013->SetSavedPoint(77,0.06511904);
   DilutionFunc1013->SetSavedPoint(78,0.06492472);
   DilutionFunc1013->SetSavedPoint(79,0.06472843);
   DilutionFunc1013->SetSavedPoint(80,0.06453016);
   DilutionFunc1013->SetSavedPoint(81,0.0643299);
   DilutionFunc1013->SetSavedPoint(82,0.06412765);
   DilutionFunc1013->SetSavedPoint(83,0.0639234);
   DilutionFunc1013->SetSavedPoint(84,0.06371715);
   DilutionFunc1013->SetSavedPoint(85,0.06350889);
   DilutionFunc1013->SetSavedPoint(86,0.06329862);
   DilutionFunc1013->SetSavedPoint(87,0.06308634);
   DilutionFunc1013->SetSavedPoint(88,0.06287204);
   DilutionFunc1013->SetSavedPoint(89,0.06265571);
   DilutionFunc1013->SetSavedPoint(90,0.06243734);
   DilutionFunc1013->SetSavedPoint(91,0.06221695);
   DilutionFunc1013->SetSavedPoint(92,0.06199451);
   DilutionFunc1013->SetSavedPoint(93,0.06177002);
   DilutionFunc1013->SetSavedPoint(94,0.06154349);
   DilutionFunc1013->SetSavedPoint(95,0.06131489);
   DilutionFunc1013->SetSavedPoint(96,0.06108424);
   DilutionFunc1013->SetSavedPoint(97,0.06085152);
   DilutionFunc1013->SetSavedPoint(98,0.06061673);
   DilutionFunc1013->SetSavedPoint(99,0.06037987);
   DilutionFunc1013->SetSavedPoint(100,0.06014093);
   DilutionFunc1013->SetSavedPoint(101,750);
   DilutionFunc1013->SetSavedPoint(102,2750);
   DilutionFunc1013->SetFillColor(19);
   DilutionFunc1013->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1013->SetLineColor(ci);
   DilutionFunc1013->SetLineWidth(3);
   DilutionFunc1013->SetChisquare(7.510836);
   DilutionFunc1013->SetNDF(6);
   DilutionFunc1013->GetXaxis()->SetLabelFont(42);
   DilutionFunc1013->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1013->GetXaxis()->SetTitleFont(42);
   DilutionFunc1013->GetYaxis()->SetLabelFont(42);
   DilutionFunc1013->GetYaxis()->SetTitleFont(42);
   DilutionFunc1013->SetParameter(0,0.0755682);
   DilutionFunc1013->SetParError(0,0.008059061);
   DilutionFunc1013->SetParLimits(0,0,0);
   DilutionFunc1013->SetParameter(1,-8.802286e-05);
   DilutionFunc1013->SetParError(1,3.948611e-05);
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
   pt_LaTex = pt->AddText("1.25
");
   pt_LaTex = pt->AddText("0.08
#pm0.008
");
   pt_LaTex = pt->AddText("-9e-05
#pm4e-05
");
   pt->Draw();
   S18->Modified();
   S18->cd();
   S18->SetSelected(S18);
}
