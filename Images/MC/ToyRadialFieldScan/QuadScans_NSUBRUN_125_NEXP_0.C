void QuadScans_NSUBRUN_125_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  5 12:48:42 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.04836538,-5.213993,0.0663141,7.481508);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.15);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1065[3] = {
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -50.000000 ppm_fy1065[3] = {
   -3.155554,
   -2.79466,
   -2.603672};
   Double_t -50.000000 ppm_fex1065[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1065[3] = {
   0.01325679,
   0.01325679,
   0.01325679};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1065,-50.000000 ppm_fy1065,-50.000000 ppm_fex1065,-50.000000 ppm_fey1065);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";1/V [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI50dO000000sPppm1065 = new TH1F("Graph_mI50dO000000sPppm1065","",100,0.05016026,0.06362179);
   Graph_mI50dO000000sPppm1065->SetMinimum(-3.944443);
   Graph_mI50dO000000sPppm1065->SetMaximum(6.211958);
   Graph_mI50dO000000sPppm1065->SetDirectory(0);
   Graph_mI50dO000000sPppm1065->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1065->SetLineColor(ci);
   Graph_mI50dO000000sPppm1065->GetXaxis()->SetTitle("1/V [kV^{-1}]");
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
   
   
   TF1 *quadLineFit1066 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.0625, TF1::EAddToList::kNo);
   quadLineFit1066->SetFillColor(19);
   quadLineFit1066->SetFillStyle(0);
   quadLineFit1066->SetLineWidth(2);
   quadLineFit1066->SetChisquare(1.380098);
   quadLineFit1066->SetNDF(1);
   quadLineFit1066->GetXaxis()->SetLabelFont(42);
   quadLineFit1066->GetXaxis()->SetTitleOffset(1);
   quadLineFit1066->GetXaxis()->SetTitleFont(42);
   quadLineFit1066->GetYaxis()->SetLabelFont(42);
   quadLineFit1066->GetYaxis()->SetTitleFont(42);
   quadLineFit1066->SetParameter(0,-0.05927288);
   quadLineFit1066->SetParError(0,0.09372473);
   quadLineFit1066->SetParLimits(0,0,0);
   quadLineFit1066->SetParameter(1,-49.46372);
   quadLineFit1066->SetParError(1,1.654896);
   quadLineFit1066->SetParLimits(1,0,0);
   quadLineFit1066->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1066);
   gre->Draw("ap");
   
   TF1 *quadLineFit1067 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.0625, TF1::EAddToList::kNo);
   quadLineFit1067->SetFillColor(19);
   quadLineFit1067->SetFillStyle(0);
   quadLineFit1067->SetLineWidth(2);
   quadLineFit1067->SetChisquare(1.380098);
   quadLineFit1067->SetNDF(1);
   quadLineFit1067->GetXaxis()->SetLabelFont(42);
   quadLineFit1067->GetXaxis()->SetTitleOffset(1);
   quadLineFit1067->GetXaxis()->SetTitleFont(42);
   quadLineFit1067->GetYaxis()->SetLabelFont(42);
   quadLineFit1067->GetYaxis()->SetTitleFont(42);
   quadLineFit1067->SetParameter(0,-0.05927288);
   quadLineFit1067->SetParError(0,0.09372473);
   quadLineFit1067->SetParLimits(0,0,0);
   quadLineFit1067->SetParameter(1,-49.46372);
   quadLineFit1067->SetParError(1,1.654896);
   quadLineFit1067->SetParLimits(1,0,0);
   quadLineFit1067->Draw("same");
   
   Double_t -30.000000 ppm_fx1067[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -30.000000 ppm_fy1067[4] = {
   -1.916866,
   -1.655436,
   -1.474862,
   -1.357606};
   Double_t -30.000000 ppm_fex1067[4] = {
   0,
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1067[4] = {
   0.01325679,
   0.01325679,
   0.01325679,
   0.01325679};
   gre = new TGraphErrors(4,-30.000000 ppm_fx1067,-30.000000 ppm_fy1067,-30.000000 ppm_fex1067,-30.000000 ppm_fey1067);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI30dO000000sPppm1067 = new TH1F("Graph_mI30dO000000sPppm1067","",100,0.0492674,0.07344322);
   Graph_mI30dO000000sPppm1067->SetMinimum(-1.988701);
   Graph_mI30dO000000sPppm1067->SetMaximum(-1.285772);
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
   
   
   TF1 *quadLineFit1068 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1068->SetFillColor(19);
   quadLineFit1068->SetFillStyle(0);
   quadLineFit1068->SetLineColor(2);
   quadLineFit1068->SetLineWidth(2);
   quadLineFit1068->SetChisquare(0.7263025);
   quadLineFit1068->SetNDF(2);
   quadLineFit1068->GetXaxis()->SetLabelFont(42);
   quadLineFit1068->GetXaxis()->SetTitleOffset(1);
   quadLineFit1068->GetXaxis()->SetTitleFont(42);
   quadLineFit1068->GetYaxis()->SetLabelFont(42);
   quadLineFit1068->GetYaxis()->SetTitleFont(42);
   quadLineFit1068->SetParameter(0,0.06323858);
   quadLineFit1068->SetParError(0,0.05274607);
   quadLineFit1068->SetParLimits(0,0,0);
   quadLineFit1068->SetParameter(1,-27.65224);
   quadLineFit1068->SetParError(1,0.8693584);
   quadLineFit1068->SetParLimits(1,0,0);
   quadLineFit1068->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1068);
   gre->Draw("p ");
   
   TF1 *quadLineFit1069 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1069->SetFillColor(19);
   quadLineFit1069->SetFillStyle(0);
   quadLineFit1069->SetLineColor(2);
   quadLineFit1069->SetLineWidth(2);
   quadLineFit1069->SetChisquare(0.7263025);
   quadLineFit1069->SetNDF(2);
   quadLineFit1069->GetXaxis()->SetLabelFont(42);
   quadLineFit1069->GetXaxis()->SetTitleOffset(1);
   quadLineFit1069->GetXaxis()->SetTitleFont(42);
   quadLineFit1069->GetYaxis()->SetLabelFont(42);
   quadLineFit1069->GetYaxis()->SetTitleFont(42);
   quadLineFit1069->SetParameter(0,0.06323858);
   quadLineFit1069->SetParError(0,0.05274607);
   quadLineFit1069->SetParLimits(0,0,0);
   quadLineFit1069->SetParameter(1,-27.65224);
   quadLineFit1069->SetParError(1,0.8693584);
   quadLineFit1069->SetParLimits(1,0,0);
   quadLineFit1069->Draw("same");
   
   Double_t -10.000000 ppm_fx1069[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t -10.000000 ppm_fy1069[4] = {
   -0.1597272,
   -0.1632641,
   -0.1255701,
   -0.1156855};
   Double_t -10.000000 ppm_fex1069[4] = {
   0,
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1069[4] = {
   0.01325679,
   0.01325679,
   0.01325679,
   0.01325679};
   gre = new TGraphErrors(4,-10.000000 ppm_fx1069,-10.000000 ppm_fy1069,-10.000000 ppm_fex1069,-10.000000 ppm_fey1069);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI10dO000000sPppm1069 = new TH1F("Graph_mI10dO000000sPppm1069","",100,0.0492674,0.07344322);
   Graph_mI10dO000000sPppm1069->SetMinimum(-0.1839301);
   Graph_mI10dO000000sPppm1069->SetMaximum(-0.09501947);
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
   
   
   TF1 *quadLineFit1070 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1070->SetFillColor(19);
   quadLineFit1070->SetFillStyle(0);
   quadLineFit1070->SetLineColor(3);
   quadLineFit1070->SetLineWidth(2);
   quadLineFit1070->SetChisquare(2.171186);
   quadLineFit1070->SetNDF(2);
   quadLineFit1070->GetXaxis()->SetLabelFont(42);
   quadLineFit1070->GetXaxis()->SetTitleOffset(1);
   quadLineFit1070->GetXaxis()->SetTitleFont(42);
   quadLineFit1070->GetYaxis()->SetLabelFont(42);
   quadLineFit1070->GetYaxis()->SetTitleFont(42);
   quadLineFit1070->SetParameter(0,0.003650639);
   quadLineFit1070->SetParError(0,0.05275275);
   quadLineFit1070->SetParLimits(0,0,0);
   quadLineFit1070->SetParameter(1,-2.404197);
   quadLineFit1070->SetParError(1,0.8694688);
   quadLineFit1070->SetParLimits(1,0,0);
   quadLineFit1070->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1070);
   gre->Draw("p ");
   
   TF1 *quadLineFit1071 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1071->SetFillColor(19);
   quadLineFit1071->SetFillStyle(0);
   quadLineFit1071->SetLineColor(3);
   quadLineFit1071->SetLineWidth(2);
   quadLineFit1071->SetChisquare(2.171186);
   quadLineFit1071->SetNDF(2);
   quadLineFit1071->GetXaxis()->SetLabelFont(42);
   quadLineFit1071->GetXaxis()->SetTitleOffset(1);
   quadLineFit1071->GetXaxis()->SetTitleFont(42);
   quadLineFit1071->GetYaxis()->SetLabelFont(42);
   quadLineFit1071->GetYaxis()->SetTitleFont(42);
   quadLineFit1071->SetParameter(0,0.003650639);
   quadLineFit1071->SetParError(0,0.05275275);
   quadLineFit1071->SetParLimits(0,0,0);
   quadLineFit1071->SetParameter(1,-2.404197);
   quadLineFit1071->SetParError(1,0.8694688);
   quadLineFit1071->SetParLimits(1,0,0);
   quadLineFit1071->Draw("same");
   
   Double_t 10.000000 ppm_fx1071[3] = {
   0.07142857,
   0.0625,
   0.05128205};
   Double_t 10.000000 ppm_fy1071[3] = {
   1.538566,
   1.359356,
   1.12369};
   Double_t 10.000000 ppm_fex1071[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1071[3] = {
   0.01325679,
   0.01325679,
   0.01325679};
   gre = new TGraphErrors(3,10.000000 ppm_fx1071,10.000000 ppm_fy1071,10.000000 ppm_fex1071,10.000000 ppm_fey1071);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_10dO000000sPppm1071 = new TH1F("Graph_10dO000000sPppm1071","",100,0.0492674,0.07344322);
   Graph_10dO000000sPppm1071->SetMinimum(1.066294);
   Graph_10dO000000sPppm1071->SetMaximum(1.595962);
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
   
   
   TF1 *quadLineFit1072 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1072->SetFillColor(19);
   quadLineFit1072->SetFillStyle(0);
   quadLineFit1072->SetLineColor(4);
   quadLineFit1072->SetLineWidth(2);
   quadLineFit1072->SetChisquare(0.08186901);
   quadLineFit1072->SetNDF(1);
   quadLineFit1072->GetXaxis()->SetLabelFont(42);
   quadLineFit1072->GetXaxis()->SetTitleOffset(1);
   quadLineFit1072->GetXaxis()->SetTitleFont(42);
   quadLineFit1072->GetYaxis()->SetLabelFont(42);
   quadLineFit1072->GetYaxis()->SetTitleFont(42);
   quadLineFit1072->SetParameter(0,0.06811781);
   quadLineFit1072->SetParError(0,0.05783741);
   quadLineFit1072->SetParLimits(0,0,0);
   quadLineFit1072->SetParameter(1,20.61036);
   quadLineFit1072->SetParError(1,0.9285976);
   quadLineFit1072->SetParLimits(1,0,0);
   quadLineFit1072->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1072);
   gre->Draw("p ");
   
   TF1 *quadLineFit1073 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1073->SetFillColor(19);
   quadLineFit1073->SetFillStyle(0);
   quadLineFit1073->SetLineColor(4);
   quadLineFit1073->SetLineWidth(2);
   quadLineFit1073->SetChisquare(0.08186901);
   quadLineFit1073->SetNDF(1);
   quadLineFit1073->GetXaxis()->SetLabelFont(42);
   quadLineFit1073->GetXaxis()->SetTitleOffset(1);
   quadLineFit1073->GetXaxis()->SetTitleFont(42);
   quadLineFit1073->GetYaxis()->SetLabelFont(42);
   quadLineFit1073->GetYaxis()->SetTitleFont(42);
   quadLineFit1073->SetParameter(0,0.06811781);
   quadLineFit1073->SetParError(0,0.05783741);
   quadLineFit1073->SetParLimits(0,0,0);
   quadLineFit1073->SetParameter(1,20.61036);
   quadLineFit1073->SetParError(1,0.9285976);
   quadLineFit1073->SetParLimits(1,0,0);
   quadLineFit1073->Draw("same");
   
   Double_t 30.000000 ppm_fx1073[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t 30.000000 ppm_fy1073[4] = {
   3.2639,
   2.854965,
   2.536966,
   2.35278};
   Double_t 30.000000 ppm_fex1073[4] = {
   0,
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1073[4] = {
   0.01325679,
   0.01325679,
   0.01325679,
   0.01325679};
   gre = new TGraphErrors(4,30.000000 ppm_fx1073,30.000000 ppm_fy1073,30.000000 ppm_fex1073,30.000000 ppm_fey1073);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff9900");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff9900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_30dO000000sPppm1073 = new TH1F("Graph_30dO000000sPppm1073","",100,0.0492674,0.07344322);
   Graph_30dO000000sPppm1073->SetMinimum(2.24576);
   Graph_30dO000000sPppm1073->SetMaximum(3.370921);
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
   
   
   TF1 *quadLineFit1074 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1074->SetFillColor(19);
   quadLineFit1074->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1074->SetLineColor(ci);
   quadLineFit1074->SetLineWidth(2);
   quadLineFit1074->SetChisquare(0.3096436);
   quadLineFit1074->SetNDF(2);
   quadLineFit1074->GetXaxis()->SetLabelFont(42);
   quadLineFit1074->GetXaxis()->SetTitleOffset(1);
   quadLineFit1074->GetXaxis()->SetTitleFont(42);
   quadLineFit1074->GetYaxis()->SetLabelFont(42);
   quadLineFit1074->GetYaxis()->SetTitleFont(42);
   quadLineFit1074->SetParameter(0,0.02218181);
   quadLineFit1074->SetParError(0,0.05274713);
   quadLineFit1074->SetParLimits(0,0,0);
   quadLineFit1074->SetParameter(1,45.35473);
   quadLineFit1074->SetParError(1,0.8693753);
   quadLineFit1074->SetParLimits(1,0,0);
   quadLineFit1074->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1074);
   gre->Draw("p ");
   
   TF1 *quadLineFit1075 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1075->SetFillColor(19);
   quadLineFit1075->SetFillStyle(0);

   ci = TColor::GetColor("#ff9900");
   quadLineFit1075->SetLineColor(ci);
   quadLineFit1075->SetLineWidth(2);
   quadLineFit1075->SetChisquare(0.3096436);
   quadLineFit1075->SetNDF(2);
   quadLineFit1075->GetXaxis()->SetLabelFont(42);
   quadLineFit1075->GetXaxis()->SetTitleOffset(1);
   quadLineFit1075->GetXaxis()->SetTitleFont(42);
   quadLineFit1075->GetYaxis()->SetLabelFont(42);
   quadLineFit1075->GetYaxis()->SetTitleFont(42);
   quadLineFit1075->SetParameter(0,0.02218181);
   quadLineFit1075->SetParError(0,0.05274713);
   quadLineFit1075->SetParLimits(0,0,0);
   quadLineFit1075->SetParameter(1,45.35473);
   quadLineFit1075->SetParError(1,0.8693753);
   quadLineFit1075->SetParLimits(1,0,0);
   quadLineFit1075->Draw("same");
   
   Double_t 50.000000 ppm_fx1075[4] = {
   0.07142857,
   0.0625,
   0.05555556,
   0.05128205};
   Double_t 50.000000 ppm_fy1075[4] = {
   4.969566,
   4.365073,
   3.879854,
   3.593426};
   Double_t 50.000000 ppm_fex1075[4] = {
   0,
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1075[4] = {
   0.01325679,
   0.01325679,
   0.01325679,
   0.01325679};
   gre = new TGraphErrors(4,50.000000 ppm_fx1075,50.000000 ppm_fy1075,50.000000 ppm_fex1075,50.000000 ppm_fey1075);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_50dO000000sPppm1075 = new TH1F("Graph_50dO000000sPppm1075","",100,0.0492674,0.07344322);
   Graph_50dO000000sPppm1075->SetMinimum(3.439904);
   Graph_50dO000000sPppm1075->SetMaximum(5.123088);
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
   
   
   TF1 *quadLineFit1076 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1076->SetFillColor(19);
   quadLineFit1076->SetFillStyle(0);
   quadLineFit1076->SetLineColor(6);
   quadLineFit1076->SetLineWidth(2);
   quadLineFit1076->SetChisquare(0.3009302);
   quadLineFit1076->SetNDF(2);
   quadLineFit1076->GetXaxis()->SetLabelFont(42);
   quadLineFit1076->GetXaxis()->SetTitleOffset(1);
   quadLineFit1076->GetXaxis()->SetTitleFont(42);
   quadLineFit1076->GetYaxis()->SetLabelFont(42);
   quadLineFit1076->GetYaxis()->SetTitleFont(42);
   quadLineFit1076->SetParameter(0,0.08070271);
   quadLineFit1076->SetParError(0,0.05275203);
   quadLineFit1076->SetParLimits(0,0,0);
   quadLineFit1076->SetParameter(1,68.46937);
   quadLineFit1076->SetParError(1,0.8694566);
   quadLineFit1076->SetParLimits(1,0,0);
   quadLineFit1076->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1076);
   gre->Draw("p ");
   
   TF1 *quadLineFit1077 = new TF1("quadLineFit","[0]+[1]*x",0.05128205,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1077->SetFillColor(19);
   quadLineFit1077->SetFillStyle(0);
   quadLineFit1077->SetLineColor(6);
   quadLineFit1077->SetLineWidth(2);
   quadLineFit1077->SetChisquare(0.3009302);
   quadLineFit1077->SetNDF(2);
   quadLineFit1077->GetXaxis()->SetLabelFont(42);
   quadLineFit1077->GetXaxis()->SetTitleOffset(1);
   quadLineFit1077->GetXaxis()->SetTitleFont(42);
   quadLineFit1077->GetYaxis()->SetLabelFont(42);
   quadLineFit1077->GetYaxis()->SetTitleFont(42);
   quadLineFit1077->SetParameter(0,0.08070271);
   quadLineFit1077->SetParError(0,0.05275203);
   quadLineFit1077->SetParLimits(0,0,0);
   quadLineFit1077->SetParameter(1,68.46937);
   quadLineFit1077->SetParError(1,0.8694566);
   quadLineFit1077->SetParLimits(1,0,0);
   quadLineFit1077->Draw("same");
   
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
