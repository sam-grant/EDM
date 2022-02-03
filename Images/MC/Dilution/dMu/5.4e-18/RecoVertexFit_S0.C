void RecoVertexFit_S0()
{
//=========Macro generated from canvas: S0/c
//=========  (Thu Feb  3 14:38:46 2022) by ROOT version 6.24/06
   TCanvas *S0 = new TCanvas("S0", "c",0,0,800,600);
   S0->SetHighLightColor(2);
   S0->Range(466.8485,-0.015,3026.846,0.135);
   S0->SetFillColor(0);
   S0->SetBorderMode(0);
   S0->SetBorderSize(2);
   S0->SetFrameBorderMode(0);
   S0->SetFrameBorderMode(0);
   
   Double_t S0_trackReco_fx1003[11] = {
   451.6521,
   653.2702,
   879.9265,
   1123.052,
   1371.41,
   1620.742,
   1868,
   2116.568,
   2363.186,
   2615.293,
   2789.549};
   Double_t S0_trackReco_fy1003[11] = {
   0.08092763,
   0.07654801,
   0.07615896,
   0.0745966,
   0.1076194,
   0.09784605,
   0.05880395,
   0.07024622,
   0.03982395,
   0.02666566,
   -0.03473756};
   Double_t S0_trackReco_fex1003[11] = {
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
   Double_t S0_trackReco_fey1003[11] = {
   0.101357,
   0.03383315,
   0.01959323,
   0.01609559,
   0.01469013,
   0.01395766,
   0.0137491,
   0.01412932,
   0.01463365,
   0.01453881,
   0.03109489};
   TGraphErrors *gre = new TGraphErrors(11,S0_trackReco_fx1003,S0_trackReco_fy1003,S0_trackReco_fex1003,S0_trackReco_fey1003);
   gre->SetName("S0_trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_trackReco1003 = new TH1F("Graph_S0_trackReco1003","",100,217.8624,3023.339);
   Graph_S0_trackReco1003->SetMinimum(0);
   Graph_S0_trackReco1003->SetMaximum(0.12);
   Graph_S0_trackReco1003->SetDirectory(0);
   Graph_S0_trackReco1003->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_trackReco1003->SetLineColor(ci);
   Graph_S0_trackReco1003->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0_trackReco1003->GetXaxis()->SetRange(19,91);
   Graph_S0_trackReco1003->GetXaxis()->CenterTitle(true);
   Graph_S0_trackReco1003->GetXaxis()->SetLabelFont(42);
   Graph_S0_trackReco1003->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_trackReco1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_trackReco1003->GetXaxis()->SetTitleFont(42);
   Graph_S0_trackReco1003->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S0_trackReco1003->GetYaxis()->CenterTitle(true);
   Graph_S0_trackReco1003->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_trackReco1003->GetYaxis()->SetLabelFont(42);
   Graph_S0_trackReco1003->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_trackReco1003->GetYaxis()->SetTitleOffset(1.25);
   Graph_S0_trackReco1003->GetYaxis()->SetTitleFont(42);
   Graph_S0_trackReco1003->GetZaxis()->SetLabelFont(42);
   Graph_S0_trackReco1003->GetZaxis()->SetTitleOffset(1);
   Graph_S0_trackReco1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_trackReco1003);
   
   
   TF1 *DilutionFunc1004 = new TF1("*DilutionFunc",750,2750,2);
    //The original function : DilutionFunc had originally been created by:
    //TF1 *DilutionFunc = new TF1("DilutionFunc",DilutionFunc,750,2750,2, 1, TF1::EAddToList::kNo);
   DilutionFunc1004->SetRange(750,2750);
   DilutionFunc1004->SetName("DilutionFunc");
   DilutionFunc1004->SetTitle("DilutionFunc");
   DilutionFunc1004->SetSavedPoint(0,0.1007004);
   DilutionFunc1004->SetSavedPoint(1,0.1004096);
   DilutionFunc1004->SetSavedPoint(2,0.1001103);
   DilutionFunc1004->SetSavedPoint(3,0.09980238);
   DilutionFunc1004->SetSavedPoint(4,0.09948587);
   DilutionFunc1004->SetSavedPoint(5,0.09916071);
   DilutionFunc1004->SetSavedPoint(6,0.09882684);
   DilutionFunc1004->SetSavedPoint(7,0.09848423);
   DilutionFunc1004->SetSavedPoint(8,0.09813284);
   DilutionFunc1004->SetSavedPoint(9,0.0977726);
   DilutionFunc1004->SetSavedPoint(10,0.09740349);
   DilutionFunc1004->SetSavedPoint(11,0.09702546);
   DilutionFunc1004->SetSavedPoint(12,0.09663846);
   DilutionFunc1004->SetSavedPoint(13,0.09624245);
   DilutionFunc1004->SetSavedPoint(14,0.09583738);
   DilutionFunc1004->SetSavedPoint(15,0.09542321);
   DilutionFunc1004->SetSavedPoint(16,0.0949999);
   DilutionFunc1004->SetSavedPoint(17,0.09456739);
   DilutionFunc1004->SetSavedPoint(18,0.09412565);
   DilutionFunc1004->SetSavedPoint(19,0.09367464);
   DilutionFunc1004->SetSavedPoint(20,0.09321429);
   DilutionFunc1004->SetSavedPoint(21,0.09274458);
   DilutionFunc1004->SetSavedPoint(22,0.09226546);
   DilutionFunc1004->SetSavedPoint(23,0.09177688);
   DilutionFunc1004->SetSavedPoint(24,0.0912788);
   DilutionFunc1004->SetSavedPoint(25,0.09077117);
   DilutionFunc1004->SetSavedPoint(26,0.09025395);
   DilutionFunc1004->SetSavedPoint(27,0.08972709);
   DilutionFunc1004->SetSavedPoint(28,0.08919056);
   DilutionFunc1004->SetSavedPoint(29,0.08864429);
   DilutionFunc1004->SetSavedPoint(30,0.08808826);
   DilutionFunc1004->SetSavedPoint(31,0.08752242);
   DilutionFunc1004->SetSavedPoint(32,0.08694672);
   DilutionFunc1004->SetSavedPoint(33,0.08636111);
   DilutionFunc1004->SetSavedPoint(34,0.08576556);
   DilutionFunc1004->SetSavedPoint(35,0.08516001);
   DilutionFunc1004->SetSavedPoint(36,0.08454443);
   DilutionFunc1004->SetSavedPoint(37,0.08391877);
   DilutionFunc1004->SetSavedPoint(38,0.08328298);
   DilutionFunc1004->SetSavedPoint(39,0.08263702);
   DilutionFunc1004->SetSavedPoint(40,0.08198085);
   DilutionFunc1004->SetSavedPoint(41,0.08131441);
   DilutionFunc1004->SetSavedPoint(42,0.08063768);
   DilutionFunc1004->SetSavedPoint(43,0.07995059);
   DilutionFunc1004->SetSavedPoint(44,0.07925311);
   DilutionFunc1004->SetSavedPoint(45,0.0785452);
   DilutionFunc1004->SetSavedPoint(46,0.0778268);
   DilutionFunc1004->SetSavedPoint(47,0.07709787);
   DilutionFunc1004->SetSavedPoint(48,0.07635837);
   DilutionFunc1004->SetSavedPoint(49,0.07560826);
   DilutionFunc1004->SetSavedPoint(50,0.07484749);
   DilutionFunc1004->SetSavedPoint(51,0.07407601);
   DilutionFunc1004->SetSavedPoint(52,0.07329378);
   DilutionFunc1004->SetSavedPoint(53,0.07250076);
   DilutionFunc1004->SetSavedPoint(54,0.0716969);
   DilutionFunc1004->SetSavedPoint(55,0.07088215);
   DilutionFunc1004->SetSavedPoint(56,0.07005648);
   DilutionFunc1004->SetSavedPoint(57,0.06921984);
   DilutionFunc1004->SetSavedPoint(58,0.06837218);
   DilutionFunc1004->SetSavedPoint(59,0.06751346);
   DilutionFunc1004->SetSavedPoint(60,0.06664363);
   DilutionFunc1004->SetSavedPoint(61,0.06576265);
   DilutionFunc1004->SetSavedPoint(62,0.06487047);
   DilutionFunc1004->SetSavedPoint(63,0.06396706);
   DilutionFunc1004->SetSavedPoint(64,0.06305236);
   DilutionFunc1004->SetSavedPoint(65,0.06212633);
   DilutionFunc1004->SetSavedPoint(66,0.06118893);
   DilutionFunc1004->SetSavedPoint(67,0.06024012);
   DilutionFunc1004->SetSavedPoint(68,0.05927984);
   DilutionFunc1004->SetSavedPoint(69,0.05830805);
   DilutionFunc1004->SetSavedPoint(70,0.05732471);
   DilutionFunc1004->SetSavedPoint(71,0.05632977);
   DilutionFunc1004->SetSavedPoint(72,0.0553232);
   DilutionFunc1004->SetSavedPoint(73,0.05430493);
   DilutionFunc1004->SetSavedPoint(74,0.05327494);
   DilutionFunc1004->SetSavedPoint(75,0.05223318);
   DilutionFunc1004->SetSavedPoint(76,0.05117959);
   DilutionFunc1004->SetSavedPoint(77,0.05011415);
   DilutionFunc1004->SetSavedPoint(78,0.04903679);
   DilutionFunc1004->SetSavedPoint(79,0.04794748);
   DilutionFunc1004->SetSavedPoint(80,0.04684617);
   DilutionFunc1004->SetSavedPoint(81,0.04573283);
   DilutionFunc1004->SetSavedPoint(82,0.04460739);
   DilutionFunc1004->SetSavedPoint(83,0.04346983);
   DilutionFunc1004->SetSavedPoint(84,0.04232009);
   DilutionFunc1004->SetSavedPoint(85,0.04115813);
   DilutionFunc1004->SetSavedPoint(86,0.0399839);
   DilutionFunc1004->SetSavedPoint(87,0.03879737);
   DilutionFunc1004->SetSavedPoint(88,0.03759848);
   DilutionFunc1004->SetSavedPoint(89,0.0363872);
   DilutionFunc1004->SetSavedPoint(90,0.03516347);
   DilutionFunc1004->SetSavedPoint(91,0.03392725);
   DilutionFunc1004->SetSavedPoint(92,0.03267851);
   DilutionFunc1004->SetSavedPoint(93,0.03141718);
   DilutionFunc1004->SetSavedPoint(94,0.03014324);
   DilutionFunc1004->SetSavedPoint(95,0.02885663);
   DilutionFunc1004->SetSavedPoint(96,0.02755731);
   DilutionFunc1004->SetSavedPoint(97,0.02624523);
   DilutionFunc1004->SetSavedPoint(98,0.02492036);
   DilutionFunc1004->SetSavedPoint(99,0.02358264);
   DilutionFunc1004->SetSavedPoint(100,0.02223203);
   DilutionFunc1004->SetSavedPoint(101,750);
   DilutionFunc1004->SetSavedPoint(102,2750);
   DilutionFunc1004->SetFillColor(19);
   DilutionFunc1004->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1004->SetLineColor(ci);
   DilutionFunc1004->SetLineWidth(3);
   DilutionFunc1004->SetChisquare(7.933628);
   DilutionFunc1004->SetNDF(6);
   DilutionFunc1004->GetXaxis()->SetLabelFont(42);
   DilutionFunc1004->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1004->GetXaxis()->SetTitleFont(42);
   DilutionFunc1004->GetYaxis()->SetLabelFont(42);
   DilutionFunc1004->GetYaxis()->SetTitleFont(42);
   DilutionFunc1004->SetParameter(0,0.1058777);
   DilutionFunc1004->SetParError(0,0.01048923);
   DilutionFunc1004->SetParLimits(0,0,0);
   DilutionFunc1004->SetParameter(1,-0.0001636616);
   DilutionFunc1004->SetParError(1,1.228646e-05);
   DilutionFunc1004->SetParLimits(1,0,0);
   DilutionFunc1004->SetParent(gre);
   gre->GetListOfFunctions()->Add(DilutionFunc1004);
   gre->Draw("ap");
   
   TF1 *DilutionFunc1005 = new TF1("*DilutionFunc",750,2750,2);
    //The original function : DilutionFunc had originally been created by:
    //TF1 *DilutionFunc = new TF1("DilutionFunc",DilutionFunc,750,2750,2, 1, TF1::EAddToList::kNo);
   DilutionFunc1005->SetRange(750,2750);
   DilutionFunc1005->SetName("DilutionFunc");
   DilutionFunc1005->SetTitle("DilutionFunc");
   DilutionFunc1005->SetSavedPoint(0,0.1007004);
   DilutionFunc1005->SetSavedPoint(1,0.1004096);
   DilutionFunc1005->SetSavedPoint(2,0.1001103);
   DilutionFunc1005->SetSavedPoint(3,0.09980238);
   DilutionFunc1005->SetSavedPoint(4,0.09948587);
   DilutionFunc1005->SetSavedPoint(5,0.09916071);
   DilutionFunc1005->SetSavedPoint(6,0.09882684);
   DilutionFunc1005->SetSavedPoint(7,0.09848423);
   DilutionFunc1005->SetSavedPoint(8,0.09813284);
   DilutionFunc1005->SetSavedPoint(9,0.0977726);
   DilutionFunc1005->SetSavedPoint(10,0.09740349);
   DilutionFunc1005->SetSavedPoint(11,0.09702546);
   DilutionFunc1005->SetSavedPoint(12,0.09663846);
   DilutionFunc1005->SetSavedPoint(13,0.09624245);
   DilutionFunc1005->SetSavedPoint(14,0.09583738);
   DilutionFunc1005->SetSavedPoint(15,0.09542321);
   DilutionFunc1005->SetSavedPoint(16,0.0949999);
   DilutionFunc1005->SetSavedPoint(17,0.09456739);
   DilutionFunc1005->SetSavedPoint(18,0.09412565);
   DilutionFunc1005->SetSavedPoint(19,0.09367464);
   DilutionFunc1005->SetSavedPoint(20,0.09321429);
   DilutionFunc1005->SetSavedPoint(21,0.09274458);
   DilutionFunc1005->SetSavedPoint(22,0.09226546);
   DilutionFunc1005->SetSavedPoint(23,0.09177688);
   DilutionFunc1005->SetSavedPoint(24,0.0912788);
   DilutionFunc1005->SetSavedPoint(25,0.09077117);
   DilutionFunc1005->SetSavedPoint(26,0.09025395);
   DilutionFunc1005->SetSavedPoint(27,0.08972709);
   DilutionFunc1005->SetSavedPoint(28,0.08919056);
   DilutionFunc1005->SetSavedPoint(29,0.08864429);
   DilutionFunc1005->SetSavedPoint(30,0.08808826);
   DilutionFunc1005->SetSavedPoint(31,0.08752242);
   DilutionFunc1005->SetSavedPoint(32,0.08694672);
   DilutionFunc1005->SetSavedPoint(33,0.08636111);
   DilutionFunc1005->SetSavedPoint(34,0.08576556);
   DilutionFunc1005->SetSavedPoint(35,0.08516001);
   DilutionFunc1005->SetSavedPoint(36,0.08454443);
   DilutionFunc1005->SetSavedPoint(37,0.08391877);
   DilutionFunc1005->SetSavedPoint(38,0.08328298);
   DilutionFunc1005->SetSavedPoint(39,0.08263702);
   DilutionFunc1005->SetSavedPoint(40,0.08198085);
   DilutionFunc1005->SetSavedPoint(41,0.08131441);
   DilutionFunc1005->SetSavedPoint(42,0.08063768);
   DilutionFunc1005->SetSavedPoint(43,0.07995059);
   DilutionFunc1005->SetSavedPoint(44,0.07925311);
   DilutionFunc1005->SetSavedPoint(45,0.0785452);
   DilutionFunc1005->SetSavedPoint(46,0.0778268);
   DilutionFunc1005->SetSavedPoint(47,0.07709787);
   DilutionFunc1005->SetSavedPoint(48,0.07635837);
   DilutionFunc1005->SetSavedPoint(49,0.07560826);
   DilutionFunc1005->SetSavedPoint(50,0.07484749);
   DilutionFunc1005->SetSavedPoint(51,0.07407601);
   DilutionFunc1005->SetSavedPoint(52,0.07329378);
   DilutionFunc1005->SetSavedPoint(53,0.07250076);
   DilutionFunc1005->SetSavedPoint(54,0.0716969);
   DilutionFunc1005->SetSavedPoint(55,0.07088215);
   DilutionFunc1005->SetSavedPoint(56,0.07005648);
   DilutionFunc1005->SetSavedPoint(57,0.06921984);
   DilutionFunc1005->SetSavedPoint(58,0.06837218);
   DilutionFunc1005->SetSavedPoint(59,0.06751346);
   DilutionFunc1005->SetSavedPoint(60,0.06664363);
   DilutionFunc1005->SetSavedPoint(61,0.06576265);
   DilutionFunc1005->SetSavedPoint(62,0.06487047);
   DilutionFunc1005->SetSavedPoint(63,0.06396706);
   DilutionFunc1005->SetSavedPoint(64,0.06305236);
   DilutionFunc1005->SetSavedPoint(65,0.06212633);
   DilutionFunc1005->SetSavedPoint(66,0.06118893);
   DilutionFunc1005->SetSavedPoint(67,0.06024012);
   DilutionFunc1005->SetSavedPoint(68,0.05927984);
   DilutionFunc1005->SetSavedPoint(69,0.05830805);
   DilutionFunc1005->SetSavedPoint(70,0.05732471);
   DilutionFunc1005->SetSavedPoint(71,0.05632977);
   DilutionFunc1005->SetSavedPoint(72,0.0553232);
   DilutionFunc1005->SetSavedPoint(73,0.05430493);
   DilutionFunc1005->SetSavedPoint(74,0.05327494);
   DilutionFunc1005->SetSavedPoint(75,0.05223318);
   DilutionFunc1005->SetSavedPoint(76,0.05117959);
   DilutionFunc1005->SetSavedPoint(77,0.05011415);
   DilutionFunc1005->SetSavedPoint(78,0.04903679);
   DilutionFunc1005->SetSavedPoint(79,0.04794748);
   DilutionFunc1005->SetSavedPoint(80,0.04684617);
   DilutionFunc1005->SetSavedPoint(81,0.04573283);
   DilutionFunc1005->SetSavedPoint(82,0.04460739);
   DilutionFunc1005->SetSavedPoint(83,0.04346983);
   DilutionFunc1005->SetSavedPoint(84,0.04232009);
   DilutionFunc1005->SetSavedPoint(85,0.04115813);
   DilutionFunc1005->SetSavedPoint(86,0.0399839);
   DilutionFunc1005->SetSavedPoint(87,0.03879737);
   DilutionFunc1005->SetSavedPoint(88,0.03759848);
   DilutionFunc1005->SetSavedPoint(89,0.0363872);
   DilutionFunc1005->SetSavedPoint(90,0.03516347);
   DilutionFunc1005->SetSavedPoint(91,0.03392725);
   DilutionFunc1005->SetSavedPoint(92,0.03267851);
   DilutionFunc1005->SetSavedPoint(93,0.03141718);
   DilutionFunc1005->SetSavedPoint(94,0.03014324);
   DilutionFunc1005->SetSavedPoint(95,0.02885663);
   DilutionFunc1005->SetSavedPoint(96,0.02755731);
   DilutionFunc1005->SetSavedPoint(97,0.02624523);
   DilutionFunc1005->SetSavedPoint(98,0.02492036);
   DilutionFunc1005->SetSavedPoint(99,0.02358264);
   DilutionFunc1005->SetSavedPoint(100,0.02223203);
   DilutionFunc1005->SetSavedPoint(101,750);
   DilutionFunc1005->SetSavedPoint(102,2750);
   DilutionFunc1005->SetFillColor(19);
   DilutionFunc1005->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1005->SetLineColor(ci);
   DilutionFunc1005->SetLineWidth(3);
   DilutionFunc1005->SetChisquare(7.933628);
   DilutionFunc1005->SetNDF(6);
   DilutionFunc1005->GetXaxis()->SetLabelFont(42);
   DilutionFunc1005->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1005->GetXaxis()->SetTitleFont(42);
   DilutionFunc1005->GetYaxis()->SetLabelFont(42);
   DilutionFunc1005->GetYaxis()->SetTitleFont(42);
   DilutionFunc1005->SetParameter(0,0.1058777);
   DilutionFunc1005->SetParError(0,0.01048923);
   DilutionFunc1005->SetParLimits(0,0,0);
   DilutionFunc1005->SetParameter(1,-0.0001636616);
   DilutionFunc1005->SetParError(1,1.228646e-05);
   DilutionFunc1005->SetParLimits(1,0,0);
   DilutionFunc1005->Draw("SAME");
   
   TLegend *leg = new TLegend(0.125,0.79,0.875,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_trackReco","Sim: reco vertices","lpf");
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
   pt_LaTex = pt->AddText("1.32
");
   pt_LaTex = pt->AddText("0.1
#pm0.01
");
   pt_LaTex = pt->AddText("-0.0002
#pm1e-05
");
   pt->Draw();
   S0->Modified();
   S0->cd();
   S0->SetSelected(S0);
}
