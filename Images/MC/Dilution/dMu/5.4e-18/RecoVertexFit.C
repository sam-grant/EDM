void RecoVertexFit()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Sep 14 11:03:33 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(495.3437,-0.015,2746.906,0.135);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t trackReco_fx1021[11] = {
   375,
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t trackReco_fy1021[11] = {
   -0.01376143,
   0.09264648,
   0.07297922,
   0.08156121,
   0.08076189,
   0.09118542,
   0.07949435,
   0.06144624,
   0.03915688,
   0.05483956,
   -0.008982683};
   Double_t trackReco_fex1021[11] = {
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125};
   Double_t trackReco_fey1021[11] = {
   0.0636869,
   0.02132924,
   0.01226297,
   0.01007448,
   0.009235815,
   0.008789589,
   0.008812048,
   0.009229503,
   0.009809752,
   0.009732171,
   0.02197126};
   TGraphErrors *gre = new TGraphErrors(11,trackReco_fx1021,trackReco_fy1021,trackReco_fex1021,trackReco_fey1021);
   gre->SetName("trackReco");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;d_{EDM}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackReco1021 = new TH1F("Graph_trackReco1021","",100,0,3275);
   Graph_trackReco1021->SetMinimum(0);
   Graph_trackReco1021->SetMaximum(0.12);
   Graph_trackReco1021->SetDirectory(0);
   Graph_trackReco1021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_trackReco1021->SetLineColor(ci);
   Graph_trackReco1021->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_trackReco1021->GetXaxis()->SetRange(23,77);
   Graph_trackReco1021->GetXaxis()->CenterTitle(true);
   Graph_trackReco1021->GetXaxis()->SetLabelFont(42);
   Graph_trackReco1021->GetXaxis()->SetTitleSize(0.04);
   Graph_trackReco1021->GetXaxis()->SetTitleOffset(1.1);
   Graph_trackReco1021->GetXaxis()->SetTitleFont(42);
   Graph_trackReco1021->GetYaxis()->SetTitle("d_{EDM}(p)");
   Graph_trackReco1021->GetYaxis()->CenterTitle(true);
   Graph_trackReco1021->GetYaxis()->SetNdivisions(4000510);
   Graph_trackReco1021->GetYaxis()->SetLabelFont(42);
   Graph_trackReco1021->GetYaxis()->SetTitleSize(0.04);
   Graph_trackReco1021->GetYaxis()->SetTitleOffset(1.15);
   Graph_trackReco1021->GetYaxis()->SetTitleFont(42);
   Graph_trackReco1021->GetZaxis()->SetLabelFont(42);
   Graph_trackReco1021->GetZaxis()->SetTitleOffset(1);
   Graph_trackReco1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackReco1021);
   
   
   TF1 *ParabolaFunc1022 = new TF1("*ParabolaFunc",750,2500,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2500,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1022->SetRange(750,2500);
   ParabolaFunc1022->SetName("ParabolaFunc");
   ParabolaFunc1022->SetTitle("ParabolaFunc");
   ParabolaFunc1022->SetSavedPoint(0,0.05983546);
   ParabolaFunc1022->SetSavedPoint(1,0.06120321);
   ParabolaFunc1022->SetSavedPoint(2,0.06253668);
   ParabolaFunc1022->SetSavedPoint(3,0.06383589);
   ParabolaFunc1022->SetSavedPoint(4,0.06510083);
   ParabolaFunc1022->SetSavedPoint(5,0.06633149);
   ParabolaFunc1022->SetSavedPoint(6,0.06752788);
   ParabolaFunc1022->SetSavedPoint(7,0.06869);
   ParabolaFunc1022->SetSavedPoint(8,0.06981785);
   ParabolaFunc1022->SetSavedPoint(9,0.07091142);
   ParabolaFunc1022->SetSavedPoint(10,0.07197073);
   ParabolaFunc1022->SetSavedPoint(11,0.07299576);
   ParabolaFunc1022->SetSavedPoint(12,0.07398652);
   ParabolaFunc1022->SetSavedPoint(13,0.07494301);
   ParabolaFunc1022->SetSavedPoint(14,0.07586523);
   ParabolaFunc1022->SetSavedPoint(15,0.07675317);
   ParabolaFunc1022->SetSavedPoint(16,0.07760685);
   ParabolaFunc1022->SetSavedPoint(17,0.07842625);
   ParabolaFunc1022->SetSavedPoint(18,0.07921138);
   ParabolaFunc1022->SetSavedPoint(19,0.07996224);
   ParabolaFunc1022->SetSavedPoint(20,0.08067883);
   ParabolaFunc1022->SetSavedPoint(21,0.08136114);
   ParabolaFunc1022->SetSavedPoint(22,0.08200919);
   ParabolaFunc1022->SetSavedPoint(23,0.08262296);
   ParabolaFunc1022->SetSavedPoint(24,0.08320246);
   ParabolaFunc1022->SetSavedPoint(25,0.08374768);
   ParabolaFunc1022->SetSavedPoint(26,0.08425864);
   ParabolaFunc1022->SetSavedPoint(27,0.08473533);
   ParabolaFunc1022->SetSavedPoint(28,0.08517774);
   ParabolaFunc1022->SetSavedPoint(29,0.08558588);
   ParabolaFunc1022->SetSavedPoint(30,0.08595975);
   ParabolaFunc1022->SetSavedPoint(31,0.08629935);
   ParabolaFunc1022->SetSavedPoint(32,0.08660467);
   ParabolaFunc1022->SetSavedPoint(33,0.08687573);
   ParabolaFunc1022->SetSavedPoint(34,0.08711251);
   ParabolaFunc1022->SetSavedPoint(35,0.08731502);
   ParabolaFunc1022->SetSavedPoint(36,0.08748326);
   ParabolaFunc1022->SetSavedPoint(37,0.08761722);
   ParabolaFunc1022->SetSavedPoint(38,0.08771692);
   ParabolaFunc1022->SetSavedPoint(39,0.08778234);
   ParabolaFunc1022->SetSavedPoint(40,0.08781349);
   ParabolaFunc1022->SetSavedPoint(41,0.08781037);
   ParabolaFunc1022->SetSavedPoint(42,0.08777298);
   ParabolaFunc1022->SetSavedPoint(43,0.08770132);
   ParabolaFunc1022->SetSavedPoint(44,0.08759538);
   ParabolaFunc1022->SetSavedPoint(45,0.08745518);
   ParabolaFunc1022->SetSavedPoint(46,0.0872807);
   ParabolaFunc1022->SetSavedPoint(47,0.08707195);
   ParabolaFunc1022->SetSavedPoint(48,0.08682892);
   ParabolaFunc1022->SetSavedPoint(49,0.08655163);
   ParabolaFunc1022->SetSavedPoint(50,0.08624006);
   ParabolaFunc1022->SetSavedPoint(51,0.08589423);
   ParabolaFunc1022->SetSavedPoint(52,0.08551412);
   ParabolaFunc1022->SetSavedPoint(53,0.08509974);
   ParabolaFunc1022->SetSavedPoint(54,0.08465108);
   ParabolaFunc1022->SetSavedPoint(55,0.08416816);
   ParabolaFunc1022->SetSavedPoint(56,0.08365096);
   ParabolaFunc1022->SetSavedPoint(57,0.08309949);
   ParabolaFunc1022->SetSavedPoint(58,0.08251375);
   ParabolaFunc1022->SetSavedPoint(59,0.08189374);
   ParabolaFunc1022->SetSavedPoint(60,0.08123946);
   ParabolaFunc1022->SetSavedPoint(61,0.0805509);
   ParabolaFunc1022->SetSavedPoint(62,0.07982808);
   ParabolaFunc1022->SetSavedPoint(63,0.07907098);
   ParabolaFunc1022->SetSavedPoint(64,0.07827961);
   ParabolaFunc1022->SetSavedPoint(65,0.07745397);
   ParabolaFunc1022->SetSavedPoint(66,0.07659405);
   ParabolaFunc1022->SetSavedPoint(67,0.07569987);
   ParabolaFunc1022->SetSavedPoint(68,0.07477141);
   ParabolaFunc1022->SetSavedPoint(69,0.07380868);
   ParabolaFunc1022->SetSavedPoint(70,0.07281168);
   ParabolaFunc1022->SetSavedPoint(71,0.07178041);
   ParabolaFunc1022->SetSavedPoint(72,0.07071486);
   ParabolaFunc1022->SetSavedPoint(73,0.06961504);
   ParabolaFunc1022->SetSavedPoint(74,0.06848096);
   ParabolaFunc1022->SetSavedPoint(75,0.0673126);
   ParabolaFunc1022->SetSavedPoint(76,0.06610996);
   ParabolaFunc1022->SetSavedPoint(77,0.06487306);
   ParabolaFunc1022->SetSavedPoint(78,0.06360189);
   ParabolaFunc1022->SetSavedPoint(79,0.06229644);
   ParabolaFunc1022->SetSavedPoint(80,0.06095672);
   ParabolaFunc1022->SetSavedPoint(81,0.05958273);
   ParabolaFunc1022->SetSavedPoint(82,0.05817447);
   ParabolaFunc1022->SetSavedPoint(83,0.05673193);
   ParabolaFunc1022->SetSavedPoint(84,0.05525513);
   ParabolaFunc1022->SetSavedPoint(85,0.05374405);
   ParabolaFunc1022->SetSavedPoint(86,0.0521987);
   ParabolaFunc1022->SetSavedPoint(87,0.05061908);
   ParabolaFunc1022->SetSavedPoint(88,0.04900519);
   ParabolaFunc1022->SetSavedPoint(89,0.04735702);
   ParabolaFunc1022->SetSavedPoint(90,0.04567459);
   ParabolaFunc1022->SetSavedPoint(91,0.04395788);
   ParabolaFunc1022->SetSavedPoint(92,0.0422069);
   ParabolaFunc1022->SetSavedPoint(93,0.04042165);
   ParabolaFunc1022->SetSavedPoint(94,0.03860213);
   ParabolaFunc1022->SetSavedPoint(95,0.03674833);
   ParabolaFunc1022->SetSavedPoint(96,0.03486026);
   ParabolaFunc1022->SetSavedPoint(97,0.03293792);
   ParabolaFunc1022->SetSavedPoint(98,0.03098131);
   ParabolaFunc1022->SetSavedPoint(99,0.02899043);
   ParabolaFunc1022->SetSavedPoint(100,0.02696528);
   ParabolaFunc1022->SetSavedPoint(101,750);
   ParabolaFunc1022->SetSavedPoint(102,2500);
   ParabolaFunc1022->SetFillColor(19);
   ParabolaFunc1022->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1022->SetLineColor(ci);
   ParabolaFunc1022->SetLineWidth(3);
   ParabolaFunc1022->SetChisquare(0.9279373);
   ParabolaFunc1022->SetNDF(4);
   ParabolaFunc1022->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1022->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1022->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1022->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1022->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1022->SetParameter(0,-5.595389e-08);
   ParabolaFunc1022->SetParError(0,2.416525e-08);
   ParabolaFunc1022->SetParLimits(0,0,0);
   ParabolaFunc1022->SetParameter(1,0.0001630672);
   ParabolaFunc1022->SetParError(1,8.006433e-05);
   ParabolaFunc1022->SetParLimits(1,0,0);
   ParabolaFunc1022->SetParameter(2,-0.03099087);
   ParabolaFunc1022->SetParError(2,0.06326218);
   ParabolaFunc1022->SetParLimits(2,0,0);
   ParabolaFunc1022->SetParent(gre);
   gre->GetListOfFunctions()->Add(ParabolaFunc1022);
   gre->Draw("ap");
   
   TF1 *ParabolaFunc1023 = new TF1("*ParabolaFunc",750,2500,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2500,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1023->SetRange(750,2500);
   ParabolaFunc1023->SetName("ParabolaFunc");
   ParabolaFunc1023->SetTitle("ParabolaFunc");
   ParabolaFunc1023->SetSavedPoint(0,0.05983546);
   ParabolaFunc1023->SetSavedPoint(1,0.06120321);
   ParabolaFunc1023->SetSavedPoint(2,0.06253668);
   ParabolaFunc1023->SetSavedPoint(3,0.06383589);
   ParabolaFunc1023->SetSavedPoint(4,0.06510083);
   ParabolaFunc1023->SetSavedPoint(5,0.06633149);
   ParabolaFunc1023->SetSavedPoint(6,0.06752788);
   ParabolaFunc1023->SetSavedPoint(7,0.06869);
   ParabolaFunc1023->SetSavedPoint(8,0.06981785);
   ParabolaFunc1023->SetSavedPoint(9,0.07091142);
   ParabolaFunc1023->SetSavedPoint(10,0.07197073);
   ParabolaFunc1023->SetSavedPoint(11,0.07299576);
   ParabolaFunc1023->SetSavedPoint(12,0.07398652);
   ParabolaFunc1023->SetSavedPoint(13,0.07494301);
   ParabolaFunc1023->SetSavedPoint(14,0.07586523);
   ParabolaFunc1023->SetSavedPoint(15,0.07675317);
   ParabolaFunc1023->SetSavedPoint(16,0.07760685);
   ParabolaFunc1023->SetSavedPoint(17,0.07842625);
   ParabolaFunc1023->SetSavedPoint(18,0.07921138);
   ParabolaFunc1023->SetSavedPoint(19,0.07996224);
   ParabolaFunc1023->SetSavedPoint(20,0.08067883);
   ParabolaFunc1023->SetSavedPoint(21,0.08136114);
   ParabolaFunc1023->SetSavedPoint(22,0.08200919);
   ParabolaFunc1023->SetSavedPoint(23,0.08262296);
   ParabolaFunc1023->SetSavedPoint(24,0.08320246);
   ParabolaFunc1023->SetSavedPoint(25,0.08374768);
   ParabolaFunc1023->SetSavedPoint(26,0.08425864);
   ParabolaFunc1023->SetSavedPoint(27,0.08473533);
   ParabolaFunc1023->SetSavedPoint(28,0.08517774);
   ParabolaFunc1023->SetSavedPoint(29,0.08558588);
   ParabolaFunc1023->SetSavedPoint(30,0.08595975);
   ParabolaFunc1023->SetSavedPoint(31,0.08629935);
   ParabolaFunc1023->SetSavedPoint(32,0.08660467);
   ParabolaFunc1023->SetSavedPoint(33,0.08687573);
   ParabolaFunc1023->SetSavedPoint(34,0.08711251);
   ParabolaFunc1023->SetSavedPoint(35,0.08731502);
   ParabolaFunc1023->SetSavedPoint(36,0.08748326);
   ParabolaFunc1023->SetSavedPoint(37,0.08761722);
   ParabolaFunc1023->SetSavedPoint(38,0.08771692);
   ParabolaFunc1023->SetSavedPoint(39,0.08778234);
   ParabolaFunc1023->SetSavedPoint(40,0.08781349);
   ParabolaFunc1023->SetSavedPoint(41,0.08781037);
   ParabolaFunc1023->SetSavedPoint(42,0.08777298);
   ParabolaFunc1023->SetSavedPoint(43,0.08770132);
   ParabolaFunc1023->SetSavedPoint(44,0.08759538);
   ParabolaFunc1023->SetSavedPoint(45,0.08745518);
   ParabolaFunc1023->SetSavedPoint(46,0.0872807);
   ParabolaFunc1023->SetSavedPoint(47,0.08707195);
   ParabolaFunc1023->SetSavedPoint(48,0.08682892);
   ParabolaFunc1023->SetSavedPoint(49,0.08655163);
   ParabolaFunc1023->SetSavedPoint(50,0.08624006);
   ParabolaFunc1023->SetSavedPoint(51,0.08589423);
   ParabolaFunc1023->SetSavedPoint(52,0.08551412);
   ParabolaFunc1023->SetSavedPoint(53,0.08509974);
   ParabolaFunc1023->SetSavedPoint(54,0.08465108);
   ParabolaFunc1023->SetSavedPoint(55,0.08416816);
   ParabolaFunc1023->SetSavedPoint(56,0.08365096);
   ParabolaFunc1023->SetSavedPoint(57,0.08309949);
   ParabolaFunc1023->SetSavedPoint(58,0.08251375);
   ParabolaFunc1023->SetSavedPoint(59,0.08189374);
   ParabolaFunc1023->SetSavedPoint(60,0.08123946);
   ParabolaFunc1023->SetSavedPoint(61,0.0805509);
   ParabolaFunc1023->SetSavedPoint(62,0.07982808);
   ParabolaFunc1023->SetSavedPoint(63,0.07907098);
   ParabolaFunc1023->SetSavedPoint(64,0.07827961);
   ParabolaFunc1023->SetSavedPoint(65,0.07745397);
   ParabolaFunc1023->SetSavedPoint(66,0.07659405);
   ParabolaFunc1023->SetSavedPoint(67,0.07569987);
   ParabolaFunc1023->SetSavedPoint(68,0.07477141);
   ParabolaFunc1023->SetSavedPoint(69,0.07380868);
   ParabolaFunc1023->SetSavedPoint(70,0.07281168);
   ParabolaFunc1023->SetSavedPoint(71,0.07178041);
   ParabolaFunc1023->SetSavedPoint(72,0.07071486);
   ParabolaFunc1023->SetSavedPoint(73,0.06961504);
   ParabolaFunc1023->SetSavedPoint(74,0.06848096);
   ParabolaFunc1023->SetSavedPoint(75,0.0673126);
   ParabolaFunc1023->SetSavedPoint(76,0.06610996);
   ParabolaFunc1023->SetSavedPoint(77,0.06487306);
   ParabolaFunc1023->SetSavedPoint(78,0.06360189);
   ParabolaFunc1023->SetSavedPoint(79,0.06229644);
   ParabolaFunc1023->SetSavedPoint(80,0.06095672);
   ParabolaFunc1023->SetSavedPoint(81,0.05958273);
   ParabolaFunc1023->SetSavedPoint(82,0.05817447);
   ParabolaFunc1023->SetSavedPoint(83,0.05673193);
   ParabolaFunc1023->SetSavedPoint(84,0.05525513);
   ParabolaFunc1023->SetSavedPoint(85,0.05374405);
   ParabolaFunc1023->SetSavedPoint(86,0.0521987);
   ParabolaFunc1023->SetSavedPoint(87,0.05061908);
   ParabolaFunc1023->SetSavedPoint(88,0.04900519);
   ParabolaFunc1023->SetSavedPoint(89,0.04735702);
   ParabolaFunc1023->SetSavedPoint(90,0.04567459);
   ParabolaFunc1023->SetSavedPoint(91,0.04395788);
   ParabolaFunc1023->SetSavedPoint(92,0.0422069);
   ParabolaFunc1023->SetSavedPoint(93,0.04042165);
   ParabolaFunc1023->SetSavedPoint(94,0.03860213);
   ParabolaFunc1023->SetSavedPoint(95,0.03674833);
   ParabolaFunc1023->SetSavedPoint(96,0.03486026);
   ParabolaFunc1023->SetSavedPoint(97,0.03293792);
   ParabolaFunc1023->SetSavedPoint(98,0.03098131);
   ParabolaFunc1023->SetSavedPoint(99,0.02899043);
   ParabolaFunc1023->SetSavedPoint(100,0.02696528);
   ParabolaFunc1023->SetSavedPoint(101,750);
   ParabolaFunc1023->SetSavedPoint(102,2500);
   ParabolaFunc1023->SetFillColor(19);
   ParabolaFunc1023->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1023->SetLineColor(ci);
   ParabolaFunc1023->SetLineWidth(3);
   ParabolaFunc1023->SetChisquare(0.9279373);
   ParabolaFunc1023->SetNDF(4);
   ParabolaFunc1023->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1023->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1023->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1023->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1023->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1023->SetParameter(0,-5.595389e-08);
   ParabolaFunc1023->SetParError(0,2.416525e-08);
   ParabolaFunc1023->SetParLimits(0,0,0);
   ParabolaFunc1023->SetParameter(1,0.0001630672);
   ParabolaFunc1023->SetParError(1,8.006433e-05);
   ParabolaFunc1023->SetParLimits(1,0,0);
   ParabolaFunc1023->SetParameter(2,-0.03099087);
   ParabolaFunc1023->SetParError(2,0.06326218);
   ParabolaFunc1023->SetParLimits(2,0,0);
   ParabolaFunc1023->Draw("SAME");
   
   TLegend *leg = new TLegend(0.15,0.79,0.86,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("trackReco","Sim: reco vertices","lpf");
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
   
   TPaveText *pt = new TPaveText(0.15,0.2,0.4,0.45,"brNDC");
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
   pt_LaTex = pt->AddText("0.232
");
   pt_LaTex = pt->AddText("(-6#pm2)#times10^{-8}");
   pt_LaTex = pt->AddText("(1.6#pm0.8)#times10^{-5}");
   pt_LaTex = pt->AddText("-0.03
#pm0.06
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
