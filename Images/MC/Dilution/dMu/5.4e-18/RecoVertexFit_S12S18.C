void RecoVertexFit_S12S18()
{
//=========Macro generated from canvas: S12S18/c
//=========  (Wed Apr 20 00:05:56 2022) by ROOT version 6.24/06
   TCanvas *S12S18 = new TCanvas("S12S18", "c",0,0,800,600);
   S12S18->SetHighLightColor(2);
   S12S18->Range(467.0784,-0.03875,3024.686,0.14875);
   S12S18->SetFillColor(0);
   S12S18->SetBorderMode(0);
   S12S18->SetBorderSize(2);
   S12S18->SetFrameBorderMode(0);
   S12S18->SetFrameBorderMode(0);
   
   Double_t S12S18_trackReco_fx1015[11] = {
   451.8963,
   653.3497,
   880.4168,
   1123.105,
   1371.026,
   1619.994,
   1866.738,
   2115.059,
   2362.927,
   2613.265,
   2787.611};
   Double_t S12S18_trackReco_fy1015[11] = {
   0.02636902,
   0.07270088,
   0.06917913,
   0.07305442,
   0.07840088,
   0.08250544,
   0.07932669,
   0.06060894,
   0.0542997,
   0.0610263,
   0.02851068};
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
   0.05337944,
   0.01787138,
   0.01024343,
   0.008414166,
   0.007723566,
   0.007357385,
   0.007433909,
   0.007874323,
   0.008501101,
   0.008404824,
   0.01967341};
   TGraphErrors *gre = new TGraphErrors(11,S12S18_trackReco_fx1015,S12S18_trackReco_fy1015,S12S18_trackReco_fex1015,S12S18_trackReco_fey1015);
   gre->SetName("S12S18_trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_trackReco1015 = new TH1F("Graph_S12S18_trackReco1015","",100,218.3248,3021.183);
   Graph_S12S18_trackReco1015->SetMinimum(-0.02);
   Graph_S12S18_trackReco1015->SetMaximum(0.13);
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
   DilutionFunc1016->SetSavedPoint(0,0.08056975);
   DilutionFunc1016->SetSavedPoint(1,0.08047213);
   DilutionFunc1016->SetSavedPoint(2,0.08037173);
   DilutionFunc1016->SetSavedPoint(3,0.08026855);
   DilutionFunc1016->SetSavedPoint(4,0.08016258);
   DilutionFunc1016->SetSavedPoint(5,0.0800538);
   DilutionFunc1016->SetSavedPoint(6,0.07994221);
   DilutionFunc1016->SetSavedPoint(7,0.0798278);
   DilutionFunc1016->SetSavedPoint(8,0.07971055);
   DilutionFunc1016->SetSavedPoint(9,0.07959046);
   DilutionFunc1016->SetSavedPoint(10,0.07946752);
   DilutionFunc1016->SetSavedPoint(11,0.07934171);
   DilutionFunc1016->SetSavedPoint(12,0.07921302);
   DilutionFunc1016->SetSavedPoint(13,0.07908145);
   DilutionFunc1016->SetSavedPoint(14,0.07894698);
   DilutionFunc1016->SetSavedPoint(15,0.0788096);
   DilutionFunc1016->SetSavedPoint(16,0.07866931);
   DilutionFunc1016->SetSavedPoint(17,0.07852609);
   DilutionFunc1016->SetSavedPoint(18,0.07837993);
   DilutionFunc1016->SetSavedPoint(19,0.07823082);
   DilutionFunc1016->SetSavedPoint(20,0.07807875);
   DilutionFunc1016->SetSavedPoint(21,0.07792372);
   DilutionFunc1016->SetSavedPoint(22,0.0777657);
   DilutionFunc1016->SetSavedPoint(23,0.0776047);
   DilutionFunc1016->SetSavedPoint(24,0.07744069);
   DilutionFunc1016->SetSavedPoint(25,0.07727368);
   DilutionFunc1016->SetSavedPoint(26,0.07710364);
   DilutionFunc1016->SetSavedPoint(27,0.07693057);
   DilutionFunc1016->SetSavedPoint(28,0.07675446);
   DilutionFunc1016->SetSavedPoint(29,0.0765753);
   DilutionFunc1016->SetSavedPoint(30,0.07639307);
   DilutionFunc1016->SetSavedPoint(31,0.07620777);
   DilutionFunc1016->SetSavedPoint(32,0.07601939);
   DilutionFunc1016->SetSavedPoint(33,0.07582791);
   DilutionFunc1016->SetSavedPoint(34,0.07563333);
   DilutionFunc1016->SetSavedPoint(35,0.07543563);
   DilutionFunc1016->SetSavedPoint(36,0.07523481);
   DilutionFunc1016->SetSavedPoint(37,0.07503086);
   DilutionFunc1016->SetSavedPoint(38,0.07482375);
   DilutionFunc1016->SetSavedPoint(39,0.07461349);
   DilutionFunc1016->SetSavedPoint(40,0.07440007);
   DilutionFunc1016->SetSavedPoint(41,0.07418347);
   DilutionFunc1016->SetSavedPoint(42,0.07396368);
   DilutionFunc1016->SetSavedPoint(43,0.07374069);
   DilutionFunc1016->SetSavedPoint(44,0.07351449);
   DilutionFunc1016->SetSavedPoint(45,0.07328508);
   DilutionFunc1016->SetSavedPoint(46,0.07305243);
   DilutionFunc1016->SetSavedPoint(47,0.07281655);
   DilutionFunc1016->SetSavedPoint(48,0.07257742);
   DilutionFunc1016->SetSavedPoint(49,0.07233502);
   DilutionFunc1016->SetSavedPoint(50,0.07208936);
   DilutionFunc1016->SetSavedPoint(51,0.07184041);
   DilutionFunc1016->SetSavedPoint(52,0.07158818);
   DilutionFunc1016->SetSavedPoint(53,0.07133264);
   DilutionFunc1016->SetSavedPoint(54,0.07107379);
   DilutionFunc1016->SetSavedPoint(55,0.07081162);
   DilutionFunc1016->SetSavedPoint(56,0.07054611);
   DilutionFunc1016->SetSavedPoint(57,0.07027726);
   DilutionFunc1016->SetSavedPoint(58,0.07000506);
   DilutionFunc1016->SetSavedPoint(59,0.06972949);
   DilutionFunc1016->SetSavedPoint(60,0.06945055);
   DilutionFunc1016->SetSavedPoint(61,0.06916822);
   DilutionFunc1016->SetSavedPoint(62,0.0688825);
   DilutionFunc1016->SetSavedPoint(63,0.06859337);
   DilutionFunc1016->SetSavedPoint(64,0.06830083);
   DilutionFunc1016->SetSavedPoint(65,0.06800486);
   DilutionFunc1016->SetSavedPoint(66,0.06770545);
   DilutionFunc1016->SetSavedPoint(67,0.06740259);
   DilutionFunc1016->SetSavedPoint(68,0.06709628);
   DilutionFunc1016->SetSavedPoint(69,0.0667865);
   DilutionFunc1016->SetSavedPoint(70,0.06647324);
   DilutionFunc1016->SetSavedPoint(71,0.06615649);
   DilutionFunc1016->SetSavedPoint(72,0.06583625);
   DilutionFunc1016->SetSavedPoint(73,0.06551249);
   DilutionFunc1016->SetSavedPoint(74,0.06518521);
   DilutionFunc1016->SetSavedPoint(75,0.06485441);
   DilutionFunc1016->SetSavedPoint(76,0.06452006);
   DilutionFunc1016->SetSavedPoint(77,0.06418216);
   DilutionFunc1016->SetSavedPoint(78,0.0638407);
   DilutionFunc1016->SetSavedPoint(79,0.06349566);
   DilutionFunc1016->SetSavedPoint(80,0.06314705);
   DilutionFunc1016->SetSavedPoint(81,0.06279484);
   DilutionFunc1016->SetSavedPoint(82,0.06243903);
   DilutionFunc1016->SetSavedPoint(83,0.0620796);
   DilutionFunc1016->SetSavedPoint(84,0.06171655);
   DilutionFunc1016->SetSavedPoint(85,0.06134987);
   DilutionFunc1016->SetSavedPoint(86,0.06097954);
   DilutionFunc1016->SetSavedPoint(87,0.06060556);
   DilutionFunc1016->SetSavedPoint(88,0.06022791);
   DilutionFunc1016->SetSavedPoint(89,0.05984658);
   DilutionFunc1016->SetSavedPoint(90,0.05946157);
   DilutionFunc1016->SetSavedPoint(91,0.05907286);
   DilutionFunc1016->SetSavedPoint(92,0.05868045);
   DilutionFunc1016->SetSavedPoint(93,0.05828432);
   DilutionFunc1016->SetSavedPoint(94,0.05788446);
   DilutionFunc1016->SetSavedPoint(95,0.05748086);
   DilutionFunc1016->SetSavedPoint(96,0.05707351);
   DilutionFunc1016->SetSavedPoint(97,0.0566624);
   DilutionFunc1016->SetSavedPoint(98,0.05624753);
   DilutionFunc1016->SetSavedPoint(99,0.05582887);
   DilutionFunc1016->SetSavedPoint(100,0.05540642);
   DilutionFunc1016->SetSavedPoint(101,750);
   DilutionFunc1016->SetSavedPoint(102,2750);
   DilutionFunc1016->SetFillColor(19);
   DilutionFunc1016->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1016->SetLineColor(ci);
   DilutionFunc1016->SetLineWidth(3);
   DilutionFunc1016->SetChisquare(6.198762);
   DilutionFunc1016->SetNDF(6);
   DilutionFunc1016->GetXaxis()->SetLabelFont(42);
   DilutionFunc1016->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1016->GetXaxis()->SetTitleFont(42);
   DilutionFunc1016->GetYaxis()->SetLabelFont(42);
   DilutionFunc1016->GetYaxis()->SetTitleFont(42);
   DilutionFunc1016->SetParameter(0,0.08232864);
   DilutionFunc1016->SetParError(0,0.00566841);
   DilutionFunc1016->SetParLimits(0,0,0);
   DilutionFunc1016->SetParameter(1,-0.0001095573);
   DilutionFunc1016->SetParError(1,1.854845e-05);
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
   DilutionFunc1017->SetSavedPoint(0,0.08056975);
   DilutionFunc1017->SetSavedPoint(1,0.08047213);
   DilutionFunc1017->SetSavedPoint(2,0.08037173);
   DilutionFunc1017->SetSavedPoint(3,0.08026855);
   DilutionFunc1017->SetSavedPoint(4,0.08016258);
   DilutionFunc1017->SetSavedPoint(5,0.0800538);
   DilutionFunc1017->SetSavedPoint(6,0.07994221);
   DilutionFunc1017->SetSavedPoint(7,0.0798278);
   DilutionFunc1017->SetSavedPoint(8,0.07971055);
   DilutionFunc1017->SetSavedPoint(9,0.07959046);
   DilutionFunc1017->SetSavedPoint(10,0.07946752);
   DilutionFunc1017->SetSavedPoint(11,0.07934171);
   DilutionFunc1017->SetSavedPoint(12,0.07921302);
   DilutionFunc1017->SetSavedPoint(13,0.07908145);
   DilutionFunc1017->SetSavedPoint(14,0.07894698);
   DilutionFunc1017->SetSavedPoint(15,0.0788096);
   DilutionFunc1017->SetSavedPoint(16,0.07866931);
   DilutionFunc1017->SetSavedPoint(17,0.07852609);
   DilutionFunc1017->SetSavedPoint(18,0.07837993);
   DilutionFunc1017->SetSavedPoint(19,0.07823082);
   DilutionFunc1017->SetSavedPoint(20,0.07807875);
   DilutionFunc1017->SetSavedPoint(21,0.07792372);
   DilutionFunc1017->SetSavedPoint(22,0.0777657);
   DilutionFunc1017->SetSavedPoint(23,0.0776047);
   DilutionFunc1017->SetSavedPoint(24,0.07744069);
   DilutionFunc1017->SetSavedPoint(25,0.07727368);
   DilutionFunc1017->SetSavedPoint(26,0.07710364);
   DilutionFunc1017->SetSavedPoint(27,0.07693057);
   DilutionFunc1017->SetSavedPoint(28,0.07675446);
   DilutionFunc1017->SetSavedPoint(29,0.0765753);
   DilutionFunc1017->SetSavedPoint(30,0.07639307);
   DilutionFunc1017->SetSavedPoint(31,0.07620777);
   DilutionFunc1017->SetSavedPoint(32,0.07601939);
   DilutionFunc1017->SetSavedPoint(33,0.07582791);
   DilutionFunc1017->SetSavedPoint(34,0.07563333);
   DilutionFunc1017->SetSavedPoint(35,0.07543563);
   DilutionFunc1017->SetSavedPoint(36,0.07523481);
   DilutionFunc1017->SetSavedPoint(37,0.07503086);
   DilutionFunc1017->SetSavedPoint(38,0.07482375);
   DilutionFunc1017->SetSavedPoint(39,0.07461349);
   DilutionFunc1017->SetSavedPoint(40,0.07440007);
   DilutionFunc1017->SetSavedPoint(41,0.07418347);
   DilutionFunc1017->SetSavedPoint(42,0.07396368);
   DilutionFunc1017->SetSavedPoint(43,0.07374069);
   DilutionFunc1017->SetSavedPoint(44,0.07351449);
   DilutionFunc1017->SetSavedPoint(45,0.07328508);
   DilutionFunc1017->SetSavedPoint(46,0.07305243);
   DilutionFunc1017->SetSavedPoint(47,0.07281655);
   DilutionFunc1017->SetSavedPoint(48,0.07257742);
   DilutionFunc1017->SetSavedPoint(49,0.07233502);
   DilutionFunc1017->SetSavedPoint(50,0.07208936);
   DilutionFunc1017->SetSavedPoint(51,0.07184041);
   DilutionFunc1017->SetSavedPoint(52,0.07158818);
   DilutionFunc1017->SetSavedPoint(53,0.07133264);
   DilutionFunc1017->SetSavedPoint(54,0.07107379);
   DilutionFunc1017->SetSavedPoint(55,0.07081162);
   DilutionFunc1017->SetSavedPoint(56,0.07054611);
   DilutionFunc1017->SetSavedPoint(57,0.07027726);
   DilutionFunc1017->SetSavedPoint(58,0.07000506);
   DilutionFunc1017->SetSavedPoint(59,0.06972949);
   DilutionFunc1017->SetSavedPoint(60,0.06945055);
   DilutionFunc1017->SetSavedPoint(61,0.06916822);
   DilutionFunc1017->SetSavedPoint(62,0.0688825);
   DilutionFunc1017->SetSavedPoint(63,0.06859337);
   DilutionFunc1017->SetSavedPoint(64,0.06830083);
   DilutionFunc1017->SetSavedPoint(65,0.06800486);
   DilutionFunc1017->SetSavedPoint(66,0.06770545);
   DilutionFunc1017->SetSavedPoint(67,0.06740259);
   DilutionFunc1017->SetSavedPoint(68,0.06709628);
   DilutionFunc1017->SetSavedPoint(69,0.0667865);
   DilutionFunc1017->SetSavedPoint(70,0.06647324);
   DilutionFunc1017->SetSavedPoint(71,0.06615649);
   DilutionFunc1017->SetSavedPoint(72,0.06583625);
   DilutionFunc1017->SetSavedPoint(73,0.06551249);
   DilutionFunc1017->SetSavedPoint(74,0.06518521);
   DilutionFunc1017->SetSavedPoint(75,0.06485441);
   DilutionFunc1017->SetSavedPoint(76,0.06452006);
   DilutionFunc1017->SetSavedPoint(77,0.06418216);
   DilutionFunc1017->SetSavedPoint(78,0.0638407);
   DilutionFunc1017->SetSavedPoint(79,0.06349566);
   DilutionFunc1017->SetSavedPoint(80,0.06314705);
   DilutionFunc1017->SetSavedPoint(81,0.06279484);
   DilutionFunc1017->SetSavedPoint(82,0.06243903);
   DilutionFunc1017->SetSavedPoint(83,0.0620796);
   DilutionFunc1017->SetSavedPoint(84,0.06171655);
   DilutionFunc1017->SetSavedPoint(85,0.06134987);
   DilutionFunc1017->SetSavedPoint(86,0.06097954);
   DilutionFunc1017->SetSavedPoint(87,0.06060556);
   DilutionFunc1017->SetSavedPoint(88,0.06022791);
   DilutionFunc1017->SetSavedPoint(89,0.05984658);
   DilutionFunc1017->SetSavedPoint(90,0.05946157);
   DilutionFunc1017->SetSavedPoint(91,0.05907286);
   DilutionFunc1017->SetSavedPoint(92,0.05868045);
   DilutionFunc1017->SetSavedPoint(93,0.05828432);
   DilutionFunc1017->SetSavedPoint(94,0.05788446);
   DilutionFunc1017->SetSavedPoint(95,0.05748086);
   DilutionFunc1017->SetSavedPoint(96,0.05707351);
   DilutionFunc1017->SetSavedPoint(97,0.0566624);
   DilutionFunc1017->SetSavedPoint(98,0.05624753);
   DilutionFunc1017->SetSavedPoint(99,0.05582887);
   DilutionFunc1017->SetSavedPoint(100,0.05540642);
   DilutionFunc1017->SetSavedPoint(101,750);
   DilutionFunc1017->SetSavedPoint(102,2750);
   DilutionFunc1017->SetFillColor(19);
   DilutionFunc1017->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1017->SetLineColor(ci);
   DilutionFunc1017->SetLineWidth(3);
   DilutionFunc1017->SetChisquare(6.198762);
   DilutionFunc1017->SetNDF(6);
   DilutionFunc1017->GetXaxis()->SetLabelFont(42);
   DilutionFunc1017->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1017->GetXaxis()->SetTitleFont(42);
   DilutionFunc1017->GetYaxis()->SetLabelFont(42);
   DilutionFunc1017->GetYaxis()->SetTitleFont(42);
   DilutionFunc1017->SetParameter(0,0.08232864);
   DilutionFunc1017->SetParError(0,0.00566841);
   DilutionFunc1017->SetParLimits(0,0,0);
   DilutionFunc1017->SetParameter(1,-0.0001095573);
   DilutionFunc1017->SetParError(1,1.854845e-05);
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
   pt_LaTex = pt->AddText("b [MeV^{-1}]");
   pt->Draw();
   
   pt = new TPaveText(0.4,0.2,0.55,0.45,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("1.03
");
   pt_LaTex = pt->AddText("0.08
#pm0.006
");
   pt_LaTex = pt->AddText("-0.0001
#pm2e-05
");
   pt->Draw();
   S12S18->Modified();
   S12S18->cd();
   S12S18->SetSelected(S12S18);
}
