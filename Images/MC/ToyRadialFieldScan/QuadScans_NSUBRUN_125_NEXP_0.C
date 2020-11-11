void QuadScans_NSUBRUN_125_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 10 15:16:17 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.04418367,-3.25,0.08091837,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1065[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05};
   Double_t -50.000000 ppm_fy1065[4] = {
   -3.599144,
   -3.165419,
   -2.809499,
   -2.541494};
   Double_t -50.000000 ppm_fex1065[4] = {
   0,
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1065[4] = {
   0.01320349,
   0.01320349,
   0.01320349,
   0.01320349};
   TGraphErrors *gre = new TGraphErrors(4,-50.000000 ppm_fx1065,-50.000000 ppm_fy1065,-50.000000 ppm_fex1065,-50.000000 ppm_fey1065);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1065 = new TH1F("Graph_mI50dO000000sPppm1065","",100,0.04785714,0.07357143);
   Graph_mI50dO000000sPppm1065->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1065->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1065->SetDirectory(0);
   Graph_mI50dO000000sPppm1065->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1065->SetLineColor(ci);
   Graph_mI50dO000000sPppm1065->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
   Graph_mI50dO000000sPppm1065->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1065->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1065->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1065->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1065->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1065->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1065->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1065->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1065->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1065->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1065->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1065->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1065->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1065->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1065);
   
   
   TF1 *quadLineFit1066 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1066->SetFillColor(19);
   quadLineFit1066->SetFillStyle(0);
   quadLineFit1066->SetLineWidth(2);
   quadLineFit1066->SetChisquare(0.4523634);
   quadLineFit1066->SetNDF(2);
   quadLineFit1066->GetXaxis()->SetLabelFont(42);
   quadLineFit1066->GetXaxis()->SetTitleOffset(1);
   quadLineFit1066->GetXaxis()->SetTitleFont(42);
   quadLineFit1066->GetYaxis()->SetLabelFont(42);
   quadLineFit1066->GetYaxis()->SetTitleFont(42);
   quadLineFit1066->SetParameter(0,-0.06331786);
   quadLineFit1066->SetParError(0,0.04979584);
   quadLineFit1066->SetParLimits(0,0,0);
   quadLineFit1066->SetParameter(1,-49.53265);
   quadLineFit1066->SetParError(1,0.8243757);
   quadLineFit1066->SetParLimits(1,0,0);
   quadLineFit1066->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1066);
   gre->Draw("ap");
   
   TF1 *quadLineFit1067 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1067->SetFillColor(19);
   quadLineFit1067->SetFillStyle(0);
   quadLineFit1067->SetLineWidth(2);
   quadLineFit1067->SetChisquare(0.4523634);
   quadLineFit1067->SetNDF(2);
   quadLineFit1067->GetXaxis()->SetLabelFont(42);
   quadLineFit1067->GetXaxis()->SetTitleOffset(1);
   quadLineFit1067->GetXaxis()->SetTitleFont(42);
   quadLineFit1067->GetYaxis()->SetLabelFont(42);
   quadLineFit1067->GetYaxis()->SetTitleFont(42);
   quadLineFit1067->SetParameter(0,-0.06331786);
   quadLineFit1067->SetParError(0,0.04979584);
   quadLineFit1067->SetParLimits(0,0,0);
   quadLineFit1067->SetParameter(1,-49.53265);
   quadLineFit1067->SetParError(1,0.8243757);
   quadLineFit1067->SetParLimits(1,0,0);
   quadLineFit1067->Draw("same");
   
   Double_t -30.000000 ppm_fx1067[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05};
   Double_t -30.000000 ppm_fy1067[4] = {
   -1.883414,
   -1.630726,
   -1.471066,
   -1.318142};
   Double_t -30.000000 ppm_fex1067[4] = {
   0,
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1067[4] = {
   0.01320349,
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(4,-30.000000 ppm_fx1067,-30.000000 ppm_fy1067,-30.000000 ppm_fex1067,-30.000000 ppm_fey1067);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   
   TH1F *Graph_mI30dO000000sPppm1067 = new TH1F("Graph_mI30dO000000sPppm1067","Graph",100,0.04785714,0.07357143);
   Graph_mI30dO000000sPppm1067->SetMinimum(-1.955785);
   Graph_mI30dO000000sPppm1067->SetMaximum(-1.24577);
   Graph_mI30dO000000sPppm1067->SetDirectory(0);
   Graph_mI30dO000000sPppm1067->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1067->SetLineColor(ci);
   Graph_mI30dO000000sPppm1067->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1067->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1067->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1067->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1067->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1067->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1067->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1067);
   
   
   TF1 *quadLineFit1068 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1068->SetFillColor(19);
   quadLineFit1068->SetFillStyle(0);
   quadLineFit1068->SetLineColor(2);
   quadLineFit1068->SetLineWidth(2);
   quadLineFit1068->SetChisquare(1.636937);
   quadLineFit1068->SetNDF(2);
   quadLineFit1068->GetXaxis()->SetLabelFont(42);
   quadLineFit1068->GetXaxis()->SetTitleOffset(1);
   quadLineFit1068->GetXaxis()->SetTitleFont(42);
   quadLineFit1068->GetYaxis()->SetLabelFont(42);
   quadLineFit1068->GetYaxis()->SetTitleFont(42);
   quadLineFit1068->SetParameter(0,-0.01342194);
   quadLineFit1068->SetParError(0,0.04979064);
   quadLineFit1068->SetParLimits(0,0,0);
   quadLineFit1068->SetParameter(1,-26.09634);
   quadLineFit1068->SetParError(1,0.8242896);
   quadLineFit1068->SetParLimits(1,0,0);
   quadLineFit1068->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1068);
   gre->Draw("p ");
   
   TF1 *quadLineFit1069 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1069->SetFillColor(19);
   quadLineFit1069->SetFillStyle(0);
   quadLineFit1069->SetLineColor(2);
   quadLineFit1069->SetLineWidth(2);
   quadLineFit1069->SetChisquare(1.636937);
   quadLineFit1069->SetNDF(2);
   quadLineFit1069->GetXaxis()->SetLabelFont(42);
   quadLineFit1069->GetXaxis()->SetTitleOffset(1);
   quadLineFit1069->GetXaxis()->SetTitleFont(42);
   quadLineFit1069->GetYaxis()->SetLabelFont(42);
   quadLineFit1069->GetYaxis()->SetTitleFont(42);
   quadLineFit1069->SetParameter(0,-0.01342194);
   quadLineFit1069->SetParError(0,0.04979064);
   quadLineFit1069->SetParLimits(0,0,0);
   quadLineFit1069->SetParameter(1,-26.09634);
   quadLineFit1069->SetParError(1,0.8242896);
   quadLineFit1069->SetParLimits(1,0,0);
   quadLineFit1069->Draw("same");
   
   Double_t -10.000000 ppm_fx1069[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05};
   Double_t -10.000000 ppm_fy1069[4] = {
   -0.1751558,
   -0.1486049,
   -0.1232737,
   -0.1082978};
   Double_t -10.000000 ppm_fex1069[4] = {
   0,
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1069[4] = {
   0.01320349,
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(4,-10.000000 ppm_fx1069,-10.000000 ppm_fy1069,-10.000000 ppm_fex1069,-10.000000 ppm_fey1069);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   
   TH1F *Graph_mI10dO000000sPppm1069 = new TH1F("Graph_mI10dO000000sPppm1069","Graph",100,0.04785714,0.07357143);
   Graph_mI10dO000000sPppm1069->SetMinimum(-0.1976858);
   Graph_mI10dO000000sPppm1069->SetMaximum(-0.08576783);
   Graph_mI10dO000000sPppm1069->SetDirectory(0);
   Graph_mI10dO000000sPppm1069->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1069->SetLineColor(ci);
   Graph_mI10dO000000sPppm1069->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1069->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1069->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1069->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1069->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1069->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1069->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1069->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1069);
   
   
   TF1 *quadLineFit1070 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1070->SetFillColor(19);
   quadLineFit1070->SetFillStyle(0);
   quadLineFit1070->SetLineColor(3);
   quadLineFit1070->SetLineWidth(2);
   quadLineFit1070->SetChisquare(0.0359518);
   quadLineFit1070->SetNDF(2);
   quadLineFit1070->GetXaxis()->SetLabelFont(42);
   quadLineFit1070->GetXaxis()->SetTitleOffset(1);
   quadLineFit1070->GetXaxis()->SetTitleFont(42);
   quadLineFit1070->GetYaxis()->SetLabelFont(42);
   quadLineFit1070->GetYaxis()->SetTitleFont(42);
   quadLineFit1070->SetParameter(0,0.05114293);
   quadLineFit1070->SetParError(0,0.04979323);
   quadLineFit1070->SetParLimits(0,0,0);
   quadLineFit1070->SetParameter(1,-3.173087);
   quadLineFit1070->SetParError(1,0.8243327);
   quadLineFit1070->SetParLimits(1,0,0);
   quadLineFit1070->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1070);
   gre->Draw("p ");
   
   TF1 *quadLineFit1071 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1071->SetFillColor(19);
   quadLineFit1071->SetFillStyle(0);
   quadLineFit1071->SetLineColor(3);
   quadLineFit1071->SetLineWidth(2);
   quadLineFit1071->SetChisquare(0.0359518);
   quadLineFit1071->SetNDF(2);
   quadLineFit1071->GetXaxis()->SetLabelFont(42);
   quadLineFit1071->GetXaxis()->SetTitleOffset(1);
   quadLineFit1071->GetXaxis()->SetTitleFont(42);
   quadLineFit1071->GetYaxis()->SetLabelFont(42);
   quadLineFit1071->GetYaxis()->SetTitleFont(42);
   quadLineFit1071->SetParameter(0,0.05114293);
   quadLineFit1071->SetParError(0,0.04979323);
   quadLineFit1071->SetParLimits(0,0,0);
   quadLineFit1071->SetParameter(1,-3.173087);
   quadLineFit1071->SetParError(1,0.8243327);
   quadLineFit1071->SetParLimits(1,0,0);
   quadLineFit1071->Draw("same");
   
   Double_t 10.000000 ppm_fx1071[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05};
   Double_t 10.000000 ppm_fy1071[4] = {
   1.543341,
   1.3484,
   1.192009,
   1.087346};
   Double_t 10.000000 ppm_fex1071[4] = {
   0,
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1071[4] = {
   0.01320349,
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(4,10.000000 ppm_fx1071,10.000000 ppm_fy1071,10.000000 ppm_fex1071,10.000000 ppm_fey1071);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   
   TH1F *Graph_10dO000000sPppm1071 = new TH1F("Graph_10dO000000sPppm1071","Graph",100,0.04785714,0.07357143);
   Graph_10dO000000sPppm1071->SetMinimum(1.025902);
   Graph_10dO000000sPppm1071->SetMaximum(1.604785);
   Graph_10dO000000sPppm1071->SetDirectory(0);
   Graph_10dO000000sPppm1071->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1071->SetLineColor(ci);
   Graph_10dO000000sPppm1071->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1071->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1071->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1071->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1071->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1071->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1071->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1071);
   
   
   TF1 *quadLineFit1072 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1072->SetFillColor(19);
   quadLineFit1072->SetFillStyle(0);
   quadLineFit1072->SetLineColor(4);
   quadLineFit1072->SetLineWidth(2);
   quadLineFit1072->SetChisquare(0.6573829);
   quadLineFit1072->SetNDF(2);
   quadLineFit1072->GetXaxis()->SetLabelFont(42);
   quadLineFit1072->GetXaxis()->SetTitleOffset(1);
   quadLineFit1072->GetXaxis()->SetTitleFont(42);
   quadLineFit1072->GetYaxis()->SetLabelFont(42);
   quadLineFit1072->GetYaxis()->SetTitleFont(42);
   quadLineFit1072->SetParameter(0,0.008108363);
   quadLineFit1072->SetParError(0,0.0497903);
   quadLineFit1072->SetParLimits(0,0,0);
   quadLineFit1072->SetParameter(1,21.45721);
   quadLineFit1072->SetParError(1,0.8242838);
   quadLineFit1072->SetParLimits(1,0,0);
   quadLineFit1072->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1072);
   gre->Draw("p ");
   
   TF1 *quadLineFit1073 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1073->SetFillColor(19);
   quadLineFit1073->SetFillStyle(0);
   quadLineFit1073->SetLineColor(4);
   quadLineFit1073->SetLineWidth(2);
   quadLineFit1073->SetChisquare(0.6573829);
   quadLineFit1073->SetNDF(2);
   quadLineFit1073->GetXaxis()->SetLabelFont(42);
   quadLineFit1073->GetXaxis()->SetTitleOffset(1);
   quadLineFit1073->GetXaxis()->SetTitleFont(42);
   quadLineFit1073->GetYaxis()->SetLabelFont(42);
   quadLineFit1073->GetYaxis()->SetTitleFont(42);
   quadLineFit1073->SetParameter(0,0.008108363);
   quadLineFit1073->SetParError(0,0.0497903);
   quadLineFit1073->SetParLimits(0,0,0);
   quadLineFit1073->SetParameter(1,21.45721);
   quadLineFit1073->SetParError(1,0.8242838);
   quadLineFit1073->SetParLimits(1,0,0);
   quadLineFit1073->Draw("same");
   
   Double_t 30.000000 ppm_fx1073[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05};
   Double_t 30.000000 ppm_fy1073[4] = {
   3.289872,
   2.838043,
   2.522597,
   2.277414};
   Double_t 30.000000 ppm_fex1073[4] = {
   0,
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1073[4] = {
   0.01320349,
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(4,30.000000 ppm_fx1073,30.000000 ppm_fy1073,30.000000 ppm_fex1073,30.000000 ppm_fey1073);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   
   TH1F *Graph_30dO000000sPppm1073 = new TH1F("Graph_30dO000000sPppm1073","Graph",100,0.04785714,0.07357143);
   Graph_30dO000000sPppm1073->SetMinimum(2.160324);
   Graph_30dO000000sPppm1073->SetMaximum(3.406963);
   Graph_30dO000000sPppm1073->SetDirectory(0);
   Graph_30dO000000sPppm1073->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1073->SetLineColor(ci);
   Graph_30dO000000sPppm1073->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1073->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1073->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1073->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1073->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1073->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1073->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1073);
   
   
   TF1 *quadLineFit1074 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1074->SetFillColor(19);
   quadLineFit1074->SetFillStyle(0);
   quadLineFit1074->SetLineColor(5);
   quadLineFit1074->SetLineWidth(2);
   quadLineFit1074->SetChisquare(3.665084);
   quadLineFit1074->SetNDF(2);
   quadLineFit1074->GetXaxis()->SetLabelFont(42);
   quadLineFit1074->GetXaxis()->SetTitleOffset(1);
   quadLineFit1074->GetXaxis()->SetTitleFont(42);
   quadLineFit1074->GetYaxis()->SetLabelFont(42);
   quadLineFit1074->GetYaxis()->SetTitleFont(42);
   quadLineFit1074->SetParameter(0,-0.09585061);
   quadLineFit1074->SetParError(0,0.04978765);
   quadLineFit1074->SetParLimits(0,0,0);
   quadLineFit1074->SetParameter(1,47.23206);
   quadLineFit1074->SetParError(1,0.8242409);
   quadLineFit1074->SetParLimits(1,0,0);
   quadLineFit1074->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1074);
   gre->Draw("p ");
   
   TF1 *quadLineFit1075 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1075->SetFillColor(19);
   quadLineFit1075->SetFillStyle(0);
   quadLineFit1075->SetLineColor(5);
   quadLineFit1075->SetLineWidth(2);
   quadLineFit1075->SetChisquare(3.665084);
   quadLineFit1075->SetNDF(2);
   quadLineFit1075->GetXaxis()->SetLabelFont(42);
   quadLineFit1075->GetXaxis()->SetTitleOffset(1);
   quadLineFit1075->GetXaxis()->SetTitleFont(42);
   quadLineFit1075->GetYaxis()->SetLabelFont(42);
   quadLineFit1075->GetYaxis()->SetTitleFont(42);
   quadLineFit1075->SetParameter(0,-0.09585061);
   quadLineFit1075->SetParError(0,0.04978765);
   quadLineFit1075->SetParLimits(0,0,0);
   quadLineFit1075->SetParameter(1,47.23206);
   quadLineFit1075->SetParError(1,0.8242409);
   quadLineFit1075->SetParLimits(1,0,0);
   quadLineFit1075->Draw("same");
   
   Double_t 50.000000 ppm_fx1075[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05};
   Double_t 50.000000 ppm_fy1075[4] = {
   4.993777,
   4.369515,
   3.895451,
   3.494162};
   Double_t 50.000000 ppm_fex1075[4] = {
   0,
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1075[4] = {
   0.01320349,
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(4,50.000000 ppm_fx1075,50.000000 ppm_fy1075,50.000000 ppm_fex1075,50.000000 ppm_fey1075);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   
   TH1F *Graph_50dO000000sPppm1075 = new TH1F("Graph_50dO000000sPppm1075","Graph",100,0.04785714,0.07357143);
   Graph_50dO000000sPppm1075->SetMinimum(3.328357);
   Graph_50dO000000sPppm1075->SetMaximum(5.159583);
   Graph_50dO000000sPppm1075->SetDirectory(0);
   Graph_50dO000000sPppm1075->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1075->SetLineColor(ci);
   Graph_50dO000000sPppm1075->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1075->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1075->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1075->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1075->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1075->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1075->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1075->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1075);
   
   
   TF1 *quadLineFit1076 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1076->SetFillColor(19);
   quadLineFit1076->SetFillStyle(0);
   quadLineFit1076->SetLineColor(6);
   quadLineFit1076->SetLineWidth(2);
   quadLineFit1076->SetChisquare(0.5914546);
   quadLineFit1076->SetNDF(2);
   quadLineFit1076->GetXaxis()->SetLabelFont(42);
   quadLineFit1076->GetXaxis()->SetTitleOffset(1);
   quadLineFit1076->GetXaxis()->SetTitleFont(42);
   quadLineFit1076->GetYaxis()->SetLabelFont(42);
   quadLineFit1076->GetYaxis()->SetTitleFont(42);
   quadLineFit1076->SetParameter(0,0.01056463);
   quadLineFit1076->SetParError(0,0.04979007);
   quadLineFit1076->SetParLimits(0,0,0);
   quadLineFit1076->SetParameter(1,69.77768);
   quadLineFit1076->SetParError(1,0.8242804);
   quadLineFit1076->SetParLimits(1,0,0);
   quadLineFit1076->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1076);
   gre->Draw("p ");
   
   TF1 *quadLineFit1077 = new TF1("quadLineFit","[0]+[1]*x",0.04785714,0.07357143, TF1::EAddToList::kNo);
   quadLineFit1077->SetFillColor(19);
   quadLineFit1077->SetFillStyle(0);
   quadLineFit1077->SetLineColor(6);
   quadLineFit1077->SetLineWidth(2);
   quadLineFit1077->SetChisquare(0.5914546);
   quadLineFit1077->SetNDF(2);
   quadLineFit1077->GetXaxis()->SetLabelFont(42);
   quadLineFit1077->GetXaxis()->SetTitleOffset(1);
   quadLineFit1077->GetXaxis()->SetTitleFont(42);
   quadLineFit1077->GetYaxis()->SetLabelFont(42);
   quadLineFit1077->GetYaxis()->SetTitleFont(42);
   quadLineFit1077->SetParameter(0,0.01056463);
   quadLineFit1077->SetParError(0,0.04979007);
   quadLineFit1077->SetParLimits(0,0,0);
   quadLineFit1077->SetParameter(1,69.77768);
   quadLineFit1077->SetParError(1,0.8242804);
   quadLineFit1077->SetParLimits(1,0,0);
   quadLineFit1077->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","App. #LTB_{r}#GT","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("50.000000 ppm","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
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
