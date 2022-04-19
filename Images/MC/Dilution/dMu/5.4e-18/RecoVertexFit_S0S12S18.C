void RecoVertexFit_S0S12S18()
{
//=========Macro generated from canvas: S0S12S18/c
//=========  (Wed Apr 20 00:05:56 2022) by ROOT version 6.24/06
   TCanvas *S0S12S18 = new TCanvas("S0S12S18", "c",0,0,800,600);
   S0S12S18->SetHighLightColor(2);
   S0S12S18->Range(467.0338,-0.03875,3025.233,0.14875);
   S0S12S18->SetFillColor(0);
   S0S12S18->SetBorderMode(0);
   S0S12S18->SetBorderSize(2);
   S0S12S18->SetFrameBorderMode(0);
   S0S12S18->SetFrameBorderMode(0);
   
   Double_t S0S12S18_trackReco_fx1019[11] = {
   451.8482,
   653.332,
   880.3222,
   1123.094,
   1371.099,
   1620.134,
   1866.992,
   2115.379,
   2362.982,
   2613.714,
   2788.104};
   Double_t S0S12S18_trackReco_fy1019[11] = {
   0.03430137,
   0.07389692,
   0.07237089,
   0.07449424,
   0.08565704,
   0.08659611,
   0.07641467,
   0.06257835,
   0.05197596,
   0.05425917,
   0.0131717};
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
   0.04800531,
   0.0160637,
   0.009223956,
   0.007576533,
   0.006947677,
   0.006615384,
   0.00665072,
   0.007001221,
   0.007490089,
   0.007414273,
   0.01699113};
   TGraphErrors *gre = new TGraphErrors(11,S0S12S18_trackReco_fx1019,S0S12S18_trackReco_fy1019,S0S12S18_trackReco_fex1019,S0S12S18_trackReco_fey1019);
   gre->SetName("S0S12S18_trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_trackReco1019 = new TH1F("Graph_S0S12S18_trackReco1019","",100,218.2226,3021.729);
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
   DilutionFunc1020->SetSavedPoint(0,0.0861392);
   DilutionFunc1020->SetSavedPoint(1,0.08599603);
   DilutionFunc1020->SetSavedPoint(2,0.08584875);
   DilutionFunc1020->SetSavedPoint(3,0.08569735);
   DilutionFunc1020->SetSavedPoint(4,0.0855418);
   DilutionFunc1020->SetSavedPoint(5,0.0853821);
   DilutionFunc1020->SetSavedPoint(6,0.08521821);
   DilutionFunc1020->SetSavedPoint(7,0.08505013);
   DilutionFunc1020->SetSavedPoint(8,0.08487784);
   DilutionFunc1020->SetSavedPoint(9,0.08470132);
   DilutionFunc1020->SetSavedPoint(10,0.08452055);
   DilutionFunc1020->SetSavedPoint(11,0.08433551);
   DilutionFunc1020->SetSavedPoint(12,0.08414619);
   DilutionFunc1020->SetSavedPoint(13,0.08395257);
   DilutionFunc1020->SetSavedPoint(14,0.08375464);
   DilutionFunc1020->SetSavedPoint(15,0.08355237);
   DilutionFunc1020->SetSavedPoint(16,0.08334574);
   DilutionFunc1020->SetSavedPoint(17,0.08313475);
   DilutionFunc1020->SetSavedPoint(18,0.08291937);
   DilutionFunc1020->SetSavedPoint(19,0.08269958);
   DilutionFunc1020->SetSavedPoint(20,0.08247538);
   DilutionFunc1020->SetSavedPoint(21,0.08224673);
   DilutionFunc1020->SetSavedPoint(22,0.08201362);
   DilutionFunc1020->SetSavedPoint(23,0.08177604);
   DilutionFunc1020->SetSavedPoint(24,0.08153397);
   DilutionFunc1020->SetSavedPoint(25,0.08128739);
   DilutionFunc1020->SetSavedPoint(26,0.08103628);
   DilutionFunc1020->SetSavedPoint(27,0.08078063);
   DilutionFunc1020->SetSavedPoint(28,0.08052041);
   DilutionFunc1020->SetSavedPoint(29,0.08025562);
   DilutionFunc1020->SetSavedPoint(30,0.07998623);
   DilutionFunc1020->SetSavedPoint(31,0.07971222);
   DilutionFunc1020->SetSavedPoint(32,0.07943358);
   DilutionFunc1020->SetSavedPoint(33,0.07915029);
   DilutionFunc1020->SetSavedPoint(34,0.07886234);
   DilutionFunc1020->SetSavedPoint(35,0.0785697);
   DilutionFunc1020->SetSavedPoint(36,0.07827236);
   DilutionFunc1020->SetSavedPoint(37,0.0779703);
   DilutionFunc1020->SetSavedPoint(38,0.07766351);
   DilutionFunc1020->SetSavedPoint(39,0.07735196);
   DilutionFunc1020->SetSavedPoint(40,0.07703564);
   DilutionFunc1020->SetSavedPoint(41,0.07671453);
   DilutionFunc1020->SetSavedPoint(42,0.07638861);
   DilutionFunc1020->SetSavedPoint(43,0.07605787);
   DilutionFunc1020->SetSavedPoint(44,0.07572229);
   DilutionFunc1020->SetSavedPoint(45,0.07538185);
   DilutionFunc1020->SetSavedPoint(46,0.07503653);
   DilutionFunc1020->SetSavedPoint(47,0.07468632);
   DilutionFunc1020->SetSavedPoint(48,0.0743312);
   DilutionFunc1020->SetSavedPoint(49,0.07397115);
   DilutionFunc1020->SetSavedPoint(50,0.07360615);
   DilutionFunc1020->SetSavedPoint(51,0.07323619);
   DilutionFunc1020->SetSavedPoint(52,0.07286125);
   DilutionFunc1020->SetSavedPoint(53,0.07248131);
   DilutionFunc1020->SetSavedPoint(54,0.07209636);
   DilutionFunc1020->SetSavedPoint(55,0.07170637);
   DilutionFunc1020->SetSavedPoint(56,0.07131133);
   DilutionFunc1020->SetSavedPoint(57,0.07091122);
   DilutionFunc1020->SetSavedPoint(58,0.07050603);
   DilutionFunc1020->SetSavedPoint(59,0.07009573);
   DilutionFunc1020->SetSavedPoint(60,0.06968031);
   DilutionFunc1020->SetSavedPoint(61,0.06925976);
   DilutionFunc1020->SetSavedPoint(62,0.06883405);
   DilutionFunc1020->SetSavedPoint(63,0.06840316);
   DilutionFunc1020->SetSavedPoint(64,0.06796709);
   DilutionFunc1020->SetSavedPoint(65,0.0675258);
   DilutionFunc1020->SetSavedPoint(66,0.06707929);
   DilutionFunc1020->SetSavedPoint(67,0.06662754);
   DilutionFunc1020->SetSavedPoint(68,0.06617053);
   DilutionFunc1020->SetSavedPoint(69,0.06570824);
   DilutionFunc1020->SetSavedPoint(70,0.06524066);
   DilutionFunc1020->SetSavedPoint(71,0.06476776);
   DilutionFunc1020->SetSavedPoint(72,0.06428953);
   DilutionFunc1020->SetSavedPoint(73,0.06380596);
   DilutionFunc1020->SetSavedPoint(74,0.06331701);
   DilutionFunc1020->SetSavedPoint(75,0.06282269);
   DilutionFunc1020->SetSavedPoint(76,0.06232297);
   DilutionFunc1020->SetSavedPoint(77,0.06181783);
   DilutionFunc1020->SetSavedPoint(78,0.06130725);
   DilutionFunc1020->SetSavedPoint(79,0.06079122);
   DilutionFunc1020->SetSavedPoint(80,0.06026973);
   DilutionFunc1020->SetSavedPoint(81,0.05974274);
   DilutionFunc1020->SetSavedPoint(82,0.05921025);
   DilutionFunc1020->SetSavedPoint(83,0.05867224);
   DilutionFunc1020->SetSavedPoint(84,0.05812869);
   DilutionFunc1020->SetSavedPoint(85,0.05757958);
   DilutionFunc1020->SetSavedPoint(86,0.05702489);
   DilutionFunc1020->SetSavedPoint(87,0.05646462);
   DilutionFunc1020->SetSavedPoint(88,0.05589873);
   DilutionFunc1020->SetSavedPoint(89,0.05532722);
   DilutionFunc1020->SetSavedPoint(90,0.05475006);
   DilutionFunc1020->SetSavedPoint(91,0.05416724);
   DilutionFunc1020->SetSavedPoint(92,0.05357874);
   DilutionFunc1020->SetSavedPoint(93,0.05298455);
   DilutionFunc1020->SetSavedPoint(94,0.05238464);
   DilutionFunc1020->SetSavedPoint(95,0.051779);
   DilutionFunc1020->SetSavedPoint(96,0.05116761);
   DilutionFunc1020->SetSavedPoint(97,0.05055045);
   DilutionFunc1020->SetSavedPoint(98,0.04992751);
   DilutionFunc1020->SetSavedPoint(99,0.04929876);
   DilutionFunc1020->SetSavedPoint(100,0.0486642);
   DilutionFunc1020->SetSavedPoint(101,750);
   DilutionFunc1020->SetSavedPoint(102,2750);
   DilutionFunc1020->SetFillColor(19);
   DilutionFunc1020->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1020->SetLineColor(ci);
   DilutionFunc1020->SetLineWidth(3);
   DilutionFunc1020->SetChisquare(8.447258);
   DilutionFunc1020->SetNDF(6);
   DilutionFunc1020->GetXaxis()->SetLabelFont(42);
   DilutionFunc1020->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1020->GetXaxis()->SetTitleFont(42);
   DilutionFunc1020->GetYaxis()->SetLabelFont(42);
   DilutionFunc1020->GetYaxis()->SetTitleFont(42);
   DilutionFunc1020->SetParameter(0,0.0887085);
   DilutionFunc1020->SetParError(0,0.00505713);
   DilutionFunc1020->SetParLimits(0,0,0);
   DilutionFunc1020->SetParameter(1,-0.000127037);
   DilutionFunc1020->SetParError(1,1.198397e-05);
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
   DilutionFunc1021->SetSavedPoint(0,0.0861392);
   DilutionFunc1021->SetSavedPoint(1,0.08599603);
   DilutionFunc1021->SetSavedPoint(2,0.08584875);
   DilutionFunc1021->SetSavedPoint(3,0.08569735);
   DilutionFunc1021->SetSavedPoint(4,0.0855418);
   DilutionFunc1021->SetSavedPoint(5,0.0853821);
   DilutionFunc1021->SetSavedPoint(6,0.08521821);
   DilutionFunc1021->SetSavedPoint(7,0.08505013);
   DilutionFunc1021->SetSavedPoint(8,0.08487784);
   DilutionFunc1021->SetSavedPoint(9,0.08470132);
   DilutionFunc1021->SetSavedPoint(10,0.08452055);
   DilutionFunc1021->SetSavedPoint(11,0.08433551);
   DilutionFunc1021->SetSavedPoint(12,0.08414619);
   DilutionFunc1021->SetSavedPoint(13,0.08395257);
   DilutionFunc1021->SetSavedPoint(14,0.08375464);
   DilutionFunc1021->SetSavedPoint(15,0.08355237);
   DilutionFunc1021->SetSavedPoint(16,0.08334574);
   DilutionFunc1021->SetSavedPoint(17,0.08313475);
   DilutionFunc1021->SetSavedPoint(18,0.08291937);
   DilutionFunc1021->SetSavedPoint(19,0.08269958);
   DilutionFunc1021->SetSavedPoint(20,0.08247538);
   DilutionFunc1021->SetSavedPoint(21,0.08224673);
   DilutionFunc1021->SetSavedPoint(22,0.08201362);
   DilutionFunc1021->SetSavedPoint(23,0.08177604);
   DilutionFunc1021->SetSavedPoint(24,0.08153397);
   DilutionFunc1021->SetSavedPoint(25,0.08128739);
   DilutionFunc1021->SetSavedPoint(26,0.08103628);
   DilutionFunc1021->SetSavedPoint(27,0.08078063);
   DilutionFunc1021->SetSavedPoint(28,0.08052041);
   DilutionFunc1021->SetSavedPoint(29,0.08025562);
   DilutionFunc1021->SetSavedPoint(30,0.07998623);
   DilutionFunc1021->SetSavedPoint(31,0.07971222);
   DilutionFunc1021->SetSavedPoint(32,0.07943358);
   DilutionFunc1021->SetSavedPoint(33,0.07915029);
   DilutionFunc1021->SetSavedPoint(34,0.07886234);
   DilutionFunc1021->SetSavedPoint(35,0.0785697);
   DilutionFunc1021->SetSavedPoint(36,0.07827236);
   DilutionFunc1021->SetSavedPoint(37,0.0779703);
   DilutionFunc1021->SetSavedPoint(38,0.07766351);
   DilutionFunc1021->SetSavedPoint(39,0.07735196);
   DilutionFunc1021->SetSavedPoint(40,0.07703564);
   DilutionFunc1021->SetSavedPoint(41,0.07671453);
   DilutionFunc1021->SetSavedPoint(42,0.07638861);
   DilutionFunc1021->SetSavedPoint(43,0.07605787);
   DilutionFunc1021->SetSavedPoint(44,0.07572229);
   DilutionFunc1021->SetSavedPoint(45,0.07538185);
   DilutionFunc1021->SetSavedPoint(46,0.07503653);
   DilutionFunc1021->SetSavedPoint(47,0.07468632);
   DilutionFunc1021->SetSavedPoint(48,0.0743312);
   DilutionFunc1021->SetSavedPoint(49,0.07397115);
   DilutionFunc1021->SetSavedPoint(50,0.07360615);
   DilutionFunc1021->SetSavedPoint(51,0.07323619);
   DilutionFunc1021->SetSavedPoint(52,0.07286125);
   DilutionFunc1021->SetSavedPoint(53,0.07248131);
   DilutionFunc1021->SetSavedPoint(54,0.07209636);
   DilutionFunc1021->SetSavedPoint(55,0.07170637);
   DilutionFunc1021->SetSavedPoint(56,0.07131133);
   DilutionFunc1021->SetSavedPoint(57,0.07091122);
   DilutionFunc1021->SetSavedPoint(58,0.07050603);
   DilutionFunc1021->SetSavedPoint(59,0.07009573);
   DilutionFunc1021->SetSavedPoint(60,0.06968031);
   DilutionFunc1021->SetSavedPoint(61,0.06925976);
   DilutionFunc1021->SetSavedPoint(62,0.06883405);
   DilutionFunc1021->SetSavedPoint(63,0.06840316);
   DilutionFunc1021->SetSavedPoint(64,0.06796709);
   DilutionFunc1021->SetSavedPoint(65,0.0675258);
   DilutionFunc1021->SetSavedPoint(66,0.06707929);
   DilutionFunc1021->SetSavedPoint(67,0.06662754);
   DilutionFunc1021->SetSavedPoint(68,0.06617053);
   DilutionFunc1021->SetSavedPoint(69,0.06570824);
   DilutionFunc1021->SetSavedPoint(70,0.06524066);
   DilutionFunc1021->SetSavedPoint(71,0.06476776);
   DilutionFunc1021->SetSavedPoint(72,0.06428953);
   DilutionFunc1021->SetSavedPoint(73,0.06380596);
   DilutionFunc1021->SetSavedPoint(74,0.06331701);
   DilutionFunc1021->SetSavedPoint(75,0.06282269);
   DilutionFunc1021->SetSavedPoint(76,0.06232297);
   DilutionFunc1021->SetSavedPoint(77,0.06181783);
   DilutionFunc1021->SetSavedPoint(78,0.06130725);
   DilutionFunc1021->SetSavedPoint(79,0.06079122);
   DilutionFunc1021->SetSavedPoint(80,0.06026973);
   DilutionFunc1021->SetSavedPoint(81,0.05974274);
   DilutionFunc1021->SetSavedPoint(82,0.05921025);
   DilutionFunc1021->SetSavedPoint(83,0.05867224);
   DilutionFunc1021->SetSavedPoint(84,0.05812869);
   DilutionFunc1021->SetSavedPoint(85,0.05757958);
   DilutionFunc1021->SetSavedPoint(86,0.05702489);
   DilutionFunc1021->SetSavedPoint(87,0.05646462);
   DilutionFunc1021->SetSavedPoint(88,0.05589873);
   DilutionFunc1021->SetSavedPoint(89,0.05532722);
   DilutionFunc1021->SetSavedPoint(90,0.05475006);
   DilutionFunc1021->SetSavedPoint(91,0.05416724);
   DilutionFunc1021->SetSavedPoint(92,0.05357874);
   DilutionFunc1021->SetSavedPoint(93,0.05298455);
   DilutionFunc1021->SetSavedPoint(94,0.05238464);
   DilutionFunc1021->SetSavedPoint(95,0.051779);
   DilutionFunc1021->SetSavedPoint(96,0.05116761);
   DilutionFunc1021->SetSavedPoint(97,0.05055045);
   DilutionFunc1021->SetSavedPoint(98,0.04992751);
   DilutionFunc1021->SetSavedPoint(99,0.04929876);
   DilutionFunc1021->SetSavedPoint(100,0.0486642);
   DilutionFunc1021->SetSavedPoint(101,750);
   DilutionFunc1021->SetSavedPoint(102,2750);
   DilutionFunc1021->SetFillColor(19);
   DilutionFunc1021->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1021->SetLineColor(ci);
   DilutionFunc1021->SetLineWidth(3);
   DilutionFunc1021->SetChisquare(8.447258);
   DilutionFunc1021->SetNDF(6);
   DilutionFunc1021->GetXaxis()->SetLabelFont(42);
   DilutionFunc1021->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1021->GetXaxis()->SetTitleFont(42);
   DilutionFunc1021->GetYaxis()->SetLabelFont(42);
   DilutionFunc1021->GetYaxis()->SetTitleFont(42);
   DilutionFunc1021->SetParameter(0,0.0887085);
   DilutionFunc1021->SetParError(0,0.00505713);
   DilutionFunc1021->SetParLimits(0,0,0);
   DilutionFunc1021->SetParameter(1,-0.000127037);
   DilutionFunc1021->SetParError(1,1.198397e-05);
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
   pt_LaTex = pt->AddText("1.41
");
   pt_LaTex = pt->AddText("0.082#pm0.005");
   pt_LaTex = pt->AddText("(-1.3#pm0.1)#times10^{-4}");
   pt->Draw();
   S0S12S18->Modified();
   S0S12S18->cd();
   S0S12S18->SetSelected(S0S12S18);
}
