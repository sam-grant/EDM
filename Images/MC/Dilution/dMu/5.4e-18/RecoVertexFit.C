void RecoVertexFit()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Sep 29 12:25:00 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.015,2750,0.135);
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
   -0.01376755,
   0.09268763,
   0.07301164,
   0.08159744,
   0.08079776,
   0.09122593,
   0.07952967,
   0.06147354,
   0.03917428,
   0.05486392,
   -0.008986673};
   Double_t trackReco_fex1021[11] = {
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
   Double_t trackReco_fey1021[11] = {
   0.06371519,
   0.02133871,
   0.01226842,
   0.01007895,
   0.009239917,
   0.008793494,
   0.008815962,
   0.009233603,
   0.00981411,
   0.009736495,
   0.02198102};
   TGraphErrors *gre = new TGraphErrors(11,trackReco_fx1021,trackReco_fy1021,trackReco_fex1021,trackReco_fey1021);
   gre->SetName("trackReco");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;d_{EDM}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackReco1021 = new TH1F("Graph_trackReco1021","",100,125,3125);
   Graph_trackReco1021->SetMinimum(0);
   Graph_trackReco1021->SetMaximum(0.12);
   Graph_trackReco1021->SetDirectory(0);
   Graph_trackReco1021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_trackReco1021->SetLineColor(ci);
   Graph_trackReco1021->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_trackReco1021->GetXaxis()->SetRange(21,80);
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
   ParabolaFunc1022->SetSavedPoint(0,0.06070064);
   ParabolaFunc1022->SetSavedPoint(1,0.06205468);
   ParabolaFunc1022->SetSavedPoint(2,0.06337437);
   ParabolaFunc1022->SetSavedPoint(3,0.06465973);
   ParabolaFunc1022->SetSavedPoint(4,0.06591073);
   ParabolaFunc1022->SetSavedPoint(5,0.0671274);
   ParabolaFunc1022->SetSavedPoint(6,0.06830972);
   ParabolaFunc1022->SetSavedPoint(7,0.0694577);
   ParabolaFunc1022->SetSavedPoint(8,0.07057133);
   ParabolaFunc1022->SetSavedPoint(9,0.07165062);
   ParabolaFunc1022->SetSavedPoint(10,0.07269557);
   ParabolaFunc1022->SetSavedPoint(11,0.07370617);
   ParabolaFunc1022->SetSavedPoint(12,0.07468243);
   ParabolaFunc1022->SetSavedPoint(13,0.07562435);
   ParabolaFunc1022->SetSavedPoint(14,0.07653192);
   ParabolaFunc1022->SetSavedPoint(15,0.07740515);
   ParabolaFunc1022->SetSavedPoint(16,0.07824404);
   ParabolaFunc1022->SetSavedPoint(17,0.07904858);
   ParabolaFunc1022->SetSavedPoint(18,0.07981878);
   ParabolaFunc1022->SetSavedPoint(19,0.08055463);
   ParabolaFunc1022->SetSavedPoint(20,0.08125614);
   ParabolaFunc1022->SetSavedPoint(21,0.08192331);
   ParabolaFunc1022->SetSavedPoint(22,0.08255614);
   ParabolaFunc1022->SetSavedPoint(23,0.08315462);
   ParabolaFunc1022->SetSavedPoint(24,0.08371875);
   ParabolaFunc1022->SetSavedPoint(25,0.08424855);
   ParabolaFunc1022->SetSavedPoint(26,0.084744);
   ParabolaFunc1022->SetSavedPoint(27,0.08520511);
   ParabolaFunc1022->SetSavedPoint(28,0.08563187);
   ParabolaFunc1022->SetSavedPoint(29,0.08602429);
   ParabolaFunc1022->SetSavedPoint(30,0.08638237);
   ParabolaFunc1022->SetSavedPoint(31,0.0867061);
   ParabolaFunc1022->SetSavedPoint(32,0.08699549);
   ParabolaFunc1022->SetSavedPoint(33,0.08725053);
   ParabolaFunc1022->SetSavedPoint(34,0.08747124);
   ParabolaFunc1022->SetSavedPoint(35,0.0876576);
   ParabolaFunc1022->SetSavedPoint(36,0.08780961);
   ParabolaFunc1022->SetSavedPoint(37,0.08792728);
   ParabolaFunc1022->SetSavedPoint(38,0.08801061);
   ParabolaFunc1022->SetSavedPoint(39,0.0880596);
   ParabolaFunc1022->SetSavedPoint(40,0.08807424);
   ParabolaFunc1022->SetSavedPoint(41,0.08805453);
   ParabolaFunc1022->SetSavedPoint(42,0.08800049);
   ParabolaFunc1022->SetSavedPoint(43,0.0879121);
   ParabolaFunc1022->SetSavedPoint(44,0.08778937);
   ParabolaFunc1022->SetSavedPoint(45,0.08763229);
   ParabolaFunc1022->SetSavedPoint(46,0.08744087);
   ParabolaFunc1022->SetSavedPoint(47,0.08721511);
   ParabolaFunc1022->SetSavedPoint(48,0.086955);
   ParabolaFunc1022->SetSavedPoint(49,0.08666055);
   ParabolaFunc1022->SetSavedPoint(50,0.08633176);
   ParabolaFunc1022->SetSavedPoint(51,0.08596862);
   ParabolaFunc1022->SetSavedPoint(52,0.08557114);
   ParabolaFunc1022->SetSavedPoint(53,0.08513931);
   ParabolaFunc1022->SetSavedPoint(54,0.08467314);
   ParabolaFunc1022->SetSavedPoint(55,0.08417263);
   ParabolaFunc1022->SetSavedPoint(56,0.08363778);
   ParabolaFunc1022->SetSavedPoint(57,0.08306858);
   ParabolaFunc1022->SetSavedPoint(58,0.08246504);
   ParabolaFunc1022->SetSavedPoint(59,0.08182715);
   ParabolaFunc1022->SetSavedPoint(60,0.08115492);
   ParabolaFunc1022->SetSavedPoint(61,0.08044835);
   ParabolaFunc1022->SetSavedPoint(62,0.07970743);
   ParabolaFunc1022->SetSavedPoint(63,0.07893217);
   ParabolaFunc1022->SetSavedPoint(64,0.07812257);
   ParabolaFunc1022->SetSavedPoint(65,0.07727862);
   ParabolaFunc1022->SetSavedPoint(66,0.07640033);
   ParabolaFunc1022->SetSavedPoint(67,0.0754877);
   ParabolaFunc1022->SetSavedPoint(68,0.07454072);
   ParabolaFunc1022->SetSavedPoint(69,0.0735594);
   ParabolaFunc1022->SetSavedPoint(70,0.07254373);
   ParabolaFunc1022->SetSavedPoint(71,0.07149373);
   ParabolaFunc1022->SetSavedPoint(72,0.07040937);
   ParabolaFunc1022->SetSavedPoint(73,0.06929068);
   ParabolaFunc1022->SetSavedPoint(74,0.06813764);
   ParabolaFunc1022->SetSavedPoint(75,0.06695026);
   ParabolaFunc1022->SetSavedPoint(76,0.06572853);
   ParabolaFunc1022->SetSavedPoint(77,0.06447246);
   ParabolaFunc1022->SetSavedPoint(78,0.06318205);
   ParabolaFunc1022->SetSavedPoint(79,0.06185729);
   ParabolaFunc1022->SetSavedPoint(80,0.06049819);
   ParabolaFunc1022->SetSavedPoint(81,0.05910475);
   ParabolaFunc1022->SetSavedPoint(82,0.05767696);
   ParabolaFunc1022->SetSavedPoint(83,0.05621483);
   ParabolaFunc1022->SetSavedPoint(84,0.05471836);
   ParabolaFunc1022->SetSavedPoint(85,0.05318754);
   ParabolaFunc1022->SetSavedPoint(86,0.05162238);
   ParabolaFunc1022->SetSavedPoint(87,0.05002288);
   ParabolaFunc1022->SetSavedPoint(88,0.04838903);
   ParabolaFunc1022->SetSavedPoint(89,0.04672084);
   ParabolaFunc1022->SetSavedPoint(90,0.0450183);
   ParabolaFunc1022->SetSavedPoint(91,0.04328142);
   ParabolaFunc1022->SetSavedPoint(92,0.0415102);
   ParabolaFunc1022->SetSavedPoint(93,0.03970464);
   ParabolaFunc1022->SetSavedPoint(94,0.03786473);
   ParabolaFunc1022->SetSavedPoint(95,0.03599047);
   ParabolaFunc1022->SetSavedPoint(96,0.03408188);
   ParabolaFunc1022->SetSavedPoint(97,0.03213894);
   ParabolaFunc1022->SetSavedPoint(98,0.03016166);
   ParabolaFunc1022->SetSavedPoint(99,0.02815003);
   ParabolaFunc1022->SetSavedPoint(100,0.02610406);
   ParabolaFunc1022->SetSavedPoint(101,750);
   ParabolaFunc1022->SetSavedPoint(102,2500);
   ParabolaFunc1022->SetFillColor(19);
   ParabolaFunc1022->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1022->SetLineColor(ci);
   ParabolaFunc1022->SetLineWidth(3);
   ParabolaFunc1022->SetChisquare(1.011143);
   ParabolaFunc1022->SetNDF(4);
   ParabolaFunc1022->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1022->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1022->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1022->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1022->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1022->SetParameter(0,-5.607106e-08);
   ParabolaFunc1022->SetParError(0,1.768999e-08);
   ParabolaFunc1022->SetParLimits(0,0,0);
   ParabolaFunc1022->SetParameter(1,0.0001624615);
   ParabolaFunc1022->SetParError(1,5.905219e-05);
   ParabolaFunc1022->SetParLimits(1,0,0);
   ParabolaFunc1022->SetParameter(2,-0.02960549);
   ParabolaFunc1022->SetParError(2,0.04665482);
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
   ParabolaFunc1023->SetSavedPoint(0,0.06070064);
   ParabolaFunc1023->SetSavedPoint(1,0.06205468);
   ParabolaFunc1023->SetSavedPoint(2,0.06337437);
   ParabolaFunc1023->SetSavedPoint(3,0.06465973);
   ParabolaFunc1023->SetSavedPoint(4,0.06591073);
   ParabolaFunc1023->SetSavedPoint(5,0.0671274);
   ParabolaFunc1023->SetSavedPoint(6,0.06830972);
   ParabolaFunc1023->SetSavedPoint(7,0.0694577);
   ParabolaFunc1023->SetSavedPoint(8,0.07057133);
   ParabolaFunc1023->SetSavedPoint(9,0.07165062);
   ParabolaFunc1023->SetSavedPoint(10,0.07269557);
   ParabolaFunc1023->SetSavedPoint(11,0.07370617);
   ParabolaFunc1023->SetSavedPoint(12,0.07468243);
   ParabolaFunc1023->SetSavedPoint(13,0.07562435);
   ParabolaFunc1023->SetSavedPoint(14,0.07653192);
   ParabolaFunc1023->SetSavedPoint(15,0.07740515);
   ParabolaFunc1023->SetSavedPoint(16,0.07824404);
   ParabolaFunc1023->SetSavedPoint(17,0.07904858);
   ParabolaFunc1023->SetSavedPoint(18,0.07981878);
   ParabolaFunc1023->SetSavedPoint(19,0.08055463);
   ParabolaFunc1023->SetSavedPoint(20,0.08125614);
   ParabolaFunc1023->SetSavedPoint(21,0.08192331);
   ParabolaFunc1023->SetSavedPoint(22,0.08255614);
   ParabolaFunc1023->SetSavedPoint(23,0.08315462);
   ParabolaFunc1023->SetSavedPoint(24,0.08371875);
   ParabolaFunc1023->SetSavedPoint(25,0.08424855);
   ParabolaFunc1023->SetSavedPoint(26,0.084744);
   ParabolaFunc1023->SetSavedPoint(27,0.08520511);
   ParabolaFunc1023->SetSavedPoint(28,0.08563187);
   ParabolaFunc1023->SetSavedPoint(29,0.08602429);
   ParabolaFunc1023->SetSavedPoint(30,0.08638237);
   ParabolaFunc1023->SetSavedPoint(31,0.0867061);
   ParabolaFunc1023->SetSavedPoint(32,0.08699549);
   ParabolaFunc1023->SetSavedPoint(33,0.08725053);
   ParabolaFunc1023->SetSavedPoint(34,0.08747124);
   ParabolaFunc1023->SetSavedPoint(35,0.0876576);
   ParabolaFunc1023->SetSavedPoint(36,0.08780961);
   ParabolaFunc1023->SetSavedPoint(37,0.08792728);
   ParabolaFunc1023->SetSavedPoint(38,0.08801061);
   ParabolaFunc1023->SetSavedPoint(39,0.0880596);
   ParabolaFunc1023->SetSavedPoint(40,0.08807424);
   ParabolaFunc1023->SetSavedPoint(41,0.08805453);
   ParabolaFunc1023->SetSavedPoint(42,0.08800049);
   ParabolaFunc1023->SetSavedPoint(43,0.0879121);
   ParabolaFunc1023->SetSavedPoint(44,0.08778937);
   ParabolaFunc1023->SetSavedPoint(45,0.08763229);
   ParabolaFunc1023->SetSavedPoint(46,0.08744087);
   ParabolaFunc1023->SetSavedPoint(47,0.08721511);
   ParabolaFunc1023->SetSavedPoint(48,0.086955);
   ParabolaFunc1023->SetSavedPoint(49,0.08666055);
   ParabolaFunc1023->SetSavedPoint(50,0.08633176);
   ParabolaFunc1023->SetSavedPoint(51,0.08596862);
   ParabolaFunc1023->SetSavedPoint(52,0.08557114);
   ParabolaFunc1023->SetSavedPoint(53,0.08513931);
   ParabolaFunc1023->SetSavedPoint(54,0.08467314);
   ParabolaFunc1023->SetSavedPoint(55,0.08417263);
   ParabolaFunc1023->SetSavedPoint(56,0.08363778);
   ParabolaFunc1023->SetSavedPoint(57,0.08306858);
   ParabolaFunc1023->SetSavedPoint(58,0.08246504);
   ParabolaFunc1023->SetSavedPoint(59,0.08182715);
   ParabolaFunc1023->SetSavedPoint(60,0.08115492);
   ParabolaFunc1023->SetSavedPoint(61,0.08044835);
   ParabolaFunc1023->SetSavedPoint(62,0.07970743);
   ParabolaFunc1023->SetSavedPoint(63,0.07893217);
   ParabolaFunc1023->SetSavedPoint(64,0.07812257);
   ParabolaFunc1023->SetSavedPoint(65,0.07727862);
   ParabolaFunc1023->SetSavedPoint(66,0.07640033);
   ParabolaFunc1023->SetSavedPoint(67,0.0754877);
   ParabolaFunc1023->SetSavedPoint(68,0.07454072);
   ParabolaFunc1023->SetSavedPoint(69,0.0735594);
   ParabolaFunc1023->SetSavedPoint(70,0.07254373);
   ParabolaFunc1023->SetSavedPoint(71,0.07149373);
   ParabolaFunc1023->SetSavedPoint(72,0.07040937);
   ParabolaFunc1023->SetSavedPoint(73,0.06929068);
   ParabolaFunc1023->SetSavedPoint(74,0.06813764);
   ParabolaFunc1023->SetSavedPoint(75,0.06695026);
   ParabolaFunc1023->SetSavedPoint(76,0.06572853);
   ParabolaFunc1023->SetSavedPoint(77,0.06447246);
   ParabolaFunc1023->SetSavedPoint(78,0.06318205);
   ParabolaFunc1023->SetSavedPoint(79,0.06185729);
   ParabolaFunc1023->SetSavedPoint(80,0.06049819);
   ParabolaFunc1023->SetSavedPoint(81,0.05910475);
   ParabolaFunc1023->SetSavedPoint(82,0.05767696);
   ParabolaFunc1023->SetSavedPoint(83,0.05621483);
   ParabolaFunc1023->SetSavedPoint(84,0.05471836);
   ParabolaFunc1023->SetSavedPoint(85,0.05318754);
   ParabolaFunc1023->SetSavedPoint(86,0.05162238);
   ParabolaFunc1023->SetSavedPoint(87,0.05002288);
   ParabolaFunc1023->SetSavedPoint(88,0.04838903);
   ParabolaFunc1023->SetSavedPoint(89,0.04672084);
   ParabolaFunc1023->SetSavedPoint(90,0.0450183);
   ParabolaFunc1023->SetSavedPoint(91,0.04328142);
   ParabolaFunc1023->SetSavedPoint(92,0.0415102);
   ParabolaFunc1023->SetSavedPoint(93,0.03970464);
   ParabolaFunc1023->SetSavedPoint(94,0.03786473);
   ParabolaFunc1023->SetSavedPoint(95,0.03599047);
   ParabolaFunc1023->SetSavedPoint(96,0.03408188);
   ParabolaFunc1023->SetSavedPoint(97,0.03213894);
   ParabolaFunc1023->SetSavedPoint(98,0.03016166);
   ParabolaFunc1023->SetSavedPoint(99,0.02815003);
   ParabolaFunc1023->SetSavedPoint(100,0.02610406);
   ParabolaFunc1023->SetSavedPoint(101,750);
   ParabolaFunc1023->SetSavedPoint(102,2500);
   ParabolaFunc1023->SetFillColor(19);
   ParabolaFunc1023->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1023->SetLineColor(ci);
   ParabolaFunc1023->SetLineWidth(3);
   ParabolaFunc1023->SetChisquare(1.011143);
   ParabolaFunc1023->SetNDF(4);
   ParabolaFunc1023->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1023->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1023->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1023->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1023->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1023->SetParameter(0,-5.607106e-08);
   ParabolaFunc1023->SetParError(0,1.768999e-08);
   ParabolaFunc1023->SetParLimits(0,0,0);
   ParabolaFunc1023->SetParameter(1,0.0001624615);
   ParabolaFunc1023->SetParError(1,5.905219e-05);
   ParabolaFunc1023->SetParLimits(1,0,0);
   ParabolaFunc1023->SetParameter(2,-0.02960549);
   ParabolaFunc1023->SetParError(2,0.04665482);
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
   pt_LaTex = pt->AddText("0.253
");
   pt_LaTex = pt->AddText("(-6#pm2)#times10^{-8}");
   pt_LaTex = pt->AddText("(1.6#pm0.6)#times10^{-4}");
   pt_LaTex = pt->AddText("-0.03
#pm0.05
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
