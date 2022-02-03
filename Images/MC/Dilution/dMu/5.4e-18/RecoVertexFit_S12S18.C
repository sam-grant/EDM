void RecoVertexFit_S12S18()
{
//=========Macro generated from canvas: S12S18/c
//=========  (Thu Feb  3 14:38:47 2022) by ROOT version 6.24/06
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
   
   
   TF1 *DilutionFunc1016 = new TF1("*DilutionFunc",750,2750,2);
    //The original function : DilutionFunc had originally been created by:
    //TF1 *DilutionFunc = new TF1("DilutionFunc",DilutionFunc,750,2750,2, 1, TF1::EAddToList::kNo);
   DilutionFunc1016->SetRange(750,2750);
   DilutionFunc1016->SetName("DilutionFunc");
   DilutionFunc1016->SetTitle("DilutionFunc");
   DilutionFunc1016->SetSavedPoint(0,0.06903799);
   DilutionFunc1016->SetSavedPoint(1,0.06897041);
   DilutionFunc1016->SetSavedPoint(2,0.06890093);
   DilutionFunc1016->SetSavedPoint(3,0.06882953);
   DilutionFunc1016->SetSavedPoint(4,0.06875622);
   DilutionFunc1016->SetSavedPoint(5,0.06868098);
   DilutionFunc1016->SetSavedPoint(6,0.06860381);
   DilutionFunc1016->SetSavedPoint(7,0.0685247);
   DilutionFunc1016->SetSavedPoint(8,0.06844364);
   DilutionFunc1016->SetSavedPoint(9,0.06836064);
   DilutionFunc1016->SetSavedPoint(10,0.06827567);
   DilutionFunc1016->SetSavedPoint(11,0.06818874);
   DilutionFunc1016->SetSavedPoint(12,0.06809984);
   DilutionFunc1016->SetSavedPoint(13,0.06800895);
   DilutionFunc1016->SetSavedPoint(14,0.06791609);
   DilutionFunc1016->SetSavedPoint(15,0.06782123);
   DilutionFunc1016->SetSavedPoint(16,0.06772438);
   DilutionFunc1016->SetSavedPoint(17,0.06762552);
   DilutionFunc1016->SetSavedPoint(18,0.06752465);
   DilutionFunc1016->SetSavedPoint(19,0.06742176);
   DilutionFunc1016->SetSavedPoint(20,0.06731685);
   DilutionFunc1016->SetSavedPoint(21,0.06720991);
   DilutionFunc1016->SetSavedPoint(22,0.06710093);
   DilutionFunc1016->SetSavedPoint(23,0.06698991);
   DilutionFunc1016->SetSavedPoint(24,0.06687684);
   DilutionFunc1016->SetSavedPoint(25,0.06676171);
   DilutionFunc1016->SetSavedPoint(26,0.06664451);
   DilutionFunc1016->SetSavedPoint(27,0.06652525);
   DilutionFunc1016->SetSavedPoint(28,0.06640391);
   DilutionFunc1016->SetSavedPoint(29,0.06628049);
   DilutionFunc1016->SetSavedPoint(30,0.06615498);
   DilutionFunc1016->SetSavedPoint(31,0.06602737);
   DilutionFunc1016->SetSavedPoint(32,0.06589766);
   DilutionFunc1016->SetSavedPoint(33,0.06576584);
   DilutionFunc1016->SetSavedPoint(34,0.06563191);
   DilutionFunc1016->SetSavedPoint(35,0.06549585);
   DilutionFunc1016->SetSavedPoint(36,0.06535766);
   DilutionFunc1016->SetSavedPoint(37,0.06521734);
   DilutionFunc1016->SetSavedPoint(38,0.06507488);
   DilutionFunc1016->SetSavedPoint(39,0.06493027);
   DilutionFunc1016->SetSavedPoint(40,0.0647835);
   DilutionFunc1016->SetSavedPoint(41,0.06463457);
   DilutionFunc1016->SetSavedPoint(42,0.06448348);
   DilutionFunc1016->SetSavedPoint(43,0.06433021);
   DilutionFunc1016->SetSavedPoint(44,0.06417475);
   DilutionFunc1016->SetSavedPoint(45,0.06401711);
   DilutionFunc1016->SetSavedPoint(46,0.06385728);
   DilutionFunc1016->SetSavedPoint(47,0.06369525);
   DilutionFunc1016->SetSavedPoint(48,0.063531);
   DilutionFunc1016->SetSavedPoint(49,0.06336455);
   DilutionFunc1016->SetSavedPoint(50,0.06319587);
   DilutionFunc1016->SetSavedPoint(51,0.06302496);
   DilutionFunc1016->SetSavedPoint(52,0.06285183);
   DilutionFunc1016->SetSavedPoint(53,0.06267645);
   DilutionFunc1016->SetSavedPoint(54,0.06249882);
   DilutionFunc1016->SetSavedPoint(55,0.06231895);
   DilutionFunc1016->SetSavedPoint(56,0.06213681);
   DilutionFunc1016->SetSavedPoint(57,0.0619524);
   DilutionFunc1016->SetSavedPoint(58,0.06176573);
   DilutionFunc1016->SetSavedPoint(59,0.06157677);
   DilutionFunc1016->SetSavedPoint(60,0.06138553);
   DilutionFunc1016->SetSavedPoint(61,0.06119199);
   DilutionFunc1016->SetSavedPoint(62,0.06099616);
   DilutionFunc1016->SetSavedPoint(63,0.06079802);
   DilutionFunc1016->SetSavedPoint(64,0.06059757);
   DilutionFunc1016->SetSavedPoint(65,0.06039479);
   DilutionFunc1016->SetSavedPoint(66,0.0601897);
   DilutionFunc1016->SetSavedPoint(67,0.05998227);
   DilutionFunc1016->SetSavedPoint(68,0.0597725);
   DilutionFunc1016->SetSavedPoint(69,0.05956039);
   DilutionFunc1016->SetSavedPoint(70,0.05934593);
   DilutionFunc1016->SetSavedPoint(71,0.05912911);
   DilutionFunc1016->SetSavedPoint(72,0.05890992);
   DilutionFunc1016->SetSavedPoint(73,0.05868836);
   DilutionFunc1016->SetSavedPoint(74,0.05846443);
   DilutionFunc1016->SetSavedPoint(75,0.05823811);
   DilutionFunc1016->SetSavedPoint(76,0.0580094);
   DilutionFunc1016->SetSavedPoint(77,0.05777829);
   DilutionFunc1016->SetSavedPoint(78,0.05754478);
   DilutionFunc1016->SetSavedPoint(79,0.05730886);
   DilutionFunc1016->SetSavedPoint(80,0.05707052);
   DilutionFunc1016->SetSavedPoint(81,0.05682975);
   DilutionFunc1016->SetSavedPoint(82,0.05658656);
   DilutionFunc1016->SetSavedPoint(83,0.05634093);
   DilutionFunc1016->SetSavedPoint(84,0.05609286);
   DilutionFunc1016->SetSavedPoint(85,0.05584233);
   DilutionFunc1016->SetSavedPoint(86,0.05558935);
   DilutionFunc1016->SetSavedPoint(87,0.05533391);
   DilutionFunc1016->SetSavedPoint(88,0.055076);
   DilutionFunc1016->SetSavedPoint(89,0.05481561);
   DilutionFunc1016->SetSavedPoint(90,0.05455274);
   DilutionFunc1016->SetSavedPoint(91,0.05428738);
   DilutionFunc1016->SetSavedPoint(92,0.05401953);
   DilutionFunc1016->SetSavedPoint(93,0.05374917);
   DilutionFunc1016->SetSavedPoint(94,0.0534763);
   DilutionFunc1016->SetSavedPoint(95,0.05320092);
   DilutionFunc1016->SetSavedPoint(96,0.05292302);
   DilutionFunc1016->SetSavedPoint(97,0.05264259);
   DilutionFunc1016->SetSavedPoint(98,0.05235962);
   DilutionFunc1016->SetSavedPoint(99,0.05207411);
   DilutionFunc1016->SetSavedPoint(100,0.05178605);
   DilutionFunc1016->SetSavedPoint(101,750);
   DilutionFunc1016->SetSavedPoint(102,2750);
   DilutionFunc1016->SetFillColor(19);
   DilutionFunc1016->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1016->SetLineColor(ci);
   DilutionFunc1016->SetLineWidth(3);
   DilutionFunc1016->SetChisquare(11.18735);
   DilutionFunc1016->SetNDF(6);
   DilutionFunc1016->GetXaxis()->SetLabelFont(42);
   DilutionFunc1016->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1016->GetXaxis()->SetTitleFont(42);
   DilutionFunc1016->GetYaxis()->SetLabelFont(42);
   DilutionFunc1016->GetYaxis()->SetTitleFont(42);
   DilutionFunc1016->SetParameter(0,0.07025841);
   DilutionFunc1016->SetParError(0,0.006458192);
   DilutionFunc1016->SetParLimits(0,0,0);
   DilutionFunc1016->SetParameter(1,-9.903528e-05);
   DilutionFunc1016->SetParError(1,2.878646e-05);
   DilutionFunc1016->SetParLimits(1,0,0);
   DilutionFunc1016->SetParent(gre);
   gre->GetListOfFunctions()->Add(DilutionFunc1016);
   gre->Draw("ap");
   
   TF1 *DilutionFunc1017 = new TF1("*DilutionFunc",750,2750,2);
    //The original function : DilutionFunc had originally been created by:
    //TF1 *DilutionFunc = new TF1("DilutionFunc",DilutionFunc,750,2750,2, 1, TF1::EAddToList::kNo);
   DilutionFunc1017->SetRange(750,2750);
   DilutionFunc1017->SetName("DilutionFunc");
   DilutionFunc1017->SetTitle("DilutionFunc");
   DilutionFunc1017->SetSavedPoint(0,0.06903799);
   DilutionFunc1017->SetSavedPoint(1,0.06897041);
   DilutionFunc1017->SetSavedPoint(2,0.06890093);
   DilutionFunc1017->SetSavedPoint(3,0.06882953);
   DilutionFunc1017->SetSavedPoint(4,0.06875622);
   DilutionFunc1017->SetSavedPoint(5,0.06868098);
   DilutionFunc1017->SetSavedPoint(6,0.06860381);
   DilutionFunc1017->SetSavedPoint(7,0.0685247);
   DilutionFunc1017->SetSavedPoint(8,0.06844364);
   DilutionFunc1017->SetSavedPoint(9,0.06836064);
   DilutionFunc1017->SetSavedPoint(10,0.06827567);
   DilutionFunc1017->SetSavedPoint(11,0.06818874);
   DilutionFunc1017->SetSavedPoint(12,0.06809984);
   DilutionFunc1017->SetSavedPoint(13,0.06800895);
   DilutionFunc1017->SetSavedPoint(14,0.06791609);
   DilutionFunc1017->SetSavedPoint(15,0.06782123);
   DilutionFunc1017->SetSavedPoint(16,0.06772438);
   DilutionFunc1017->SetSavedPoint(17,0.06762552);
   DilutionFunc1017->SetSavedPoint(18,0.06752465);
   DilutionFunc1017->SetSavedPoint(19,0.06742176);
   DilutionFunc1017->SetSavedPoint(20,0.06731685);
   DilutionFunc1017->SetSavedPoint(21,0.06720991);
   DilutionFunc1017->SetSavedPoint(22,0.06710093);
   DilutionFunc1017->SetSavedPoint(23,0.06698991);
   DilutionFunc1017->SetSavedPoint(24,0.06687684);
   DilutionFunc1017->SetSavedPoint(25,0.06676171);
   DilutionFunc1017->SetSavedPoint(26,0.06664451);
   DilutionFunc1017->SetSavedPoint(27,0.06652525);
   DilutionFunc1017->SetSavedPoint(28,0.06640391);
   DilutionFunc1017->SetSavedPoint(29,0.06628049);
   DilutionFunc1017->SetSavedPoint(30,0.06615498);
   DilutionFunc1017->SetSavedPoint(31,0.06602737);
   DilutionFunc1017->SetSavedPoint(32,0.06589766);
   DilutionFunc1017->SetSavedPoint(33,0.06576584);
   DilutionFunc1017->SetSavedPoint(34,0.06563191);
   DilutionFunc1017->SetSavedPoint(35,0.06549585);
   DilutionFunc1017->SetSavedPoint(36,0.06535766);
   DilutionFunc1017->SetSavedPoint(37,0.06521734);
   DilutionFunc1017->SetSavedPoint(38,0.06507488);
   DilutionFunc1017->SetSavedPoint(39,0.06493027);
   DilutionFunc1017->SetSavedPoint(40,0.0647835);
   DilutionFunc1017->SetSavedPoint(41,0.06463457);
   DilutionFunc1017->SetSavedPoint(42,0.06448348);
   DilutionFunc1017->SetSavedPoint(43,0.06433021);
   DilutionFunc1017->SetSavedPoint(44,0.06417475);
   DilutionFunc1017->SetSavedPoint(45,0.06401711);
   DilutionFunc1017->SetSavedPoint(46,0.06385728);
   DilutionFunc1017->SetSavedPoint(47,0.06369525);
   DilutionFunc1017->SetSavedPoint(48,0.063531);
   DilutionFunc1017->SetSavedPoint(49,0.06336455);
   DilutionFunc1017->SetSavedPoint(50,0.06319587);
   DilutionFunc1017->SetSavedPoint(51,0.06302496);
   DilutionFunc1017->SetSavedPoint(52,0.06285183);
   DilutionFunc1017->SetSavedPoint(53,0.06267645);
   DilutionFunc1017->SetSavedPoint(54,0.06249882);
   DilutionFunc1017->SetSavedPoint(55,0.06231895);
   DilutionFunc1017->SetSavedPoint(56,0.06213681);
   DilutionFunc1017->SetSavedPoint(57,0.0619524);
   DilutionFunc1017->SetSavedPoint(58,0.06176573);
   DilutionFunc1017->SetSavedPoint(59,0.06157677);
   DilutionFunc1017->SetSavedPoint(60,0.06138553);
   DilutionFunc1017->SetSavedPoint(61,0.06119199);
   DilutionFunc1017->SetSavedPoint(62,0.06099616);
   DilutionFunc1017->SetSavedPoint(63,0.06079802);
   DilutionFunc1017->SetSavedPoint(64,0.06059757);
   DilutionFunc1017->SetSavedPoint(65,0.06039479);
   DilutionFunc1017->SetSavedPoint(66,0.0601897);
   DilutionFunc1017->SetSavedPoint(67,0.05998227);
   DilutionFunc1017->SetSavedPoint(68,0.0597725);
   DilutionFunc1017->SetSavedPoint(69,0.05956039);
   DilutionFunc1017->SetSavedPoint(70,0.05934593);
   DilutionFunc1017->SetSavedPoint(71,0.05912911);
   DilutionFunc1017->SetSavedPoint(72,0.05890992);
   DilutionFunc1017->SetSavedPoint(73,0.05868836);
   DilutionFunc1017->SetSavedPoint(74,0.05846443);
   DilutionFunc1017->SetSavedPoint(75,0.05823811);
   DilutionFunc1017->SetSavedPoint(76,0.0580094);
   DilutionFunc1017->SetSavedPoint(77,0.05777829);
   DilutionFunc1017->SetSavedPoint(78,0.05754478);
   DilutionFunc1017->SetSavedPoint(79,0.05730886);
   DilutionFunc1017->SetSavedPoint(80,0.05707052);
   DilutionFunc1017->SetSavedPoint(81,0.05682975);
   DilutionFunc1017->SetSavedPoint(82,0.05658656);
   DilutionFunc1017->SetSavedPoint(83,0.05634093);
   DilutionFunc1017->SetSavedPoint(84,0.05609286);
   DilutionFunc1017->SetSavedPoint(85,0.05584233);
   DilutionFunc1017->SetSavedPoint(86,0.05558935);
   DilutionFunc1017->SetSavedPoint(87,0.05533391);
   DilutionFunc1017->SetSavedPoint(88,0.055076);
   DilutionFunc1017->SetSavedPoint(89,0.05481561);
   DilutionFunc1017->SetSavedPoint(90,0.05455274);
   DilutionFunc1017->SetSavedPoint(91,0.05428738);
   DilutionFunc1017->SetSavedPoint(92,0.05401953);
   DilutionFunc1017->SetSavedPoint(93,0.05374917);
   DilutionFunc1017->SetSavedPoint(94,0.0534763);
   DilutionFunc1017->SetSavedPoint(95,0.05320092);
   DilutionFunc1017->SetSavedPoint(96,0.05292302);
   DilutionFunc1017->SetSavedPoint(97,0.05264259);
   DilutionFunc1017->SetSavedPoint(98,0.05235962);
   DilutionFunc1017->SetSavedPoint(99,0.05207411);
   DilutionFunc1017->SetSavedPoint(100,0.05178605);
   DilutionFunc1017->SetSavedPoint(101,750);
   DilutionFunc1017->SetSavedPoint(102,2750);
   DilutionFunc1017->SetFillColor(19);
   DilutionFunc1017->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1017->SetLineColor(ci);
   DilutionFunc1017->SetLineWidth(3);
   DilutionFunc1017->SetChisquare(11.18735);
   DilutionFunc1017->SetNDF(6);
   DilutionFunc1017->GetXaxis()->SetLabelFont(42);
   DilutionFunc1017->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1017->GetXaxis()->SetTitleFont(42);
   DilutionFunc1017->GetYaxis()->SetLabelFont(42);
   DilutionFunc1017->GetYaxis()->SetTitleFont(42);
   DilutionFunc1017->SetParameter(0,0.07025841);
   DilutionFunc1017->SetParError(0,0.006458192);
   DilutionFunc1017->SetParLimits(0,0,0);
   DilutionFunc1017->SetParameter(1,-9.903528e-05);
   DilutionFunc1017->SetParError(1,2.878646e-05);
   DilutionFunc1017->SetParLimits(1,0,0);
   DilutionFunc1017->Draw("SAME");
   
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
   pt_LaTex = pt->AddText("1.86
");
   pt_LaTex = pt->AddText("0.07
#pm0.006
");
   pt_LaTex = pt->AddText("-0.0001
#pm3e-05
");
   pt->Draw();
   S12S18->Modified();
   S12S18->cd();
   S12S18->SetSelected(S12S18);
}
