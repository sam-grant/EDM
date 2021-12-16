void RecoVertexFit_S0()
{
//=========Macro generated from canvas: S0/c
//=========  (Tue Dec  7 01:11:50 2021) by ROOT version 6.24/04
   TCanvas *S0 = new TCanvas("S0", "c",0,0,800,600);
   S0->SetHighLightColor(2);
   S0->Range(466.8434,-0.015,3026.854,0.135);
   S0->SetFillColor(0);
   S0->SetBorderMode(0);
   S0->SetBorderSize(2);
   S0->SetFrameBorderMode(0);
   S0->SetFrameBorderMode(0);
   
   Double_t S0_trackReco_fx1055[11] = {
   451.647,
   653.2691,
   879.9271,
   1123.054,
   1371.406,
   1620.739,
   1868.003,
   2116.569,
   2363.182,
   2615.294,
   2789.557};
   Double_t S0_trackReco_fy1055[11] = {
   0.07814805,
   0.08753551,
   0.08368968,
   0.08311981,
   0.1178339,
   0.1074474,
   0.06591362,
   0.07259367,
   0.04454416,
   0.02802879,
   -0.03439055};
   Double_t S0_trackReco_fex1055[11] = {
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
   Double_t S0_trackReco_fey1055[11] = {
   0.1104967,
   0.03689173,
   0.02135777,
   0.01754203,
   0.01601735,
   0.01521858,
   0.01498697,
   0.01540681,
   0.01595041,
   0.01584908,
   0.03389351};
   TGraphErrors *gre = new TGraphErrors(11,S0_trackReco_fx1055,S0_trackReco_fy1055,S0_trackReco_fex1055,S0_trackReco_fey1055);
   gre->SetName("S0_trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_trackReco1055 = new TH1F("Graph_S0_trackReco1055","",100,217.8561,3023.348);
   Graph_S0_trackReco1055->SetMinimum(0);
   Graph_S0_trackReco1055->SetMaximum(0.12);
   Graph_S0_trackReco1055->SetDirectory(0);
   Graph_S0_trackReco1055->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_trackReco1055->SetLineColor(ci);
   Graph_S0_trackReco1055->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0_trackReco1055->GetXaxis()->SetRange(19,91);
   Graph_S0_trackReco1055->GetXaxis()->CenterTitle(true);
   Graph_S0_trackReco1055->GetXaxis()->SetLabelFont(42);
   Graph_S0_trackReco1055->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_trackReco1055->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_trackReco1055->GetXaxis()->SetTitleFont(42);
   Graph_S0_trackReco1055->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_S0_trackReco1055->GetYaxis()->CenterTitle(true);
   Graph_S0_trackReco1055->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_trackReco1055->GetYaxis()->SetLabelFont(42);
   Graph_S0_trackReco1055->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_trackReco1055->GetYaxis()->SetTitleOffset(1.25);
   Graph_S0_trackReco1055->GetYaxis()->SetTitleFont(42);
   Graph_S0_trackReco1055->GetZaxis()->SetLabelFont(42);
   Graph_S0_trackReco1055->GetZaxis()->SetTitleOffset(1);
   Graph_S0_trackReco1055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_trackReco1055);
   
   
   TF1 *ParabolaFunc1056 = new TF1("*ParabolaFunc",750,2750,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2750,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1056->SetRange(750,2750);
   ParabolaFunc1056->SetName("ParabolaFunc");
   ParabolaFunc1056->SetTitle("ParabolaFunc");
   ParabolaFunc1056->SetSavedPoint(0,0.08052068);
   ParabolaFunc1056->SetSavedPoint(1,0.08169233);
   ParabolaFunc1056->SetSavedPoint(2,0.08282493);
   ParabolaFunc1056->SetSavedPoint(3,0.08391848);
   ParabolaFunc1056->SetSavedPoint(4,0.08497297);
   ParabolaFunc1056->SetSavedPoint(5,0.08598842);
   ParabolaFunc1056->SetSavedPoint(6,0.08696481);
   ParabolaFunc1056->SetSavedPoint(7,0.08790215);
   ParabolaFunc1056->SetSavedPoint(8,0.08880043);
   ParabolaFunc1056->SetSavedPoint(9,0.08965967);
   ParabolaFunc1056->SetSavedPoint(10,0.09047985);
   ParabolaFunc1056->SetSavedPoint(11,0.09126098);
   ParabolaFunc1056->SetSavedPoint(12,0.09200306);
   ParabolaFunc1056->SetSavedPoint(13,0.09270609);
   ParabolaFunc1056->SetSavedPoint(14,0.09337006);
   ParabolaFunc1056->SetSavedPoint(15,0.09399498);
   ParabolaFunc1056->SetSavedPoint(16,0.09458085);
   ParabolaFunc1056->SetSavedPoint(17,0.09512767);
   ParabolaFunc1056->SetSavedPoint(18,0.09563543);
   ParabolaFunc1056->SetSavedPoint(19,0.09610415);
   ParabolaFunc1056->SetSavedPoint(20,0.09653381);
   ParabolaFunc1056->SetSavedPoint(21,0.09692442);
   ParabolaFunc1056->SetSavedPoint(22,0.09727598);
   ParabolaFunc1056->SetSavedPoint(23,0.09758848);
   ParabolaFunc1056->SetSavedPoint(24,0.09786193);
   ParabolaFunc1056->SetSavedPoint(25,0.09809634);
   ParabolaFunc1056->SetSavedPoint(26,0.09829168);
   ParabolaFunc1056->SetSavedPoint(27,0.09844798);
   ParabolaFunc1056->SetSavedPoint(28,0.09856522);
   ParabolaFunc1056->SetSavedPoint(29,0.09864342);
   ParabolaFunc1056->SetSavedPoint(30,0.09868256);
   ParabolaFunc1056->SetSavedPoint(31,0.09868265);
   ParabolaFunc1056->SetSavedPoint(32,0.09864368);
   ParabolaFunc1056->SetSavedPoint(33,0.09856566);
   ParabolaFunc1056->SetSavedPoint(34,0.0984486);
   ParabolaFunc1056->SetSavedPoint(35,0.09829248);
   ParabolaFunc1056->SetSavedPoint(36,0.0980973);
   ParabolaFunc1056->SetSavedPoint(37,0.09786308);
   ParabolaFunc1056->SetSavedPoint(38,0.0975898);
   ParabolaFunc1056->SetSavedPoint(39,0.09727747);
   ParabolaFunc1056->SetSavedPoint(40,0.09692609);
   ParabolaFunc1056->SetSavedPoint(41,0.09653566);
   ParabolaFunc1056->SetSavedPoint(42,0.09610617);
   ParabolaFunc1056->SetSavedPoint(43,0.09563764);
   ParabolaFunc1056->SetSavedPoint(44,0.09513005);
   ParabolaFunc1056->SetSavedPoint(45,0.0945834);
   ParabolaFunc1056->SetSavedPoint(46,0.09399771);
   ParabolaFunc1056->SetSavedPoint(47,0.09337296);
   ParabolaFunc1056->SetSavedPoint(48,0.09270917);
   ParabolaFunc1056->SetSavedPoint(49,0.09200632);
   ParabolaFunc1056->SetSavedPoint(50,0.09126441);
   ParabolaFunc1056->SetSavedPoint(51,0.09048346);
   ParabolaFunc1056->SetSavedPoint(52,0.08966345);
   ParabolaFunc1056->SetSavedPoint(53,0.08880439);
   ParabolaFunc1056->SetSavedPoint(54,0.08790628);
   ParabolaFunc1056->SetSavedPoint(55,0.08696912);
   ParabolaFunc1056->SetSavedPoint(56,0.0859929);
   ParabolaFunc1056->SetSavedPoint(57,0.08497764);
   ParabolaFunc1056->SetSavedPoint(58,0.08392332);
   ParabolaFunc1056->SetSavedPoint(59,0.08282995);
   ParabolaFunc1056->SetSavedPoint(60,0.08169752);
   ParabolaFunc1056->SetSavedPoint(61,0.08052605);
   ParabolaFunc1056->SetSavedPoint(62,0.07931552);
   ParabolaFunc1056->SetSavedPoint(63,0.07806594);
   ParabolaFunc1056->SetSavedPoint(64,0.07677731);
   ParabolaFunc1056->SetSavedPoint(65,0.07544962);
   ParabolaFunc1056->SetSavedPoint(66,0.07408289);
   ParabolaFunc1056->SetSavedPoint(67,0.0726771);
   ParabolaFunc1056->SetSavedPoint(68,0.07123226);
   ParabolaFunc1056->SetSavedPoint(69,0.06974836);
   ParabolaFunc1056->SetSavedPoint(70,0.06822542);
   ParabolaFunc1056->SetSavedPoint(71,0.06666342);
   ParabolaFunc1056->SetSavedPoint(72,0.06506237);
   ParabolaFunc1056->SetSavedPoint(73,0.06342227);
   ParabolaFunc1056->SetSavedPoint(74,0.06174312);
   ParabolaFunc1056->SetSavedPoint(75,0.06002491);
   ParabolaFunc1056->SetSavedPoint(76,0.05826766);
   ParabolaFunc1056->SetSavedPoint(77,0.05647135);
   ParabolaFunc1056->SetSavedPoint(78,0.05463598);
   ParabolaFunc1056->SetSavedPoint(79,0.05276157);
   ParabolaFunc1056->SetSavedPoint(80,0.0508481);
   ParabolaFunc1056->SetSavedPoint(81,0.04889559);
   ParabolaFunc1056->SetSavedPoint(82,0.04690401);
   ParabolaFunc1056->SetSavedPoint(83,0.04487339);
   ParabolaFunc1056->SetSavedPoint(84,0.04280372);
   ParabolaFunc1056->SetSavedPoint(85,0.04069499);
   ParabolaFunc1056->SetSavedPoint(86,0.03854721);
   ParabolaFunc1056->SetSavedPoint(87,0.03636038);
   ParabolaFunc1056->SetSavedPoint(88,0.0341345);
   ParabolaFunc1056->SetSavedPoint(89,0.03186956);
   ParabolaFunc1056->SetSavedPoint(90,0.02956557);
   ParabolaFunc1056->SetSavedPoint(91,0.02722254);
   ParabolaFunc1056->SetSavedPoint(92,0.02484044);
   ParabolaFunc1056->SetSavedPoint(93,0.0224193);
   ParabolaFunc1056->SetSavedPoint(94,0.0199591);
   ParabolaFunc1056->SetSavedPoint(95,0.01745986);
   ParabolaFunc1056->SetSavedPoint(96,0.01492156);
   ParabolaFunc1056->SetSavedPoint(97,0.0123442);
   ParabolaFunc1056->SetSavedPoint(98,0.009727799);
   ParabolaFunc1056->SetSavedPoint(99,0.007072342);
   ParabolaFunc1056->SetSavedPoint(100,0.004377833);
   ParabolaFunc1056->SetSavedPoint(101,750);
   ParabolaFunc1056->SetSavedPoint(102,2750);
   ParabolaFunc1056->SetFillColor(19);
   ParabolaFunc1056->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1056->SetLineColor(ci);
   ParabolaFunc1056->SetLineWidth(3);
   ParabolaFunc1056->SetChisquare(4.707045);
   ParabolaFunc1056->SetNDF(5);
   ParabolaFunc1056->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1056->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1056->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1056->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1056->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1056->SetParameter(0,-4.881516e-08);
   ParabolaFunc1056->SetParError(0,2.145245e-08);
   ParabolaFunc1056->SetParLimits(0,0,0);
   ParabolaFunc1056->SetParameter(1,0.0001327816);
   ParabolaFunc1056->SetParError(1,7.754746e-05);
   ParabolaFunc1056->SetParLimits(1,0,0);
   ParabolaFunc1056->SetParameter(2,0.00839298);
   ParabolaFunc1056->SetParError(2,0.065909);
   ParabolaFunc1056->SetParLimits(2,0,0);
   ParabolaFunc1056->SetParent(gre);
   gre->GetListOfFunctions()->Add(ParabolaFunc1056);
   gre->Draw("ap");
   
   TF1 *ParabolaFunc1057 = new TF1("*ParabolaFunc",750,2750,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2750,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1057->SetRange(750,2750);
   ParabolaFunc1057->SetName("ParabolaFunc");
   ParabolaFunc1057->SetTitle("ParabolaFunc");
   ParabolaFunc1057->SetSavedPoint(0,0.08052068);
   ParabolaFunc1057->SetSavedPoint(1,0.08169233);
   ParabolaFunc1057->SetSavedPoint(2,0.08282493);
   ParabolaFunc1057->SetSavedPoint(3,0.08391848);
   ParabolaFunc1057->SetSavedPoint(4,0.08497297);
   ParabolaFunc1057->SetSavedPoint(5,0.08598842);
   ParabolaFunc1057->SetSavedPoint(6,0.08696481);
   ParabolaFunc1057->SetSavedPoint(7,0.08790215);
   ParabolaFunc1057->SetSavedPoint(8,0.08880043);
   ParabolaFunc1057->SetSavedPoint(9,0.08965967);
   ParabolaFunc1057->SetSavedPoint(10,0.09047985);
   ParabolaFunc1057->SetSavedPoint(11,0.09126098);
   ParabolaFunc1057->SetSavedPoint(12,0.09200306);
   ParabolaFunc1057->SetSavedPoint(13,0.09270609);
   ParabolaFunc1057->SetSavedPoint(14,0.09337006);
   ParabolaFunc1057->SetSavedPoint(15,0.09399498);
   ParabolaFunc1057->SetSavedPoint(16,0.09458085);
   ParabolaFunc1057->SetSavedPoint(17,0.09512767);
   ParabolaFunc1057->SetSavedPoint(18,0.09563543);
   ParabolaFunc1057->SetSavedPoint(19,0.09610415);
   ParabolaFunc1057->SetSavedPoint(20,0.09653381);
   ParabolaFunc1057->SetSavedPoint(21,0.09692442);
   ParabolaFunc1057->SetSavedPoint(22,0.09727598);
   ParabolaFunc1057->SetSavedPoint(23,0.09758848);
   ParabolaFunc1057->SetSavedPoint(24,0.09786193);
   ParabolaFunc1057->SetSavedPoint(25,0.09809634);
   ParabolaFunc1057->SetSavedPoint(26,0.09829168);
   ParabolaFunc1057->SetSavedPoint(27,0.09844798);
   ParabolaFunc1057->SetSavedPoint(28,0.09856522);
   ParabolaFunc1057->SetSavedPoint(29,0.09864342);
   ParabolaFunc1057->SetSavedPoint(30,0.09868256);
   ParabolaFunc1057->SetSavedPoint(31,0.09868265);
   ParabolaFunc1057->SetSavedPoint(32,0.09864368);
   ParabolaFunc1057->SetSavedPoint(33,0.09856566);
   ParabolaFunc1057->SetSavedPoint(34,0.0984486);
   ParabolaFunc1057->SetSavedPoint(35,0.09829248);
   ParabolaFunc1057->SetSavedPoint(36,0.0980973);
   ParabolaFunc1057->SetSavedPoint(37,0.09786308);
   ParabolaFunc1057->SetSavedPoint(38,0.0975898);
   ParabolaFunc1057->SetSavedPoint(39,0.09727747);
   ParabolaFunc1057->SetSavedPoint(40,0.09692609);
   ParabolaFunc1057->SetSavedPoint(41,0.09653566);
   ParabolaFunc1057->SetSavedPoint(42,0.09610617);
   ParabolaFunc1057->SetSavedPoint(43,0.09563764);
   ParabolaFunc1057->SetSavedPoint(44,0.09513005);
   ParabolaFunc1057->SetSavedPoint(45,0.0945834);
   ParabolaFunc1057->SetSavedPoint(46,0.09399771);
   ParabolaFunc1057->SetSavedPoint(47,0.09337296);
   ParabolaFunc1057->SetSavedPoint(48,0.09270917);
   ParabolaFunc1057->SetSavedPoint(49,0.09200632);
   ParabolaFunc1057->SetSavedPoint(50,0.09126441);
   ParabolaFunc1057->SetSavedPoint(51,0.09048346);
   ParabolaFunc1057->SetSavedPoint(52,0.08966345);
   ParabolaFunc1057->SetSavedPoint(53,0.08880439);
   ParabolaFunc1057->SetSavedPoint(54,0.08790628);
   ParabolaFunc1057->SetSavedPoint(55,0.08696912);
   ParabolaFunc1057->SetSavedPoint(56,0.0859929);
   ParabolaFunc1057->SetSavedPoint(57,0.08497764);
   ParabolaFunc1057->SetSavedPoint(58,0.08392332);
   ParabolaFunc1057->SetSavedPoint(59,0.08282995);
   ParabolaFunc1057->SetSavedPoint(60,0.08169752);
   ParabolaFunc1057->SetSavedPoint(61,0.08052605);
   ParabolaFunc1057->SetSavedPoint(62,0.07931552);
   ParabolaFunc1057->SetSavedPoint(63,0.07806594);
   ParabolaFunc1057->SetSavedPoint(64,0.07677731);
   ParabolaFunc1057->SetSavedPoint(65,0.07544962);
   ParabolaFunc1057->SetSavedPoint(66,0.07408289);
   ParabolaFunc1057->SetSavedPoint(67,0.0726771);
   ParabolaFunc1057->SetSavedPoint(68,0.07123226);
   ParabolaFunc1057->SetSavedPoint(69,0.06974836);
   ParabolaFunc1057->SetSavedPoint(70,0.06822542);
   ParabolaFunc1057->SetSavedPoint(71,0.06666342);
   ParabolaFunc1057->SetSavedPoint(72,0.06506237);
   ParabolaFunc1057->SetSavedPoint(73,0.06342227);
   ParabolaFunc1057->SetSavedPoint(74,0.06174312);
   ParabolaFunc1057->SetSavedPoint(75,0.06002491);
   ParabolaFunc1057->SetSavedPoint(76,0.05826766);
   ParabolaFunc1057->SetSavedPoint(77,0.05647135);
   ParabolaFunc1057->SetSavedPoint(78,0.05463598);
   ParabolaFunc1057->SetSavedPoint(79,0.05276157);
   ParabolaFunc1057->SetSavedPoint(80,0.0508481);
   ParabolaFunc1057->SetSavedPoint(81,0.04889559);
   ParabolaFunc1057->SetSavedPoint(82,0.04690401);
   ParabolaFunc1057->SetSavedPoint(83,0.04487339);
   ParabolaFunc1057->SetSavedPoint(84,0.04280372);
   ParabolaFunc1057->SetSavedPoint(85,0.04069499);
   ParabolaFunc1057->SetSavedPoint(86,0.03854721);
   ParabolaFunc1057->SetSavedPoint(87,0.03636038);
   ParabolaFunc1057->SetSavedPoint(88,0.0341345);
   ParabolaFunc1057->SetSavedPoint(89,0.03186956);
   ParabolaFunc1057->SetSavedPoint(90,0.02956557);
   ParabolaFunc1057->SetSavedPoint(91,0.02722254);
   ParabolaFunc1057->SetSavedPoint(92,0.02484044);
   ParabolaFunc1057->SetSavedPoint(93,0.0224193);
   ParabolaFunc1057->SetSavedPoint(94,0.0199591);
   ParabolaFunc1057->SetSavedPoint(95,0.01745986);
   ParabolaFunc1057->SetSavedPoint(96,0.01492156);
   ParabolaFunc1057->SetSavedPoint(97,0.0123442);
   ParabolaFunc1057->SetSavedPoint(98,0.009727799);
   ParabolaFunc1057->SetSavedPoint(99,0.007072342);
   ParabolaFunc1057->SetSavedPoint(100,0.004377833);
   ParabolaFunc1057->SetSavedPoint(101,750);
   ParabolaFunc1057->SetSavedPoint(102,2750);
   ParabolaFunc1057->SetFillColor(19);
   ParabolaFunc1057->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1057->SetLineColor(ci);
   ParabolaFunc1057->SetLineWidth(3);
   ParabolaFunc1057->SetChisquare(4.707045);
   ParabolaFunc1057->SetNDF(5);
   ParabolaFunc1057->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1057->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1057->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1057->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1057->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1057->SetParameter(0,-4.881516e-08);
   ParabolaFunc1057->SetParError(0,2.145245e-08);
   ParabolaFunc1057->SetParLimits(0,0,0);
   ParabolaFunc1057->SetParameter(1,0.0001327816);
   ParabolaFunc1057->SetParError(1,7.754746e-05);
   ParabolaFunc1057->SetParLimits(1,0,0);
   ParabolaFunc1057->SetParameter(2,0.00839298);
   ParabolaFunc1057->SetParError(2,0.065909);
   ParabolaFunc1057->SetParLimits(2,0,0);
   ParabolaFunc1057->Draw("SAME");
   
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
   pt_LaTex = pt->AddText("0.941
");
   pt_LaTex = pt->AddText("-5e-08
#pm2e-08
");
   pt_LaTex = pt->AddText("0.0001
#pm8e-05
");
   pt_LaTex = pt->AddText("0.008
#pm0.07
");
   pt->Draw();
   S0->Modified();
   S0->cd();
   S0->SetSelected(S0);
}
