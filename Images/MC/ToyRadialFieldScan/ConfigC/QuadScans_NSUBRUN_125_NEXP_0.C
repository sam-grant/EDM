void QuadScans_NSUBRUN_125_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:20:00 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1065[3] = {
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1065[3] = {
   -3.167299,
   -2.818407,
   -2.527513};
   Double_t -50.000000 ppm_fex1065[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1065[3] = {
   0.01320349,
   0.01320349,
   0.01320349};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1065,-50.000000 ppm_fy1065,-50.000000 ppm_fex1065,-50.000000 ppm_fey1065);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1065 = new TH1F("Graph_mI50dO000000sPppm1065","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1065->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1065->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1065->SetDirectory(0);
   Graph_mI50dO000000sPppm1065->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1065->SetLineColor(ci);
   Graph_mI50dO000000sPppm1065->GetXaxis()->SetTitle("QHV [kV]");
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
   
   
   TF1 *quadLineFit1066 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1066->SetFillColor(19);
   quadLineFit1066->SetFillStyle(0);
   quadLineFit1066->SetLineWidth(2);
   quadLineFit1066->SetChisquare(3.215846);
   quadLineFit1066->SetNDF(1);
   quadLineFit1066->GetXaxis()->SetLabelFont(42);
   quadLineFit1066->GetXaxis()->SetTitleOffset(1);
   quadLineFit1066->GetXaxis()->SetTitleFont(42);
   quadLineFit1066->GetYaxis()->SetLabelFont(42);
   quadLineFit1066->GetYaxis()->SetTitleFont(42);
   quadLineFit1066->SetParameter(0,-5.716776);
   quadLineFit1066->SetParError(0,0.08437136);
   quadLineFit1066->SetParLimits(0,0,0);
   quadLineFit1066->SetParameter(1,0.1599464);
   quadLineFit1066->SetParError(1,0.004668127);
   quadLineFit1066->SetParLimits(1,0,0);
   quadLineFit1066->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1066);
   gre->Draw("ap");
   
   TF1 *quadLineFit1067 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1067->SetFillColor(19);
   quadLineFit1067->SetFillStyle(0);
   quadLineFit1067->SetLineWidth(2);
   quadLineFit1067->SetChisquare(3.215846);
   quadLineFit1067->SetNDF(1);
   quadLineFit1067->GetXaxis()->SetLabelFont(42);
   quadLineFit1067->GetXaxis()->SetTitleOffset(1);
   quadLineFit1067->GetXaxis()->SetTitleFont(42);
   quadLineFit1067->GetYaxis()->SetLabelFont(42);
   quadLineFit1067->GetYaxis()->SetTitleFont(42);
   quadLineFit1067->SetParameter(0,-5.716776);
   quadLineFit1067->SetParError(0,0.08437136);
   quadLineFit1067->SetParLimits(0,0,0);
   quadLineFit1067->SetParameter(1,0.1599464);
   quadLineFit1067->SetParError(1,0.004668127);
   quadLineFit1067->SetParLimits(1,0,0);
   quadLineFit1067->Draw("same");
   
   Double_t -30.000000 ppm_fx1067[3] = {
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1067[3] = {
   -1.671247,
   -1.457025,
   -1.339318};
   Double_t -30.000000 ppm_fex1067[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1067[3] = {
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(3,-30.000000 ppm_fx1067,-30.000000 ppm_fy1067,-30.000000 ppm_fex1067,-30.000000 ppm_fey1067);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI30dO000000sPppm1067 = new TH1F("Graph_mI30dO000000sPppm1067","Graph",100,15.6,20.4);
   Graph_mI30dO000000sPppm1067->SetMinimum(-1.720284);
   Graph_mI30dO000000sPppm1067->SetMaximum(-1.290281);
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
   
   
   TF1 *quadLineFit1068 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1068->SetFillColor(19);
   quadLineFit1068->SetFillStyle(0);
   quadLineFit1068->SetLineColor(2);
   quadLineFit1068->SetLineWidth(2);
   quadLineFit1068->SetChisquare(8.905719);
   quadLineFit1068->SetNDF(1);
   quadLineFit1068->GetXaxis()->SetLabelFont(42);
   quadLineFit1068->GetXaxis()->SetTitleOffset(1);
   quadLineFit1068->GetXaxis()->SetTitleFont(42);
   quadLineFit1068->GetYaxis()->SetLabelFont(42);
   quadLineFit1068->GetYaxis()->SetTitleFont(42);
   quadLineFit1068->SetParameter(0,-2.982875);
   quadLineFit1068->SetParError(0,0.0843693);
   quadLineFit1068->SetParLimits(0,0,0);
   quadLineFit1068->SetParameter(1,0.08298212);
   quadLineFit1068->SetParError(1,0.004668012);
   quadLineFit1068->SetParLimits(1,0,0);
   quadLineFit1068->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1068);
   gre->Draw("p ");
   
   TF1 *quadLineFit1069 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1069->SetFillColor(19);
   quadLineFit1069->SetFillStyle(0);
   quadLineFit1069->SetLineColor(2);
   quadLineFit1069->SetLineWidth(2);
   quadLineFit1069->SetChisquare(8.905719);
   quadLineFit1069->SetNDF(1);
   quadLineFit1069->GetXaxis()->SetLabelFont(42);
   quadLineFit1069->GetXaxis()->SetTitleOffset(1);
   quadLineFit1069->GetXaxis()->SetTitleFont(42);
   quadLineFit1069->GetYaxis()->SetLabelFont(42);
   quadLineFit1069->GetYaxis()->SetTitleFont(42);
   quadLineFit1069->SetParameter(0,-2.982875);
   quadLineFit1069->SetParError(0,0.0843693);
   quadLineFit1069->SetParLimits(0,0,0);
   quadLineFit1069->SetParameter(1,0.08298212);
   quadLineFit1069->SetParError(1,0.004668012);
   quadLineFit1069->SetParLimits(1,0,0);
   quadLineFit1069->Draw("same");
   
   Double_t -10.000000 ppm_fx1069[3] = {
   16,
   18,
   20};
   Double_t -10.000000 ppm_fy1069[3] = {
   -0.1667761,
   -0.1241723,
   -0.1184777};
   Double_t -10.000000 ppm_fex1069[3] = {
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1069[3] = {
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(3,-10.000000 ppm_fx1069,-10.000000 ppm_fy1069,-10.000000 ppm_fex1069,-10.000000 ppm_fey1069);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_mI10dO000000sPppm1069 = new TH1F("Graph_mI10dO000000sPppm1069","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1069->SetMinimum(-0.1874502);
   Graph_mI10dO000000sPppm1069->SetMaximum(-0.09780366);
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
   
   
   TF1 *quadLineFit1070 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1070->SetFillColor(19);
   quadLineFit1070->SetFillStyle(0);
   quadLineFit1070->SetLineColor(3);
   quadLineFit1070->SetLineWidth(2);
   quadLineFit1070->SetChisquare(1.302393);
   quadLineFit1070->SetNDF(1);
   quadLineFit1070->GetXaxis()->SetLabelFont(42);
   quadLineFit1070->GetXaxis()->SetTitleOffset(1);
   quadLineFit1070->GetXaxis()->SetTitleFont(42);
   quadLineFit1070->GetYaxis()->SetLabelFont(42);
   quadLineFit1070->GetYaxis()->SetTitleFont(42);
   quadLineFit1070->SetParameter(0,-0.3538184);
   quadLineFit1070->SetParError(0,0.08437172);
   quadLineFit1070->SetParLimits(0,0,0);
   quadLineFit1070->SetParameter(1,0.01207461);
   quadLineFit1070->SetParError(1,0.004668147);
   quadLineFit1070->SetParLimits(1,0,0);
   quadLineFit1070->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1070);
   gre->Draw("p ");
   
   TF1 *quadLineFit1071 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1071->SetFillColor(19);
   quadLineFit1071->SetFillStyle(0);
   quadLineFit1071->SetLineColor(3);
   quadLineFit1071->SetLineWidth(2);
   quadLineFit1071->SetChisquare(1.302393);
   quadLineFit1071->SetNDF(1);
   quadLineFit1071->GetXaxis()->SetLabelFont(42);
   quadLineFit1071->GetXaxis()->SetTitleOffset(1);
   quadLineFit1071->GetXaxis()->SetTitleFont(42);
   quadLineFit1071->GetYaxis()->SetLabelFont(42);
   quadLineFit1071->GetYaxis()->SetTitleFont(42);
   quadLineFit1071->SetParameter(0,-0.3538184);
   quadLineFit1071->SetParError(0,0.08437172);
   quadLineFit1071->SetParLimits(0,0,0);
   quadLineFit1071->SetParameter(1,0.01207461);
   quadLineFit1071->SetParError(1,0.004668147);
   quadLineFit1071->SetParLimits(1,0,0);
   quadLineFit1071->Draw("same");
   
   Double_t 10.000000 ppm_fx1071[3] = {
   16,
   18,
   20};
   Double_t 10.000000 ppm_fy1071[3] = {
   1.356699,
   1.213869,
   1.08891};
   Double_t 10.000000 ppm_fex1071[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1071[3] = {
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(3,10.000000 ppm_fx1071,10.000000 ppm_fy1071,10.000000 ppm_fex1071,10.000000 ppm_fey1071);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_10dO000000sPppm1071 = new TH1F("Graph_10dO000000sPppm1071","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1071->SetMinimum(1.046287);
   Graph_10dO000000sPppm1071->SetMaximum(1.399322);
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
   
   
   TF1 *quadLineFit1072 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1072->SetFillColor(19);
   quadLineFit1072->SetFillStyle(0);
   quadLineFit1072->SetLineColor(4);
   quadLineFit1072->SetLineWidth(2);
   quadLineFit1072->SetChisquare(0.3053123);
   quadLineFit1072->SetNDF(1);
   quadLineFit1072->GetXaxis()->SetLabelFont(42);
   quadLineFit1072->GetXaxis()->SetTitleOffset(1);
   quadLineFit1072->GetXaxis()->SetTitleFont(42);
   quadLineFit1072->GetYaxis()->SetLabelFont(42);
   quadLineFit1072->GetYaxis()->SetTitleFont(42);
   quadLineFit1072->SetParameter(0,2.424876);
   quadLineFit1072->SetParError(0,0.08436998);
   quadLineFit1072->SetParLimits(0,0,0);
   quadLineFit1072->SetParameter(1,-0.0669472);
   quadLineFit1072->SetParError(1,0.00466805);
   quadLineFit1072->SetParLimits(1,0,0);
   quadLineFit1072->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1072);
   gre->Draw("p ");
   
   TF1 *quadLineFit1073 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1073->SetFillColor(19);
   quadLineFit1073->SetFillStyle(0);
   quadLineFit1073->SetLineColor(4);
   quadLineFit1073->SetLineWidth(2);
   quadLineFit1073->SetChisquare(0.3053123);
   quadLineFit1073->SetNDF(1);
   quadLineFit1073->GetXaxis()->SetLabelFont(42);
   quadLineFit1073->GetXaxis()->SetTitleOffset(1);
   quadLineFit1073->GetXaxis()->SetTitleFont(42);
   quadLineFit1073->GetYaxis()->SetLabelFont(42);
   quadLineFit1073->GetYaxis()->SetTitleFont(42);
   quadLineFit1073->SetParameter(0,2.424876);
   quadLineFit1073->SetParError(0,0.08436998);
   quadLineFit1073->SetParLimits(0,0,0);
   quadLineFit1073->SetParameter(1,-0.0669472);
   quadLineFit1073->SetParError(1,0.00466805);
   quadLineFit1073->SetParLimits(1,0,0);
   quadLineFit1073->Draw("same");
   
   Double_t 30.000000 ppm_fx1073[3] = {
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1073[3] = {
   2.878523,
   2.539313,
   2.29128};
   Double_t 30.000000 ppm_fex1073[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1073[3] = {
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(3,30.000000 ppm_fx1073,30.000000 ppm_fy1073,30.000000 ppm_fex1073,30.000000 ppm_fey1073);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_30dO000000sPppm1073 = new TH1F("Graph_30dO000000sPppm1073","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1073->SetMinimum(2.216711);
   Graph_30dO000000sPppm1073->SetMaximum(2.953092);
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
   
   
   TF1 *quadLineFit1074 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1074->SetFillColor(19);
   quadLineFit1074->SetFillStyle(0);
   quadLineFit1074->SetLineColor(5);
   quadLineFit1074->SetLineWidth(2);
   quadLineFit1074->SetChisquare(7.947661);
   quadLineFit1074->SetNDF(1);
   quadLineFit1074->GetXaxis()->SetLabelFont(42);
   quadLineFit1074->GetXaxis()->SetTitleOffset(1);
   quadLineFit1074->GetXaxis()->SetTitleFont(42);
   quadLineFit1074->GetYaxis()->SetLabelFont(42);
   quadLineFit1074->GetYaxis()->SetTitleFont(42);
   quadLineFit1074->SetParameter(0,5.212302);
   quadLineFit1074->SetParError(0,0.08436975);
   quadLineFit1074->SetParLimits(0,0,0);
   quadLineFit1074->SetParameter(1,-0.1468109);
   quadLineFit1074->SetParError(1,0.004668037);
   quadLineFit1074->SetParLimits(1,0,0);
   quadLineFit1074->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1074);
   gre->Draw("p ");
   
   TF1 *quadLineFit1075 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1075->SetFillColor(19);
   quadLineFit1075->SetFillStyle(0);
   quadLineFit1075->SetLineColor(5);
   quadLineFit1075->SetLineWidth(2);
   quadLineFit1075->SetChisquare(7.947661);
   quadLineFit1075->SetNDF(1);
   quadLineFit1075->GetXaxis()->SetLabelFont(42);
   quadLineFit1075->GetXaxis()->SetTitleOffset(1);
   quadLineFit1075->GetXaxis()->SetTitleFont(42);
   quadLineFit1075->GetYaxis()->SetLabelFont(42);
   quadLineFit1075->GetYaxis()->SetTitleFont(42);
   quadLineFit1075->SetParameter(0,5.212302);
   quadLineFit1075->SetParError(0,0.08436975);
   quadLineFit1075->SetParLimits(0,0,0);
   quadLineFit1075->SetParameter(1,-0.1468109);
   quadLineFit1075->SetParError(1,0.004668037);
   quadLineFit1075->SetParLimits(1,0,0);
   quadLineFit1075->Draw("same");
   
   Double_t 50.000000 ppm_fx1075[3] = {
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1075[3] = {
   4.379065,
   3.890883,
   3.484751};
   Double_t 50.000000 ppm_fex1075[3] = {
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1075[3] = {
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(3,50.000000 ppm_fx1075,50.000000 ppm_fy1075,50.000000 ppm_fex1075,50.000000 ppm_fey1075);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_50dO000000sPppm1075 = new TH1F("Graph_50dO000000sPppm1075","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1075->SetMinimum(3.379476);
   Graph_50dO000000sPppm1075->SetMaximum(4.484341);
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
   
   
   TF1 *quadLineFit1076 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1076->SetFillColor(19);
   quadLineFit1076->SetFillStyle(0);
   quadLineFit1076->SetLineColor(6);
   quadLineFit1076->SetLineWidth(2);
   quadLineFit1076->SetChisquare(6.436206);
   quadLineFit1076->SetNDF(1);
   quadLineFit1076->GetXaxis()->SetLabelFont(42);
   quadLineFit1076->GetXaxis()->SetTitleOffset(1);
   quadLineFit1076->GetXaxis()->SetTitleFont(42);
   quadLineFit1076->GetYaxis()->SetLabelFont(42);
   quadLineFit1076->GetYaxis()->SetTitleFont(42);
   quadLineFit1076->SetParameter(0,7.942647);
   quadLineFit1076->SetParError(0,0.08437154);
   quadLineFit1076->SetParLimits(0,0,0);
   quadLineFit1076->SetParameter(1,-0.2235785);
   quadLineFit1076->SetParError(1,0.004668137);
   quadLineFit1076->SetParLimits(1,0,0);
   quadLineFit1076->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1076);
   gre->Draw("p ");
   
   TF1 *quadLineFit1077 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1077->SetFillColor(19);
   quadLineFit1077->SetFillStyle(0);
   quadLineFit1077->SetLineColor(6);
   quadLineFit1077->SetLineWidth(2);
   quadLineFit1077->SetChisquare(6.436206);
   quadLineFit1077->SetNDF(1);
   quadLineFit1077->GetXaxis()->SetLabelFont(42);
   quadLineFit1077->GetXaxis()->SetTitleOffset(1);
   quadLineFit1077->GetXaxis()->SetTitleFont(42);
   quadLineFit1077->GetYaxis()->SetLabelFont(42);
   quadLineFit1077->GetYaxis()->SetTitleFont(42);
   quadLineFit1077->SetParameter(0,7.942647);
   quadLineFit1077->SetParError(0,0.08437154);
   quadLineFit1077->SetParLimits(0,0,0);
   quadLineFit1077->SetParameter(1,-0.2235785);
   quadLineFit1077->SetParError(1,0.004668137);
   quadLineFit1077->SetParLimits(1,0,0);
   quadLineFit1077->Draw("same");
   
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
