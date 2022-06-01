void QuadScans_NSUBRUN_200_NEXP_500()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 31 19:16:34 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.04836538,-5.239169,0.0663141,7.534316);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.15);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1113[3] = {
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -50.000000 ppm_fy1113[3] = {
   -3.169456,
   -2.808669,
   -2.579253};
   Double_t -50.000000 ppm_fex1113[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1113[3] = {
   0.01045368,
   0.01045368,
   0.01045368};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1113,-50.000000 ppm_fy1113,-50.000000 ppm_fex1113,-50.000000 ppm_fey1113);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";1/V [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI50dO000000sPppm1113 = new TH1F("Graph_mI50dO000000sPppm1113","",100,0.05016026,0.06362179);
   Graph_mI50dO000000sPppm1113->SetMinimum(-3.96182);
   Graph_mI50dO000000sPppm1113->SetMaximum(6.256967);
   Graph_mI50dO000000sPppm1113->SetDirectory(0);
   Graph_mI50dO000000sPppm1113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1113->SetLineColor(ci);
   Graph_mI50dO000000sPppm1113->GetXaxis()->SetTitle("1/V [kV^{-1}]");
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
   
   
   TF1 *quadLineFit1114 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.0625, TF1::EAddToList::kNo);
   quadLineFit1114->SetFillColor(19);
   quadLineFit1114->SetFillStyle(0);
   quadLineFit1114->SetLineWidth(2);
   quadLineFit1114->SetChisquare(0.1254024);
   quadLineFit1114->SetNDF(1);
   quadLineFit1114->GetXaxis()->SetLabelFont(42);
   quadLineFit1114->GetXaxis()->SetTitleOffset(1);
   quadLineFit1114->GetXaxis()->SetTitleFont(42);
   quadLineFit1114->GetYaxis()->SetLabelFont(42);
   quadLineFit1114->GetYaxis()->SetTitleFont(42);
   quadLineFit1114->SetParameter(0,0.1137032);
   quadLineFit1114->SetParError(0,0.0739443);
   quadLineFit1114->SetParLimits(0,0,0);
   quadLineFit1114->SetParameter(1,-52.5488);
   quadLineFit1114->SetParError(1,1.305632);
   quadLineFit1114->SetParLimits(1,0,0);
   quadLineFit1114->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1114);
   gre->Draw("ap");
   
   TF1 *quadLineFit1115 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.0625, TF1::EAddToList::kNo);
   quadLineFit1115->SetFillColor(19);
   quadLineFit1115->SetFillStyle(0);
   quadLineFit1115->SetLineWidth(2);
   quadLineFit1115->SetChisquare(0.1254024);
   quadLineFit1115->SetNDF(1);
   quadLineFit1115->GetXaxis()->SetLabelFont(42);
   quadLineFit1115->GetXaxis()->SetTitleOffset(1);
   quadLineFit1115->GetXaxis()->SetTitleFont(42);
   quadLineFit1115->GetYaxis()->SetLabelFont(42);
   quadLineFit1115->GetYaxis()->SetTitleFont(42);
   quadLineFit1115->SetParameter(0,0.1137032);
   quadLineFit1115->SetParError(0,0.0739443);
   quadLineFit1115->SetParLimits(0,0,0);
   quadLineFit1115->SetParameter(1,-52.5488);
   quadLineFit1115->SetParError(1,1.305632);
   quadLineFit1115->SetParLimits(1,0,0);
   quadLineFit1115->Draw("same");
   
   Double_t -30.000000 ppm_fx1115[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -30.000000 ppm_fy1115[4] = {
   -1.901983,
   -1.651376,
   -1.446549,
   -1.349667};
   Double_t -30.000000 ppm_fex1115[4] = {
   0,
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1115[4] = {
   0.01045368,
   0.01045368,
   0.01045368,
   0.01045368};
   gre = new TGraphErrors(4,-30.000000 ppm_fx1115,-30.000000 ppm_fy1115,-30.000000 ppm_fex1115,-30.000000 ppm_fey1115);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI30dO000000sPppm1115 = new TH1F("Graph_mI30dO000000sPppm1115","",100,0.0492674,0.07344322);
   Graph_mI30dO000000sPppm1115->SetMinimum(-1.969759);
   Graph_mI30dO000000sPppm1115->SetMaximum(-1.281891);
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
   
   
   TF1 *quadLineFit1116 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1116->SetFillColor(19);
   quadLineFit1116->SetFillStyle(0);
   quadLineFit1116->SetLineColor(2);
   quadLineFit1116->SetLineWidth(2);
   quadLineFit1116->SetChisquare(2.258541);
   quadLineFit1116->SetNDF(2);
   quadLineFit1116->GetXaxis()->SetLabelFont(42);
   quadLineFit1116->GetXaxis()->SetTitleOffset(1);
   quadLineFit1116->GetXaxis()->SetTitleFont(42);
   quadLineFit1116->GetYaxis()->SetLabelFont(42);
   quadLineFit1116->GetYaxis()->SetTitleFont(42);
   quadLineFit1116->SetParameter(0,0.08360855);
   quadLineFit1116->SetParError(0,0.0416045);
   quadLineFit1116->SetParLimits(0,0,0);
   quadLineFit1116->SetParameter(1,-27.76141);
   quadLineFit1116->SetParError(1,0.6857241);
   quadLineFit1116->SetParLimits(1,0,0);
   quadLineFit1116->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1116);
   gre->Draw("p ");
   
   TF1 *quadLineFit1117 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1117->SetFillColor(19);
   quadLineFit1117->SetFillStyle(0);
   quadLineFit1117->SetLineColor(2);
   quadLineFit1117->SetLineWidth(2);
   quadLineFit1117->SetChisquare(2.258541);
   quadLineFit1117->SetNDF(2);
   quadLineFit1117->GetXaxis()->SetLabelFont(42);
   quadLineFit1117->GetXaxis()->SetTitleOffset(1);
   quadLineFit1117->GetXaxis()->SetTitleFont(42);
   quadLineFit1117->GetYaxis()->SetLabelFont(42);
   quadLineFit1117->GetYaxis()->SetTitleFont(42);
   quadLineFit1117->SetParameter(0,0.08360855);
   quadLineFit1117->SetParError(0,0.0416045);
   quadLineFit1117->SetParLimits(0,0,0);
   quadLineFit1117->SetParameter(1,-27.76141);
   quadLineFit1117->SetParError(1,0.6857241);
   quadLineFit1117->SetParLimits(1,0,0);
   quadLineFit1117->Draw("same");
   
   Double_t -10.000000 ppm_fx1117[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -10.000000 ppm_fy1117[4] = {
   -0.1731424,
   -0.1611834,
   -0.1232382,
   -0.121577};
   Double_t -10.000000 ppm_fex1117[4] = {
   0,
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1117[4] = {
   0.01045368,
   0.01045368,
   0.01045368,
   0.01045368};
   gre = new TGraphErrors(4,-10.000000 ppm_fx1117,-10.000000 ppm_fy1117,-10.000000 ppm_fex1117,-10.000000 ppm_fey1117);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI10dO000000sPppm1117 = new TH1F("Graph_mI10dO000000sPppm1117","",100,0.0492674,0.07344322);
   Graph_mI10dO000000sPppm1117->SetMinimum(-0.1908434);
   Graph_mI10dO000000sPppm1117->SetMaximum(-0.1038761);
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
   
   
   TF1 *quadLineFit1118 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1118->SetFillColor(19);
   quadLineFit1118->SetFillStyle(0);
   quadLineFit1118->SetLineColor(3);
   quadLineFit1118->SetLineWidth(2);
   quadLineFit1118->SetChisquare(1.684687);
   quadLineFit1118->SetNDF(2);
   quadLineFit1118->GetXaxis()->SetLabelFont(42);
   quadLineFit1118->GetXaxis()->SetTitleOffset(1);
   quadLineFit1118->GetXaxis()->SetTitleFont(42);
   quadLineFit1118->GetYaxis()->SetLabelFont(42);
   quadLineFit1118->GetYaxis()->SetTitleFont(42);
   quadLineFit1118->SetParameter(0,0.02692306);
   quadLineFit1118->SetParError(0,0.04159818);
   quadLineFit1118->SetParLimits(0,0,0);
   quadLineFit1118->SetParameter(1,-2.852698);
   quadLineFit1118->SetParError(1,0.6856195);
   quadLineFit1118->SetParLimits(1,0,0);
   quadLineFit1118->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1118);
   gre->Draw("p ");
   
   TF1 *quadLineFit1119 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1119->SetFillColor(19);
   quadLineFit1119->SetFillStyle(0);
   quadLineFit1119->SetLineColor(3);
   quadLineFit1119->SetLineWidth(2);
   quadLineFit1119->SetChisquare(1.684687);
   quadLineFit1119->SetNDF(2);
   quadLineFit1119->GetXaxis()->SetLabelFont(42);
   quadLineFit1119->GetXaxis()->SetTitleOffset(1);
   quadLineFit1119->GetXaxis()->SetTitleFont(42);
   quadLineFit1119->GetYaxis()->SetLabelFont(42);
   quadLineFit1119->GetYaxis()->SetTitleFont(42);
   quadLineFit1119->SetParameter(0,0.02692306);
   quadLineFit1119->SetParError(0,0.04159818);
   quadLineFit1119->SetParLimits(0,0,0);
   quadLineFit1119->SetParameter(1,-2.852698);
   quadLineFit1119->SetParError(1,0.6856195);
   quadLineFit1119->SetParLimits(1,0,0);
   quadLineFit1119->Draw("same");
   
   Double_t 10.000000 ppm_fx1119[3] = {
   0.07142857,
   0.0625,
   0.05128205};
   Double_t 10.000000 ppm_fy1119[3] = {
   1.529886,
   1.352227,
   1.121432};
   Double_t 10.000000 ppm_fex1119[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1119[3] = {
   0.01045368,
   0.01045368,
   0.01045368};
   gre = new TGraphErrors(3,10.000000 ppm_fx1119,10.000000 ppm_fy1119,10.000000 ppm_fex1119,10.000000 ppm_fey1119);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_10dO000000sPppm1119 = new TH1F("Graph_10dO000000sPppm1119","",100,0.0492674,0.07344322);
   Graph_10dO000000sPppm1119->SetMinimum(1.068042);
   Graph_10dO000000sPppm1119->SetMaximum(1.583275);
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
   
   
   TF1 *quadLineFit1120 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1120->SetFillColor(19);
   quadLineFit1120->SetFillStyle(0);
   quadLineFit1120->SetLineColor(4);
   quadLineFit1120->SetLineWidth(2);
   quadLineFit1120->SetChisquare(0.06862232);
   quadLineFit1120->SetNDF(1);
   quadLineFit1120->GetXaxis()->SetLabelFont(42);
   quadLineFit1120->GetXaxis()->SetTitleOffset(1);
   quadLineFit1120->GetXaxis()->SetTitleFont(42);
   quadLineFit1120->GetYaxis()->SetLabelFont(42);
   quadLineFit1120->GetYaxis()->SetTitleFont(42);
   quadLineFit1120->SetParameter(0,0.08207488);
   quadLineFit1120->SetParError(0,0.04560767);
   quadLineFit1120->SetParLimits(0,0,0);
   quadLineFit1120->SetParameter(1,20.28674);
   quadLineFit1120->SetParError(1,0.7322455);
   quadLineFit1120->SetParLimits(1,0,0);
   quadLineFit1120->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1120);
   gre->Draw("p ");
   
   TF1 *quadLineFit1121 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1121->SetFillColor(19);
   quadLineFit1121->SetFillStyle(0);
   quadLineFit1121->SetLineColor(4);
   quadLineFit1121->SetLineWidth(2);
   quadLineFit1121->SetChisquare(0.06862232);
   quadLineFit1121->SetNDF(1);
   quadLineFit1121->GetXaxis()->SetLabelFont(42);
   quadLineFit1121->GetXaxis()->SetTitleOffset(1);
   quadLineFit1121->GetXaxis()->SetTitleFont(42);
   quadLineFit1121->GetYaxis()->SetLabelFont(42);
   quadLineFit1121->GetYaxis()->SetTitleFont(42);
   quadLineFit1121->SetParameter(0,0.08207488);
   quadLineFit1121->SetParError(0,0.04560767);
   quadLineFit1121->SetParLimits(0,0,0);
   quadLineFit1121->SetParameter(1,20.28674);
   quadLineFit1121->SetParError(1,0.7322455);
   quadLineFit1121->SetParLimits(1,0,0);
   quadLineFit1121->Draw("same");
   
   Double_t 30.000000 ppm_fx1121[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t 30.000000 ppm_fy1121[4] = {
   3.252195,
   2.855326,
   2.538624,
   2.3691};
   Double_t 30.000000 ppm_fex1121[4] = {
   0,
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1121[4] = {
   0.01045368,
   0.01045368,
   0.01045368,
   0.01045368};
   gre = new TGraphErrors(4,30.000000 ppm_fx1121,30.000000 ppm_fy1121,30.000000 ppm_fex1121,30.000000 ppm_fey1121);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9900");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff9900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_30dO000000sPppm1121 = new TH1F("Graph_30dO000000sPppm1121","",100,0.0492674,0.07344322);
   Graph_30dO000000sPppm1121->SetMinimum(2.268246);
   Graph_30dO000000sPppm1121->SetMaximum(3.353049);
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
   
   
   TF1 *quadLineFit1122 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1122->SetFillColor(19);
   quadLineFit1122->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1122->SetLineColor(ci);
   quadLineFit1122->SetLineWidth(2);
   quadLineFit1122->SetChisquare(1.742038);
   quadLineFit1122->SetNDF(2);
   quadLineFit1122->GetXaxis()->SetLabelFont(42);
   quadLineFit1122->GetXaxis()->SetTitleOffset(1);
   quadLineFit1122->GetXaxis()->SetTitleFont(42);
   quadLineFit1122->GetYaxis()->SetLabelFont(42);
   quadLineFit1122->GetYaxis()->SetTitleFont(42);
   quadLineFit1122->SetParameter(0,0.09731852);
   quadLineFit1122->SetParError(0,0.04159786);
   quadLineFit1122->SetParLimits(0,0,0);
   quadLineFit1122->SetParameter(1,44.13398);
   quadLineFit1122->SetParError(1,0.6856142);
   quadLineFit1122->SetParLimits(1,0,0);
   quadLineFit1122->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1122);
   gre->Draw("p ");
   
   TF1 *quadLineFit1123 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1123->SetFillColor(19);
   quadLineFit1123->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1123->SetLineColor(ci);
   quadLineFit1123->SetLineWidth(2);
   quadLineFit1123->SetChisquare(1.742038);
   quadLineFit1123->SetNDF(2);
   quadLineFit1123->GetXaxis()->SetLabelFont(42);
   quadLineFit1123->GetXaxis()->SetTitleOffset(1);
   quadLineFit1123->GetXaxis()->SetTitleFont(42);
   quadLineFit1123->GetYaxis()->SetLabelFont(42);
   quadLineFit1123->GetYaxis()->SetTitleFont(42);
   quadLineFit1123->SetParameter(0,0.09731852);
   quadLineFit1123->SetParError(0,0.04159786);
   quadLineFit1123->SetParLimits(0,0,0);
   quadLineFit1123->SetParameter(1,44.13398);
   quadLineFit1123->SetParError(1,0.6856142);
   quadLineFit1123->SetParLimits(1,0,0);
   quadLineFit1123->Draw("same");
   
   Double_t 50.000000 ppm_fx1123[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t 50.000000 ppm_fy1123[4] = {
   5.005574,
   4.382673,
   3.871128,
   3.5809};
   Double_t 50.000000 ppm_fex1123[4] = {
   0,
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1123[4] = {
   0.01045368,
   0.01045368,
   0.01045368,
   0.01045368};
   gre = new TGraphErrors(4,50.000000 ppm_fx1123,50.000000 ppm_fy1123,50.000000 ppm_fex1123,50.000000 ppm_fey1123);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_50dO000000sPppm1123 = new TH1F("Graph_50dO000000sPppm1123","",100,0.0492674,0.07344322);
   Graph_50dO000000sPppm1123->SetMinimum(3.425888);
   Graph_50dO000000sPppm1123->SetMaximum(5.160586);
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
   
   
   TF1 *quadLineFit1124 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1124->SetFillColor(19);
   quadLineFit1124->SetFillStyle(0);
   quadLineFit1124->SetLineColor(6);
   quadLineFit1124->SetLineWidth(2);
   quadLineFit1124->SetChisquare(1.721862);
   quadLineFit1124->SetNDF(2);
   quadLineFit1124->GetXaxis()->SetLabelFont(42);
   quadLineFit1124->GetXaxis()->SetTitleOffset(1);
   quadLineFit1124->GetXaxis()->SetTitleFont(42);
   quadLineFit1124->GetYaxis()->SetLabelFont(42);
   quadLineFit1124->GetYaxis()->SetTitleFont(42);
   quadLineFit1124->SetParameter(0,-0.06586381);
   quadLineFit1124->SetParError(0,0.0415983);
   quadLineFit1124->SetParLimits(0,0,0);
   quadLineFit1124->SetParameter(1,71.03875);
   quadLineFit1124->SetParError(1,0.6856215);
   quadLineFit1124->SetParLimits(1,0,0);
   quadLineFit1124->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1124);
   gre->Draw("p ");
   
   TF1 *quadLineFit1125 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1125->SetFillColor(19);
   quadLineFit1125->SetFillStyle(0);
   quadLineFit1125->SetLineColor(6);
   quadLineFit1125->SetLineWidth(2);
   quadLineFit1125->SetChisquare(1.721862);
   quadLineFit1125->SetNDF(2);
   quadLineFit1125->GetXaxis()->SetLabelFont(42);
   quadLineFit1125->GetXaxis()->SetTitleOffset(1);
   quadLineFit1125->GetXaxis()->SetTitleFont(42);
   quadLineFit1125->GetYaxis()->SetLabelFont(42);
   quadLineFit1125->GetYaxis()->SetTitleFont(42);
   quadLineFit1125->SetParameter(0,-0.06586381);
   quadLineFit1125->SetParError(0,0.0415983);
   quadLineFit1125->SetParLimits(0,0,0);
   quadLineFit1125->SetParameter(1,71.03875);
   quadLineFit1125->SetParError(1,0.6856215);
   quadLineFit1125->SetParLimits(1,0,0);
   quadLineFit1125->Draw("same");
   
   TLegend *leg = new TLegend(0.87,0.4,0.99,0.6,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#LTB_{r}^{a}#GT [ppm]","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("50.000000 ppm","   50","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff9900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-50.000000 ppm","  #minus50","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
