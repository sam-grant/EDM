void QuadScans_NSUBRUN_325_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:40:00 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1313[2] = {
   16,
   20};
   Double_t -50.000000 ppm_fy1313[2] = {
   -3.16826,
   -2.534295};
   Double_t -50.000000 ppm_fex1313[2] = {
   0,
   0};
   Double_t -50.000000 ppm_fey1313[2] = {
   0.008174905,
   0.008174905};
   TGraphErrors *gre = new TGraphErrors(2,-50.000000 ppm_fx1313,-50.000000 ppm_fy1313,-50.000000 ppm_fex1313,-50.000000 ppm_fey1313);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1313 = new TH1F("Graph_mI50dO000000sPppm1313","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1313->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1313->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1313->SetDirectory(0);
   Graph_mI50dO000000sPppm1313->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1313->SetLineColor(ci);
   Graph_mI50dO000000sPppm1313->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1313->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1313->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1313->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1313->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1313->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1313->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1313->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1313->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1313->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1313->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1313->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1313->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1313->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1313->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1313->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1313);
   
   
   TF1 *quadLineFit1314 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1314->SetFillColor(19);
   quadLineFit1314->SetFillStyle(0);
   quadLineFit1314->SetLineWidth(2);
   quadLineFit1314->SetChisquare(1.048588e-17);
   quadLineFit1314->SetNDF(0);
   quadLineFit1314->GetXaxis()->SetLabelFont(42);
   quadLineFit1314->GetXaxis()->SetTitleOffset(1);
   quadLineFit1314->GetXaxis()->SetTitleFont(42);
   quadLineFit1314->GetYaxis()->SetLabelFont(42);
   quadLineFit1314->GetYaxis()->SetTitleFont(42);
   quadLineFit1314->SetParameter(0,-5.704121);
   quadLineFit1314->SetParError(0,0.05234493);
   quadLineFit1314->SetParLimits(0,0,0);
   quadLineFit1314->SetParameter(1,0.1584913);
   quadLineFit1314->SetParError(1,0.002890265);
   quadLineFit1314->SetParLimits(1,0,0);
   quadLineFit1314->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1314);
   gre->Draw("ap");
   
   TF1 *quadLineFit1315 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1315->SetFillColor(19);
   quadLineFit1315->SetFillStyle(0);
   quadLineFit1315->SetLineWidth(2);
   quadLineFit1315->SetChisquare(1.048588e-17);
   quadLineFit1315->SetNDF(0);
   quadLineFit1315->GetXaxis()->SetLabelFont(42);
   quadLineFit1315->GetXaxis()->SetTitleOffset(1);
   quadLineFit1315->GetXaxis()->SetTitleFont(42);
   quadLineFit1315->GetYaxis()->SetLabelFont(42);
   quadLineFit1315->GetYaxis()->SetTitleFont(42);
   quadLineFit1315->SetParameter(0,-5.704121);
   quadLineFit1315->SetParError(0,0.05234493);
   quadLineFit1315->SetParLimits(0,0,0);
   quadLineFit1315->SetParameter(1,0.1584913);
   quadLineFit1315->SetParError(1,0.002890265);
   quadLineFit1315->SetParLimits(1,0,0);
   quadLineFit1315->Draw("same");
   
   Double_t -40.000000 ppm_fx1315[2] = {
   16,
   20};
   Double_t -40.000000 ppm_fy1315[2] = {
   -2.421027,
   -1.929421};
   Double_t -40.000000 ppm_fex1315[2] = {
   0,
   0};
   Double_t -40.000000 ppm_fey1315[2] = {
   0.008174905,
   0.008174905};
   gre = new TGraphErrors(2,-40.000000 ppm_fx1315,-40.000000 ppm_fy1315,-40.000000 ppm_fex1315,-40.000000 ppm_fey1315);
   gre->SetName("-40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI40dO000000sPppm1315 = new TH1F("Graph_mI40dO000000sPppm1315","Graph",100,15.6,20.4);
   Graph_mI40dO000000sPppm1315->SetMinimum(-2.479998);
   Graph_mI40dO000000sPppm1315->SetMaximum(-1.87045);
   Graph_mI40dO000000sPppm1315->SetDirectory(0);
   Graph_mI40dO000000sPppm1315->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI40dO000000sPppm1315->SetLineColor(ci);
   Graph_mI40dO000000sPppm1315->GetXaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1315->GetXaxis()->SetTitleOffset(1);
   Graph_mI40dO000000sPppm1315->GetXaxis()->SetTitleFont(42);
   Graph_mI40dO000000sPppm1315->GetYaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1315->GetYaxis()->SetTitleFont(42);
   Graph_mI40dO000000sPppm1315->GetZaxis()->SetLabelFont(42);
   Graph_mI40dO000000sPppm1315->GetZaxis()->SetTitleOffset(1);
   Graph_mI40dO000000sPppm1315->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-40.000000 ppm1315);
   
   
   TF1 *quadLineFit1316 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1316->SetFillColor(19);
   quadLineFit1316->SetFillStyle(0);
   quadLineFit1316->SetLineColor(2);
   quadLineFit1316->SetLineWidth(2);
   quadLineFit1316->SetChisquare(6.671698e-20);
   quadLineFit1316->SetNDF(0);
   quadLineFit1316->GetXaxis()->SetLabelFont(42);
   quadLineFit1316->GetXaxis()->SetTitleOffset(1);
   quadLineFit1316->GetXaxis()->SetTitleFont(42);
   quadLineFit1316->GetYaxis()->SetLabelFont(42);
   quadLineFit1316->GetYaxis()->SetTitleFont(42);
   quadLineFit1316->SetParameter(0,-4.387453);
   quadLineFit1316->SetParError(0,0.05234493);
   quadLineFit1316->SetParLimits(0,0,0);
   quadLineFit1316->SetParameter(1,0.1229016);
   quadLineFit1316->SetParError(1,0.002890265);
   quadLineFit1316->SetParLimits(1,0,0);
   quadLineFit1316->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1316);
   gre->Draw("p ");
   
   TF1 *quadLineFit1317 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1317->SetFillColor(19);
   quadLineFit1317->SetFillStyle(0);
   quadLineFit1317->SetLineColor(2);
   quadLineFit1317->SetLineWidth(2);
   quadLineFit1317->SetChisquare(6.671698e-20);
   quadLineFit1317->SetNDF(0);
   quadLineFit1317->GetXaxis()->SetLabelFont(42);
   quadLineFit1317->GetXaxis()->SetTitleOffset(1);
   quadLineFit1317->GetXaxis()->SetTitleFont(42);
   quadLineFit1317->GetYaxis()->SetLabelFont(42);
   quadLineFit1317->GetYaxis()->SetTitleFont(42);
   quadLineFit1317->SetParameter(0,-4.387453);
   quadLineFit1317->SetParError(0,0.05234493);
   quadLineFit1317->SetParLimits(0,0,0);
   quadLineFit1317->SetParameter(1,0.1229016);
   quadLineFit1317->SetParError(1,0.002890265);
   quadLineFit1317->SetParLimits(1,0,0);
   quadLineFit1317->Draw("same");
   
   Double_t -30.000000 ppm_fx1317[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1317[2] = {
   -1.658201,
   -1.314777};
   Double_t -30.000000 ppm_fex1317[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1317[2] = {
   0.008174905,
   0.008174905};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1317,-30.000000 ppm_fy1317,-30.000000 ppm_fex1317,-30.000000 ppm_fey1317);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_mI30dO000000sPppm1317 = new TH1F("Graph_mI30dO000000sPppm1317","Graph",100,15.6,20.4);
   Graph_mI30dO000000sPppm1317->SetMinimum(-1.702353);
   Graph_mI30dO000000sPppm1317->SetMaximum(-1.270625);
   Graph_mI30dO000000sPppm1317->SetDirectory(0);
   Graph_mI30dO000000sPppm1317->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1317->SetLineColor(ci);
   Graph_mI30dO000000sPppm1317->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1317->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1317->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1317->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1317->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1317->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1317->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1317->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1317);
   
   
   TF1 *quadLineFit1318 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1318->SetFillColor(19);
   quadLineFit1318->SetFillStyle(0);
   quadLineFit1318->SetLineColor(3);
   quadLineFit1318->SetLineWidth(2);
   quadLineFit1318->SetChisquare(1.485713e-21);
   quadLineFit1318->SetNDF(0);
   quadLineFit1318->GetXaxis()->SetLabelFont(42);
   quadLineFit1318->GetXaxis()->SetTitleOffset(1);
   quadLineFit1318->GetXaxis()->SetTitleFont(42);
   quadLineFit1318->GetYaxis()->SetLabelFont(42);
   quadLineFit1318->GetYaxis()->SetTitleFont(42);
   quadLineFit1318->SetParameter(0,-3.031894);
   quadLineFit1318->SetParError(0,0.05234493);
   quadLineFit1318->SetParLimits(0,0,0);
   quadLineFit1318->SetParameter(1,0.08585586);
   quadLineFit1318->SetParError(1,0.002890265);
   quadLineFit1318->SetParLimits(1,0,0);
   quadLineFit1318->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1318);
   gre->Draw("p ");
   
   TF1 *quadLineFit1319 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1319->SetFillColor(19);
   quadLineFit1319->SetFillStyle(0);
   quadLineFit1319->SetLineColor(3);
   quadLineFit1319->SetLineWidth(2);
   quadLineFit1319->SetChisquare(1.485713e-21);
   quadLineFit1319->SetNDF(0);
   quadLineFit1319->GetXaxis()->SetLabelFont(42);
   quadLineFit1319->GetXaxis()->SetTitleOffset(1);
   quadLineFit1319->GetXaxis()->SetTitleFont(42);
   quadLineFit1319->GetYaxis()->SetLabelFont(42);
   quadLineFit1319->GetYaxis()->SetTitleFont(42);
   quadLineFit1319->SetParameter(0,-3.031894);
   quadLineFit1319->SetParError(0,0.05234493);
   quadLineFit1319->SetParLimits(0,0,0);
   quadLineFit1319->SetParameter(1,0.08585586);
   quadLineFit1319->SetParError(1,0.002890265);
   quadLineFit1319->SetParLimits(1,0,0);
   quadLineFit1319->Draw("same");
   
   Double_t -20.000000 ppm_fx1319[2] = {
   16,
   20};
   Double_t -20.000000 ppm_fy1319[2] = {
   -0.904257,
   -0.7231314};
   Double_t -20.000000 ppm_fex1319[2] = {
   0,
   0};
   Double_t -20.000000 ppm_fey1319[2] = {
   0.008174905,
   0.008174905};
   gre = new TGraphErrors(2,-20.000000 ppm_fx1319,-20.000000 ppm_fy1319,-20.000000 ppm_fex1319,-20.000000 ppm_fey1319);
   gre->SetName("-20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_mI20dO000000sPppm1319 = new TH1F("Graph_mI20dO000000sPppm1319","Graph",100,15.6,20.4);
   Graph_mI20dO000000sPppm1319->SetMinimum(-0.9321795);
   Graph_mI20dO000000sPppm1319->SetMaximum(-0.695209);
   Graph_mI20dO000000sPppm1319->SetDirectory(0);
   Graph_mI20dO000000sPppm1319->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI20dO000000sPppm1319->SetLineColor(ci);
   Graph_mI20dO000000sPppm1319->GetXaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1319->GetXaxis()->SetTitleOffset(1);
   Graph_mI20dO000000sPppm1319->GetXaxis()->SetTitleFont(42);
   Graph_mI20dO000000sPppm1319->GetYaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1319->GetYaxis()->SetTitleFont(42);
   Graph_mI20dO000000sPppm1319->GetZaxis()->SetLabelFont(42);
   Graph_mI20dO000000sPppm1319->GetZaxis()->SetTitleOffset(1);
   Graph_mI20dO000000sPppm1319->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-20.000000 ppm1319);
   
   
   TF1 *quadLineFit1320 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1320->SetFillColor(19);
   quadLineFit1320->SetFillStyle(0);
   quadLineFit1320->SetLineColor(4);
   quadLineFit1320->SetLineWidth(2);
   quadLineFit1320->SetChisquare(5.585901e-20);
   quadLineFit1320->SetNDF(0);
   quadLineFit1320->GetXaxis()->SetLabelFont(42);
   quadLineFit1320->GetXaxis()->SetTitleOffset(1);
   quadLineFit1320->GetXaxis()->SetTitleFont(42);
   quadLineFit1320->GetYaxis()->SetLabelFont(42);
   quadLineFit1320->GetYaxis()->SetTitleFont(42);
   quadLineFit1320->SetParameter(0,-1.628759);
   quadLineFit1320->SetParError(0,0.05234493);
   quadLineFit1320->SetParLimits(0,0,0);
   quadLineFit1320->SetParameter(1,0.0452814);
   quadLineFit1320->SetParError(1,0.002890265);
   quadLineFit1320->SetParLimits(1,0,0);
   quadLineFit1320->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1320);
   gre->Draw("p ");
   
   TF1 *quadLineFit1321 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1321->SetFillColor(19);
   quadLineFit1321->SetFillStyle(0);
   quadLineFit1321->SetLineColor(4);
   quadLineFit1321->SetLineWidth(2);
   quadLineFit1321->SetChisquare(5.585901e-20);
   quadLineFit1321->SetNDF(0);
   quadLineFit1321->GetXaxis()->SetLabelFont(42);
   quadLineFit1321->GetXaxis()->SetTitleOffset(1);
   quadLineFit1321->GetXaxis()->SetTitleFont(42);
   quadLineFit1321->GetYaxis()->SetLabelFont(42);
   quadLineFit1321->GetYaxis()->SetTitleFont(42);
   quadLineFit1321->SetParameter(0,-1.628759);
   quadLineFit1321->SetParError(0,0.05234493);
   quadLineFit1321->SetParLimits(0,0,0);
   quadLineFit1321->SetParameter(1,0.0452814);
   quadLineFit1321->SetParError(1,0.002890265);
   quadLineFit1321->SetParLimits(1,0,0);
   quadLineFit1321->Draw("same");
   
   Double_t -10.000000 ppm_fx1321[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1321[2] = {
   -0.1417114,
   -0.1111446};
   Double_t -10.000000 ppm_fex1321[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1321[2] = {
   0.008174905,
   0.008174905};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1321,-10.000000 ppm_fy1321,-10.000000 ppm_fex1321,-10.000000 ppm_fey1321);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_mI10dO000000sPppm1321 = new TH1F("Graph_mI10dO000000sPppm1321","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1321->SetMinimum(-0.154578);
   Graph_mI10dO000000sPppm1321->SetMaximum(-0.09827798);
   Graph_mI10dO000000sPppm1321->SetDirectory(0);
   Graph_mI10dO000000sPppm1321->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1321->SetLineColor(ci);
   Graph_mI10dO000000sPppm1321->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1321->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1321->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1321->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1321->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1321->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1321->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1321->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1321);
   
   
   TF1 *quadLineFit1322 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1322->SetFillColor(19);
   quadLineFit1322->SetFillStyle(0);
   quadLineFit1322->SetLineColor(5);
   quadLineFit1322->SetLineWidth(2);
   quadLineFit1322->SetChisquare(1.154791e-21);
   quadLineFit1322->SetNDF(0);
   quadLineFit1322->GetXaxis()->SetLabelFont(42);
   quadLineFit1322->GetXaxis()->SetTitleOffset(1);
   quadLineFit1322->GetXaxis()->SetTitleFont(42);
   quadLineFit1322->GetYaxis()->SetLabelFont(42);
   quadLineFit1322->GetYaxis()->SetTitleFont(42);
   quadLineFit1322->SetParameter(0,-0.263979);
   quadLineFit1322->SetParError(0,0.05234493);
   quadLineFit1322->SetParLimits(0,0,0);
   quadLineFit1322->SetParameter(1,0.007641722);
   quadLineFit1322->SetParError(1,0.002890265);
   quadLineFit1322->SetParLimits(1,0,0);
   quadLineFit1322->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1322);
   gre->Draw("p ");
   
   TF1 *quadLineFit1323 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1323->SetFillColor(19);
   quadLineFit1323->SetFillStyle(0);
   quadLineFit1323->SetLineColor(5);
   quadLineFit1323->SetLineWidth(2);
   quadLineFit1323->SetChisquare(1.154791e-21);
   quadLineFit1323->SetNDF(0);
   quadLineFit1323->GetXaxis()->SetLabelFont(42);
   quadLineFit1323->GetXaxis()->SetTitleOffset(1);
   quadLineFit1323->GetXaxis()->SetTitleFont(42);
   quadLineFit1323->GetYaxis()->SetLabelFont(42);
   quadLineFit1323->GetYaxis()->SetTitleFont(42);
   quadLineFit1323->SetParameter(0,-0.263979);
   quadLineFit1323->SetParError(0,0.05234493);
   quadLineFit1323->SetParLimits(0,0,0);
   quadLineFit1323->SetParameter(1,0.007641722);
   quadLineFit1323->SetParError(1,0.002890265);
   quadLineFit1323->SetParLimits(1,0,0);
   quadLineFit1323->Draw("same");
   
   Double_t 0.000000 ppm_fx1323[2] = {
   16,
   20};
   Double_t 0.000000 ppm_fy1323[2] = {
   0.5905123,
   0.4785118};
   Double_t 0.000000 ppm_fex1323[2] = {
   0,
   0};
   Double_t 0.000000 ppm_fey1323[2] = {
   0.008174905,
   0.008174905};
   gre = new TGraphErrors(2,0.000000 ppm_fx1323,0.000000 ppm_fy1323,0.000000 ppm_fex1323,0.000000 ppm_fey1323);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_0dO000000sPppm1323 = new TH1F("Graph_0dO000000sPppm1323","Graph",100,15.6,20.4);
   Graph_0dO000000sPppm1323->SetMinimum(0.4575018);
   Graph_0dO000000sPppm1323->SetMaximum(0.6115222);
   Graph_0dO000000sPppm1323->SetDirectory(0);
   Graph_0dO000000sPppm1323->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1323->SetLineColor(ci);
   Graph_0dO000000sPppm1323->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1323->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1323->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1323->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1323->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1323->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1323->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1323->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1323);
   
   
   TF1 *quadLineFit1324 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1324->SetFillColor(19);
   quadLineFit1324->SetFillStyle(0);
   quadLineFit1324->SetLineColor(6);
   quadLineFit1324->SetLineWidth(2);
   quadLineFit1324->SetChisquare(1.877011e-22);
   quadLineFit1324->SetNDF(0);
   quadLineFit1324->GetXaxis()->SetLabelFont(42);
   quadLineFit1324->GetXaxis()->SetTitleOffset(1);
   quadLineFit1324->GetXaxis()->SetTitleFont(42);
   quadLineFit1324->GetYaxis()->SetLabelFont(42);
   quadLineFit1324->GetYaxis()->SetTitleFont(42);
   quadLineFit1324->SetParameter(0,1.038514);
   quadLineFit1324->SetParError(0,0.05234493);
   quadLineFit1324->SetParLimits(0,0,0);
   quadLineFit1324->SetParameter(1,-0.02800012);
   quadLineFit1324->SetParError(1,0.002890265);
   quadLineFit1324->SetParLimits(1,0,0);
   quadLineFit1324->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1324);
   gre->Draw("p ");
   
   TF1 *quadLineFit1325 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1325->SetFillColor(19);
   quadLineFit1325->SetFillStyle(0);
   quadLineFit1325->SetLineColor(6);
   quadLineFit1325->SetLineWidth(2);
   quadLineFit1325->SetChisquare(1.877011e-22);
   quadLineFit1325->SetNDF(0);
   quadLineFit1325->GetXaxis()->SetLabelFont(42);
   quadLineFit1325->GetXaxis()->SetTitleOffset(1);
   quadLineFit1325->GetXaxis()->SetTitleFont(42);
   quadLineFit1325->GetYaxis()->SetLabelFont(42);
   quadLineFit1325->GetYaxis()->SetTitleFont(42);
   quadLineFit1325->SetParameter(0,1.038514);
   quadLineFit1325->SetParError(0,0.05234493);
   quadLineFit1325->SetParLimits(0,0,0);
   quadLineFit1325->SetParameter(1,-0.02800012);
   quadLineFit1325->SetParError(1,0.002890265);
   quadLineFit1325->SetParLimits(1,0,0);
   quadLineFit1325->Draw("same");
   
   Double_t 10.000000 ppm_fx1325[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1325[2] = {
   1.368933,
   1.094734};
   Double_t 10.000000 ppm_fex1325[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1325[2] = {
   0.008174905,
   0.008174905};
   gre = new TGraphErrors(2,10.000000 ppm_fx1325,10.000000 ppm_fy1325,10.000000 ppm_fex1325,10.000000 ppm_fey1325);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(7);
   gre->SetMarkerColor(7);
   
   TH1F *Graph_10dO000000sPppm1325 = new TH1F("Graph_10dO000000sPppm1325","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1325->SetMinimum(1.057504);
   Graph_10dO000000sPppm1325->SetMaximum(1.406162);
   Graph_10dO000000sPppm1325->SetDirectory(0);
   Graph_10dO000000sPppm1325->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1325->SetLineColor(ci);
   Graph_10dO000000sPppm1325->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1325->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1325->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1325->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1325->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1325->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1325->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1325->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1325);
   
   
   TF1 *quadLineFit1326 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1326->SetFillColor(19);
   quadLineFit1326->SetFillStyle(0);
   quadLineFit1326->SetLineColor(7);
   quadLineFit1326->SetLineWidth(2);
   quadLineFit1326->SetChisquare(2.062457e-18);
   quadLineFit1326->SetNDF(0);
   quadLineFit1326->GetXaxis()->SetLabelFont(42);
   quadLineFit1326->GetXaxis()->SetTitleOffset(1);
   quadLineFit1326->GetXaxis()->SetTitleFont(42);
   quadLineFit1326->GetYaxis()->SetLabelFont(42);
   quadLineFit1326->GetYaxis()->SetTitleFont(42);
   quadLineFit1326->SetParameter(0,2.465729);
   quadLineFit1326->SetParError(0,0.05234493);
   quadLineFit1326->SetParLimits(0,0,0);
   quadLineFit1326->SetParameter(1,-0.06854978);
   quadLineFit1326->SetParError(1,0.002890265);
   quadLineFit1326->SetParLimits(1,0,0);
   quadLineFit1326->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1326);
   gre->Draw("p ");
   
   TF1 *quadLineFit1327 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1327->SetFillColor(19);
   quadLineFit1327->SetFillStyle(0);
   quadLineFit1327->SetLineColor(7);
   quadLineFit1327->SetLineWidth(2);
   quadLineFit1327->SetChisquare(2.062457e-18);
   quadLineFit1327->SetNDF(0);
   quadLineFit1327->GetXaxis()->SetLabelFont(42);
   quadLineFit1327->GetXaxis()->SetTitleOffset(1);
   quadLineFit1327->GetXaxis()->SetTitleFont(42);
   quadLineFit1327->GetYaxis()->SetLabelFont(42);
   quadLineFit1327->GetYaxis()->SetTitleFont(42);
   quadLineFit1327->SetParameter(0,2.465729);
   quadLineFit1327->SetParError(0,0.05234493);
   quadLineFit1327->SetParLimits(0,0,0);
   quadLineFit1327->SetParameter(1,-0.06854978);
   quadLineFit1327->SetParError(1,0.002890265);
   quadLineFit1327->SetParLimits(1,0,0);
   quadLineFit1327->Draw("same");
   
   Double_t 20.000000 ppm_fx1327[2] = {
   16,
   20};
   Double_t 20.000000 ppm_fy1327[2] = {
   2.107299,
   1.681881};
   Double_t 20.000000 ppm_fex1327[2] = {
   0,
   0};
   Double_t 20.000000 ppm_fey1327[2] = {
   0.008174905,
   0.008174905};
   gre = new TGraphErrors(2,20.000000 ppm_fx1327,20.000000 ppm_fy1327,20.000000 ppm_fex1327,20.000000 ppm_fey1327);
   gre->SetName("20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   
   TH1F *Graph_20dO000000sPppm1327 = new TH1F("Graph_20dO000000sPppm1327","Graph",100,15.6,20.4);
   Graph_20dO000000sPppm1327->SetMinimum(1.629529);
   Graph_20dO000000sPppm1327->SetMaximum(2.159651);
   Graph_20dO000000sPppm1327->SetDirectory(0);
   Graph_20dO000000sPppm1327->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_20dO000000sPppm1327->SetLineColor(ci);
   Graph_20dO000000sPppm1327->GetXaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1327->GetXaxis()->SetTitleOffset(1);
   Graph_20dO000000sPppm1327->GetXaxis()->SetTitleFont(42);
   Graph_20dO000000sPppm1327->GetYaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1327->GetYaxis()->SetTitleFont(42);
   Graph_20dO000000sPppm1327->GetZaxis()->SetLabelFont(42);
   Graph_20dO000000sPppm1327->GetZaxis()->SetTitleOffset(1);
   Graph_20dO000000sPppm1327->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_20.000000 ppm1327);
   
   
   TF1 *quadLineFit1328 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1328->SetFillColor(19);
   quadLineFit1328->SetFillStyle(0);
   quadLineFit1328->SetLineColor(8);
   quadLineFit1328->SetLineWidth(2);
   quadLineFit1328->SetChisquare(6.317983e-19);
   quadLineFit1328->SetNDF(0);
   quadLineFit1328->GetXaxis()->SetLabelFont(42);
   quadLineFit1328->GetXaxis()->SetTitleOffset(1);
   quadLineFit1328->GetXaxis()->SetTitleFont(42);
   quadLineFit1328->GetYaxis()->SetLabelFont(42);
   quadLineFit1328->GetYaxis()->SetTitleFont(42);
   quadLineFit1328->SetParameter(0,3.808973);
   quadLineFit1328->SetParError(0,0.05234493);
   quadLineFit1328->SetParLimits(0,0,0);
   quadLineFit1328->SetParameter(1,-0.1063546);
   quadLineFit1328->SetParError(1,0.002890265);
   quadLineFit1328->SetParLimits(1,0,0);
   quadLineFit1328->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1328);
   gre->Draw("p ");
   
   TF1 *quadLineFit1329 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1329->SetFillColor(19);
   quadLineFit1329->SetFillStyle(0);
   quadLineFit1329->SetLineColor(8);
   quadLineFit1329->SetLineWidth(2);
   quadLineFit1329->SetChisquare(6.317983e-19);
   quadLineFit1329->SetNDF(0);
   quadLineFit1329->GetXaxis()->SetLabelFont(42);
   quadLineFit1329->GetXaxis()->SetTitleOffset(1);
   quadLineFit1329->GetXaxis()->SetTitleFont(42);
   quadLineFit1329->GetYaxis()->SetLabelFont(42);
   quadLineFit1329->GetYaxis()->SetTitleFont(42);
   quadLineFit1329->SetParameter(0,3.808973);
   quadLineFit1329->SetParError(0,0.05234493);
   quadLineFit1329->SetParLimits(0,0,0);
   quadLineFit1329->SetParameter(1,-0.1063546);
   quadLineFit1329->SetParError(1,0.002890265);
   quadLineFit1329->SetParLimits(1,0,0);
   quadLineFit1329->Draw("same");
   
   Double_t 30.000000 ppm_fx1329[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1329[2] = {
   2.865735,
   2.283999};
   Double_t 30.000000 ppm_fex1329[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1329[2] = {
   0.008174905,
   0.008174905};
   gre = new TGraphErrors(2,30.000000 ppm_fx1329,30.000000 ppm_fy1329,30.000000 ppm_fex1329,30.000000 ppm_fey1329);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(9);
   gre->SetMarkerColor(9);
   
   TH1F *Graph_30dO000000sPppm1329 = new TH1F("Graph_30dO000000sPppm1329","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1329->SetMinimum(2.216015);
   Graph_30dO000000sPppm1329->SetMaximum(2.933718);
   Graph_30dO000000sPppm1329->SetDirectory(0);
   Graph_30dO000000sPppm1329->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1329->SetLineColor(ci);
   Graph_30dO000000sPppm1329->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1329->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1329->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1329->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1329->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1329->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1329->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1329->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1329);
   
   
   TF1 *quadLineFit1330 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1330->SetFillColor(19);
   quadLineFit1330->SetFillStyle(0);
   quadLineFit1330->SetLineColor(9);
   quadLineFit1330->SetLineWidth(2);
   quadLineFit1330->SetChisquare(1.167111e-20);
   quadLineFit1330->SetNDF(0);
   quadLineFit1330->GetXaxis()->SetLabelFont(42);
   quadLineFit1330->GetXaxis()->SetTitleOffset(1);
   quadLineFit1330->GetXaxis()->SetTitleFont(42);
   quadLineFit1330->GetYaxis()->SetLabelFont(42);
   quadLineFit1330->GetYaxis()->SetTitleFont(42);
   quadLineFit1330->SetParameter(0,5.192678);
   quadLineFit1330->SetParError(0,0.05234493);
   quadLineFit1330->SetParLimits(0,0,0);
   quadLineFit1330->SetParameter(1,-0.145434);
   quadLineFit1330->SetParError(1,0.002890265);
   quadLineFit1330->SetParLimits(1,0,0);
   quadLineFit1330->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1330);
   gre->Draw("p ");
   
   TF1 *quadLineFit1331 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1331->SetFillColor(19);
   quadLineFit1331->SetFillStyle(0);
   quadLineFit1331->SetLineColor(9);
   quadLineFit1331->SetLineWidth(2);
   quadLineFit1331->SetChisquare(1.167111e-20);
   quadLineFit1331->SetNDF(0);
   quadLineFit1331->GetXaxis()->SetLabelFont(42);
   quadLineFit1331->GetXaxis()->SetTitleOffset(1);
   quadLineFit1331->GetXaxis()->SetTitleFont(42);
   quadLineFit1331->GetYaxis()->SetLabelFont(42);
   quadLineFit1331->GetYaxis()->SetTitleFont(42);
   quadLineFit1331->SetParameter(0,5.192678);
   quadLineFit1331->SetParError(0,0.05234493);
   quadLineFit1331->SetParLimits(0,0,0);
   quadLineFit1331->SetParameter(1,-0.145434);
   quadLineFit1331->SetParError(1,0.002890265);
   quadLineFit1331->SetParLimits(1,0,0);
   quadLineFit1331->Draw("same");
   
   Double_t 40.000000 ppm_fx1331[2] = {
   16,
   20};
   Double_t 40.000000 ppm_fy1331[2] = {
   3.623785,
   2.904749};
   Double_t 40.000000 ppm_fex1331[2] = {
   0,
   0};
   Double_t 40.000000 ppm_fey1331[2] = {
   0.008174905,
   0.008174905};
   gre = new TGraphErrors(2,40.000000 ppm_fx1331,40.000000 ppm_fy1331,40.000000 ppm_fex1331,40.000000 ppm_fey1331);
   gre->SetName("40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(10);
   gre->SetMarkerColor(10);
   
   TH1F *Graph_40dO000000sPppm1331 = new TH1F("Graph_40dO000000sPppm1331","Graph",100,15.6,20.4);
   Graph_40dO000000sPppm1331->SetMinimum(2.823036);
   Graph_40dO000000sPppm1331->SetMaximum(3.705498);
   Graph_40dO000000sPppm1331->SetDirectory(0);
   Graph_40dO000000sPppm1331->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_40dO000000sPppm1331->SetLineColor(ci);
   Graph_40dO000000sPppm1331->GetXaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1331->GetXaxis()->SetTitleOffset(1);
   Graph_40dO000000sPppm1331->GetXaxis()->SetTitleFont(42);
   Graph_40dO000000sPppm1331->GetYaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1331->GetYaxis()->SetTitleFont(42);
   Graph_40dO000000sPppm1331->GetZaxis()->SetLabelFont(42);
   Graph_40dO000000sPppm1331->GetZaxis()->SetTitleOffset(1);
   Graph_40dO000000sPppm1331->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_40.000000 ppm1331);
   
   
   TF1 *quadLineFit1332 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1332->SetFillColor(19);
   quadLineFit1332->SetFillStyle(0);
   quadLineFit1332->SetLineColor(10);
   quadLineFit1332->SetLineWidth(2);
   quadLineFit1332->SetChisquare(1.273863e-20);
   quadLineFit1332->SetNDF(0);
   quadLineFit1332->GetXaxis()->SetLabelFont(42);
   quadLineFit1332->GetXaxis()->SetTitleOffset(1);
   quadLineFit1332->GetXaxis()->SetTitleFont(42);
   quadLineFit1332->GetYaxis()->SetLabelFont(42);
   quadLineFit1332->GetYaxis()->SetTitleFont(42);
   quadLineFit1332->SetParameter(0,6.499928);
   quadLineFit1332->SetParError(0,0.05234493);
   quadLineFit1332->SetParLimits(0,0,0);
   quadLineFit1332->SetParameter(1,-0.1797589);
   quadLineFit1332->SetParError(1,0.002890265);
   quadLineFit1332->SetParLimits(1,0,0);
   quadLineFit1332->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1332);
   gre->Draw("p ");
   
   TF1 *quadLineFit1333 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1333->SetFillColor(19);
   quadLineFit1333->SetFillStyle(0);
   quadLineFit1333->SetLineColor(10);
   quadLineFit1333->SetLineWidth(2);
   quadLineFit1333->SetChisquare(1.273863e-20);
   quadLineFit1333->SetNDF(0);
   quadLineFit1333->GetXaxis()->SetLabelFont(42);
   quadLineFit1333->GetXaxis()->SetTitleOffset(1);
   quadLineFit1333->GetXaxis()->SetTitleFont(42);
   quadLineFit1333->GetYaxis()->SetLabelFont(42);
   quadLineFit1333->GetYaxis()->SetTitleFont(42);
   quadLineFit1333->SetParameter(0,6.499928);
   quadLineFit1333->SetParError(0,0.05234493);
   quadLineFit1333->SetParLimits(0,0,0);
   quadLineFit1333->SetParameter(1,-0.1797589);
   quadLineFit1333->SetParError(1,0.002890265);
   quadLineFit1333->SetParLimits(1,0,0);
   quadLineFit1333->Draw("same");
   
   Double_t 50.000000 ppm_fx1333[2] = {
   16,
   20};
   Double_t 50.000000 ppm_fy1333[2] = {
   4.371774,
   3.489072};
   Double_t 50.000000 ppm_fex1333[2] = {
   0,
   0};
   Double_t 50.000000 ppm_fey1333[2] = {
   0.008174905,
   0.008174905};
   gre = new TGraphErrors(2,50.000000 ppm_fx1333,50.000000 ppm_fy1333,50.000000 ppm_fex1333,50.000000 ppm_fey1333);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(11);
   gre->SetMarkerColor(11);
   
   TH1F *Graph_50dO000000sPppm1333 = new TH1F("Graph_50dO000000sPppm1333","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1333->SetMinimum(3.390993);
   Graph_50dO000000sPppm1333->SetMaximum(4.469854);
   Graph_50dO000000sPppm1333->SetDirectory(0);
   Graph_50dO000000sPppm1333->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1333->SetLineColor(ci);
   Graph_50dO000000sPppm1333->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1333->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1333->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1333->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1333->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1333->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1333->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1333->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1333);
   
   
   TF1 *quadLineFit1334 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1334->SetFillColor(19);
   quadLineFit1334->SetFillStyle(0);
   quadLineFit1334->SetLineColor(11);
   quadLineFit1334->SetLineWidth(2);
   quadLineFit1334->SetChisquare(3.208586e-17);
   quadLineFit1334->SetNDF(0);
   quadLineFit1334->GetXaxis()->SetLabelFont(42);
   quadLineFit1334->GetXaxis()->SetTitleOffset(1);
   quadLineFit1334->GetXaxis()->SetTitleFont(42);
   quadLineFit1334->GetYaxis()->SetLabelFont(42);
   quadLineFit1334->GetYaxis()->SetTitleFont(42);
   quadLineFit1334->SetParameter(0,7.902578);
   quadLineFit1334->SetParError(0,0.05234493);
   quadLineFit1334->SetParLimits(0,0,0);
   quadLineFit1334->SetParameter(1,-0.2206753);
   quadLineFit1334->SetParError(1,0.002890265);
   quadLineFit1334->SetParLimits(1,0,0);
   quadLineFit1334->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1334);
   gre->Draw("p ");
   
   TF1 *quadLineFit1335 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1335->SetFillColor(19);
   quadLineFit1335->SetFillStyle(0);
   quadLineFit1335->SetLineColor(11);
   quadLineFit1335->SetLineWidth(2);
   quadLineFit1335->SetChisquare(3.208586e-17);
   quadLineFit1335->SetNDF(0);
   quadLineFit1335->GetXaxis()->SetLabelFont(42);
   quadLineFit1335->GetXaxis()->SetTitleOffset(1);
   quadLineFit1335->GetXaxis()->SetTitleFont(42);
   quadLineFit1335->GetYaxis()->SetLabelFont(42);
   quadLineFit1335->GetYaxis()->SetTitleFont(42);
   quadLineFit1335->SetParameter(0,7.902578);
   quadLineFit1335->SetParError(0,0.05234493);
   quadLineFit1335->SetParLimits(0,0,0);
   quadLineFit1335->SetParameter(1,-0.2206753);
   quadLineFit1335->SetParError(1,0.002890265);
   quadLineFit1335->SetParLimits(1,0,0);
   quadLineFit1335->Draw("same");
   
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
