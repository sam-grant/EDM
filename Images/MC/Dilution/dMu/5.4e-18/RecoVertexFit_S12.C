void RecoVertexFit_S12()
{
//=========Macro generated from canvas: S12/c
//=========  (Thu Feb  3 14:38:46 2022) by ROOT version 6.24/06
   TCanvas *S12 = new TCanvas("S12", "c",0,0,800,600);
   S12->SetHighLightColor(2);
   S12->Range(466.9911,-0.015,3024.667,0.135);
   S12->SetFillColor(0);
   S12->SetBorderMode(0);
   S12->SetBorderSize(2);
   S12->SetFrameBorderMode(0);
   S12->SetFrameBorderMode(0);
   
   Double_t S12_trackReco_fx1007[11] = {
   451.8085,
   653.3576,
   880.334,
   1123.155,
   1371.138,
   1620.288,
   1866.777,
   2114.885,
   2362.581,
   2614.18,
   2787.586};
   Double_t S12_trackReco_fy1007[11] = {
   0.08904284,
   0.07338525,
   0.06466967,
   0.07496798,
   0.06235652,
   0.07708388,
   0.08283227,
   0.07667804,
   0.02419212,
   0.03927915,
   0.03449036};
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
   0.08526107,
   0.02864423,
   0.01648357,
   0.01354389,
   0.01238096,
   0.01175884,
   0.01182052,
   0.01249912,
   0.01346099,
   0.01341857,
   0.03084393};
   TGraphErrors *gre = new TGraphErrors(11,S12_trackReco_fx1007,S12_trackReco_fy1007,S12_trackReco_fex1007,S12_trackReco_fey1007);
   gre->SetName("S12_trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_trackReco1007 = new TH1F("Graph_S12_trackReco1007","",100,218.2308,3021.163);
   Graph_S12_trackReco1007->SetMinimum(0);
   Graph_S12_trackReco1007->SetMaximum(0.12);
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
   DilutionFunc1008->SetSavedPoint(0,0.08158527);
   DilutionFunc1008->SetSavedPoint(1,0.08141707);
   DilutionFunc1008->SetSavedPoint(2,0.081244);
   DilutionFunc1008->SetSavedPoint(3,0.08106605);
   DilutionFunc1008->SetSavedPoint(4,0.0808832);
   DilutionFunc1008->SetSavedPoint(5,0.08069541);
   DilutionFunc1008->SetSavedPoint(6,0.08050266);
   DilutionFunc1008->SetSavedPoint(7,0.08030494);
   DilutionFunc1008->SetSavedPoint(8,0.08010222);
   DilutionFunc1008->SetSavedPoint(9,0.07989448);
   DilutionFunc1008->SetSavedPoint(10,0.0796817);
   DilutionFunc1008->SetSavedPoint(11,0.07946385);
   DilutionFunc1008->SetSavedPoint(12,0.07924091);
   DilutionFunc1008->SetSavedPoint(13,0.07901286);
   DilutionFunc1008->SetSavedPoint(14,0.07877968);
   DilutionFunc1008->SetSavedPoint(15,0.07854134);
   DilutionFunc1008->SetSavedPoint(16,0.07829782);
   DilutionFunc1008->SetSavedPoint(17,0.0780491);
   DilutionFunc1008->SetSavedPoint(18,0.07779516);
   DilutionFunc1008->SetSavedPoint(19,0.07753597);
   DilutionFunc1008->SetSavedPoint(20,0.07727151);
   DilutionFunc1008->SetSavedPoint(21,0.07700177);
   DilutionFunc1008->SetSavedPoint(22,0.07672671);
   DilutionFunc1008->SetSavedPoint(23,0.07644631);
   DilutionFunc1008->SetSavedPoint(24,0.07616056);
   DilutionFunc1008->SetSavedPoint(25,0.07586942);
   DilutionFunc1008->SetSavedPoint(26,0.07557288);
   DilutionFunc1008->SetSavedPoint(27,0.07527092);
   DilutionFunc1008->SetSavedPoint(28,0.07496351);
   DilutionFunc1008->SetSavedPoint(29,0.07465063);
   DilutionFunc1008->SetSavedPoint(30,0.07433225);
   DilutionFunc1008->SetSavedPoint(31,0.07400836);
   DilutionFunc1008->SetSavedPoint(32,0.07367893);
   DilutionFunc1008->SetSavedPoint(33,0.07334395);
   DilutionFunc1008->SetSavedPoint(34,0.07300337);
   DilutionFunc1008->SetSavedPoint(35,0.0726572);
   DilutionFunc1008->SetSavedPoint(36,0.0723054);
   DilutionFunc1008->SetSavedPoint(37,0.07194794);
   DilutionFunc1008->SetSavedPoint(38,0.07158482);
   DilutionFunc1008->SetSavedPoint(39,0.071216);
   DilutionFunc1008->SetSavedPoint(40,0.07084146);
   DilutionFunc1008->SetSavedPoint(41,0.07046118);
   DilutionFunc1008->SetSavedPoint(42,0.07007514);
   DilutionFunc1008->SetSavedPoint(43,0.06968331);
   DilutionFunc1008->SetSavedPoint(44,0.06928568);
   DilutionFunc1008->SetSavedPoint(45,0.06888222);
   DilutionFunc1008->SetSavedPoint(46,0.06847291);
   DilutionFunc1008->SetSavedPoint(47,0.06805772);
   DilutionFunc1008->SetSavedPoint(48,0.06763663);
   DilutionFunc1008->SetSavedPoint(49,0.06720963);
   DilutionFunc1008->SetSavedPoint(50,0.06677668);
   DilutionFunc1008->SetSavedPoint(51,0.06633777);
   DilutionFunc1008->SetSavedPoint(52,0.06589287);
   DilutionFunc1008->SetSavedPoint(53,0.06544196);
   DilutionFunc1008->SetSavedPoint(54,0.06498502);
   DilutionFunc1008->SetSavedPoint(55,0.06452203);
   DilutionFunc1008->SetSavedPoint(56,0.06405296);
   DilutionFunc1008->SetSavedPoint(57,0.06357779);
   DilutionFunc1008->SetSavedPoint(58,0.0630965);
   DilutionFunc1008->SetSavedPoint(59,0.06260906);
   DilutionFunc1008->SetSavedPoint(60,0.06211546);
   DilutionFunc1008->SetSavedPoint(61,0.06161567);
   DilutionFunc1008->SetSavedPoint(62,0.06110967);
   DilutionFunc1008->SetSavedPoint(63,0.06059743);
   DilutionFunc1008->SetSavedPoint(64,0.06007894);
   DilutionFunc1008->SetSavedPoint(65,0.05955417);
   DilutionFunc1008->SetSavedPoint(66,0.05902309);
   DilutionFunc1008->SetSavedPoint(67,0.0584857);
   DilutionFunc1008->SetSavedPoint(68,0.05794196);
   DilutionFunc1008->SetSavedPoint(69,0.05739184);
   DilutionFunc1008->SetSavedPoint(70,0.05683534);
   DilutionFunc1008->SetSavedPoint(71,0.05627243);
   DilutionFunc1008->SetSavedPoint(72,0.05570308);
   DilutionFunc1008->SetSavedPoint(73,0.05512727);
   DilutionFunc1008->SetSavedPoint(74,0.05454498);
   DilutionFunc1008->SetSavedPoint(75,0.05395618);
   DilutionFunc1008->SetSavedPoint(76,0.05336086);
   DilutionFunc1008->SetSavedPoint(77,0.05275899);
   DilutionFunc1008->SetSavedPoint(78,0.05215056);
   DilutionFunc1008->SetSavedPoint(79,0.05153552);
   DilutionFunc1008->SetSavedPoint(80,0.05091388);
   DilutionFunc1008->SetSavedPoint(81,0.05028559);
   DilutionFunc1008->SetSavedPoint(82,0.04965065);
   DilutionFunc1008->SetSavedPoint(83,0.04900902);
   DilutionFunc1008->SetSavedPoint(84,0.04836068);
   DilutionFunc1008->SetSavedPoint(85,0.04770562);
   DilutionFunc1008->SetSavedPoint(86,0.04704381);
   DilutionFunc1008->SetSavedPoint(87,0.04637522);
   DilutionFunc1008->SetSavedPoint(88,0.04569984);
   DilutionFunc1008->SetSavedPoint(89,0.04501765);
   DilutionFunc1008->SetSavedPoint(90,0.04432861);
   DilutionFunc1008->SetSavedPoint(91,0.04363271);
   DilutionFunc1008->SetSavedPoint(92,0.04292992);
   DilutionFunc1008->SetSavedPoint(93,0.04222023);
   DilutionFunc1008->SetSavedPoint(94,0.0415036);
   DilutionFunc1008->SetSavedPoint(95,0.04078003);
   DilutionFunc1008->SetSavedPoint(96,0.04004948);
   DilutionFunc1008->SetSavedPoint(97,0.03931193);
   DilutionFunc1008->SetSavedPoint(98,0.03856736);
   DilutionFunc1008->SetSavedPoint(99,0.03781575);
   DilutionFunc1008->SetSavedPoint(100,0.03705708);
   DilutionFunc1008->SetSavedPoint(101,750);
   DilutionFunc1008->SetSavedPoint(102,2750);
   DilutionFunc1008->SetFillColor(19);
   DilutionFunc1008->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1008->SetLineColor(ci);
   DilutionFunc1008->SetLineWidth(3);
   DilutionFunc1008->SetChisquare(10.9017);
   DilutionFunc1008->SetNDF(6);
   DilutionFunc1008->GetXaxis()->SetLabelFont(42);
   DilutionFunc1008->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1008->GetXaxis()->SetTitleFont(42);
   DilutionFunc1008->GetYaxis()->SetLabelFont(42);
   DilutionFunc1008->GetYaxis()->SetTitleFont(42);
   DilutionFunc1008->SetParameter(0,0.08459485);
   DilutionFunc1008->SetParError(0,0.009018215);
   DilutionFunc1008->SetParLimits(0,0,0);
   DilutionFunc1008->SetParameter(1,-0.0001403561);
   DilutionFunc1008->SetParError(1,1.892638e-05);
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
   DilutionFunc1009->SetSavedPoint(0,0.08158527);
   DilutionFunc1009->SetSavedPoint(1,0.08141707);
   DilutionFunc1009->SetSavedPoint(2,0.081244);
   DilutionFunc1009->SetSavedPoint(3,0.08106605);
   DilutionFunc1009->SetSavedPoint(4,0.0808832);
   DilutionFunc1009->SetSavedPoint(5,0.08069541);
   DilutionFunc1009->SetSavedPoint(6,0.08050266);
   DilutionFunc1009->SetSavedPoint(7,0.08030494);
   DilutionFunc1009->SetSavedPoint(8,0.08010222);
   DilutionFunc1009->SetSavedPoint(9,0.07989448);
   DilutionFunc1009->SetSavedPoint(10,0.0796817);
   DilutionFunc1009->SetSavedPoint(11,0.07946385);
   DilutionFunc1009->SetSavedPoint(12,0.07924091);
   DilutionFunc1009->SetSavedPoint(13,0.07901286);
   DilutionFunc1009->SetSavedPoint(14,0.07877968);
   DilutionFunc1009->SetSavedPoint(15,0.07854134);
   DilutionFunc1009->SetSavedPoint(16,0.07829782);
   DilutionFunc1009->SetSavedPoint(17,0.0780491);
   DilutionFunc1009->SetSavedPoint(18,0.07779516);
   DilutionFunc1009->SetSavedPoint(19,0.07753597);
   DilutionFunc1009->SetSavedPoint(20,0.07727151);
   DilutionFunc1009->SetSavedPoint(21,0.07700177);
   DilutionFunc1009->SetSavedPoint(22,0.07672671);
   DilutionFunc1009->SetSavedPoint(23,0.07644631);
   DilutionFunc1009->SetSavedPoint(24,0.07616056);
   DilutionFunc1009->SetSavedPoint(25,0.07586942);
   DilutionFunc1009->SetSavedPoint(26,0.07557288);
   DilutionFunc1009->SetSavedPoint(27,0.07527092);
   DilutionFunc1009->SetSavedPoint(28,0.07496351);
   DilutionFunc1009->SetSavedPoint(29,0.07465063);
   DilutionFunc1009->SetSavedPoint(30,0.07433225);
   DilutionFunc1009->SetSavedPoint(31,0.07400836);
   DilutionFunc1009->SetSavedPoint(32,0.07367893);
   DilutionFunc1009->SetSavedPoint(33,0.07334395);
   DilutionFunc1009->SetSavedPoint(34,0.07300337);
   DilutionFunc1009->SetSavedPoint(35,0.0726572);
   DilutionFunc1009->SetSavedPoint(36,0.0723054);
   DilutionFunc1009->SetSavedPoint(37,0.07194794);
   DilutionFunc1009->SetSavedPoint(38,0.07158482);
   DilutionFunc1009->SetSavedPoint(39,0.071216);
   DilutionFunc1009->SetSavedPoint(40,0.07084146);
   DilutionFunc1009->SetSavedPoint(41,0.07046118);
   DilutionFunc1009->SetSavedPoint(42,0.07007514);
   DilutionFunc1009->SetSavedPoint(43,0.06968331);
   DilutionFunc1009->SetSavedPoint(44,0.06928568);
   DilutionFunc1009->SetSavedPoint(45,0.06888222);
   DilutionFunc1009->SetSavedPoint(46,0.06847291);
   DilutionFunc1009->SetSavedPoint(47,0.06805772);
   DilutionFunc1009->SetSavedPoint(48,0.06763663);
   DilutionFunc1009->SetSavedPoint(49,0.06720963);
   DilutionFunc1009->SetSavedPoint(50,0.06677668);
   DilutionFunc1009->SetSavedPoint(51,0.06633777);
   DilutionFunc1009->SetSavedPoint(52,0.06589287);
   DilutionFunc1009->SetSavedPoint(53,0.06544196);
   DilutionFunc1009->SetSavedPoint(54,0.06498502);
   DilutionFunc1009->SetSavedPoint(55,0.06452203);
   DilutionFunc1009->SetSavedPoint(56,0.06405296);
   DilutionFunc1009->SetSavedPoint(57,0.06357779);
   DilutionFunc1009->SetSavedPoint(58,0.0630965);
   DilutionFunc1009->SetSavedPoint(59,0.06260906);
   DilutionFunc1009->SetSavedPoint(60,0.06211546);
   DilutionFunc1009->SetSavedPoint(61,0.06161567);
   DilutionFunc1009->SetSavedPoint(62,0.06110967);
   DilutionFunc1009->SetSavedPoint(63,0.06059743);
   DilutionFunc1009->SetSavedPoint(64,0.06007894);
   DilutionFunc1009->SetSavedPoint(65,0.05955417);
   DilutionFunc1009->SetSavedPoint(66,0.05902309);
   DilutionFunc1009->SetSavedPoint(67,0.0584857);
   DilutionFunc1009->SetSavedPoint(68,0.05794196);
   DilutionFunc1009->SetSavedPoint(69,0.05739184);
   DilutionFunc1009->SetSavedPoint(70,0.05683534);
   DilutionFunc1009->SetSavedPoint(71,0.05627243);
   DilutionFunc1009->SetSavedPoint(72,0.05570308);
   DilutionFunc1009->SetSavedPoint(73,0.05512727);
   DilutionFunc1009->SetSavedPoint(74,0.05454498);
   DilutionFunc1009->SetSavedPoint(75,0.05395618);
   DilutionFunc1009->SetSavedPoint(76,0.05336086);
   DilutionFunc1009->SetSavedPoint(77,0.05275899);
   DilutionFunc1009->SetSavedPoint(78,0.05215056);
   DilutionFunc1009->SetSavedPoint(79,0.05153552);
   DilutionFunc1009->SetSavedPoint(80,0.05091388);
   DilutionFunc1009->SetSavedPoint(81,0.05028559);
   DilutionFunc1009->SetSavedPoint(82,0.04965065);
   DilutionFunc1009->SetSavedPoint(83,0.04900902);
   DilutionFunc1009->SetSavedPoint(84,0.04836068);
   DilutionFunc1009->SetSavedPoint(85,0.04770562);
   DilutionFunc1009->SetSavedPoint(86,0.04704381);
   DilutionFunc1009->SetSavedPoint(87,0.04637522);
   DilutionFunc1009->SetSavedPoint(88,0.04569984);
   DilutionFunc1009->SetSavedPoint(89,0.04501765);
   DilutionFunc1009->SetSavedPoint(90,0.04432861);
   DilutionFunc1009->SetSavedPoint(91,0.04363271);
   DilutionFunc1009->SetSavedPoint(92,0.04292992);
   DilutionFunc1009->SetSavedPoint(93,0.04222023);
   DilutionFunc1009->SetSavedPoint(94,0.0415036);
   DilutionFunc1009->SetSavedPoint(95,0.04078003);
   DilutionFunc1009->SetSavedPoint(96,0.04004948);
   DilutionFunc1009->SetSavedPoint(97,0.03931193);
   DilutionFunc1009->SetSavedPoint(98,0.03856736);
   DilutionFunc1009->SetSavedPoint(99,0.03781575);
   DilutionFunc1009->SetSavedPoint(100,0.03705708);
   DilutionFunc1009->SetSavedPoint(101,750);
   DilutionFunc1009->SetSavedPoint(102,2750);
   DilutionFunc1009->SetFillColor(19);
   DilutionFunc1009->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1009->SetLineColor(ci);
   DilutionFunc1009->SetLineWidth(3);
   DilutionFunc1009->SetChisquare(10.9017);
   DilutionFunc1009->SetNDF(6);
   DilutionFunc1009->GetXaxis()->SetLabelFont(42);
   DilutionFunc1009->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1009->GetXaxis()->SetTitleFont(42);
   DilutionFunc1009->GetYaxis()->SetLabelFont(42);
   DilutionFunc1009->GetYaxis()->SetTitleFont(42);
   DilutionFunc1009->SetParameter(0,0.08459485);
   DilutionFunc1009->SetParError(0,0.009018215);
   DilutionFunc1009->SetParLimits(0,0,0);
   DilutionFunc1009->SetParameter(1,-0.0001403561);
   DilutionFunc1009->SetParError(1,1.892638e-05);
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
   pt_LaTex = pt->AddText("b");
   pt->Draw();
   
   pt = new TPaveText(0.4,0.2,0.55,0.45,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("1.82
");
   pt_LaTex = pt->AddText("0.08
#pm0.009
");
   pt_LaTex = pt->AddText("-0.0001
#pm2e-05
");
   pt->Draw();
   S12->Modified();
   S12->cd();
   S12->SetSelected(S12);
}
