void RecoVertexFit_S0()
{
//=========Macro generated from canvas: S0/c
//=========  (Wed Apr 20 00:05:55 2022) by ROOT version 6.24/06
   TCanvas *S0 = new TCanvas("S0", "c",0,0,800,600);
   S0->SetHighLightColor(2);
   S0->Range(466.8431,-0.03875,3026.835,0.14875);
   S0->SetFillColor(0);
   S0->SetBorderMode(0);
   S0->SetBorderSize(2);
   S0->SetFrameBorderMode(0);
   S0->SetFrameBorderMode(0);
   
   Double_t S0_trackReco_fx1003[11] = {
   451.6469,
   653.2585,
   879.9235,
   1123.046,
   1371.407,
   1620.72,
   1868.002,
   2116.574,
   2363.173,
   2615.303,
   2789.539};
   Double_t S0_trackReco_fy1003[11] = {
   0.07133706,
   0.07920965,
   0.08561535,
   0.08072794,
   0.1160908,
   0.1037424,
   0.064588,
   0.07023786,
   0.04472647,
   0.03015369,
   -0.03104396};
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
   0.1097207,
   0.03664632,
   0.02120576,
   0.01741717,
   0.01590341,
   0.01511422,
   0.01488452,
   0.01529449,
   0.01583214,
   0.01573763,
   0.03364151};
   TGraphErrors *gre = new TGraphErrors(11,S0_trackReco_fx1003,S0_trackReco_fy1003,S0_trackReco_fex1003,S0_trackReco_fey1003);
   gre->SetName("S0_trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_trackReco1003 = new TH1F("Graph_S0_trackReco1003","",100,217.8577,3023.328);
   Graph_S0_trackReco1003->SetMinimum(-0.02);
   Graph_S0_trackReco1003->SetMaximum(0.13);
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
   DilutionFunc1004->SetSavedPoint(0,0.1085116);
   DilutionFunc1004->SetSavedPoint(1,0.1081974);
   DilutionFunc1004->SetSavedPoint(2,0.1078741);
   DilutionFunc1004->SetSavedPoint(3,0.1075414);
   DilutionFunc1004->SetSavedPoint(4,0.1071995);
   DilutionFunc1004->SetSavedPoint(5,0.1068482);
   DilutionFunc1004->SetSavedPoint(6,0.1064875);
   DilutionFunc1004->SetSavedPoint(7,0.1061174);
   DilutionFunc1004->SetSavedPoint(8,0.1057378);
   DilutionFunc1004->SetSavedPoint(9,0.1053486);
   DilutionFunc1004->SetSavedPoint(10,0.1049499);
   DilutionFunc1004->SetSavedPoint(11,0.1045415);
   DilutionFunc1004->SetSavedPoint(12,0.1041234);
   DilutionFunc1004->SetSavedPoint(13,0.1036955);
   DilutionFunc1004->SetSavedPoint(14,0.1032579);
   DilutionFunc1004->SetSavedPoint(15,0.1028105);
   DilutionFunc1004->SetSavedPoint(16,0.1023531);
   DilutionFunc1004->SetSavedPoint(17,0.1018859);
   DilutionFunc1004->SetSavedPoint(18,0.1014086);
   DilutionFunc1004->SetSavedPoint(19,0.1009214);
   DilutionFunc1004->SetSavedPoint(20,0.100424);
   DilutionFunc1004->SetSavedPoint(21,0.09991659);
   DilutionFunc1004->SetSavedPoint(22,0.09939896);
   DilutionFunc1004->SetSavedPoint(23,0.09887111);
   DilutionFunc1004->SetSavedPoint(24,0.098333);
   DilutionFunc1004->SetSavedPoint(25,0.09778457);
   DilutionFunc1004->SetSavedPoint(26,0.09722577);
   DilutionFunc1004->SetSavedPoint(27,0.09665656);
   DilutionFunc1004->SetSavedPoint(28,0.0960769);
   DilutionFunc1004->SetSavedPoint(29,0.09548673);
   DilutionFunc1004->SetSavedPoint(30,0.094886);
   DilutionFunc1004->SetSavedPoint(31,0.09427466);
   DilutionFunc1004->SetSavedPoint(32,0.09365267);
   DilutionFunc1004->SetSavedPoint(33,0.09301999);
   DilutionFunc1004->SetSavedPoint(34,0.09237655);
   DilutionFunc1004->SetSavedPoint(35,0.09172232);
   DilutionFunc1004->SetSavedPoint(36,0.09105724);
   DilutionFunc1004->SetSavedPoint(37,0.09038126);
   DilutionFunc1004->SetSavedPoint(38,0.08969435);
   DilutionFunc1004->SetSavedPoint(39,0.08899645);
   DilutionFunc1004->SetSavedPoint(40,0.08828751);
   DilutionFunc1004->SetSavedPoint(41,0.08756748);
   DilutionFunc1004->SetSavedPoint(42,0.08683632);
   DilutionFunc1004->SetSavedPoint(43,0.08609397);
   DilutionFunc1004->SetSavedPoint(44,0.08534039);
   DilutionFunc1004->SetSavedPoint(45,0.08457554);
   DilutionFunc1004->SetSavedPoint(46,0.08379936);
   DilutionFunc1004->SetSavedPoint(47,0.0830118);
   DilutionFunc1004->SetSavedPoint(48,0.08221282);
   DilutionFunc1004->SetSavedPoint(49,0.08140237);
   DilutionFunc1004->SetSavedPoint(50,0.0805804);
   DilutionFunc1004->SetSavedPoint(51,0.07974686);
   DilutionFunc1004->SetSavedPoint(52,0.0789017);
   DilutionFunc1004->SetSavedPoint(53,0.07804488);
   DilutionFunc1004->SetSavedPoint(54,0.07717635);
   DilutionFunc1004->SetSavedPoint(55,0.07629605);
   DilutionFunc1004->SetSavedPoint(56,0.07540395);
   DilutionFunc1004->SetSavedPoint(57,0.07449999);
   DilutionFunc1004->SetSavedPoint(58,0.07358412);
   DilutionFunc1004->SetSavedPoint(59,0.0726563);
   DilutionFunc1004->SetSavedPoint(60,0.07171648);
   DilutionFunc1004->SetSavedPoint(61,0.07076461);
   DilutionFunc1004->SetSavedPoint(62,0.06980064);
   DilutionFunc1004->SetSavedPoint(63,0.06882453);
   DilutionFunc1004->SetSavedPoint(64,0.06783622);
   DilutionFunc1004->SetSavedPoint(65,0.06683567);
   DilutionFunc1004->SetSavedPoint(66,0.06582283);
   DilutionFunc1004->SetSavedPoint(67,0.06479764);
   DilutionFunc1004->SetSavedPoint(68,0.06376008);
   DilutionFunc1004->SetSavedPoint(69,0.06271007);
   DilutionFunc1004->SetSavedPoint(70,0.06164758);
   DilutionFunc1004->SetSavedPoint(71,0.06057256);
   DilutionFunc1004->SetSavedPoint(72,0.05948496);
   DilutionFunc1004->SetSavedPoint(73,0.05838474);
   DilutionFunc1004->SetSavedPoint(74,0.05727183);
   DilutionFunc1004->SetSavedPoint(75,0.05614621);
   DilutionFunc1004->SetSavedPoint(76,0.0550078);
   DilutionFunc1004->SetSavedPoint(77,0.05385658);
   DilutionFunc1004->SetSavedPoint(78,0.05269249);
   DilutionFunc1004->SetSavedPoint(79,0.05151548);
   DilutionFunc1004->SetSavedPoint(80,0.05032551);
   DilutionFunc1004->SetSavedPoint(81,0.04912252);
   DilutionFunc1004->SetSavedPoint(82,0.04790648);
   DilutionFunc1004->SetSavedPoint(83,0.04667732);
   DilutionFunc1004->SetSavedPoint(84,0.045435);
   DilutionFunc1004->SetSavedPoint(85,0.04417948);
   DilutionFunc1004->SetSavedPoint(86,0.0429107);
   DilutionFunc1004->SetSavedPoint(87,0.04162862);
   DilutionFunc1004->SetSavedPoint(88,0.04033319);
   DilutionFunc1004->SetSavedPoint(89,0.03902436);
   DilutionFunc1004->SetSavedPoint(90,0.03770208);
   DilutionFunc1004->SetSavedPoint(91,0.03636631);
   DilutionFunc1004->SetSavedPoint(92,0.035017);
   DilutionFunc1004->SetSavedPoint(93,0.03365409);
   DilutionFunc1004->SetSavedPoint(94,0.03227754);
   DilutionFunc1004->SetSavedPoint(95,0.0308873);
   DilutionFunc1004->SetSavedPoint(96,0.02948333);
   DilutionFunc1004->SetSavedPoint(97,0.02806557);
   DilutionFunc1004->SetSavedPoint(98,0.02663399);
   DilutionFunc1004->SetSavedPoint(99,0.02518852);
   DilutionFunc1004->SetSavedPoint(100,0.02372912);
   DilutionFunc1004->SetSavedPoint(101,750);
   DilutionFunc1004->SetSavedPoint(102,2750);
   DilutionFunc1004->SetFillColor(19);
   DilutionFunc1004->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1004->SetLineColor(ci);
   DilutionFunc1004->SetLineWidth(3);
   DilutionFunc1004->SetChisquare(6.502313);
   DilutionFunc1004->SetNDF(6);
   DilutionFunc1004->GetXaxis()->SetLabelFont(42);
   DilutionFunc1004->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1004->GetXaxis()->SetTitleFont(42);
   DilutionFunc1004->GetYaxis()->SetLabelFont(42);
   DilutionFunc1004->GetYaxis()->SetTitleFont(42);
   DilutionFunc1004->SetParameter(0,0.1141044);
   DilutionFunc1004->SetParError(0,0.01135217);
   DilutionFunc1004->SetParLimits(0,0,0);
   DilutionFunc1004->SetParameter(1,-0.0001638489);
   DilutionFunc1004->SetParError(1,1.230574e-05);
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
   DilutionFunc1005->SetSavedPoint(0,0.1085116);
   DilutionFunc1005->SetSavedPoint(1,0.1081974);
   DilutionFunc1005->SetSavedPoint(2,0.1078741);
   DilutionFunc1005->SetSavedPoint(3,0.1075414);
   DilutionFunc1005->SetSavedPoint(4,0.1071995);
   DilutionFunc1005->SetSavedPoint(5,0.1068482);
   DilutionFunc1005->SetSavedPoint(6,0.1064875);
   DilutionFunc1005->SetSavedPoint(7,0.1061174);
   DilutionFunc1005->SetSavedPoint(8,0.1057378);
   DilutionFunc1005->SetSavedPoint(9,0.1053486);
   DilutionFunc1005->SetSavedPoint(10,0.1049499);
   DilutionFunc1005->SetSavedPoint(11,0.1045415);
   DilutionFunc1005->SetSavedPoint(12,0.1041234);
   DilutionFunc1005->SetSavedPoint(13,0.1036955);
   DilutionFunc1005->SetSavedPoint(14,0.1032579);
   DilutionFunc1005->SetSavedPoint(15,0.1028105);
   DilutionFunc1005->SetSavedPoint(16,0.1023531);
   DilutionFunc1005->SetSavedPoint(17,0.1018859);
   DilutionFunc1005->SetSavedPoint(18,0.1014086);
   DilutionFunc1005->SetSavedPoint(19,0.1009214);
   DilutionFunc1005->SetSavedPoint(20,0.100424);
   DilutionFunc1005->SetSavedPoint(21,0.09991659);
   DilutionFunc1005->SetSavedPoint(22,0.09939896);
   DilutionFunc1005->SetSavedPoint(23,0.09887111);
   DilutionFunc1005->SetSavedPoint(24,0.098333);
   DilutionFunc1005->SetSavedPoint(25,0.09778457);
   DilutionFunc1005->SetSavedPoint(26,0.09722577);
   DilutionFunc1005->SetSavedPoint(27,0.09665656);
   DilutionFunc1005->SetSavedPoint(28,0.0960769);
   DilutionFunc1005->SetSavedPoint(29,0.09548673);
   DilutionFunc1005->SetSavedPoint(30,0.094886);
   DilutionFunc1005->SetSavedPoint(31,0.09427466);
   DilutionFunc1005->SetSavedPoint(32,0.09365267);
   DilutionFunc1005->SetSavedPoint(33,0.09301999);
   DilutionFunc1005->SetSavedPoint(34,0.09237655);
   DilutionFunc1005->SetSavedPoint(35,0.09172232);
   DilutionFunc1005->SetSavedPoint(36,0.09105724);
   DilutionFunc1005->SetSavedPoint(37,0.09038126);
   DilutionFunc1005->SetSavedPoint(38,0.08969435);
   DilutionFunc1005->SetSavedPoint(39,0.08899645);
   DilutionFunc1005->SetSavedPoint(40,0.08828751);
   DilutionFunc1005->SetSavedPoint(41,0.08756748);
   DilutionFunc1005->SetSavedPoint(42,0.08683632);
   DilutionFunc1005->SetSavedPoint(43,0.08609397);
   DilutionFunc1005->SetSavedPoint(44,0.08534039);
   DilutionFunc1005->SetSavedPoint(45,0.08457554);
   DilutionFunc1005->SetSavedPoint(46,0.08379936);
   DilutionFunc1005->SetSavedPoint(47,0.0830118);
   DilutionFunc1005->SetSavedPoint(48,0.08221282);
   DilutionFunc1005->SetSavedPoint(49,0.08140237);
   DilutionFunc1005->SetSavedPoint(50,0.0805804);
   DilutionFunc1005->SetSavedPoint(51,0.07974686);
   DilutionFunc1005->SetSavedPoint(52,0.0789017);
   DilutionFunc1005->SetSavedPoint(53,0.07804488);
   DilutionFunc1005->SetSavedPoint(54,0.07717635);
   DilutionFunc1005->SetSavedPoint(55,0.07629605);
   DilutionFunc1005->SetSavedPoint(56,0.07540395);
   DilutionFunc1005->SetSavedPoint(57,0.07449999);
   DilutionFunc1005->SetSavedPoint(58,0.07358412);
   DilutionFunc1005->SetSavedPoint(59,0.0726563);
   DilutionFunc1005->SetSavedPoint(60,0.07171648);
   DilutionFunc1005->SetSavedPoint(61,0.07076461);
   DilutionFunc1005->SetSavedPoint(62,0.06980064);
   DilutionFunc1005->SetSavedPoint(63,0.06882453);
   DilutionFunc1005->SetSavedPoint(64,0.06783622);
   DilutionFunc1005->SetSavedPoint(65,0.06683567);
   DilutionFunc1005->SetSavedPoint(66,0.06582283);
   DilutionFunc1005->SetSavedPoint(67,0.06479764);
   DilutionFunc1005->SetSavedPoint(68,0.06376008);
   DilutionFunc1005->SetSavedPoint(69,0.06271007);
   DilutionFunc1005->SetSavedPoint(70,0.06164758);
   DilutionFunc1005->SetSavedPoint(71,0.06057256);
   DilutionFunc1005->SetSavedPoint(72,0.05948496);
   DilutionFunc1005->SetSavedPoint(73,0.05838474);
   DilutionFunc1005->SetSavedPoint(74,0.05727183);
   DilutionFunc1005->SetSavedPoint(75,0.05614621);
   DilutionFunc1005->SetSavedPoint(76,0.0550078);
   DilutionFunc1005->SetSavedPoint(77,0.05385658);
   DilutionFunc1005->SetSavedPoint(78,0.05269249);
   DilutionFunc1005->SetSavedPoint(79,0.05151548);
   DilutionFunc1005->SetSavedPoint(80,0.05032551);
   DilutionFunc1005->SetSavedPoint(81,0.04912252);
   DilutionFunc1005->SetSavedPoint(82,0.04790648);
   DilutionFunc1005->SetSavedPoint(83,0.04667732);
   DilutionFunc1005->SetSavedPoint(84,0.045435);
   DilutionFunc1005->SetSavedPoint(85,0.04417948);
   DilutionFunc1005->SetSavedPoint(86,0.0429107);
   DilutionFunc1005->SetSavedPoint(87,0.04162862);
   DilutionFunc1005->SetSavedPoint(88,0.04033319);
   DilutionFunc1005->SetSavedPoint(89,0.03902436);
   DilutionFunc1005->SetSavedPoint(90,0.03770208);
   DilutionFunc1005->SetSavedPoint(91,0.03636631);
   DilutionFunc1005->SetSavedPoint(92,0.035017);
   DilutionFunc1005->SetSavedPoint(93,0.03365409);
   DilutionFunc1005->SetSavedPoint(94,0.03227754);
   DilutionFunc1005->SetSavedPoint(95,0.0308873);
   DilutionFunc1005->SetSavedPoint(96,0.02948333);
   DilutionFunc1005->SetSavedPoint(97,0.02806557);
   DilutionFunc1005->SetSavedPoint(98,0.02663399);
   DilutionFunc1005->SetSavedPoint(99,0.02518852);
   DilutionFunc1005->SetSavedPoint(100,0.02372912);
   DilutionFunc1005->SetSavedPoint(101,750);
   DilutionFunc1005->SetSavedPoint(102,2750);
   DilutionFunc1005->SetFillColor(19);
   DilutionFunc1005->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1005->SetLineColor(ci);
   DilutionFunc1005->SetLineWidth(3);
   DilutionFunc1005->SetChisquare(6.502313);
   DilutionFunc1005->SetNDF(6);
   DilutionFunc1005->GetXaxis()->SetLabelFont(42);
   DilutionFunc1005->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1005->GetXaxis()->SetTitleFont(42);
   DilutionFunc1005->GetYaxis()->SetLabelFont(42);
   DilutionFunc1005->GetYaxis()->SetTitleFont(42);
   DilutionFunc1005->SetParameter(0,0.1141044);
   DilutionFunc1005->SetParError(0,0.01135217);
   DilutionFunc1005->SetParLimits(0,0,0);
   DilutionFunc1005->SetParameter(1,-0.0001638489);
   DilutionFunc1005->SetParError(1,1.230574e-05);
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
   pt_LaTex = pt->AddText("b [MeV^{-1}]");
   pt->Draw();
   
   pt = new TPaveText(0.4,0.2,0.55,0.45,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("1.08
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
