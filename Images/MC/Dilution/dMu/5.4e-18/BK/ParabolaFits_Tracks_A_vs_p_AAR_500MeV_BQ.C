void ParabolaFits_Tracks_A_vs_p_AAR_500MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Sep 13 10:41:19 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-416.625,-0.073125,3419.625,0.158125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t trackReco_fx1001[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t trackReco_fy1001[6] = {
   -0.01376143,
   0.07935673,
   0.08116022,
   0.08636636,
   0.05310979,
   0.04766083};
   Double_t trackReco_fex1001[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t trackReco_fey1001[6] = {
   0.0636869,
   0.01081066,
   0.006887882,
   0.006293442,
   0.006841857,
   0.008997838};
   TGraphErrors *gre = new TGraphErrors(6,trackReco_fx1001,trackReco_fy1001,trackReco_fex1001,trackReco_fey1001);
   gre->SetName("trackReco");
   gre->SetTitle(";p [MeV]: in range p #minus 250 < p < p #plus 250;d_{EDM}(p)");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackReco1001 = new TH1F("Graph_trackReco1001","",100,0,3300);
   Graph_trackReco1001->SetMinimum(-0.05);
   Graph_trackReco1001->SetMaximum(0.135);
   Graph_trackReco1001->SetDirectory(0);
   Graph_trackReco1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_trackReco1001->SetLineColor(ci);
   Graph_trackReco1001->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250");
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
   
   
   TF1 *ParabolaFunc1002 = new TF1("*ParabolaFunc",500,2500,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,500,2500,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1002->SetRange(500,2500);
   ParabolaFunc1002->SetName("ParabolaFunc");
   ParabolaFunc1002->SetTitle("ParabolaFunc");
   ParabolaFunc1002->SetSavedPoint(0,0.05207802);
   ParabolaFunc1002->SetSavedPoint(1,0.05357964);
   ParabolaFunc1002->SetSavedPoint(2,0.05504789);
   ParabolaFunc1002->SetSavedPoint(3,0.05648277);
   ParabolaFunc1002->SetSavedPoint(4,0.05788428);
   ParabolaFunc1002->SetSavedPoint(5,0.05925242);
   ParabolaFunc1002->SetSavedPoint(6,0.06058718);
   ParabolaFunc1002->SetSavedPoint(7,0.06188858);
   ParabolaFunc1002->SetSavedPoint(8,0.0631566);
   ParabolaFunc1002->SetSavedPoint(9,0.06439126);
   ParabolaFunc1002->SetSavedPoint(10,0.06559254);
   ParabolaFunc1002->SetSavedPoint(11,0.06676045);
   ParabolaFunc1002->SetSavedPoint(12,0.06789499);
   ParabolaFunc1002->SetSavedPoint(13,0.06899616);
   ParabolaFunc1002->SetSavedPoint(14,0.07006396);
   ParabolaFunc1002->SetSavedPoint(15,0.07109838);
   ParabolaFunc1002->SetSavedPoint(16,0.07209944);
   ParabolaFunc1002->SetSavedPoint(17,0.07306712);
   ParabolaFunc1002->SetSavedPoint(18,0.07400144);
   ParabolaFunc1002->SetSavedPoint(19,0.07490238);
   ParabolaFunc1002->SetSavedPoint(20,0.07576995);
   ParabolaFunc1002->SetSavedPoint(21,0.07660415);
   ParabolaFunc1002->SetSavedPoint(22,0.07740498);
   ParabolaFunc1002->SetSavedPoint(23,0.07817244);
   ParabolaFunc1002->SetSavedPoint(24,0.07890652);
   ParabolaFunc1002->SetSavedPoint(25,0.07960724);
   ParabolaFunc1002->SetSavedPoint(26,0.08027458);
   ParabolaFunc1002->SetSavedPoint(27,0.08090856);
   ParabolaFunc1002->SetSavedPoint(28,0.08150916);
   ParabolaFunc1002->SetSavedPoint(29,0.08207639);
   ParabolaFunc1002->SetSavedPoint(30,0.08261025);
   ParabolaFunc1002->SetSavedPoint(31,0.08311074);
   ParabolaFunc1002->SetSavedPoint(32,0.08357785);
   ParabolaFunc1002->SetSavedPoint(33,0.0840116);
   ParabolaFunc1002->SetSavedPoint(34,0.08441198);
   ParabolaFunc1002->SetSavedPoint(35,0.08477898);
   ParabolaFunc1002->SetSavedPoint(36,0.08511261);
   ParabolaFunc1002->SetSavedPoint(37,0.08541288);
   ParabolaFunc1002->SetSavedPoint(38,0.08567977);
   ParabolaFunc1002->SetSavedPoint(39,0.08591329);
   ParabolaFunc1002->SetSavedPoint(40,0.08611344);
   ParabolaFunc1002->SetSavedPoint(41,0.08628021);
   ParabolaFunc1002->SetSavedPoint(42,0.08641362);
   ParabolaFunc1002->SetSavedPoint(43,0.08651365);
   ParabolaFunc1002->SetSavedPoint(44,0.08658032);
   ParabolaFunc1002->SetSavedPoint(45,0.08661361);
   ParabolaFunc1002->SetSavedPoint(46,0.08661353);
   ParabolaFunc1002->SetSavedPoint(47,0.08658009);
   ParabolaFunc1002->SetSavedPoint(48,0.08651326);
   ParabolaFunc1002->SetSavedPoint(49,0.08641307);
   ParabolaFunc1002->SetSavedPoint(50,0.08627951);
   ParabolaFunc1002->SetSavedPoint(51,0.08611258);
   ParabolaFunc1002->SetSavedPoint(52,0.08591227);
   ParabolaFunc1002->SetSavedPoint(53,0.0856786);
   ParabolaFunc1002->SetSavedPoint(54,0.08541155);
   ParabolaFunc1002->SetSavedPoint(55,0.08511113);
   ParabolaFunc1002->SetSavedPoint(56,0.08477734);
   ParabolaFunc1002->SetSavedPoint(57,0.08441018);
   ParabolaFunc1002->SetSavedPoint(58,0.08400965);
   ParabolaFunc1002->SetSavedPoint(59,0.08357575);
   ParabolaFunc1002->SetSavedPoint(60,0.08310848);
   ParabolaFunc1002->SetSavedPoint(61,0.08260783);
   ParabolaFunc1002->SetSavedPoint(62,0.08207381);
   ParabolaFunc1002->SetSavedPoint(63,0.08150643);
   ParabolaFunc1002->SetSavedPoint(64,0.08090567);
   ParabolaFunc1002->SetSavedPoint(65,0.08027154);
   ParabolaFunc1002->SetSavedPoint(66,0.07960404);
   ParabolaFunc1002->SetSavedPoint(67,0.07890317);
   ParabolaFunc1002->SetSavedPoint(68,0.07816893);
   ParabolaFunc1002->SetSavedPoint(69,0.07740131);
   ParabolaFunc1002->SetSavedPoint(70,0.07660033);
   ParabolaFunc1002->SetSavedPoint(71,0.07576597);
   ParabolaFunc1002->SetSavedPoint(72,0.07489824);
   ParabolaFunc1002->SetSavedPoint(73,0.07399715);
   ParabolaFunc1002->SetSavedPoint(74,0.07306268);
   ParabolaFunc1002->SetSavedPoint(75,0.07209484);
   ParabolaFunc1002->SetSavedPoint(76,0.07109363);
   ParabolaFunc1002->SetSavedPoint(77,0.07005904);
   ParabolaFunc1002->SetSavedPoint(78,0.06899109);
   ParabolaFunc1002->SetSavedPoint(79,0.06788976);
   ParabolaFunc1002->SetSavedPoint(80,0.06675507);
   ParabolaFunc1002->SetSavedPoint(81,0.065587);
   ParabolaFunc1002->SetSavedPoint(82,0.06438556);
   ParabolaFunc1002->SetSavedPoint(83,0.06315075);
   ParabolaFunc1002->SetSavedPoint(84,0.06188257);
   ParabolaFunc1002->SetSavedPoint(85,0.06058102);
   ParabolaFunc1002->SetSavedPoint(86,0.0592461);
   ParabolaFunc1002->SetSavedPoint(87,0.05787781);
   ParabolaFunc1002->SetSavedPoint(88,0.05647614);
   ParabolaFunc1002->SetSavedPoint(89,0.05504111);
   ParabolaFunc1002->SetSavedPoint(90,0.0535727);
   ParabolaFunc1002->SetSavedPoint(91,0.05207092);
   ParabolaFunc1002->SetSavedPoint(92,0.05053577);
   ParabolaFunc1002->SetSavedPoint(93,0.04896725);
   ParabolaFunc1002->SetSavedPoint(94,0.04736536);
   ParabolaFunc1002->SetSavedPoint(95,0.0457301);
   ParabolaFunc1002->SetSavedPoint(96,0.04406146);
   ParabolaFunc1002->SetSavedPoint(97,0.04235946);
   ParabolaFunc1002->SetSavedPoint(98,0.04062408);
   ParabolaFunc1002->SetSavedPoint(99,0.03885533);
   ParabolaFunc1002->SetSavedPoint(100,0.03705322);
   ParabolaFunc1002->SetSavedPoint(101,500);
   ParabolaFunc1002->SetSavedPoint(102,2500);
   ParabolaFunc1002->SetFillColor(19);
   ParabolaFunc1002->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1002->SetLineColor(ci);
   ParabolaFunc1002->SetLineWidth(3);
   ParabolaFunc1002->SetChisquare(0.9967621);
   ParabolaFunc1002->SetNDF(1);
   ParabolaFunc1002->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1002->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1002->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1002->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1002->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1002->SetParameter(0,-4.171389e-08);
   ParabolaFunc1002->SetParError(0,5.88688e-08);
   ParabolaFunc1002->SetParLimits(0,0,0);
   ParabolaFunc1002->SetParameter(1,0.0001176293);
   ParabolaFunc1002->SetParError(1,0.0001980737);
   ParabolaFunc1002->SetParLimits(1,0,0);
   ParabolaFunc1002->SetParameter(2,0.003691851);
   ParabolaFunc1002->SetParError(2,0.1546315);
   ParabolaFunc1002->SetParLimits(2,0,0);
   ParabolaFunc1002->SetParent(gre);
   gre->GetListOfFunctions()->Add(ParabolaFunc1002);
   gre->Draw("ap");
   
   Double_t trackTruth_fx1003[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t trackTruth_fy1003[6] = {
   -0.02567572,
   0.07908822,
   0.08045204,
   0.08727113,
   0.05089821,
   0.05002405};
   Double_t trackTruth_fex1003[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t trackTruth_fey1003[6] = {
   0.06369066,
   0.01078525,
   0.006861493,
   0.006270567,
   0.006809436,
   0.008915104};
   gre = new TGraphErrors(6,trackTruth_fx1003,trackTruth_fy1003,trackTruth_fex1003,trackTruth_fey1003);
   gre->SetName("trackTruth");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackTruth1003 = new TH1F("Graph_trackTruth1003","Graph",100,0,3300);
   Graph_trackTruth1003->SetMinimum(-0.1076572);
   Graph_trackTruth1003->SetMaximum(0.1118325);
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
   
   
   TF1 *ParabolaFunc1004 = new TF1("*ParabolaFunc",500,2500,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,500,2500,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1004->SetRange(500,2500);
   ParabolaFunc1004->SetName("ParabolaFunc");
   ParabolaFunc1004->SetTitle("ParabolaFunc");
   ParabolaFunc1004->SetSavedPoint(0,0.03576629);
   ParabolaFunc1004->SetSavedPoint(1,0.0379115);
   ParabolaFunc1004->SetSavedPoint(2,0.04001213);
   ParabolaFunc1004->SetSavedPoint(3,0.0420682);
   ParabolaFunc1004->SetSavedPoint(4,0.04407969);
   ParabolaFunc1004->SetSavedPoint(5,0.0460466);
   ParabolaFunc1004->SetSavedPoint(6,0.04796895);
   ParabolaFunc1004->SetSavedPoint(7,0.04984672);
   ParabolaFunc1004->SetSavedPoint(8,0.05167992);
   ParabolaFunc1004->SetSavedPoint(9,0.05346855);
   ParabolaFunc1004->SetSavedPoint(10,0.05521261);
   ParabolaFunc1004->SetSavedPoint(11,0.05691209);
   ParabolaFunc1004->SetSavedPoint(12,0.05856701);
   ParabolaFunc1004->SetSavedPoint(13,0.06017735);
   ParabolaFunc1004->SetSavedPoint(14,0.06174311);
   ParabolaFunc1004->SetSavedPoint(15,0.06326431);
   ParabolaFunc1004->SetSavedPoint(16,0.06474093);
   ParabolaFunc1004->SetSavedPoint(17,0.06617298);
   ParabolaFunc1004->SetSavedPoint(18,0.06756046);
   ParabolaFunc1004->SetSavedPoint(19,0.06890337);
   ParabolaFunc1004->SetSavedPoint(20,0.0702017);
   ParabolaFunc1004->SetSavedPoint(21,0.07145546);
   ParabolaFunc1004->SetSavedPoint(22,0.07266465);
   ParabolaFunc1004->SetSavedPoint(23,0.07382927);
   ParabolaFunc1004->SetSavedPoint(24,0.07494932);
   ParabolaFunc1004->SetSavedPoint(25,0.07602479);
   ParabolaFunc1004->SetSavedPoint(26,0.07705569);
   ParabolaFunc1004->SetSavedPoint(27,0.07804202);
   ParabolaFunc1004->SetSavedPoint(28,0.07898377);
   ParabolaFunc1004->SetSavedPoint(29,0.07988096);
   ParabolaFunc1004->SetSavedPoint(30,0.08073357);
   ParabolaFunc1004->SetSavedPoint(31,0.08154161);
   ParabolaFunc1004->SetSavedPoint(32,0.08230507);
   ParabolaFunc1004->SetSavedPoint(33,0.08302397);
   ParabolaFunc1004->SetSavedPoint(34,0.08369829);
   ParabolaFunc1004->SetSavedPoint(35,0.08432804);
   ParabolaFunc1004->SetSavedPoint(36,0.08491322);
   ParabolaFunc1004->SetSavedPoint(37,0.08545383);
   ParabolaFunc1004->SetSavedPoint(38,0.08594986);
   ParabolaFunc1004->SetSavedPoint(39,0.08640132);
   ParabolaFunc1004->SetSavedPoint(40,0.08680821);
   ParabolaFunc1004->SetSavedPoint(41,0.08717053);
   ParabolaFunc1004->SetSavedPoint(42,0.08748827);
   ParabolaFunc1004->SetSavedPoint(43,0.08776144);
   ParabolaFunc1004->SetSavedPoint(44,0.08799004);
   ParabolaFunc1004->SetSavedPoint(45,0.08817407);
   ParabolaFunc1004->SetSavedPoint(46,0.08831353);
   ParabolaFunc1004->SetSavedPoint(47,0.08840841);
   ParabolaFunc1004->SetSavedPoint(48,0.08845872);
   ParabolaFunc1004->SetSavedPoint(49,0.08846446);
   ParabolaFunc1004->SetSavedPoint(50,0.08842562);
   ParabolaFunc1004->SetSavedPoint(51,0.08834222);
   ParabolaFunc1004->SetSavedPoint(52,0.08821424);
   ParabolaFunc1004->SetSavedPoint(53,0.08804169);
   ParabolaFunc1004->SetSavedPoint(54,0.08782457);
   ParabolaFunc1004->SetSavedPoint(55,0.08756287);
   ParabolaFunc1004->SetSavedPoint(56,0.0872566);
   ParabolaFunc1004->SetSavedPoint(57,0.08690576);
   ParabolaFunc1004->SetSavedPoint(58,0.08651035);
   ParabolaFunc1004->SetSavedPoint(59,0.08607037);
   ParabolaFunc1004->SetSavedPoint(60,0.08558581);
   ParabolaFunc1004->SetSavedPoint(61,0.08505668);
   ParabolaFunc1004->SetSavedPoint(62,0.08448298);
   ParabolaFunc1004->SetSavedPoint(63,0.08386471);
   ParabolaFunc1004->SetSavedPoint(64,0.08320187);
   ParabolaFunc1004->SetSavedPoint(65,0.08249445);
   ParabolaFunc1004->SetSavedPoint(66,0.08174246);
   ParabolaFunc1004->SetSavedPoint(67,0.0809459);
   ParabolaFunc1004->SetSavedPoint(68,0.08010476);
   ParabolaFunc1004->SetSavedPoint(69,0.07921905);
   ParabolaFunc1004->SetSavedPoint(70,0.07828878);
   ParabolaFunc1004->SetSavedPoint(71,0.07731393);
   ParabolaFunc1004->SetSavedPoint(72,0.0762945);
   ParabolaFunc1004->SetSavedPoint(73,0.07523051);
   ParabolaFunc1004->SetSavedPoint(74,0.07412194);
   ParabolaFunc1004->SetSavedPoint(75,0.0729688);
   ParabolaFunc1004->SetSavedPoint(76,0.07177109);
   ParabolaFunc1004->SetSavedPoint(77,0.0705288);
   ParabolaFunc1004->SetSavedPoint(78,0.06924194);
   ParabolaFunc1004->SetSavedPoint(79,0.06791052);
   ParabolaFunc1004->SetSavedPoint(80,0.06653451);
   ParabolaFunc1004->SetSavedPoint(81,0.06511394);
   ParabolaFunc1004->SetSavedPoint(82,0.06364879);
   ParabolaFunc1004->SetSavedPoint(83,0.06213908);
   ParabolaFunc1004->SetSavedPoint(84,0.06058479);
   ParabolaFunc1004->SetSavedPoint(85,0.05898592);
   ParabolaFunc1004->SetSavedPoint(86,0.05734249);
   ParabolaFunc1004->SetSavedPoint(87,0.05565448);
   ParabolaFunc1004->SetSavedPoint(88,0.0539219);
   ParabolaFunc1004->SetSavedPoint(89,0.05214475);
   ParabolaFunc1004->SetSavedPoint(90,0.05032303);
   ParabolaFunc1004->SetSavedPoint(91,0.04845673);
   ParabolaFunc1004->SetSavedPoint(92,0.04654586);
   ParabolaFunc1004->SetSavedPoint(93,0.04459042);
   ParabolaFunc1004->SetSavedPoint(94,0.04259041);
   ParabolaFunc1004->SetSavedPoint(95,0.04054582);
   ParabolaFunc1004->SetSavedPoint(96,0.03845666);
   ParabolaFunc1004->SetSavedPoint(97,0.03632293);
   ParabolaFunc1004->SetSavedPoint(98,0.03414463);
   ParabolaFunc1004->SetSavedPoint(99,0.03192176);
   ParabolaFunc1004->SetSavedPoint(100,0.02965431);
   ParabolaFunc1004->SetSavedPoint(101,500);
   ParabolaFunc1004->SetSavedPoint(102,2500);
   ParabolaFunc1004->SetFillColor(19);
   ParabolaFunc1004->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   ParabolaFunc1004->SetLineColor(ci);
   ParabolaFunc1004->SetLineWidth(3);
   ParabolaFunc1004->SetChisquare(1.193842);
   ParabolaFunc1004->SetNDF(1);
   ParabolaFunc1004->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1004->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1004->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1004->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1004->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1004->SetParameter(0,-5.571532e-08);
   ParabolaFunc1004->SetParError(0,8.559835e-08);
   ParabolaFunc1004->SetParLimits(0,0,0);
   ParabolaFunc1004->SetParameter(1,0.00016409);
   ParabolaFunc1004->SetParError(1,0.00028068);
   ParabolaFunc1004->SetParLimits(1,0,0);
   ParabolaFunc1004->SetParameter(2,-0.03234986);
   ParabolaFunc1004->SetParError(2,0.2157445);
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
   
   TF1 *ParabolaFunc1005 = new TF1("*ParabolaFunc",500,2500,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,500,2500,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1005->SetRange(500,2500);
   ParabolaFunc1005->SetName("ParabolaFunc");
   ParabolaFunc1005->SetTitle("ParabolaFunc");
   ParabolaFunc1005->SetSavedPoint(0,0.05207802);
   ParabolaFunc1005->SetSavedPoint(1,0.05357964);
   ParabolaFunc1005->SetSavedPoint(2,0.05504789);
   ParabolaFunc1005->SetSavedPoint(3,0.05648277);
   ParabolaFunc1005->SetSavedPoint(4,0.05788428);
   ParabolaFunc1005->SetSavedPoint(5,0.05925242);
   ParabolaFunc1005->SetSavedPoint(6,0.06058718);
   ParabolaFunc1005->SetSavedPoint(7,0.06188858);
   ParabolaFunc1005->SetSavedPoint(8,0.0631566);
   ParabolaFunc1005->SetSavedPoint(9,0.06439126);
   ParabolaFunc1005->SetSavedPoint(10,0.06559254);
   ParabolaFunc1005->SetSavedPoint(11,0.06676045);
   ParabolaFunc1005->SetSavedPoint(12,0.06789499);
   ParabolaFunc1005->SetSavedPoint(13,0.06899616);
   ParabolaFunc1005->SetSavedPoint(14,0.07006396);
   ParabolaFunc1005->SetSavedPoint(15,0.07109838);
   ParabolaFunc1005->SetSavedPoint(16,0.07209944);
   ParabolaFunc1005->SetSavedPoint(17,0.07306712);
   ParabolaFunc1005->SetSavedPoint(18,0.07400144);
   ParabolaFunc1005->SetSavedPoint(19,0.07490238);
   ParabolaFunc1005->SetSavedPoint(20,0.07576995);
   ParabolaFunc1005->SetSavedPoint(21,0.07660415);
   ParabolaFunc1005->SetSavedPoint(22,0.07740498);
   ParabolaFunc1005->SetSavedPoint(23,0.07817244);
   ParabolaFunc1005->SetSavedPoint(24,0.07890652);
   ParabolaFunc1005->SetSavedPoint(25,0.07960724);
   ParabolaFunc1005->SetSavedPoint(26,0.08027458);
   ParabolaFunc1005->SetSavedPoint(27,0.08090856);
   ParabolaFunc1005->SetSavedPoint(28,0.08150916);
   ParabolaFunc1005->SetSavedPoint(29,0.08207639);
   ParabolaFunc1005->SetSavedPoint(30,0.08261025);
   ParabolaFunc1005->SetSavedPoint(31,0.08311074);
   ParabolaFunc1005->SetSavedPoint(32,0.08357785);
   ParabolaFunc1005->SetSavedPoint(33,0.0840116);
   ParabolaFunc1005->SetSavedPoint(34,0.08441198);
   ParabolaFunc1005->SetSavedPoint(35,0.08477898);
   ParabolaFunc1005->SetSavedPoint(36,0.08511261);
   ParabolaFunc1005->SetSavedPoint(37,0.08541288);
   ParabolaFunc1005->SetSavedPoint(38,0.08567977);
   ParabolaFunc1005->SetSavedPoint(39,0.08591329);
   ParabolaFunc1005->SetSavedPoint(40,0.08611344);
   ParabolaFunc1005->SetSavedPoint(41,0.08628021);
   ParabolaFunc1005->SetSavedPoint(42,0.08641362);
   ParabolaFunc1005->SetSavedPoint(43,0.08651365);
   ParabolaFunc1005->SetSavedPoint(44,0.08658032);
   ParabolaFunc1005->SetSavedPoint(45,0.08661361);
   ParabolaFunc1005->SetSavedPoint(46,0.08661353);
   ParabolaFunc1005->SetSavedPoint(47,0.08658009);
   ParabolaFunc1005->SetSavedPoint(48,0.08651326);
   ParabolaFunc1005->SetSavedPoint(49,0.08641307);
   ParabolaFunc1005->SetSavedPoint(50,0.08627951);
   ParabolaFunc1005->SetSavedPoint(51,0.08611258);
   ParabolaFunc1005->SetSavedPoint(52,0.08591227);
   ParabolaFunc1005->SetSavedPoint(53,0.0856786);
   ParabolaFunc1005->SetSavedPoint(54,0.08541155);
   ParabolaFunc1005->SetSavedPoint(55,0.08511113);
   ParabolaFunc1005->SetSavedPoint(56,0.08477734);
   ParabolaFunc1005->SetSavedPoint(57,0.08441018);
   ParabolaFunc1005->SetSavedPoint(58,0.08400965);
   ParabolaFunc1005->SetSavedPoint(59,0.08357575);
   ParabolaFunc1005->SetSavedPoint(60,0.08310848);
   ParabolaFunc1005->SetSavedPoint(61,0.08260783);
   ParabolaFunc1005->SetSavedPoint(62,0.08207381);
   ParabolaFunc1005->SetSavedPoint(63,0.08150643);
   ParabolaFunc1005->SetSavedPoint(64,0.08090567);
   ParabolaFunc1005->SetSavedPoint(65,0.08027154);
   ParabolaFunc1005->SetSavedPoint(66,0.07960404);
   ParabolaFunc1005->SetSavedPoint(67,0.07890317);
   ParabolaFunc1005->SetSavedPoint(68,0.07816893);
   ParabolaFunc1005->SetSavedPoint(69,0.07740131);
   ParabolaFunc1005->SetSavedPoint(70,0.07660033);
   ParabolaFunc1005->SetSavedPoint(71,0.07576597);
   ParabolaFunc1005->SetSavedPoint(72,0.07489824);
   ParabolaFunc1005->SetSavedPoint(73,0.07399715);
   ParabolaFunc1005->SetSavedPoint(74,0.07306268);
   ParabolaFunc1005->SetSavedPoint(75,0.07209484);
   ParabolaFunc1005->SetSavedPoint(76,0.07109363);
   ParabolaFunc1005->SetSavedPoint(77,0.07005904);
   ParabolaFunc1005->SetSavedPoint(78,0.06899109);
   ParabolaFunc1005->SetSavedPoint(79,0.06788976);
   ParabolaFunc1005->SetSavedPoint(80,0.06675507);
   ParabolaFunc1005->SetSavedPoint(81,0.065587);
   ParabolaFunc1005->SetSavedPoint(82,0.06438556);
   ParabolaFunc1005->SetSavedPoint(83,0.06315075);
   ParabolaFunc1005->SetSavedPoint(84,0.06188257);
   ParabolaFunc1005->SetSavedPoint(85,0.06058102);
   ParabolaFunc1005->SetSavedPoint(86,0.0592461);
   ParabolaFunc1005->SetSavedPoint(87,0.05787781);
   ParabolaFunc1005->SetSavedPoint(88,0.05647614);
   ParabolaFunc1005->SetSavedPoint(89,0.05504111);
   ParabolaFunc1005->SetSavedPoint(90,0.0535727);
   ParabolaFunc1005->SetSavedPoint(91,0.05207092);
   ParabolaFunc1005->SetSavedPoint(92,0.05053577);
   ParabolaFunc1005->SetSavedPoint(93,0.04896725);
   ParabolaFunc1005->SetSavedPoint(94,0.04736536);
   ParabolaFunc1005->SetSavedPoint(95,0.0457301);
   ParabolaFunc1005->SetSavedPoint(96,0.04406146);
   ParabolaFunc1005->SetSavedPoint(97,0.04235946);
   ParabolaFunc1005->SetSavedPoint(98,0.04062408);
   ParabolaFunc1005->SetSavedPoint(99,0.03885533);
   ParabolaFunc1005->SetSavedPoint(100,0.03705322);
   ParabolaFunc1005->SetSavedPoint(101,500);
   ParabolaFunc1005->SetSavedPoint(102,2500);
   ParabolaFunc1005->SetFillColor(19);
   ParabolaFunc1005->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1005->SetLineColor(ci);
   ParabolaFunc1005->SetLineWidth(3);
   ParabolaFunc1005->SetChisquare(0.9967621);
   ParabolaFunc1005->SetNDF(1);
   ParabolaFunc1005->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1005->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1005->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1005->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1005->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1005->SetParameter(0,-4.171389e-08);
   ParabolaFunc1005->SetParError(0,5.88688e-08);
   ParabolaFunc1005->SetParLimits(0,0,0);
   ParabolaFunc1005->SetParameter(1,0.0001176293);
   ParabolaFunc1005->SetParError(1,0.0001980737);
   ParabolaFunc1005->SetParLimits(1,0,0);
   ParabolaFunc1005->SetParameter(2,0.003691851);
   ParabolaFunc1005->SetParError(2,0.1546315);
   ParabolaFunc1005->SetParLimits(2,0,0);
   ParabolaFunc1005->Draw("same");
   
   TF1 *ParabolaFunc1006 = new TF1("*ParabolaFunc",500,2500,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,500,2500,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1006->SetRange(500,2500);
   ParabolaFunc1006->SetName("ParabolaFunc");
   ParabolaFunc1006->SetTitle("ParabolaFunc");
   ParabolaFunc1006->SetSavedPoint(0,0.03576629);
   ParabolaFunc1006->SetSavedPoint(1,0.0379115);
   ParabolaFunc1006->SetSavedPoint(2,0.04001213);
   ParabolaFunc1006->SetSavedPoint(3,0.0420682);
   ParabolaFunc1006->SetSavedPoint(4,0.04407969);
   ParabolaFunc1006->SetSavedPoint(5,0.0460466);
   ParabolaFunc1006->SetSavedPoint(6,0.04796895);
   ParabolaFunc1006->SetSavedPoint(7,0.04984672);
   ParabolaFunc1006->SetSavedPoint(8,0.05167992);
   ParabolaFunc1006->SetSavedPoint(9,0.05346855);
   ParabolaFunc1006->SetSavedPoint(10,0.05521261);
   ParabolaFunc1006->SetSavedPoint(11,0.05691209);
   ParabolaFunc1006->SetSavedPoint(12,0.05856701);
   ParabolaFunc1006->SetSavedPoint(13,0.06017735);
   ParabolaFunc1006->SetSavedPoint(14,0.06174311);
   ParabolaFunc1006->SetSavedPoint(15,0.06326431);
   ParabolaFunc1006->SetSavedPoint(16,0.06474093);
   ParabolaFunc1006->SetSavedPoint(17,0.06617298);
   ParabolaFunc1006->SetSavedPoint(18,0.06756046);
   ParabolaFunc1006->SetSavedPoint(19,0.06890337);
   ParabolaFunc1006->SetSavedPoint(20,0.0702017);
   ParabolaFunc1006->SetSavedPoint(21,0.07145546);
   ParabolaFunc1006->SetSavedPoint(22,0.07266465);
   ParabolaFunc1006->SetSavedPoint(23,0.07382927);
   ParabolaFunc1006->SetSavedPoint(24,0.07494932);
   ParabolaFunc1006->SetSavedPoint(25,0.07602479);
   ParabolaFunc1006->SetSavedPoint(26,0.07705569);
   ParabolaFunc1006->SetSavedPoint(27,0.07804202);
   ParabolaFunc1006->SetSavedPoint(28,0.07898377);
   ParabolaFunc1006->SetSavedPoint(29,0.07988096);
   ParabolaFunc1006->SetSavedPoint(30,0.08073357);
   ParabolaFunc1006->SetSavedPoint(31,0.08154161);
   ParabolaFunc1006->SetSavedPoint(32,0.08230507);
   ParabolaFunc1006->SetSavedPoint(33,0.08302397);
   ParabolaFunc1006->SetSavedPoint(34,0.08369829);
   ParabolaFunc1006->SetSavedPoint(35,0.08432804);
   ParabolaFunc1006->SetSavedPoint(36,0.08491322);
   ParabolaFunc1006->SetSavedPoint(37,0.08545383);
   ParabolaFunc1006->SetSavedPoint(38,0.08594986);
   ParabolaFunc1006->SetSavedPoint(39,0.08640132);
   ParabolaFunc1006->SetSavedPoint(40,0.08680821);
   ParabolaFunc1006->SetSavedPoint(41,0.08717053);
   ParabolaFunc1006->SetSavedPoint(42,0.08748827);
   ParabolaFunc1006->SetSavedPoint(43,0.08776144);
   ParabolaFunc1006->SetSavedPoint(44,0.08799004);
   ParabolaFunc1006->SetSavedPoint(45,0.08817407);
   ParabolaFunc1006->SetSavedPoint(46,0.08831353);
   ParabolaFunc1006->SetSavedPoint(47,0.08840841);
   ParabolaFunc1006->SetSavedPoint(48,0.08845872);
   ParabolaFunc1006->SetSavedPoint(49,0.08846446);
   ParabolaFunc1006->SetSavedPoint(50,0.08842562);
   ParabolaFunc1006->SetSavedPoint(51,0.08834222);
   ParabolaFunc1006->SetSavedPoint(52,0.08821424);
   ParabolaFunc1006->SetSavedPoint(53,0.08804169);
   ParabolaFunc1006->SetSavedPoint(54,0.08782457);
   ParabolaFunc1006->SetSavedPoint(55,0.08756287);
   ParabolaFunc1006->SetSavedPoint(56,0.0872566);
   ParabolaFunc1006->SetSavedPoint(57,0.08690576);
   ParabolaFunc1006->SetSavedPoint(58,0.08651035);
   ParabolaFunc1006->SetSavedPoint(59,0.08607037);
   ParabolaFunc1006->SetSavedPoint(60,0.08558581);
   ParabolaFunc1006->SetSavedPoint(61,0.08505668);
   ParabolaFunc1006->SetSavedPoint(62,0.08448298);
   ParabolaFunc1006->SetSavedPoint(63,0.08386471);
   ParabolaFunc1006->SetSavedPoint(64,0.08320187);
   ParabolaFunc1006->SetSavedPoint(65,0.08249445);
   ParabolaFunc1006->SetSavedPoint(66,0.08174246);
   ParabolaFunc1006->SetSavedPoint(67,0.0809459);
   ParabolaFunc1006->SetSavedPoint(68,0.08010476);
   ParabolaFunc1006->SetSavedPoint(69,0.07921905);
   ParabolaFunc1006->SetSavedPoint(70,0.07828878);
   ParabolaFunc1006->SetSavedPoint(71,0.07731393);
   ParabolaFunc1006->SetSavedPoint(72,0.0762945);
   ParabolaFunc1006->SetSavedPoint(73,0.07523051);
   ParabolaFunc1006->SetSavedPoint(74,0.07412194);
   ParabolaFunc1006->SetSavedPoint(75,0.0729688);
   ParabolaFunc1006->SetSavedPoint(76,0.07177109);
   ParabolaFunc1006->SetSavedPoint(77,0.0705288);
   ParabolaFunc1006->SetSavedPoint(78,0.06924194);
   ParabolaFunc1006->SetSavedPoint(79,0.06791052);
   ParabolaFunc1006->SetSavedPoint(80,0.06653451);
   ParabolaFunc1006->SetSavedPoint(81,0.06511394);
   ParabolaFunc1006->SetSavedPoint(82,0.06364879);
   ParabolaFunc1006->SetSavedPoint(83,0.06213908);
   ParabolaFunc1006->SetSavedPoint(84,0.06058479);
   ParabolaFunc1006->SetSavedPoint(85,0.05898592);
   ParabolaFunc1006->SetSavedPoint(86,0.05734249);
   ParabolaFunc1006->SetSavedPoint(87,0.05565448);
   ParabolaFunc1006->SetSavedPoint(88,0.0539219);
   ParabolaFunc1006->SetSavedPoint(89,0.05214475);
   ParabolaFunc1006->SetSavedPoint(90,0.05032303);
   ParabolaFunc1006->SetSavedPoint(91,0.04845673);
   ParabolaFunc1006->SetSavedPoint(92,0.04654586);
   ParabolaFunc1006->SetSavedPoint(93,0.04459042);
   ParabolaFunc1006->SetSavedPoint(94,0.04259041);
   ParabolaFunc1006->SetSavedPoint(95,0.04054582);
   ParabolaFunc1006->SetSavedPoint(96,0.03845666);
   ParabolaFunc1006->SetSavedPoint(97,0.03632293);
   ParabolaFunc1006->SetSavedPoint(98,0.03414463);
   ParabolaFunc1006->SetSavedPoint(99,0.03192176);
   ParabolaFunc1006->SetSavedPoint(100,0.02965431);
   ParabolaFunc1006->SetSavedPoint(101,500);
   ParabolaFunc1006->SetSavedPoint(102,2500);
   ParabolaFunc1006->SetFillColor(19);
   ParabolaFunc1006->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   ParabolaFunc1006->SetLineColor(ci);
   ParabolaFunc1006->SetLineWidth(3);
   ParabolaFunc1006->SetChisquare(1.193842);
   ParabolaFunc1006->SetNDF(1);
   ParabolaFunc1006->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1006->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1006->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1006->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1006->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1006->SetParameter(0,-5.571532e-08);
   ParabolaFunc1006->SetParError(0,8.559835e-08);
   ParabolaFunc1006->SetParLimits(0,0,0);
   ParabolaFunc1006->SetParameter(1,0.00016409);
   ParabolaFunc1006->SetParError(1,0.00028068);
   ParabolaFunc1006->SetParLimits(1,0,0);
   ParabolaFunc1006->SetParameter(2,-0.03234986);
   ParabolaFunc1006->SetParError(2,0.2157445);
   ParabolaFunc1006->SetParLimits(2,0,0);
   ParabolaFunc1006->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
