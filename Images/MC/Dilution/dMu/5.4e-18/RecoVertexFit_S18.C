void RecoVertexFit_S18()
{
//=========Macro generated from canvas: S18/c
//=========  (Thu Feb  3 13:23:10 2022) by ROOT version 6.24/06
   TCanvas *S18 = new TCanvas("S18", "c",0,0,800,600);
   S18->SetHighLightColor(2);
   S18->Range(467.2406,-0.015,3024.432,0.135);
   S18->SetFillColor(0);
   S18->SetBorderMode(0);
   S18->SetBorderSize(2);
   S18->SetFrameBorderMode(0);
   S18->SetFrameBorderMode(0);
   
   Double_t S18_trackReco_fx1011[11] = {
   452.0609,
   653.2722,
   880.5507,
   1123.017,
   1370.779,
   1619.705,
   1866.411,
   2115.026,
   2363.263,
   2612.185,
   2787.396};
   Double_t S18_trackReco_fy1011[11] = {
   -0.1213893,
   0.07899585,
   0.05626916,
   0.04686812,
   0.0659471,
   0.07695589,
   0.06322005,
   0.03376479,
   0.04718762,
   0.08779949,
   0.0236957};
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
   0.08569055,
   0.02872775,
   0.01638732,
   0.01345667,
   0.01241907,
   0.01186883,
   0.01205626,
   0.01276151,
   0.01386292,
   0.0136014,
   0.03243134};
   TGraphErrors *gre = new TGraphErrors(11,S18_trackReco_fx1011,S18_trackReco_fy1011,S18_trackReco_fex1011,S18_trackReco_fey1011);
   gre->SetName("S18_trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_trackReco1011 = new TH1F("Graph_S18_trackReco1011","",100,218.5275,3020.929);
   Graph_S18_trackReco1011->SetMinimum(0);
   Graph_S18_trackReco1011->SetMaximum(0.12);
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
   
   
   TF1 *ParabolaFunc1012 = new TF1("*ParabolaFunc",750,2750,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2750,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1012->SetRange(750,2750);
   ParabolaFunc1012->SetName("ParabolaFunc");
   ParabolaFunc1012->SetTitle("ParabolaFunc");
   ParabolaFunc1012->SetSavedPoint(0,0.06182485);
   ParabolaFunc1012->SetSavedPoint(1,0.06159291);
   ParabolaFunc1012->SetSavedPoint(2,0.06136737);
   ParabolaFunc1012->SetSavedPoint(3,0.06114823);
   ParabolaFunc1012->SetSavedPoint(4,0.06093549);
   ParabolaFunc1012->SetSavedPoint(5,0.06072915);
   ParabolaFunc1012->SetSavedPoint(6,0.06052922);
   ParabolaFunc1012->SetSavedPoint(7,0.06033568);
   ParabolaFunc1012->SetSavedPoint(8,0.06014855);
   ParabolaFunc1012->SetSavedPoint(9,0.05996782);
   ParabolaFunc1012->SetSavedPoint(10,0.05979349);
   ParabolaFunc1012->SetSavedPoint(11,0.05962556);
   ParabolaFunc1012->SetSavedPoint(12,0.05946403);
   ParabolaFunc1012->SetSavedPoint(13,0.05930891);
   ParabolaFunc1012->SetSavedPoint(14,0.05916018);
   ParabolaFunc1012->SetSavedPoint(15,0.05901786);
   ParabolaFunc1012->SetSavedPoint(16,0.05888194);
   ParabolaFunc1012->SetSavedPoint(17,0.05875242);
   ParabolaFunc1012->SetSavedPoint(18,0.0586293);
   ParabolaFunc1012->SetSavedPoint(19,0.05851258);
   ParabolaFunc1012->SetSavedPoint(20,0.05840226);
   ParabolaFunc1012->SetSavedPoint(21,0.05829835);
   ParabolaFunc1012->SetSavedPoint(22,0.05820083);
   ParabolaFunc1012->SetSavedPoint(23,0.05810972);
   ParabolaFunc1012->SetSavedPoint(24,0.05802501);
   ParabolaFunc1012->SetSavedPoint(25,0.0579467);
   ParabolaFunc1012->SetSavedPoint(26,0.05787479);
   ParabolaFunc1012->SetSavedPoint(27,0.05780928);
   ParabolaFunc1012->SetSavedPoint(28,0.05775018);
   ParabolaFunc1012->SetSavedPoint(29,0.05769747);
   ParabolaFunc1012->SetSavedPoint(30,0.05765117);
   ParabolaFunc1012->SetSavedPoint(31,0.05761127);
   ParabolaFunc1012->SetSavedPoint(32,0.05757777);
   ParabolaFunc1012->SetSavedPoint(33,0.05755067);
   ParabolaFunc1012->SetSavedPoint(34,0.05752997);
   ParabolaFunc1012->SetSavedPoint(35,0.05751567);
   ParabolaFunc1012->SetSavedPoint(36,0.05750778);
   ParabolaFunc1012->SetSavedPoint(37,0.05750629);
   ParabolaFunc1012->SetSavedPoint(38,0.05751119);
   ParabolaFunc1012->SetSavedPoint(39,0.0575225);
   ParabolaFunc1012->SetSavedPoint(40,0.05754021);
   ParabolaFunc1012->SetSavedPoint(41,0.05756432);
   ParabolaFunc1012->SetSavedPoint(42,0.05759484);
   ParabolaFunc1012->SetSavedPoint(43,0.05763175);
   ParabolaFunc1012->SetSavedPoint(44,0.05767507);
   ParabolaFunc1012->SetSavedPoint(45,0.05772479);
   ParabolaFunc1012->SetSavedPoint(46,0.0577809);
   ParabolaFunc1012->SetSavedPoint(47,0.05784342);
   ParabolaFunc1012->SetSavedPoint(48,0.05791235);
   ParabolaFunc1012->SetSavedPoint(49,0.05798767);
   ParabolaFunc1012->SetSavedPoint(50,0.05806939);
   ParabolaFunc1012->SetSavedPoint(51,0.05815752);
   ParabolaFunc1012->SetSavedPoint(52,0.05825204);
   ParabolaFunc1012->SetSavedPoint(53,0.05835297);
   ParabolaFunc1012->SetSavedPoint(54,0.0584603);
   ParabolaFunc1012->SetSavedPoint(55,0.05857403);
   ParabolaFunc1012->SetSavedPoint(56,0.05869417);
   ParabolaFunc1012->SetSavedPoint(57,0.0588207);
   ParabolaFunc1012->SetSavedPoint(58,0.05895363);
   ParabolaFunc1012->SetSavedPoint(59,0.05909297);
   ParabolaFunc1012->SetSavedPoint(60,0.05923871);
   ParabolaFunc1012->SetSavedPoint(61,0.05939085);
   ParabolaFunc1012->SetSavedPoint(62,0.05954939);
   ParabolaFunc1012->SetSavedPoint(63,0.05971433);
   ParabolaFunc1012->SetSavedPoint(64,0.05988567);
   ParabolaFunc1012->SetSavedPoint(65,0.06006342);
   ParabolaFunc1012->SetSavedPoint(66,0.06024756);
   ParabolaFunc1012->SetSavedPoint(67,0.06043811);
   ParabolaFunc1012->SetSavedPoint(68,0.06063506);
   ParabolaFunc1012->SetSavedPoint(69,0.06083841);
   ParabolaFunc1012->SetSavedPoint(70,0.06104816);
   ParabolaFunc1012->SetSavedPoint(71,0.06126431);
   ParabolaFunc1012->SetSavedPoint(72,0.06148686);
   ParabolaFunc1012->SetSavedPoint(73,0.06171582);
   ParabolaFunc1012->SetSavedPoint(74,0.06195118);
   ParabolaFunc1012->SetSavedPoint(75,0.06219293);
   ParabolaFunc1012->SetSavedPoint(76,0.06244109);
   ParabolaFunc1012->SetSavedPoint(77,0.06269565);
   ParabolaFunc1012->SetSavedPoint(78,0.06295662);
   ParabolaFunc1012->SetSavedPoint(79,0.06322398);
   ParabolaFunc1012->SetSavedPoint(80,0.06349775);
   ParabolaFunc1012->SetSavedPoint(81,0.06377791);
   ParabolaFunc1012->SetSavedPoint(82,0.06406448);
   ParabolaFunc1012->SetSavedPoint(83,0.06435745);
   ParabolaFunc1012->SetSavedPoint(84,0.06465682);
   ParabolaFunc1012->SetSavedPoint(85,0.06496259);
   ParabolaFunc1012->SetSavedPoint(86,0.06527476);
   ParabolaFunc1012->SetSavedPoint(87,0.06559334);
   ParabolaFunc1012->SetSavedPoint(88,0.06591831);
   ParabolaFunc1012->SetSavedPoint(89,0.06624969);
   ParabolaFunc1012->SetSavedPoint(90,0.06658747);
   ParabolaFunc1012->SetSavedPoint(91,0.06693165);
   ParabolaFunc1012->SetSavedPoint(92,0.06728223);
   ParabolaFunc1012->SetSavedPoint(93,0.06763921);
   ParabolaFunc1012->SetSavedPoint(94,0.06800259);
   ParabolaFunc1012->SetSavedPoint(95,0.06837238);
   ParabolaFunc1012->SetSavedPoint(96,0.06874857);
   ParabolaFunc1012->SetSavedPoint(97,0.06913115);
   ParabolaFunc1012->SetSavedPoint(98,0.06952014);
   ParabolaFunc1012->SetSavedPoint(99,0.06991553);
   ParabolaFunc1012->SetSavedPoint(100,0.07031733);
   ParabolaFunc1012->SetSavedPoint(101,750);
   ParabolaFunc1012->SetSavedPoint(102,2750);
   ParabolaFunc1012->SetFillColor(19);
   ParabolaFunc1012->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1012->SetLineColor(ci);
   ParabolaFunc1012->SetLineWidth(3);
   ParabolaFunc1012->SetChisquare(12.11091);
   ParabolaFunc1012->SetNDF(5);
   ParabolaFunc1012->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1012->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1012->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1012->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1012->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1012->SetParameter(0,8.001697e-09);
   ParabolaFunc1012->SetParError(0,1.733063e-08);
   ParabolaFunc1012->SetParLimits(0,0,0);
   ParabolaFunc1012->SetParameter(1,-2.37597e-05);
   ParabolaFunc1012->SetParError(1,6.205071e-05);
   ParabolaFunc1012->SetParLimits(1,0,0);
   ParabolaFunc1012->SetParameter(2,0.07514368);
   ParabolaFunc1012->SetParError(2,0.05219568);
   ParabolaFunc1012->SetParLimits(2,0,0);
   ParabolaFunc1012->SetParent(gre);
   gre->GetListOfFunctions()->Add(ParabolaFunc1012);
   gre->Draw("ap");
   
   TF1 *ParabolaFunc1013 = new TF1("*ParabolaFunc",750,2750,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2750,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1013->SetRange(750,2750);
   ParabolaFunc1013->SetName("ParabolaFunc");
   ParabolaFunc1013->SetTitle("ParabolaFunc");
   ParabolaFunc1013->SetSavedPoint(0,0.06182485);
   ParabolaFunc1013->SetSavedPoint(1,0.06159291);
   ParabolaFunc1013->SetSavedPoint(2,0.06136737);
   ParabolaFunc1013->SetSavedPoint(3,0.06114823);
   ParabolaFunc1013->SetSavedPoint(4,0.06093549);
   ParabolaFunc1013->SetSavedPoint(5,0.06072915);
   ParabolaFunc1013->SetSavedPoint(6,0.06052922);
   ParabolaFunc1013->SetSavedPoint(7,0.06033568);
   ParabolaFunc1013->SetSavedPoint(8,0.06014855);
   ParabolaFunc1013->SetSavedPoint(9,0.05996782);
   ParabolaFunc1013->SetSavedPoint(10,0.05979349);
   ParabolaFunc1013->SetSavedPoint(11,0.05962556);
   ParabolaFunc1013->SetSavedPoint(12,0.05946403);
   ParabolaFunc1013->SetSavedPoint(13,0.05930891);
   ParabolaFunc1013->SetSavedPoint(14,0.05916018);
   ParabolaFunc1013->SetSavedPoint(15,0.05901786);
   ParabolaFunc1013->SetSavedPoint(16,0.05888194);
   ParabolaFunc1013->SetSavedPoint(17,0.05875242);
   ParabolaFunc1013->SetSavedPoint(18,0.0586293);
   ParabolaFunc1013->SetSavedPoint(19,0.05851258);
   ParabolaFunc1013->SetSavedPoint(20,0.05840226);
   ParabolaFunc1013->SetSavedPoint(21,0.05829835);
   ParabolaFunc1013->SetSavedPoint(22,0.05820083);
   ParabolaFunc1013->SetSavedPoint(23,0.05810972);
   ParabolaFunc1013->SetSavedPoint(24,0.05802501);
   ParabolaFunc1013->SetSavedPoint(25,0.0579467);
   ParabolaFunc1013->SetSavedPoint(26,0.05787479);
   ParabolaFunc1013->SetSavedPoint(27,0.05780928);
   ParabolaFunc1013->SetSavedPoint(28,0.05775018);
   ParabolaFunc1013->SetSavedPoint(29,0.05769747);
   ParabolaFunc1013->SetSavedPoint(30,0.05765117);
   ParabolaFunc1013->SetSavedPoint(31,0.05761127);
   ParabolaFunc1013->SetSavedPoint(32,0.05757777);
   ParabolaFunc1013->SetSavedPoint(33,0.05755067);
   ParabolaFunc1013->SetSavedPoint(34,0.05752997);
   ParabolaFunc1013->SetSavedPoint(35,0.05751567);
   ParabolaFunc1013->SetSavedPoint(36,0.05750778);
   ParabolaFunc1013->SetSavedPoint(37,0.05750629);
   ParabolaFunc1013->SetSavedPoint(38,0.05751119);
   ParabolaFunc1013->SetSavedPoint(39,0.0575225);
   ParabolaFunc1013->SetSavedPoint(40,0.05754021);
   ParabolaFunc1013->SetSavedPoint(41,0.05756432);
   ParabolaFunc1013->SetSavedPoint(42,0.05759484);
   ParabolaFunc1013->SetSavedPoint(43,0.05763175);
   ParabolaFunc1013->SetSavedPoint(44,0.05767507);
   ParabolaFunc1013->SetSavedPoint(45,0.05772479);
   ParabolaFunc1013->SetSavedPoint(46,0.0577809);
   ParabolaFunc1013->SetSavedPoint(47,0.05784342);
   ParabolaFunc1013->SetSavedPoint(48,0.05791235);
   ParabolaFunc1013->SetSavedPoint(49,0.05798767);
   ParabolaFunc1013->SetSavedPoint(50,0.05806939);
   ParabolaFunc1013->SetSavedPoint(51,0.05815752);
   ParabolaFunc1013->SetSavedPoint(52,0.05825204);
   ParabolaFunc1013->SetSavedPoint(53,0.05835297);
   ParabolaFunc1013->SetSavedPoint(54,0.0584603);
   ParabolaFunc1013->SetSavedPoint(55,0.05857403);
   ParabolaFunc1013->SetSavedPoint(56,0.05869417);
   ParabolaFunc1013->SetSavedPoint(57,0.0588207);
   ParabolaFunc1013->SetSavedPoint(58,0.05895363);
   ParabolaFunc1013->SetSavedPoint(59,0.05909297);
   ParabolaFunc1013->SetSavedPoint(60,0.05923871);
   ParabolaFunc1013->SetSavedPoint(61,0.05939085);
   ParabolaFunc1013->SetSavedPoint(62,0.05954939);
   ParabolaFunc1013->SetSavedPoint(63,0.05971433);
   ParabolaFunc1013->SetSavedPoint(64,0.05988567);
   ParabolaFunc1013->SetSavedPoint(65,0.06006342);
   ParabolaFunc1013->SetSavedPoint(66,0.06024756);
   ParabolaFunc1013->SetSavedPoint(67,0.06043811);
   ParabolaFunc1013->SetSavedPoint(68,0.06063506);
   ParabolaFunc1013->SetSavedPoint(69,0.06083841);
   ParabolaFunc1013->SetSavedPoint(70,0.06104816);
   ParabolaFunc1013->SetSavedPoint(71,0.06126431);
   ParabolaFunc1013->SetSavedPoint(72,0.06148686);
   ParabolaFunc1013->SetSavedPoint(73,0.06171582);
   ParabolaFunc1013->SetSavedPoint(74,0.06195118);
   ParabolaFunc1013->SetSavedPoint(75,0.06219293);
   ParabolaFunc1013->SetSavedPoint(76,0.06244109);
   ParabolaFunc1013->SetSavedPoint(77,0.06269565);
   ParabolaFunc1013->SetSavedPoint(78,0.06295662);
   ParabolaFunc1013->SetSavedPoint(79,0.06322398);
   ParabolaFunc1013->SetSavedPoint(80,0.06349775);
   ParabolaFunc1013->SetSavedPoint(81,0.06377791);
   ParabolaFunc1013->SetSavedPoint(82,0.06406448);
   ParabolaFunc1013->SetSavedPoint(83,0.06435745);
   ParabolaFunc1013->SetSavedPoint(84,0.06465682);
   ParabolaFunc1013->SetSavedPoint(85,0.06496259);
   ParabolaFunc1013->SetSavedPoint(86,0.06527476);
   ParabolaFunc1013->SetSavedPoint(87,0.06559334);
   ParabolaFunc1013->SetSavedPoint(88,0.06591831);
   ParabolaFunc1013->SetSavedPoint(89,0.06624969);
   ParabolaFunc1013->SetSavedPoint(90,0.06658747);
   ParabolaFunc1013->SetSavedPoint(91,0.06693165);
   ParabolaFunc1013->SetSavedPoint(92,0.06728223);
   ParabolaFunc1013->SetSavedPoint(93,0.06763921);
   ParabolaFunc1013->SetSavedPoint(94,0.06800259);
   ParabolaFunc1013->SetSavedPoint(95,0.06837238);
   ParabolaFunc1013->SetSavedPoint(96,0.06874857);
   ParabolaFunc1013->SetSavedPoint(97,0.06913115);
   ParabolaFunc1013->SetSavedPoint(98,0.06952014);
   ParabolaFunc1013->SetSavedPoint(99,0.06991553);
   ParabolaFunc1013->SetSavedPoint(100,0.07031733);
   ParabolaFunc1013->SetSavedPoint(101,750);
   ParabolaFunc1013->SetSavedPoint(102,2750);
   ParabolaFunc1013->SetFillColor(19);
   ParabolaFunc1013->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1013->SetLineColor(ci);
   ParabolaFunc1013->SetLineWidth(3);
   ParabolaFunc1013->SetChisquare(12.11091);
   ParabolaFunc1013->SetNDF(5);
   ParabolaFunc1013->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1013->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1013->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1013->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1013->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1013->SetParameter(0,8.001697e-09);
   ParabolaFunc1013->SetParError(0,1.733063e-08);
   ParabolaFunc1013->SetParLimits(0,0,0);
   ParabolaFunc1013->SetParameter(1,-2.37597e-05);
   ParabolaFunc1013->SetParError(1,6.205071e-05);
   ParabolaFunc1013->SetParLimits(1,0,0);
   ParabolaFunc1013->SetParameter(2,0.07514368);
   ParabolaFunc1013->SetParError(2,0.05219568);
   ParabolaFunc1013->SetParLimits(2,0,0);
   ParabolaFunc1013->Draw("SAME");
   
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
   pt_LaTex = pt->AddText("2.42
");
   pt_LaTex = pt->AddText("8e-09
#pm2e-08
");
   pt_LaTex = pt->AddText("-2e-05
#pm6e-05
");
   pt_LaTex = pt->AddText("0.08
#pm0.05
");
   pt->Draw();
   S18->Modified();
   S18->cd();
   S18->SetSelected(S18);
}
