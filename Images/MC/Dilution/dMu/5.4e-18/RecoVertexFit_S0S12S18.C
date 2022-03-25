void RecoVertexFit_S0S12S18()
{
//=========Macro generated from canvas: S0S12S18/c
//=========  (Tue Mar 22 09:46:12 2022) by ROOT version 6.24/06
   TCanvas *S0S12S18 = new TCanvas("S0S12S18", "c",0,0,800,600);
   S0S12S18->SetHighLightColor(2);
   S0S12S18->Range(467.0621,-0.03875,3025.248,0.14875);
   S0S12S18->SetFillColor(0);
   S0S12S18->SetBorderMode(0);
   S0S12S18->SetBorderSize(2);
   S0S12S18->SetFrameBorderMode(0);
   S0S12S18->SetFrameBorderMode(0);
   
   Double_t S0S12S18_trackReco_fx1019[11] = {
   451.8765,
   653.3173,
   880.3261,
   1123.092,
   1371.063,
   1620.182,
   1866.969,
   2115.425,
   2363.004,
   2613.718,
   2788.119};
   Double_t S0S12S18_trackReco_fy1019[11] = {
   0.007638346,
   0.06803152,
   0.06671235,
   0.06624395,
   0.07849906,
   0.08440844,
   0.07237748,
   0.06159757,
   0.04381142,
   0.05153145,
   0.0006765169};
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
   0.04689253,
   0.01567818,
   0.009008502,
   0.007399231,
   0.006785064,
   0.006459297,
   0.006490537,
   0.006825922,
   0.007301603,
   0.007225126,
   0.01649806};
   TGraphErrors *gre = new TGraphErrors(11,S0S12S18_trackReco_fx1019,S0S12S18_trackReco_fy1019,S0S12S18_trackReco_fex1019,S0S12S18_trackReco_fey1019);
   gre->SetName("S0S12S18_trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_trackReco1019 = new TH1F("Graph_S0S12S18_trackReco1019","",100,218.2523,3021.743);
   Graph_S0S12S18_trackReco1019->SetMinimum(-0.02);
   Graph_S0S12S18_trackReco1019->SetMaximum(0.13);
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
   DilutionFunc1020->SetSavedPoint(0,0.08011923);
   DilutionFunc1020->SetSavedPoint(1,0.07998856);
   DilutionFunc1020->SetSavedPoint(2,0.07985415);
   DilutionFunc1020->SetSavedPoint(3,0.07971597);
   DilutionFunc1020->SetSavedPoint(4,0.07957402);
   DilutionFunc1020->SetSavedPoint(5,0.07942827);
   DilutionFunc1020->SetSavedPoint(6,0.07927872);
   DilutionFunc1020->SetSavedPoint(7,0.07912533);
   DilutionFunc1020->SetSavedPoint(8,0.07896811);
   DilutionFunc1020->SetSavedPoint(9,0.07880703);
   DilutionFunc1020->SetSavedPoint(10,0.07864207);
   DilutionFunc1020->SetSavedPoint(11,0.07847323);
   DilutionFunc1020->SetSavedPoint(12,0.07830048);
   DilutionFunc1020->SetSavedPoint(13,0.07812381);
   DilutionFunc1020->SetSavedPoint(14,0.0779432);
   DilutionFunc1020->SetSavedPoint(15,0.07775864);
   DilutionFunc1020->SetSavedPoint(16,0.07757011);
   DilutionFunc1020->SetSavedPoint(17,0.0773776);
   DilutionFunc1020->SetSavedPoint(18,0.07718109);
   DilutionFunc1020->SetSavedPoint(19,0.07698057);
   DilutionFunc1020->SetSavedPoint(20,0.07677601);
   DilutionFunc1020->SetSavedPoint(21,0.0765674);
   DilutionFunc1020->SetSavedPoint(22,0.07635474);
   DilutionFunc1020->SetSavedPoint(23,0.07613799);
   DilutionFunc1020->SetSavedPoint(24,0.07591715);
   DilutionFunc1020->SetSavedPoint(25,0.0756922);
   DilutionFunc1020->SetSavedPoint(26,0.07546312);
   DilutionFunc1020->SetSavedPoint(27,0.0752299);
   DilutionFunc1020->SetSavedPoint(28,0.07499253);
   DilutionFunc1020->SetSavedPoint(29,0.07475098);
   DilutionFunc1020->SetSavedPoint(30,0.07450524);
   DilutionFunc1020->SetSavedPoint(31,0.07425529);
   DilutionFunc1020->SetSavedPoint(32,0.07400113);
   DilutionFunc1020->SetSavedPoint(33,0.07374272);
   DilutionFunc1020->SetSavedPoint(34,0.07348007);
   DilutionFunc1020->SetSavedPoint(35,0.07321314);
   DilutionFunc1020->SetSavedPoint(36,0.07294194);
   DilutionFunc1020->SetSavedPoint(37,0.07266643);
   DilutionFunc1020->SetSavedPoint(38,0.07238661);
   DilutionFunc1020->SetSavedPoint(39,0.07210245);
   DilutionFunc1020->SetSavedPoint(40,0.07181395);
   DilutionFunc1020->SetSavedPoint(41,0.07152108);
   DilutionFunc1020->SetSavedPoint(42,0.07122384);
   DilutionFunc1020->SetSavedPoint(43,0.0709222);
   DilutionFunc1020->SetSavedPoint(44,0.07061615);
   DilutionFunc1020->SetSavedPoint(45,0.07030567);
   DilutionFunc1020->SetSavedPoint(46,0.06999075);
   DilutionFunc1020->SetSavedPoint(47,0.06967137);
   DilutionFunc1020->SetSavedPoint(48,0.06934752);
   DilutionFunc1020->SetSavedPoint(49,0.06901918);
   DilutionFunc1020->SetSavedPoint(50,0.06868633);
   DilutionFunc1020->SetSavedPoint(51,0.06834896);
   DilutionFunc1020->SetSavedPoint(52,0.06800706);
   DilutionFunc1020->SetSavedPoint(53,0.0676606);
   DilutionFunc1020->SetSavedPoint(54,0.06730957);
   DilutionFunc1020->SetSavedPoint(55,0.06695396);
   DilutionFunc1020->SetSavedPoint(56,0.06659375);
   DilutionFunc1020->SetSavedPoint(57,0.06622892);
   DilutionFunc1020->SetSavedPoint(58,0.06585946);
   DilutionFunc1020->SetSavedPoint(59,0.06548536);
   DilutionFunc1020->SetSavedPoint(60,0.06510659);
   DilutionFunc1020->SetSavedPoint(61,0.06472313);
   DilutionFunc1020->SetSavedPoint(62,0.06433499);
   DilutionFunc1020->SetSavedPoint(63,0.06394213);
   DilutionFunc1020->SetSavedPoint(64,0.06354455);
   DilutionFunc1020->SetSavedPoint(65,0.06314222);
   DilutionFunc1020->SetSavedPoint(66,0.06273514);
   DilutionFunc1020->SetSavedPoint(67,0.06232328);
   DilutionFunc1020->SetSavedPoint(68,0.06190663);
   DilutionFunc1020->SetSavedPoint(69,0.06148518);
   DilutionFunc1020->SetSavedPoint(70,0.0610589);
   DilutionFunc1020->SetSavedPoint(71,0.06062779);
   DilutionFunc1020->SetSavedPoint(72,0.06019182);
   DilutionFunc1020->SetSavedPoint(73,0.05975098);
   DilutionFunc1020->SetSavedPoint(74,0.05930526);
   DilutionFunc1020->SetSavedPoint(75,0.05885464);
   DilutionFunc1020->SetSavedPoint(76,0.0583991);
   DilutionFunc1020->SetSavedPoint(77,0.05793863);
   DilutionFunc1020->SetSavedPoint(78,0.05747321);
   DilutionFunc1020->SetSavedPoint(79,0.05700283);
   DilutionFunc1020->SetSavedPoint(80,0.05652747);
   DilutionFunc1020->SetSavedPoint(81,0.05604711);
   DilutionFunc1020->SetSavedPoint(82,0.05556174);
   DilutionFunc1020->SetSavedPoint(83,0.05507135);
   DilutionFunc1020->SetSavedPoint(84,0.05457591);
   DilutionFunc1020->SetSavedPoint(85,0.05407541);
   DilutionFunc1020->SetSavedPoint(86,0.05356984);
   DilutionFunc1020->SetSavedPoint(87,0.05305918);
   DilutionFunc1020->SetSavedPoint(88,0.05254341);
   DilutionFunc1020->SetSavedPoint(89,0.05202252);
   DilutionFunc1020->SetSavedPoint(90,0.05149649);
   DilutionFunc1020->SetSavedPoint(91,0.05096531);
   DilutionFunc1020->SetSavedPoint(92,0.05042895);
   DilutionFunc1020->SetSavedPoint(93,0.04988742);
   DilutionFunc1020->SetSavedPoint(94,0.04934068);
   DilutionFunc1020->SetSavedPoint(95,0.04878872);
   DilutionFunc1020->SetSavedPoint(96,0.04823154);
   DilutionFunc1020->SetSavedPoint(97,0.0476691);
   DilutionFunc1020->SetSavedPoint(98,0.0471014);
   DilutionFunc1020->SetSavedPoint(99,0.04652842);
   DilutionFunc1020->SetSavedPoint(100,0.04595015);
   DilutionFunc1020->SetSavedPoint(101,750);
   DilutionFunc1020->SetSavedPoint(102,2750);
   DilutionFunc1020->SetFillColor(19);
   DilutionFunc1020->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1020->SetLineColor(ci);
   DilutionFunc1020->SetLineWidth(3);
   DilutionFunc1020->SetChisquare(12.6327);
   DilutionFunc1020->SetNDF(6);
   DilutionFunc1020->GetXaxis()->SetLabelFont(42);
   DilutionFunc1020->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1020->GetXaxis()->SetTitleFont(42);
   DilutionFunc1020->GetYaxis()->SetLabelFont(42);
   DilutionFunc1020->GetYaxis()->SetTitleFont(42);
   DilutionFunc1020->SetParameter(0,0.08246471);
   DilutionFunc1020->SetParError(0,0.004939996);
   DilutionFunc1020->SetParLimits(0,0,0);
   DilutionFunc1020->SetParameter(1,-0.0001259221);
   DilutionFunc1020->SetParError(1,1.27708e-05);
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
   DilutionFunc1021->SetSavedPoint(0,0.08011923);
   DilutionFunc1021->SetSavedPoint(1,0.07998856);
   DilutionFunc1021->SetSavedPoint(2,0.07985415);
   DilutionFunc1021->SetSavedPoint(3,0.07971597);
   DilutionFunc1021->SetSavedPoint(4,0.07957402);
   DilutionFunc1021->SetSavedPoint(5,0.07942827);
   DilutionFunc1021->SetSavedPoint(6,0.07927872);
   DilutionFunc1021->SetSavedPoint(7,0.07912533);
   DilutionFunc1021->SetSavedPoint(8,0.07896811);
   DilutionFunc1021->SetSavedPoint(9,0.07880703);
   DilutionFunc1021->SetSavedPoint(10,0.07864207);
   DilutionFunc1021->SetSavedPoint(11,0.07847323);
   DilutionFunc1021->SetSavedPoint(12,0.07830048);
   DilutionFunc1021->SetSavedPoint(13,0.07812381);
   DilutionFunc1021->SetSavedPoint(14,0.0779432);
   DilutionFunc1021->SetSavedPoint(15,0.07775864);
   DilutionFunc1021->SetSavedPoint(16,0.07757011);
   DilutionFunc1021->SetSavedPoint(17,0.0773776);
   DilutionFunc1021->SetSavedPoint(18,0.07718109);
   DilutionFunc1021->SetSavedPoint(19,0.07698057);
   DilutionFunc1021->SetSavedPoint(20,0.07677601);
   DilutionFunc1021->SetSavedPoint(21,0.0765674);
   DilutionFunc1021->SetSavedPoint(22,0.07635474);
   DilutionFunc1021->SetSavedPoint(23,0.07613799);
   DilutionFunc1021->SetSavedPoint(24,0.07591715);
   DilutionFunc1021->SetSavedPoint(25,0.0756922);
   DilutionFunc1021->SetSavedPoint(26,0.07546312);
   DilutionFunc1021->SetSavedPoint(27,0.0752299);
   DilutionFunc1021->SetSavedPoint(28,0.07499253);
   DilutionFunc1021->SetSavedPoint(29,0.07475098);
   DilutionFunc1021->SetSavedPoint(30,0.07450524);
   DilutionFunc1021->SetSavedPoint(31,0.07425529);
   DilutionFunc1021->SetSavedPoint(32,0.07400113);
   DilutionFunc1021->SetSavedPoint(33,0.07374272);
   DilutionFunc1021->SetSavedPoint(34,0.07348007);
   DilutionFunc1021->SetSavedPoint(35,0.07321314);
   DilutionFunc1021->SetSavedPoint(36,0.07294194);
   DilutionFunc1021->SetSavedPoint(37,0.07266643);
   DilutionFunc1021->SetSavedPoint(38,0.07238661);
   DilutionFunc1021->SetSavedPoint(39,0.07210245);
   DilutionFunc1021->SetSavedPoint(40,0.07181395);
   DilutionFunc1021->SetSavedPoint(41,0.07152108);
   DilutionFunc1021->SetSavedPoint(42,0.07122384);
   DilutionFunc1021->SetSavedPoint(43,0.0709222);
   DilutionFunc1021->SetSavedPoint(44,0.07061615);
   DilutionFunc1021->SetSavedPoint(45,0.07030567);
   DilutionFunc1021->SetSavedPoint(46,0.06999075);
   DilutionFunc1021->SetSavedPoint(47,0.06967137);
   DilutionFunc1021->SetSavedPoint(48,0.06934752);
   DilutionFunc1021->SetSavedPoint(49,0.06901918);
   DilutionFunc1021->SetSavedPoint(50,0.06868633);
   DilutionFunc1021->SetSavedPoint(51,0.06834896);
   DilutionFunc1021->SetSavedPoint(52,0.06800706);
   DilutionFunc1021->SetSavedPoint(53,0.0676606);
   DilutionFunc1021->SetSavedPoint(54,0.06730957);
   DilutionFunc1021->SetSavedPoint(55,0.06695396);
   DilutionFunc1021->SetSavedPoint(56,0.06659375);
   DilutionFunc1021->SetSavedPoint(57,0.06622892);
   DilutionFunc1021->SetSavedPoint(58,0.06585946);
   DilutionFunc1021->SetSavedPoint(59,0.06548536);
   DilutionFunc1021->SetSavedPoint(60,0.06510659);
   DilutionFunc1021->SetSavedPoint(61,0.06472313);
   DilutionFunc1021->SetSavedPoint(62,0.06433499);
   DilutionFunc1021->SetSavedPoint(63,0.06394213);
   DilutionFunc1021->SetSavedPoint(64,0.06354455);
   DilutionFunc1021->SetSavedPoint(65,0.06314222);
   DilutionFunc1021->SetSavedPoint(66,0.06273514);
   DilutionFunc1021->SetSavedPoint(67,0.06232328);
   DilutionFunc1021->SetSavedPoint(68,0.06190663);
   DilutionFunc1021->SetSavedPoint(69,0.06148518);
   DilutionFunc1021->SetSavedPoint(70,0.0610589);
   DilutionFunc1021->SetSavedPoint(71,0.06062779);
   DilutionFunc1021->SetSavedPoint(72,0.06019182);
   DilutionFunc1021->SetSavedPoint(73,0.05975098);
   DilutionFunc1021->SetSavedPoint(74,0.05930526);
   DilutionFunc1021->SetSavedPoint(75,0.05885464);
   DilutionFunc1021->SetSavedPoint(76,0.0583991);
   DilutionFunc1021->SetSavedPoint(77,0.05793863);
   DilutionFunc1021->SetSavedPoint(78,0.05747321);
   DilutionFunc1021->SetSavedPoint(79,0.05700283);
   DilutionFunc1021->SetSavedPoint(80,0.05652747);
   DilutionFunc1021->SetSavedPoint(81,0.05604711);
   DilutionFunc1021->SetSavedPoint(82,0.05556174);
   DilutionFunc1021->SetSavedPoint(83,0.05507135);
   DilutionFunc1021->SetSavedPoint(84,0.05457591);
   DilutionFunc1021->SetSavedPoint(85,0.05407541);
   DilutionFunc1021->SetSavedPoint(86,0.05356984);
   DilutionFunc1021->SetSavedPoint(87,0.05305918);
   DilutionFunc1021->SetSavedPoint(88,0.05254341);
   DilutionFunc1021->SetSavedPoint(89,0.05202252);
   DilutionFunc1021->SetSavedPoint(90,0.05149649);
   DilutionFunc1021->SetSavedPoint(91,0.05096531);
   DilutionFunc1021->SetSavedPoint(92,0.05042895);
   DilutionFunc1021->SetSavedPoint(93,0.04988742);
   DilutionFunc1021->SetSavedPoint(94,0.04934068);
   DilutionFunc1021->SetSavedPoint(95,0.04878872);
   DilutionFunc1021->SetSavedPoint(96,0.04823154);
   DilutionFunc1021->SetSavedPoint(97,0.0476691);
   DilutionFunc1021->SetSavedPoint(98,0.0471014);
   DilutionFunc1021->SetSavedPoint(99,0.04652842);
   DilutionFunc1021->SetSavedPoint(100,0.04595015);
   DilutionFunc1021->SetSavedPoint(101,750);
   DilutionFunc1021->SetSavedPoint(102,2750);
   DilutionFunc1021->SetFillColor(19);
   DilutionFunc1021->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1021->SetLineColor(ci);
   DilutionFunc1021->SetLineWidth(3);
   DilutionFunc1021->SetChisquare(12.6327);
   DilutionFunc1021->SetNDF(6);
   DilutionFunc1021->GetXaxis()->SetLabelFont(42);
   DilutionFunc1021->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1021->GetXaxis()->SetTitleFont(42);
   DilutionFunc1021->GetYaxis()->SetLabelFont(42);
   DilutionFunc1021->GetYaxis()->SetTitleFont(42);
   DilutionFunc1021->SetParameter(0,0.08246471);
   DilutionFunc1021->SetParError(0,0.004939996);
   DilutionFunc1021->SetParLimits(0,0,0);
   DilutionFunc1021->SetParameter(1,-0.0001259221);
   DilutionFunc1021->SetParError(1,1.27708e-05);
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
   pt_LaTex = pt->AddText("2.11
");
   pt_LaTex = pt->AddText("0.082#pm0.005");
   pt_LaTex = pt->AddText("(-1.3#pm0.1)#times10^{-4}");
   pt->Draw();
   S0S12S18->Modified();
   S0S12S18->cd();
   S0S12S18->SetSelected(S0S12S18);
}
