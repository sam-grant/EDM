void RecoVertexFit_S0()
{
//=========Macro generated from canvas: S0/c
//=========  (Tue Mar 22 09:46:12 2022) by ROOT version 6.24/06
   TCanvas *S0 = new TCanvas("S0", "c",0,0,800,600);
   S0->SetHighLightColor(2);
   S0->Range(466.8485,-0.03875,3026.846,0.14875);
   S0->SetFillColor(0);
   S0->SetBorderMode(0);
   S0->SetBorderSize(2);
   S0->SetFrameBorderMode(0);
   S0->SetFrameBorderMode(0);
   
   Double_t S0_trackReco_fx1003[11] = {
   451.6521,
   653.2702,
   879.9265,
   1123.052,
   1371.41,
   1620.742,
   1868,
   2116.568,
   2363.186,
   2615.293,
   2789.549};
   Double_t S0_trackReco_fy1003[11] = {
   0.08090216,
   0.07627298,
   0.07615789,
   0.07450409,
   0.1076356,
   0.09781785,
   0.05885924,
   0.07022785,
   0.03987501,
   0.02664263,
   -0.03473091};
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
   0.1013587,
   0.03383281,
   0.01959288,
   0.01609537,
   0.01468988,
   0.01395744,
   0.01374894,
   0.01412896,
   0.01463337,
   0.01453838,
   0.03109211};
   TGraphErrors *gre = new TGraphErrors(11,S0_trackReco_fx1003,S0_trackReco_fy1003,S0_trackReco_fex1003,S0_trackReco_fey1003);
   gre->SetName("S0_trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_trackReco1003 = new TH1F("Graph_S0_trackReco1003","",100,217.8624,3023.339);
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
   DilutionFunc1004->SetSavedPoint(0,0.1006801);
   DilutionFunc1004->SetSavedPoint(1,0.1003895);
   DilutionFunc1004->SetSavedPoint(2,0.1000903);
   DilutionFunc1004->SetSavedPoint(3,0.09978256);
   DilutionFunc1004->SetSavedPoint(4,0.09946622);
   DilutionFunc1004->SetSavedPoint(5,0.09914122);
   DilutionFunc1004->SetSavedPoint(6,0.09880754);
   DilutionFunc1004->SetSavedPoint(7,0.09846511);
   DilutionFunc1004->SetSavedPoint(8,0.0981139);
   DilutionFunc1004->SetSavedPoint(9,0.09775386);
   DilutionFunc1004->SetSavedPoint(10,0.09738495);
   DilutionFunc1004->SetSavedPoint(11,0.09700712);
   DilutionFunc1004->SetSavedPoint(12,0.09662032);
   DilutionFunc1004->SetSavedPoint(13,0.09622452);
   DilutionFunc1004->SetSavedPoint(14,0.09581967);
   DilutionFunc1004->SetSavedPoint(15,0.09540573);
   DilutionFunc1004->SetSavedPoint(16,0.09498264);
   DilutionFunc1004->SetSavedPoint(17,0.09455037);
   DilutionFunc1004->SetSavedPoint(18,0.09410886);
   DilutionFunc1004->SetSavedPoint(19,0.09365809);
   DilutionFunc1004->SetSavedPoint(20,0.09319799);
   DilutionFunc1004->SetSavedPoint(21,0.09272854);
   DilutionFunc1004->SetSavedPoint(22,0.09224967);
   DilutionFunc1004->SetSavedPoint(23,0.09176135);
   DilutionFunc1004->SetSavedPoint(24,0.09126354);
   DilutionFunc1004->SetSavedPoint(25,0.09075618);
   DilutionFunc1004->SetSavedPoint(26,0.09023924);
   DilutionFunc1004->SetSavedPoint(27,0.08971267);
   DilutionFunc1004->SetSavedPoint(28,0.08917642);
   DilutionFunc1004->SetSavedPoint(29,0.08863046);
   DilutionFunc1004->SetSavedPoint(30,0.08807473);
   DilutionFunc1004->SetSavedPoint(31,0.08750919);
   DilutionFunc1004->SetSavedPoint(32,0.0869338);
   DilutionFunc1004->SetSavedPoint(33,0.08634851);
   DilutionFunc1004->SetSavedPoint(34,0.08575328);
   DilutionFunc1004->SetSavedPoint(35,0.08514806);
   DilutionFunc1004->SetSavedPoint(36,0.08453282);
   DilutionFunc1004->SetSavedPoint(37,0.08390749);
   DilutionFunc1004->SetSavedPoint(38,0.08327205);
   DilutionFunc1004->SetSavedPoint(39,0.08262644);
   DilutionFunc1004->SetSavedPoint(40,0.08197063);
   DilutionFunc1004->SetSavedPoint(41,0.08130456);
   DilutionFunc1004->SetSavedPoint(42,0.08062819);
   DilutionFunc1004->SetSavedPoint(43,0.07994148);
   DilutionFunc1004->SetSavedPoint(44,0.07924438);
   DilutionFunc1004->SetSavedPoint(45,0.07853685);
   DilutionFunc1004->SetSavedPoint(46,0.07781884);
   DilutionFunc1004->SetSavedPoint(47,0.07709031);
   DilutionFunc1004->SetSavedPoint(48,0.07635122);
   DilutionFunc1004->SetSavedPoint(49,0.07560152);
   DilutionFunc1004->SetSavedPoint(50,0.07484116);
   DilutionFunc1004->SetSavedPoint(51,0.0740701);
   DilutionFunc1004->SetSavedPoint(52,0.0732883);
   DilutionFunc1004->SetSavedPoint(53,0.07249572);
   DilutionFunc1004->SetSavedPoint(54,0.07169229);
   DilutionFunc1004->SetSavedPoint(55,0.070878);
   DilutionFunc1004->SetSavedPoint(56,0.07005278);
   DilutionFunc1004->SetSavedPoint(57,0.06921659);
   DilutionFunc1004->SetSavedPoint(58,0.0683694);
   DilutionFunc1004->SetSavedPoint(59,0.06751115);
   DilutionFunc1004->SetSavedPoint(60,0.0666418);
   DilutionFunc1004->SetSavedPoint(61,0.0657613);
   DilutionFunc1004->SetSavedPoint(62,0.06486962);
   DilutionFunc1004->SetSavedPoint(63,0.0639667);
   DilutionFunc1004->SetSavedPoint(64,0.06305251);
   DilutionFunc1004->SetSavedPoint(65,0.06212699);
   DilutionFunc1004->SetSavedPoint(66,0.06119011);
   DilutionFunc1004->SetSavedPoint(67,0.06024182);
   DilutionFunc1004->SetSavedPoint(68,0.05928206);
   DilutionFunc1004->SetSavedPoint(69,0.05831081);
   DilutionFunc1004->SetSavedPoint(70,0.05732802);
   DilutionFunc1004->SetSavedPoint(71,0.05633363);
   DilutionFunc1004->SetSavedPoint(72,0.05532761);
   DilutionFunc1004->SetSavedPoint(73,0.05430991);
   DilutionFunc1004->SetSavedPoint(74,0.05328049);
   DilutionFunc1004->SetSavedPoint(75,0.05223931);
   DilutionFunc1004->SetSavedPoint(76,0.0511863);
   DilutionFunc1004->SetSavedPoint(77,0.05012145);
   DilutionFunc1004->SetSavedPoint(78,0.04904469);
   DilutionFunc1004->SetSavedPoint(79,0.04795598);
   DilutionFunc1004->SetSavedPoint(80,0.04685529);
   DilutionFunc1004->SetSavedPoint(81,0.04574256);
   DilutionFunc1004->SetSavedPoint(82,0.04461775);
   DilutionFunc1004->SetSavedPoint(83,0.04348082);
   DilutionFunc1004->SetSavedPoint(84,0.04233172);
   DilutionFunc1004->SetSavedPoint(85,0.04117041);
   DilutionFunc1004->SetSavedPoint(86,0.03999683);
   DilutionFunc1004->SetSavedPoint(87,0.03881096);
   DilutionFunc1004->SetSavedPoint(88,0.03761274);
   DilutionFunc1004->SetSavedPoint(89,0.03640213);
   DilutionFunc1004->SetSavedPoint(90,0.03517909);
   DilutionFunc1004->SetSavedPoint(91,0.03394356);
   DilutionFunc1004->SetSavedPoint(92,0.03269551);
   DilutionFunc1004->SetSavedPoint(93,0.03143489);
   DilutionFunc1004->SetSavedPoint(94,0.03016166);
   DilutionFunc1004->SetSavedPoint(95,0.02887577);
   DilutionFunc1004->SetSavedPoint(96,0.02757717);
   DilutionFunc1004->SetSavedPoint(97,0.02626583);
   DilutionFunc1004->SetSavedPoint(98,0.0249417);
   DilutionFunc1004->SetSavedPoint(99,0.02360473);
   DilutionFunc1004->SetSavedPoint(100,0.02225488);
   DilutionFunc1004->SetSavedPoint(101,750);
   DilutionFunc1004->SetSavedPoint(102,2750);
   DilutionFunc1004->SetFillColor(19);
   DilutionFunc1004->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1004->SetLineColor(ci);
   DilutionFunc1004->SetLineWidth(3);
   DilutionFunc1004->SetChisquare(7.934803);
   DilutionFunc1004->SetNDF(6);
   DilutionFunc1004->GetXaxis()->SetLabelFont(42);
   DilutionFunc1004->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1004->GetXaxis()->SetTitleFont(42);
   DilutionFunc1004->GetYaxis()->SetLabelFont(42);
   DilutionFunc1004->GetYaxis()->SetTitleFont(42);
   DilutionFunc1004->SetParameter(0,0.1058547);
   DilutionFunc1004->SetParError(0,0.01048911);
   DilutionFunc1004->SetParLimits(0,0,0);
   DilutionFunc1004->SetParameter(1,-0.0001636373);
   DilutionFunc1004->SetParError(1,1.229285e-05);
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
   DilutionFunc1005->SetSavedPoint(0,0.1006801);
   DilutionFunc1005->SetSavedPoint(1,0.1003895);
   DilutionFunc1005->SetSavedPoint(2,0.1000903);
   DilutionFunc1005->SetSavedPoint(3,0.09978256);
   DilutionFunc1005->SetSavedPoint(4,0.09946622);
   DilutionFunc1005->SetSavedPoint(5,0.09914122);
   DilutionFunc1005->SetSavedPoint(6,0.09880754);
   DilutionFunc1005->SetSavedPoint(7,0.09846511);
   DilutionFunc1005->SetSavedPoint(8,0.0981139);
   DilutionFunc1005->SetSavedPoint(9,0.09775386);
   DilutionFunc1005->SetSavedPoint(10,0.09738495);
   DilutionFunc1005->SetSavedPoint(11,0.09700712);
   DilutionFunc1005->SetSavedPoint(12,0.09662032);
   DilutionFunc1005->SetSavedPoint(13,0.09622452);
   DilutionFunc1005->SetSavedPoint(14,0.09581967);
   DilutionFunc1005->SetSavedPoint(15,0.09540573);
   DilutionFunc1005->SetSavedPoint(16,0.09498264);
   DilutionFunc1005->SetSavedPoint(17,0.09455037);
   DilutionFunc1005->SetSavedPoint(18,0.09410886);
   DilutionFunc1005->SetSavedPoint(19,0.09365809);
   DilutionFunc1005->SetSavedPoint(20,0.09319799);
   DilutionFunc1005->SetSavedPoint(21,0.09272854);
   DilutionFunc1005->SetSavedPoint(22,0.09224967);
   DilutionFunc1005->SetSavedPoint(23,0.09176135);
   DilutionFunc1005->SetSavedPoint(24,0.09126354);
   DilutionFunc1005->SetSavedPoint(25,0.09075618);
   DilutionFunc1005->SetSavedPoint(26,0.09023924);
   DilutionFunc1005->SetSavedPoint(27,0.08971267);
   DilutionFunc1005->SetSavedPoint(28,0.08917642);
   DilutionFunc1005->SetSavedPoint(29,0.08863046);
   DilutionFunc1005->SetSavedPoint(30,0.08807473);
   DilutionFunc1005->SetSavedPoint(31,0.08750919);
   DilutionFunc1005->SetSavedPoint(32,0.0869338);
   DilutionFunc1005->SetSavedPoint(33,0.08634851);
   DilutionFunc1005->SetSavedPoint(34,0.08575328);
   DilutionFunc1005->SetSavedPoint(35,0.08514806);
   DilutionFunc1005->SetSavedPoint(36,0.08453282);
   DilutionFunc1005->SetSavedPoint(37,0.08390749);
   DilutionFunc1005->SetSavedPoint(38,0.08327205);
   DilutionFunc1005->SetSavedPoint(39,0.08262644);
   DilutionFunc1005->SetSavedPoint(40,0.08197063);
   DilutionFunc1005->SetSavedPoint(41,0.08130456);
   DilutionFunc1005->SetSavedPoint(42,0.08062819);
   DilutionFunc1005->SetSavedPoint(43,0.07994148);
   DilutionFunc1005->SetSavedPoint(44,0.07924438);
   DilutionFunc1005->SetSavedPoint(45,0.07853685);
   DilutionFunc1005->SetSavedPoint(46,0.07781884);
   DilutionFunc1005->SetSavedPoint(47,0.07709031);
   DilutionFunc1005->SetSavedPoint(48,0.07635122);
   DilutionFunc1005->SetSavedPoint(49,0.07560152);
   DilutionFunc1005->SetSavedPoint(50,0.07484116);
   DilutionFunc1005->SetSavedPoint(51,0.0740701);
   DilutionFunc1005->SetSavedPoint(52,0.0732883);
   DilutionFunc1005->SetSavedPoint(53,0.07249572);
   DilutionFunc1005->SetSavedPoint(54,0.07169229);
   DilutionFunc1005->SetSavedPoint(55,0.070878);
   DilutionFunc1005->SetSavedPoint(56,0.07005278);
   DilutionFunc1005->SetSavedPoint(57,0.06921659);
   DilutionFunc1005->SetSavedPoint(58,0.0683694);
   DilutionFunc1005->SetSavedPoint(59,0.06751115);
   DilutionFunc1005->SetSavedPoint(60,0.0666418);
   DilutionFunc1005->SetSavedPoint(61,0.0657613);
   DilutionFunc1005->SetSavedPoint(62,0.06486962);
   DilutionFunc1005->SetSavedPoint(63,0.0639667);
   DilutionFunc1005->SetSavedPoint(64,0.06305251);
   DilutionFunc1005->SetSavedPoint(65,0.06212699);
   DilutionFunc1005->SetSavedPoint(66,0.06119011);
   DilutionFunc1005->SetSavedPoint(67,0.06024182);
   DilutionFunc1005->SetSavedPoint(68,0.05928206);
   DilutionFunc1005->SetSavedPoint(69,0.05831081);
   DilutionFunc1005->SetSavedPoint(70,0.05732802);
   DilutionFunc1005->SetSavedPoint(71,0.05633363);
   DilutionFunc1005->SetSavedPoint(72,0.05532761);
   DilutionFunc1005->SetSavedPoint(73,0.05430991);
   DilutionFunc1005->SetSavedPoint(74,0.05328049);
   DilutionFunc1005->SetSavedPoint(75,0.05223931);
   DilutionFunc1005->SetSavedPoint(76,0.0511863);
   DilutionFunc1005->SetSavedPoint(77,0.05012145);
   DilutionFunc1005->SetSavedPoint(78,0.04904469);
   DilutionFunc1005->SetSavedPoint(79,0.04795598);
   DilutionFunc1005->SetSavedPoint(80,0.04685529);
   DilutionFunc1005->SetSavedPoint(81,0.04574256);
   DilutionFunc1005->SetSavedPoint(82,0.04461775);
   DilutionFunc1005->SetSavedPoint(83,0.04348082);
   DilutionFunc1005->SetSavedPoint(84,0.04233172);
   DilutionFunc1005->SetSavedPoint(85,0.04117041);
   DilutionFunc1005->SetSavedPoint(86,0.03999683);
   DilutionFunc1005->SetSavedPoint(87,0.03881096);
   DilutionFunc1005->SetSavedPoint(88,0.03761274);
   DilutionFunc1005->SetSavedPoint(89,0.03640213);
   DilutionFunc1005->SetSavedPoint(90,0.03517909);
   DilutionFunc1005->SetSavedPoint(91,0.03394356);
   DilutionFunc1005->SetSavedPoint(92,0.03269551);
   DilutionFunc1005->SetSavedPoint(93,0.03143489);
   DilutionFunc1005->SetSavedPoint(94,0.03016166);
   DilutionFunc1005->SetSavedPoint(95,0.02887577);
   DilutionFunc1005->SetSavedPoint(96,0.02757717);
   DilutionFunc1005->SetSavedPoint(97,0.02626583);
   DilutionFunc1005->SetSavedPoint(98,0.0249417);
   DilutionFunc1005->SetSavedPoint(99,0.02360473);
   DilutionFunc1005->SetSavedPoint(100,0.02225488);
   DilutionFunc1005->SetSavedPoint(101,750);
   DilutionFunc1005->SetSavedPoint(102,2750);
   DilutionFunc1005->SetFillColor(19);
   DilutionFunc1005->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   DilutionFunc1005->SetLineColor(ci);
   DilutionFunc1005->SetLineWidth(3);
   DilutionFunc1005->SetChisquare(7.934803);
   DilutionFunc1005->SetNDF(6);
   DilutionFunc1005->GetXaxis()->SetLabelFont(42);
   DilutionFunc1005->GetXaxis()->SetTitleOffset(1);
   DilutionFunc1005->GetXaxis()->SetTitleFont(42);
   DilutionFunc1005->GetYaxis()->SetLabelFont(42);
   DilutionFunc1005->GetYaxis()->SetTitleFont(42);
   DilutionFunc1005->SetParameter(0,0.1058547);
   DilutionFunc1005->SetParError(0,0.01048911);
   DilutionFunc1005->SetParLimits(0,0,0);
   DilutionFunc1005->SetParameter(1,-0.0001636373);
   DilutionFunc1005->SetParError(1,1.229285e-05);
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
   pt_LaTex = pt->AddText("1.32
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
