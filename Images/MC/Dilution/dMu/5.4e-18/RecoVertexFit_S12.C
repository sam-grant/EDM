void RecoVertexFit_S12()
{
//=========Macro generated from canvas: S12/c
//=========  (Thu Feb  3 13:23:10 2022) by ROOT version 6.24/06
   TCanvas *S12 = new TCanvas("S12", "c",0,0,800,600);
   S12->SetHighLightColor(2);
   S12->Range(466.9911,-0.015,3024.667,0.135);
   S12->SetFillColor(0);
   S12->SetBorderMode(0);
   S12->SetBorderSize(2);
   S12->SetFrameBorderMode(0);
   S12->SetFrameBorderMode(0);
   
   Double_t S12_trackReco_fx1007[11] = {
   451.8085,
   653.3576,
   880.334,
   1123.155,
   1371.138,
   1620.288,
   1866.777,
   2114.885,
   2362.581,
   2614.18,
   2787.586};
   Double_t S12_trackReco_fy1007[11] = {
   0.08904284,
   0.07338525,
   0.06466967,
   0.07496798,
   0.06235652,
   0.07708388,
   0.08283227,
   0.07667804,
   0.02419212,
   0.03927915,
   0.03449036};
   Double_t S12_trackReco_fex1007[11] = {
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
   Double_t S12_trackReco_fey1007[11] = {
   0.08526107,
   0.02864423,
   0.01648357,
   0.01354389,
   0.01238096,
   0.01175884,
   0.01182052,
   0.01249912,
   0.01346099,
   0.01341857,
   0.03084393};
   TGraphErrors *gre = new TGraphErrors(11,S12_trackReco_fx1007,S12_trackReco_fy1007,S12_trackReco_fex1007,S12_trackReco_fey1007);
   gre->SetName("S12_trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_trackReco1007 = new TH1F("Graph_S12_trackReco1007","",100,218.2308,3021.163);
   Graph_S12_trackReco1007->SetMinimum(0);
   Graph_S12_trackReco1007->SetMaximum(0.12);
   Graph_S12_trackReco1007->SetDirectory(0);
   Graph_S12_trackReco1007->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12_trackReco1007->SetLineColor(ci);
   Graph_S12_trackReco1007->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_trackReco1007->GetXaxis()->SetRange(19,91);
   Graph_S12_trackReco1007->GetXaxis()->CenterTitle(true);
   Graph_S12_trackReco1007->GetXaxis()->SetLabelFont(42);
   Graph_S12_trackReco1007->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_trackReco1007->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_trackReco1007->GetXaxis()->SetTitleFont(42);
   Graph_S12_trackReco1007->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S12_trackReco1007->GetYaxis()->CenterTitle(true);
   Graph_S12_trackReco1007->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_trackReco1007->GetYaxis()->SetLabelFont(42);
   Graph_S12_trackReco1007->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_trackReco1007->GetYaxis()->SetTitleOffset(1.25);
   Graph_S12_trackReco1007->GetYaxis()->SetTitleFont(42);
   Graph_S12_trackReco1007->GetZaxis()->SetLabelFont(42);
   Graph_S12_trackReco1007->GetZaxis()->SetTitleOffset(1);
   Graph_S12_trackReco1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_trackReco1007);
   
   
   TF1 *ParabolaFunc1008 = new TF1("*ParabolaFunc",750,2750,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2750,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1008->SetRange(750,2750);
   ParabolaFunc1008->SetName("ParabolaFunc");
   ParabolaFunc1008->SetTitle("ParabolaFunc");
   ParabolaFunc1008->SetSavedPoint(0,0.0532853);
   ParabolaFunc1008->SetSavedPoint(1,0.05451138);
   ParabolaFunc1008->SetSavedPoint(2,0.05570564);
   ParabolaFunc1008->SetSavedPoint(3,0.05686808);
   ParabolaFunc1008->SetSavedPoint(4,0.05799869);
   ParabolaFunc1008->SetSavedPoint(5,0.05909747);
   ParabolaFunc1008->SetSavedPoint(6,0.06016443);
   ParabolaFunc1008->SetSavedPoint(7,0.06119957);
   ParabolaFunc1008->SetSavedPoint(8,0.06220288);
   ParabolaFunc1008->SetSavedPoint(9,0.06317437);
   ParabolaFunc1008->SetSavedPoint(10,0.06411403);
   ParabolaFunc1008->SetSavedPoint(11,0.06502187);
   ParabolaFunc1008->SetSavedPoint(12,0.06589788);
   ParabolaFunc1008->SetSavedPoint(13,0.06674207);
   ParabolaFunc1008->SetSavedPoint(14,0.06755443);
   ParabolaFunc1008->SetSavedPoint(15,0.06833498);
   ParabolaFunc1008->SetSavedPoint(16,0.06908369);
   ParabolaFunc1008->SetSavedPoint(17,0.06980058);
   ParabolaFunc1008->SetSavedPoint(18,0.07048565);
   ParabolaFunc1008->SetSavedPoint(19,0.07113889);
   ParabolaFunc1008->SetSavedPoint(20,0.07176031);
   ParabolaFunc1008->SetSavedPoint(21,0.0723499);
   ParabolaFunc1008->SetSavedPoint(22,0.07290767);
   ParabolaFunc1008->SetSavedPoint(23,0.07343361);
   ParabolaFunc1008->SetSavedPoint(24,0.07392773);
   ParabolaFunc1008->SetSavedPoint(25,0.07439003);
   ParabolaFunc1008->SetSavedPoint(26,0.0748205);
   ParabolaFunc1008->SetSavedPoint(27,0.07521914);
   ParabolaFunc1008->SetSavedPoint(28,0.07558597);
   ParabolaFunc1008->SetSavedPoint(29,0.07592096);
   ParabolaFunc1008->SetSavedPoint(30,0.07622413);
   ParabolaFunc1008->SetSavedPoint(31,0.07649548);
   ParabolaFunc1008->SetSavedPoint(32,0.07673501);
   ParabolaFunc1008->SetSavedPoint(33,0.0769427);
   ParabolaFunc1008->SetSavedPoint(34,0.07711858);
   ParabolaFunc1008->SetSavedPoint(35,0.07726263);
   ParabolaFunc1008->SetSavedPoint(36,0.07737485);
   ParabolaFunc1008->SetSavedPoint(37,0.07745525);
   ParabolaFunc1008->SetSavedPoint(38,0.07750383);
   ParabolaFunc1008->SetSavedPoint(39,0.07752058);
   ParabolaFunc1008->SetSavedPoint(40,0.07750551);
   ParabolaFunc1008->SetSavedPoint(41,0.07745861);
   ParabolaFunc1008->SetSavedPoint(42,0.07737989);
   ParabolaFunc1008->SetSavedPoint(43,0.07726934);
   ParabolaFunc1008->SetSavedPoint(44,0.07712697);
   ParabolaFunc1008->SetSavedPoint(45,0.07695278);
   ParabolaFunc1008->SetSavedPoint(46,0.07674676);
   ParabolaFunc1008->SetSavedPoint(47,0.07650891);
   ParabolaFunc1008->SetSavedPoint(48,0.07623924);
   ParabolaFunc1008->SetSavedPoint(49,0.07593775);
   ParabolaFunc1008->SetSavedPoint(50,0.07560443);
   ParabolaFunc1008->SetSavedPoint(51,0.07523929);
   ParabolaFunc1008->SetSavedPoint(52,0.07484232);
   ParabolaFunc1008->SetSavedPoint(53,0.07441353);
   ParabolaFunc1008->SetSavedPoint(54,0.07395292);
   ParabolaFunc1008->SetSavedPoint(55,0.07346048);
   ParabolaFunc1008->SetSavedPoint(56,0.07293621);
   ParabolaFunc1008->SetSavedPoint(57,0.07238012);
   ParabolaFunc1008->SetSavedPoint(58,0.07179221);
   ParabolaFunc1008->SetSavedPoint(59,0.07117247);
   ParabolaFunc1008->SetSavedPoint(60,0.0705209);
   ParabolaFunc1008->SetSavedPoint(61,0.06983752);
   ParabolaFunc1008->SetSavedPoint(62,0.0691223);
   ParabolaFunc1008->SetSavedPoint(63,0.06837527);
   ParabolaFunc1008->SetSavedPoint(64,0.06759641);
   ParabolaFunc1008->SetSavedPoint(65,0.06678572);
   ParabolaFunc1008->SetSavedPoint(66,0.06594321);
   ParabolaFunc1008->SetSavedPoint(67,0.06506888);
   ParabolaFunc1008->SetSavedPoint(68,0.06416272);
   ParabolaFunc1008->SetSavedPoint(69,0.06322473);
   ParabolaFunc1008->SetSavedPoint(70,0.06225492);
   ParabolaFunc1008->SetSavedPoint(71,0.06125329);
   ParabolaFunc1008->SetSavedPoint(72,0.06021983);
   ParabolaFunc1008->SetSavedPoint(73,0.05915455);
   ParabolaFunc1008->SetSavedPoint(74,0.05805745);
   ParabolaFunc1008->SetSavedPoint(75,0.05692851);
   ParabolaFunc1008->SetSavedPoint(76,0.05576776);
   ParabolaFunc1008->SetSavedPoint(77,0.05457518);
   ParabolaFunc1008->SetSavedPoint(78,0.05335077);
   ParabolaFunc1008->SetSavedPoint(79,0.05209455);
   ParabolaFunc1008->SetSavedPoint(80,0.05080649);
   ParabolaFunc1008->SetSavedPoint(81,0.04948661);
   ParabolaFunc1008->SetSavedPoint(82,0.04813491);
   ParabolaFunc1008->SetSavedPoint(83,0.04675138);
   ParabolaFunc1008->SetSavedPoint(84,0.04533603);
   ParabolaFunc1008->SetSavedPoint(85,0.04388886);
   ParabolaFunc1008->SetSavedPoint(86,0.04240986);
   ParabolaFunc1008->SetSavedPoint(87,0.04089903);
   ParabolaFunc1008->SetSavedPoint(88,0.03935638);
   ParabolaFunc1008->SetSavedPoint(89,0.03778191);
   ParabolaFunc1008->SetSavedPoint(90,0.03617561);
   ParabolaFunc1008->SetSavedPoint(91,0.03453749);
   ParabolaFunc1008->SetSavedPoint(92,0.03286754);
   ParabolaFunc1008->SetSavedPoint(93,0.03116576);
   ParabolaFunc1008->SetSavedPoint(94,0.02943217);
   ParabolaFunc1008->SetSavedPoint(95,0.02766675);
   ParabolaFunc1008->SetSavedPoint(96,0.0258695);
   ParabolaFunc1008->SetSavedPoint(97,0.02404043);
   ParabolaFunc1008->SetSavedPoint(98,0.02217954);
   ParabolaFunc1008->SetSavedPoint(99,0.02028682);
   ParabolaFunc1008->SetSavedPoint(100,0.01836227);
   ParabolaFunc1008->SetSavedPoint(101,750);
   ParabolaFunc1008->SetSavedPoint(102,2750);
   ParabolaFunc1008->SetFillColor(19);
   ParabolaFunc1008->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1008->SetLineColor(ci);
   ParabolaFunc1008->SetLineWidth(3);
   ParabolaFunc1008->SetChisquare(7.25083);
   ParabolaFunc1008->SetNDF(5);
   ParabolaFunc1008->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1008->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1008->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1008->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1008->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1008->SetParameter(0,-3.978065e-08);
   ParabolaFunc1008->SetParError(0,1.71553e-08);
   ParabolaFunc1008->SetParLimits(0,0,0);
   ParabolaFunc1008->SetParameter(1,0.0001217708);
   ParabolaFunc1008->SetParError(1,6.154872e-05);
   ParabolaFunc1008->SetParLimits(1,0,0);
   ParabolaFunc1008->SetParameter(2,-0.01566615);
   ParabolaFunc1008->SetParError(2,0.05194575);
   ParabolaFunc1008->SetParLimits(2,0,0);
   ParabolaFunc1008->SetParent(gre);
   gre->GetListOfFunctions()->Add(ParabolaFunc1008);
   gre->Draw("ap");
   
   TF1 *ParabolaFunc1009 = new TF1("*ParabolaFunc",750,2750,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2750,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1009->SetRange(750,2750);
   ParabolaFunc1009->SetName("ParabolaFunc");
   ParabolaFunc1009->SetTitle("ParabolaFunc");
   ParabolaFunc1009->SetSavedPoint(0,0.0532853);
   ParabolaFunc1009->SetSavedPoint(1,0.05451138);
   ParabolaFunc1009->SetSavedPoint(2,0.05570564);
   ParabolaFunc1009->SetSavedPoint(3,0.05686808);
   ParabolaFunc1009->SetSavedPoint(4,0.05799869);
   ParabolaFunc1009->SetSavedPoint(5,0.05909747);
   ParabolaFunc1009->SetSavedPoint(6,0.06016443);
   ParabolaFunc1009->SetSavedPoint(7,0.06119957);
   ParabolaFunc1009->SetSavedPoint(8,0.06220288);
   ParabolaFunc1009->SetSavedPoint(9,0.06317437);
   ParabolaFunc1009->SetSavedPoint(10,0.06411403);
   ParabolaFunc1009->SetSavedPoint(11,0.06502187);
   ParabolaFunc1009->SetSavedPoint(12,0.06589788);
   ParabolaFunc1009->SetSavedPoint(13,0.06674207);
   ParabolaFunc1009->SetSavedPoint(14,0.06755443);
   ParabolaFunc1009->SetSavedPoint(15,0.06833498);
   ParabolaFunc1009->SetSavedPoint(16,0.06908369);
   ParabolaFunc1009->SetSavedPoint(17,0.06980058);
   ParabolaFunc1009->SetSavedPoint(18,0.07048565);
   ParabolaFunc1009->SetSavedPoint(19,0.07113889);
   ParabolaFunc1009->SetSavedPoint(20,0.07176031);
   ParabolaFunc1009->SetSavedPoint(21,0.0723499);
   ParabolaFunc1009->SetSavedPoint(22,0.07290767);
   ParabolaFunc1009->SetSavedPoint(23,0.07343361);
   ParabolaFunc1009->SetSavedPoint(24,0.07392773);
   ParabolaFunc1009->SetSavedPoint(25,0.07439003);
   ParabolaFunc1009->SetSavedPoint(26,0.0748205);
   ParabolaFunc1009->SetSavedPoint(27,0.07521914);
   ParabolaFunc1009->SetSavedPoint(28,0.07558597);
   ParabolaFunc1009->SetSavedPoint(29,0.07592096);
   ParabolaFunc1009->SetSavedPoint(30,0.07622413);
   ParabolaFunc1009->SetSavedPoint(31,0.07649548);
   ParabolaFunc1009->SetSavedPoint(32,0.07673501);
   ParabolaFunc1009->SetSavedPoint(33,0.0769427);
   ParabolaFunc1009->SetSavedPoint(34,0.07711858);
   ParabolaFunc1009->SetSavedPoint(35,0.07726263);
   ParabolaFunc1009->SetSavedPoint(36,0.07737485);
   ParabolaFunc1009->SetSavedPoint(37,0.07745525);
   ParabolaFunc1009->SetSavedPoint(38,0.07750383);
   ParabolaFunc1009->SetSavedPoint(39,0.07752058);
   ParabolaFunc1009->SetSavedPoint(40,0.07750551);
   ParabolaFunc1009->SetSavedPoint(41,0.07745861);
   ParabolaFunc1009->SetSavedPoint(42,0.07737989);
   ParabolaFunc1009->SetSavedPoint(43,0.07726934);
   ParabolaFunc1009->SetSavedPoint(44,0.07712697);
   ParabolaFunc1009->SetSavedPoint(45,0.07695278);
   ParabolaFunc1009->SetSavedPoint(46,0.07674676);
   ParabolaFunc1009->SetSavedPoint(47,0.07650891);
   ParabolaFunc1009->SetSavedPoint(48,0.07623924);
   ParabolaFunc1009->SetSavedPoint(49,0.07593775);
   ParabolaFunc1009->SetSavedPoint(50,0.07560443);
   ParabolaFunc1009->SetSavedPoint(51,0.07523929);
   ParabolaFunc1009->SetSavedPoint(52,0.07484232);
   ParabolaFunc1009->SetSavedPoint(53,0.07441353);
   ParabolaFunc1009->SetSavedPoint(54,0.07395292);
   ParabolaFunc1009->SetSavedPoint(55,0.07346048);
   ParabolaFunc1009->SetSavedPoint(56,0.07293621);
   ParabolaFunc1009->SetSavedPoint(57,0.07238012);
   ParabolaFunc1009->SetSavedPoint(58,0.07179221);
   ParabolaFunc1009->SetSavedPoint(59,0.07117247);
   ParabolaFunc1009->SetSavedPoint(60,0.0705209);
   ParabolaFunc1009->SetSavedPoint(61,0.06983752);
   ParabolaFunc1009->SetSavedPoint(62,0.0691223);
   ParabolaFunc1009->SetSavedPoint(63,0.06837527);
   ParabolaFunc1009->SetSavedPoint(64,0.06759641);
   ParabolaFunc1009->SetSavedPoint(65,0.06678572);
   ParabolaFunc1009->SetSavedPoint(66,0.06594321);
   ParabolaFunc1009->SetSavedPoint(67,0.06506888);
   ParabolaFunc1009->SetSavedPoint(68,0.06416272);
   ParabolaFunc1009->SetSavedPoint(69,0.06322473);
   ParabolaFunc1009->SetSavedPoint(70,0.06225492);
   ParabolaFunc1009->SetSavedPoint(71,0.06125329);
   ParabolaFunc1009->SetSavedPoint(72,0.06021983);
   ParabolaFunc1009->SetSavedPoint(73,0.05915455);
   ParabolaFunc1009->SetSavedPoint(74,0.05805745);
   ParabolaFunc1009->SetSavedPoint(75,0.05692851);
   ParabolaFunc1009->SetSavedPoint(76,0.05576776);
   ParabolaFunc1009->SetSavedPoint(77,0.05457518);
   ParabolaFunc1009->SetSavedPoint(78,0.05335077);
   ParabolaFunc1009->SetSavedPoint(79,0.05209455);
   ParabolaFunc1009->SetSavedPoint(80,0.05080649);
   ParabolaFunc1009->SetSavedPoint(81,0.04948661);
   ParabolaFunc1009->SetSavedPoint(82,0.04813491);
   ParabolaFunc1009->SetSavedPoint(83,0.04675138);
   ParabolaFunc1009->SetSavedPoint(84,0.04533603);
   ParabolaFunc1009->SetSavedPoint(85,0.04388886);
   ParabolaFunc1009->SetSavedPoint(86,0.04240986);
   ParabolaFunc1009->SetSavedPoint(87,0.04089903);
   ParabolaFunc1009->SetSavedPoint(88,0.03935638);
   ParabolaFunc1009->SetSavedPoint(89,0.03778191);
   ParabolaFunc1009->SetSavedPoint(90,0.03617561);
   ParabolaFunc1009->SetSavedPoint(91,0.03453749);
   ParabolaFunc1009->SetSavedPoint(92,0.03286754);
   ParabolaFunc1009->SetSavedPoint(93,0.03116576);
   ParabolaFunc1009->SetSavedPoint(94,0.02943217);
   ParabolaFunc1009->SetSavedPoint(95,0.02766675);
   ParabolaFunc1009->SetSavedPoint(96,0.0258695);
   ParabolaFunc1009->SetSavedPoint(97,0.02404043);
   ParabolaFunc1009->SetSavedPoint(98,0.02217954);
   ParabolaFunc1009->SetSavedPoint(99,0.02028682);
   ParabolaFunc1009->SetSavedPoint(100,0.01836227);
   ParabolaFunc1009->SetSavedPoint(101,750);
   ParabolaFunc1009->SetSavedPoint(102,2750);
   ParabolaFunc1009->SetFillColor(19);
   ParabolaFunc1009->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1009->SetLineColor(ci);
   ParabolaFunc1009->SetLineWidth(3);
   ParabolaFunc1009->SetChisquare(7.25083);
   ParabolaFunc1009->SetNDF(5);
   ParabolaFunc1009->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1009->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1009->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1009->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1009->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1009->SetParameter(0,-3.978065e-08);
   ParabolaFunc1009->SetParError(0,1.71553e-08);
   ParabolaFunc1009->SetParLimits(0,0,0);
   ParabolaFunc1009->SetParameter(1,0.0001217708);
   ParabolaFunc1009->SetParError(1,6.154872e-05);
   ParabolaFunc1009->SetParLimits(1,0,0);
   ParabolaFunc1009->SetParameter(2,-0.01566615);
   ParabolaFunc1009->SetParError(2,0.05194575);
   ParabolaFunc1009->SetParLimits(2,0,0);
   ParabolaFunc1009->Draw("SAME");
   
   TLegend *leg = new TLegend(0.125,0.79,0.875,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12_trackReco","Sim: reco vertices","lpf");
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
   pt_LaTex = pt->AddText("1.45
");
   pt_LaTex = pt->AddText("-4e-08
#pm2e-08
");
   pt_LaTex = pt->AddText("0.0001
#pm6e-05
");
   pt_LaTex = pt->AddText("-0.02
#pm0.05
");
   pt->Draw();
   S12->Modified();
   S12->cd();
   S12->SetSelected(S12);
}
