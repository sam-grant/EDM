void RecoVertexFit_S12()
{
//=========Macro generated from canvas: S12/c
//=========  (Wed Apr 20 00:05:55 2022) by ROOT version 6.24/06
   TCanvas *S12 = new TCanvas("S12", "c",0,0,800,600);
   S12->SetHighLightColor(2);
   S12->Range(466.9653,-0.03875,3024.899,0.14875);
   S12->SetFillColor(0);
   S12->SetBorderMode(0);
   S12->SetBorderSize(2);
   S12->SetFrameBorderMode(0);
   S12->SetFrameBorderMode(0);
   
   Double_t S12_trackReco_fx1007[11] = {
   451.7813,
   653.3899,
   880.2814,
   1123.172,
   1371.155,
   1620.23,
   1866.957,
   2115.041,
   2362.635,
   2614.361,
   2787.793};
   Double_t S12_trackReco_fy1007[11] = {
   0.04648754,
   0.06355722,
   0.06218167,
   0.08536624,
   0.07302093,
   0.08599171,
   0.0879996,
   0.07394288,
   0.05068917,
   0.04803896,
   0.03404704};
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
   0.07518383,
   0.02527098,
   0.014521,
   0.01194085,
   0.01090847,
   0.0103576,
   0.01041588,
   0.01102604,
   0.01186605,
   0.01180639,
   0.02708239};
   TGraphErrors *gre = new TGraphErrors(11,S12_trackReco_fx1007,S12_trackReco_fy1007,S12_trackReco_fex1007,S12_trackReco_fey1007);
   gre->SetName("S12_trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_trackReco1007 = new TH1F("Graph_S12_trackReco1007","",100,218.1801,3021.394);
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
   DilutionFunc1008->SetSavedPoint(0,0.08661192);
   DilutionFunc1008->SetSavedPoint(1,0.08647422);
   DilutionFunc1008->SetSavedPoint(2,0.08633258);
   DilutionFunc1008->SetSavedPoint(3,0.08618697);
   DilutionFunc1008->SetSavedPoint(4,0.08603739);
   DilutionFunc1008->SetSavedPoint(5,0.08588381);
   DilutionFunc1008->SetSavedPoint(6,0.08572623);
   DilutionFunc1008->SetSavedPoint(7,0.08556461);
   DilutionFunc1008->SetSavedPoint(8,0.08539895);
   DilutionFunc1008->SetSavedPoint(9,0.08522923);
   DilutionFunc1008->SetSavedPoint(10,0.08505544);
   DilutionFunc1008->SetSavedPoint(11,0.08487755);
   DilutionFunc1008->SetSavedPoint(12,0.08469555);
   DilutionFunc1008->SetSavedPoint(13,0.08450943);
   DilutionFunc1008->SetSavedPoint(14,0.08431916);
   DilutionFunc1008->SetSavedPoint(15,0.08412473);
   DilutionFunc1008->SetSavedPoint(16,0.08392613);
   DilutionFunc1008->SetSavedPoint(17,0.08372334);
   DilutionFunc1008->SetSavedPoint(18,0.08351633);
   DilutionFunc1008->SetSavedPoint(19,0.08330511);
   DilutionFunc1008->SetSavedPoint(20,0.08308964);
   DilutionFunc1008->SetSavedPoint(21,0.08286991);
   DilutionFunc1008->SetSavedPoint(22,0.08264591);
   DilutionFunc1008->SetSavedPoint(23,0.08241762);
   DilutionFunc1008->SetSavedPoint(24,0.08218502);
   DilutionFunc1008->SetSavedPoint(25,0.08194809);
   DilutionFunc1008->SetSavedPoint(26,0.08170683);
   DilutionFunc1008->SetSavedPoint(27,0.08146121);
   DilutionFunc1008->SetSavedPoint(28,0.08121121);
   DilutionFunc1008->SetSavedPoint(29,0.08095683);
   DilutionFunc1008->SetSavedPoint(30,0.08069804);
   DilutionFunc1008->SetSavedPoint(31,0.08043482);
   DilutionFunc1008->SetSavedPoint(32,0.08016717);
   DilutionFunc1008->SetSavedPoint(33,0.07989506);
   DilutionFunc1008->SetSavedPoint(34,0.07961848);
   DilutionFunc1008->SetSavedPoint(35,0.07933741);
   DilutionFunc1008->SetSavedPoint(36,0.07905184);
   DilutionFunc1008->SetSavedPoint(37,0.07876174);
   DilutionFunc1008->SetSavedPoint(38,0.0784671);
   DilutionFunc1008->SetSavedPoint(39,0.07816792);
   DilutionFunc1008->SetSavedPoint(40,0.07786416);
   DilutionFunc1008->SetSavedPoint(41,0.07755581);
   DilutionFunc1008->SetSavedPoint(42,0.07724286);
   DilutionFunc1008->SetSavedPoint(43,0.07692528);
   DilutionFunc1008->SetSavedPoint(44,0.07660307);
   DilutionFunc1008->SetSavedPoint(45,0.07627621);
   DilutionFunc1008->SetSavedPoint(46,0.07594468);
   DilutionFunc1008->SetSavedPoint(47,0.07560846);
   DilutionFunc1008->SetSavedPoint(48,0.07526754);
   DilutionFunc1008->SetSavedPoint(49,0.0749219);
   DilutionFunc1008->SetSavedPoint(50,0.07457152);
   DilutionFunc1008->SetSavedPoint(51,0.07421639);
   DilutionFunc1008->SetSavedPoint(52,0.07385649);
   DilutionFunc1008->SetSavedPoint(53,0.07349181);
   DilutionFunc1008->SetSavedPoint(54,0.07312232);
   DilutionFunc1008->SetSavedPoint(55,0.07274802);
   DilutionFunc1008->SetSavedPoint(56,0.07236888);
   DilutionFunc1008->SetSavedPoint(57,0.07198489);
   DilutionFunc1008->SetSavedPoint(58,0.07159603);
   DilutionFunc1008->SetSavedPoint(59,0.07120229);
   DilutionFunc1008->SetSavedPoint(60,0.07080365);
   DilutionFunc1008->SetSavedPoint(61,0.07040009);
   DilutionFunc1008->SetSavedPoint(62,0.0699916);
   DilutionFunc1008->SetSavedPoint(63,0.06957815);
   DilutionFunc1008->SetSavedPoint(64,0.06915974);
   DilutionFunc1008->SetSavedPoint(65,0.06873635);
   DilutionFunc1008->SetSavedPoint(66,0.06830796);
   DilutionFunc1008->SetSavedPoint(67,0.06787455);
   DilutionFunc1008->SetSavedPoint(68,0.06743611);
   DilutionFunc1008->SetSavedPoint(69,0.06699262);
   DilutionFunc1008->SetSavedPoint(70,0.06654407);
   DilutionFunc1008->SetSavedPoint(71,0.06609043);
   DilutionFunc1008->SetSavedPoint(72,0.06563169);
   DilutionFunc1008->SetSavedPoint(73,0.06516784);
   DilutionFunc1008->SetSavedPoint(74,0.06469886);
   DilutionFunc1008->SetSavedPoint(75,0.06422473);
   DilutionFunc1008->SetSavedPoint(76,0.06374544);
   DilutionFunc1008->SetSavedPoint(77,0.06326096);
   DilutionFunc1008->SetSavedPoint(78,0.06277129);
   DilutionFunc1008->SetSavedPoint(79,0.06227641);
   DilutionFunc1008->SetSavedPoint(80,0.06177629);
   DilutionFunc1008->SetSavedPoint(81,0.06127093);
   DilutionFunc1008->SetSavedPoint(82,0.06076031);
   DilutionFunc1008->SetSavedPoint(83,0.0602444);
   DilutionFunc1008->SetSavedPoint(84,0.0597232);
   DilutionFunc1008->SetSavedPoint(85,0.05919669);
   DilutionFunc1008->SetSavedPoint(86,0.05866484);
   DilutionFunc1008->SetSavedPoint(87,0.05812766);
   DilutionFunc1008->SetSavedPoint(88,0.0575851);
   DilutionFunc1008->SetSavedPoint(89,0.05703718);
   DilutionFunc1008->SetSavedPoint(90,0.05648385);
   DilutionFunc1008->SetSavedPoint(91,0.05592512);
   DilutionFunc1008->SetSavedPoint(92,0.05536095);
   DilutionFunc1008->SetSavedPoint(93,0.05479135);
   DilutionFunc1008->SetSavedPoint(94,0.05421628);
   DilutionFunc1008->SetSavedPoint(95,0.05363573);
   DilutionFunc1008->SetSavedPoint(96,0.05304969);
   DilutionFunc1008->SetSavedPoint(97,0.05245814);
   DilutionFunc1008->SetSavedPoint(98,0.05186107);
   DilutionFunc1008->SetSavedPoint(99,0.05125845);
   DilutionFunc1008->SetSavedPoint(100,0.05065027);
   DilutionFunc1008->SetSavedPoint(101,750);
   DilutionFunc1008->SetSavedPoint(102,2750);
   DilutionFunc1008->SetFillColor(19);
   DilutionFunc1008->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1008->SetLineColor(ci);
   DilutionFunc1008->SetLineWidth(3);
   DilutionFunc1008->SetChisquare(7.62679);
   DilutionFunc1008->SetNDF(6);
   DilutionFunc1008->GetXaxis()->SetLabelFont(42);
   DilutionFunc1008->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1008->GetXaxis()->SetTitleFont(42);
   DilutionFunc1008->GetYaxis()->SetLabelFont(42);
   DilutionFunc1008->GetYaxis()->SetTitleFont(42);
   DilutionFunc1008->SetParameter(0,0.08908446);
   DilutionFunc1008->SetParError(0,0.007979822);
   DilutionFunc1008->SetParLimits(0,0,0);
   DilutionFunc1008->SetParameter(1,-0.0001244349);
   DilutionFunc1008->SetParError(1,1.961978e-05);
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
   DilutionFunc1009->SetSavedPoint(0,0.08661192);
   DilutionFunc1009->SetSavedPoint(1,0.08647422);
   DilutionFunc1009->SetSavedPoint(2,0.08633258);
   DilutionFunc1009->SetSavedPoint(3,0.08618697);
   DilutionFunc1009->SetSavedPoint(4,0.08603739);
   DilutionFunc1009->SetSavedPoint(5,0.08588381);
   DilutionFunc1009->SetSavedPoint(6,0.08572623);
   DilutionFunc1009->SetSavedPoint(7,0.08556461);
   DilutionFunc1009->SetSavedPoint(8,0.08539895);
   DilutionFunc1009->SetSavedPoint(9,0.08522923);
   DilutionFunc1009->SetSavedPoint(10,0.08505544);
   DilutionFunc1009->SetSavedPoint(11,0.08487755);
   DilutionFunc1009->SetSavedPoint(12,0.08469555);
   DilutionFunc1009->SetSavedPoint(13,0.08450943);
   DilutionFunc1009->SetSavedPoint(14,0.08431916);
   DilutionFunc1009->SetSavedPoint(15,0.08412473);
   DilutionFunc1009->SetSavedPoint(16,0.08392613);
   DilutionFunc1009->SetSavedPoint(17,0.08372334);
   DilutionFunc1009->SetSavedPoint(18,0.08351633);
   DilutionFunc1009->SetSavedPoint(19,0.08330511);
   DilutionFunc1009->SetSavedPoint(20,0.08308964);
   DilutionFunc1009->SetSavedPoint(21,0.08286991);
   DilutionFunc1009->SetSavedPoint(22,0.08264591);
   DilutionFunc1009->SetSavedPoint(23,0.08241762);
   DilutionFunc1009->SetSavedPoint(24,0.08218502);
   DilutionFunc1009->SetSavedPoint(25,0.08194809);
   DilutionFunc1009->SetSavedPoint(26,0.08170683);
   DilutionFunc1009->SetSavedPoint(27,0.08146121);
   DilutionFunc1009->SetSavedPoint(28,0.08121121);
   DilutionFunc1009->SetSavedPoint(29,0.08095683);
   DilutionFunc1009->SetSavedPoint(30,0.08069804);
   DilutionFunc1009->SetSavedPoint(31,0.08043482);
   DilutionFunc1009->SetSavedPoint(32,0.08016717);
   DilutionFunc1009->SetSavedPoint(33,0.07989506);
   DilutionFunc1009->SetSavedPoint(34,0.07961848);
   DilutionFunc1009->SetSavedPoint(35,0.07933741);
   DilutionFunc1009->SetSavedPoint(36,0.07905184);
   DilutionFunc1009->SetSavedPoint(37,0.07876174);
   DilutionFunc1009->SetSavedPoint(38,0.0784671);
   DilutionFunc1009->SetSavedPoint(39,0.07816792);
   DilutionFunc1009->SetSavedPoint(40,0.07786416);
   DilutionFunc1009->SetSavedPoint(41,0.07755581);
   DilutionFunc1009->SetSavedPoint(42,0.07724286);
   DilutionFunc1009->SetSavedPoint(43,0.07692528);
   DilutionFunc1009->SetSavedPoint(44,0.07660307);
   DilutionFunc1009->SetSavedPoint(45,0.07627621);
   DilutionFunc1009->SetSavedPoint(46,0.07594468);
   DilutionFunc1009->SetSavedPoint(47,0.07560846);
   DilutionFunc1009->SetSavedPoint(48,0.07526754);
   DilutionFunc1009->SetSavedPoint(49,0.0749219);
   DilutionFunc1009->SetSavedPoint(50,0.07457152);
   DilutionFunc1009->SetSavedPoint(51,0.07421639);
   DilutionFunc1009->SetSavedPoint(52,0.07385649);
   DilutionFunc1009->SetSavedPoint(53,0.07349181);
   DilutionFunc1009->SetSavedPoint(54,0.07312232);
   DilutionFunc1009->SetSavedPoint(55,0.07274802);
   DilutionFunc1009->SetSavedPoint(56,0.07236888);
   DilutionFunc1009->SetSavedPoint(57,0.07198489);
   DilutionFunc1009->SetSavedPoint(58,0.07159603);
   DilutionFunc1009->SetSavedPoint(59,0.07120229);
   DilutionFunc1009->SetSavedPoint(60,0.07080365);
   DilutionFunc1009->SetSavedPoint(61,0.07040009);
   DilutionFunc1009->SetSavedPoint(62,0.0699916);
   DilutionFunc1009->SetSavedPoint(63,0.06957815);
   DilutionFunc1009->SetSavedPoint(64,0.06915974);
   DilutionFunc1009->SetSavedPoint(65,0.06873635);
   DilutionFunc1009->SetSavedPoint(66,0.06830796);
   DilutionFunc1009->SetSavedPoint(67,0.06787455);
   DilutionFunc1009->SetSavedPoint(68,0.06743611);
   DilutionFunc1009->SetSavedPoint(69,0.06699262);
   DilutionFunc1009->SetSavedPoint(70,0.06654407);
   DilutionFunc1009->SetSavedPoint(71,0.06609043);
   DilutionFunc1009->SetSavedPoint(72,0.06563169);
   DilutionFunc1009->SetSavedPoint(73,0.06516784);
   DilutionFunc1009->SetSavedPoint(74,0.06469886);
   DilutionFunc1009->SetSavedPoint(75,0.06422473);
   DilutionFunc1009->SetSavedPoint(76,0.06374544);
   DilutionFunc1009->SetSavedPoint(77,0.06326096);
   DilutionFunc1009->SetSavedPoint(78,0.06277129);
   DilutionFunc1009->SetSavedPoint(79,0.06227641);
   DilutionFunc1009->SetSavedPoint(80,0.06177629);
   DilutionFunc1009->SetSavedPoint(81,0.06127093);
   DilutionFunc1009->SetSavedPoint(82,0.06076031);
   DilutionFunc1009->SetSavedPoint(83,0.0602444);
   DilutionFunc1009->SetSavedPoint(84,0.0597232);
   DilutionFunc1009->SetSavedPoint(85,0.05919669);
   DilutionFunc1009->SetSavedPoint(86,0.05866484);
   DilutionFunc1009->SetSavedPoint(87,0.05812766);
   DilutionFunc1009->SetSavedPoint(88,0.0575851);
   DilutionFunc1009->SetSavedPoint(89,0.05703718);
   DilutionFunc1009->SetSavedPoint(90,0.05648385);
   DilutionFunc1009->SetSavedPoint(91,0.05592512);
   DilutionFunc1009->SetSavedPoint(92,0.05536095);
   DilutionFunc1009->SetSavedPoint(93,0.05479135);
   DilutionFunc1009->SetSavedPoint(94,0.05421628);
   DilutionFunc1009->SetSavedPoint(95,0.05363573);
   DilutionFunc1009->SetSavedPoint(96,0.05304969);
   DilutionFunc1009->SetSavedPoint(97,0.05245814);
   DilutionFunc1009->SetSavedPoint(98,0.05186107);
   DilutionFunc1009->SetSavedPoint(99,0.05125845);
   DilutionFunc1009->SetSavedPoint(100,0.05065027);
   DilutionFunc1009->SetSavedPoint(101,750);
   DilutionFunc1009->SetSavedPoint(102,2750);
   DilutionFunc1009->SetFillColor(19);
   DilutionFunc1009->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1009->SetLineColor(ci);
   DilutionFunc1009->SetLineWidth(3);
   DilutionFunc1009->SetChisquare(7.62679);
   DilutionFunc1009->SetNDF(6);
   DilutionFunc1009->GetXaxis()->SetLabelFont(42);
   DilutionFunc1009->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1009->GetXaxis()->SetTitleFont(42);
   DilutionFunc1009->GetYaxis()->SetLabelFont(42);
   DilutionFunc1009->GetYaxis()->SetTitleFont(42);
   DilutionFunc1009->SetParameter(0,0.08908446);
   DilutionFunc1009->SetParError(0,0.007979822);
   DilutionFunc1009->SetParLimits(0,0,0);
   DilutionFunc1009->SetParameter(1,-0.0001244349);
   DilutionFunc1009->SetParError(1,1.961978e-05);
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
   pt_LaTex = pt->AddText("1.27
");
   pt_LaTex = pt->AddText("0.09
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
