void RecoVertexFit_S12S18()
{
//=========Macro generated from canvas: S12S18/c
//=========  (Tue Dec  7 01:11:50 2021) by ROOT version 6.24/04
   TCanvas *S12S18 = new TCanvas("S12S18", "c",0,0,800,600);
   S12S18->SetHighLightColor(2);
   S12S18->Range(467.0418,-0.015,3024.77,0.135);
   S12S18->SetFillColor(0);
   S12S18->SetBorderMode(0);
   S12S18->SetBorderSize(2);
   S12S18->SetFrameBorderMode(0);
   S12S18->SetFrameBorderMode(0);
   
   Double_t S12S18_trackReco_fx1067[11] = {
   451.859,
   653.3117,
   880.4285,
   1123.038,
   1370.992,
   1619.971,
   1866.545,
   2115.011,
   2362.886,
   2613.266,
   2787.684};
   Double_t S12S18_trackReco_fy1067[11] = {
   -0.05203544,
   0.09203146,
   0.06746833,
   0.08038724,
   0.06266647,
   0.08177498,
   0.08560464,
   0.05369497,
   0.03499522,
   0.06993077,
   0.01901643};
   Double_t S12S18_trackReco_fex1067[11] = {
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
   Double_t S12S18_trackReco_fey1067[11] = {
   0.07808962,
   0.02618025,
   0.01499285,
   0.0123194,
   0.01131333,
   0.01077821,
   0.01090028,
   0.01152905,
   0.01243668,
   0.01232611,
   0.02890409};
   TGraphErrors *gre = new TGraphErrors(11,S12S18_trackReco_fx1067,S12S18_trackReco_fy1067,S12S18_trackReco_fex1067,S12S18_trackReco_fey1067);
   gre->SetName("S12S18_trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_trackReco1067 = new TH1F("Graph_S12S18_trackReco1067","",100,218.2765,3021.267);
   Graph_S12S18_trackReco1067->SetMinimum(0);
   Graph_S12S18_trackReco1067->SetMaximum(0.12);
   Graph_S12S18_trackReco1067->SetDirectory(0);
   Graph_S12S18_trackReco1067->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12S18_trackReco1067->SetLineColor(ci);
   Graph_S12S18_trackReco1067->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12S18_trackReco1067->GetXaxis()->SetRange(19,91);
   Graph_S12S18_trackReco1067->GetXaxis()->CenterTitle(true);
   Graph_S12S18_trackReco1067->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_trackReco1067->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_trackReco1067->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_trackReco1067->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_trackReco1067->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S12S18_trackReco1067->GetYaxis()->CenterTitle(true);
   Graph_S12S18_trackReco1067->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_trackReco1067->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_trackReco1067->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_trackReco1067->GetYaxis()->SetTitleOffset(1.25);
   Graph_S12S18_trackReco1067->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_trackReco1067->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_trackReco1067->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_trackReco1067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_trackReco1067);
   
   
   TF1 *ParabolaFunc1068 = new TF1("*ParabolaFunc",750,2750,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2750,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1068->SetRange(750,2750);
   ParabolaFunc1068->SetName("ParabolaFunc");
   ParabolaFunc1068->SetTitle("ParabolaFunc");
   ParabolaFunc1068->SetSavedPoint(0,0.07151578);
   ParabolaFunc1068->SetSavedPoint(1,0.07173858);
   ParabolaFunc1068->SetSavedPoint(2,0.07195217);
   ParabolaFunc1068->SetSavedPoint(3,0.07215657);
   ParabolaFunc1068->SetSavedPoint(4,0.07235177);
   ParabolaFunc1068->SetSavedPoint(5,0.07253777);
   ParabolaFunc1068->SetSavedPoint(6,0.07271457);
   ParabolaFunc1068->SetSavedPoint(7,0.07288218);
   ParabolaFunc1068->SetSavedPoint(8,0.07304059);
   ParabolaFunc1068->SetSavedPoint(9,0.0731898);
   ParabolaFunc1068->SetSavedPoint(10,0.07332981);
   ParabolaFunc1068->SetSavedPoint(11,0.07346062);
   ParabolaFunc1068->SetSavedPoint(12,0.07358223);
   ParabolaFunc1068->SetSavedPoint(13,0.07369465);
   ParabolaFunc1068->SetSavedPoint(14,0.07379787);
   ParabolaFunc1068->SetSavedPoint(15,0.07389189);
   ParabolaFunc1068->SetSavedPoint(16,0.07397671);
   ParabolaFunc1068->SetSavedPoint(17,0.07405234);
   ParabolaFunc1068->SetSavedPoint(18,0.07411876);
   ParabolaFunc1068->SetSavedPoint(19,0.07417599);
   ParabolaFunc1068->SetSavedPoint(20,0.07422402);
   ParabolaFunc1068->SetSavedPoint(21,0.07426285);
   ParabolaFunc1068->SetSavedPoint(22,0.07429249);
   ParabolaFunc1068->SetSavedPoint(23,0.07431292);
   ParabolaFunc1068->SetSavedPoint(24,0.07432416);
   ParabolaFunc1068->SetSavedPoint(25,0.0743262);
   ParabolaFunc1068->SetSavedPoint(26,0.07431904);
   ParabolaFunc1068->SetSavedPoint(27,0.07430269);
   ParabolaFunc1068->SetSavedPoint(28,0.07427713);
   ParabolaFunc1068->SetSavedPoint(29,0.07424238);
   ParabolaFunc1068->SetSavedPoint(30,0.07419843);
   ParabolaFunc1068->SetSavedPoint(31,0.07414528);
   ParabolaFunc1068->SetSavedPoint(32,0.07408294);
   ParabolaFunc1068->SetSavedPoint(33,0.07401139);
   ParabolaFunc1068->SetSavedPoint(34,0.07393065);
   ParabolaFunc1068->SetSavedPoint(35,0.07384071);
   ParabolaFunc1068->SetSavedPoint(36,0.07374157);
   ParabolaFunc1068->SetSavedPoint(37,0.07363323);
   ParabolaFunc1068->SetSavedPoint(38,0.0735157);
   ParabolaFunc1068->SetSavedPoint(39,0.07338897);
   ParabolaFunc1068->SetSavedPoint(40,0.07325303);
   ParabolaFunc1068->SetSavedPoint(41,0.07310791);
   ParabolaFunc1068->SetSavedPoint(42,0.07295358);
   ParabolaFunc1068->SetSavedPoint(43,0.07279005);
   ParabolaFunc1068->SetSavedPoint(44,0.07261733);
   ParabolaFunc1068->SetSavedPoint(45,0.07243541);
   ParabolaFunc1068->SetSavedPoint(46,0.07224429);
   ParabolaFunc1068->SetSavedPoint(47,0.07204397);
   ParabolaFunc1068->SetSavedPoint(48,0.07183446);
   ParabolaFunc1068->SetSavedPoint(49,0.07161574);
   ParabolaFunc1068->SetSavedPoint(50,0.07138783);
   ParabolaFunc1068->SetSavedPoint(51,0.07115072);
   ParabolaFunc1068->SetSavedPoint(52,0.07090441);
   ParabolaFunc1068->SetSavedPoint(53,0.07064891);
   ParabolaFunc1068->SetSavedPoint(54,0.0703842);
   ParabolaFunc1068->SetSavedPoint(55,0.0701103);
   ParabolaFunc1068->SetSavedPoint(56,0.0698272);
   ParabolaFunc1068->SetSavedPoint(57,0.0695349);
   ParabolaFunc1068->SetSavedPoint(58,0.06923341);
   ParabolaFunc1068->SetSavedPoint(59,0.06892271);
   ParabolaFunc1068->SetSavedPoint(60,0.06860282);
   ParabolaFunc1068->SetSavedPoint(61,0.06827373);
   ParabolaFunc1068->SetSavedPoint(62,0.06793544);
   ParabolaFunc1068->SetSavedPoint(63,0.06758796);
   ParabolaFunc1068->SetSavedPoint(64,0.06723127);
   ParabolaFunc1068->SetSavedPoint(65,0.06686539);
   ParabolaFunc1068->SetSavedPoint(66,0.06649031);
   ParabolaFunc1068->SetSavedPoint(67,0.06610603);
   ParabolaFunc1068->SetSavedPoint(68,0.06571255);
   ParabolaFunc1068->SetSavedPoint(69,0.06530988);
   ParabolaFunc1068->SetSavedPoint(70,0.06489801);
   ParabolaFunc1068->SetSavedPoint(71,0.06447694);
   ParabolaFunc1068->SetSavedPoint(72,0.06404667);
   ParabolaFunc1068->SetSavedPoint(73,0.0636072);
   ParabolaFunc1068->SetSavedPoint(74,0.06315853);
   ParabolaFunc1068->SetSavedPoint(75,0.06270067);
   ParabolaFunc1068->SetSavedPoint(76,0.06223361);
   ParabolaFunc1068->SetSavedPoint(77,0.06175735);
   ParabolaFunc1068->SetSavedPoint(78,0.06127189);
   ParabolaFunc1068->SetSavedPoint(79,0.06077724);
   ParabolaFunc1068->SetSavedPoint(80,0.06027339);
   ParabolaFunc1068->SetSavedPoint(81,0.05976033);
   ParabolaFunc1068->SetSavedPoint(82,0.05923808);
   ParabolaFunc1068->SetSavedPoint(83,0.05870664);
   ParabolaFunc1068->SetSavedPoint(84,0.05816599);
   ParabolaFunc1068->SetSavedPoint(85,0.05761615);
   ParabolaFunc1068->SetSavedPoint(86,0.05705711);
   ParabolaFunc1068->SetSavedPoint(87,0.05648887);
   ParabolaFunc1068->SetSavedPoint(88,0.05591143);
   ParabolaFunc1068->SetSavedPoint(89,0.05532479);
   ParabolaFunc1068->SetSavedPoint(90,0.05472896);
   ParabolaFunc1068->SetSavedPoint(91,0.05412393);
   ParabolaFunc1068->SetSavedPoint(92,0.0535097);
   ParabolaFunc1068->SetSavedPoint(93,0.05288627);
   ParabolaFunc1068->SetSavedPoint(94,0.05225364);
   ParabolaFunc1068->SetSavedPoint(95,0.05161182);
   ParabolaFunc1068->SetSavedPoint(96,0.05096079);
   ParabolaFunc1068->SetSavedPoint(97,0.05030057);
   ParabolaFunc1068->SetSavedPoint(98,0.04963115);
   ParabolaFunc1068->SetSavedPoint(99,0.04895254);
   ParabolaFunc1068->SetSavedPoint(100,0.04826472);
   ParabolaFunc1068->SetSavedPoint(101,750);
   ParabolaFunc1068->SetSavedPoint(102,2750);
   ParabolaFunc1068->SetFillColor(19);
   ParabolaFunc1068->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1068->SetLineColor(ci);
   ParabolaFunc1068->SetLineWidth(3);
   ParabolaFunc1068->SetChisquare(11.22938);
   ParabolaFunc1068->SetNDF(5);
   ParabolaFunc1068->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1068->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1068->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1068->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1068->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1068->SetParameter(0,-1.149758e-08);
   ParabolaFunc1068->SetParError(0,1.573135e-08);
   ParabolaFunc1068->SetParLimits(0,0,0);
   ParabolaFunc1068->SetParameter(1,2.861599e-05);
   ParabolaFunc1068->SetParError(1,5.638388e-05);
   ParabolaFunc1068->SetParLimits(1,0,0);
   ParabolaFunc1068->SetParameter(2,0.05652118);
   ParabolaFunc1068->SetParError(2,0.04750676);
   ParabolaFunc1068->SetParLimits(2,0,0);
   ParabolaFunc1068->SetParent(gre);
   gre->GetListOfFunctions()->Add(ParabolaFunc1068);
   gre->Draw("ap");
   
   TF1 *ParabolaFunc1069 = new TF1("*ParabolaFunc",750,2750,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2750,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1069->SetRange(750,2750);
   ParabolaFunc1069->SetName("ParabolaFunc");
   ParabolaFunc1069->SetTitle("ParabolaFunc");
   ParabolaFunc1069->SetSavedPoint(0,0.07151578);
   ParabolaFunc1069->SetSavedPoint(1,0.07173858);
   ParabolaFunc1069->SetSavedPoint(2,0.07195217);
   ParabolaFunc1069->SetSavedPoint(3,0.07215657);
   ParabolaFunc1069->SetSavedPoint(4,0.07235177);
   ParabolaFunc1069->SetSavedPoint(5,0.07253777);
   ParabolaFunc1069->SetSavedPoint(6,0.07271457);
   ParabolaFunc1069->SetSavedPoint(7,0.07288218);
   ParabolaFunc1069->SetSavedPoint(8,0.07304059);
   ParabolaFunc1069->SetSavedPoint(9,0.0731898);
   ParabolaFunc1069->SetSavedPoint(10,0.07332981);
   ParabolaFunc1069->SetSavedPoint(11,0.07346062);
   ParabolaFunc1069->SetSavedPoint(12,0.07358223);
   ParabolaFunc1069->SetSavedPoint(13,0.07369465);
   ParabolaFunc1069->SetSavedPoint(14,0.07379787);
   ParabolaFunc1069->SetSavedPoint(15,0.07389189);
   ParabolaFunc1069->SetSavedPoint(16,0.07397671);
   ParabolaFunc1069->SetSavedPoint(17,0.07405234);
   ParabolaFunc1069->SetSavedPoint(18,0.07411876);
   ParabolaFunc1069->SetSavedPoint(19,0.07417599);
   ParabolaFunc1069->SetSavedPoint(20,0.07422402);
   ParabolaFunc1069->SetSavedPoint(21,0.07426285);
   ParabolaFunc1069->SetSavedPoint(22,0.07429249);
   ParabolaFunc1069->SetSavedPoint(23,0.07431292);
   ParabolaFunc1069->SetSavedPoint(24,0.07432416);
   ParabolaFunc1069->SetSavedPoint(25,0.0743262);
   ParabolaFunc1069->SetSavedPoint(26,0.07431904);
   ParabolaFunc1069->SetSavedPoint(27,0.07430269);
   ParabolaFunc1069->SetSavedPoint(28,0.07427713);
   ParabolaFunc1069->SetSavedPoint(29,0.07424238);
   ParabolaFunc1069->SetSavedPoint(30,0.07419843);
   ParabolaFunc1069->SetSavedPoint(31,0.07414528);
   ParabolaFunc1069->SetSavedPoint(32,0.07408294);
   ParabolaFunc1069->SetSavedPoint(33,0.07401139);
   ParabolaFunc1069->SetSavedPoint(34,0.07393065);
   ParabolaFunc1069->SetSavedPoint(35,0.07384071);
   ParabolaFunc1069->SetSavedPoint(36,0.07374157);
   ParabolaFunc1069->SetSavedPoint(37,0.07363323);
   ParabolaFunc1069->SetSavedPoint(38,0.0735157);
   ParabolaFunc1069->SetSavedPoint(39,0.07338897);
   ParabolaFunc1069->SetSavedPoint(40,0.07325303);
   ParabolaFunc1069->SetSavedPoint(41,0.07310791);
   ParabolaFunc1069->SetSavedPoint(42,0.07295358);
   ParabolaFunc1069->SetSavedPoint(43,0.07279005);
   ParabolaFunc1069->SetSavedPoint(44,0.07261733);
   ParabolaFunc1069->SetSavedPoint(45,0.07243541);
   ParabolaFunc1069->SetSavedPoint(46,0.07224429);
   ParabolaFunc1069->SetSavedPoint(47,0.07204397);
   ParabolaFunc1069->SetSavedPoint(48,0.07183446);
   ParabolaFunc1069->SetSavedPoint(49,0.07161574);
   ParabolaFunc1069->SetSavedPoint(50,0.07138783);
   ParabolaFunc1069->SetSavedPoint(51,0.07115072);
   ParabolaFunc1069->SetSavedPoint(52,0.07090441);
   ParabolaFunc1069->SetSavedPoint(53,0.07064891);
   ParabolaFunc1069->SetSavedPoint(54,0.0703842);
   ParabolaFunc1069->SetSavedPoint(55,0.0701103);
   ParabolaFunc1069->SetSavedPoint(56,0.0698272);
   ParabolaFunc1069->SetSavedPoint(57,0.0695349);
   ParabolaFunc1069->SetSavedPoint(58,0.06923341);
   ParabolaFunc1069->SetSavedPoint(59,0.06892271);
   ParabolaFunc1069->SetSavedPoint(60,0.06860282);
   ParabolaFunc1069->SetSavedPoint(61,0.06827373);
   ParabolaFunc1069->SetSavedPoint(62,0.06793544);
   ParabolaFunc1069->SetSavedPoint(63,0.06758796);
   ParabolaFunc1069->SetSavedPoint(64,0.06723127);
   ParabolaFunc1069->SetSavedPoint(65,0.06686539);
   ParabolaFunc1069->SetSavedPoint(66,0.06649031);
   ParabolaFunc1069->SetSavedPoint(67,0.06610603);
   ParabolaFunc1069->SetSavedPoint(68,0.06571255);
   ParabolaFunc1069->SetSavedPoint(69,0.06530988);
   ParabolaFunc1069->SetSavedPoint(70,0.06489801);
   ParabolaFunc1069->SetSavedPoint(71,0.06447694);
   ParabolaFunc1069->SetSavedPoint(72,0.06404667);
   ParabolaFunc1069->SetSavedPoint(73,0.0636072);
   ParabolaFunc1069->SetSavedPoint(74,0.06315853);
   ParabolaFunc1069->SetSavedPoint(75,0.06270067);
   ParabolaFunc1069->SetSavedPoint(76,0.06223361);
   ParabolaFunc1069->SetSavedPoint(77,0.06175735);
   ParabolaFunc1069->SetSavedPoint(78,0.06127189);
   ParabolaFunc1069->SetSavedPoint(79,0.06077724);
   ParabolaFunc1069->SetSavedPoint(80,0.06027339);
   ParabolaFunc1069->SetSavedPoint(81,0.05976033);
   ParabolaFunc1069->SetSavedPoint(82,0.05923808);
   ParabolaFunc1069->SetSavedPoint(83,0.05870664);
   ParabolaFunc1069->SetSavedPoint(84,0.05816599);
   ParabolaFunc1069->SetSavedPoint(85,0.05761615);
   ParabolaFunc1069->SetSavedPoint(86,0.05705711);
   ParabolaFunc1069->SetSavedPoint(87,0.05648887);
   ParabolaFunc1069->SetSavedPoint(88,0.05591143);
   ParabolaFunc1069->SetSavedPoint(89,0.05532479);
   ParabolaFunc1069->SetSavedPoint(90,0.05472896);
   ParabolaFunc1069->SetSavedPoint(91,0.05412393);
   ParabolaFunc1069->SetSavedPoint(92,0.0535097);
   ParabolaFunc1069->SetSavedPoint(93,0.05288627);
   ParabolaFunc1069->SetSavedPoint(94,0.05225364);
   ParabolaFunc1069->SetSavedPoint(95,0.05161182);
   ParabolaFunc1069->SetSavedPoint(96,0.05096079);
   ParabolaFunc1069->SetSavedPoint(97,0.05030057);
   ParabolaFunc1069->SetSavedPoint(98,0.04963115);
   ParabolaFunc1069->SetSavedPoint(99,0.04895254);
   ParabolaFunc1069->SetSavedPoint(100,0.04826472);
   ParabolaFunc1069->SetSavedPoint(101,750);
   ParabolaFunc1069->SetSavedPoint(102,2750);
   ParabolaFunc1069->SetFillColor(19);
   ParabolaFunc1069->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1069->SetLineColor(ci);
   ParabolaFunc1069->SetLineWidth(3);
   ParabolaFunc1069->SetChisquare(11.22938);
   ParabolaFunc1069->SetNDF(5);
   ParabolaFunc1069->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1069->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1069->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1069->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1069->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1069->SetParameter(0,-1.149758e-08);
   ParabolaFunc1069->SetParError(0,1.573135e-08);
   ParabolaFunc1069->SetParLimits(0,0,0);
   ParabolaFunc1069->SetParameter(1,2.861599e-05);
   ParabolaFunc1069->SetParError(1,5.638388e-05);
   ParabolaFunc1069->SetParLimits(1,0,0);
   ParabolaFunc1069->SetParameter(2,0.05652118);
   ParabolaFunc1069->SetParError(2,0.04750676);
   ParabolaFunc1069->SetParLimits(2,0,0);
   ParabolaFunc1069->Draw("SAME");
   
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
   pt_LaTex = pt->AddText("2.25
");
   pt_LaTex = pt->AddText("-1e-08
#pm2e-08
");
   pt_LaTex = pt->AddText("3e-05
#pm6e-05
");
   pt_LaTex = pt->AddText("0.06
#pm0.05
");
   pt->Draw();
   S12S18->Modified();
   S12S18->cd();
   S12S18->SetSelected(S12S18);
}
