void RecoVertexFit_S12()
{
//=========Macro generated from canvas: S12/c
//=========  (Tue Feb 22 00:54:07 2022) by ROOT version 6.24/06
   TCanvas *S12 = new TCanvas("S12", "c",0,0,800,600);
   S12->SetHighLightColor(2);
   S12->Range(466.9539,-0.0425,3024.604,0.1825);
   S12->SetFillColor(0);
   S12->SetBorderMode(0);
   S12->SetBorderSize(2);
   S12->SetFrameBorderMode(0);
   S12->SetFrameBorderMode(0);
   
   Double_t S12_trackReco_fx1007[11] = {
   451.7715,
   653.353,
   880.3799,
   1123.143,
   1371.135,
   1620.306,
   1866.82,
   2115,
   2362.657,
   2614.209,
   2787.525};
   Double_t S12_trackReco_fy1007[11] = {
   -0.2277151,
   0.02689536,
   0.07502499,
   0.1267819,
   0.08878071,
   0.1221825,
   0.1059638,
   0.08556504,
   0.04290137,
   0.04351586,
   0.007256174};
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
   0.1143439,
   0.04045042,
   0.02390687,
   0.01911094,
   0.01613918,
   0.01394878,
   0.01307682,
   0.01310778,
   0.01352445,
   0.0130336,
   0.02942254};
   TGraphErrors *gre = new TGraphErrors(11,S12_trackReco_fx1007,S12_trackReco_fy1007,S12_trackReco_fex1007,S12_trackReco_fey1007);
   gre->SetName("S12_trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_trackReco1007 = new TH1F("Graph_S12_trackReco1007","",100,218.1961,3021.101);
   Graph_S12_trackReco1007->SetMinimum(-0.02);
   Graph_S12_trackReco1007->SetMaximum(0.16);
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
   
   
   TF1 *DilutionFunc1008 = new TF1("*DilutionFunc",750,2750,2);
    //The original function : DilutionFunc had originally been created by:
    //TF1 *DilutionFunc = new TF1("DilutionFunc",DilutionFunc,750,2750,2, 1, TF1::EAddToList::kNo);
   DilutionFunc1008->SetRange(750,2750);
   DilutionFunc1008->SetName("DilutionFunc");
   DilutionFunc1008->SetTitle("DilutionFunc");
   DilutionFunc1008->SetSavedPoint(0,0.125687);
   DilutionFunc1008->SetSavedPoint(1,0.1253462);
   DilutionFunc1008->SetSavedPoint(2,0.1249955);
   DilutionFunc1008->SetSavedPoint(3,0.1246347);
   DilutionFunc1008->SetSavedPoint(4,0.1242639);
   DilutionFunc1008->SetSavedPoint(5,0.123883);
   DilutionFunc1008->SetSavedPoint(6,0.1234919);
   DilutionFunc1008->SetSavedPoint(7,0.1230906);
   DilutionFunc1008->SetSavedPoint(8,0.122679);
   DilutionFunc1008->SetSavedPoint(9,0.1222571);
   DilutionFunc1008->SetSavedPoint(10,0.1218248);
   DilutionFunc1008->SetSavedPoint(11,0.1213822);
   DilutionFunc1008->SetSavedPoint(12,0.120929);
   DilutionFunc1008->SetSavedPoint(13,0.1204654);
   DilutionFunc1008->SetSavedPoint(14,0.1199911);
   DilutionFunc1008->SetSavedPoint(15,0.1195063);
   DilutionFunc1008->SetSavedPoint(16,0.1190107);
   DilutionFunc1008->SetSavedPoint(17,0.1185045);
   DilutionFunc1008->SetSavedPoint(18,0.1179874);
   DilutionFunc1008->SetSavedPoint(19,0.1174596);
   DilutionFunc1008->SetSavedPoint(20,0.1169208);
   DilutionFunc1008->SetSavedPoint(21,0.1163712);
   DilutionFunc1008->SetSavedPoint(22,0.1158105);
   DilutionFunc1008->SetSavedPoint(23,0.1152389);
   DilutionFunc1008->SetSavedPoint(24,0.1146561);
   DilutionFunc1008->SetSavedPoint(25,0.1140622);
   DilutionFunc1008->SetSavedPoint(26,0.1134572);
   DilutionFunc1008->SetSavedPoint(27,0.1128409);
   DilutionFunc1008->SetSavedPoint(28,0.1122133);
   DilutionFunc1008->SetSavedPoint(29,0.1115744);
   DilutionFunc1008->SetSavedPoint(30,0.1109241);
   DilutionFunc1008->SetSavedPoint(31,0.1102623);
   DilutionFunc1008->SetSavedPoint(32,0.1095891);
   DilutionFunc1008->SetSavedPoint(33,0.1089044);
   DilutionFunc1008->SetSavedPoint(34,0.108208);
   DilutionFunc1008->SetSavedPoint(35,0.1075);
   DilutionFunc1008->SetSavedPoint(36,0.1067803);
   DilutionFunc1008->SetSavedPoint(37,0.1060489);
   DilutionFunc1008->SetSavedPoint(38,0.1053057);
   DilutionFunc1008->SetSavedPoint(39,0.1045506);
   DilutionFunc1008->SetSavedPoint(40,0.1037837);
   DilutionFunc1008->SetSavedPoint(41,0.1030047);
   DilutionFunc1008->SetSavedPoint(42,0.1022138);
   DilutionFunc1008->SetSavedPoint(43,0.1014109);
   DilutionFunc1008->SetSavedPoint(44,0.1005958);
   DilutionFunc1008->SetSavedPoint(45,0.09976865);
   DilutionFunc1008->SetSavedPoint(46,0.09892926);
   DilutionFunc1008->SetSavedPoint(47,0.09807761);
   DilutionFunc1008->SetSavedPoint(48,0.09721366);
   DilutionFunc1008->SetSavedPoint(49,0.09633735);
   DilutionFunc1008->SetSavedPoint(50,0.09544865);
   DilutionFunc1008->SetSavedPoint(51,0.09454748);
   DilutionFunc1008->SetSavedPoint(52,0.09363382);
   DilutionFunc1008->SetSavedPoint(53,0.09270759);
   DilutionFunc1008->SetSavedPoint(54,0.09176876);
   DilutionFunc1008->SetSavedPoint(55,0.09081727);
   DilutionFunc1008->SetSavedPoint(56,0.08985307);
   DilutionFunc1008->SetSavedPoint(57,0.08887611);
   DilutionFunc1008->SetSavedPoint(58,0.08788634);
   DilutionFunc1008->SetSavedPoint(59,0.08688371);
   DilutionFunc1008->SetSavedPoint(60,0.08586816);
   DilutionFunc1008->SetSavedPoint(61,0.08483965);
   DilutionFunc1008->SetSavedPoint(62,0.08379813);
   DilutionFunc1008->SetSavedPoint(63,0.08274354);
   DilutionFunc1008->SetSavedPoint(64,0.08167583);
   DilutionFunc1008->SetSavedPoint(65,0.08059496);
   DilutionFunc1008->SetSavedPoint(66,0.07950087);
   DilutionFunc1008->SetSavedPoint(67,0.0783935);
   DilutionFunc1008->SetSavedPoint(68,0.07727282);
   DilutionFunc1008->SetSavedPoint(69,0.07613877);
   DilutionFunc1008->SetSavedPoint(70,0.0749913);
   DilutionFunc1008->SetSavedPoint(71,0.07383035);
   DilutionFunc1008->SetSavedPoint(72,0.07265588);
   DilutionFunc1008->SetSavedPoint(73,0.07146783);
   DilutionFunc1008->SetSavedPoint(74,0.07026616);
   DilutionFunc1008->SetSavedPoint(75,0.06905081);
   DilutionFunc1008->SetSavedPoint(76,0.06782174);
   DilutionFunc1008->SetSavedPoint(77,0.06657888);
   DilutionFunc1008->SetSavedPoint(78,0.0653222);
   DilutionFunc1008->SetSavedPoint(79,0.06405164);
   DilutionFunc1008->SetSavedPoint(80,0.06276714);
   DilutionFunc1008->SetSavedPoint(81,0.06146867);
   DilutionFunc1008->SetSavedPoint(82,0.06015616);
   DilutionFunc1008->SetSavedPoint(83,0.05882957);
   DilutionFunc1008->SetSavedPoint(84,0.05748884);
   DilutionFunc1008->SetSavedPoint(85,0.05613393);
   DilutionFunc1008->SetSavedPoint(86,0.05476478);
   DilutionFunc1008->SetSavedPoint(87,0.05338134);
   DilutionFunc1008->SetSavedPoint(88,0.05198357);
   DilutionFunc1008->SetSavedPoint(89,0.0505714);
   DilutionFunc1008->SetSavedPoint(90,0.0491448);
   DilutionFunc1008->SetSavedPoint(91,0.04770371);
   DilutionFunc1008->SetSavedPoint(92,0.04624807);
   DilutionFunc1008->SetSavedPoint(93,0.04477784);
   DilutionFunc1008->SetSavedPoint(94,0.04329297);
   DilutionFunc1008->SetSavedPoint(95,0.0417934);
   DilutionFunc1008->SetSavedPoint(96,0.04027909);
   DilutionFunc1008->SetSavedPoint(97,0.03874998);
   DilutionFunc1008->SetSavedPoint(98,0.03720602);
   DilutionFunc1008->SetSavedPoint(99,0.03564717);
   DilutionFunc1008->SetSavedPoint(100,0.03407336);
   DilutionFunc1008->SetSavedPoint(101,750);
   DilutionFunc1008->SetSavedPoint(102,2750);
   DilutionFunc1008->SetFillColor(19);
   DilutionFunc1008->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1008->SetLineColor(ci);
   DilutionFunc1008->SetLineWidth(3);
   DilutionFunc1008->SetChisquare(12.28219);
   DilutionFunc1008->SetNDF(6);
   DilutionFunc1008->GetXaxis()->SetLabelFont(42);
   DilutionFunc1008->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1008->GetXaxis()->SetTitleFont(42);
   DilutionFunc1008->GetYaxis()->SetLabelFont(42);
   DilutionFunc1008->GetYaxis()->SetTitleFont(42);
   DilutionFunc1008->SetParameter(0,0.1317599);
   DilutionFunc1008->SetParError(0,0.01133831);
   DilutionFunc1008->SetParLimits(0,0,0);
   DilutionFunc1008->SetParameter(1,-0.0001590619);
   DilutionFunc1008->SetParError(1,1.007287e-05);
   DilutionFunc1008->SetParLimits(1,0,0);
   DilutionFunc1008->SetParent(gre);
   gre->GetListOfFunctions()->Add(DilutionFunc1008);
   gre->Draw("ap");
   
   TF1 *DilutionFunc1009 = new TF1("*DilutionFunc",750,2750,2);
    //The original function : DilutionFunc had originally been created by:
    //TF1 *DilutionFunc = new TF1("DilutionFunc",DilutionFunc,750,2750,2, 1, TF1::EAddToList::kNo);
   DilutionFunc1009->SetRange(750,2750);
   DilutionFunc1009->SetName("DilutionFunc");
   DilutionFunc1009->SetTitle("DilutionFunc");
   DilutionFunc1009->SetSavedPoint(0,0.125687);
   DilutionFunc1009->SetSavedPoint(1,0.1253462);
   DilutionFunc1009->SetSavedPoint(2,0.1249955);
   DilutionFunc1009->SetSavedPoint(3,0.1246347);
   DilutionFunc1009->SetSavedPoint(4,0.1242639);
   DilutionFunc1009->SetSavedPoint(5,0.123883);
   DilutionFunc1009->SetSavedPoint(6,0.1234919);
   DilutionFunc1009->SetSavedPoint(7,0.1230906);
   DilutionFunc1009->SetSavedPoint(8,0.122679);
   DilutionFunc1009->SetSavedPoint(9,0.1222571);
   DilutionFunc1009->SetSavedPoint(10,0.1218248);
   DilutionFunc1009->SetSavedPoint(11,0.1213822);
   DilutionFunc1009->SetSavedPoint(12,0.120929);
   DilutionFunc1009->SetSavedPoint(13,0.1204654);
   DilutionFunc1009->SetSavedPoint(14,0.1199911);
   DilutionFunc1009->SetSavedPoint(15,0.1195063);
   DilutionFunc1009->SetSavedPoint(16,0.1190107);
   DilutionFunc1009->SetSavedPoint(17,0.1185045);
   DilutionFunc1009->SetSavedPoint(18,0.1179874);
   DilutionFunc1009->SetSavedPoint(19,0.1174596);
   DilutionFunc1009->SetSavedPoint(20,0.1169208);
   DilutionFunc1009->SetSavedPoint(21,0.1163712);
   DilutionFunc1009->SetSavedPoint(22,0.1158105);
   DilutionFunc1009->SetSavedPoint(23,0.1152389);
   DilutionFunc1009->SetSavedPoint(24,0.1146561);
   DilutionFunc1009->SetSavedPoint(25,0.1140622);
   DilutionFunc1009->SetSavedPoint(26,0.1134572);
   DilutionFunc1009->SetSavedPoint(27,0.1128409);
   DilutionFunc1009->SetSavedPoint(28,0.1122133);
   DilutionFunc1009->SetSavedPoint(29,0.1115744);
   DilutionFunc1009->SetSavedPoint(30,0.1109241);
   DilutionFunc1009->SetSavedPoint(31,0.1102623);
   DilutionFunc1009->SetSavedPoint(32,0.1095891);
   DilutionFunc1009->SetSavedPoint(33,0.1089044);
   DilutionFunc1009->SetSavedPoint(34,0.108208);
   DilutionFunc1009->SetSavedPoint(35,0.1075);
   DilutionFunc1009->SetSavedPoint(36,0.1067803);
   DilutionFunc1009->SetSavedPoint(37,0.1060489);
   DilutionFunc1009->SetSavedPoint(38,0.1053057);
   DilutionFunc1009->SetSavedPoint(39,0.1045506);
   DilutionFunc1009->SetSavedPoint(40,0.1037837);
   DilutionFunc1009->SetSavedPoint(41,0.1030047);
   DilutionFunc1009->SetSavedPoint(42,0.1022138);
   DilutionFunc1009->SetSavedPoint(43,0.1014109);
   DilutionFunc1009->SetSavedPoint(44,0.1005958);
   DilutionFunc1009->SetSavedPoint(45,0.09976865);
   DilutionFunc1009->SetSavedPoint(46,0.09892926);
   DilutionFunc1009->SetSavedPoint(47,0.09807761);
   DilutionFunc1009->SetSavedPoint(48,0.09721366);
   DilutionFunc1009->SetSavedPoint(49,0.09633735);
   DilutionFunc1009->SetSavedPoint(50,0.09544865);
   DilutionFunc1009->SetSavedPoint(51,0.09454748);
   DilutionFunc1009->SetSavedPoint(52,0.09363382);
   DilutionFunc1009->SetSavedPoint(53,0.09270759);
   DilutionFunc1009->SetSavedPoint(54,0.09176876);
   DilutionFunc1009->SetSavedPoint(55,0.09081727);
   DilutionFunc1009->SetSavedPoint(56,0.08985307);
   DilutionFunc1009->SetSavedPoint(57,0.08887611);
   DilutionFunc1009->SetSavedPoint(58,0.08788634);
   DilutionFunc1009->SetSavedPoint(59,0.08688371);
   DilutionFunc1009->SetSavedPoint(60,0.08586816);
   DilutionFunc1009->SetSavedPoint(61,0.08483965);
   DilutionFunc1009->SetSavedPoint(62,0.08379813);
   DilutionFunc1009->SetSavedPoint(63,0.08274354);
   DilutionFunc1009->SetSavedPoint(64,0.08167583);
   DilutionFunc1009->SetSavedPoint(65,0.08059496);
   DilutionFunc1009->SetSavedPoint(66,0.07950087);
   DilutionFunc1009->SetSavedPoint(67,0.0783935);
   DilutionFunc1009->SetSavedPoint(68,0.07727282);
   DilutionFunc1009->SetSavedPoint(69,0.07613877);
   DilutionFunc1009->SetSavedPoint(70,0.0749913);
   DilutionFunc1009->SetSavedPoint(71,0.07383035);
   DilutionFunc1009->SetSavedPoint(72,0.07265588);
   DilutionFunc1009->SetSavedPoint(73,0.07146783);
   DilutionFunc1009->SetSavedPoint(74,0.07026616);
   DilutionFunc1009->SetSavedPoint(75,0.06905081);
   DilutionFunc1009->SetSavedPoint(76,0.06782174);
   DilutionFunc1009->SetSavedPoint(77,0.06657888);
   DilutionFunc1009->SetSavedPoint(78,0.0653222);
   DilutionFunc1009->SetSavedPoint(79,0.06405164);
   DilutionFunc1009->SetSavedPoint(80,0.06276714);
   DilutionFunc1009->SetSavedPoint(81,0.06146867);
   DilutionFunc1009->SetSavedPoint(82,0.06015616);
   DilutionFunc1009->SetSavedPoint(83,0.05882957);
   DilutionFunc1009->SetSavedPoint(84,0.05748884);
   DilutionFunc1009->SetSavedPoint(85,0.05613393);
   DilutionFunc1009->SetSavedPoint(86,0.05476478);
   DilutionFunc1009->SetSavedPoint(87,0.05338134);
   DilutionFunc1009->SetSavedPoint(88,0.05198357);
   DilutionFunc1009->SetSavedPoint(89,0.0505714);
   DilutionFunc1009->SetSavedPoint(90,0.0491448);
   DilutionFunc1009->SetSavedPoint(91,0.04770371);
   DilutionFunc1009->SetSavedPoint(92,0.04624807);
   DilutionFunc1009->SetSavedPoint(93,0.04477784);
   DilutionFunc1009->SetSavedPoint(94,0.04329297);
   DilutionFunc1009->SetSavedPoint(95,0.0417934);
   DilutionFunc1009->SetSavedPoint(96,0.04027909);
   DilutionFunc1009->SetSavedPoint(97,0.03874998);
   DilutionFunc1009->SetSavedPoint(98,0.03720602);
   DilutionFunc1009->SetSavedPoint(99,0.03564717);
   DilutionFunc1009->SetSavedPoint(100,0.03407336);
   DilutionFunc1009->SetSavedPoint(101,750);
   DilutionFunc1009->SetSavedPoint(102,2750);
   DilutionFunc1009->SetFillColor(19);
   DilutionFunc1009->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1009->SetLineColor(ci);
   DilutionFunc1009->SetLineWidth(3);
   DilutionFunc1009->SetChisquare(12.28219);
   DilutionFunc1009->SetNDF(6);
   DilutionFunc1009->GetXaxis()->SetLabelFont(42);
   DilutionFunc1009->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1009->GetXaxis()->SetTitleFont(42);
   DilutionFunc1009->GetYaxis()->SetLabelFont(42);
   DilutionFunc1009->GetYaxis()->SetTitleFont(42);
   DilutionFunc1009->SetParameter(0,0.1317599);
   DilutionFunc1009->SetParError(0,0.01133831);
   DilutionFunc1009->SetParLimits(0,0,0);
   DilutionFunc1009->SetParameter(1,-0.0001590619);
   DilutionFunc1009->SetParError(1,1.007287e-05);
   DilutionFunc1009->SetParLimits(1,0,0);
   DilutionFunc1009->Draw("SAME");
   
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
   pt_LaTex = pt->AddText("2.05
");
   pt_LaTex = pt->AddText("0.1
#pm0.01
");
   pt_LaTex = pt->AddText("-0.0002
#pm1e-05
");
   pt->Draw();
   S12->Modified();
   S12->cd();
   S12->SetSelected(S12);
}
