void RecoVertexFit_S0()
{
//=========Macro generated from canvas: S0/c
//=========  (Thu Feb  3 13:23:10 2022) by ROOT version 6.24/06
   TCanvas *S0 = new TCanvas("S0", "c",0,0,800,600);
   S0->SetHighLightColor(2);
   S0->Range(466.8485,-0.015,3026.846,0.135);
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
   0.08092763,
   0.07654801,
   0.07615896,
   0.0745966,
   0.1076194,
   0.09784605,
   0.05880395,
   0.07024622,
   0.03982395,
   0.02666566,
   -0.03473756};
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
   0.101357,
   0.03383315,
   0.01959323,
   0.01609559,
   0.01469013,
   0.01395766,
   0.0137491,
   0.01412932,
   0.01463365,
   0.01453881,
   0.03109489};
   TGraphErrors *gre = new TGraphErrors(11,S0_trackReco_fx1003,S0_trackReco_fy1003,S0_trackReco_fex1003,S0_trackReco_fey1003);
   gre->SetName("S0_trackReco");
   gre->SetTitle(";Decay vertex momentum [MeV];d_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_trackReco1003 = new TH1F("Graph_S0_trackReco1003","",100,217.8624,3023.339);
   Graph_S0_trackReco1003->SetMinimum(0);
   Graph_S0_trackReco1003->SetMaximum(0.12);
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
   
   
   TF1 *ParabolaFunc1004 = new TF1("*ParabolaFunc",750,2750,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2750,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1004->SetRange(750,2750);
   ParabolaFunc1004->SetName("ParabolaFunc");
   ParabolaFunc1004->SetTitle("ParabolaFunc");
   ParabolaFunc1004->SetSavedPoint(0,0.07232718);
   ParabolaFunc1004->SetSavedPoint(1,0.07342796);
   ParabolaFunc1004->SetSavedPoint(2,0.07449293);
   ParabolaFunc1004->SetSavedPoint(3,0.07552209);
   ParabolaFunc1004->SetSavedPoint(4,0.07651544);
   ParabolaFunc1004->SetSavedPoint(5,0.07747299);
   ParabolaFunc1004->SetSavedPoint(6,0.07839472);
   ParabolaFunc1004->SetSavedPoint(7,0.07928065);
   ParabolaFunc1004->SetSavedPoint(8,0.08013077);
   ParabolaFunc1004->SetSavedPoint(9,0.08094508);
   ParabolaFunc1004->SetSavedPoint(10,0.08172359);
   ParabolaFunc1004->SetSavedPoint(11,0.08246628);
   ParabolaFunc1004->SetSavedPoint(12,0.08317317);
   ParabolaFunc1004->SetSavedPoint(13,0.08384425);
   ParabolaFunc1004->SetSavedPoint(14,0.08447952);
   ParabolaFunc1004->SetSavedPoint(15,0.08507898);
   ParabolaFunc1004->SetSavedPoint(16,0.08564263);
   ParabolaFunc1004->SetSavedPoint(17,0.08617048);
   ParabolaFunc1004->SetSavedPoint(18,0.08666252);
   ParabolaFunc1004->SetSavedPoint(19,0.08711875);
   ParabolaFunc1004->SetSavedPoint(20,0.08753917);
   ParabolaFunc1004->SetSavedPoint(21,0.08792378);
   ParabolaFunc1004->SetSavedPoint(22,0.08827258);
   ParabolaFunc1004->SetSavedPoint(23,0.08858558);
   ParabolaFunc1004->SetSavedPoint(24,0.08886277);
   ParabolaFunc1004->SetSavedPoint(25,0.08910415);
   ParabolaFunc1004->SetSavedPoint(26,0.08930972);
   ParabolaFunc1004->SetSavedPoint(27,0.08947948);
   ParabolaFunc1004->SetSavedPoint(28,0.08961344);
   ParabolaFunc1004->SetSavedPoint(29,0.08971159);
   ParabolaFunc1004->SetSavedPoint(30,0.08977392);
   ParabolaFunc1004->SetSavedPoint(31,0.08980045);
   ParabolaFunc1004->SetSavedPoint(32,0.08979118);
   ParabolaFunc1004->SetSavedPoint(33,0.08974609);
   ParabolaFunc1004->SetSavedPoint(34,0.0896652);
   ParabolaFunc1004->SetSavedPoint(35,0.08954849);
   ParabolaFunc1004->SetSavedPoint(36,0.08939598);
   ParabolaFunc1004->SetSavedPoint(37,0.08920767);
   ParabolaFunc1004->SetSavedPoint(38,0.08898354);
   ParabolaFunc1004->SetSavedPoint(39,0.0887236);
   ParabolaFunc1004->SetSavedPoint(40,0.08842786);
   ParabolaFunc1004->SetSavedPoint(41,0.08809631);
   ParabolaFunc1004->SetSavedPoint(42,0.08772895);
   ParabolaFunc1004->SetSavedPoint(43,0.08732578);
   ParabolaFunc1004->SetSavedPoint(44,0.0868868);
   ParabolaFunc1004->SetSavedPoint(45,0.08641202);
   ParabolaFunc1004->SetSavedPoint(46,0.08590142);
   ParabolaFunc1004->SetSavedPoint(47,0.08535502);
   ParabolaFunc1004->SetSavedPoint(48,0.08477281);
   ParabolaFunc1004->SetSavedPoint(49,0.0841548);
   ParabolaFunc1004->SetSavedPoint(50,0.08350097);
   ParabolaFunc1004->SetSavedPoint(51,0.08281134);
   ParabolaFunc1004->SetSavedPoint(52,0.08208589);
   ParabolaFunc1004->SetSavedPoint(53,0.08132464);
   ParabolaFunc1004->SetSavedPoint(54,0.08052758);
   ParabolaFunc1004->SetSavedPoint(55,0.07969472);
   ParabolaFunc1004->SetSavedPoint(56,0.07882604);
   ParabolaFunc1004->SetSavedPoint(57,0.07792156);
   ParabolaFunc1004->SetSavedPoint(58,0.07698127);
   ParabolaFunc1004->SetSavedPoint(59,0.07600517);
   ParabolaFunc1004->SetSavedPoint(60,0.07499326);
   ParabolaFunc1004->SetSavedPoint(61,0.07394554);
   ParabolaFunc1004->SetSavedPoint(62,0.07286202);
   ParabolaFunc1004->SetSavedPoint(63,0.07174268);
   ParabolaFunc1004->SetSavedPoint(64,0.07058754);
   ParabolaFunc1004->SetSavedPoint(65,0.06939659);
   ParabolaFunc1004->SetSavedPoint(66,0.06816984);
   ParabolaFunc1004->SetSavedPoint(67,0.06690727);
   ParabolaFunc1004->SetSavedPoint(68,0.0656089);
   ParabolaFunc1004->SetSavedPoint(69,0.06427471);
   ParabolaFunc1004->SetSavedPoint(70,0.06290472);
   ParabolaFunc1004->SetSavedPoint(71,0.06149893);
   ParabolaFunc1004->SetSavedPoint(72,0.06005732);
   ParabolaFunc1004->SetSavedPoint(73,0.0585799);
   ParabolaFunc1004->SetSavedPoint(74,0.05706668);
   ParabolaFunc1004->SetSavedPoint(75,0.05551765);
   ParabolaFunc1004->SetSavedPoint(76,0.05393281);
   ParabolaFunc1004->SetSavedPoint(77,0.05231216);
   ParabolaFunc1004->SetSavedPoint(78,0.0506557);
   ParabolaFunc1004->SetSavedPoint(79,0.04896344);
   ParabolaFunc1004->SetSavedPoint(80,0.04723537);
   ParabolaFunc1004->SetSavedPoint(81,0.04547148);
   ParabolaFunc1004->SetSavedPoint(82,0.0436718);
   ParabolaFunc1004->SetSavedPoint(83,0.0418363);
   ParabolaFunc1004->SetSavedPoint(84,0.03996499);
   ParabolaFunc1004->SetSavedPoint(85,0.03805788);
   ParabolaFunc1004->SetSavedPoint(86,0.03611496);
   ParabolaFunc1004->SetSavedPoint(87,0.03413623);
   ParabolaFunc1004->SetSavedPoint(88,0.03212169);
   ParabolaFunc1004->SetSavedPoint(89,0.03007134);
   ParabolaFunc1004->SetSavedPoint(90,0.02798518);
   ParabolaFunc1004->SetSavedPoint(91,0.02586322);
   ParabolaFunc1004->SetSavedPoint(92,0.02370545);
   ParabolaFunc1004->SetSavedPoint(93,0.02151187);
   ParabolaFunc1004->SetSavedPoint(94,0.01928248);
   ParabolaFunc1004->SetSavedPoint(95,0.01701729);
   ParabolaFunc1004->SetSavedPoint(96,0.01471628);
   ParabolaFunc1004->SetSavedPoint(97,0.01237947);
   ParabolaFunc1004->SetSavedPoint(98,0.01000685);
   ParabolaFunc1004->SetSavedPoint(99,0.007598418);
   ParabolaFunc1004->SetSavedPoint(100,0.00515418);
   ParabolaFunc1004->SetSavedPoint(101,750);
   ParabolaFunc1004->SetSavedPoint(102,2750);
   ParabolaFunc1004->SetFillColor(19);
   ParabolaFunc1004->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1004->SetLineColor(ci);
   ParabolaFunc1004->SetLineWidth(3);
   ParabolaFunc1004->SetChisquare(5.28048);
   ParabolaFunc1004->SetNDF(5);
   ParabolaFunc1004->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1004->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1004->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1004->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1004->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1004->SetParameter(0,-4.476029e-08);
   ParabolaFunc1004->SetParError(0,1.96788e-08);
   ParabolaFunc1004->SetParLimits(0,0,0);
   ParabolaFunc1004->SetParameter(1,0.0001230745);
   ParabolaFunc1004->SetParError(1,7.113681e-05);
   ParabolaFunc1004->SetParLimits(1,0,0);
   ParabolaFunc1004->SetParameter(2,0.00519896);
   ParabolaFunc1004->SetParError(2,0.06046212);
   ParabolaFunc1004->SetParLimits(2,0,0);
   ParabolaFunc1004->SetParent(gre);
   gre->GetListOfFunctions()->Add(ParabolaFunc1004);
   gre->Draw("ap");
   
   TF1 *ParabolaFunc1005 = new TF1("*ParabolaFunc",750,2750,3);
    //The original function : ParabolaFunc had originally been created by:
    //TF1 *ParabolaFunc = new TF1("ParabolaFunc",ParabolaFunc,750,2750,3, 1, TF1::EAddToList::kNo);
   ParabolaFunc1005->SetRange(750,2750);
   ParabolaFunc1005->SetName("ParabolaFunc");
   ParabolaFunc1005->SetTitle("ParabolaFunc");
   ParabolaFunc1005->SetSavedPoint(0,0.07232718);
   ParabolaFunc1005->SetSavedPoint(1,0.07342796);
   ParabolaFunc1005->SetSavedPoint(2,0.07449293);
   ParabolaFunc1005->SetSavedPoint(3,0.07552209);
   ParabolaFunc1005->SetSavedPoint(4,0.07651544);
   ParabolaFunc1005->SetSavedPoint(5,0.07747299);
   ParabolaFunc1005->SetSavedPoint(6,0.07839472);
   ParabolaFunc1005->SetSavedPoint(7,0.07928065);
   ParabolaFunc1005->SetSavedPoint(8,0.08013077);
   ParabolaFunc1005->SetSavedPoint(9,0.08094508);
   ParabolaFunc1005->SetSavedPoint(10,0.08172359);
   ParabolaFunc1005->SetSavedPoint(11,0.08246628);
   ParabolaFunc1005->SetSavedPoint(12,0.08317317);
   ParabolaFunc1005->SetSavedPoint(13,0.08384425);
   ParabolaFunc1005->SetSavedPoint(14,0.08447952);
   ParabolaFunc1005->SetSavedPoint(15,0.08507898);
   ParabolaFunc1005->SetSavedPoint(16,0.08564263);
   ParabolaFunc1005->SetSavedPoint(17,0.08617048);
   ParabolaFunc1005->SetSavedPoint(18,0.08666252);
   ParabolaFunc1005->SetSavedPoint(19,0.08711875);
   ParabolaFunc1005->SetSavedPoint(20,0.08753917);
   ParabolaFunc1005->SetSavedPoint(21,0.08792378);
   ParabolaFunc1005->SetSavedPoint(22,0.08827258);
   ParabolaFunc1005->SetSavedPoint(23,0.08858558);
   ParabolaFunc1005->SetSavedPoint(24,0.08886277);
   ParabolaFunc1005->SetSavedPoint(25,0.08910415);
   ParabolaFunc1005->SetSavedPoint(26,0.08930972);
   ParabolaFunc1005->SetSavedPoint(27,0.08947948);
   ParabolaFunc1005->SetSavedPoint(28,0.08961344);
   ParabolaFunc1005->SetSavedPoint(29,0.08971159);
   ParabolaFunc1005->SetSavedPoint(30,0.08977392);
   ParabolaFunc1005->SetSavedPoint(31,0.08980045);
   ParabolaFunc1005->SetSavedPoint(32,0.08979118);
   ParabolaFunc1005->SetSavedPoint(33,0.08974609);
   ParabolaFunc1005->SetSavedPoint(34,0.0896652);
   ParabolaFunc1005->SetSavedPoint(35,0.08954849);
   ParabolaFunc1005->SetSavedPoint(36,0.08939598);
   ParabolaFunc1005->SetSavedPoint(37,0.08920767);
   ParabolaFunc1005->SetSavedPoint(38,0.08898354);
   ParabolaFunc1005->SetSavedPoint(39,0.0887236);
   ParabolaFunc1005->SetSavedPoint(40,0.08842786);
   ParabolaFunc1005->SetSavedPoint(41,0.08809631);
   ParabolaFunc1005->SetSavedPoint(42,0.08772895);
   ParabolaFunc1005->SetSavedPoint(43,0.08732578);
   ParabolaFunc1005->SetSavedPoint(44,0.0868868);
   ParabolaFunc1005->SetSavedPoint(45,0.08641202);
   ParabolaFunc1005->SetSavedPoint(46,0.08590142);
   ParabolaFunc1005->SetSavedPoint(47,0.08535502);
   ParabolaFunc1005->SetSavedPoint(48,0.08477281);
   ParabolaFunc1005->SetSavedPoint(49,0.0841548);
   ParabolaFunc1005->SetSavedPoint(50,0.08350097);
   ParabolaFunc1005->SetSavedPoint(51,0.08281134);
   ParabolaFunc1005->SetSavedPoint(52,0.08208589);
   ParabolaFunc1005->SetSavedPoint(53,0.08132464);
   ParabolaFunc1005->SetSavedPoint(54,0.08052758);
   ParabolaFunc1005->SetSavedPoint(55,0.07969472);
   ParabolaFunc1005->SetSavedPoint(56,0.07882604);
   ParabolaFunc1005->SetSavedPoint(57,0.07792156);
   ParabolaFunc1005->SetSavedPoint(58,0.07698127);
   ParabolaFunc1005->SetSavedPoint(59,0.07600517);
   ParabolaFunc1005->SetSavedPoint(60,0.07499326);
   ParabolaFunc1005->SetSavedPoint(61,0.07394554);
   ParabolaFunc1005->SetSavedPoint(62,0.07286202);
   ParabolaFunc1005->SetSavedPoint(63,0.07174268);
   ParabolaFunc1005->SetSavedPoint(64,0.07058754);
   ParabolaFunc1005->SetSavedPoint(65,0.06939659);
   ParabolaFunc1005->SetSavedPoint(66,0.06816984);
   ParabolaFunc1005->SetSavedPoint(67,0.06690727);
   ParabolaFunc1005->SetSavedPoint(68,0.0656089);
   ParabolaFunc1005->SetSavedPoint(69,0.06427471);
   ParabolaFunc1005->SetSavedPoint(70,0.06290472);
   ParabolaFunc1005->SetSavedPoint(71,0.06149893);
   ParabolaFunc1005->SetSavedPoint(72,0.06005732);
   ParabolaFunc1005->SetSavedPoint(73,0.0585799);
   ParabolaFunc1005->SetSavedPoint(74,0.05706668);
   ParabolaFunc1005->SetSavedPoint(75,0.05551765);
   ParabolaFunc1005->SetSavedPoint(76,0.05393281);
   ParabolaFunc1005->SetSavedPoint(77,0.05231216);
   ParabolaFunc1005->SetSavedPoint(78,0.0506557);
   ParabolaFunc1005->SetSavedPoint(79,0.04896344);
   ParabolaFunc1005->SetSavedPoint(80,0.04723537);
   ParabolaFunc1005->SetSavedPoint(81,0.04547148);
   ParabolaFunc1005->SetSavedPoint(82,0.0436718);
   ParabolaFunc1005->SetSavedPoint(83,0.0418363);
   ParabolaFunc1005->SetSavedPoint(84,0.03996499);
   ParabolaFunc1005->SetSavedPoint(85,0.03805788);
   ParabolaFunc1005->SetSavedPoint(86,0.03611496);
   ParabolaFunc1005->SetSavedPoint(87,0.03413623);
   ParabolaFunc1005->SetSavedPoint(88,0.03212169);
   ParabolaFunc1005->SetSavedPoint(89,0.03007134);
   ParabolaFunc1005->SetSavedPoint(90,0.02798518);
   ParabolaFunc1005->SetSavedPoint(91,0.02586322);
   ParabolaFunc1005->SetSavedPoint(92,0.02370545);
   ParabolaFunc1005->SetSavedPoint(93,0.02151187);
   ParabolaFunc1005->SetSavedPoint(94,0.01928248);
   ParabolaFunc1005->SetSavedPoint(95,0.01701729);
   ParabolaFunc1005->SetSavedPoint(96,0.01471628);
   ParabolaFunc1005->SetSavedPoint(97,0.01237947);
   ParabolaFunc1005->SetSavedPoint(98,0.01000685);
   ParabolaFunc1005->SetSavedPoint(99,0.007598418);
   ParabolaFunc1005->SetSavedPoint(100,0.00515418);
   ParabolaFunc1005->SetSavedPoint(101,750);
   ParabolaFunc1005->SetSavedPoint(102,2750);
   ParabolaFunc1005->SetFillColor(19);
   ParabolaFunc1005->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   ParabolaFunc1005->SetLineColor(ci);
   ParabolaFunc1005->SetLineWidth(3);
   ParabolaFunc1005->SetChisquare(5.28048);
   ParabolaFunc1005->SetNDF(5);
   ParabolaFunc1005->GetXaxis()->SetLabelFont(42);
   ParabolaFunc1005->GetXaxis()->SetTitleOffset(1);
   ParabolaFunc1005->GetXaxis()->SetTitleFont(42);
   ParabolaFunc1005->GetYaxis()->SetLabelFont(42);
   ParabolaFunc1005->GetYaxis()->SetTitleFont(42);
   ParabolaFunc1005->SetParameter(0,-4.476029e-08);
   ParabolaFunc1005->SetParError(0,1.96788e-08);
   ParabolaFunc1005->SetParLimits(0,0,0);
   ParabolaFunc1005->SetParameter(1,0.0001230745);
   ParabolaFunc1005->SetParError(1,7.113681e-05);
   ParabolaFunc1005->SetParLimits(1,0,0);
   ParabolaFunc1005->SetParameter(2,0.00519896);
   ParabolaFunc1005->SetParError(2,0.06046212);
   ParabolaFunc1005->SetParLimits(2,0,0);
   ParabolaFunc1005->Draw("SAME");
   
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
   
   TPaveText *pt = new TPaveText(0.15,0.2,0.3,0.45,"brNDC");
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
   pt_LaTex = pt->AddText("1.06
");
   pt_LaTex = pt->AddText("-4e-08
#pm2e-08
");
   pt_LaTex = pt->AddText("0.0001
#pm7e-05
");
   pt_LaTex = pt->AddText("0.005
#pm0.06
");
   pt->Draw();
   S0->Modified();
   S0->cd();
   S0->SetSelected(S0);
}
