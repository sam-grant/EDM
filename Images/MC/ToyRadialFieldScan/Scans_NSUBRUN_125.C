void Scans_NSUBRUN_125()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct  5 20:04:42 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.625,21.77143,2.625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1089[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1089[2] = {
   -2.329389,
   -1.854389};
   Double_t -30.000000 ppm_fex1089[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1089[2] = {
   0.0456595,
   0.0456595};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1089,-30.000000 ppm_fy1089,-30.000000 ppm_fex1089,-30.000000 ppm_fey1089);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089 = new TH1F("Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089","",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089->SetMinimum(-3);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089->SetMaximum(2);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089->GetXaxis()->SetTitle("QHV [kV]");
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_mI30dO000000sPppm10011011102910551089->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_-30.000000 ppm10011011102910551089);
   
   
   TF1 *lineFit1090 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1090->SetFillColor(19);
   lineFit1090->SetFillStyle(0);
   lineFit1090->SetLineWidth(2);
   lineFit1090->SetChisquare(2.84974e-26);
   lineFit1090->SetNDF(0);
   lineFit1090->GetXaxis()->SetLabelFont(42);
   lineFit1090->GetXaxis()->SetTitleOffset(1);
   lineFit1090->GetXaxis()->SetTitleFont(42);
   lineFit1090->GetYaxis()->SetLabelFont(42);
   lineFit1090->GetYaxis()->SetTitleFont(42);
   lineFit1090->SetParameter(0,-4.229389);
   lineFit1090->SetParError(0,0.2923635);
   lineFit1090->SetParLimits(0,0,0);
   lineFit1090->SetParameter(1,0.11875);
   lineFit1090->SetParError(1,0.01614307);
   lineFit1090->SetParLimits(1,0,0);
   lineFit1090->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1090);
   gre->Draw("ap");
   
   TF1 *lineFit1091 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1091->SetFillColor(19);
   lineFit1091->SetFillStyle(0);
   lineFit1091->SetLineWidth(2);
   lineFit1091->SetChisquare(2.84974e-26);
   lineFit1091->SetNDF(0);
   lineFit1091->GetXaxis()->SetLabelFont(42);
   lineFit1091->GetXaxis()->SetTitleOffset(1);
   lineFit1091->GetXaxis()->SetTitleFont(42);
   lineFit1091->GetYaxis()->SetLabelFont(42);
   lineFit1091->GetYaxis()->SetTitleFont(42);
   lineFit1091->SetParameter(0,-4.229389);
   lineFit1091->SetParError(0,0.2923635);
   lineFit1091->SetParLimits(0,0,0);
   lineFit1091->SetParameter(1,0.11875);
   lineFit1091->SetParError(1,0.01614307);
   lineFit1091->SetParLimits(1,0,0);
   lineFit1091->Draw("same");
   
   Double_t -10.000000 ppm_fx1091[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1091[2] = {
   -1.079389,
   -0.8543892};
   Double_t -10.000000 ppm_fex1091[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1091[2] = {
   0.0456595,
   0.0456595};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1091,-10.000000 ppm_fy1091,-10.000000 ppm_fex1091,-10.000000 ppm_fey1091);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091 = new TH1F("Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091->SetMinimum(-1.156681);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091->SetMaximum(-0.7770978);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_mI10dO000000sPppm10031013103110571091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_-10.000000 ppm10031013103110571091);
   
   
   TF1 *lineFit1092 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1092->SetFillColor(19);
   lineFit1092->SetFillStyle(0);
   lineFit1092->SetLineColor(2);
   lineFit1092->SetLineWidth(2);
   lineFit1092->SetChisquare(1.146991e-26);
   lineFit1092->SetNDF(0);
   lineFit1092->GetXaxis()->SetLabelFont(42);
   lineFit1092->GetXaxis()->SetTitleOffset(1);
   lineFit1092->GetXaxis()->SetTitleFont(42);
   lineFit1092->GetYaxis()->SetLabelFont(42);
   lineFit1092->GetYaxis()->SetTitleFont(42);
   lineFit1092->SetParameter(0,-1.979389);
   lineFit1092->SetParError(0,0.2923635);
   lineFit1092->SetParLimits(0,0,0);
   lineFit1092->SetParameter(1,0.05625);
   lineFit1092->SetParError(1,0.01614307);
   lineFit1092->SetParLimits(1,0,0);
   lineFit1092->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1092);
   gre->Draw("p ");
   
   TF1 *lineFit1093 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1093->SetFillColor(19);
   lineFit1093->SetFillStyle(0);
   lineFit1093->SetLineColor(2);
   lineFit1093->SetLineWidth(2);
   lineFit1093->SetChisquare(1.146991e-26);
   lineFit1093->SetNDF(0);
   lineFit1093->GetXaxis()->SetLabelFont(42);
   lineFit1093->GetXaxis()->SetTitleOffset(1);
   lineFit1093->GetXaxis()->SetTitleFont(42);
   lineFit1093->GetYaxis()->SetLabelFont(42);
   lineFit1093->GetYaxis()->SetTitleFont(42);
   lineFit1093->SetParameter(0,-1.979389);
   lineFit1093->SetParError(0,0.2923635);
   lineFit1093->SetParLimits(0,0,0);
   lineFit1093->SetParameter(1,0.05625);
   lineFit1093->SetParError(1,0.01614307);
   lineFit1093->SetParLimits(1,0,0);
   lineFit1093->Draw("same");
   
   Double_t 10.000000 ppm_fx1093[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1093[2] = {
   0.1706108,
   0.1456108};
   Double_t 10.000000 ppm_fex1093[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1093[2] = {
   0.0456595,
   0.0456595};
   gre = new TGraphErrors(2,10.000000 ppm_fx1093,10.000000 ppm_fy1093,10.000000 ppm_fex1093,10.000000 ppm_fey1093);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093 = new TH1F("Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093->SetMinimum(0.08831937);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093->SetMaximum(0.2279022);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_10dO000000sPppm10051015103310591093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_10.000000 ppm10051015103310591093);
   
   
   TF1 *lineFit1094 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1094->SetFillColor(19);
   lineFit1094->SetFillStyle(0);
   lineFit1094->SetLineColor(3);
   lineFit1094->SetLineWidth(2);
   lineFit1094->SetChisquare(1.348749e-28);
   lineFit1094->SetNDF(0);
   lineFit1094->GetXaxis()->SetLabelFont(42);
   lineFit1094->GetXaxis()->SetTitleOffset(1);
   lineFit1094->GetXaxis()->SetTitleFont(42);
   lineFit1094->GetYaxis()->SetLabelFont(42);
   lineFit1094->GetYaxis()->SetTitleFont(42);
   lineFit1094->SetParameter(0,0.2706108);
   lineFit1094->SetParError(0,0.2923635);
   lineFit1094->SetParLimits(0,0,0);
   lineFit1094->SetParameter(1,-0.00625);
   lineFit1094->SetParError(1,0.01614307);
   lineFit1094->SetParLimits(1,0,0);
   lineFit1094->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1094);
   gre->Draw("p ");
   
   TF1 *lineFit1095 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1095->SetFillColor(19);
   lineFit1095->SetFillStyle(0);
   lineFit1095->SetLineColor(3);
   lineFit1095->SetLineWidth(2);
   lineFit1095->SetChisquare(1.348749e-28);
   lineFit1095->SetNDF(0);
   lineFit1095->GetXaxis()->SetLabelFont(42);
   lineFit1095->GetXaxis()->SetTitleOffset(1);
   lineFit1095->GetXaxis()->SetTitleFont(42);
   lineFit1095->GetYaxis()->SetLabelFont(42);
   lineFit1095->GetYaxis()->SetTitleFont(42);
   lineFit1095->SetParameter(0,0.2706108);
   lineFit1095->SetParError(0,0.2923635);
   lineFit1095->SetParLimits(0,0,0);
   lineFit1095->SetParameter(1,-0.00625);
   lineFit1095->SetParError(1,0.01614307);
   lineFit1095->SetParLimits(1,0,0);
   lineFit1095->Draw("same");
   
   Double_t 30.000000 ppm_fx1095[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1095[2] = {
   1.420611,
   1.145611};
   Double_t 30.000000 ppm_fex1095[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1095[2] = {
   0.0456595,
   0.0456595};
   gre = new TGraphErrors(2,30.000000 ppm_fx1095,30.000000 ppm_fy1095,30.000000 ppm_fex1095,30.000000 ppm_fey1095);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095 = new TH1F("Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095->SetMinimum(1.063319);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095->SetMaximum(1.502902);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_Graph_30dO000000sPppm10071017103510611095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_Graph_30.000000 ppm10071017103510611095);
   
   
   TF1 *lineFit1096 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1096->SetFillColor(19);
   lineFit1096->SetFillStyle(0);
   lineFit1096->SetLineColor(4);
   lineFit1096->SetLineWidth(2);
   lineFit1096->SetChisquare(3.490636e-26);
   lineFit1096->SetNDF(0);
   lineFit1096->GetXaxis()->SetLabelFont(42);
   lineFit1096->GetXaxis()->SetTitleOffset(1);
   lineFit1096->GetXaxis()->SetTitleFont(42);
   lineFit1096->GetYaxis()->SetLabelFont(42);
   lineFit1096->GetYaxis()->SetTitleFont(42);
   lineFit1096->SetParameter(0,2.520611);
   lineFit1096->SetParError(0,0.2923635);
   lineFit1096->SetParLimits(0,0,0);
   lineFit1096->SetParameter(1,-0.06875);
   lineFit1096->SetParError(1,0.01614307);
   lineFit1096->SetParLimits(1,0,0);
   lineFit1096->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1096);
   gre->Draw("p ");
   
   TF1 *lineFit1097 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1097->SetFillColor(19);
   lineFit1097->SetFillStyle(0);
   lineFit1097->SetLineColor(4);
   lineFit1097->SetLineWidth(2);
   lineFit1097->SetChisquare(3.490636e-26);
   lineFit1097->SetNDF(0);
   lineFit1097->GetXaxis()->SetLabelFont(42);
   lineFit1097->GetXaxis()->SetTitleOffset(1);
   lineFit1097->GetXaxis()->SetTitleFont(42);
   lineFit1097->GetYaxis()->SetLabelFont(42);
   lineFit1097->GetYaxis()->SetTitleFont(42);
   lineFit1097->SetParameter(0,2.520611);
   lineFit1097->SetParError(0,0.2923635);
   lineFit1097->SetParLimits(0,0,0);
   lineFit1097->SetParameter(1,-0.06875);
   lineFit1097->SetParError(1,0.01614307);
   lineFit1097->SetParLimits(1,0,0);
   lineFit1097->Draw("same");
   
   Double_t -30.000000 ppm_fx1097[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1097[2] = {
   -2.350281,
   -1.875281};
   Double_t -30.000000 ppm_fex1097[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1097[2] = {
   0.0247454,
   0.0247454};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1097,-30.000000 ppm_fy1097,-30.000000 ppm_fex1097,-30.000000 ppm_fey1097);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097 = new TH1F("Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097->SetMinimum(-2.427475);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097->SetMaximum(-1.798087);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097->SetDirectory(0);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097->SetLineColor(ci);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_mI30dO000000sPppm1019103710631097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_-30.000000 ppm1019103710631097);
   
   
   TF1 *lineFit1098 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1098->SetFillColor(19);
   lineFit1098->SetFillStyle(0);
   lineFit1098->SetLineColor(5);
   lineFit1098->SetLineWidth(2);
   lineFit1098->SetChisquare(3.969524e-26);
   lineFit1098->SetNDF(0);
   lineFit1098->GetXaxis()->SetLabelFont(42);
   lineFit1098->GetXaxis()->SetTitleOffset(1);
   lineFit1098->GetXaxis()->SetTitleFont(42);
   lineFit1098->GetYaxis()->SetLabelFont(42);
   lineFit1098->GetYaxis()->SetTitleFont(42);
   lineFit1098->SetParameter(0,-4.250281);
   lineFit1098->SetParError(0,0.1584479);
   lineFit1098->SetParLimits(0,0,0);
   lineFit1098->SetParameter(1,0.11875);
   lineFit1098->SetParError(1,0.00874882);
   lineFit1098->SetParLimits(1,0,0);
   lineFit1098->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1098);
   gre->Draw("p ");
   
   TF1 *lineFit1099 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1099->SetFillColor(19);
   lineFit1099->SetFillStyle(0);
   lineFit1099->SetLineColor(5);
   lineFit1099->SetLineWidth(2);
   lineFit1099->SetChisquare(3.969524e-26);
   lineFit1099->SetNDF(0);
   lineFit1099->GetXaxis()->SetLabelFont(42);
   lineFit1099->GetXaxis()->SetTitleOffset(1);
   lineFit1099->GetXaxis()->SetTitleFont(42);
   lineFit1099->GetYaxis()->SetLabelFont(42);
   lineFit1099->GetYaxis()->SetTitleFont(42);
   lineFit1099->SetParameter(0,-4.250281);
   lineFit1099->SetParError(0,0.1584479);
   lineFit1099->SetParLimits(0,0,0);
   lineFit1099->SetParameter(1,0.11875);
   lineFit1099->SetParError(1,0.00874882);
   lineFit1099->SetParLimits(1,0,0);
   lineFit1099->Draw("same");
   
   Double_t -10.000000 ppm_fx1099[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1099[2] = {
   -1.100281,
   -0.875281};
   Double_t -10.000000 ppm_fex1099[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1099[2] = {
   0.0247454,
   0.0247454};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1099,-10.000000 ppm_fy1099,-10.000000 ppm_fex1099,-10.000000 ppm_fey1099);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099 = new TH1F("Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099->SetMinimum(-1.152475);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099->SetMaximum(-0.8230865);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099->SetDirectory(0);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099->SetLineColor(ci);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_mI10dO000000sPppm1021103910651099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_-10.000000 ppm1021103910651099);
   
   
   TF1 *lineFit1100 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1100->SetFillColor(19);
   lineFit1100->SetFillStyle(0);
   lineFit1100->SetLineColor(6);
   lineFit1100->SetLineWidth(2);
   lineFit1100->SetChisquare(2.165927e-26);
   lineFit1100->SetNDF(0);
   lineFit1100->GetXaxis()->SetLabelFont(42);
   lineFit1100->GetXaxis()->SetTitleOffset(1);
   lineFit1100->GetXaxis()->SetTitleFont(42);
   lineFit1100->GetYaxis()->SetLabelFont(42);
   lineFit1100->GetYaxis()->SetTitleFont(42);
   lineFit1100->SetParameter(0,-2.000281);
   lineFit1100->SetParError(0,0.1584479);
   lineFit1100->SetParLimits(0,0,0);
   lineFit1100->SetParameter(1,0.05625);
   lineFit1100->SetParError(1,0.00874882);
   lineFit1100->SetParLimits(1,0,0);
   lineFit1100->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1100);
   gre->Draw("p ");
   
   TF1 *lineFit1101 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1101->SetFillColor(19);
   lineFit1101->SetFillStyle(0);
   lineFit1101->SetLineColor(6);
   lineFit1101->SetLineWidth(2);
   lineFit1101->SetChisquare(2.165927e-26);
   lineFit1101->SetNDF(0);
   lineFit1101->GetXaxis()->SetLabelFont(42);
   lineFit1101->GetXaxis()->SetTitleOffset(1);
   lineFit1101->GetXaxis()->SetTitleFont(42);
   lineFit1101->GetYaxis()->SetLabelFont(42);
   lineFit1101->GetYaxis()->SetTitleFont(42);
   lineFit1101->SetParameter(0,-2.000281);
   lineFit1101->SetParError(0,0.1584479);
   lineFit1101->SetParLimits(0,0,0);
   lineFit1101->SetParameter(1,0.05625);
   lineFit1101->SetParError(1,0.00874882);
   lineFit1101->SetParLimits(1,0,0);
   lineFit1101->Draw("same");
   
   Double_t 10.000000 ppm_fx1101[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1101[2] = {
   0.149719,
   0.124719};
   Double_t 10.000000 ppm_fex1101[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1101[2] = {
   0.0247454,
   0.0247454};
   gre = new TGraphErrors(2,10.000000 ppm_fx1101,10.000000 ppm_fy1101,10.000000 ppm_fex1101,10.000000 ppm_fey1101);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(7);
   gre->SetMarkerColor(7);
   
   TH1F *Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101 = new TH1F("Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101->SetMinimum(0.09252451);
   Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101->SetMaximum(0.1819135);
   Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101->SetDirectory(0);
   Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101->SetLineColor(ci);
   Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_10dO000000sPppm1023104110671101->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_10.000000 ppm1023104110671101);
   
   
   TF1 *lineFit1102 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1102->SetFillColor(19);
   lineFit1102->SetFillStyle(0);
   lineFit1102->SetLineColor(7);
   lineFit1102->SetLineWidth(2);
   lineFit1102->SetChisquare(1.258089e-29);
   lineFit1102->SetNDF(0);
   lineFit1102->GetXaxis()->SetLabelFont(42);
   lineFit1102->GetXaxis()->SetTitleOffset(1);
   lineFit1102->GetXaxis()->SetTitleFont(42);
   lineFit1102->GetYaxis()->SetLabelFont(42);
   lineFit1102->GetYaxis()->SetTitleFont(42);
   lineFit1102->SetParameter(0,0.249719);
   lineFit1102->SetParError(0,0.1584479);
   lineFit1102->SetParLimits(0,0,0);
   lineFit1102->SetParameter(1,-0.00625);
   lineFit1102->SetParError(1,0.00874882);
   lineFit1102->SetParLimits(1,0,0);
   lineFit1102->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1102);
   gre->Draw("p ");
   
   TF1 *lineFit1103 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1103->SetFillColor(19);
   lineFit1103->SetFillStyle(0);
   lineFit1103->SetLineColor(7);
   lineFit1103->SetLineWidth(2);
   lineFit1103->SetChisquare(1.258089e-29);
   lineFit1103->SetNDF(0);
   lineFit1103->GetXaxis()->SetLabelFont(42);
   lineFit1103->GetXaxis()->SetTitleOffset(1);
   lineFit1103->GetXaxis()->SetTitleFont(42);
   lineFit1103->GetYaxis()->SetLabelFont(42);
   lineFit1103->GetYaxis()->SetTitleFont(42);
   lineFit1103->SetParameter(0,0.249719);
   lineFit1103->SetParError(0,0.1584479);
   lineFit1103->SetParLimits(0,0,0);
   lineFit1103->SetParameter(1,-0.00625);
   lineFit1103->SetParError(1,0.00874882);
   lineFit1103->SetParLimits(1,0,0);
   lineFit1103->Draw("same");
   
   Double_t 30.000000 ppm_fx1103[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1103[2] = {
   1.399719,
   1.124719};
   Double_t 30.000000 ppm_fex1103[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1103[2] = {
   0.0247454,
   0.0247454};
   gre = new TGraphErrors(2,30.000000 ppm_fx1103,30.000000 ppm_fy1103,30.000000 ppm_fex1103,30.000000 ppm_fey1103);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   
   TH1F *Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103 = new TH1F("Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103","Graph",100,15.6,20.4);
   Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103->SetMinimum(1.067525);
   Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103->SetMaximum(1.456913);
   Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103->SetDirectory(0);
   Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103->SetLineColor(ci);
   Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_Graph_30dO000000sPppm1025104310691103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_Graph_30.000000 ppm1025104310691103);
   
   
   TF1 *lineFit1104 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1104->SetFillColor(19);
   lineFit1104->SetFillStyle(0);
   lineFit1104->SetLineColor(8);
   lineFit1104->SetLineWidth(2);
   lineFit1104->SetChisquare(3.172398e-26);
   lineFit1104->SetNDF(0);
   lineFit1104->GetXaxis()->SetLabelFont(42);
   lineFit1104->GetXaxis()->SetTitleOffset(1);
   lineFit1104->GetXaxis()->SetTitleFont(42);
   lineFit1104->GetYaxis()->SetLabelFont(42);
   lineFit1104->GetYaxis()->SetTitleFont(42);
   lineFit1104->SetParameter(0,2.499719);
   lineFit1104->SetParError(0,0.1584479);
   lineFit1104->SetParLimits(0,0,0);
   lineFit1104->SetParameter(1,-0.06875);
   lineFit1104->SetParError(1,0.00874882);
   lineFit1104->SetParLimits(1,0,0);
   lineFit1104->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1104);
   gre->Draw("p ");
   
   TF1 *lineFit1105 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1105->SetFillColor(19);
   lineFit1105->SetFillStyle(0);
   lineFit1105->SetLineColor(8);
   lineFit1105->SetLineWidth(2);
   lineFit1105->SetChisquare(3.172398e-26);
   lineFit1105->SetNDF(0);
   lineFit1105->GetXaxis()->SetLabelFont(42);
   lineFit1105->GetXaxis()->SetTitleOffset(1);
   lineFit1105->GetXaxis()->SetTitleFont(42);
   lineFit1105->GetYaxis()->SetLabelFont(42);
   lineFit1105->GetYaxis()->SetTitleFont(42);
   lineFit1105->SetParameter(0,2.499719);
   lineFit1105->SetParError(0,0.1584479);
   lineFit1105->SetParLimits(0,0,0);
   lineFit1105->SetParameter(1,-0.06875);
   lineFit1105->SetParError(1,0.00874882);
   lineFit1105->SetParLimits(1,0,0);
   lineFit1105->Draw("same");
   
   Double_t -30.000000 ppm_fx1105[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1105[2] = {
   -2.356066,
   -1.881066};
   Double_t -30.000000 ppm_fex1105[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1105[2] = {
   0.018954,
   0.018954};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1105,-30.000000 ppm_fy1105,-30.000000 ppm_fex1105,-30.000000 ppm_fey1105);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(9);
   gre->SetMarkerColor(9);
   
   TH1F *Graph_Graph_Graph_mI30dO000000sPppm104510711105 = new TH1F("Graph_Graph_Graph_mI30dO000000sPppm104510711105","Graph",100,15.6,20.4);
   Graph_Graph_Graph_mI30dO000000sPppm104510711105->SetMinimum(-2.426311);
   Graph_Graph_Graph_mI30dO000000sPppm104510711105->SetMaximum(-1.810821);
   Graph_Graph_Graph_mI30dO000000sPppm104510711105->SetDirectory(0);
   Graph_Graph_Graph_mI30dO000000sPppm104510711105->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_mI30dO000000sPppm104510711105->SetLineColor(ci);
   Graph_Graph_Graph_mI30dO000000sPppm104510711105->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm104510711105->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_mI30dO000000sPppm104510711105->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm104510711105->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm104510711105->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm104510711105->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI30dO000000sPppm104510711105->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_mI30dO000000sPppm104510711105->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_-30.000000 ppm104510711105);
   
   
   TF1 *lineFit1106 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1106->SetFillColor(19);
   lineFit1106->SetFillStyle(0);
   lineFit1106->SetLineColor(9);
   lineFit1106->SetLineWidth(2);
   lineFit1106->SetChisquare(2.932805e-25);
   lineFit1106->SetNDF(0);
   lineFit1106->GetXaxis()->SetLabelFont(42);
   lineFit1106->GetXaxis()->SetTitleOffset(1);
   lineFit1106->GetXaxis()->SetTitleFont(42);
   lineFit1106->GetYaxis()->SetLabelFont(42);
   lineFit1106->GetYaxis()->SetTitleFont(42);
   lineFit1106->SetParameter(0,-4.256066);
   lineFit1106->SetParError(0,0.1213648);
   lineFit1106->SetParLimits(0,0,0);
   lineFit1106->SetParameter(1,0.11875);
   lineFit1106->SetParError(1,0.006701251);
   lineFit1106->SetParLimits(1,0,0);
   lineFit1106->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1106);
   gre->Draw("p ");
   
   TF1 *lineFit1107 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1107->SetFillColor(19);
   lineFit1107->SetFillStyle(0);
   lineFit1107->SetLineColor(9);
   lineFit1107->SetLineWidth(2);
   lineFit1107->SetChisquare(2.932805e-25);
   lineFit1107->SetNDF(0);
   lineFit1107->GetXaxis()->SetLabelFont(42);
   lineFit1107->GetXaxis()->SetTitleOffset(1);
   lineFit1107->GetXaxis()->SetTitleFont(42);
   lineFit1107->GetYaxis()->SetLabelFont(42);
   lineFit1107->GetYaxis()->SetTitleFont(42);
   lineFit1107->SetParameter(0,-4.256066);
   lineFit1107->SetParError(0,0.1213648);
   lineFit1107->SetParLimits(0,0,0);
   lineFit1107->SetParameter(1,0.11875);
   lineFit1107->SetParError(1,0.006701251);
   lineFit1107->SetParLimits(1,0,0);
   lineFit1107->Draw("same");
   
   Double_t -10.000000 ppm_fx1107[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1107[2] = {
   -1.106066,
   -0.8810662};
   Double_t -10.000000 ppm_fex1107[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1107[2] = {
   0.018954,
   0.018954};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1107,-10.000000 ppm_fy1107,-10.000000 ppm_fex1107,-10.000000 ppm_fey1107);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(10);
   gre->SetMarkerColor(10);
   
   TH1F *Graph_Graph_Graph_mI10dO000000sPppm104710731107 = new TH1F("Graph_Graph_Graph_mI10dO000000sPppm104710731107","Graph",100,15.6,20.4);
   Graph_Graph_Graph_mI10dO000000sPppm104710731107->SetMinimum(-1.151311);
   Graph_Graph_Graph_mI10dO000000sPppm104710731107->SetMaximum(-0.8358214);
   Graph_Graph_Graph_mI10dO000000sPppm104710731107->SetDirectory(0);
   Graph_Graph_Graph_mI10dO000000sPppm104710731107->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_mI10dO000000sPppm104710731107->SetLineColor(ci);
   Graph_Graph_Graph_mI10dO000000sPppm104710731107->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm104710731107->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_mI10dO000000sPppm104710731107->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm104710731107->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm104710731107->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm104710731107->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_mI10dO000000sPppm104710731107->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_mI10dO000000sPppm104710731107->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_-10.000000 ppm104710731107);
   
   
   TF1 *lineFit1108 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1108->SetFillColor(19);
   lineFit1108->SetFillStyle(0);
   lineFit1108->SetLineColor(10);
   lineFit1108->SetLineWidth(2);
   lineFit1108->SetChisquare(1.210794e-25);
   lineFit1108->SetNDF(0);
   lineFit1108->GetXaxis()->SetLabelFont(42);
   lineFit1108->GetXaxis()->SetTitleOffset(1);
   lineFit1108->GetXaxis()->SetTitleFont(42);
   lineFit1108->GetYaxis()->SetLabelFont(42);
   lineFit1108->GetYaxis()->SetTitleFont(42);
   lineFit1108->SetParameter(0,-2.006066);
   lineFit1108->SetParError(0,0.1213648);
   lineFit1108->SetParLimits(0,0,0);
   lineFit1108->SetParameter(1,0.05625);
   lineFit1108->SetParError(1,0.006701251);
   lineFit1108->SetParLimits(1,0,0);
   lineFit1108->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1108);
   gre->Draw("p ");
   
   TF1 *lineFit1109 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1109->SetFillColor(19);
   lineFit1109->SetFillStyle(0);
   lineFit1109->SetLineColor(10);
   lineFit1109->SetLineWidth(2);
   lineFit1109->SetChisquare(1.210794e-25);
   lineFit1109->SetNDF(0);
   lineFit1109->GetXaxis()->SetLabelFont(42);
   lineFit1109->GetXaxis()->SetTitleOffset(1);
   lineFit1109->GetXaxis()->SetTitleFont(42);
   lineFit1109->GetYaxis()->SetLabelFont(42);
   lineFit1109->GetYaxis()->SetTitleFont(42);
   lineFit1109->SetParameter(0,-2.006066);
   lineFit1109->SetParError(0,0.1213648);
   lineFit1109->SetParLimits(0,0,0);
   lineFit1109->SetParameter(1,0.05625);
   lineFit1109->SetParError(1,0.006701251);
   lineFit1109->SetParLimits(1,0,0);
   lineFit1109->Draw("same");
   
   Double_t 10.000000 ppm_fx1109[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1109[2] = {
   0.1439338,
   0.1189338};
   Double_t 10.000000 ppm_fex1109[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1109[2] = {
   0.018954,
   0.018954};
   gre = new TGraphErrors(2,10.000000 ppm_fx1109,10.000000 ppm_fy1109,10.000000 ppm_fex1109,10.000000 ppm_fey1109);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(11);
   gre->SetMarkerColor(11);
   
   TH1F *Graph_Graph_Graph_10dO000000sPppm104910751109 = new TH1F("Graph_Graph_Graph_10dO000000sPppm104910751109","Graph",100,15.6,20.4);
   Graph_Graph_Graph_10dO000000sPppm104910751109->SetMinimum(0.09368897);
   Graph_Graph_Graph_10dO000000sPppm104910751109->SetMaximum(0.1691786);
   Graph_Graph_Graph_10dO000000sPppm104910751109->SetDirectory(0);
   Graph_Graph_Graph_10dO000000sPppm104910751109->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_10dO000000sPppm104910751109->SetLineColor(ci);
   Graph_Graph_Graph_10dO000000sPppm104910751109->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_10dO000000sPppm104910751109->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_10dO000000sPppm104910751109->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_10dO000000sPppm104910751109->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_10dO000000sPppm104910751109->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_10dO000000sPppm104910751109->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_10dO000000sPppm104910751109->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_10dO000000sPppm104910751109->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_10.000000 ppm104910751109);
   
   
   TF1 *lineFit1110 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1110->SetFillColor(19);
   lineFit1110->SetFillStyle(0);
   lineFit1110->SetLineColor(11);
   lineFit1110->SetLineWidth(2);
   lineFit1110->SetChisquare(5.939891e-28);
   lineFit1110->SetNDF(0);
   lineFit1110->GetXaxis()->SetLabelFont(42);
   lineFit1110->GetXaxis()->SetTitleOffset(1);
   lineFit1110->GetXaxis()->SetTitleFont(42);
   lineFit1110->GetYaxis()->SetLabelFont(42);
   lineFit1110->GetYaxis()->SetTitleFont(42);
   lineFit1110->SetParameter(0,0.2439338);
   lineFit1110->SetParError(0,0.1213648);
   lineFit1110->SetParLimits(0,0,0);
   lineFit1110->SetParameter(1,-0.00625);
   lineFit1110->SetParError(1,0.006701251);
   lineFit1110->SetParLimits(1,0,0);
   lineFit1110->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1110);
   gre->Draw("p ");
   
   TF1 *lineFit1111 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1111->SetFillColor(19);
   lineFit1111->SetFillStyle(0);
   lineFit1111->SetLineColor(11);
   lineFit1111->SetLineWidth(2);
   lineFit1111->SetChisquare(5.939891e-28);
   lineFit1111->SetNDF(0);
   lineFit1111->GetXaxis()->SetLabelFont(42);
   lineFit1111->GetXaxis()->SetTitleOffset(1);
   lineFit1111->GetXaxis()->SetTitleFont(42);
   lineFit1111->GetYaxis()->SetLabelFont(42);
   lineFit1111->GetYaxis()->SetTitleFont(42);
   lineFit1111->SetParameter(0,0.2439338);
   lineFit1111->SetParError(0,0.1213648);
   lineFit1111->SetParLimits(0,0,0);
   lineFit1111->SetParameter(1,-0.00625);
   lineFit1111->SetParError(1,0.006701251);
   lineFit1111->SetParLimits(1,0,0);
   lineFit1111->Draw("same");
   
   Double_t 30.000000 ppm_fx1111[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1111[2] = {
   1.393934,
   1.118934};
   Double_t 30.000000 ppm_fex1111[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1111[2] = {
   0.018954,
   0.018954};
   gre = new TGraphErrors(2,30.000000 ppm_fx1111,30.000000 ppm_fy1111,30.000000 ppm_fex1111,30.000000 ppm_fey1111);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(12);
   gre->SetMarkerColor(12);
   
   TH1F *Graph_Graph_Graph_30dO000000sPppm105110771111 = new TH1F("Graph_Graph_Graph_30dO000000sPppm105110771111","Graph",100,15.6,20.4);
   Graph_Graph_Graph_30dO000000sPppm105110771111->SetMinimum(1.068689);
   Graph_Graph_Graph_30dO000000sPppm105110771111->SetMaximum(1.444179);
   Graph_Graph_Graph_30dO000000sPppm105110771111->SetDirectory(0);
   Graph_Graph_Graph_30dO000000sPppm105110771111->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_30dO000000sPppm105110771111->SetLineColor(ci);
   Graph_Graph_Graph_30dO000000sPppm105110771111->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_30dO000000sPppm105110771111->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_30dO000000sPppm105110771111->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_30dO000000sPppm105110771111->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_30dO000000sPppm105110771111->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_30dO000000sPppm105110771111->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_30dO000000sPppm105110771111->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph_30dO000000sPppm105110771111->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_30.000000 ppm105110771111);
   
   
   TF1 *lineFit1112 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1112->SetFillColor(19);
   lineFit1112->SetFillStyle(0);
   lineFit1112->SetLineColor(12);
   lineFit1112->SetLineWidth(2);
   lineFit1112->SetChisquare(1.961151e-25);
   lineFit1112->SetNDF(0);
   lineFit1112->GetXaxis()->SetLabelFont(42);
   lineFit1112->GetXaxis()->SetTitleOffset(1);
   lineFit1112->GetXaxis()->SetTitleFont(42);
   lineFit1112->GetYaxis()->SetLabelFont(42);
   lineFit1112->GetYaxis()->SetTitleFont(42);
   lineFit1112->SetParameter(0,2.493934);
   lineFit1112->SetParError(0,0.1213648);
   lineFit1112->SetParLimits(0,0,0);
   lineFit1112->SetParameter(1,-0.06875);
   lineFit1112->SetParError(1,0.006701251);
   lineFit1112->SetParLimits(1,0,0);
   lineFit1112->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1112);
   gre->Draw("p ");
   
   TF1 *lineFit1113 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1113->SetFillColor(19);
   lineFit1113->SetFillStyle(0);
   lineFit1113->SetLineColor(12);
   lineFit1113->SetLineWidth(2);
   lineFit1113->SetChisquare(1.961151e-25);
   lineFit1113->SetNDF(0);
   lineFit1113->GetXaxis()->SetLabelFont(42);
   lineFit1113->GetXaxis()->SetTitleOffset(1);
   lineFit1113->GetXaxis()->SetTitleFont(42);
   lineFit1113->GetYaxis()->SetLabelFont(42);
   lineFit1113->GetYaxis()->SetTitleFont(42);
   lineFit1113->SetParameter(0,2.493934);
   lineFit1113->SetParError(0,0.1213648);
   lineFit1113->SetParLimits(0,0,0);
   lineFit1113->SetParameter(1,-0.06875);
   lineFit1113->SetParError(1,0.006701251);
   lineFit1113->SetParLimits(1,0,0);
   lineFit1113->Draw("same");
   
   Double_t -30.000000 ppm_fx1113[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1113[2] = {
   -2.359085,
   -1.884085};
   Double_t -30.000000 ppm_fex1113[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1113[2] = {
   0.015932,
   0.015932};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1113,-30.000000 ppm_fy1113,-30.000000 ppm_fex1113,-30.000000 ppm_fey1113);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(13);
   gre->SetMarkerColor(13);
   
   TH1F *Graph_Graph_mI30dO000000sPppm10791113 = new TH1F("Graph_Graph_mI30dO000000sPppm10791113","Graph",100,15.6,20.4);
   Graph_Graph_mI30dO000000sPppm10791113->SetMinimum(-2.425703);
   Graph_Graph_mI30dO000000sPppm10791113->SetMaximum(-1.817467);
   Graph_Graph_mI30dO000000sPppm10791113->SetDirectory(0);
   Graph_Graph_mI30dO000000sPppm10791113->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_mI30dO000000sPppm10791113->SetLineColor(ci);
   Graph_Graph_mI30dO000000sPppm10791113->GetXaxis()->SetLabelFont(42);
   Graph_Graph_mI30dO000000sPppm10791113->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_mI30dO000000sPppm10791113->GetXaxis()->SetTitleFont(42);
   Graph_Graph_mI30dO000000sPppm10791113->GetYaxis()->SetLabelFont(42);
   Graph_Graph_mI30dO000000sPppm10791113->GetYaxis()->SetTitleFont(42);
   Graph_Graph_mI30dO000000sPppm10791113->GetZaxis()->SetLabelFont(42);
   Graph_Graph_mI30dO000000sPppm10791113->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_mI30dO000000sPppm10791113->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_-30.000000 ppm10791113);
   
   
   TF1 *lineFit1114 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1114->SetFillColor(19);
   lineFit1114->SetFillStyle(0);
   lineFit1114->SetLineColor(13);
   lineFit1114->SetLineWidth(2);
   lineFit1114->SetChisquare(1.274218e-25);
   lineFit1114->SetNDF(0);
   lineFit1114->GetXaxis()->SetLabelFont(42);
   lineFit1114->GetXaxis()->SetTitleOffset(1);
   lineFit1114->GetXaxis()->SetTitleFont(42);
   lineFit1114->GetYaxis()->SetLabelFont(42);
   lineFit1114->GetYaxis()->SetTitleFont(42);
   lineFit1114->SetParameter(0,-4.259085);
   lineFit1114->SetParError(0,0.1020146);
   lineFit1114->SetParLimits(0,0,0);
   lineFit1114->SetParameter(1,0.11875);
   lineFit1114->SetParError(1,0.005632813);
   lineFit1114->SetParLimits(1,0,0);
   lineFit1114->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1114);
   gre->Draw("p ");
   
   TF1 *lineFit1115 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1115->SetFillColor(19);
   lineFit1115->SetFillStyle(0);
   lineFit1115->SetLineColor(13);
   lineFit1115->SetLineWidth(2);
   lineFit1115->SetChisquare(1.274218e-25);
   lineFit1115->SetNDF(0);
   lineFit1115->GetXaxis()->SetLabelFont(42);
   lineFit1115->GetXaxis()->SetTitleOffset(1);
   lineFit1115->GetXaxis()->SetTitleFont(42);
   lineFit1115->GetYaxis()->SetLabelFont(42);
   lineFit1115->GetYaxis()->SetTitleFont(42);
   lineFit1115->SetParameter(0,-4.259085);
   lineFit1115->SetParError(0,0.1020146);
   lineFit1115->SetParLimits(0,0,0);
   lineFit1115->SetParameter(1,0.11875);
   lineFit1115->SetParError(1,0.005632813);
   lineFit1115->SetParLimits(1,0,0);
   lineFit1115->Draw("same");
   
   Double_t -10.000000 ppm_fx1115[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1115[2] = {
   -1.109085,
   -0.884085};
   Double_t -10.000000 ppm_fex1115[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1115[2] = {
   0.015932,
   0.015932};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1115,-10.000000 ppm_fy1115,-10.000000 ppm_fex1115,-10.000000 ppm_fey1115);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(14);
   gre->SetMarkerColor(14);
   
   TH1F *Graph_Graph_mI10dO000000sPppm10811115 = new TH1F("Graph_Graph_mI10dO000000sPppm10811115","Graph",100,15.6,20.4);
   Graph_Graph_mI10dO000000sPppm10811115->SetMinimum(-1.150703);
   Graph_Graph_mI10dO000000sPppm10811115->SetMaximum(-0.8424666);
   Graph_Graph_mI10dO000000sPppm10811115->SetDirectory(0);
   Graph_Graph_mI10dO000000sPppm10811115->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_mI10dO000000sPppm10811115->SetLineColor(ci);
   Graph_Graph_mI10dO000000sPppm10811115->GetXaxis()->SetLabelFont(42);
   Graph_Graph_mI10dO000000sPppm10811115->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_mI10dO000000sPppm10811115->GetXaxis()->SetTitleFont(42);
   Graph_Graph_mI10dO000000sPppm10811115->GetYaxis()->SetLabelFont(42);
   Graph_Graph_mI10dO000000sPppm10811115->GetYaxis()->SetTitleFont(42);
   Graph_Graph_mI10dO000000sPppm10811115->GetZaxis()->SetLabelFont(42);
   Graph_Graph_mI10dO000000sPppm10811115->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_mI10dO000000sPppm10811115->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_-10.000000 ppm10811115);
   
   
   TF1 *lineFit1116 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1116->SetFillColor(19);
   lineFit1116->SetFillStyle(0);
   lineFit1116->SetLineColor(14);
   lineFit1116->SetLineWidth(2);
   lineFit1116->SetChisquare(1.214003e-27);
   lineFit1116->SetNDF(0);
   lineFit1116->GetXaxis()->SetLabelFont(42);
   lineFit1116->GetXaxis()->SetTitleOffset(1);
   lineFit1116->GetXaxis()->SetTitleFont(42);
   lineFit1116->GetYaxis()->SetLabelFont(42);
   lineFit1116->GetYaxis()->SetTitleFont(42);
   lineFit1116->SetParameter(0,-2.009085);
   lineFit1116->SetParError(0,0.1020146);
   lineFit1116->SetParLimits(0,0,0);
   lineFit1116->SetParameter(1,0.05625);
   lineFit1116->SetParError(1,0.005632813);
   lineFit1116->SetParLimits(1,0,0);
   lineFit1116->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1116);
   gre->Draw("p ");
   
   TF1 *lineFit1117 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1117->SetFillColor(19);
   lineFit1117->SetFillStyle(0);
   lineFit1117->SetLineColor(14);
   lineFit1117->SetLineWidth(2);
   lineFit1117->SetChisquare(1.214003e-27);
   lineFit1117->SetNDF(0);
   lineFit1117->GetXaxis()->SetLabelFont(42);
   lineFit1117->GetXaxis()->SetTitleOffset(1);
   lineFit1117->GetXaxis()->SetTitleFont(42);
   lineFit1117->GetYaxis()->SetLabelFont(42);
   lineFit1117->GetYaxis()->SetTitleFont(42);
   lineFit1117->SetParameter(0,-2.009085);
   lineFit1117->SetParError(0,0.1020146);
   lineFit1117->SetParLimits(0,0,0);
   lineFit1117->SetParameter(1,0.05625);
   lineFit1117->SetParError(1,0.005632813);
   lineFit1117->SetParLimits(1,0,0);
   lineFit1117->Draw("same");
   
   Double_t 10.000000 ppm_fx1117[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1117[2] = {
   0.140915,
   0.115915};
   Double_t 10.000000 ppm_fex1117[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1117[2] = {
   0.015932,
   0.015932};
   gre = new TGraphErrors(2,10.000000 ppm_fx1117,10.000000 ppm_fy1117,10.000000 ppm_fex1117,10.000000 ppm_fey1117);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(15);
   gre->SetMarkerColor(15);
   
   TH1F *Graph_Graph_10dO000000sPppm10831117 = new TH1F("Graph_Graph_10dO000000sPppm10831117","Graph",100,15.6,20.4);
   Graph_Graph_10dO000000sPppm10831117->SetMinimum(0.0942966);
   Graph_Graph_10dO000000sPppm10831117->SetMaximum(0.1625334);
   Graph_Graph_10dO000000sPppm10831117->SetDirectory(0);
   Graph_Graph_10dO000000sPppm10831117->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_10dO000000sPppm10831117->SetLineColor(ci);
   Graph_Graph_10dO000000sPppm10831117->GetXaxis()->SetLabelFont(42);
   Graph_Graph_10dO000000sPppm10831117->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_10dO000000sPppm10831117->GetXaxis()->SetTitleFont(42);
   Graph_Graph_10dO000000sPppm10831117->GetYaxis()->SetLabelFont(42);
   Graph_Graph_10dO000000sPppm10831117->GetYaxis()->SetTitleFont(42);
   Graph_Graph_10dO000000sPppm10831117->GetZaxis()->SetLabelFont(42);
   Graph_Graph_10dO000000sPppm10831117->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_10dO000000sPppm10831117->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_10.000000 ppm10831117);
   
   
   TF1 *lineFit1118 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1118->SetFillColor(19);
   lineFit1118->SetFillStyle(0);
   lineFit1118->SetLineColor(15);
   lineFit1118->SetLineWidth(2);
   lineFit1118->SetChisquare(5.463015e-29);
   lineFit1118->SetNDF(0);
   lineFit1118->GetXaxis()->SetLabelFont(42);
   lineFit1118->GetXaxis()->SetTitleOffset(1);
   lineFit1118->GetXaxis()->SetTitleFont(42);
   lineFit1118->GetYaxis()->SetLabelFont(42);
   lineFit1118->GetYaxis()->SetTitleFont(42);
   lineFit1118->SetParameter(0,0.240915);
   lineFit1118->SetParError(0,0.1020146);
   lineFit1118->SetParLimits(0,0,0);
   lineFit1118->SetParameter(1,-0.00625);
   lineFit1118->SetParError(1,0.005632813);
   lineFit1118->SetParLimits(1,0,0);
   lineFit1118->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1118);
   gre->Draw("p ");
   
   TF1 *lineFit1119 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1119->SetFillColor(19);
   lineFit1119->SetFillStyle(0);
   lineFit1119->SetLineColor(15);
   lineFit1119->SetLineWidth(2);
   lineFit1119->SetChisquare(5.463015e-29);
   lineFit1119->SetNDF(0);
   lineFit1119->GetXaxis()->SetLabelFont(42);
   lineFit1119->GetXaxis()->SetTitleOffset(1);
   lineFit1119->GetXaxis()->SetTitleFont(42);
   lineFit1119->GetYaxis()->SetLabelFont(42);
   lineFit1119->GetYaxis()->SetTitleFont(42);
   lineFit1119->SetParameter(0,0.240915);
   lineFit1119->SetParError(0,0.1020146);
   lineFit1119->SetParLimits(0,0,0);
   lineFit1119->SetParameter(1,-0.00625);
   lineFit1119->SetParError(1,0.005632813);
   lineFit1119->SetParLimits(1,0,0);
   lineFit1119->Draw("same");
   
   Double_t 30.000000 ppm_fx1119[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1119[2] = {
   1.390915,
   1.115915};
   Double_t 30.000000 ppm_fex1119[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1119[2] = {
   0.015932,
   0.015932};
   gre = new TGraphErrors(2,30.000000 ppm_fx1119,30.000000 ppm_fy1119,30.000000 ppm_fex1119,30.000000 ppm_fey1119);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(16);
   gre->SetMarkerColor(16);
   
   TH1F *Graph_Graph_30dO000000sPppm10851119 = new TH1F("Graph_Graph_30dO000000sPppm10851119","Graph",100,15.6,20.4);
   Graph_Graph_30dO000000sPppm10851119->SetMinimum(1.069297);
   Graph_Graph_30dO000000sPppm10851119->SetMaximum(1.437533);
   Graph_Graph_30dO000000sPppm10851119->SetDirectory(0);
   Graph_Graph_30dO000000sPppm10851119->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_30dO000000sPppm10851119->SetLineColor(ci);
   Graph_Graph_30dO000000sPppm10851119->GetXaxis()->SetLabelFont(42);
   Graph_Graph_30dO000000sPppm10851119->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_30dO000000sPppm10851119->GetXaxis()->SetTitleFont(42);
   Graph_Graph_30dO000000sPppm10851119->GetYaxis()->SetLabelFont(42);
   Graph_Graph_30dO000000sPppm10851119->GetYaxis()->SetTitleFont(42);
   Graph_Graph_30dO000000sPppm10851119->GetZaxis()->SetLabelFont(42);
   Graph_Graph_30dO000000sPppm10851119->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_30dO000000sPppm10851119->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_30.000000 ppm10851119);
   
   
   TF1 *lineFit1120 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1120->SetFillColor(19);
   lineFit1120->SetFillStyle(0);
   lineFit1120->SetLineColor(16);
   lineFit1120->SetLineWidth(2);
   lineFit1120->SetChisquare(8.779672e-26);
   lineFit1120->SetNDF(0);
   lineFit1120->GetXaxis()->SetLabelFont(42);
   lineFit1120->GetXaxis()->SetTitleOffset(1);
   lineFit1120->GetXaxis()->SetTitleFont(42);
   lineFit1120->GetYaxis()->SetLabelFont(42);
   lineFit1120->GetYaxis()->SetTitleFont(42);
   lineFit1120->SetParameter(0,2.490915);
   lineFit1120->SetParError(0,0.1020146);
   lineFit1120->SetParLimits(0,0,0);
   lineFit1120->SetParameter(1,-0.06875);
   lineFit1120->SetParError(1,0.005632813);
   lineFit1120->SetParLimits(1,0,0);
   lineFit1120->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1120);
   gre->Draw("p ");
   
   TF1 *lineFit1121 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1121->SetFillColor(19);
   lineFit1121->SetFillStyle(0);
   lineFit1121->SetLineColor(16);
   lineFit1121->SetLineWidth(2);
   lineFit1121->SetChisquare(8.779672e-26);
   lineFit1121->SetNDF(0);
   lineFit1121->GetXaxis()->SetLabelFont(42);
   lineFit1121->GetXaxis()->SetTitleOffset(1);
   lineFit1121->GetXaxis()->SetTitleFont(42);
   lineFit1121->GetYaxis()->SetLabelFont(42);
   lineFit1121->GetYaxis()->SetTitleFont(42);
   lineFit1121->SetParameter(0,2.490915);
   lineFit1121->SetParError(0,0.1020146);
   lineFit1121->SetParLimits(0,0,0);
   lineFit1121->SetParameter(1,-0.06875);
   lineFit1121->SetParError(1,0.005632813);
   lineFit1121->SetParLimits(1,0,0);
   lineFit1121->Draw("same");
   
   Double_t -30.000000 ppm_fx1121[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1121[2] = {
   -2.360165,
   -1.885165};
   Double_t -30.000000 ppm_fex1121[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1121[2] = {
   0.0148505,
   0.0148505};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1121,-30.000000 ppm_fy1121,-30.000000 ppm_fex1121,-30.000000 ppm_fey1121);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(17);
   gre->SetMarkerColor(17);
   
   TH1F *Graph_mI30dO000000sPppm1121 = new TH1F("Graph_mI30dO000000sPppm1121","Graph",100,15.6,20.4);
   Graph_mI30dO000000sPppm1121->SetMinimum(-2.425486);
   Graph_mI30dO000000sPppm1121->SetMaximum(-1.819845);
   Graph_mI30dO000000sPppm1121->SetDirectory(0);
   Graph_mI30dO000000sPppm1121->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1121->SetLineColor(ci);
   Graph_mI30dO000000sPppm1121->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1121->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1121->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1121->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1121->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1121->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1121->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1121);
   
   
   TF1 *lineFit1122 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1122->SetFillColor(19);
   lineFit1122->SetFillStyle(0);
   lineFit1122->SetLineColor(17);
   lineFit1122->SetLineWidth(2);
   lineFit1122->SetChisquare(9.803201e-25);
   lineFit1122->SetNDF(0);
   lineFit1122->GetXaxis()->SetLabelFont(42);
   lineFit1122->GetXaxis()->SetTitleOffset(1);
   lineFit1122->GetXaxis()->SetTitleFont(42);
   lineFit1122->GetYaxis()->SetLabelFont(42);
   lineFit1122->GetYaxis()->SetTitleFont(42);
   lineFit1122->SetParameter(0,-4.260165);
   lineFit1122->SetParError(0,0.0950896);
   lineFit1122->SetParLimits(0,0,0);
   lineFit1122->SetParameter(1,0.11875);
   lineFit1122->SetParError(1,0.005250445);
   lineFit1122->SetParLimits(1,0,0);
   lineFit1122->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1122);
   gre->Draw("p ");
   
   TF1 *lineFit1123 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1123->SetFillColor(19);
   lineFit1123->SetFillStyle(0);
   lineFit1123->SetLineColor(17);
   lineFit1123->SetLineWidth(2);
   lineFit1123->SetChisquare(9.803201e-25);
   lineFit1123->SetNDF(0);
   lineFit1123->GetXaxis()->SetLabelFont(42);
   lineFit1123->GetXaxis()->SetTitleOffset(1);
   lineFit1123->GetXaxis()->SetTitleFont(42);
   lineFit1123->GetYaxis()->SetLabelFont(42);
   lineFit1123->GetYaxis()->SetTitleFont(42);
   lineFit1123->SetParameter(0,-4.260165);
   lineFit1123->SetParError(0,0.0950896);
   lineFit1123->SetParLimits(0,0,0);
   lineFit1123->SetParameter(1,0.11875);
   lineFit1123->SetParError(1,0.005250445);
   lineFit1123->SetParLimits(1,0,0);
   lineFit1123->Draw("same");
   
   Double_t -10.000000 ppm_fx1123[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1123[2] = {
   -1.110165,
   -0.8851653};
   Double_t -10.000000 ppm_fex1123[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1123[2] = {
   0.0148505,
   0.0148505};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1123,-10.000000 ppm_fy1123,-10.000000 ppm_fex1123,-10.000000 ppm_fey1123);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(18);
   gre->SetMarkerColor(18);
   
   TH1F *Graph_mI10dO000000sPppm1123 = new TH1F("Graph_mI10dO000000sPppm1123","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1123->SetMinimum(-1.150486);
   Graph_mI10dO000000sPppm1123->SetMaximum(-0.8448447);
   Graph_mI10dO000000sPppm1123->SetDirectory(0);
   Graph_mI10dO000000sPppm1123->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1123->SetLineColor(ci);
   Graph_mI10dO000000sPppm1123->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1123->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1123->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1123->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1123->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1123->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1123->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1123);
   
   
   TF1 *lineFit1124 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1124->SetFillColor(19);
   lineFit1124->SetFillStyle(0);
   lineFit1124->SetLineColor(18);
   lineFit1124->SetLineWidth(2);
   lineFit1124->SetChisquare(1.632004e-25);
   lineFit1124->SetNDF(0);
   lineFit1124->GetXaxis()->SetLabelFont(42);
   lineFit1124->GetXaxis()->SetTitleOffset(1);
   lineFit1124->GetXaxis()->SetTitleFont(42);
   lineFit1124->GetYaxis()->SetLabelFont(42);
   lineFit1124->GetYaxis()->SetTitleFont(42);
   lineFit1124->SetParameter(0,-2.010165);
   lineFit1124->SetParError(0,0.0950896);
   lineFit1124->SetParLimits(0,0,0);
   lineFit1124->SetParameter(1,0.05625);
   lineFit1124->SetParError(1,0.005250445);
   lineFit1124->SetParLimits(1,0,0);
   lineFit1124->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1124);
   gre->Draw("p ");
   
   TF1 *lineFit1125 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1125->SetFillColor(19);
   lineFit1125->SetFillStyle(0);
   lineFit1125->SetLineColor(18);
   lineFit1125->SetLineWidth(2);
   lineFit1125->SetChisquare(1.632004e-25);
   lineFit1125->SetNDF(0);
   lineFit1125->GetXaxis()->SetLabelFont(42);
   lineFit1125->GetXaxis()->SetTitleOffset(1);
   lineFit1125->GetXaxis()->SetTitleFont(42);
   lineFit1125->GetYaxis()->SetLabelFont(42);
   lineFit1125->GetYaxis()->SetTitleFont(42);
   lineFit1125->SetParameter(0,-2.010165);
   lineFit1125->SetParError(0,0.0950896);
   lineFit1125->SetParLimits(0,0,0);
   lineFit1125->SetParameter(1,0.05625);
   lineFit1125->SetParError(1,0.005250445);
   lineFit1125->SetParLimits(1,0,0);
   lineFit1125->Draw("same");
   
   Double_t 10.000000 ppm_fx1125[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1125[2] = {
   0.1398347,
   0.1148347};
   Double_t 10.000000 ppm_fex1125[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1125[2] = {
   0.0148505,
   0.0148505};
   gre = new TGraphErrors(2,10.000000 ppm_fx1125,10.000000 ppm_fy1125,10.000000 ppm_fex1125,10.000000 ppm_fey1125);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(19);
   gre->SetMarkerColor(19);
   
   TH1F *Graph_10dO000000sPppm1125 = new TH1F("Graph_10dO000000sPppm1125","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1125->SetMinimum(0.09451405);
   Graph_10dO000000sPppm1125->SetMaximum(0.1601553);
   Graph_10dO000000sPppm1125->SetDirectory(0);
   Graph_10dO000000sPppm1125->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1125->SetLineColor(ci);
   Graph_10dO000000sPppm1125->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1125->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1125->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1125->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1125->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1125->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1125->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1125->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1125);
   
   
   TF1 *lineFit1126 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1126->SetFillColor(19);
   lineFit1126->SetFillStyle(0);
   lineFit1126->SetLineColor(19);
   lineFit1126->SetLineWidth(2);
   lineFit1126->SetChisquare(3.976088e-27);
   lineFit1126->SetNDF(0);
   lineFit1126->GetXaxis()->SetLabelFont(42);
   lineFit1126->GetXaxis()->SetTitleOffset(1);
   lineFit1126->GetXaxis()->SetTitleFont(42);
   lineFit1126->GetYaxis()->SetLabelFont(42);
   lineFit1126->GetYaxis()->SetTitleFont(42);
   lineFit1126->SetParameter(0,0.2398347);
   lineFit1126->SetParError(0,0.0950896);
   lineFit1126->SetParLimits(0,0,0);
   lineFit1126->SetParameter(1,-0.00625);
   lineFit1126->SetParError(1,0.005250445);
   lineFit1126->SetParLimits(1,0,0);
   lineFit1126->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1126);
   gre->Draw("p ");
   
   TF1 *lineFit1127 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1127->SetFillColor(19);
   lineFit1127->SetFillStyle(0);
   lineFit1127->SetLineColor(19);
   lineFit1127->SetLineWidth(2);
   lineFit1127->SetChisquare(3.976088e-27);
   lineFit1127->SetNDF(0);
   lineFit1127->GetXaxis()->SetLabelFont(42);
   lineFit1127->GetXaxis()->SetTitleOffset(1);
   lineFit1127->GetXaxis()->SetTitleFont(42);
   lineFit1127->GetYaxis()->SetLabelFont(42);
   lineFit1127->GetYaxis()->SetTitleFont(42);
   lineFit1127->SetParameter(0,0.2398347);
   lineFit1127->SetParError(0,0.0950896);
   lineFit1127->SetParLimits(0,0,0);
   lineFit1127->SetParameter(1,-0.00625);
   lineFit1127->SetParError(1,0.005250445);
   lineFit1127->SetParLimits(1,0,0);
   lineFit1127->Draw("same");
   
   Double_t 30.000000 ppm_fx1127[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1127[2] = {
   1.389835,
   1.114835};
   Double_t 30.000000 ppm_fex1127[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1127[2] = {
   0.0148505,
   0.0148505};
   gre = new TGraphErrors(2,30.000000 ppm_fx1127,30.000000 ppm_fy1127,30.000000 ppm_fex1127,30.000000 ppm_fey1127);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(20);
   gre->SetMarkerColor(20);
   
   TH1F *Graph_30dO000000sPppm1127 = new TH1F("Graph_30dO000000sPppm1127","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1127->SetMinimum(1.069514);
   Graph_30dO000000sPppm1127->SetMaximum(1.435155);
   Graph_30dO000000sPppm1127->SetDirectory(0);
   Graph_30dO000000sPppm1127->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1127->SetLineColor(ci);
   Graph_30dO000000sPppm1127->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1127->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1127->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1127->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1127->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1127->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1127->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1127->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1127);
   
   
   TF1 *lineFit1128 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1128->SetFillColor(19);
   lineFit1128->SetFillStyle(0);
   lineFit1128->SetLineColor(20);
   lineFit1128->SetLineWidth(2);
   lineFit1128->SetChisquare(1.379379e-25);
   lineFit1128->SetNDF(0);
   lineFit1128->GetXaxis()->SetLabelFont(42);
   lineFit1128->GetXaxis()->SetTitleOffset(1);
   lineFit1128->GetXaxis()->SetTitleFont(42);
   lineFit1128->GetYaxis()->SetLabelFont(42);
   lineFit1128->GetYaxis()->SetTitleFont(42);
   lineFit1128->SetParameter(0,2.489835);
   lineFit1128->SetParError(0,0.0950896);
   lineFit1128->SetParLimits(0,0,0);
   lineFit1128->SetParameter(1,-0.06875);
   lineFit1128->SetParError(1,0.005250445);
   lineFit1128->SetParLimits(1,0,0);
   lineFit1128->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1128);
   gre->Draw("p ");
   
   TF1 *lineFit1129 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1129->SetFillColor(19);
   lineFit1129->SetFillStyle(0);
   lineFit1129->SetLineColor(20);
   lineFit1129->SetLineWidth(2);
   lineFit1129->SetChisquare(1.379379e-25);
   lineFit1129->SetNDF(0);
   lineFit1129->GetXaxis()->SetLabelFont(42);
   lineFit1129->GetXaxis()->SetTitleOffset(1);
   lineFit1129->GetXaxis()->SetTitleFont(42);
   lineFit1129->GetYaxis()->SetLabelFont(42);
   lineFit1129->GetYaxis()->SetTitleFont(42);
   lineFit1129->SetParameter(0,2.489835);
   lineFit1129->SetParError(0,0.0950896);
   lineFit1129->SetParLimits(0,0,0);
   lineFit1129->SetParameter(1,-0.06875);
   lineFit1129->SetParError(1,0.005250445);
   lineFit1129->SetParLimits(1,0,0);
   lineFit1129->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("30.000000 ppm","1.47e-285 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(20);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(20);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","6.36e-272 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(19);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(19);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","1.94e-77 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(18);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(18);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","1.89e-307 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(17);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(17);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","2.06e-310 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(16);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(16);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","1.78e-312 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(15);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(15);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","#minus4.52e#minus87 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(14);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(14);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","2.21e-236 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(13);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(13);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","2.46e-299 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(12);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","3.04e-310 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(11);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(11);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","   20 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(10);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(10);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","   16 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(9);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(9);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","4.24e-312 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(8);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","3.18e-312 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(7);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(7);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","2.12e-312 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","1.06e-312 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(5);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30 ppm","lpf");
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
