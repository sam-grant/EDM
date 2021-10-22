void RecoVertexFit()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 21 16:06:46 2021) by ROOT version 6.24/04
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
   -0.004967018,
   0.09179145,
   0.07287521,
   0.08094454,
   0.08019789,
   0.09042406,
   0.07861684,
   0.06185731,
   0.04010342,
   0.05523299,
   -0.007845745};
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
   0.06372932,
   0.02134454,
   0.01227204,
   0.01008123,
   0.009241647,
   0.008794506,
   0.008816491,
   0.009233293,
   0.009812533,
   0.009733407,
   0.02198099};
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
   ParabolaFunc1022->SetSavedPoint(0,0.06102542);
   ParabolaFunc1022->SetSavedPoint(1,0.0623221);
   ParabolaFunc1022->SetSavedPoint(2,0.06358584);
   ParabolaFunc1022->SetSavedPoint(3,0.06481664);
   ParabolaFunc1022->SetSavedPoint(4,0.0660145);
   ParabolaFunc1022->SetSavedPoint(5,0.06717941);
   ParabolaFunc1022->SetSavedPoint(6,0.06831139);
   ParabolaFunc1022->SetSavedPoint(7,0.06941042);
   ParabolaFunc1022->SetSavedPoint(8,0.0704765);
   ParabolaFunc1022->SetSavedPoint(9,0.07150965);
   ParabolaFunc1022->SetSavedPoint(10,0.07250986);
   ParabolaFunc1022->SetSavedPoint(11,0.07347712);
   ParabolaFunc1022->SetSavedPoint(12,0.07441144);
   ParabolaFunc1022->SetSavedPoint(13,0.07531282);
   ParabolaFunc1022->SetSavedPoint(14,0.07618126);
   ParabolaFunc1022->SetSavedPoint(15,0.07701675);
   ParabolaFunc1022->SetSavedPoint(16,0.07781931);
   ParabolaFunc1022->SetSavedPoint(17,0.07858892);
   ParabolaFunc1022->SetSavedPoint(18,0.07932559);
   ParabolaFunc1022->SetSavedPoint(19,0.08002932);
   ParabolaFunc1022->SetSavedPoint(20,0.0807001);
   ParabolaFunc1022->SetSavedPoint(21,0.08133795);
   ParabolaFunc1022->SetSavedPoint(22,0.08194285);
   ParabolaFunc1022->SetSavedPoint(23,0.08251481);
   ParabolaFunc1022->SetSavedPoint(24,0.08305383);
   ParabolaFunc1022->SetSavedPoint(25,0.0835599);
   ParabolaFunc1022->SetSavedPoint(26,0.08403304);
   ParabolaFunc1022->SetSavedPoint(27,0.08447323);
   ParabolaFunc1022->SetSavedPoint(28,0.08488048);
   ParabolaFunc1022->SetSavedPoint(29,0.08525479);
   ParabolaFunc1022->SetSavedPoint(30,0.08559616);
   ParabolaFunc1022->SetSavedPoint(31,0.08590458);
   ParabolaFunc1022->SetSavedPoint(32,0.08618007);
   ParabolaFunc1022->SetSavedPoint(33,0.08642261);
   ParabolaFunc1022->SetSavedPoint(34,0.08663221);
   ParabolaFunc1022->SetSavedPoint(35,0.08680886);
   ParabolaFunc1022->SetSavedPoint(36,0.08695258);
   ParabolaFunc1022->SetSavedPoint(37,0.08706335);
   ParabolaFunc1022->SetSavedPoint(38,0.08714118);
   ParabolaFunc1022->SetSavedPoint(39,0.08718607);
   ParabolaFunc1022->SetSavedPoint(40,0.08719802);
   ParabolaFunc1022->SetSavedPoint(41,0.08717703);
   ParabolaFunc1022->SetSavedPoint(42,0.08712309);
   ParabolaFunc1022->SetSavedPoint(43,0.08703621);
   ParabolaFunc1022->SetSavedPoint(44,0.08691639);
   ParabolaFunc1022->SetSavedPoint(45,0.08676363);
   ParabolaFunc1022->SetSavedPoint(46,0.08657793);
   ParabolaFunc1022->SetSavedPoint(47,0.08635928);
   ParabolaFunc1022->SetSavedPoint(48,0.08610769);
   ParabolaFunc1022->SetSavedPoint(49,0.08582316);
   ParabolaFunc1022->SetSavedPoint(50,0.08550569);
   ParabolaFunc1022->SetSavedPoint(51,0.08515528);
   ParabolaFunc1022->SetSavedPoint(52,0.08477192);
   ParabolaFunc1022->SetSavedPoint(53,0.08435563);
   ParabolaFunc1022->SetSavedPoint(54,0.08390639);
   ParabolaFunc1022->SetSavedPoint(55,0.08342421);
   ParabolaFunc1022->SetSavedPoint(56,0.08290908);
   ParabolaFunc1022->SetSavedPoint(57,0.08236102);
   ParabolaFunc1022->SetSavedPoint(58,0.08178001);
   ParabolaFunc1022->SetSavedPoint(59,0.08116606);
   ParabolaFunc1022->SetSavedPoint(60,0.08051917);
   ParabolaFunc1022->SetSavedPoint(61,0.07983934);
   ParabolaFunc1022->SetSavedPoint(62,0.07912657);
   ParabolaFunc1022->SetSavedPoint(63,0.07838085);
   ParabolaFunc1022->SetSavedPoint(64,0.07760219);
   ParabolaFunc1022->SetSavedPoint(65,0.07679059);
   ParabolaFunc1022->SetSavedPoint(66,0.07594605);
   ParabolaFunc1022->SetSavedPoint(67,0.07506856);
   ParabolaFunc1022->SetSavedPoint(68,0.07415814);
   ParabolaFunc1022->SetSavedPoint(69,0.07321477);
   ParabolaFunc1022->SetSavedPoint(70,0.07223846);
   ParabolaFunc1022->SetSavedPoint(71,0.07122921);
   ParabolaFunc1022->SetSavedPoint(72,0.07018702);
   ParabolaFunc1022->SetSavedPoint(73,0.06911188);
   ParabolaFunc1022->SetSavedPoint(74,0.0680038);
   ParabolaFunc1022->SetSavedPoint(75,0.06686278);
   ParabolaFunc1022->SetSavedPoint(76,0.06568882);
   ParabolaFunc1022->SetSavedPoint(77,0.06448192);
   ParabolaFunc1022->SetSavedPoint(78,0.06324207);
   ParabolaFunc1022->SetSavedPoint(79,0.06196929);
   ParabolaFunc1022->SetSavedPoint(80,0.06066356);
   ParabolaFunc1022->SetSavedPoint(81,0.05932489);
   ParabolaFunc1022->SetSavedPoint(82,0.05795327);
   ParabolaFunc1022->SetSavedPoint(83,0.05654872);
   ParabolaFunc1022->SetSavedPoint(84,0.05511122);
   ParabolaFunc1022->SetSavedPoint(85,0.05364078);
   ParabolaFunc1022->SetSavedPoint(86,0.0521374);
   ParabolaFunc1022->SetSavedPoint(87,0.05060108);
   ParabolaFunc1022->SetSavedPoint(88,0.04903182);
   ParabolaFunc1022->SetSavedPoint(89,0.04742961);
   ParabolaFunc1022->SetSavedPoint(90,0.04579446);
   ParabolaFunc1022->SetSavedPoint(91,0.04412637);
   ParabolaFunc1022->SetSavedPoint(92,0.04242534);
   ParabolaFunc1022->SetSavedPoint(93,0.04069137);
   ParabolaFunc1022->SetSavedPoint(94,0.03892445);
   ParabolaFunc1022->SetSavedPoint(95,0.03712459);
   ParabolaFunc1022->SetSavedPoint(96,0.0352918);
   ParabolaFunc1022->SetSavedPoint(97,0.03342605);
   ParabolaFunc1022->SetSavedPoint(98,0.03152737);
   ParabolaFunc1022->SetSavedPoint(99,0.02959574);
   ParabolaFunc1022->SetSavedPoint(100,0.02763118);
   ParabolaFunc1022->SetSavedPoint(101,750);
   ParabolaFunc1022->SetSavedPoint(102,2500);
   ParabolaFunc1022->SetFillColor(19);
   ParabolaFunc1022->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1022->SetLineColor(ci);
   ParabolaFunc1022->SetLineWidth(3);
   ParabolaFunc1022->SetChisquare(0.9503446);
   ParabolaFunc1022->SetNDF(4);
   ParabolaFunc1022->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1022->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1022->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1022->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1022->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1022->SetParameter(0,-5.378272e-08);
   ParabolaFunc1022->SetParError(0,1.271457e-08);
   ParabolaFunc1022->SetParLimits(0,0,0);
   ParabolaFunc1022->SetParameter(1,0.0001557114);
   ParabolaFunc1022->SetParError(1,4.215323e-05);
   ParabolaFunc1022->SetParLimits(1,0,0);
   ParabolaFunc1022->SetParameter(2,-0.02550536);
   ParabolaFunc1022->SetParError(2,0.03384241);
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
   ParabolaFunc1023->SetSavedPoint(0,0.06102542);
   ParabolaFunc1023->SetSavedPoint(1,0.0623221);
   ParabolaFunc1023->SetSavedPoint(2,0.06358584);
   ParabolaFunc1023->SetSavedPoint(3,0.06481664);
   ParabolaFunc1023->SetSavedPoint(4,0.0660145);
   ParabolaFunc1023->SetSavedPoint(5,0.06717941);
   ParabolaFunc1023->SetSavedPoint(6,0.06831139);
   ParabolaFunc1023->SetSavedPoint(7,0.06941042);
   ParabolaFunc1023->SetSavedPoint(8,0.0704765);
   ParabolaFunc1023->SetSavedPoint(9,0.07150965);
   ParabolaFunc1023->SetSavedPoint(10,0.07250986);
   ParabolaFunc1023->SetSavedPoint(11,0.07347712);
   ParabolaFunc1023->SetSavedPoint(12,0.07441144);
   ParabolaFunc1023->SetSavedPoint(13,0.07531282);
   ParabolaFunc1023->SetSavedPoint(14,0.07618126);
   ParabolaFunc1023->SetSavedPoint(15,0.07701675);
   ParabolaFunc1023->SetSavedPoint(16,0.07781931);
   ParabolaFunc1023->SetSavedPoint(17,0.07858892);
   ParabolaFunc1023->SetSavedPoint(18,0.07932559);
   ParabolaFunc1023->SetSavedPoint(19,0.08002932);
   ParabolaFunc1023->SetSavedPoint(20,0.0807001);
   ParabolaFunc1023->SetSavedPoint(21,0.08133795);
   ParabolaFunc1023->SetSavedPoint(22,0.08194285);
   ParabolaFunc1023->SetSavedPoint(23,0.08251481);
   ParabolaFunc1023->SetSavedPoint(24,0.08305383);
   ParabolaFunc1023->SetSavedPoint(25,0.0835599);
   ParabolaFunc1023->SetSavedPoint(26,0.08403304);
   ParabolaFunc1023->SetSavedPoint(27,0.08447323);
   ParabolaFunc1023->SetSavedPoint(28,0.08488048);
   ParabolaFunc1023->SetSavedPoint(29,0.08525479);
   ParabolaFunc1023->SetSavedPoint(30,0.08559616);
   ParabolaFunc1023->SetSavedPoint(31,0.08590458);
   ParabolaFunc1023->SetSavedPoint(32,0.08618007);
   ParabolaFunc1023->SetSavedPoint(33,0.08642261);
   ParabolaFunc1023->SetSavedPoint(34,0.08663221);
   ParabolaFunc1023->SetSavedPoint(35,0.08680886);
   ParabolaFunc1023->SetSavedPoint(36,0.08695258);
   ParabolaFunc1023->SetSavedPoint(37,0.08706335);
   ParabolaFunc1023->SetSavedPoint(38,0.08714118);
   ParabolaFunc1023->SetSavedPoint(39,0.08718607);
   ParabolaFunc1023->SetSavedPoint(40,0.08719802);
   ParabolaFunc1023->SetSavedPoint(41,0.08717703);
   ParabolaFunc1023->SetSavedPoint(42,0.08712309);
   ParabolaFunc1023->SetSavedPoint(43,0.08703621);
   ParabolaFunc1023->SetSavedPoint(44,0.08691639);
   ParabolaFunc1023->SetSavedPoint(45,0.08676363);
   ParabolaFunc1023->SetSavedPoint(46,0.08657793);
   ParabolaFunc1023->SetSavedPoint(47,0.08635928);
   ParabolaFunc1023->SetSavedPoint(48,0.08610769);
   ParabolaFunc1023->SetSavedPoint(49,0.08582316);
   ParabolaFunc1023->SetSavedPoint(50,0.08550569);
   ParabolaFunc1023->SetSavedPoint(51,0.08515528);
   ParabolaFunc1023->SetSavedPoint(52,0.08477192);
   ParabolaFunc1023->SetSavedPoint(53,0.08435563);
   ParabolaFunc1023->SetSavedPoint(54,0.08390639);
   ParabolaFunc1023->SetSavedPoint(55,0.08342421);
   ParabolaFunc1023->SetSavedPoint(56,0.08290908);
   ParabolaFunc1023->SetSavedPoint(57,0.08236102);
   ParabolaFunc1023->SetSavedPoint(58,0.08178001);
   ParabolaFunc1023->SetSavedPoint(59,0.08116606);
   ParabolaFunc1023->SetSavedPoint(60,0.08051917);
   ParabolaFunc1023->SetSavedPoint(61,0.07983934);
   ParabolaFunc1023->SetSavedPoint(62,0.07912657);
   ParabolaFunc1023->SetSavedPoint(63,0.07838085);
   ParabolaFunc1023->SetSavedPoint(64,0.07760219);
   ParabolaFunc1023->SetSavedPoint(65,0.07679059);
   ParabolaFunc1023->SetSavedPoint(66,0.07594605);
   ParabolaFunc1023->SetSavedPoint(67,0.07506856);
   ParabolaFunc1023->SetSavedPoint(68,0.07415814);
   ParabolaFunc1023->SetSavedPoint(69,0.07321477);
   ParabolaFunc1023->SetSavedPoint(70,0.07223846);
   ParabolaFunc1023->SetSavedPoint(71,0.07122921);
   ParabolaFunc1023->SetSavedPoint(72,0.07018702);
   ParabolaFunc1023->SetSavedPoint(73,0.06911188);
   ParabolaFunc1023->SetSavedPoint(74,0.0680038);
   ParabolaFunc1023->SetSavedPoint(75,0.06686278);
   ParabolaFunc1023->SetSavedPoint(76,0.06568882);
   ParabolaFunc1023->SetSavedPoint(77,0.06448192);
   ParabolaFunc1023->SetSavedPoint(78,0.06324207);
   ParabolaFunc1023->SetSavedPoint(79,0.06196929);
   ParabolaFunc1023->SetSavedPoint(80,0.06066356);
   ParabolaFunc1023->SetSavedPoint(81,0.05932489);
   ParabolaFunc1023->SetSavedPoint(82,0.05795327);
   ParabolaFunc1023->SetSavedPoint(83,0.05654872);
   ParabolaFunc1023->SetSavedPoint(84,0.05511122);
   ParabolaFunc1023->SetSavedPoint(85,0.05364078);
   ParabolaFunc1023->SetSavedPoint(86,0.0521374);
   ParabolaFunc1023->SetSavedPoint(87,0.05060108);
   ParabolaFunc1023->SetSavedPoint(88,0.04903182);
   ParabolaFunc1023->SetSavedPoint(89,0.04742961);
   ParabolaFunc1023->SetSavedPoint(90,0.04579446);
   ParabolaFunc1023->SetSavedPoint(91,0.04412637);
   ParabolaFunc1023->SetSavedPoint(92,0.04242534);
   ParabolaFunc1023->SetSavedPoint(93,0.04069137);
   ParabolaFunc1023->SetSavedPoint(94,0.03892445);
   ParabolaFunc1023->SetSavedPoint(95,0.03712459);
   ParabolaFunc1023->SetSavedPoint(96,0.0352918);
   ParabolaFunc1023->SetSavedPoint(97,0.03342605);
   ParabolaFunc1023->SetSavedPoint(98,0.03152737);
   ParabolaFunc1023->SetSavedPoint(99,0.02959574);
   ParabolaFunc1023->SetSavedPoint(100,0.02763118);
   ParabolaFunc1023->SetSavedPoint(101,750);
   ParabolaFunc1023->SetSavedPoint(102,2500);
   ParabolaFunc1023->SetFillColor(19);
   ParabolaFunc1023->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1023->SetLineColor(ci);
   ParabolaFunc1023->SetLineWidth(3);
   ParabolaFunc1023->SetChisquare(0.9503446);
   ParabolaFunc1023->SetNDF(4);
   ParabolaFunc1023->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1023->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1023->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1023->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1023->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1023->SetParameter(0,-5.378272e-08);
   ParabolaFunc1023->SetParError(0,1.271457e-08);
   ParabolaFunc1023->SetParLimits(0,0,0);
   ParabolaFunc1023->SetParameter(1,0.0001557114);
   ParabolaFunc1023->SetParError(1,4.215323e-05);
   ParabolaFunc1023->SetParLimits(1,0,0);
   ParabolaFunc1023->SetParameter(2,-0.02550536);
   ParabolaFunc1023->SetParError(2,0.03384241);
   ParabolaFunc1023->SetParLimits(2,0,0);
   ParabolaFunc1023->Draw("SAME");
   
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
   pt_LaTex = pt->AddText("0.238
");
   pt_LaTex = pt->AddText("(-5#pm2)#times10^{-8}");
   pt_LaTex = pt->AddText("(1.6#pm0.6)#times10^{-4}");
   pt_LaTex = pt->AddText("-0.03
#pm0.03
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
