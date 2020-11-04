void QuadScans_NSUBRUN_200_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:20:46 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(12.91429,-3.25,19.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1113[3] = {
   14,
   16,
   18};
   Double_t -50.000000 ppm_fy1113[3] = {
   -3.621343,
   -3.154168,
   -2.809027};
   Double_t -50.000000 ppm_fex1113[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1113[3] = {
   0.01042751,
   0.01042751,
   0.01042751};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1113,-50.000000 ppm_fy1113,-50.000000 ppm_fex1113,-50.000000 ppm_fey1113);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1113 = new TH1F("Graph_mI50dO000000sPppm1113","",100,13.6,18.4);
   Graph_mI50dO000000sPppm1113->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1113->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1113->SetDirectory(0);
   Graph_mI50dO000000sPppm1113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1113->SetLineColor(ci);
   Graph_mI50dO000000sPppm1113->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1113->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1113->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1113->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1113->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1113->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1113->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1113->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1113->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1113->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1113->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1113->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1113->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1113->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1113->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1113->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1113);
   
   
   TF1 *quadLineFit1114 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1114->SetFillColor(19);
   quadLineFit1114->SetFillStyle(0);
   quadLineFit1114->SetLineWidth(2);
   quadLineFit1114->SetChisquare(22.82695);
   quadLineFit1114->SetNDF(1);
   quadLineFit1114->GetXaxis()->SetLabelFont(42);
   quadLineFit1114->GetXaxis()->SetTitleOffset(1);
   quadLineFit1114->GetXaxis()->SetTitleFont(42);
   quadLineFit1114->GetYaxis()->SetLabelFont(42);
   quadLineFit1114->GetYaxis()->SetTitleFont(42);
   quadLineFit1114->SetParameter(0,-6.444109);
   quadLineFit1114->SetParError(0,0.05929319);
   quadLineFit1114->SetParLimits(0,0,0);
   quadLineFit1114->SetParameter(1,0.2030789);
   quadLineFit1114->SetParError(1,0.003686673);
   quadLineFit1114->SetParLimits(1,0,0);
   quadLineFit1114->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1114);
   gre->Draw("ap");
   
   TF1 *quadLineFit1115 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1115->SetFillColor(19);
   quadLineFit1115->SetFillStyle(0);
   quadLineFit1115->SetLineWidth(2);
   quadLineFit1115->SetChisquare(22.82695);
   quadLineFit1115->SetNDF(1);
   quadLineFit1115->GetXaxis()->SetLabelFont(42);
   quadLineFit1115->GetXaxis()->SetTitleOffset(1);
   quadLineFit1115->GetXaxis()->SetTitleFont(42);
   quadLineFit1115->GetYaxis()->SetLabelFont(42);
   quadLineFit1115->GetYaxis()->SetTitleFont(42);
   quadLineFit1115->SetParameter(0,-6.444109);
   quadLineFit1115->SetParError(0,0.05929319);
   quadLineFit1115->SetParLimits(0,0,0);
   quadLineFit1115->SetParameter(1,0.2030789);
   quadLineFit1115->SetParError(1,0.003686673);
   quadLineFit1115->SetParLimits(1,0,0);
   quadLineFit1115->Draw("same");
   
   Double_t -30.000000 ppm_fx1115[3] = {
   14,
   16,
   18};
   Double_t -30.000000 ppm_fy1115[3] = {
   -1.897662,
   -1.654533,
   -1.489749};
   Double_t -30.000000 ppm_fex1115[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1115[3] = {
   0.01042751,
   0.01042751,
   0.01042751};
   gre = new TGraphErrors(3,-30.000000 ppm_fx1115,-30.000000 ppm_fy1115,-30.000000 ppm_fex1115,-30.000000 ppm_fey1115);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI30dO000000sPppm1115 = new TH1F("Graph_mI30dO000000sPppm1115","Graph",100,13.6,18.4);
   Graph_mI30dO000000sPppm1115->SetMinimum(-1.950967);
   Graph_mI30dO000000sPppm1115->SetMaximum(-1.436444);
   Graph_mI30dO000000sPppm1115->SetDirectory(0);
   Graph_mI30dO000000sPppm1115->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1115->SetLineColor(ci);
   Graph_mI30dO000000sPppm1115->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1115->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1115->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1115->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1115->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1115->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1115->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1115->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1115);
   
   
   TF1 *quadLineFit1116 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1116->SetFillColor(19);
   quadLineFit1116->SetFillStyle(0);
   quadLineFit1116->SetLineColor(2);
   quadLineFit1116->SetLineWidth(2);
   quadLineFit1116->SetChisquare(9.408193);
   quadLineFit1116->SetNDF(1);
   quadLineFit1116->GetXaxis()->SetLabelFont(42);
   quadLineFit1116->GetXaxis()->SetTitleOffset(1);
   quadLineFit1116->GetXaxis()->SetTitleFont(42);
   quadLineFit1116->GetYaxis()->SetLabelFont(42);
   quadLineFit1116->GetYaxis()->SetTitleFont(42);
   quadLineFit1116->SetParameter(0,-3.312303);
   quadLineFit1116->SetParError(0,0.05929326);
   quadLineFit1116->SetParLimits(0,0,0);
   quadLineFit1116->SetParameter(1,0.1019784);
   quadLineFit1116->SetParError(1,0.003686677);
   quadLineFit1116->SetParLimits(1,0,0);
   quadLineFit1116->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1116);
   gre->Draw("p ");
   
   TF1 *quadLineFit1117 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1117->SetFillColor(19);
   quadLineFit1117->SetFillStyle(0);
   quadLineFit1117->SetLineColor(2);
   quadLineFit1117->SetLineWidth(2);
   quadLineFit1117->SetChisquare(9.408193);
   quadLineFit1117->SetNDF(1);
   quadLineFit1117->GetXaxis()->SetLabelFont(42);
   quadLineFit1117->GetXaxis()->SetTitleOffset(1);
   quadLineFit1117->GetXaxis()->SetTitleFont(42);
   quadLineFit1117->GetYaxis()->SetLabelFont(42);
   quadLineFit1117->GetYaxis()->SetTitleFont(42);
   quadLineFit1117->SetParameter(0,-3.312303);
   quadLineFit1117->SetParError(0,0.05929326);
   quadLineFit1117->SetParLimits(0,0,0);
   quadLineFit1117->SetParameter(1,0.1019784);
   quadLineFit1117->SetParError(1,0.003686677);
   quadLineFit1117->SetParLimits(1,0,0);
   quadLineFit1117->Draw("same");
   
   Double_t -10.000000 ppm_fx1117[3] = {
   14,
   16,
   18};
   Double_t -10.000000 ppm_fy1117[3] = {
   -0.1615958,
   -0.1310331,
   -0.1150809};
   Double_t -10.000000 ppm_fex1117[3] = {
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1117[3] = {
   0.01042751,
   0.01042751,
   0.01042751};
   gre = new TGraphErrors(3,-10.000000 ppm_fx1117,-10.000000 ppm_fy1117,-10.000000 ppm_fex1117,-10.000000 ppm_fey1117);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_mI10dO000000sPppm1117 = new TH1F("Graph_mI10dO000000sPppm1117","Graph",100,13.6,18.4);
   Graph_mI10dO000000sPppm1117->SetMinimum(-0.1787603);
   Graph_mI10dO000000sPppm1117->SetMaximum(-0.09791645);
   Graph_mI10dO000000sPppm1117->SetDirectory(0);
   Graph_mI10dO000000sPppm1117->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1117->SetLineColor(ci);
   Graph_mI10dO000000sPppm1117->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1117->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1117->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1117->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1117->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1117->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1117->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1117->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1117);
   
   
   TF1 *quadLineFit1118 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1118->SetFillColor(19);
   quadLineFit1118->SetFillStyle(0);
   quadLineFit1118->SetLineColor(3);
   quadLineFit1118->SetLineWidth(2);
   quadLineFit1118->SetChisquare(0.3272057);
   quadLineFit1118->SetNDF(1);
   quadLineFit1118->GetXaxis()->SetLabelFont(42);
   quadLineFit1118->GetXaxis()->SetTitleOffset(1);
   quadLineFit1118->GetXaxis()->SetTitleFont(42);
   quadLineFit1118->GetYaxis()->SetLabelFont(42);
   quadLineFit1118->GetYaxis()->SetTitleFont(42);
   quadLineFit1118->SetParameter(0,-0.3219627);
   quadLineFit1118->SetParError(0,0.05929332);
   quadLineFit1118->SetParLimits(0,0,0);
   quadLineFit1118->SetParameter(1,0.01162871);
   quadLineFit1118->SetParError(1,0.003686681);
   quadLineFit1118->SetParLimits(1,0,0);
   quadLineFit1118->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1118);
   gre->Draw("p ");
   
   TF1 *quadLineFit1119 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1119->SetFillColor(19);
   quadLineFit1119->SetFillStyle(0);
   quadLineFit1119->SetLineColor(3);
   quadLineFit1119->SetLineWidth(2);
   quadLineFit1119->SetChisquare(0.3272057);
   quadLineFit1119->SetNDF(1);
   quadLineFit1119->GetXaxis()->SetLabelFont(42);
   quadLineFit1119->GetXaxis()->SetTitleOffset(1);
   quadLineFit1119->GetXaxis()->SetTitleFont(42);
   quadLineFit1119->GetYaxis()->SetLabelFont(42);
   quadLineFit1119->GetYaxis()->SetTitleFont(42);
   quadLineFit1119->SetParameter(0,-0.3219627);
   quadLineFit1119->SetParError(0,0.05929332);
   quadLineFit1119->SetParLimits(0,0,0);
   quadLineFit1119->SetParameter(1,0.01162871);
   quadLineFit1119->SetParError(1,0.003686681);
   quadLineFit1119->SetParLimits(1,0,0);
   quadLineFit1119->Draw("same");
   
   Double_t 10.000000 ppm_fx1119[3] = {
   14,
   16,
   18};
   Double_t 10.000000 ppm_fy1119[3] = {
   1.559829,
   1.358914,
   1.206016};
   Double_t 10.000000 ppm_fex1119[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1119[3] = {
   0.01042751,
   0.01042751,
   0.01042751};
   gre = new TGraphErrors(3,10.000000 ppm_fx1119,10.000000 ppm_fy1119,10.000000 ppm_fex1119,10.000000 ppm_fey1119);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_10dO000000sPppm1119 = new TH1F("Graph_10dO000000sPppm1119","Graph",100,13.6,18.4);
   Graph_10dO000000sPppm1119->SetMinimum(1.158121);
   Graph_10dO000000sPppm1119->SetMaximum(1.607724);
   Graph_10dO000000sPppm1119->SetDirectory(0);
   Graph_10dO000000sPppm1119->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1119->SetLineColor(ci);
   Graph_10dO000000sPppm1119->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1119->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1119->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1119->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1119->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1119->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1119->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1119->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1119);
   
   
   TF1 *quadLineFit1120 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1120->SetFillColor(19);
   quadLineFit1120->SetFillStyle(0);
   quadLineFit1120->SetLineColor(4);
   quadLineFit1120->SetLineWidth(2);
   quadLineFit1120->SetChisquare(3.534021);
   quadLineFit1120->SetNDF(1);
   quadLineFit1120->GetXaxis()->SetLabelFont(42);
   quadLineFit1120->GetXaxis()->SetTitleOffset(1);
   quadLineFit1120->GetXaxis()->SetTitleFont(42);
   quadLineFit1120->GetYaxis()->SetLabelFont(42);
   quadLineFit1120->GetYaxis()->SetTitleFont(42);
   quadLineFit1120->SetParameter(0,2.790175);
   quadLineFit1120->SetParError(0,0.05929331);
   quadLineFit1120->SetParLimits(0,0,0);
   quadLineFit1120->SetParameter(1,-0.08845343);
   quadLineFit1120->SetParError(1,0.00368668);
   quadLineFit1120->SetParLimits(1,0,0);
   quadLineFit1120->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1120);
   gre->Draw("p ");
   
   TF1 *quadLineFit1121 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1121->SetFillColor(19);
   quadLineFit1121->SetFillStyle(0);
   quadLineFit1121->SetLineColor(4);
   quadLineFit1121->SetLineWidth(2);
   quadLineFit1121->SetChisquare(3.534021);
   quadLineFit1121->SetNDF(1);
   quadLineFit1121->GetXaxis()->SetLabelFont(42);
   quadLineFit1121->GetXaxis()->SetTitleOffset(1);
   quadLineFit1121->GetXaxis()->SetTitleFont(42);
   quadLineFit1121->GetYaxis()->SetLabelFont(42);
   quadLineFit1121->GetYaxis()->SetTitleFont(42);
   quadLineFit1121->SetParameter(0,2.790175);
   quadLineFit1121->SetParError(0,0.05929331);
   quadLineFit1121->SetParLimits(0,0,0);
   quadLineFit1121->SetParameter(1,-0.08845343);
   quadLineFit1121->SetParError(1,0.00368668);
   quadLineFit1121->SetParLimits(1,0,0);
   quadLineFit1121->Draw("same");
   
   Double_t 30.000000 ppm_fx1121[3] = {
   14,
   16,
   18};
   Double_t 30.000000 ppm_fy1121[3] = {
   3.261732,
   2.866167,
   2.560064};
   Double_t 30.000000 ppm_fex1121[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1121[3] = {
   0.01042751,
   0.01042751,
   0.01042751};
   gre = new TGraphErrors(3,30.000000 ppm_fx1121,30.000000 ppm_fy1121,30.000000 ppm_fex1121,30.000000 ppm_fey1121);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_30dO000000sPppm1121 = new TH1F("Graph_30dO000000sPppm1121","Graph",100,13.6,18.4);
   Graph_30dO000000sPppm1121->SetMinimum(2.477384);
   Graph_30dO000000sPppm1121->SetMaximum(3.344412);
   Graph_30dO000000sPppm1121->SetDirectory(0);
   Graph_30dO000000sPppm1121->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1121->SetLineColor(ci);
   Graph_30dO000000sPppm1121->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1121->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1121->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1121->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1121->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1121->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1121->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1121);
   
   
   TF1 *quadLineFit1122 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1122->SetFillColor(19);
   quadLineFit1122->SetFillStyle(0);
   quadLineFit1122->SetLineColor(5);
   quadLineFit1122->SetLineWidth(2);
   quadLineFit1122->SetChisquare(12.26752);
   quadLineFit1122->SetNDF(1);
   quadLineFit1122->GetXaxis()->SetLabelFont(42);
   quadLineFit1122->GetXaxis()->SetTitleOffset(1);
   quadLineFit1122->GetXaxis()->SetTitleFont(42);
   quadLineFit1122->GetYaxis()->SetLabelFont(42);
   quadLineFit1122->GetYaxis()->SetTitleFont(42);
   quadLineFit1122->SetParameter(0,5.702661);
   quadLineFit1122->SetParError(0,0.05929326);
   quadLineFit1122->SetParLimits(0,0,0);
   quadLineFit1122->SetParameter(1,-0.1754171);
   quadLineFit1122->SetParError(1,0.003686677);
   quadLineFit1122->SetParLimits(1,0,0);
   quadLineFit1122->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1122);
   gre->Draw("p ");
   
   TF1 *quadLineFit1123 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1123->SetFillColor(19);
   quadLineFit1123->SetFillStyle(0);
   quadLineFit1123->SetLineColor(5);
   quadLineFit1123->SetLineWidth(2);
   quadLineFit1123->SetChisquare(12.26752);
   quadLineFit1123->SetNDF(1);
   quadLineFit1123->GetXaxis()->SetLabelFont(42);
   quadLineFit1123->GetXaxis()->SetTitleOffset(1);
   quadLineFit1123->GetXaxis()->SetTitleFont(42);
   quadLineFit1123->GetYaxis()->SetLabelFont(42);
   quadLineFit1123->GetYaxis()->SetTitleFont(42);
   quadLineFit1123->SetParameter(0,5.702661);
   quadLineFit1123->SetParError(0,0.05929326);
   quadLineFit1123->SetParLimits(0,0,0);
   quadLineFit1123->SetParameter(1,-0.1754171);
   quadLineFit1123->SetParError(1,0.003686677);
   quadLineFit1123->SetParLimits(1,0,0);
   quadLineFit1123->Draw("same");
   
   Double_t 50.000000 ppm_fx1123[3] = {
   14,
   16,
   18};
   Double_t 50.000000 ppm_fy1123[3] = {
   4.995838,
   4.395025,
   3.878941};
   Double_t 50.000000 ppm_fex1123[3] = {
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1123[3] = {
   0.01042751,
   0.01042751,
   0.01042751};
   gre = new TGraphErrors(3,50.000000 ppm_fx1123,50.000000 ppm_fy1123,50.000000 ppm_fex1123,50.000000 ppm_fey1123);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_50dO000000sPppm1123 = new TH1F("Graph_50dO000000sPppm1123","Graph",100,13.6,18.4);
   Graph_50dO000000sPppm1123->SetMinimum(3.754738);
   Graph_50dO000000sPppm1123->SetMaximum(5.120041);
   Graph_50dO000000sPppm1123->SetDirectory(0);
   Graph_50dO000000sPppm1123->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1123->SetLineColor(ci);
   Graph_50dO000000sPppm1123->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1123->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1123->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1123->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1123->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1123->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1123->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1123);
   
   
   TF1 *quadLineFit1124 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1124->SetFillColor(19);
   quadLineFit1124->SetFillStyle(0);
   quadLineFit1124->SetLineColor(6);
   quadLineFit1124->SetLineWidth(2);
   quadLineFit1124->SetChisquare(11.00421);
   quadLineFit1124->SetNDF(1);
   quadLineFit1124->GetXaxis()->SetLabelFont(42);
   quadLineFit1124->GetXaxis()->SetTitleOffset(1);
   quadLineFit1124->GetXaxis()->SetTitleFont(42);
   quadLineFit1124->GetYaxis()->SetLabelFont(42);
   quadLineFit1124->GetYaxis()->SetTitleFont(42);
   quadLineFit1124->SetParameter(0,8.890856);
   quadLineFit1124->SetParError(0,0.05929345);
   quadLineFit1124->SetParLimits(0,0,0);
   quadLineFit1124->SetParameter(1,-0.2792242);
   quadLineFit1124->SetParError(1,0.003686689);
   quadLineFit1124->SetParLimits(1,0,0);
   quadLineFit1124->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1124);
   gre->Draw("p ");
   
   TF1 *quadLineFit1125 = new TF1("quadLineFit","[0]+[1]*x",13.6,18.4, TF1::EAddToList::kNo);
   quadLineFit1125->SetFillColor(19);
   quadLineFit1125->SetFillStyle(0);
   quadLineFit1125->SetLineColor(6);
   quadLineFit1125->SetLineWidth(2);
   quadLineFit1125->SetChisquare(11.00421);
   quadLineFit1125->SetNDF(1);
   quadLineFit1125->GetXaxis()->SetLabelFont(42);
   quadLineFit1125->GetXaxis()->SetTitleOffset(1);
   quadLineFit1125->GetXaxis()->SetTitleFont(42);
   quadLineFit1125->GetYaxis()->SetLabelFont(42);
   quadLineFit1125->GetYaxis()->SetTitleFont(42);
   quadLineFit1125->SetParameter(0,8.890856);
   quadLineFit1125->SetParError(0,0.05929345);
   quadLineFit1125->SetParLimits(0,0,0);
   quadLineFit1125->SetParameter(1,-0.2792242);
   quadLineFit1125->SetParError(1,0.003686689);
   quadLineFit1125->SetParLimits(1,0,0);
   quadLineFit1125->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("50.000000 ppm","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(5);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-50.000000 ppm","  #minus50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
