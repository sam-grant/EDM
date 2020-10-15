void QuadScans_NSUBRUN_225_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:42:41 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1209[3] = {
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1209[3] = {
   -3.169252,
   -2.816212,
   -2.543731};
   Double_t -50.000000 ppm_fex1209[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1209[3] = {
   0.009828933,
   0.009828933,
   0.009828933};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1209,-50.000000 ppm_fy1209,-50.000000 ppm_fex1209,-50.000000 ppm_fey1209);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1209 = new TH1F("Graph_mI50dO000000sPppm1209","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1209->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1209->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1209->SetDirectory(0);
   Graph_mI50dO000000sPppm1209->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1209->SetLineColor(ci);
   Graph_mI50dO000000sPppm1209->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1209->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1209->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1209->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1209->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1209->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1209->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1209->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1209->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1209->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1209->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1209->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1209->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1209->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1209->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1209->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1209);
   
   
   TF1 *quadLineFit1210 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1210->SetFillColor(19);
   quadLineFit1210->SetFillStyle(0);
   quadLineFit1210->SetLineWidth(2);
   quadLineFit1210->SetChisquare(11.19595);
   quadLineFit1210->SetNDF(1);
   quadLineFit1210->GetXaxis()->SetLabelFont(42);
   quadLineFit1210->GetXaxis()->SetTitleOffset(1);
   quadLineFit1210->GetXaxis()->SetTitleFont(42);
   quadLineFit1210->GetYaxis()->SetLabelFont(42);
   quadLineFit1210->GetYaxis()->SetTitleFont(42);
   quadLineFit1210->SetParameter(0,-5.657906);
   quadLineFit1210->SetParError(0,0.06281088);
   quadLineFit1210->SetParLimits(0,0,0);
   quadLineFit1210->SetParameter(1,0.1563801);
   quadLineFit1210->SetParError(1,0.003475223);
   quadLineFit1210->SetParLimits(1,0,0);
   quadLineFit1210->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1210);
   gre->Draw("ap");
   
   TF1 *quadLineFit1211 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1211->SetFillColor(19);
   quadLineFit1211->SetFillStyle(0);
   quadLineFit1211->SetLineWidth(2);
   quadLineFit1211->SetChisquare(11.19595);
   quadLineFit1211->SetNDF(1);
   quadLineFit1211->GetXaxis()->SetLabelFont(42);
   quadLineFit1211->GetXaxis()->SetTitleOffset(1);
   quadLineFit1211->GetXaxis()->SetTitleFont(42);
   quadLineFit1211->GetYaxis()->SetLabelFont(42);
   quadLineFit1211->GetYaxis()->SetTitleFont(42);
   quadLineFit1211->SetParameter(0,-5.657906);
   quadLineFit1211->SetParError(0,0.06281088);
   quadLineFit1211->SetParLimits(0,0,0);
   quadLineFit1211->SetParameter(1,0.1563801);
   quadLineFit1211->SetParError(1,0.003475223);
   quadLineFit1211->SetParLimits(1,0,0);
   quadLineFit1211->Draw("same");
   
   Double_t -40.000000 ppm_fx1211[3] = {
   16,
   18,
   20};
   Double_t -40.000000 ppm_fy1211[3] = {
   -2.411715,
   -2.143827,
   -1.915132};
   Double_t -40.000000 ppm_fex1211[3] = {
   0,
   0,
   0};
   Double_t -40.000000 ppm_fey1211[3] = {
   0.009828933,
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(3,-40.000000 ppm_fx1211,-40.000000 ppm_fy1211,-40.000000 ppm_fex1211,-40.000000 ppm_fey1211);
   gre->SetName("-40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI40dO000000sPppm1211 = new TH1F("Graph_mI40dO000000sPppm1211","Graph",100,15.6,20.4);
   Graph_mI40dO000000sPppm1211->SetMinimum(-2.473168);
   Graph_mI40dO000000sPppm1211->SetMaximum(-1.853679);
   Graph_mI40dO000000sPppm1211->SetDirectory(0);
   Graph_mI40dO000000sPppm1211->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI40dO000000sPppm1211->SetLineColor(ci);
   Graph_mI40dO000000sPppm1211->GetXaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1211->GetXaxis()->SetTitleOffset(1);
   Graph_mI40dO000000sPppm1211->GetXaxis()->SetTitleFont(42);
   Graph_mI40dO000000sPppm1211->GetYaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1211->GetYaxis()->SetTitleFont(42);
   Graph_mI40dO000000sPppm1211->GetZaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1211->GetZaxis()->SetTitleOffset(1);
   Graph_mI40dO000000sPppm1211->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-40.000000 ppm1211);
   
   
   TF1 *quadLineFit1212 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1212->SetFillColor(19);
   quadLineFit1212->SetFillStyle(0);
   quadLineFit1212->SetLineColor(2);
   quadLineFit1212->SetLineWidth(2);
   quadLineFit1212->SetChisquare(2.650059);
   quadLineFit1212->SetNDF(1);
   quadLineFit1212->GetXaxis()->SetLabelFont(42);
   quadLineFit1212->GetXaxis()->SetTitleOffset(1);
   quadLineFit1212->GetXaxis()->SetTitleFont(42);
   quadLineFit1212->GetYaxis()->SetLabelFont(42);
   quadLineFit1212->GetYaxis()->SetTitleFont(42);
   quadLineFit1212->SetParameter(0,-4.391514);
   quadLineFit1212->SetParError(0,0.06280685);
   quadLineFit1212->SetParLimits(0,0,0);
   quadLineFit1212->SetParameter(1,0.1241457);
   quadLineFit1212->SetParError(1,0.003474998);
   quadLineFit1212->SetParLimits(1,0,0);
   quadLineFit1212->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1212);
   gre->Draw("p ");
   
   TF1 *quadLineFit1213 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1213->SetFillColor(19);
   quadLineFit1213->SetFillStyle(0);
   quadLineFit1213->SetLineColor(2);
   quadLineFit1213->SetLineWidth(2);
   quadLineFit1213->SetChisquare(2.650059);
   quadLineFit1213->SetNDF(1);
   quadLineFit1213->GetXaxis()->SetLabelFont(42);
   quadLineFit1213->GetXaxis()->SetTitleOffset(1);
   quadLineFit1213->GetXaxis()->SetTitleFont(42);
   quadLineFit1213->GetYaxis()->SetLabelFont(42);
   quadLineFit1213->GetYaxis()->SetTitleFont(42);
   quadLineFit1213->SetParameter(0,-4.391514);
   quadLineFit1213->SetParError(0,0.06280685);
   quadLineFit1213->SetParLimits(0,0,0);
   quadLineFit1213->SetParameter(1,0.1241457);
   quadLineFit1213->SetParError(1,0.003474998);
   quadLineFit1213->SetParLimits(1,0,0);
   quadLineFit1213->Draw("same");
   
   Double_t -30.000000 ppm_fx1213[3] = {
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1213[3] = {
   -1.657527,
   -1.47298,
   -1.314867};
   Double_t -30.000000 ppm_fex1213[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1213[3] = {
   0.009828933,
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(3,-30.000000 ppm_fx1213,-30.000000 ppm_fy1213,-30.000000 ppm_fex1213,-30.000000 ppm_fey1213);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_mI30dO000000sPppm1213 = new TH1F("Graph_mI30dO000000sPppm1213","Graph",100,15.6,20.4);
   Graph_mI30dO000000sPppm1213->SetMinimum(-1.703587);
   Graph_mI30dO000000sPppm1213->SetMaximum(-1.268807);
   Graph_mI30dO000000sPppm1213->SetDirectory(0);
   Graph_mI30dO000000sPppm1213->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1213->SetLineColor(ci);
   Graph_mI30dO000000sPppm1213->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1213->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1213->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1213->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1213->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1213->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1213->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1213->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1213);
   
   
   TF1 *quadLineFit1214 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1214->SetFillColor(19);
   quadLineFit1214->SetFillStyle(0);
   quadLineFit1214->SetLineColor(3);
   quadLineFit1214->SetLineWidth(2);
   quadLineFit1214->SetChisquare(1.205436);
   quadLineFit1214->SetNDF(1);
   quadLineFit1214->GetXaxis()->SetLabelFont(42);
   quadLineFit1214->GetXaxis()->SetTitleOffset(1);
   quadLineFit1214->GetXaxis()->SetTitleFont(42);
   quadLineFit1214->GetYaxis()->SetLabelFont(42);
   quadLineFit1214->GetYaxis()->SetTitleFont(42);
   quadLineFit1214->SetParameter(0,-3.023758);
   quadLineFit1214->SetParError(0,0.06280645);
   quadLineFit1214->SetParLimits(0,0,0);
   quadLineFit1214->SetParameter(1,0.08566482);
   quadLineFit1214->SetParError(1,0.003474976);
   quadLineFit1214->SetParLimits(1,0,0);
   quadLineFit1214->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1214);
   gre->Draw("p ");
   
   TF1 *quadLineFit1215 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1215->SetFillColor(19);
   quadLineFit1215->SetFillStyle(0);
   quadLineFit1215->SetLineColor(3);
   quadLineFit1215->SetLineWidth(2);
   quadLineFit1215->SetChisquare(1.205436);
   quadLineFit1215->SetNDF(1);
   quadLineFit1215->GetXaxis()->SetLabelFont(42);
   quadLineFit1215->GetXaxis()->SetTitleOffset(1);
   quadLineFit1215->GetXaxis()->SetTitleFont(42);
   quadLineFit1215->GetYaxis()->SetLabelFont(42);
   quadLineFit1215->GetYaxis()->SetTitleFont(42);
   quadLineFit1215->SetParameter(0,-3.023758);
   quadLineFit1215->SetParError(0,0.06280645);
   quadLineFit1215->SetParLimits(0,0,0);
   quadLineFit1215->SetParameter(1,0.08566482);
   quadLineFit1215->SetParError(1,0.003474976);
   quadLineFit1215->SetParLimits(1,0,0);
   quadLineFit1215->Draw("same");
   
   Double_t -20.000000 ppm_fx1215[3] = {
   16,
   18,
   20};
   Double_t -20.000000 ppm_fy1215[3] = {
   -0.8925577,
   -0.8178592,
   -0.7272901};
   Double_t -20.000000 ppm_fex1215[3] = {
   0,
   0,
   0};
   Double_t -20.000000 ppm_fey1215[3] = {
   0.009828933,
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(3,-20.000000 ppm_fx1215,-20.000000 ppm_fy1215,-20.000000 ppm_fex1215,-20.000000 ppm_fey1215);
   gre->SetName("-20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_mI20dO000000sPppm1215 = new TH1F("Graph_mI20dO000000sPppm1215","Graph",100,15.6,20.4);
   Graph_mI20dO000000sPppm1215->SetMinimum(-0.9208791);
   Graph_mI20dO000000sPppm1215->SetMaximum(-0.6989686);
   Graph_mI20dO000000sPppm1215->SetDirectory(0);
   Graph_mI20dO000000sPppm1215->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI20dO000000sPppm1215->SetLineColor(ci);
   Graph_mI20dO000000sPppm1215->GetXaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1215->GetXaxis()->SetTitleOffset(1);
   Graph_mI20dO000000sPppm1215->GetXaxis()->SetTitleFont(42);
   Graph_mI20dO000000sPppm1215->GetYaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1215->GetYaxis()->SetTitleFont(42);
   Graph_mI20dO000000sPppm1215->GetZaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1215->GetZaxis()->SetTitleOffset(1);
   Graph_mI20dO000000sPppm1215->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-20.000000 ppm1215);
   
   
   TF1 *quadLineFit1216 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1216->SetFillColor(19);
   quadLineFit1216->SetFillStyle(0);
   quadLineFit1216->SetLineColor(4);
   quadLineFit1216->SetLineWidth(2);
   quadLineFit1216->SetChisquare(0.434541);
   quadLineFit1216->SetNDF(1);
   quadLineFit1216->GetXaxis()->SetLabelFont(42);
   quadLineFit1216->GetXaxis()->SetTitleOffset(1);
   quadLineFit1216->GetXaxis()->SetTitleFont(42);
   quadLineFit1216->GetYaxis()->SetLabelFont(42);
   quadLineFit1216->GetYaxis()->SetTitleFont(42);
   quadLineFit1216->SetParameter(0,-1.556273);
   quadLineFit1216->SetParError(0,0.06280659);
   quadLineFit1216->SetParLimits(0,0,0);
   quadLineFit1216->SetParameter(1,0.04131689);
   quadLineFit1216->SetParError(1,0.003474983);
   quadLineFit1216->SetParLimits(1,0,0);
   quadLineFit1216->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1216);
   gre->Draw("p ");
   
   TF1 *quadLineFit1217 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1217->SetFillColor(19);
   quadLineFit1217->SetFillStyle(0);
   quadLineFit1217->SetLineColor(4);
   quadLineFit1217->SetLineWidth(2);
   quadLineFit1217->SetChisquare(0.434541);
   quadLineFit1217->SetNDF(1);
   quadLineFit1217->GetXaxis()->SetLabelFont(42);
   quadLineFit1217->GetXaxis()->SetTitleOffset(1);
   quadLineFit1217->GetXaxis()->SetTitleFont(42);
   quadLineFit1217->GetYaxis()->SetLabelFont(42);
   quadLineFit1217->GetYaxis()->SetTitleFont(42);
   quadLineFit1217->SetParameter(0,-1.556273);
   quadLineFit1217->SetParError(0,0.06280659);
   quadLineFit1217->SetParLimits(0,0,0);
   quadLineFit1217->SetParameter(1,0.04131689);
   quadLineFit1217->SetParError(1,0.003474983);
   quadLineFit1217->SetParLimits(1,0,0);
   quadLineFit1217->Draw("same");
   
   Double_t -10.000000 ppm_fx1217[3] = {
   16,
   18,
   20};
   Double_t -10.000000 ppm_fy1217[3] = {
   -0.1347562,
   -0.1216909,
   -0.1224399};
   Double_t -10.000000 ppm_fex1217[3] = {
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1217[3] = {
   0.009828933,
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(3,-10.000000 ppm_fx1217,-10.000000 ppm_fy1217,-10.000000 ppm_fex1217,-10.000000 ppm_fey1217);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_mI10dO000000sPppm1217 = new TH1F("Graph_mI10dO000000sPppm1217","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1217->SetMinimum(-0.1478574);
   Graph_mI10dO000000sPppm1217->SetMaximum(-0.1085897);
   Graph_mI10dO000000sPppm1217->SetDirectory(0);
   Graph_mI10dO000000sPppm1217->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1217->SetLineColor(ci);
   Graph_mI10dO000000sPppm1217->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1217->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1217->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1217->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1217->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1217->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1217->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1217->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1217);
   
   
   TF1 *quadLineFit1218 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1218->SetFillColor(19);
   quadLineFit1218->SetFillStyle(0);
   quadLineFit1218->SetLineColor(5);
   quadLineFit1218->SetLineWidth(2);
   quadLineFit1218->SetChisquare(0.3292248);
   quadLineFit1218->SetNDF(1);
   quadLineFit1218->GetXaxis()->SetLabelFont(42);
   quadLineFit1218->GetXaxis()->SetTitleOffset(1);
   quadLineFit1218->GetXaxis()->SetTitleFont(42);
   quadLineFit1218->GetYaxis()->SetLabelFont(42);
   quadLineFit1218->GetYaxis()->SetTitleFont(42);
   quadLineFit1218->SetParameter(0,-0.181719);
   quadLineFit1218->SetParError(0,0.06280816);
   quadLineFit1218->SetParLimits(0,0,0);
   quadLineFit1218->SetParameter(1,0.003079074);
   quadLineFit1218->SetParError(1,0.003475071);
   quadLineFit1218->SetParLimits(1,0,0);
   quadLineFit1218->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1218);
   gre->Draw("p ");
   
   TF1 *quadLineFit1219 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1219->SetFillColor(19);
   quadLineFit1219->SetFillStyle(0);
   quadLineFit1219->SetLineColor(5);
   quadLineFit1219->SetLineWidth(2);
   quadLineFit1219->SetChisquare(0.3292248);
   quadLineFit1219->SetNDF(1);
   quadLineFit1219->GetXaxis()->SetLabelFont(42);
   quadLineFit1219->GetXaxis()->SetTitleOffset(1);
   quadLineFit1219->GetXaxis()->SetTitleFont(42);
   quadLineFit1219->GetYaxis()->SetLabelFont(42);
   quadLineFit1219->GetYaxis()->SetTitleFont(42);
   quadLineFit1219->SetParameter(0,-0.181719);
   quadLineFit1219->SetParError(0,0.06280816);
   quadLineFit1219->SetParLimits(0,0,0);
   quadLineFit1219->SetParameter(1,0.003079074);
   quadLineFit1219->SetParError(1,0.003475071);
   quadLineFit1219->SetParLimits(1,0,0);
   quadLineFit1219->Draw("same");
   
   Double_t 0.000000 ppm_fx1219[3] = {
   16,
   18,
   20};
   Double_t 0.000000 ppm_fy1219[3] = {
   0.5962402,
   0.5399819,
   0.4752183};
   Double_t 0.000000 ppm_fex1219[3] = {
   0,
   0,
   0};
   Double_t 0.000000 ppm_fey1219[3] = {
   0.009828933,
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(3,0.000000 ppm_fx1219,0.000000 ppm_fy1219,0.000000 ppm_fex1219,0.000000 ppm_fey1219);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_0dO000000sPppm1219 = new TH1F("Graph_0dO000000sPppm1219","Graph",100,15.6,20.4);
   Graph_0dO000000sPppm1219->SetMinimum(0.4513214);
   Graph_0dO000000sPppm1219->SetMaximum(0.6201371);
   Graph_0dO000000sPppm1219->SetDirectory(0);
   Graph_0dO000000sPppm1219->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1219->SetLineColor(ci);
   Graph_0dO000000sPppm1219->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1219->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1219->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1219->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1219->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1219->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1219->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1219->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1219);
   
   
   TF1 *quadLineFit1220 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1220->SetFillColor(19);
   quadLineFit1220->SetFillStyle(0);
   quadLineFit1220->SetLineColor(6);
   quadLineFit1220->SetLineWidth(2);
   quadLineFit1220->SetChisquare(0.1247978);
   quadLineFit1220->SetNDF(1);
   quadLineFit1220->GetXaxis()->SetLabelFont(42);
   quadLineFit1220->GetXaxis()->SetTitleOffset(1);
   quadLineFit1220->GetXaxis()->SetTitleFont(42);
   quadLineFit1220->GetYaxis()->SetLabelFont(42);
   quadLineFit1220->GetYaxis()->SetTitleFont(42);
   quadLineFit1220->SetParameter(0,1.081745);
   quadLineFit1220->SetParError(0,0.0628067);
   quadLineFit1220->SetParLimits(0,0,0);
   quadLineFit1220->SetParameter(1,-0.03025547);
   quadLineFit1220->SetParError(1,0.00347499);
   quadLineFit1220->SetParLimits(1,0,0);
   quadLineFit1220->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1220);
   gre->Draw("p ");
   
   TF1 *quadLineFit1221 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1221->SetFillColor(19);
   quadLineFit1221->SetFillStyle(0);
   quadLineFit1221->SetLineColor(6);
   quadLineFit1221->SetLineWidth(2);
   quadLineFit1221->SetChisquare(0.1247978);
   quadLineFit1221->SetNDF(1);
   quadLineFit1221->GetXaxis()->SetLabelFont(42);
   quadLineFit1221->GetXaxis()->SetTitleOffset(1);
   quadLineFit1221->GetXaxis()->SetTitleFont(42);
   quadLineFit1221->GetYaxis()->SetLabelFont(42);
   quadLineFit1221->GetYaxis()->SetTitleFont(42);
   quadLineFit1221->SetParameter(0,1.081745);
   quadLineFit1221->SetParError(0,0.0628067);
   quadLineFit1221->SetParLimits(0,0,0);
   quadLineFit1221->SetParameter(1,-0.03025547);
   quadLineFit1221->SetParError(1,0.00347499);
   quadLineFit1221->SetParLimits(1,0,0);
   quadLineFit1221->Draw("same");
   
   Double_t 10.000000 ppm_fx1221[3] = {
   16,
   18,
   20};
   Double_t 10.000000 ppm_fy1221[3] = {
   1.365967,
   1.220161,
   1.088579};
   Double_t 10.000000 ppm_fex1221[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1221[3] = {
   0.009828933,
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(3,10.000000 ppm_fx1221,10.000000 ppm_fy1221,10.000000 ppm_fex1221,10.000000 ppm_fey1221);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(7);
   gre->SetMarkerColor(7);
   
   TH1F *Graph_10dO000000sPppm1221 = new TH1F("Graph_10dO000000sPppm1221","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1221->SetMinimum(1.049046);
   Graph_10dO000000sPppm1221->SetMaximum(1.4055);
   Graph_10dO000000sPppm1221->SetDirectory(0);
   Graph_10dO000000sPppm1221->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1221->SetLineColor(ci);
   Graph_10dO000000sPppm1221->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1221->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1221->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1221->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1221->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1221->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1221->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1221->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1221);
   
   
   TF1 *quadLineFit1222 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1222->SetFillColor(19);
   quadLineFit1222->SetFillStyle(0);
   quadLineFit1222->SetLineColor(7);
   quadLineFit1222->SetLineWidth(2);
   quadLineFit1222->SetChisquare(0.3490335);
   quadLineFit1222->SetNDF(1);
   quadLineFit1222->GetXaxis()->SetLabelFont(42);
   quadLineFit1222->GetXaxis()->SetTitleOffset(1);
   quadLineFit1222->GetXaxis()->SetTitleFont(42);
   quadLineFit1222->GetYaxis()->SetLabelFont(42);
   quadLineFit1222->GetYaxis()->SetTitleFont(42);
   quadLineFit1222->SetParameter(0,2.473146);
   quadLineFit1222->SetParError(0,0.0628078);
   quadLineFit1222->SetParLimits(0,0,0);
   quadLineFit1222->SetParameter(1,-0.06934686);
   quadLineFit1222->SetParError(1,0.003475051);
   quadLineFit1222->SetParLimits(1,0,0);
   quadLineFit1222->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1222);
   gre->Draw("p ");
   
   TF1 *quadLineFit1223 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1223->SetFillColor(19);
   quadLineFit1223->SetFillStyle(0);
   quadLineFit1223->SetLineColor(7);
   quadLineFit1223->SetLineWidth(2);
   quadLineFit1223->SetChisquare(0.3490335);
   quadLineFit1223->SetNDF(1);
   quadLineFit1223->GetXaxis()->SetLabelFont(42);
   quadLineFit1223->GetXaxis()->SetTitleOffset(1);
   quadLineFit1223->GetXaxis()->SetTitleFont(42);
   quadLineFit1223->GetYaxis()->SetLabelFont(42);
   quadLineFit1223->GetYaxis()->SetTitleFont(42);
   quadLineFit1223->SetParameter(0,2.473146);
   quadLineFit1223->SetParError(0,0.0628078);
   quadLineFit1223->SetParLimits(0,0,0);
   quadLineFit1223->SetParameter(1,-0.06934686);
   quadLineFit1223->SetParError(1,0.003475051);
   quadLineFit1223->SetParLimits(1,0,0);
   quadLineFit1223->Draw("same");
   
   Double_t 20.000000 ppm_fx1223[3] = {
   16,
   18,
   20};
   Double_t 20.000000 ppm_fy1223[3] = {
   2.10207,
   1.862516,
   1.67899};
   Double_t 20.000000 ppm_fex1223[3] = {
   0,
   0,
   0};
   Double_t 20.000000 ppm_fey1223[3] = {
   0.009828933,
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(3,20.000000 ppm_fx1223,20.000000 ppm_fy1223,20.000000 ppm_fex1223,20.000000 ppm_fey1223);
   gre->SetName("20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   
   TH1F *Graph_20dO000000sPppm1223 = new TH1F("Graph_20dO000000sPppm1223","Graph",100,15.6,20.4);
   Graph_20dO000000sPppm1223->SetMinimum(1.624887);
   Graph_20dO000000sPppm1223->SetMaximum(2.156173);
   Graph_20dO000000sPppm1223->SetDirectory(0);
   Graph_20dO000000sPppm1223->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_20dO000000sPppm1223->SetLineColor(ci);
   Graph_20dO000000sPppm1223->GetXaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1223->GetXaxis()->SetTitleOffset(1);
   Graph_20dO000000sPppm1223->GetXaxis()->SetTitleFont(42);
   Graph_20dO000000sPppm1223->GetYaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1223->GetYaxis()->SetTitleFont(42);
   Graph_20dO000000sPppm1223->GetZaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1223->GetZaxis()->SetTitleOffset(1);
   Graph_20dO000000sPppm1223->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_20.000000 ppm1223);
   
   
   TF1 *quadLineFit1224 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1224->SetFillColor(19);
   quadLineFit1224->SetFillStyle(0);
   quadLineFit1224->SetLineColor(8);
   quadLineFit1224->SetLineWidth(2);
   quadLineFit1224->SetChisquare(5.415751);
   quadLineFit1224->SetNDF(1);
   quadLineFit1224->GetXaxis()->SetLabelFont(42);
   quadLineFit1224->GetXaxis()->SetTitleOffset(1);
   quadLineFit1224->GetXaxis()->SetTitleFont(42);
   quadLineFit1224->GetYaxis()->SetLabelFont(42);
   quadLineFit1224->GetYaxis()->SetTitleFont(42);
   quadLineFit1224->SetParameter(0,3.785052);
   quadLineFit1224->SetParError(0,0.0628078);
   quadLineFit1224->SetParLimits(0,0,0);
   quadLineFit1224->SetParameter(1,-0.10577);
   quadLineFit1224->SetParError(1,0.003475051);
   quadLineFit1224->SetParLimits(1,0,0);
   quadLineFit1224->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1224);
   gre->Draw("p ");
   
   TF1 *quadLineFit1225 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1225->SetFillColor(19);
   quadLineFit1225->SetFillStyle(0);
   quadLineFit1225->SetLineColor(8);
   quadLineFit1225->SetLineWidth(2);
   quadLineFit1225->SetChisquare(5.415751);
   quadLineFit1225->SetNDF(1);
   quadLineFit1225->GetXaxis()->SetLabelFont(42);
   quadLineFit1225->GetXaxis()->SetTitleOffset(1);
   quadLineFit1225->GetXaxis()->SetTitleFont(42);
   quadLineFit1225->GetYaxis()->SetLabelFont(42);
   quadLineFit1225->GetYaxis()->SetTitleFont(42);
   quadLineFit1225->SetParameter(0,3.785052);
   quadLineFit1225->SetParError(0,0.0628078);
   quadLineFit1225->SetParLimits(0,0,0);
   quadLineFit1225->SetParameter(1,-0.10577);
   quadLineFit1225->SetParError(1,0.003475051);
   quadLineFit1225->SetParLimits(1,0,0);
   quadLineFit1225->Draw("same");
   
   Double_t 30.000000 ppm_fx1225[3] = {
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1225[3] = {
   2.869542,
   2.548766,
   2.303429};
   Double_t 30.000000 ppm_fex1225[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1225[3] = {
   0.009828933,
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(3,30.000000 ppm_fx1225,30.000000 ppm_fy1225,30.000000 ppm_fex1225,30.000000 ppm_fey1225);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(9);
   gre->SetMarkerColor(9);
   
   TH1F *Graph_30dO000000sPppm1225 = new TH1F("Graph_30dO000000sPppm1225","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1225->SetMinimum(2.235024);
   Graph_30dO000000sPppm1225->SetMaximum(2.937948);
   Graph_30dO000000sPppm1225->SetDirectory(0);
   Graph_30dO000000sPppm1225->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1225->SetLineColor(ci);
   Graph_30dO000000sPppm1225->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1225->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1225->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1225->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1225->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1225->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1225->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1225->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1225);
   
   
   TF1 *quadLineFit1226 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1226->SetFillColor(19);
   quadLineFit1226->SetFillStyle(0);
   quadLineFit1226->SetLineColor(9);
   quadLineFit1226->SetLineWidth(2);
   quadLineFit1226->SetChisquare(9.818125);
   quadLineFit1226->SetNDF(1);
   quadLineFit1226->GetXaxis()->SetLabelFont(42);
   quadLineFit1226->GetXaxis()->SetTitleOffset(1);
   quadLineFit1226->GetXaxis()->SetTitleFont(42);
   quadLineFit1226->GetYaxis()->SetLabelFont(42);
   quadLineFit1226->GetYaxis()->SetTitleFont(42);
   quadLineFit1226->SetParameter(0,5.121417);
   quadLineFit1226->SetParError(0,0.0628066);
   quadLineFit1226->SetParLimits(0,0,0);
   quadLineFit1226->SetParameter(1,-0.141528);
   quadLineFit1226->SetParError(1,0.003474984);
   quadLineFit1226->SetParLimits(1,0,0);
   quadLineFit1226->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1226);
   gre->Draw("p ");
   
   TF1 *quadLineFit1227 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1227->SetFillColor(19);
   quadLineFit1227->SetFillStyle(0);
   quadLineFit1227->SetLineColor(9);
   quadLineFit1227->SetLineWidth(2);
   quadLineFit1227->SetChisquare(9.818125);
   quadLineFit1227->SetNDF(1);
   quadLineFit1227->GetXaxis()->SetLabelFont(42);
   quadLineFit1227->GetXaxis()->SetTitleOffset(1);
   quadLineFit1227->GetXaxis()->SetTitleFont(42);
   quadLineFit1227->GetYaxis()->SetLabelFont(42);
   quadLineFit1227->GetYaxis()->SetTitleFont(42);
   quadLineFit1227->SetParameter(0,5.121417);
   quadLineFit1227->SetParError(0,0.0628066);
   quadLineFit1227->SetParLimits(0,0,0);
   quadLineFit1227->SetParameter(1,-0.141528);
   quadLineFit1227->SetParError(1,0.003474984);
   quadLineFit1227->SetParLimits(1,0,0);
   quadLineFit1227->Draw("same");
   
   Double_t 40.000000 ppm_fx1227[3] = {
   16,
   18,
   20};
   Double_t 40.000000 ppm_fy1227[3] = {
   3.594785,
   3.235254,
   2.904929};
   Double_t 40.000000 ppm_fex1227[3] = {
   0,
   0,
   0};
   Double_t 40.000000 ppm_fey1227[3] = {
   0.009828933,
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(3,40.000000 ppm_fx1227,40.000000 ppm_fy1227,40.000000 ppm_fex1227,40.000000 ppm_fey1227);
   gre->SetName("40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(10);
   gre->SetMarkerColor(10);
   
   TH1F *Graph_40dO000000sPppm1227 = new TH1F("Graph_40dO000000sPppm1227","Graph",100,15.6,20.4);
   Graph_40dO000000sPppm1227->SetMinimum(2.824149);
   Graph_40dO000000sPppm1227->SetMaximum(3.675565);
   Graph_40dO000000sPppm1227->SetDirectory(0);
   Graph_40dO000000sPppm1227->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_40dO000000sPppm1227->SetLineColor(ci);
   Graph_40dO000000sPppm1227->GetXaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1227->GetXaxis()->SetTitleOffset(1);
   Graph_40dO000000sPppm1227->GetXaxis()->SetTitleFont(42);
   Graph_40dO000000sPppm1227->GetYaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1227->GetYaxis()->SetTitleFont(42);
   Graph_40dO000000sPppm1227->GetZaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1227->GetZaxis()->SetTitleOffset(1);
   Graph_40dO000000sPppm1227->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_40.000000 ppm1227);
   
   
   TF1 *quadLineFit1228 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1228->SetFillColor(19);
   quadLineFit1228->SetFillStyle(0);
   quadLineFit1228->SetLineColor(10);
   quadLineFit1228->SetLineWidth(2);
   quadLineFit1228->SetChisquare(1.471546);
   quadLineFit1228->SetNDF(1);
   quadLineFit1228->GetXaxis()->SetLabelFont(42);
   quadLineFit1228->GetXaxis()->SetTitleOffset(1);
   quadLineFit1228->GetXaxis()->SetTitleFont(42);
   quadLineFit1228->GetYaxis()->SetLabelFont(42);
   quadLineFit1228->GetYaxis()->SetTitleFont(42);
   quadLineFit1228->SetParameter(0,6.349342);
   quadLineFit1228->SetParError(0,0.06280784);
   quadLineFit1228->SetParLimits(0,0,0);
   quadLineFit1228->SetParameter(1,-0.172464);
   quadLineFit1228->SetParError(1,0.003475053);
   quadLineFit1228->SetParLimits(1,0,0);
   quadLineFit1228->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1228);
   gre->Draw("p ");
   
   TF1 *quadLineFit1229 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1229->SetFillColor(19);
   quadLineFit1229->SetFillStyle(0);
   quadLineFit1229->SetLineColor(10);
   quadLineFit1229->SetLineWidth(2);
   quadLineFit1229->SetChisquare(1.471546);
   quadLineFit1229->SetNDF(1);
   quadLineFit1229->GetXaxis()->SetLabelFont(42);
   quadLineFit1229->GetXaxis()->SetTitleOffset(1);
   quadLineFit1229->GetXaxis()->SetTitleFont(42);
   quadLineFit1229->GetYaxis()->SetLabelFont(42);
   quadLineFit1229->GetYaxis()->SetTitleFont(42);
   quadLineFit1229->SetParameter(0,6.349342);
   quadLineFit1229->SetParError(0,0.06280784);
   quadLineFit1229->SetParLimits(0,0,0);
   quadLineFit1229->SetParameter(1,-0.172464);
   quadLineFit1229->SetParError(1,0.003475053);
   quadLineFit1229->SetParLimits(1,0,0);
   quadLineFit1229->Draw("same");
   
   Double_t 50.000000 ppm_fx1229[3] = {
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1229[3] = {
   4.397081,
   3.891103,
   3.496868};
   Double_t 50.000000 ppm_fex1229[3] = {
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1229[3] = {
   0.009828933,
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(3,50.000000 ppm_fx1229,50.000000 ppm_fy1229,50.000000 ppm_fex1229,50.000000 ppm_fey1229);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(11);
   gre->SetMarkerColor(11);
   
   TH1F *Graph_50dO000000sPppm1229 = new TH1F("Graph_50dO000000sPppm1229","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1229->SetMinimum(3.395052);
   Graph_50dO000000sPppm1229->SetMaximum(4.498897);
   Graph_50dO000000sPppm1229->SetDirectory(0);
   Graph_50dO000000sPppm1229->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1229->SetLineColor(ci);
   Graph_50dO000000sPppm1229->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1229->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1229->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1229->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1229->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1229->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1229->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1229->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1229);
   
   
   TF1 *quadLineFit1230 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1230->SetFillColor(19);
   quadLineFit1230->SetFillStyle(0);
   quadLineFit1230->SetLineColor(11);
   quadLineFit1230->SetLineWidth(2);
   quadLineFit1230->SetChisquare(21.54184);
   quadLineFit1230->SetNDF(1);
   quadLineFit1230->GetXaxis()->SetLabelFont(42);
   quadLineFit1230->GetXaxis()->SetTitleOffset(1);
   quadLineFit1230->GetXaxis()->SetTitleFont(42);
   quadLineFit1230->GetYaxis()->SetLabelFont(42);
   quadLineFit1230->GetYaxis()->SetTitleFont(42);
   quadLineFit1230->SetParameter(0,7.979313);
   quadLineFit1230->SetParError(0,0.06280506);
   quadLineFit1230->SetParLimits(0,0,0);
   quadLineFit1230->SetParameter(1,-0.2250534);
   quadLineFit1230->SetParError(1,0.0034749);
   quadLineFit1230->SetParLimits(1,0,0);
   quadLineFit1230->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1230);
   gre->Draw("p ");
   
   TF1 *quadLineFit1231 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1231->SetFillColor(19);
   quadLineFit1231->SetFillStyle(0);
   quadLineFit1231->SetLineColor(11);
   quadLineFit1231->SetLineWidth(2);
   quadLineFit1231->SetChisquare(21.54184);
   quadLineFit1231->SetNDF(1);
   quadLineFit1231->GetXaxis()->SetLabelFont(42);
   quadLineFit1231->GetXaxis()->SetTitleOffset(1);
   quadLineFit1231->GetXaxis()->SetTitleFont(42);
   quadLineFit1231->GetYaxis()->SetLabelFont(42);
   quadLineFit1231->GetYaxis()->SetTitleFont(42);
   quadLineFit1231->SetParameter(0,7.979313);
   quadLineFit1231->SetParError(0,0.06280506);
   quadLineFit1231->SetParLimits(0,0,0);
   quadLineFit1231->SetParameter(1,-0.2250534);
   quadLineFit1231->SetParError(1,0.0034749);
   quadLineFit1231->SetParLimits(1,0,0);
   quadLineFit1231->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("50.000000 ppm","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(11);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(11);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("40.000000 ppm","   40 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(10);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(10);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(9);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(9);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("20.000000 ppm","   20 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(8);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(7);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(7);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("0.000000 ppm","    0 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(5);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-20.000000 ppm","  #minus20 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-40.000000 ppm","  #minus40 ppm","lpf");
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
