void RecoVertexFit_S12()
{
//=========Macro generated from canvas: S12/c
//=========  (Tue Mar 22 09:46:12 2022) by ROOT version 6.24/06
   TCanvas *S12 = new TCanvas("S12", "c",0,0,800,600);
   S12->SetHighLightColor(2);
   S12->Range(467.0175,-0.03875,3024.803,0.14875);
   S12->SetFillColor(0);
   S12->SetBorderMode(0);
   S12->SetBorderSize(2);
   S12->SetFrameBorderMode(0);
   S12->SetFrameBorderMode(0);
   
   Double_t S12_trackReco_fx1007[11] = {
   451.8343,
   653.3487,
   880.3346,
   1123.176,
   1371.112,
   1620.329,
   1866.848,
   2115.055,
   2362.648,
   2614.356,
   2787.711};
   Double_t S12_trackReco_fy1007[11] = {
   0.02741147,
   0.05552952,
   0.05575516,
   0.07577948,
   0.06732983,
   0.08688915,
   0.08298302,
   0.07238019,
   0.03925157,
   0.044065,
   0.01883815};
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
   0.07448614,
   0.02500426,
   0.01438454,
   0.01182759,
   0.01079981,
   0.01025431,
   0.01031118,
   0.01091718,
   0.01175811,
   0.01168737,
   0.02673634};
   TGraphErrors *gre = new TGraphErrors(11,S12_trackReco_fx1007,S12_trackReco_fy1007,S12_trackReco_fex1007,S12_trackReco_fey1007);
   gre->SetName("S12_trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_trackReco1007 = new TH1F("Graph_S12_trackReco1007","",100,218.2466,3021.299);
   Graph_S12_trackReco1007->SetMinimum(-0.02);
   Graph_S12_trackReco1007->SetMaximum(0.13);
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
   DilutionFunc1008->SetSavedPoint(0,0.08156982);
   DilutionFunc1008->SetSavedPoint(1,0.08143284);
   DilutionFunc1008->SetSavedPoint(2,0.08129192);
   DilutionFunc1008->SetSavedPoint(3,0.08114705);
   DilutionFunc1008->SetSavedPoint(4,0.08099821);
   DilutionFunc1008->SetSavedPoint(5,0.0808454);
   DilutionFunc1008->SetSavedPoint(6,0.08068858);
   DilutionFunc1008->SetSavedPoint(7,0.08052775);
   DilutionFunc1008->SetSavedPoint(8,0.08036289);
   DilutionFunc1008->SetSavedPoint(9,0.08019397);
   DilutionFunc1008->SetSavedPoint(10,0.08002099);
   DilutionFunc1008->SetSavedPoint(11,0.07984393);
   DilutionFunc1008->SetSavedPoint(12,0.07966277);
   DilutionFunc1008->SetSavedPoint(13,0.07947749);
   DilutionFunc1008->SetSavedPoint(14,0.07928807);
   DilutionFunc1008->SetSavedPoint(15,0.07909451);
   DilutionFunc1008->SetSavedPoint(16,0.07889678);
   DilutionFunc1008->SetSavedPoint(17,0.07869486);
   DilutionFunc1008->SetSavedPoint(18,0.07848875);
   DilutionFunc1008->SetSavedPoint(19,0.07827842);
   DilutionFunc1008->SetSavedPoint(20,0.07806385);
   DilutionFunc1008->SetSavedPoint(21,0.07784503);
   DilutionFunc1008->SetSavedPoint(22,0.07762195);
   DilutionFunc1008->SetSavedPoint(23,0.07739458);
   DilutionFunc1008->SetSavedPoint(24,0.07716291);
   DilutionFunc1008->SetSavedPoint(25,0.07692692);
   DilutionFunc1008->SetSavedPoint(26,0.07668659);
   DilutionFunc1008->SetSavedPoint(27,0.07644192);
   DilutionFunc1008->SetSavedPoint(28,0.07619288);
   DilutionFunc1008->SetSavedPoint(29,0.07593945);
   DilutionFunc1008->SetSavedPoint(30,0.07568162);
   DilutionFunc1008->SetSavedPoint(31,0.07541937);
   DilutionFunc1008->SetSavedPoint(32,0.07515268);
   DilutionFunc1008->SetSavedPoint(33,0.07488155);
   DilutionFunc1008->SetSavedPoint(34,0.07460594);
   DilutionFunc1008->SetSavedPoint(35,0.07432585);
   DilutionFunc1008->SetSavedPoint(36,0.07404125);
   DilutionFunc1008->SetSavedPoint(37,0.07375214);
   DilutionFunc1008->SetSavedPoint(38,0.07345849);
   DilutionFunc1008->SetSavedPoint(39,0.07316029);
   DilutionFunc1008->SetSavedPoint(40,0.07285752);
   DilutionFunc1008->SetSavedPoint(41,0.07255016);
   DilutionFunc1008->SetSavedPoint(42,0.07223819);
   DilutionFunc1008->SetSavedPoint(43,0.07192161);
   DilutionFunc1008->SetSavedPoint(44,0.07160039);
   DilutionFunc1008->SetSavedPoint(45,0.07127452);
   DilutionFunc1008->SetSavedPoint(46,0.07094398);
   DilutionFunc1008->SetSavedPoint(47,0.07060875);
   DilutionFunc1008->SetSavedPoint(48,0.07026881);
   DilutionFunc1008->SetSavedPoint(49,0.06992416);
   DilutionFunc1008->SetSavedPoint(50,0.06957477);
   DilutionFunc1008->SetSavedPoint(51,0.06922062);
   DilutionFunc1008->SetSavedPoint(52,0.0688617);
   DilutionFunc1008->SetSavedPoint(53,0.068498);
   DilutionFunc1008->SetSavedPoint(54,0.06812949);
   DilutionFunc1008->SetSavedPoint(55,0.06775615);
   DilutionFunc1008->SetSavedPoint(56,0.06737798);
   DilutionFunc1008->SetSavedPoint(57,0.06699496);
   DilutionFunc1008->SetSavedPoint(58,0.06660706);
   DilutionFunc1008->SetSavedPoint(59,0.06621428);
   DilutionFunc1008->SetSavedPoint(60,0.06581659);
   DilutionFunc1008->SetSavedPoint(61,0.06541398);
   DilutionFunc1008->SetSavedPoint(62,0.06500643);
   DilutionFunc1008->SetSavedPoint(63,0.06459392);
   DilutionFunc1008->SetSavedPoint(64,0.06417644);
   DilutionFunc1008->SetSavedPoint(65,0.06375397);
   DilutionFunc1008->SetSavedPoint(66,0.0633265);
   DilutionFunc1008->SetSavedPoint(67,0.062894);
   DilutionFunc1008->SetSavedPoint(68,0.06245646);
   DilutionFunc1008->SetSavedPoint(69,0.06201387);
   DilutionFunc1008->SetSavedPoint(70,0.06156621);
   DilutionFunc1008->SetSavedPoint(71,0.06111345);
   DilutionFunc1008->SetSavedPoint(72,0.06065559);
   DilutionFunc1008->SetSavedPoint(73,0.0601926);
   DilutionFunc1008->SetSavedPoint(74,0.05972448);
   DilutionFunc1008->SetSavedPoint(75,0.05925119);
   DilutionFunc1008->SetSavedPoint(76,0.05877274);
   DilutionFunc1008->SetSavedPoint(77,0.05828909);
   DilutionFunc1008->SetSavedPoint(78,0.05780024);
   DilutionFunc1008->SetSavedPoint(79,0.05730616);
   DilutionFunc1008->SetSavedPoint(80,0.05680684);
   DilutionFunc1008->SetSavedPoint(81,0.05630226);
   DilutionFunc1008->SetSavedPoint(82,0.05579241);
   DilutionFunc1008->SetSavedPoint(83,0.05527727);
   DilutionFunc1008->SetSavedPoint(84,0.05475682);
   DilutionFunc1008->SetSavedPoint(85,0.05423104);
   DilutionFunc1008->SetSavedPoint(86,0.05369992);
   DilutionFunc1008->SetSavedPoint(87,0.05316345);
   DilutionFunc1008->SetSavedPoint(88,0.0526216);
   DilutionFunc1008->SetSavedPoint(89,0.05207436);
   DilutionFunc1008->SetSavedPoint(90,0.0515217);
   DilutionFunc1008->SetSavedPoint(91,0.05096363);
   DilutionFunc1008->SetSavedPoint(92,0.05040011);
   DilutionFunc1008->SetSavedPoint(93,0.04983113);
   DilutionFunc1008->SetSavedPoint(94,0.04925668);
   DilutionFunc1008->SetSavedPoint(95,0.04867673);
   DilutionFunc1008->SetSavedPoint(96,0.04809128);
   DilutionFunc1008->SetSavedPoint(97,0.0475003);
   DilutionFunc1008->SetSavedPoint(98,0.04690377);
   DilutionFunc1008->SetSavedPoint(99,0.04630169);
   DilutionFunc1008->SetSavedPoint(100,0.04569403);
   DilutionFunc1008->SetSavedPoint(101,750);
   DilutionFunc1008->SetSavedPoint(102,2750);
   DilutionFunc1008->SetFillColor(19);
   DilutionFunc1008->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1008->SetLineColor(ci);
   DilutionFunc1008->SetLineWidth(3);
   DilutionFunc1008->SetChisquare(11.26855);
   DilutionFunc1008->SetNDF(6);
   DilutionFunc1008->GetXaxis()->SetLabelFont(42);
   DilutionFunc1008->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1008->GetXaxis()->SetTitleFont(42);
   DilutionFunc1008->GetYaxis()->SetLabelFont(42);
   DilutionFunc1008->GetYaxis()->SetTitleFont(42);
   DilutionFunc1008->SetParameter(0,0.08402784);
   DilutionFunc1008->SetParError(0,0.007898339);
   DilutionFunc1008->SetParLimits(0,0,0);
   DilutionFunc1008->SetParameter(1,-0.0001276509);
   DilutionFunc1008->SetParError(1,1.972742e-05);
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
   DilutionFunc1009->SetSavedPoint(0,0.08156982);
   DilutionFunc1009->SetSavedPoint(1,0.08143284);
   DilutionFunc1009->SetSavedPoint(2,0.08129192);
   DilutionFunc1009->SetSavedPoint(3,0.08114705);
   DilutionFunc1009->SetSavedPoint(4,0.08099821);
   DilutionFunc1009->SetSavedPoint(5,0.0808454);
   DilutionFunc1009->SetSavedPoint(6,0.08068858);
   DilutionFunc1009->SetSavedPoint(7,0.08052775);
   DilutionFunc1009->SetSavedPoint(8,0.08036289);
   DilutionFunc1009->SetSavedPoint(9,0.08019397);
   DilutionFunc1009->SetSavedPoint(10,0.08002099);
   DilutionFunc1009->SetSavedPoint(11,0.07984393);
   DilutionFunc1009->SetSavedPoint(12,0.07966277);
   DilutionFunc1009->SetSavedPoint(13,0.07947749);
   DilutionFunc1009->SetSavedPoint(14,0.07928807);
   DilutionFunc1009->SetSavedPoint(15,0.07909451);
   DilutionFunc1009->SetSavedPoint(16,0.07889678);
   DilutionFunc1009->SetSavedPoint(17,0.07869486);
   DilutionFunc1009->SetSavedPoint(18,0.07848875);
   DilutionFunc1009->SetSavedPoint(19,0.07827842);
   DilutionFunc1009->SetSavedPoint(20,0.07806385);
   DilutionFunc1009->SetSavedPoint(21,0.07784503);
   DilutionFunc1009->SetSavedPoint(22,0.07762195);
   DilutionFunc1009->SetSavedPoint(23,0.07739458);
   DilutionFunc1009->SetSavedPoint(24,0.07716291);
   DilutionFunc1009->SetSavedPoint(25,0.07692692);
   DilutionFunc1009->SetSavedPoint(26,0.07668659);
   DilutionFunc1009->SetSavedPoint(27,0.07644192);
   DilutionFunc1009->SetSavedPoint(28,0.07619288);
   DilutionFunc1009->SetSavedPoint(29,0.07593945);
   DilutionFunc1009->SetSavedPoint(30,0.07568162);
   DilutionFunc1009->SetSavedPoint(31,0.07541937);
   DilutionFunc1009->SetSavedPoint(32,0.07515268);
   DilutionFunc1009->SetSavedPoint(33,0.07488155);
   DilutionFunc1009->SetSavedPoint(34,0.07460594);
   DilutionFunc1009->SetSavedPoint(35,0.07432585);
   DilutionFunc1009->SetSavedPoint(36,0.07404125);
   DilutionFunc1009->SetSavedPoint(37,0.07375214);
   DilutionFunc1009->SetSavedPoint(38,0.07345849);
   DilutionFunc1009->SetSavedPoint(39,0.07316029);
   DilutionFunc1009->SetSavedPoint(40,0.07285752);
   DilutionFunc1009->SetSavedPoint(41,0.07255016);
   DilutionFunc1009->SetSavedPoint(42,0.07223819);
   DilutionFunc1009->SetSavedPoint(43,0.07192161);
   DilutionFunc1009->SetSavedPoint(44,0.07160039);
   DilutionFunc1009->SetSavedPoint(45,0.07127452);
   DilutionFunc1009->SetSavedPoint(46,0.07094398);
   DilutionFunc1009->SetSavedPoint(47,0.07060875);
   DilutionFunc1009->SetSavedPoint(48,0.07026881);
   DilutionFunc1009->SetSavedPoint(49,0.06992416);
   DilutionFunc1009->SetSavedPoint(50,0.06957477);
   DilutionFunc1009->SetSavedPoint(51,0.06922062);
   DilutionFunc1009->SetSavedPoint(52,0.0688617);
   DilutionFunc1009->SetSavedPoint(53,0.068498);
   DilutionFunc1009->SetSavedPoint(54,0.06812949);
   DilutionFunc1009->SetSavedPoint(55,0.06775615);
   DilutionFunc1009->SetSavedPoint(56,0.06737798);
   DilutionFunc1009->SetSavedPoint(57,0.06699496);
   DilutionFunc1009->SetSavedPoint(58,0.06660706);
   DilutionFunc1009->SetSavedPoint(59,0.06621428);
   DilutionFunc1009->SetSavedPoint(60,0.06581659);
   DilutionFunc1009->SetSavedPoint(61,0.06541398);
   DilutionFunc1009->SetSavedPoint(62,0.06500643);
   DilutionFunc1009->SetSavedPoint(63,0.06459392);
   DilutionFunc1009->SetSavedPoint(64,0.06417644);
   DilutionFunc1009->SetSavedPoint(65,0.06375397);
   DilutionFunc1009->SetSavedPoint(66,0.0633265);
   DilutionFunc1009->SetSavedPoint(67,0.062894);
   DilutionFunc1009->SetSavedPoint(68,0.06245646);
   DilutionFunc1009->SetSavedPoint(69,0.06201387);
   DilutionFunc1009->SetSavedPoint(70,0.06156621);
   DilutionFunc1009->SetSavedPoint(71,0.06111345);
   DilutionFunc1009->SetSavedPoint(72,0.06065559);
   DilutionFunc1009->SetSavedPoint(73,0.0601926);
   DilutionFunc1009->SetSavedPoint(74,0.05972448);
   DilutionFunc1009->SetSavedPoint(75,0.05925119);
   DilutionFunc1009->SetSavedPoint(76,0.05877274);
   DilutionFunc1009->SetSavedPoint(77,0.05828909);
   DilutionFunc1009->SetSavedPoint(78,0.05780024);
   DilutionFunc1009->SetSavedPoint(79,0.05730616);
   DilutionFunc1009->SetSavedPoint(80,0.05680684);
   DilutionFunc1009->SetSavedPoint(81,0.05630226);
   DilutionFunc1009->SetSavedPoint(82,0.05579241);
   DilutionFunc1009->SetSavedPoint(83,0.05527727);
   DilutionFunc1009->SetSavedPoint(84,0.05475682);
   DilutionFunc1009->SetSavedPoint(85,0.05423104);
   DilutionFunc1009->SetSavedPoint(86,0.05369992);
   DilutionFunc1009->SetSavedPoint(87,0.05316345);
   DilutionFunc1009->SetSavedPoint(88,0.0526216);
   DilutionFunc1009->SetSavedPoint(89,0.05207436);
   DilutionFunc1009->SetSavedPoint(90,0.0515217);
   DilutionFunc1009->SetSavedPoint(91,0.05096363);
   DilutionFunc1009->SetSavedPoint(92,0.05040011);
   DilutionFunc1009->SetSavedPoint(93,0.04983113);
   DilutionFunc1009->SetSavedPoint(94,0.04925668);
   DilutionFunc1009->SetSavedPoint(95,0.04867673);
   DilutionFunc1009->SetSavedPoint(96,0.04809128);
   DilutionFunc1009->SetSavedPoint(97,0.0475003);
   DilutionFunc1009->SetSavedPoint(98,0.04690377);
   DilutionFunc1009->SetSavedPoint(99,0.04630169);
   DilutionFunc1009->SetSavedPoint(100,0.04569403);
   DilutionFunc1009->SetSavedPoint(101,750);
   DilutionFunc1009->SetSavedPoint(102,2750);
   DilutionFunc1009->SetFillColor(19);
   DilutionFunc1009->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1009->SetLineColor(ci);
   DilutionFunc1009->SetLineWidth(3);
   DilutionFunc1009->SetChisquare(11.26855);
   DilutionFunc1009->SetNDF(6);
   DilutionFunc1009->GetXaxis()->SetLabelFont(42);
   DilutionFunc1009->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1009->GetXaxis()->SetTitleFont(42);
   DilutionFunc1009->GetYaxis()->SetLabelFont(42);
   DilutionFunc1009->GetYaxis()->SetTitleFont(42);
   DilutionFunc1009->SetParameter(0,0.08402784);
   DilutionFunc1009->SetParError(0,0.007898339);
   DilutionFunc1009->SetParLimits(0,0,0);
   DilutionFunc1009->SetParameter(1,-0.0001276509);
   DilutionFunc1009->SetParError(1,1.972742e-05);
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
   pt_LaTex = pt->AddText("1.88
");
   pt_LaTex = pt->AddText("0.08
#pm0.008
");
   pt_LaTex = pt->AddText("-0.0001
#pm2e-05
");
   pt->Draw();
   S12->Modified();
   S12->cd();
   S12->SetSelected(S12);
}
