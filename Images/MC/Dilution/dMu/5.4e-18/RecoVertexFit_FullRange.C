void RecoVertexFit_FullRange()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 18:01:24 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-132.3892,-0.25,3372.674,0.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t trackReco_fx1025[11] = {
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
   Double_t trackReco_fy1025[11] = {
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
   Double_t trackReco_fex1025[11] = {
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
   Double_t trackReco_fey1025[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,trackReco_fx1025,trackReco_fy1025,trackReco_fex1025,trackReco_fey1025);
   gre->SetName("trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackReco1025 = new TH1F("Graph_trackReco1025","",100,218.1171,3022.168);
   Graph_trackReco1025->SetMinimum(-0.2);
   Graph_trackReco1025->SetMaximum(0.2);
   Graph_trackReco1025->SetDirectory(0);
   Graph_trackReco1025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_trackReco1025->SetLineColor(ci);
   Graph_trackReco1025->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_trackReco1025->GetXaxis()->CenterTitle(true);
   Graph_trackReco1025->GetXaxis()->SetLabelFont(42);
   Graph_trackReco1025->GetXaxis()->SetTitleSize(0.04);
   Graph_trackReco1025->GetXaxis()->SetTitleOffset(1.1);
   Graph_trackReco1025->GetXaxis()->SetTitleFont(42);
   Graph_trackReco1025->GetYaxis()->SetTitle("d_{EDM} / 250 MeV");
   Graph_trackReco1025->GetYaxis()->CenterTitle(true);
   Graph_trackReco1025->GetYaxis()->SetNdivisions(4000510);
   Graph_trackReco1025->GetYaxis()->SetLabelFont(42);
   Graph_trackReco1025->GetYaxis()->SetTitleSize(0.04);
   Graph_trackReco1025->GetYaxis()->SetTitleOffset(1.25);
   Graph_trackReco1025->GetYaxis()->SetTitleFont(42);
   Graph_trackReco1025->GetZaxis()->SetLabelFont(42);
   Graph_trackReco1025->GetZaxis()->SetTitleOffset(1);
   Graph_trackReco1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackReco1025);
   
   
   TF1 *ParabolaFunc1026 = new TF1("*ParabolaFunc",750,2750,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2750,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1026->SetRange(750,2750);
   ParabolaFunc1026->SetName("ParabolaFunc");
   ParabolaFunc1026->SetTitle("ParabolaFunc");
   ParabolaFunc1026->SetSavedPoint(0,0.07715003);
   ParabolaFunc1026->SetSavedPoint(1,0.07759601);
   ParabolaFunc1026->SetSavedPoint(2,0.0780246);
   ParabolaFunc1026->SetSavedPoint(3,0.07843581);
   ParabolaFunc1026->SetSavedPoint(4,0.07882965);
   ParabolaFunc1026->SetSavedPoint(5,0.0792061);
   ParabolaFunc1026->SetSavedPoint(6,0.07956517);
   ParabolaFunc1026->SetSavedPoint(7,0.07990686);
   ParabolaFunc1026->SetSavedPoint(8,0.08023117);
   ParabolaFunc1026->SetSavedPoint(9,0.0805381);
   ParabolaFunc1026->SetSavedPoint(10,0.08082765);
   ParabolaFunc1026->SetSavedPoint(11,0.08109982);
   ParabolaFunc1026->SetSavedPoint(12,0.0813546);
   ParabolaFunc1026->SetSavedPoint(13,0.08159201);
   ParabolaFunc1026->SetSavedPoint(14,0.08181204);
   ParabolaFunc1026->SetSavedPoint(15,0.08201468);
   ParabolaFunc1026->SetSavedPoint(16,0.08219995);
   ParabolaFunc1026->SetSavedPoint(17,0.08236783);
   ParabolaFunc1026->SetSavedPoint(18,0.08251834);
   ParabolaFunc1026->SetSavedPoint(19,0.08265146);
   ParabolaFunc1026->SetSavedPoint(20,0.0827672);
   ParabolaFunc1026->SetSavedPoint(21,0.08286556);
   ParabolaFunc1026->SetSavedPoint(22,0.08294655);
   ParabolaFunc1026->SetSavedPoint(23,0.08301015);
   ParabolaFunc1026->SetSavedPoint(24,0.08305637);
   ParabolaFunc1026->SetSavedPoint(25,0.08308521);
   ParabolaFunc1026->SetSavedPoint(26,0.08309666);
   ParabolaFunc1026->SetSavedPoint(27,0.08309074);
   ParabolaFunc1026->SetSavedPoint(28,0.08306744);
   ParabolaFunc1026->SetSavedPoint(29,0.08302676);
   ParabolaFunc1026->SetSavedPoint(30,0.08296869);
   ParabolaFunc1026->SetSavedPoint(31,0.08289325);
   ParabolaFunc1026->SetSavedPoint(32,0.08280042);
   ParabolaFunc1026->SetSavedPoint(33,0.08269022);
   ParabolaFunc1026->SetSavedPoint(34,0.08256263);
   ParabolaFunc1026->SetSavedPoint(35,0.08241767);
   ParabolaFunc1026->SetSavedPoint(36,0.08225532);
   ParabolaFunc1026->SetSavedPoint(37,0.08207559);
   ParabolaFunc1026->SetSavedPoint(38,0.08187848);
   ParabolaFunc1026->SetSavedPoint(39,0.08166399);
   ParabolaFunc1026->SetSavedPoint(40,0.08143212);
   ParabolaFunc1026->SetSavedPoint(41,0.08118287);
   ParabolaFunc1026->SetSavedPoint(42,0.08091624);
   ParabolaFunc1026->SetSavedPoint(43,0.08063223);
   ParabolaFunc1026->SetSavedPoint(44,0.08033084);
   ParabolaFunc1026->SetSavedPoint(45,0.08001206);
   ParabolaFunc1026->SetSavedPoint(46,0.07967591);
   ParabolaFunc1026->SetSavedPoint(47,0.07932238);
   ParabolaFunc1026->SetSavedPoint(48,0.07895146);
   ParabolaFunc1026->SetSavedPoint(49,0.07856316);
   ParabolaFunc1026->SetSavedPoint(50,0.07815749);
   ParabolaFunc1026->SetSavedPoint(51,0.07773443);
   ParabolaFunc1026->SetSavedPoint(52,0.07729399);
   ParabolaFunc1026->SetSavedPoint(53,0.07683618);
   ParabolaFunc1026->SetSavedPoint(54,0.07636098);
   ParabolaFunc1026->SetSavedPoint(55,0.0758684);
   ParabolaFunc1026->SetSavedPoint(56,0.07535844);
   ParabolaFunc1026->SetSavedPoint(57,0.0748311);
   ParabolaFunc1026->SetSavedPoint(58,0.07428638);
   ParabolaFunc1026->SetSavedPoint(59,0.07372427);
   ParabolaFunc1026->SetSavedPoint(60,0.07314479);
   ParabolaFunc1026->SetSavedPoint(61,0.07254793);
   ParabolaFunc1026->SetSavedPoint(62,0.07193369);
   ParabolaFunc1026->SetSavedPoint(63,0.07130206);
   ParabolaFunc1026->SetSavedPoint(64,0.07065306);
   ParabolaFunc1026->SetSavedPoint(65,0.06998667);
   ParabolaFunc1026->SetSavedPoint(66,0.0693029);
   ParabolaFunc1026->SetSavedPoint(67,0.06860176);
   ParabolaFunc1026->SetSavedPoint(68,0.06788323);
   ParabolaFunc1026->SetSavedPoint(69,0.06714732);
   ParabolaFunc1026->SetSavedPoint(70,0.06639403);
   ParabolaFunc1026->SetSavedPoint(71,0.06562336);
   ParabolaFunc1026->SetSavedPoint(72,0.06483531);
   ParabolaFunc1026->SetSavedPoint(73,0.06402988);
   ParabolaFunc1026->SetSavedPoint(74,0.06320707);
   ParabolaFunc1026->SetSavedPoint(75,0.06236688);
   ParabolaFunc1026->SetSavedPoint(76,0.06150931);
   ParabolaFunc1026->SetSavedPoint(77,0.06063436);
   ParabolaFunc1026->SetSavedPoint(78,0.05974202);
   ParabolaFunc1026->SetSavedPoint(79,0.05883231);
   ParabolaFunc1026->SetSavedPoint(80,0.05790521);
   ParabolaFunc1026->SetSavedPoint(81,0.05696074);
   ParabolaFunc1026->SetSavedPoint(82,0.05599888);
   ParabolaFunc1026->SetSavedPoint(83,0.05501964);
   ParabolaFunc1026->SetSavedPoint(84,0.05402303);
   ParabolaFunc1026->SetSavedPoint(85,0.05300903);
   ParabolaFunc1026->SetSavedPoint(86,0.05197765);
   ParabolaFunc1026->SetSavedPoint(87,0.05092889);
   ParabolaFunc1026->SetSavedPoint(88,0.04986275);
   ParabolaFunc1026->SetSavedPoint(89,0.04877923);
   ParabolaFunc1026->SetSavedPoint(90,0.04767833);
   ParabolaFunc1026->SetSavedPoint(91,0.04656005);
   ParabolaFunc1026->SetSavedPoint(92,0.04542438);
   ParabolaFunc1026->SetSavedPoint(93,0.04427134);
   ParabolaFunc1026->SetSavedPoint(94,0.04310092);
   ParabolaFunc1026->SetSavedPoint(95,0.04191311);
   ParabolaFunc1026->SetSavedPoint(96,0.04070793);
   ParabolaFunc1026->SetSavedPoint(97,0.03948536);
   ParabolaFunc1026->SetSavedPoint(98,0.03824542);
   ParabolaFunc1026->SetSavedPoint(99,0.03698809);
   ParabolaFunc1026->SetSavedPoint(100,0.03571338);
   ParabolaFunc1026->SetSavedPoint(101,750);
   ParabolaFunc1026->SetSavedPoint(102,2750);
   ParabolaFunc1026->SetFillColor(19);
   ParabolaFunc1026->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1026->SetLineColor(ci);
   ParabolaFunc1026->SetLineWidth(3);
   ParabolaFunc1026->SetChisquare(6.240606);
   ParabolaFunc1026->SetNDF(5);
   ParabolaFunc1026->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1026->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1026->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1026->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1026->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1026->SetParameter(0,-2.172578e-08);
   ParabolaFunc1026->SetParError(0,1.280098e-08);
   ParabolaFunc1026->SetParLimits(0,0,0);
   ParabolaFunc1026->SetParameter(1,5.532191e-05);
   ParabolaFunc1026->SetParError(1,4.602967e-05);
   ParabolaFunc1026->SetParLimits(1,0,0);
   ParabolaFunc1026->SetParameter(2,0.04787935);
   ParabolaFunc1026->SetParError(2,0.03890869);
   ParabolaFunc1026->SetParLimits(2,0,0);
   ParabolaFunc1026->SetParent(gre);
   gre->GetListOfFunctions()->Add(ParabolaFunc1026);
   gre->Draw("ap");
   
   TF1 *ParabolaFunc1027 = new TF1("*ParabolaFunc",750,2750,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2750,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1027->SetRange(750,2750);
   ParabolaFunc1027->SetName("ParabolaFunc");
   ParabolaFunc1027->SetTitle("ParabolaFunc");
   ParabolaFunc1027->SetSavedPoint(0,0.07715003);
   ParabolaFunc1027->SetSavedPoint(1,0.07759601);
   ParabolaFunc1027->SetSavedPoint(2,0.0780246);
   ParabolaFunc1027->SetSavedPoint(3,0.07843581);
   ParabolaFunc1027->SetSavedPoint(4,0.07882965);
   ParabolaFunc1027->SetSavedPoint(5,0.0792061);
   ParabolaFunc1027->SetSavedPoint(6,0.07956517);
   ParabolaFunc1027->SetSavedPoint(7,0.07990686);
   ParabolaFunc1027->SetSavedPoint(8,0.08023117);
   ParabolaFunc1027->SetSavedPoint(9,0.0805381);
   ParabolaFunc1027->SetSavedPoint(10,0.08082765);
   ParabolaFunc1027->SetSavedPoint(11,0.08109982);
   ParabolaFunc1027->SetSavedPoint(12,0.0813546);
   ParabolaFunc1027->SetSavedPoint(13,0.08159201);
   ParabolaFunc1027->SetSavedPoint(14,0.08181204);
   ParabolaFunc1027->SetSavedPoint(15,0.08201468);
   ParabolaFunc1027->SetSavedPoint(16,0.08219995);
   ParabolaFunc1027->SetSavedPoint(17,0.08236783);
   ParabolaFunc1027->SetSavedPoint(18,0.08251834);
   ParabolaFunc1027->SetSavedPoint(19,0.08265146);
   ParabolaFunc1027->SetSavedPoint(20,0.0827672);
   ParabolaFunc1027->SetSavedPoint(21,0.08286556);
   ParabolaFunc1027->SetSavedPoint(22,0.08294655);
   ParabolaFunc1027->SetSavedPoint(23,0.08301015);
   ParabolaFunc1027->SetSavedPoint(24,0.08305637);
   ParabolaFunc1027->SetSavedPoint(25,0.08308521);
   ParabolaFunc1027->SetSavedPoint(26,0.08309666);
   ParabolaFunc1027->SetSavedPoint(27,0.08309074);
   ParabolaFunc1027->SetSavedPoint(28,0.08306744);
   ParabolaFunc1027->SetSavedPoint(29,0.08302676);
   ParabolaFunc1027->SetSavedPoint(30,0.08296869);
   ParabolaFunc1027->SetSavedPoint(31,0.08289325);
   ParabolaFunc1027->SetSavedPoint(32,0.08280042);
   ParabolaFunc1027->SetSavedPoint(33,0.08269022);
   ParabolaFunc1027->SetSavedPoint(34,0.08256263);
   ParabolaFunc1027->SetSavedPoint(35,0.08241767);
   ParabolaFunc1027->SetSavedPoint(36,0.08225532);
   ParabolaFunc1027->SetSavedPoint(37,0.08207559);
   ParabolaFunc1027->SetSavedPoint(38,0.08187848);
   ParabolaFunc1027->SetSavedPoint(39,0.08166399);
   ParabolaFunc1027->SetSavedPoint(40,0.08143212);
   ParabolaFunc1027->SetSavedPoint(41,0.08118287);
   ParabolaFunc1027->SetSavedPoint(42,0.08091624);
   ParabolaFunc1027->SetSavedPoint(43,0.08063223);
   ParabolaFunc1027->SetSavedPoint(44,0.08033084);
   ParabolaFunc1027->SetSavedPoint(45,0.08001206);
   ParabolaFunc1027->SetSavedPoint(46,0.07967591);
   ParabolaFunc1027->SetSavedPoint(47,0.07932238);
   ParabolaFunc1027->SetSavedPoint(48,0.07895146);
   ParabolaFunc1027->SetSavedPoint(49,0.07856316);
   ParabolaFunc1027->SetSavedPoint(50,0.07815749);
   ParabolaFunc1027->SetSavedPoint(51,0.07773443);
   ParabolaFunc1027->SetSavedPoint(52,0.07729399);
   ParabolaFunc1027->SetSavedPoint(53,0.07683618);
   ParabolaFunc1027->SetSavedPoint(54,0.07636098);
   ParabolaFunc1027->SetSavedPoint(55,0.0758684);
   ParabolaFunc1027->SetSavedPoint(56,0.07535844);
   ParabolaFunc1027->SetSavedPoint(57,0.0748311);
   ParabolaFunc1027->SetSavedPoint(58,0.07428638);
   ParabolaFunc1027->SetSavedPoint(59,0.07372427);
   ParabolaFunc1027->SetSavedPoint(60,0.07314479);
   ParabolaFunc1027->SetSavedPoint(61,0.07254793);
   ParabolaFunc1027->SetSavedPoint(62,0.07193369);
   ParabolaFunc1027->SetSavedPoint(63,0.07130206);
   ParabolaFunc1027->SetSavedPoint(64,0.07065306);
   ParabolaFunc1027->SetSavedPoint(65,0.06998667);
   ParabolaFunc1027->SetSavedPoint(66,0.0693029);
   ParabolaFunc1027->SetSavedPoint(67,0.06860176);
   ParabolaFunc1027->SetSavedPoint(68,0.06788323);
   ParabolaFunc1027->SetSavedPoint(69,0.06714732);
   ParabolaFunc1027->SetSavedPoint(70,0.06639403);
   ParabolaFunc1027->SetSavedPoint(71,0.06562336);
   ParabolaFunc1027->SetSavedPoint(72,0.06483531);
   ParabolaFunc1027->SetSavedPoint(73,0.06402988);
   ParabolaFunc1027->SetSavedPoint(74,0.06320707);
   ParabolaFunc1027->SetSavedPoint(75,0.06236688);
   ParabolaFunc1027->SetSavedPoint(76,0.06150931);
   ParabolaFunc1027->SetSavedPoint(77,0.06063436);
   ParabolaFunc1027->SetSavedPoint(78,0.05974202);
   ParabolaFunc1027->SetSavedPoint(79,0.05883231);
   ParabolaFunc1027->SetSavedPoint(80,0.05790521);
   ParabolaFunc1027->SetSavedPoint(81,0.05696074);
   ParabolaFunc1027->SetSavedPoint(82,0.05599888);
   ParabolaFunc1027->SetSavedPoint(83,0.05501964);
   ParabolaFunc1027->SetSavedPoint(84,0.05402303);
   ParabolaFunc1027->SetSavedPoint(85,0.05300903);
   ParabolaFunc1027->SetSavedPoint(86,0.05197765);
   ParabolaFunc1027->SetSavedPoint(87,0.05092889);
   ParabolaFunc1027->SetSavedPoint(88,0.04986275);
   ParabolaFunc1027->SetSavedPoint(89,0.04877923);
   ParabolaFunc1027->SetSavedPoint(90,0.04767833);
   ParabolaFunc1027->SetSavedPoint(91,0.04656005);
   ParabolaFunc1027->SetSavedPoint(92,0.04542438);
   ParabolaFunc1027->SetSavedPoint(93,0.04427134);
   ParabolaFunc1027->SetSavedPoint(94,0.04310092);
   ParabolaFunc1027->SetSavedPoint(95,0.04191311);
   ParabolaFunc1027->SetSavedPoint(96,0.04070793);
   ParabolaFunc1027->SetSavedPoint(97,0.03948536);
   ParabolaFunc1027->SetSavedPoint(98,0.03824542);
   ParabolaFunc1027->SetSavedPoint(99,0.03698809);
   ParabolaFunc1027->SetSavedPoint(100,0.03571338);
   ParabolaFunc1027->SetSavedPoint(101,750);
   ParabolaFunc1027->SetSavedPoint(102,2750);
   ParabolaFunc1027->SetFillColor(19);
   ParabolaFunc1027->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1027->SetLineColor(ci);
   ParabolaFunc1027->SetLineWidth(3);
   ParabolaFunc1027->SetChisquare(6.240606);
   ParabolaFunc1027->SetNDF(5);
   ParabolaFunc1027->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1027->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1027->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1027->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1027->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1027->SetParameter(0,-2.172578e-08);
   ParabolaFunc1027->SetParError(0,1.280098e-08);
   ParabolaFunc1027->SetParLimits(0,0,0);
   ParabolaFunc1027->SetParameter(1,5.532191e-05);
   ParabolaFunc1027->SetParError(1,4.602967e-05);
   ParabolaFunc1027->SetParLimits(1,0,0);
   ParabolaFunc1027->SetParameter(2,0.04787935);
   ParabolaFunc1027->SetParError(2,0.03890869);
   ParabolaFunc1027->SetParLimits(2,0,0);
   ParabolaFunc1027->Draw("SAME");
   
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
   
   TPaveText *pt = new TPaveText(0.2,0.2,0.45,0.45,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("#chi^{2}/NDF");
   pt_LaTex = pt->AddText("a [MeV^{-2}]");
   pt_LaTex = pt->AddText("b [MeV^{-1}]");
   pt_LaTex = pt->AddText("d_{0}");
   pt->Draw();
   
   pt = new TPaveText(0.45,0.2,0.6,0.45,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("1.25
");
   pt_LaTex = pt->AddText("(-2#pm1)#times10^{-8}");
   pt_LaTex = pt->AddText("(6#pm5)#times10^{-4}");
   pt_LaTex = pt->AddText("0.05
#pm0.04
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
