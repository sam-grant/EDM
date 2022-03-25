void RecoVertexFit_S18()
{
//=========Macro generated from canvas: S18/c
//=========  (Tue Mar 22 09:46:12 2022) by ROOT version 6.24/06
   TCanvas *S18 = new TCanvas("S18", "c",0,0,800,600);
   S18->SetHighLightColor(2);
   S18->Range(467.2235,-0.03875,3024.421,0.14875);
   S18->SetFillColor(0);
   S18->SetBorderMode(0);
   S18->SetBorderSize(2);
   S18->SetFrameBorderMode(0);
   S18->SetFrameBorderMode(0);
   
   Double_t S18_trackReco_fx1011[11] = {
   452.0438,
   653.3118,
   880.5354,
   1123.03,
   1370.823,
   1619.719,
   1866.49,
   2115.091,
   2363.256,
   2612.028,
   2787.384};
   Double_t S18_trackReco_fy1011[11] = {
   -0.05397701,
   0.0761622,
   0.07256898,
   0.0523312,
   0.0738094,
   0.07452596,
   0.0694339,
   0.04485419,
   0.05136347,
   0.07548465,
   0.01083791};
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
   0.07508497,
   0.02503315,
   0.01430643,
   0.01173752,
   0.0108368,
   0.01035462,
   0.01051477,
   0.01113449,
   0.01207544,
   0.01185922,
   0.02827062};
   TGraphErrors *gre = new TGraphErrors(11,S18_trackReco_fx1011,S18_trackReco_fy1011,S18_trackReco_fex1011,S18_trackReco_fey1011);
   gre->SetName("S18_trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_trackReco1011 = new TH1F("Graph_S18_trackReco1011","",100,218.5098,3020.918);
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
   DilutionFunc1012->SetSavedPoint(0,0.06700918);
   DilutionFunc1012->SetSavedPoint(1,0.06698323);
   DilutionFunc1012->SetSavedPoint(2,0.06695655);
   DilutionFunc1012->SetSavedPoint(3,0.06692916);
   DilutionFunc1012->SetSavedPoint(4,0.06690105);
   DilutionFunc1012->SetSavedPoint(5,0.06687223);
   DilutionFunc1012->SetSavedPoint(6,0.06684267);
   DilutionFunc1012->SetSavedPoint(7,0.0668124);
   DilutionFunc1012->SetSavedPoint(8,0.0667814);
   DilutionFunc1012->SetSavedPoint(9,0.06674967);
   DilutionFunc1012->SetSavedPoint(10,0.06671722);
   DilutionFunc1012->SetSavedPoint(11,0.06668403);
   DilutionFunc1012->SetSavedPoint(12,0.06665012);
   DilutionFunc1012->SetSavedPoint(13,0.06661546);
   DilutionFunc1012->SetSavedPoint(14,0.06658008);
   DilutionFunc1012->SetSavedPoint(15,0.06654396);
   DilutionFunc1012->SetSavedPoint(16,0.06650709);
   DilutionFunc1012->SetSavedPoint(17,0.06646949);
   DilutionFunc1012->SetSavedPoint(18,0.06643115);
   DilutionFunc1012->SetSavedPoint(19,0.06639206);
   DilutionFunc1012->SetSavedPoint(20,0.06635223);
   DilutionFunc1012->SetSavedPoint(21,0.06631165);
   DilutionFunc1012->SetSavedPoint(22,0.06627032);
   DilutionFunc1012->SetSavedPoint(23,0.06622825);
   DilutionFunc1012->SetSavedPoint(24,0.06618542);
   DilutionFunc1012->SetSavedPoint(25,0.06614184);
   DilutionFunc1012->SetSavedPoint(26,0.0660975);
   DilutionFunc1012->SetSavedPoint(27,0.06605241);
   DilutionFunc1012->SetSavedPoint(28,0.06600655);
   DilutionFunc1012->SetSavedPoint(29,0.06595994);
   DilutionFunc1012->SetSavedPoint(30,0.06591257);
   DilutionFunc1012->SetSavedPoint(31,0.06586443);
   DilutionFunc1012->SetSavedPoint(32,0.06581553);
   DilutionFunc1012->SetSavedPoint(33,0.06576586);
   DilutionFunc1012->SetSavedPoint(34,0.06571542);
   DilutionFunc1012->SetSavedPoint(35,0.06566421);
   DilutionFunc1012->SetSavedPoint(36,0.06561224);
   DilutionFunc1012->SetSavedPoint(37,0.06555948);
   DilutionFunc1012->SetSavedPoint(38,0.06550596);
   DilutionFunc1012->SetSavedPoint(39,0.06545166);
   DilutionFunc1012->SetSavedPoint(40,0.06539657);
   DilutionFunc1012->SetSavedPoint(41,0.06534071);
   DilutionFunc1012->SetSavedPoint(42,0.06528407);
   DilutionFunc1012->SetSavedPoint(43,0.06522664);
   DilutionFunc1012->SetSavedPoint(44,0.06516843);
   DilutionFunc1012->SetSavedPoint(45,0.06510944);
   DilutionFunc1012->SetSavedPoint(46,0.06504965);
   DilutionFunc1012->SetSavedPoint(47,0.06498908);
   DilutionFunc1012->SetSavedPoint(48,0.06492771);
   DilutionFunc1012->SetSavedPoint(49,0.06486555);
   DilutionFunc1012->SetSavedPoint(50,0.0648026);
   DilutionFunc1012->SetSavedPoint(51,0.06473885);
   DilutionFunc1012->SetSavedPoint(52,0.0646743);
   DilutionFunc1012->SetSavedPoint(53,0.06460895);
   DilutionFunc1012->SetSavedPoint(54,0.0645428);
   DilutionFunc1012->SetSavedPoint(55,0.06447585);
   DilutionFunc1012->SetSavedPoint(56,0.06440809);
   DilutionFunc1012->SetSavedPoint(57,0.06433953);
   DilutionFunc1012->SetSavedPoint(58,0.06427016);
   DilutionFunc1012->SetSavedPoint(59,0.06419998);
   DilutionFunc1012->SetSavedPoint(60,0.06412899);
   DilutionFunc1012->SetSavedPoint(61,0.06405718);
   DilutionFunc1012->SetSavedPoint(62,0.06398456);
   DilutionFunc1012->SetSavedPoint(63,0.06391113);
   DilutionFunc1012->SetSavedPoint(64,0.06383687);
   DilutionFunc1012->SetSavedPoint(65,0.0637618);
   DilutionFunc1012->SetSavedPoint(66,0.06368591);
   DilutionFunc1012->SetSavedPoint(67,0.06360919);
   DilutionFunc1012->SetSavedPoint(68,0.06353165);
   DilutionFunc1012->SetSavedPoint(69,0.06345328);
   DilutionFunc1012->SetSavedPoint(70,0.06337409);
   DilutionFunc1012->SetSavedPoint(71,0.06329406);
   DilutionFunc1012->SetSavedPoint(72,0.0632132);
   DilutionFunc1012->SetSavedPoint(73,0.06313152);
   DilutionFunc1012->SetSavedPoint(74,0.06304899);
   DilutionFunc1012->SetSavedPoint(75,0.06296563);
   DilutionFunc1012->SetSavedPoint(76,0.06288144);
   DilutionFunc1012->SetSavedPoint(77,0.0627964);
   DilutionFunc1012->SetSavedPoint(78,0.06271052);
   DilutionFunc1012->SetSavedPoint(79,0.0626238);
   DilutionFunc1012->SetSavedPoint(80,0.06253624);
   DilutionFunc1012->SetSavedPoint(81,0.06244783);
   DilutionFunc1012->SetSavedPoint(82,0.06235857);
   DilutionFunc1012->SetSavedPoint(83,0.06226847);
   DilutionFunc1012->SetSavedPoint(84,0.06217751);
   DilutionFunc1012->SetSavedPoint(85,0.0620857);
   DilutionFunc1012->SetSavedPoint(86,0.06199303);
   DilutionFunc1012->SetSavedPoint(87,0.06189951);
   DilutionFunc1012->SetSavedPoint(88,0.06180513);
   DilutionFunc1012->SetSavedPoint(89,0.0617099);
   DilutionFunc1012->SetSavedPoint(90,0.0616138);
   DilutionFunc1012->SetSavedPoint(91,0.06151684);
   DilutionFunc1012->SetSavedPoint(92,0.06141901);
   DilutionFunc1012->SetSavedPoint(93,0.06132032);
   DilutionFunc1012->SetSavedPoint(94,0.06122077);
   DilutionFunc1012->SetSavedPoint(95,0.06112034);
   DilutionFunc1012->SetSavedPoint(96,0.06101904);
   DilutionFunc1012->SetSavedPoint(97,0.06091687);
   DilutionFunc1012->SetSavedPoint(98,0.06081383);
   DilutionFunc1012->SetSavedPoint(99,0.06070991);
   DilutionFunc1012->SetSavedPoint(100,0.06060511);
   DilutionFunc1012->SetSavedPoint(101,750);
   DilutionFunc1012->SetSavedPoint(102,2750);
   DilutionFunc1012->SetFillColor(19);
   DilutionFunc1012->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1012->SetLineColor(ci);
   DilutionFunc1012->SetLineWidth(3);
   DilutionFunc1012->SetChisquare(8.259089);
   DilutionFunc1012->SetNDF(6);
   DilutionFunc1012->GetXaxis()->SetLabelFont(42);
   DilutionFunc1012->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1012->GetXaxis()->SetTitleFont(42);
   DilutionFunc1012->GetYaxis()->SetLabelFont(42);
   DilutionFunc1012->GetYaxis()->SetTitleFont(42);
   DilutionFunc1012->SetParameter(0,0.06748193);
   DilutionFunc1012->SetParError(0,0.008041025);
   DilutionFunc1012->SetParLimits(0,0,0);
   DilutionFunc1012->SetParameter(1,-6.343332e-05);
   DilutionFunc1012->SetParError(1,6.719519e-05);
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
   DilutionFunc1013->SetSavedPoint(0,0.06700918);
   DilutionFunc1013->SetSavedPoint(1,0.06698323);
   DilutionFunc1013->SetSavedPoint(2,0.06695655);
   DilutionFunc1013->SetSavedPoint(3,0.06692916);
   DilutionFunc1013->SetSavedPoint(4,0.06690105);
   DilutionFunc1013->SetSavedPoint(5,0.06687223);
   DilutionFunc1013->SetSavedPoint(6,0.06684267);
   DilutionFunc1013->SetSavedPoint(7,0.0668124);
   DilutionFunc1013->SetSavedPoint(8,0.0667814);
   DilutionFunc1013->SetSavedPoint(9,0.06674967);
   DilutionFunc1013->SetSavedPoint(10,0.06671722);
   DilutionFunc1013->SetSavedPoint(11,0.06668403);
   DilutionFunc1013->SetSavedPoint(12,0.06665012);
   DilutionFunc1013->SetSavedPoint(13,0.06661546);
   DilutionFunc1013->SetSavedPoint(14,0.06658008);
   DilutionFunc1013->SetSavedPoint(15,0.06654396);
   DilutionFunc1013->SetSavedPoint(16,0.06650709);
   DilutionFunc1013->SetSavedPoint(17,0.06646949);
   DilutionFunc1013->SetSavedPoint(18,0.06643115);
   DilutionFunc1013->SetSavedPoint(19,0.06639206);
   DilutionFunc1013->SetSavedPoint(20,0.06635223);
   DilutionFunc1013->SetSavedPoint(21,0.06631165);
   DilutionFunc1013->SetSavedPoint(22,0.06627032);
   DilutionFunc1013->SetSavedPoint(23,0.06622825);
   DilutionFunc1013->SetSavedPoint(24,0.06618542);
   DilutionFunc1013->SetSavedPoint(25,0.06614184);
   DilutionFunc1013->SetSavedPoint(26,0.0660975);
   DilutionFunc1013->SetSavedPoint(27,0.06605241);
   DilutionFunc1013->SetSavedPoint(28,0.06600655);
   DilutionFunc1013->SetSavedPoint(29,0.06595994);
   DilutionFunc1013->SetSavedPoint(30,0.06591257);
   DilutionFunc1013->SetSavedPoint(31,0.06586443);
   DilutionFunc1013->SetSavedPoint(32,0.06581553);
   DilutionFunc1013->SetSavedPoint(33,0.06576586);
   DilutionFunc1013->SetSavedPoint(34,0.06571542);
   DilutionFunc1013->SetSavedPoint(35,0.06566421);
   DilutionFunc1013->SetSavedPoint(36,0.06561224);
   DilutionFunc1013->SetSavedPoint(37,0.06555948);
   DilutionFunc1013->SetSavedPoint(38,0.06550596);
   DilutionFunc1013->SetSavedPoint(39,0.06545166);
   DilutionFunc1013->SetSavedPoint(40,0.06539657);
   DilutionFunc1013->SetSavedPoint(41,0.06534071);
   DilutionFunc1013->SetSavedPoint(42,0.06528407);
   DilutionFunc1013->SetSavedPoint(43,0.06522664);
   DilutionFunc1013->SetSavedPoint(44,0.06516843);
   DilutionFunc1013->SetSavedPoint(45,0.06510944);
   DilutionFunc1013->SetSavedPoint(46,0.06504965);
   DilutionFunc1013->SetSavedPoint(47,0.06498908);
   DilutionFunc1013->SetSavedPoint(48,0.06492771);
   DilutionFunc1013->SetSavedPoint(49,0.06486555);
   DilutionFunc1013->SetSavedPoint(50,0.0648026);
   DilutionFunc1013->SetSavedPoint(51,0.06473885);
   DilutionFunc1013->SetSavedPoint(52,0.0646743);
   DilutionFunc1013->SetSavedPoint(53,0.06460895);
   DilutionFunc1013->SetSavedPoint(54,0.0645428);
   DilutionFunc1013->SetSavedPoint(55,0.06447585);
   DilutionFunc1013->SetSavedPoint(56,0.06440809);
   DilutionFunc1013->SetSavedPoint(57,0.06433953);
   DilutionFunc1013->SetSavedPoint(58,0.06427016);
   DilutionFunc1013->SetSavedPoint(59,0.06419998);
   DilutionFunc1013->SetSavedPoint(60,0.06412899);
   DilutionFunc1013->SetSavedPoint(61,0.06405718);
   DilutionFunc1013->SetSavedPoint(62,0.06398456);
   DilutionFunc1013->SetSavedPoint(63,0.06391113);
   DilutionFunc1013->SetSavedPoint(64,0.06383687);
   DilutionFunc1013->SetSavedPoint(65,0.0637618);
   DilutionFunc1013->SetSavedPoint(66,0.06368591);
   DilutionFunc1013->SetSavedPoint(67,0.06360919);
   DilutionFunc1013->SetSavedPoint(68,0.06353165);
   DilutionFunc1013->SetSavedPoint(69,0.06345328);
   DilutionFunc1013->SetSavedPoint(70,0.06337409);
   DilutionFunc1013->SetSavedPoint(71,0.06329406);
   DilutionFunc1013->SetSavedPoint(72,0.0632132);
   DilutionFunc1013->SetSavedPoint(73,0.06313152);
   DilutionFunc1013->SetSavedPoint(74,0.06304899);
   DilutionFunc1013->SetSavedPoint(75,0.06296563);
   DilutionFunc1013->SetSavedPoint(76,0.06288144);
   DilutionFunc1013->SetSavedPoint(77,0.0627964);
   DilutionFunc1013->SetSavedPoint(78,0.06271052);
   DilutionFunc1013->SetSavedPoint(79,0.0626238);
   DilutionFunc1013->SetSavedPoint(80,0.06253624);
   DilutionFunc1013->SetSavedPoint(81,0.06244783);
   DilutionFunc1013->SetSavedPoint(82,0.06235857);
   DilutionFunc1013->SetSavedPoint(83,0.06226847);
   DilutionFunc1013->SetSavedPoint(84,0.06217751);
   DilutionFunc1013->SetSavedPoint(85,0.0620857);
   DilutionFunc1013->SetSavedPoint(86,0.06199303);
   DilutionFunc1013->SetSavedPoint(87,0.06189951);
   DilutionFunc1013->SetSavedPoint(88,0.06180513);
   DilutionFunc1013->SetSavedPoint(89,0.0617099);
   DilutionFunc1013->SetSavedPoint(90,0.0616138);
   DilutionFunc1013->SetSavedPoint(91,0.06151684);
   DilutionFunc1013->SetSavedPoint(92,0.06141901);
   DilutionFunc1013->SetSavedPoint(93,0.06132032);
   DilutionFunc1013->SetSavedPoint(94,0.06122077);
   DilutionFunc1013->SetSavedPoint(95,0.06112034);
   DilutionFunc1013->SetSavedPoint(96,0.06101904);
   DilutionFunc1013->SetSavedPoint(97,0.06091687);
   DilutionFunc1013->SetSavedPoint(98,0.06081383);
   DilutionFunc1013->SetSavedPoint(99,0.06070991);
   DilutionFunc1013->SetSavedPoint(100,0.06060511);
   DilutionFunc1013->SetSavedPoint(101,750);
   DilutionFunc1013->SetSavedPoint(102,2750);
   DilutionFunc1013->SetFillColor(19);
   DilutionFunc1013->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1013->SetLineColor(ci);
   DilutionFunc1013->SetLineWidth(3);
   DilutionFunc1013->SetChisquare(8.259089);
   DilutionFunc1013->SetNDF(6);
   DilutionFunc1013->GetXaxis()->SetLabelFont(42);
   DilutionFunc1013->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1013->GetXaxis()->SetTitleFont(42);
   DilutionFunc1013->GetYaxis()->SetLabelFont(42);
   DilutionFunc1013->GetYaxis()->SetTitleFont(42);
   DilutionFunc1013->SetParameter(0,0.06748193);
   DilutionFunc1013->SetParError(0,0.008041025);
   DilutionFunc1013->SetParLimits(0,0,0);
   DilutionFunc1013->SetParameter(1,-6.343332e-05);
   DilutionFunc1013->SetParError(1,6.719519e-05);
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
   pt_LaTex = pt->AddText("1.38
");
   pt_LaTex = pt->AddText("0.07
#pm0.008
");
   pt_LaTex = pt->AddText("-6e-05
#pm7e-05
");
   pt->Draw();
   S18->Modified();
   S18->cd();
   S18->SetSelected(S18);
}
