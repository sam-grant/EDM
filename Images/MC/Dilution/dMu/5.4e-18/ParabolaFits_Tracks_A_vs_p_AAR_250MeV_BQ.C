void ParabolaFits_Tracks_A_vs_p_AAR_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Sep 13 11:28:30 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-413.4688,-0.073125,3393.719,0.158125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t trackReco_fx1001[11] = {
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
   Double_t trackReco_fy1001[11] = {
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
   Double_t trackReco_fex1001[11] = {
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
   Double_t trackReco_fey1001[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,trackReco_fx1001,trackReco_fy1001,trackReco_fex1001,trackReco_fey1001);
   gre->SetName("trackReco");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;d_{EDM}(p)");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackReco1001 = new TH1F("Graph_trackReco1001","",100,0,3275);
   Graph_trackReco1001->SetMinimum(-0.05);
   Graph_trackReco1001->SetMaximum(0.135);
   Graph_trackReco1001->SetDirectory(0);
   Graph_trackReco1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_trackReco1001->SetLineColor(ci);
   Graph_trackReco1001->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_trackReco1001->GetXaxis()->SetRange(0,92);
   Graph_trackReco1001->GetXaxis()->CenterTitle(true);
   Graph_trackReco1001->GetXaxis()->SetLabelFont(42);
   Graph_trackReco1001->GetXaxis()->SetTitleSize(0.04);
   Graph_trackReco1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_trackReco1001->GetXaxis()->SetTitleFont(42);
   Graph_trackReco1001->GetYaxis()->SetTitle("d_{EDM}(p)");
   Graph_trackReco1001->GetYaxis()->CenterTitle(true);
   Graph_trackReco1001->GetYaxis()->SetNdivisions(4000510);
   Graph_trackReco1001->GetYaxis()->SetLabelFont(42);
   Graph_trackReco1001->GetYaxis()->SetTitleSize(0.04);
   Graph_trackReco1001->GetYaxis()->SetTitleOffset(1.15);
   Graph_trackReco1001->GetYaxis()->SetTitleFont(42);
   Graph_trackReco1001->GetZaxis()->SetLabelFont(42);
   Graph_trackReco1001->GetZaxis()->SetTitleOffset(1);
   Graph_trackReco1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackReco1001);
   
   
   TF1 *ParabolaFunc1002 = new TF1("*ParabolaFunc",750,2500,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2500,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1002->SetRange(750,2500);
   ParabolaFunc1002->SetName("ParabolaFunc");
   ParabolaFunc1002->SetTitle("ParabolaFunc");
   ParabolaFunc1002->SetSavedPoint(0,0.05983546);
   ParabolaFunc1002->SetSavedPoint(1,0.06120321);
   ParabolaFunc1002->SetSavedPoint(2,0.06253668);
   ParabolaFunc1002->SetSavedPoint(3,0.06383589);
   ParabolaFunc1002->SetSavedPoint(4,0.06510083);
   ParabolaFunc1002->SetSavedPoint(5,0.06633149);
   ParabolaFunc1002->SetSavedPoint(6,0.06752788);
   ParabolaFunc1002->SetSavedPoint(7,0.06869);
   ParabolaFunc1002->SetSavedPoint(8,0.06981785);
   ParabolaFunc1002->SetSavedPoint(9,0.07091142);
   ParabolaFunc1002->SetSavedPoint(10,0.07197073);
   ParabolaFunc1002->SetSavedPoint(11,0.07299576);
   ParabolaFunc1002->SetSavedPoint(12,0.07398652);
   ParabolaFunc1002->SetSavedPoint(13,0.07494301);
   ParabolaFunc1002->SetSavedPoint(14,0.07586523);
   ParabolaFunc1002->SetSavedPoint(15,0.07675317);
   ParabolaFunc1002->SetSavedPoint(16,0.07760685);
   ParabolaFunc1002->SetSavedPoint(17,0.07842625);
   ParabolaFunc1002->SetSavedPoint(18,0.07921138);
   ParabolaFunc1002->SetSavedPoint(19,0.07996224);
   ParabolaFunc1002->SetSavedPoint(20,0.08067883);
   ParabolaFunc1002->SetSavedPoint(21,0.08136114);
   ParabolaFunc1002->SetSavedPoint(22,0.08200919);
   ParabolaFunc1002->SetSavedPoint(23,0.08262296);
   ParabolaFunc1002->SetSavedPoint(24,0.08320246);
   ParabolaFunc1002->SetSavedPoint(25,0.08374768);
   ParabolaFunc1002->SetSavedPoint(26,0.08425864);
   ParabolaFunc1002->SetSavedPoint(27,0.08473533);
   ParabolaFunc1002->SetSavedPoint(28,0.08517774);
   ParabolaFunc1002->SetSavedPoint(29,0.08558588);
   ParabolaFunc1002->SetSavedPoint(30,0.08595975);
   ParabolaFunc1002->SetSavedPoint(31,0.08629935);
   ParabolaFunc1002->SetSavedPoint(32,0.08660467);
   ParabolaFunc1002->SetSavedPoint(33,0.08687573);
   ParabolaFunc1002->SetSavedPoint(34,0.08711251);
   ParabolaFunc1002->SetSavedPoint(35,0.08731502);
   ParabolaFunc1002->SetSavedPoint(36,0.08748326);
   ParabolaFunc1002->SetSavedPoint(37,0.08761722);
   ParabolaFunc1002->SetSavedPoint(38,0.08771692);
   ParabolaFunc1002->SetSavedPoint(39,0.08778234);
   ParabolaFunc1002->SetSavedPoint(40,0.08781349);
   ParabolaFunc1002->SetSavedPoint(41,0.08781037);
   ParabolaFunc1002->SetSavedPoint(42,0.08777298);
   ParabolaFunc1002->SetSavedPoint(43,0.08770132);
   ParabolaFunc1002->SetSavedPoint(44,0.08759538);
   ParabolaFunc1002->SetSavedPoint(45,0.08745518);
   ParabolaFunc1002->SetSavedPoint(46,0.0872807);
   ParabolaFunc1002->SetSavedPoint(47,0.08707195);
   ParabolaFunc1002->SetSavedPoint(48,0.08682892);
   ParabolaFunc1002->SetSavedPoint(49,0.08655163);
   ParabolaFunc1002->SetSavedPoint(50,0.08624006);
   ParabolaFunc1002->SetSavedPoint(51,0.08589423);
   ParabolaFunc1002->SetSavedPoint(52,0.08551412);
   ParabolaFunc1002->SetSavedPoint(53,0.08509974);
   ParabolaFunc1002->SetSavedPoint(54,0.08465108);
   ParabolaFunc1002->SetSavedPoint(55,0.08416816);
   ParabolaFunc1002->SetSavedPoint(56,0.08365096);
   ParabolaFunc1002->SetSavedPoint(57,0.08309949);
   ParabolaFunc1002->SetSavedPoint(58,0.08251375);
   ParabolaFunc1002->SetSavedPoint(59,0.08189374);
   ParabolaFunc1002->SetSavedPoint(60,0.08123946);
   ParabolaFunc1002->SetSavedPoint(61,0.0805509);
   ParabolaFunc1002->SetSavedPoint(62,0.07982808);
   ParabolaFunc1002->SetSavedPoint(63,0.07907098);
   ParabolaFunc1002->SetSavedPoint(64,0.07827961);
   ParabolaFunc1002->SetSavedPoint(65,0.07745397);
   ParabolaFunc1002->SetSavedPoint(66,0.07659405);
   ParabolaFunc1002->SetSavedPoint(67,0.07569987);
   ParabolaFunc1002->SetSavedPoint(68,0.07477141);
   ParabolaFunc1002->SetSavedPoint(69,0.07380868);
   ParabolaFunc1002->SetSavedPoint(70,0.07281168);
   ParabolaFunc1002->SetSavedPoint(71,0.07178041);
   ParabolaFunc1002->SetSavedPoint(72,0.07071486);
   ParabolaFunc1002->SetSavedPoint(73,0.06961504);
   ParabolaFunc1002->SetSavedPoint(74,0.06848096);
   ParabolaFunc1002->SetSavedPoint(75,0.0673126);
   ParabolaFunc1002->SetSavedPoint(76,0.06610996);
   ParabolaFunc1002->SetSavedPoint(77,0.06487306);
   ParabolaFunc1002->SetSavedPoint(78,0.06360189);
   ParabolaFunc1002->SetSavedPoint(79,0.06229644);
   ParabolaFunc1002->SetSavedPoint(80,0.06095672);
   ParabolaFunc1002->SetSavedPoint(81,0.05958273);
   ParabolaFunc1002->SetSavedPoint(82,0.05817447);
   ParabolaFunc1002->SetSavedPoint(83,0.05673193);
   ParabolaFunc1002->SetSavedPoint(84,0.05525513);
   ParabolaFunc1002->SetSavedPoint(85,0.05374405);
   ParabolaFunc1002->SetSavedPoint(86,0.0521987);
   ParabolaFunc1002->SetSavedPoint(87,0.05061908);
   ParabolaFunc1002->SetSavedPoint(88,0.04900519);
   ParabolaFunc1002->SetSavedPoint(89,0.04735702);
   ParabolaFunc1002->SetSavedPoint(90,0.04567459);
   ParabolaFunc1002->SetSavedPoint(91,0.04395788);
   ParabolaFunc1002->SetSavedPoint(92,0.0422069);
   ParabolaFunc1002->SetSavedPoint(93,0.04042165);
   ParabolaFunc1002->SetSavedPoint(94,0.03860213);
   ParabolaFunc1002->SetSavedPoint(95,0.03674833);
   ParabolaFunc1002->SetSavedPoint(96,0.03486026);
   ParabolaFunc1002->SetSavedPoint(97,0.03293792);
   ParabolaFunc1002->SetSavedPoint(98,0.03098131);
   ParabolaFunc1002->SetSavedPoint(99,0.02899043);
   ParabolaFunc1002->SetSavedPoint(100,0.02696528);
   ParabolaFunc1002->SetSavedPoint(101,750);
   ParabolaFunc1002->SetSavedPoint(102,2500);
   ParabolaFunc1002->SetFillColor(19);
   ParabolaFunc1002->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1002->SetLineColor(ci);
   ParabolaFunc1002->SetLineWidth(3);
   ParabolaFunc1002->SetChisquare(0.9279373);
   ParabolaFunc1002->SetNDF(4);
   ParabolaFunc1002->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1002->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1002->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1002->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1002->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1002->SetParameter(0,-5.595389e-08);
   ParabolaFunc1002->SetParError(0,2.416525e-08);
   ParabolaFunc1002->SetParLimits(0,0,0);
   ParabolaFunc1002->SetParameter(1,0.0001630672);
   ParabolaFunc1002->SetParError(1,8.006433e-05);
   ParabolaFunc1002->SetParLimits(1,0,0);
   ParabolaFunc1002->SetParameter(2,-0.03099087);
   ParabolaFunc1002->SetParError(2,0.06326218);
   ParabolaFunc1002->SetParLimits(2,0,0);
   ParabolaFunc1002->SetParent(gre);
   gre->GetListOfFunctions()->Add(ParabolaFunc1002);
   gre->Draw("ap");
   
   Double_t trackTruth_fx1003[11] = {
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
   Double_t trackTruth_fy1003[11] = {
   -0.02567572,
   0.09509227,
   0.07148026,
   0.08233936,
   0.07848344,
   0.09218393,
   0.08046866,
   0.05880107,
   0.0377722,
   0.05774846,
   -0.008504013};
   Double_t trackTruth_fex1003[11] = {
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
   Double_t trackTruth_fey1003[11] = {
   0.06369066,
   0.02129351,
   0.01223112,
   0.01003911,
   0.009197576,
   0.00875924,
   0.00877848,
   0.009186698,
   0.009760662,
   0.009691082,
   0.02115107};
   gre = new TGraphErrors(11,trackTruth_fx1003,trackTruth_fy1003,trackTruth_fex1003,trackTruth_fey1003);
   gre->SetName("trackTruth");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackTruth1003 = new TH1F("Graph_trackTruth1003","Graph",100,0,3275);
   Graph_trackTruth1003->SetMinimum(-0.1099416);
   Graph_trackTruth1003->SetMaximum(0.136961);
   Graph_trackTruth1003->SetDirectory(0);
   Graph_trackTruth1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_trackTruth1003->SetLineColor(ci);
   Graph_trackTruth1003->GetXaxis()->SetLabelFont(42);
   Graph_trackTruth1003->GetXaxis()->SetTitleOffset(1);
   Graph_trackTruth1003->GetXaxis()->SetTitleFont(42);
   Graph_trackTruth1003->GetYaxis()->SetLabelFont(42);
   Graph_trackTruth1003->GetYaxis()->SetTitleFont(42);
   Graph_trackTruth1003->GetZaxis()->SetLabelFont(42);
   Graph_trackTruth1003->GetZaxis()->SetTitleOffset(1);
   Graph_trackTruth1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackTruth1003);
   
   
   TF1 *ParabolaFunc1004 = new TF1("*ParabolaFunc",750,2500,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2500,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1004->SetRange(750,2500);
   ParabolaFunc1004->SetName("ParabolaFunc");
   ParabolaFunc1004->SetTitle("ParabolaFunc");
   ParabolaFunc1004->SetSavedPoint(0,0.05743376);
   ParabolaFunc1004->SetSavedPoint(1,0.0589031);
   ParabolaFunc1004->SetSavedPoint(2,0.06033605);
   ParabolaFunc1004->SetSavedPoint(3,0.06173262);
   ParabolaFunc1004->SetSavedPoint(4,0.06309281);
   ParabolaFunc1004->SetSavedPoint(5,0.06441662);
   ParabolaFunc1004->SetSavedPoint(6,0.06570404);
   ParabolaFunc1004->SetSavedPoint(7,0.06695508);
   ParabolaFunc1004->SetSavedPoint(8,0.06816974);
   ParabolaFunc1004->SetSavedPoint(9,0.06934802);
   ParabolaFunc1004->SetSavedPoint(10,0.07048992);
   ParabolaFunc1004->SetSavedPoint(11,0.07159543);
   ParabolaFunc1004->SetSavedPoint(12,0.07266456);
   ParabolaFunc1004->SetSavedPoint(13,0.07369731);
   ParabolaFunc1004->SetSavedPoint(14,0.07469368);
   ParabolaFunc1004->SetSavedPoint(15,0.07565367);
   ParabolaFunc1004->SetSavedPoint(16,0.07657727);
   ParabolaFunc1004->SetSavedPoint(17,0.0774645);
   ParabolaFunc1004->SetSavedPoint(18,0.07831534);
   ParabolaFunc1004->SetSavedPoint(19,0.07912979);
   ParabolaFunc1004->SetSavedPoint(20,0.07990787);
   ParabolaFunc1004->SetSavedPoint(21,0.08064956);
   ParabolaFunc1004->SetSavedPoint(22,0.08135488);
   ParabolaFunc1004->SetSavedPoint(23,0.08202381);
   ParabolaFunc1004->SetSavedPoint(24,0.08265635);
   ParabolaFunc1004->SetSavedPoint(25,0.08325252);
   ParabolaFunc1004->SetSavedPoint(26,0.0838123);
   ParabolaFunc1004->SetSavedPoint(27,0.08433571);
   ParabolaFunc1004->SetSavedPoint(28,0.08482273);
   ParabolaFunc1004->SetSavedPoint(29,0.08527336);
   ParabolaFunc1004->SetSavedPoint(30,0.08568762);
   ParabolaFunc1004->SetSavedPoint(31,0.08606549);
   ParabolaFunc1004->SetSavedPoint(32,0.08640699);
   ParabolaFunc1004->SetSavedPoint(33,0.0867121);
   ParabolaFunc1004->SetSavedPoint(34,0.08698082);
   ParabolaFunc1004->SetSavedPoint(35,0.08721317);
   ParabolaFunc1004->SetSavedPoint(36,0.08740913);
   ParabolaFunc1004->SetSavedPoint(37,0.08756871);
   ParabolaFunc1004->SetSavedPoint(38,0.08769191);
   ParabolaFunc1004->SetSavedPoint(39,0.08777873);
   ParabolaFunc1004->SetSavedPoint(40,0.08782917);
   ParabolaFunc1004->SetSavedPoint(41,0.08784322);
   ParabolaFunc1004->SetSavedPoint(42,0.08782089);
   ParabolaFunc1004->SetSavedPoint(43,0.08776218);
   ParabolaFunc1004->SetSavedPoint(44,0.08766709);
   ParabolaFunc1004->SetSavedPoint(45,0.08753561);
   ParabolaFunc1004->SetSavedPoint(46,0.08736776);
   ParabolaFunc1004->SetSavedPoint(47,0.08716352);
   ParabolaFunc1004->SetSavedPoint(48,0.0869229);
   ParabolaFunc1004->SetSavedPoint(49,0.0866459);
   ParabolaFunc1004->SetSavedPoint(50,0.08633251);
   ParabolaFunc1004->SetSavedPoint(51,0.08598275);
   ParabolaFunc1004->SetSavedPoint(52,0.0855966);
   ParabolaFunc1004->SetSavedPoint(53,0.08517407);
   ParabolaFunc1004->SetSavedPoint(54,0.08471515);
   ParabolaFunc1004->SetSavedPoint(55,0.08421986);
   ParabolaFunc1004->SetSavedPoint(56,0.08368818);
   ParabolaFunc1004->SetSavedPoint(57,0.08312012);
   ParabolaFunc1004->SetSavedPoint(58,0.08251568);
   ParabolaFunc1004->SetSavedPoint(59,0.08187486);
   ParabolaFunc1004->SetSavedPoint(60,0.08119765);
   ParabolaFunc1004->SetSavedPoint(61,0.08048407);
   ParabolaFunc1004->SetSavedPoint(62,0.0797341);
   ParabolaFunc1004->SetSavedPoint(63,0.07894775);
   ParabolaFunc1004->SetSavedPoint(64,0.07812502);
   ParabolaFunc1004->SetSavedPoint(65,0.0772659);
   ParabolaFunc1004->SetSavedPoint(66,0.0763704);
   ParabolaFunc1004->SetSavedPoint(67,0.07543852);
   ParabolaFunc1004->SetSavedPoint(68,0.07447026);
   ParabolaFunc1004->SetSavedPoint(69,0.07346562);
   ParabolaFunc1004->SetSavedPoint(70,0.07242459);
   ParabolaFunc1004->SetSavedPoint(71,0.07134719);
   ParabolaFunc1004->SetSavedPoint(72,0.0702334);
   ParabolaFunc1004->SetSavedPoint(73,0.06908323);
   ParabolaFunc1004->SetSavedPoint(74,0.06789667);
   ParabolaFunc1004->SetSavedPoint(75,0.06667374);
   ParabolaFunc1004->SetSavedPoint(76,0.06541442);
   ParabolaFunc1004->SetSavedPoint(77,0.06411872);
   ParabolaFunc1004->SetSavedPoint(78,0.06278664);
   ParabolaFunc1004->SetSavedPoint(79,0.06141818);
   ParabolaFunc1004->SetSavedPoint(80,0.06001333);
   ParabolaFunc1004->SetSavedPoint(81,0.05857211);
   ParabolaFunc1004->SetSavedPoint(82,0.0570945);
   ParabolaFunc1004->SetSavedPoint(83,0.0555805);
   ParabolaFunc1004->SetSavedPoint(84,0.05403013);
   ParabolaFunc1004->SetSavedPoint(85,0.05244338);
   ParabolaFunc1004->SetSavedPoint(86,0.05082024);
   ParabolaFunc1004->SetSavedPoint(87,0.04916072);
   ParabolaFunc1004->SetSavedPoint(88,0.04746482);
   ParabolaFunc1004->SetSavedPoint(89,0.04573253);
   ParabolaFunc1004->SetSavedPoint(90,0.04396387);
   ParabolaFunc1004->SetSavedPoint(91,0.04215882);
   ParabolaFunc1004->SetSavedPoint(92,0.04031739);
   ParabolaFunc1004->SetSavedPoint(93,0.03843958);
   ParabolaFunc1004->SetSavedPoint(94,0.03652539);
   ParabolaFunc1004->SetSavedPoint(95,0.03457481);
   ParabolaFunc1004->SetSavedPoint(96,0.03258785);
   ParabolaFunc1004->SetSavedPoint(97,0.03056451);
   ParabolaFunc1004->SetSavedPoint(98,0.02850479);
   ParabolaFunc1004->SetSavedPoint(99,0.02640869);
   ParabolaFunc1004->SetSavedPoint(100,0.0242762);
   ParabolaFunc1004->SetSavedPoint(101,750);
   ParabolaFunc1004->SetSavedPoint(102,2500);
   ParabolaFunc1004->SetFillColor(19);
   ParabolaFunc1004->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   ParabolaFunc1004->SetLineColor(ci);
   ParabolaFunc1004->SetLineWidth(3);
   ParabolaFunc1004->SetChisquare(1.544675);
   ParabolaFunc1004->SetNDF(4);
   ParabolaFunc1004->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1004->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1004->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1004->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1004->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1004->SetParameter(0,-5.939922e-08);
   ParabolaFunc1004->SetParError(0,2.52892e-08);
   ParabolaFunc1004->SetParLimits(0,0,0);
   ParabolaFunc1004->SetParameter(1,0.0001741003);
   ParabolaFunc1004->SetParError(1,8.420926e-05);
   ParabolaFunc1004->SetParLimits(1,0,0);
   ParabolaFunc1004->SetParameter(2,-0.03972939);
   ParabolaFunc1004->SetParError(2,0.06688413);
   ParabolaFunc1004->SetParLimits(2,0,0);
   ParabolaFunc1004->SetParent(gre);
   gre->GetListOfFunctions()->Add(ParabolaFunc1004);
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.49,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("trackReco","#bf{Tracked reco decays}","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("trackTruth","#bf{Tracked truth decays}","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   
   leg = new TLegend(0.26,0.2,0.71,0.49,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(20);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("ParabolaFunc","#splitline{a = (-4#pm2)#times10^{-8} MeV^{-2}}{#splitline{b = (1.0#pm0.8)#times10^{-4} MeV^{-1}}{d_{0} = 0.02#pm0.06}}","lpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("ParabolaFunc","#splitline{a = (-3#pm2)#times10^{-8} MeV^{-2}}{#splitline{b = (9#pm8)#times10^{-5} MeV^{-1}}{d_{0} = 0.03#pm0.06}}","lpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.32,0.53,0.56,0.56,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextFont(44);
   pt->SetTextSize(22);
   TText *pt_LaTex = pt->AddText("#bf{d_{EDM}(p)=ap^{2}+bp+d_{0}}");
   pt->Draw();
   
   TF1 *ParabolaFunc1005 = new TF1("*ParabolaFunc",750,2500,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2500,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1005->SetRange(750,2500);
   ParabolaFunc1005->SetName("ParabolaFunc");
   ParabolaFunc1005->SetTitle("ParabolaFunc");
   ParabolaFunc1005->SetSavedPoint(0,0.05983546);
   ParabolaFunc1005->SetSavedPoint(1,0.06120321);
   ParabolaFunc1005->SetSavedPoint(2,0.06253668);
   ParabolaFunc1005->SetSavedPoint(3,0.06383589);
   ParabolaFunc1005->SetSavedPoint(4,0.06510083);
   ParabolaFunc1005->SetSavedPoint(5,0.06633149);
   ParabolaFunc1005->SetSavedPoint(6,0.06752788);
   ParabolaFunc1005->SetSavedPoint(7,0.06869);
   ParabolaFunc1005->SetSavedPoint(8,0.06981785);
   ParabolaFunc1005->SetSavedPoint(9,0.07091142);
   ParabolaFunc1005->SetSavedPoint(10,0.07197073);
   ParabolaFunc1005->SetSavedPoint(11,0.07299576);
   ParabolaFunc1005->SetSavedPoint(12,0.07398652);
   ParabolaFunc1005->SetSavedPoint(13,0.07494301);
   ParabolaFunc1005->SetSavedPoint(14,0.07586523);
   ParabolaFunc1005->SetSavedPoint(15,0.07675317);
   ParabolaFunc1005->SetSavedPoint(16,0.07760685);
   ParabolaFunc1005->SetSavedPoint(17,0.07842625);
   ParabolaFunc1005->SetSavedPoint(18,0.07921138);
   ParabolaFunc1005->SetSavedPoint(19,0.07996224);
   ParabolaFunc1005->SetSavedPoint(20,0.08067883);
   ParabolaFunc1005->SetSavedPoint(21,0.08136114);
   ParabolaFunc1005->SetSavedPoint(22,0.08200919);
   ParabolaFunc1005->SetSavedPoint(23,0.08262296);
   ParabolaFunc1005->SetSavedPoint(24,0.08320246);
   ParabolaFunc1005->SetSavedPoint(25,0.08374768);
   ParabolaFunc1005->SetSavedPoint(26,0.08425864);
   ParabolaFunc1005->SetSavedPoint(27,0.08473533);
   ParabolaFunc1005->SetSavedPoint(28,0.08517774);
   ParabolaFunc1005->SetSavedPoint(29,0.08558588);
   ParabolaFunc1005->SetSavedPoint(30,0.08595975);
   ParabolaFunc1005->SetSavedPoint(31,0.08629935);
   ParabolaFunc1005->SetSavedPoint(32,0.08660467);
   ParabolaFunc1005->SetSavedPoint(33,0.08687573);
   ParabolaFunc1005->SetSavedPoint(34,0.08711251);
   ParabolaFunc1005->SetSavedPoint(35,0.08731502);
   ParabolaFunc1005->SetSavedPoint(36,0.08748326);
   ParabolaFunc1005->SetSavedPoint(37,0.08761722);
   ParabolaFunc1005->SetSavedPoint(38,0.08771692);
   ParabolaFunc1005->SetSavedPoint(39,0.08778234);
   ParabolaFunc1005->SetSavedPoint(40,0.08781349);
   ParabolaFunc1005->SetSavedPoint(41,0.08781037);
   ParabolaFunc1005->SetSavedPoint(42,0.08777298);
   ParabolaFunc1005->SetSavedPoint(43,0.08770132);
   ParabolaFunc1005->SetSavedPoint(44,0.08759538);
   ParabolaFunc1005->SetSavedPoint(45,0.08745518);
   ParabolaFunc1005->SetSavedPoint(46,0.0872807);
   ParabolaFunc1005->SetSavedPoint(47,0.08707195);
   ParabolaFunc1005->SetSavedPoint(48,0.08682892);
   ParabolaFunc1005->SetSavedPoint(49,0.08655163);
   ParabolaFunc1005->SetSavedPoint(50,0.08624006);
   ParabolaFunc1005->SetSavedPoint(51,0.08589423);
   ParabolaFunc1005->SetSavedPoint(52,0.08551412);
   ParabolaFunc1005->SetSavedPoint(53,0.08509974);
   ParabolaFunc1005->SetSavedPoint(54,0.08465108);
   ParabolaFunc1005->SetSavedPoint(55,0.08416816);
   ParabolaFunc1005->SetSavedPoint(56,0.08365096);
   ParabolaFunc1005->SetSavedPoint(57,0.08309949);
   ParabolaFunc1005->SetSavedPoint(58,0.08251375);
   ParabolaFunc1005->SetSavedPoint(59,0.08189374);
   ParabolaFunc1005->SetSavedPoint(60,0.08123946);
   ParabolaFunc1005->SetSavedPoint(61,0.0805509);
   ParabolaFunc1005->SetSavedPoint(62,0.07982808);
   ParabolaFunc1005->SetSavedPoint(63,0.07907098);
   ParabolaFunc1005->SetSavedPoint(64,0.07827961);
   ParabolaFunc1005->SetSavedPoint(65,0.07745397);
   ParabolaFunc1005->SetSavedPoint(66,0.07659405);
   ParabolaFunc1005->SetSavedPoint(67,0.07569987);
   ParabolaFunc1005->SetSavedPoint(68,0.07477141);
   ParabolaFunc1005->SetSavedPoint(69,0.07380868);
   ParabolaFunc1005->SetSavedPoint(70,0.07281168);
   ParabolaFunc1005->SetSavedPoint(71,0.07178041);
   ParabolaFunc1005->SetSavedPoint(72,0.07071486);
   ParabolaFunc1005->SetSavedPoint(73,0.06961504);
   ParabolaFunc1005->SetSavedPoint(74,0.06848096);
   ParabolaFunc1005->SetSavedPoint(75,0.0673126);
   ParabolaFunc1005->SetSavedPoint(76,0.06610996);
   ParabolaFunc1005->SetSavedPoint(77,0.06487306);
   ParabolaFunc1005->SetSavedPoint(78,0.06360189);
   ParabolaFunc1005->SetSavedPoint(79,0.06229644);
   ParabolaFunc1005->SetSavedPoint(80,0.06095672);
   ParabolaFunc1005->SetSavedPoint(81,0.05958273);
   ParabolaFunc1005->SetSavedPoint(82,0.05817447);
   ParabolaFunc1005->SetSavedPoint(83,0.05673193);
   ParabolaFunc1005->SetSavedPoint(84,0.05525513);
   ParabolaFunc1005->SetSavedPoint(85,0.05374405);
   ParabolaFunc1005->SetSavedPoint(86,0.0521987);
   ParabolaFunc1005->SetSavedPoint(87,0.05061908);
   ParabolaFunc1005->SetSavedPoint(88,0.04900519);
   ParabolaFunc1005->SetSavedPoint(89,0.04735702);
   ParabolaFunc1005->SetSavedPoint(90,0.04567459);
   ParabolaFunc1005->SetSavedPoint(91,0.04395788);
   ParabolaFunc1005->SetSavedPoint(92,0.0422069);
   ParabolaFunc1005->SetSavedPoint(93,0.04042165);
   ParabolaFunc1005->SetSavedPoint(94,0.03860213);
   ParabolaFunc1005->SetSavedPoint(95,0.03674833);
   ParabolaFunc1005->SetSavedPoint(96,0.03486026);
   ParabolaFunc1005->SetSavedPoint(97,0.03293792);
   ParabolaFunc1005->SetSavedPoint(98,0.03098131);
   ParabolaFunc1005->SetSavedPoint(99,0.02899043);
   ParabolaFunc1005->SetSavedPoint(100,0.02696528);
   ParabolaFunc1005->SetSavedPoint(101,750);
   ParabolaFunc1005->SetSavedPoint(102,2500);
   ParabolaFunc1005->SetFillColor(19);
   ParabolaFunc1005->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1005->SetLineColor(ci);
   ParabolaFunc1005->SetLineWidth(3);
   ParabolaFunc1005->SetChisquare(0.9279373);
   ParabolaFunc1005->SetNDF(4);
   ParabolaFunc1005->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1005->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1005->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1005->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1005->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1005->SetParameter(0,-5.595389e-08);
   ParabolaFunc1005->SetParError(0,2.416525e-08);
   ParabolaFunc1005->SetParLimits(0,0,0);
   ParabolaFunc1005->SetParameter(1,0.0001630672);
   ParabolaFunc1005->SetParError(1,8.006433e-05);
   ParabolaFunc1005->SetParLimits(1,0,0);
   ParabolaFunc1005->SetParameter(2,-0.03099087);
   ParabolaFunc1005->SetParError(2,0.06326218);
   ParabolaFunc1005->SetParLimits(2,0,0);
   ParabolaFunc1005->Draw("same");
   
   TF1 *ParabolaFunc1006 = new TF1("*ParabolaFunc",750,2500,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2500,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1006->SetRange(750,2500);
   ParabolaFunc1006->SetName("ParabolaFunc");
   ParabolaFunc1006->SetTitle("ParabolaFunc");
   ParabolaFunc1006->SetSavedPoint(0,0.05743376);
   ParabolaFunc1006->SetSavedPoint(1,0.0589031);
   ParabolaFunc1006->SetSavedPoint(2,0.06033605);
   ParabolaFunc1006->SetSavedPoint(3,0.06173262);
   ParabolaFunc1006->SetSavedPoint(4,0.06309281);
   ParabolaFunc1006->SetSavedPoint(5,0.06441662);
   ParabolaFunc1006->SetSavedPoint(6,0.06570404);
   ParabolaFunc1006->SetSavedPoint(7,0.06695508);
   ParabolaFunc1006->SetSavedPoint(8,0.06816974);
   ParabolaFunc1006->SetSavedPoint(9,0.06934802);
   ParabolaFunc1006->SetSavedPoint(10,0.07048992);
   ParabolaFunc1006->SetSavedPoint(11,0.07159543);
   ParabolaFunc1006->SetSavedPoint(12,0.07266456);
   ParabolaFunc1006->SetSavedPoint(13,0.07369731);
   ParabolaFunc1006->SetSavedPoint(14,0.07469368);
   ParabolaFunc1006->SetSavedPoint(15,0.07565367);
   ParabolaFunc1006->SetSavedPoint(16,0.07657727);
   ParabolaFunc1006->SetSavedPoint(17,0.0774645);
   ParabolaFunc1006->SetSavedPoint(18,0.07831534);
   ParabolaFunc1006->SetSavedPoint(19,0.07912979);
   ParabolaFunc1006->SetSavedPoint(20,0.07990787);
   ParabolaFunc1006->SetSavedPoint(21,0.08064956);
   ParabolaFunc1006->SetSavedPoint(22,0.08135488);
   ParabolaFunc1006->SetSavedPoint(23,0.08202381);
   ParabolaFunc1006->SetSavedPoint(24,0.08265635);
   ParabolaFunc1006->SetSavedPoint(25,0.08325252);
   ParabolaFunc1006->SetSavedPoint(26,0.0838123);
   ParabolaFunc1006->SetSavedPoint(27,0.08433571);
   ParabolaFunc1006->SetSavedPoint(28,0.08482273);
   ParabolaFunc1006->SetSavedPoint(29,0.08527336);
   ParabolaFunc1006->SetSavedPoint(30,0.08568762);
   ParabolaFunc1006->SetSavedPoint(31,0.08606549);
   ParabolaFunc1006->SetSavedPoint(32,0.08640699);
   ParabolaFunc1006->SetSavedPoint(33,0.0867121);
   ParabolaFunc1006->SetSavedPoint(34,0.08698082);
   ParabolaFunc1006->SetSavedPoint(35,0.08721317);
   ParabolaFunc1006->SetSavedPoint(36,0.08740913);
   ParabolaFunc1006->SetSavedPoint(37,0.08756871);
   ParabolaFunc1006->SetSavedPoint(38,0.08769191);
   ParabolaFunc1006->SetSavedPoint(39,0.08777873);
   ParabolaFunc1006->SetSavedPoint(40,0.08782917);
   ParabolaFunc1006->SetSavedPoint(41,0.08784322);
   ParabolaFunc1006->SetSavedPoint(42,0.08782089);
   ParabolaFunc1006->SetSavedPoint(43,0.08776218);
   ParabolaFunc1006->SetSavedPoint(44,0.08766709);
   ParabolaFunc1006->SetSavedPoint(45,0.08753561);
   ParabolaFunc1006->SetSavedPoint(46,0.08736776);
   ParabolaFunc1006->SetSavedPoint(47,0.08716352);
   ParabolaFunc1006->SetSavedPoint(48,0.0869229);
   ParabolaFunc1006->SetSavedPoint(49,0.0866459);
   ParabolaFunc1006->SetSavedPoint(50,0.08633251);
   ParabolaFunc1006->SetSavedPoint(51,0.08598275);
   ParabolaFunc1006->SetSavedPoint(52,0.0855966);
   ParabolaFunc1006->SetSavedPoint(53,0.08517407);
   ParabolaFunc1006->SetSavedPoint(54,0.08471515);
   ParabolaFunc1006->SetSavedPoint(55,0.08421986);
   ParabolaFunc1006->SetSavedPoint(56,0.08368818);
   ParabolaFunc1006->SetSavedPoint(57,0.08312012);
   ParabolaFunc1006->SetSavedPoint(58,0.08251568);
   ParabolaFunc1006->SetSavedPoint(59,0.08187486);
   ParabolaFunc1006->SetSavedPoint(60,0.08119765);
   ParabolaFunc1006->SetSavedPoint(61,0.08048407);
   ParabolaFunc1006->SetSavedPoint(62,0.0797341);
   ParabolaFunc1006->SetSavedPoint(63,0.07894775);
   ParabolaFunc1006->SetSavedPoint(64,0.07812502);
   ParabolaFunc1006->SetSavedPoint(65,0.0772659);
   ParabolaFunc1006->SetSavedPoint(66,0.0763704);
   ParabolaFunc1006->SetSavedPoint(67,0.07543852);
   ParabolaFunc1006->SetSavedPoint(68,0.07447026);
   ParabolaFunc1006->SetSavedPoint(69,0.07346562);
   ParabolaFunc1006->SetSavedPoint(70,0.07242459);
   ParabolaFunc1006->SetSavedPoint(71,0.07134719);
   ParabolaFunc1006->SetSavedPoint(72,0.0702334);
   ParabolaFunc1006->SetSavedPoint(73,0.06908323);
   ParabolaFunc1006->SetSavedPoint(74,0.06789667);
   ParabolaFunc1006->SetSavedPoint(75,0.06667374);
   ParabolaFunc1006->SetSavedPoint(76,0.06541442);
   ParabolaFunc1006->SetSavedPoint(77,0.06411872);
   ParabolaFunc1006->SetSavedPoint(78,0.06278664);
   ParabolaFunc1006->SetSavedPoint(79,0.06141818);
   ParabolaFunc1006->SetSavedPoint(80,0.06001333);
   ParabolaFunc1006->SetSavedPoint(81,0.05857211);
   ParabolaFunc1006->SetSavedPoint(82,0.0570945);
   ParabolaFunc1006->SetSavedPoint(83,0.0555805);
   ParabolaFunc1006->SetSavedPoint(84,0.05403013);
   ParabolaFunc1006->SetSavedPoint(85,0.05244338);
   ParabolaFunc1006->SetSavedPoint(86,0.05082024);
   ParabolaFunc1006->SetSavedPoint(87,0.04916072);
   ParabolaFunc1006->SetSavedPoint(88,0.04746482);
   ParabolaFunc1006->SetSavedPoint(89,0.04573253);
   ParabolaFunc1006->SetSavedPoint(90,0.04396387);
   ParabolaFunc1006->SetSavedPoint(91,0.04215882);
   ParabolaFunc1006->SetSavedPoint(92,0.04031739);
   ParabolaFunc1006->SetSavedPoint(93,0.03843958);
   ParabolaFunc1006->SetSavedPoint(94,0.03652539);
   ParabolaFunc1006->SetSavedPoint(95,0.03457481);
   ParabolaFunc1006->SetSavedPoint(96,0.03258785);
   ParabolaFunc1006->SetSavedPoint(97,0.03056451);
   ParabolaFunc1006->SetSavedPoint(98,0.02850479);
   ParabolaFunc1006->SetSavedPoint(99,0.02640869);
   ParabolaFunc1006->SetSavedPoint(100,0.0242762);
   ParabolaFunc1006->SetSavedPoint(101,750);
   ParabolaFunc1006->SetSavedPoint(102,2500);
   ParabolaFunc1006->SetFillColor(19);
   ParabolaFunc1006->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   ParabolaFunc1006->SetLineColor(ci);
   ParabolaFunc1006->SetLineWidth(3);
   ParabolaFunc1006->SetChisquare(1.544675);
   ParabolaFunc1006->SetNDF(4);
   ParabolaFunc1006->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1006->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1006->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1006->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1006->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1006->SetParameter(0,-5.939922e-08);
   ParabolaFunc1006->SetParError(0,2.52892e-08);
   ParabolaFunc1006->SetParLimits(0,0,0);
   ParabolaFunc1006->SetParameter(1,0.0001741003);
   ParabolaFunc1006->SetParError(1,8.420926e-05);
   ParabolaFunc1006->SetParLimits(1,0,0);
   ParabolaFunc1006->SetParameter(2,-0.03972939);
   ParabolaFunc1006->SetParError(2,0.06688413);
   ParabolaFunc1006->SetParLimits(2,0,0);
   ParabolaFunc1006->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
