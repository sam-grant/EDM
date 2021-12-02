void RecoVertexFit()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  2 13:56:40 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.5222,-0.015,2741.763,0.135);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t trackReco_fx1022[11] = {
   451.788,
   653.3045,
   880.2744,
   1123.049,
   1371.147,
   1620.244,
   1867.075,
   2115.6,
   2363.041,
   2614.061,
   2788.497};
   Double_t trackReco_fy1022[11] = {
   -0.00966821,
   0.08962262,
   0.07456527,
   0.08291077,
   0.08277196,
   0.08848156,
   0.07888338,
   0.06189772,
   0.03995412,
   0.05663225,
   -0.008615418};
   Double_t trackReco_fex1022[11] = {
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
   Double_t trackReco_fey1022[11] = {
   0.06443398,
   0.02156648,
   0.0124005,
   0.01018395,
   0.00933314,
   0.008881665,
   0.008899678,
   0.009315277,
   0.009894346,
   0.009813133,
   0.02214676};
   TGraphErrors *gre = new TGraphErrors(11,trackReco_fx1022,trackReco_fy1022,trackReco_fex1022,trackReco_fey1022);
   gre->SetName("trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackReco1022 = new TH1F("Graph_trackReco1022","",100,218.1171,3022.168);
   Graph_trackReco1022->SetMinimum(0);
   Graph_trackReco1022->SetMaximum(0.12);
   Graph_trackReco1022->SetDirectory(0);
   Graph_trackReco1022->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_trackReco1022->SetLineColor(ci);
   Graph_trackReco1022->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_trackReco1022->GetXaxis()->SetRange(19,82);
   Graph_trackReco1022->GetXaxis()->CenterTitle(true);
   Graph_trackReco1022->GetXaxis()->SetLabelFont(42);
   Graph_trackReco1022->GetXaxis()->SetTitleSize(0.04);
   Graph_trackReco1022->GetXaxis()->SetTitleOffset(1.1);
   Graph_trackReco1022->GetXaxis()->SetTitleFont(42);
   Graph_trackReco1022->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_trackReco1022->GetYaxis()->CenterTitle(true);
   Graph_trackReco1022->GetYaxis()->SetNdivisions(4000510);
   Graph_trackReco1022->GetYaxis()->SetLabelFont(42);
   Graph_trackReco1022->GetYaxis()->SetTitleSize(0.04);
   Graph_trackReco1022->GetYaxis()->SetTitleOffset(1.15);
   Graph_trackReco1022->GetYaxis()->SetTitleFont(42);
   Graph_trackReco1022->GetZaxis()->SetLabelFont(42);
   Graph_trackReco1022->GetZaxis()->SetTitleOffset(1);
   Graph_trackReco1022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackReco1022);
   
   
   TF1 *ParabolaFunc1023 = new TF1("*ParabolaFunc",750,2500,4);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2500,4, 1, TF1::EAddToList::kNo);
   ParabolaFunc1023->SetRange(750,2500);
   ParabolaFunc1023->SetName("ParabolaFunc");
   ParabolaFunc1023->SetTitle("ParabolaFunc");
   ParabolaFunc1023->SetSavedPoint(0,0.06996734);
   ParabolaFunc1023->SetSavedPoint(1,0.07059688);
   ParabolaFunc1023->SetSavedPoint(2,0.07122265);
   ParabolaFunc1023->SetSavedPoint(3,0.07184407);
   ParabolaFunc1023->SetSavedPoint(4,0.07246056);
   ParabolaFunc1023->SetSavedPoint(5,0.07307155);
   ParabolaFunc1023->SetSavedPoint(6,0.07367645);
   ParabolaFunc1023->SetSavedPoint(7,0.0742747);
   ParabolaFunc1023->SetSavedPoint(8,0.07486571);
   ParabolaFunc1023->SetSavedPoint(9,0.0754489);
   ParabolaFunc1023->SetSavedPoint(10,0.07602369);
   ParabolaFunc1023->SetSavedPoint(11,0.07658952);
   ParabolaFunc1023->SetSavedPoint(12,0.07714579);
   ParabolaFunc1023->SetSavedPoint(13,0.07769193);
   ParabolaFunc1023->SetSavedPoint(14,0.07822737);
   ParabolaFunc1023->SetSavedPoint(15,0.07875152);
   ParabolaFunc1023->SetSavedPoint(16,0.07926382);
   ParabolaFunc1023->SetSavedPoint(17,0.07976366);
   ParabolaFunc1023->SetSavedPoint(18,0.0802505);
   ParabolaFunc1023->SetSavedPoint(19,0.08072373);
   ParabolaFunc1023->SetSavedPoint(20,0.08118279);
   ParabolaFunc1023->SetSavedPoint(21,0.0816271);
   ParabolaFunc1023->SetSavedPoint(22,0.08205607);
   ParabolaFunc1023->SetSavedPoint(23,0.08246914);
   ParabolaFunc1023->SetSavedPoint(24,0.08286572);
   ParabolaFunc1023->SetSavedPoint(25,0.08324524);
   ParabolaFunc1023->SetSavedPoint(26,0.08360711);
   ParabolaFunc1023->SetSavedPoint(27,0.08395076);
   ParabolaFunc1023->SetSavedPoint(28,0.08427562);
   ParabolaFunc1023->SetSavedPoint(29,0.08458109);
   ParabolaFunc1023->SetSavedPoint(30,0.08486662);
   ParabolaFunc1023->SetSavedPoint(31,0.08513161);
   ParabolaFunc1023->SetSavedPoint(32,0.08537548);
   ParabolaFunc1023->SetSavedPoint(33,0.08559767);
   ParabolaFunc1023->SetSavedPoint(34,0.0857976);
   ParabolaFunc1023->SetSavedPoint(35,0.08597467);
   ParabolaFunc1023->SetSavedPoint(36,0.08612833);
   ParabolaFunc1023->SetSavedPoint(37,0.08625798);
   ParabolaFunc1023->SetSavedPoint(38,0.08636306);
   ParabolaFunc1023->SetSavedPoint(39,0.08644298);
   ParabolaFunc1023->SetSavedPoint(40,0.08649716);
   ParabolaFunc1023->SetSavedPoint(41,0.08652503);
   ParabolaFunc1023->SetSavedPoint(42,0.08652601);
   ParabolaFunc1023->SetSavedPoint(43,0.08649952);
   ParabolaFunc1023->SetSavedPoint(44,0.08644498);
   ParabolaFunc1023->SetSavedPoint(45,0.08636182);
   ParabolaFunc1023->SetSavedPoint(46,0.08624945);
   ParabolaFunc1023->SetSavedPoint(47,0.0861073);
   ParabolaFunc1023->SetSavedPoint(48,0.0859348);
   ParabolaFunc1023->SetSavedPoint(49,0.08573136);
   ParabolaFunc1023->SetSavedPoint(50,0.0854964);
   ParabolaFunc1023->SetSavedPoint(51,0.08522935);
   ParabolaFunc1023->SetSavedPoint(52,0.08492963);
   ParabolaFunc1023->SetSavedPoint(53,0.08459665);
   ParabolaFunc1023->SetSavedPoint(54,0.08422986);
   ParabolaFunc1023->SetSavedPoint(55,0.08382865);
   ParabolaFunc1023->SetSavedPoint(56,0.08339247);
   ParabolaFunc1023->SetSavedPoint(57,0.08292072);
   ParabolaFunc1023->SetSavedPoint(58,0.08241283);
   ParabolaFunc1023->SetSavedPoint(59,0.08186822);
   ParabolaFunc1023->SetSavedPoint(60,0.08128632);
   ParabolaFunc1023->SetSavedPoint(61,0.08066655);
   ParabolaFunc1023->SetSavedPoint(62,0.08000833);
   ParabolaFunc1023->SetSavedPoint(63,0.07931107);
   ParabolaFunc1023->SetSavedPoint(64,0.07857421);
   ParabolaFunc1023->SetSavedPoint(65,0.07779717);
   ParabolaFunc1023->SetSavedPoint(66,0.07697936);
   ParabolaFunc1023->SetSavedPoint(67,0.0761202);
   ParabolaFunc1023->SetSavedPoint(68,0.07521913);
   ParabolaFunc1023->SetSavedPoint(69,0.07427556);
   ParabolaFunc1023->SetSavedPoint(70,0.07328892);
   ParabolaFunc1023->SetSavedPoint(71,0.07225862);
   ParabolaFunc1023->SetSavedPoint(72,0.0711841);
   ParabolaFunc1023->SetSavedPoint(73,0.07006476);
   ParabolaFunc1023->SetSavedPoint(74,0.06890003);
   ParabolaFunc1023->SetSavedPoint(75,0.06768934);
   ParabolaFunc1023->SetSavedPoint(76,0.06643211);
   ParabolaFunc1023->SetSavedPoint(77,0.06512775);
   ParabolaFunc1023->SetSavedPoint(78,0.0637757);
   ParabolaFunc1023->SetSavedPoint(79,0.06237536);
   ParabolaFunc1023->SetSavedPoint(80,0.06092617);
   ParabolaFunc1023->SetSavedPoint(81,0.05942755);
   ParabolaFunc1023->SetSavedPoint(82,0.05787892);
   ParabolaFunc1023->SetSavedPoint(83,0.05627969);
   ParabolaFunc1023->SetSavedPoint(84,0.0546293);
   ParabolaFunc1023->SetSavedPoint(85,0.05292717);
   ParabolaFunc1023->SetSavedPoint(86,0.05117271);
   ParabolaFunc1023->SetSavedPoint(87,0.04936534);
   ParabolaFunc1023->SetSavedPoint(88,0.0475045);
   ParabolaFunc1023->SetSavedPoint(89,0.0455896);
   ParabolaFunc1023->SetSavedPoint(90,0.04362007);
   ParabolaFunc1023->SetSavedPoint(91,0.04159532);
   ParabolaFunc1023->SetSavedPoint(92,0.03951478);
   ParabolaFunc1023->SetSavedPoint(93,0.03737787);
   ParabolaFunc1023->SetSavedPoint(94,0.03518401);
   ParabolaFunc1023->SetSavedPoint(95,0.03293262);
   ParabolaFunc1023->SetSavedPoint(96,0.03062314);
   ParabolaFunc1023->SetSavedPoint(97,0.02825497);
   ParabolaFunc1023->SetSavedPoint(98,0.02582754);
   ParabolaFunc1023->SetSavedPoint(99,0.02334027);
   ParabolaFunc1023->SetSavedPoint(100,0.02079259);
   ParabolaFunc1023->SetSavedPoint(101,750);
   ParabolaFunc1023->SetSavedPoint(102,2500);
   ParabolaFunc1023->SetFillColor(19);
   ParabolaFunc1023->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1023->SetLineColor(ci);
   ParabolaFunc1023->SetLineWidth(3);
   ParabolaFunc1023->SetChisquare(0.2899394);
   ParabolaFunc1023->SetNDF(3);
   ParabolaFunc1023->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1023->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1023->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1023->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1023->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1023->SetParameter(0,-1.797519e-11);
   ParabolaFunc1023->SetParError(0,4.512911e-11);
   ParabolaFunc1023->SetParLimits(0,0,0);
   ParabolaFunc1023->SetParameter(1,3.523207e-08);
   ParabolaFunc1023->SetParError(1,2.225188e-07);
   ParabolaFunc1023->SetParLimits(1,0,0);
   ParabolaFunc1023->SetParameter(2,1.355536e-05);
   ParabolaFunc1023->SetParError(2,0.0003504362);
   ParabolaFunc1023->SetParLimits(2,0,0);
   ParabolaFunc1023->SetParameter(3,0.04756606);
   ParabolaFunc1023->SetParError(3,0.1752409);
   ParabolaFunc1023->SetParLimits(3,0,0);
   ParabolaFunc1023->SetParent(gre);
   gre->GetListOfFunctions()->Add(ParabolaFunc1023);
   gre->Draw("ap");
   
   TF1 *ParabolaFunc1024 = new TF1("*ParabolaFunc",750,2500,4);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2500,4, 1, TF1::EAddToList::kNo);
   ParabolaFunc1024->SetRange(750,2500);
   ParabolaFunc1024->SetName("ParabolaFunc");
   ParabolaFunc1024->SetTitle("ParabolaFunc");
   ParabolaFunc1024->SetSavedPoint(0,0.06996734);
   ParabolaFunc1024->SetSavedPoint(1,0.07059688);
   ParabolaFunc1024->SetSavedPoint(2,0.07122265);
   ParabolaFunc1024->SetSavedPoint(3,0.07184407);
   ParabolaFunc1024->SetSavedPoint(4,0.07246056);
   ParabolaFunc1024->SetSavedPoint(5,0.07307155);
   ParabolaFunc1024->SetSavedPoint(6,0.07367645);
   ParabolaFunc1024->SetSavedPoint(7,0.0742747);
   ParabolaFunc1024->SetSavedPoint(8,0.07486571);
   ParabolaFunc1024->SetSavedPoint(9,0.0754489);
   ParabolaFunc1024->SetSavedPoint(10,0.07602369);
   ParabolaFunc1024->SetSavedPoint(11,0.07658952);
   ParabolaFunc1024->SetSavedPoint(12,0.07714579);
   ParabolaFunc1024->SetSavedPoint(13,0.07769193);
   ParabolaFunc1024->SetSavedPoint(14,0.07822737);
   ParabolaFunc1024->SetSavedPoint(15,0.07875152);
   ParabolaFunc1024->SetSavedPoint(16,0.07926382);
   ParabolaFunc1024->SetSavedPoint(17,0.07976366);
   ParabolaFunc1024->SetSavedPoint(18,0.0802505);
   ParabolaFunc1024->SetSavedPoint(19,0.08072373);
   ParabolaFunc1024->SetSavedPoint(20,0.08118279);
   ParabolaFunc1024->SetSavedPoint(21,0.0816271);
   ParabolaFunc1024->SetSavedPoint(22,0.08205607);
   ParabolaFunc1024->SetSavedPoint(23,0.08246914);
   ParabolaFunc1024->SetSavedPoint(24,0.08286572);
   ParabolaFunc1024->SetSavedPoint(25,0.08324524);
   ParabolaFunc1024->SetSavedPoint(26,0.08360711);
   ParabolaFunc1024->SetSavedPoint(27,0.08395076);
   ParabolaFunc1024->SetSavedPoint(28,0.08427562);
   ParabolaFunc1024->SetSavedPoint(29,0.08458109);
   ParabolaFunc1024->SetSavedPoint(30,0.08486662);
   ParabolaFunc1024->SetSavedPoint(31,0.08513161);
   ParabolaFunc1024->SetSavedPoint(32,0.08537548);
   ParabolaFunc1024->SetSavedPoint(33,0.08559767);
   ParabolaFunc1024->SetSavedPoint(34,0.0857976);
   ParabolaFunc1024->SetSavedPoint(35,0.08597467);
   ParabolaFunc1024->SetSavedPoint(36,0.08612833);
   ParabolaFunc1024->SetSavedPoint(37,0.08625798);
   ParabolaFunc1024->SetSavedPoint(38,0.08636306);
   ParabolaFunc1024->SetSavedPoint(39,0.08644298);
   ParabolaFunc1024->SetSavedPoint(40,0.08649716);
   ParabolaFunc1024->SetSavedPoint(41,0.08652503);
   ParabolaFunc1024->SetSavedPoint(42,0.08652601);
   ParabolaFunc1024->SetSavedPoint(43,0.08649952);
   ParabolaFunc1024->SetSavedPoint(44,0.08644498);
   ParabolaFunc1024->SetSavedPoint(45,0.08636182);
   ParabolaFunc1024->SetSavedPoint(46,0.08624945);
   ParabolaFunc1024->SetSavedPoint(47,0.0861073);
   ParabolaFunc1024->SetSavedPoint(48,0.0859348);
   ParabolaFunc1024->SetSavedPoint(49,0.08573136);
   ParabolaFunc1024->SetSavedPoint(50,0.0854964);
   ParabolaFunc1024->SetSavedPoint(51,0.08522935);
   ParabolaFunc1024->SetSavedPoint(52,0.08492963);
   ParabolaFunc1024->SetSavedPoint(53,0.08459665);
   ParabolaFunc1024->SetSavedPoint(54,0.08422986);
   ParabolaFunc1024->SetSavedPoint(55,0.08382865);
   ParabolaFunc1024->SetSavedPoint(56,0.08339247);
   ParabolaFunc1024->SetSavedPoint(57,0.08292072);
   ParabolaFunc1024->SetSavedPoint(58,0.08241283);
   ParabolaFunc1024->SetSavedPoint(59,0.08186822);
   ParabolaFunc1024->SetSavedPoint(60,0.08128632);
   ParabolaFunc1024->SetSavedPoint(61,0.08066655);
   ParabolaFunc1024->SetSavedPoint(62,0.08000833);
   ParabolaFunc1024->SetSavedPoint(63,0.07931107);
   ParabolaFunc1024->SetSavedPoint(64,0.07857421);
   ParabolaFunc1024->SetSavedPoint(65,0.07779717);
   ParabolaFunc1024->SetSavedPoint(66,0.07697936);
   ParabolaFunc1024->SetSavedPoint(67,0.0761202);
   ParabolaFunc1024->SetSavedPoint(68,0.07521913);
   ParabolaFunc1024->SetSavedPoint(69,0.07427556);
   ParabolaFunc1024->SetSavedPoint(70,0.07328892);
   ParabolaFunc1024->SetSavedPoint(71,0.07225862);
   ParabolaFunc1024->SetSavedPoint(72,0.0711841);
   ParabolaFunc1024->SetSavedPoint(73,0.07006476);
   ParabolaFunc1024->SetSavedPoint(74,0.06890003);
   ParabolaFunc1024->SetSavedPoint(75,0.06768934);
   ParabolaFunc1024->SetSavedPoint(76,0.06643211);
   ParabolaFunc1024->SetSavedPoint(77,0.06512775);
   ParabolaFunc1024->SetSavedPoint(78,0.0637757);
   ParabolaFunc1024->SetSavedPoint(79,0.06237536);
   ParabolaFunc1024->SetSavedPoint(80,0.06092617);
   ParabolaFunc1024->SetSavedPoint(81,0.05942755);
   ParabolaFunc1024->SetSavedPoint(82,0.05787892);
   ParabolaFunc1024->SetSavedPoint(83,0.05627969);
   ParabolaFunc1024->SetSavedPoint(84,0.0546293);
   ParabolaFunc1024->SetSavedPoint(85,0.05292717);
   ParabolaFunc1024->SetSavedPoint(86,0.05117271);
   ParabolaFunc1024->SetSavedPoint(87,0.04936534);
   ParabolaFunc1024->SetSavedPoint(88,0.0475045);
   ParabolaFunc1024->SetSavedPoint(89,0.0455896);
   ParabolaFunc1024->SetSavedPoint(90,0.04362007);
   ParabolaFunc1024->SetSavedPoint(91,0.04159532);
   ParabolaFunc1024->SetSavedPoint(92,0.03951478);
   ParabolaFunc1024->SetSavedPoint(93,0.03737787);
   ParabolaFunc1024->SetSavedPoint(94,0.03518401);
   ParabolaFunc1024->SetSavedPoint(95,0.03293262);
   ParabolaFunc1024->SetSavedPoint(96,0.03062314);
   ParabolaFunc1024->SetSavedPoint(97,0.02825497);
   ParabolaFunc1024->SetSavedPoint(98,0.02582754);
   ParabolaFunc1024->SetSavedPoint(99,0.02334027);
   ParabolaFunc1024->SetSavedPoint(100,0.02079259);
   ParabolaFunc1024->SetSavedPoint(101,750);
   ParabolaFunc1024->SetSavedPoint(102,2500);
   ParabolaFunc1024->SetFillColor(19);
   ParabolaFunc1024->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1024->SetLineColor(ci);
   ParabolaFunc1024->SetLineWidth(3);
   ParabolaFunc1024->SetChisquare(0.2899394);
   ParabolaFunc1024->SetNDF(3);
   ParabolaFunc1024->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1024->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1024->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1024->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1024->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1024->SetParameter(0,-1.797519e-11);
   ParabolaFunc1024->SetParError(0,4.512911e-11);
   ParabolaFunc1024->SetParLimits(0,0,0);
   ParabolaFunc1024->SetParameter(1,3.523207e-08);
   ParabolaFunc1024->SetParError(1,2.225188e-07);
   ParabolaFunc1024->SetParLimits(1,0,0);
   ParabolaFunc1024->SetParameter(2,1.355536e-05);
   ParabolaFunc1024->SetParError(2,0.0003504362);
   ParabolaFunc1024->SetParLimits(2,0,0);
   ParabolaFunc1024->SetParameter(3,0.04756606);
   ParabolaFunc1024->SetParError(3,0.1752409);
   ParabolaFunc1024->SetParLimits(3,0,0);
   ParabolaFunc1024->Draw("SAME");
   
   TLegend *leg = new TLegend(0.125,0.79,0.875,0.89,NULL,"brNDC");
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
   pt_LaTex = pt->AddText("0.0966
");
   pt_LaTex = pt->AddText("(-5#pm1)#times10^{-8}");
   pt_LaTex = pt->AddText("(1.6#pm0.4)#times10^{-4}");
   pt_LaTex = pt->AddText("1e-05
#pm0.0004
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
