void QuadScans_NSUBRUN_325_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:20:10 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1193[3] = {
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1193[3] = {
   -3.165742,
   -2.824043,
   -2.535716};
   Double_t -50.000000 ppm_fex1193[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1193[3] = {
   0.008174905,
   0.008174905,
   0.008174905};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1193,-50.000000 ppm_fy1193,-50.000000 ppm_fex1193,-50.000000 ppm_fey1193);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1193 = new TH1F("Graph_mI50dO000000sPppm1193","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1193->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1193->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1193->SetDirectory(0);
   Graph_mI50dO000000sPppm1193->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1193->SetLineColor(ci);
   Graph_mI50dO000000sPppm1193->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1193->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1193->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1193->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1193->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1193->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1193->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1193->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1193->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1193->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1193->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1193->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1193->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1193->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1193->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1193->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1193);
   
   
   TF1 *quadLineFit1194 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1194->SetFillColor(19);
   quadLineFit1194->SetFillStyle(0);
   quadLineFit1194->SetLineWidth(2);
   quadLineFit1194->SetChisquare(7.103778);
   quadLineFit1194->SetNDF(1);
   quadLineFit1194->GetXaxis()->SetLabelFont(42);
   quadLineFit1194->GetXaxis()->SetTitleOffset(1);
   quadLineFit1194->GetXaxis()->SetTitleFont(42);
   quadLineFit1194->GetYaxis()->SetLabelFont(42);
   quadLineFit1194->GetYaxis()->SetTitleFont(42);
   quadLineFit1194->SetParameter(0,-5.676952);
   quadLineFit1194->SetParError(0,0.0522384);
   quadLineFit1194->SetParLimits(0,0,0);
   quadLineFit1194->SetParameter(1,0.1575066);
   quadLineFit1194->SetParError(1,0.002890264);
   quadLineFit1194->SetParLimits(1,0,0);
   quadLineFit1194->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1194);
   gre->Draw("ap");
   
   TF1 *quadLineFit1195 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1195->SetFillColor(19);
   quadLineFit1195->SetFillStyle(0);
   quadLineFit1195->SetLineWidth(2);
   quadLineFit1195->SetChisquare(7.103778);
   quadLineFit1195->SetNDF(1);
   quadLineFit1195->GetXaxis()->SetLabelFont(42);
   quadLineFit1195->GetXaxis()->SetTitleOffset(1);
   quadLineFit1195->GetXaxis()->SetTitleFont(42);
   quadLineFit1195->GetYaxis()->SetLabelFont(42);
   quadLineFit1195->GetYaxis()->SetTitleFont(42);
   quadLineFit1195->SetParameter(0,-5.676952);
   quadLineFit1195->SetParError(0,0.0522384);
   quadLineFit1195->SetParLimits(0,0,0);
   quadLineFit1195->SetParameter(1,0.1575066);
   quadLineFit1195->SetParError(1,0.002890264);
   quadLineFit1195->SetParLimits(1,0,0);
   quadLineFit1195->Draw("same");
   
   Double_t -30.000000 ppm_fx1195[3] = {
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1195[3] = {
   -1.666808,
   -1.475846,
   -1.326475};
   Double_t -30.000000 ppm_fex1195[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1195[3] = {
   0.008174905,
   0.008174905,
   0.008174905};
   gre = new TGraphErrors(3,-30.000000 ppm_fx1195,-30.000000 ppm_fy1195,-30.000000 ppm_fex1195,-30.000000 ppm_fey1195);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI30dO000000sPppm1195 = new TH1F("Graph_mI30dO000000sPppm1195","Graph",100,15.6,20.4);
   Graph_mI30dO000000sPppm1195->SetMinimum(-1.710651);
   Graph_mI30dO000000sPppm1195->SetMaximum(-1.282632);
   Graph_mI30dO000000sPppm1195->SetDirectory(0);
   Graph_mI30dO000000sPppm1195->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1195->SetLineColor(ci);
   Graph_mI30dO000000sPppm1195->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1195->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1195->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1195->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1195->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1195->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1195->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1195->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1195);
   
   
   TF1 *quadLineFit1196 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1196->SetFillColor(19);
   quadLineFit1196->SetFillStyle(0);
   quadLineFit1196->SetLineColor(2);
   quadLineFit1196->SetLineWidth(2);
   quadLineFit1196->SetChisquare(4.314126);
   quadLineFit1196->SetNDF(1);
   quadLineFit1196->GetXaxis()->SetLabelFont(42);
   quadLineFit1196->GetXaxis()->SetTitleOffset(1);
   quadLineFit1196->GetXaxis()->SetTitleFont(42);
   quadLineFit1196->GetYaxis()->SetLabelFont(42);
   quadLineFit1196->GetYaxis()->SetTitleFont(42);
   quadLineFit1196->SetParameter(0,-3.021209);
   quadLineFit1196->SetParError(0,0.05223957);
   quadLineFit1196->SetParLimits(0,0,0);
   quadLineFit1196->SetParameter(1,0.08508328);
   quadLineFit1196->SetParError(1,0.002890329);
   quadLineFit1196->SetParLimits(1,0,0);
   quadLineFit1196->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1196);
   gre->Draw("p ");
   
   TF1 *quadLineFit1197 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1197->SetFillColor(19);
   quadLineFit1197->SetFillStyle(0);
   quadLineFit1197->SetLineColor(2);
   quadLineFit1197->SetLineWidth(2);
   quadLineFit1197->SetChisquare(4.314126);
   quadLineFit1197->SetNDF(1);
   quadLineFit1197->GetXaxis()->SetLabelFont(42);
   quadLineFit1197->GetXaxis()->SetTitleOffset(1);
   quadLineFit1197->GetXaxis()->SetTitleFont(42);
   quadLineFit1197->GetYaxis()->SetLabelFont(42);
   quadLineFit1197->GetYaxis()->SetTitleFont(42);
   quadLineFit1197->SetParameter(0,-3.021209);
   quadLineFit1197->SetParError(0,0.05223957);
   quadLineFit1197->SetParLimits(0,0,0);
   quadLineFit1197->SetParameter(1,0.08508328);
   quadLineFit1197->SetParError(1,0.002890329);
   quadLineFit1197->SetParLimits(1,0,0);
   quadLineFit1197->Draw("same");
   
   Double_t -10.000000 ppm_fx1197[3] = {
   16,
   18,
   20};
   Double_t -10.000000 ppm_fy1197[3] = {
   -0.1511556,
   -0.1351957,
   -0.1183063};
   Double_t -10.000000 ppm_fex1197[3] = {
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1197[3] = {
   0.008174905,
   0.008174905,
   0.008174905};
   gre = new TGraphErrors(3,-10.000000 ppm_fx1197,-10.000000 ppm_fy1197,-10.000000 ppm_fex1197,-10.000000 ppm_fey1197);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_mI10dO000000sPppm1197 = new TH1F("Graph_mI10dO000000sPppm1197","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1197->SetMinimum(-0.1642504);
   Graph_mI10dO000000sPppm1197->SetMaximum(-0.1052115);
   Graph_mI10dO000000sPppm1197->SetDirectory(0);
   Graph_mI10dO000000sPppm1197->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1197->SetLineColor(ci);
   Graph_mI10dO000000sPppm1197->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1197->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1197->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1197->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1197->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1197->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1197->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1197->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1197);
   
   
   TF1 *quadLineFit1198 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1198->SetFillColor(19);
   quadLineFit1198->SetFillStyle(0);
   quadLineFit1198->SetLineColor(3);
   quadLineFit1198->SetLineWidth(2);
   quadLineFit1198->SetChisquare(0.002154292);
   quadLineFit1198->SetNDF(1);
   quadLineFit1198->GetXaxis()->SetLabelFont(42);
   quadLineFit1198->GetXaxis()->SetTitleOffset(1);
   quadLineFit1198->GetXaxis()->SetTitleFont(42);
   quadLineFit1198->GetYaxis()->SetLabelFont(42);
   quadLineFit1198->GetYaxis()->SetTitleFont(42);
   quadLineFit1198->SetParameter(0,-0.2827075);
   quadLineFit1198->SetParError(0,0.05223843);
   quadLineFit1198->SetParLimits(0,0,0);
   quadLineFit1198->SetParameter(1,0.008212314);
   quadLineFit1198->SetParError(1,0.002890265);
   quadLineFit1198->SetParLimits(1,0,0);
   quadLineFit1198->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1198);
   gre->Draw("p ");
   
   TF1 *quadLineFit1199 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1199->SetFillColor(19);
   quadLineFit1199->SetFillStyle(0);
   quadLineFit1199->SetLineColor(3);
   quadLineFit1199->SetLineWidth(2);
   quadLineFit1199->SetChisquare(0.002154292);
   quadLineFit1199->SetNDF(1);
   quadLineFit1199->GetXaxis()->SetLabelFont(42);
   quadLineFit1199->GetXaxis()->SetTitleOffset(1);
   quadLineFit1199->GetXaxis()->SetTitleFont(42);
   quadLineFit1199->GetYaxis()->SetLabelFont(42);
   quadLineFit1199->GetYaxis()->SetTitleFont(42);
   quadLineFit1199->SetParameter(0,-0.2827075);
   quadLineFit1199->SetParError(0,0.05223843);
   quadLineFit1199->SetParLimits(0,0,0);
   quadLineFit1199->SetParameter(1,0.008212314);
   quadLineFit1199->SetParError(1,0.002890265);
   quadLineFit1199->SetParLimits(1,0,0);
   quadLineFit1199->Draw("same");
   
   Double_t 10.000000 ppm_fx1199[3] = {
   16,
   18,
   20};
   Double_t 10.000000 ppm_fy1199[3] = {
   1.363659,
   1.208974,
   1.093579};
   Double_t 10.000000 ppm_fex1199[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1199[3] = {
   0.008174905,
   0.008174905,
   0.008174905};
   gre = new TGraphErrors(3,10.000000 ppm_fx1199,10.000000 ppm_fy1199,10.000000 ppm_fex1199,10.000000 ppm_fey1199);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_10dO000000sPppm1199 = new TH1F("Graph_10dO000000sPppm1199","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1199->SetMinimum(1.056761);
   Graph_10dO000000sPppm1199->SetMaximum(1.400477);
   Graph_10dO000000sPppm1199->SetDirectory(0);
   Graph_10dO000000sPppm1199->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1199->SetLineColor(ci);
   Graph_10dO000000sPppm1199->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1199->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1199->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1199->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1199->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1199->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1199->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1199->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1199);
   
   
   TF1 *quadLineFit1200 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1200->SetFillColor(19);
   quadLineFit1200->SetFillStyle(0);
   quadLineFit1200->SetLineColor(4);
   quadLineFit1200->SetLineWidth(2);
   quadLineFit1200->SetChisquare(3.849829);
   quadLineFit1200->SetNDF(1);
   quadLineFit1200->GetXaxis()->SetLabelFont(42);
   quadLineFit1200->GetXaxis()->SetTitleOffset(1);
   quadLineFit1200->GetXaxis()->SetTitleFont(42);
   quadLineFit1200->GetYaxis()->SetLabelFont(42);
   quadLineFit1200->GetYaxis()->SetTitleFont(42);
   quadLineFit1200->SetParameter(0,2.437435);
   quadLineFit1200->SetParError(0,0.05223998);
   quadLineFit1200->SetParLimits(0,0,0);
   quadLineFit1200->SetParameter(1,-0.06752021);
   quadLineFit1200->SetParError(1,0.002890352);
   quadLineFit1200->SetParLimits(1,0,0);
   quadLineFit1200->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1200);
   gre->Draw("p ");
   
   TF1 *quadLineFit1201 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1201->SetFillColor(19);
   quadLineFit1201->SetFillStyle(0);
   quadLineFit1201->SetLineColor(4);
   quadLineFit1201->SetLineWidth(2);
   quadLineFit1201->SetChisquare(3.849829);
   quadLineFit1201->SetNDF(1);
   quadLineFit1201->GetXaxis()->SetLabelFont(42);
   quadLineFit1201->GetXaxis()->SetTitleOffset(1);
   quadLineFit1201->GetXaxis()->SetTitleFont(42);
   quadLineFit1201->GetYaxis()->SetLabelFont(42);
   quadLineFit1201->GetYaxis()->SetTitleFont(42);
   quadLineFit1201->SetParameter(0,2.437435);
   quadLineFit1201->SetParError(0,0.05223998);
   quadLineFit1201->SetParLimits(0,0,0);
   quadLineFit1201->SetParameter(1,-0.06752021);
   quadLineFit1201->SetParError(1,0.002890352);
   quadLineFit1201->SetParLimits(1,0,0);
   quadLineFit1201->Draw("same");
   
   Double_t 30.000000 ppm_fx1201[3] = {
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1201[3] = {
   2.872277,
   2.538622,
   2.285};
   Double_t 30.000000 ppm_fex1201[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1201[3] = {
   0.008174905,
   0.008174905,
   0.008174905};
   gre = new TGraphErrors(3,30.000000 ppm_fx1201,30.000000 ppm_fy1201,30.000000 ppm_fex1201,30.000000 ppm_fey1201);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_30dO000000sPppm1201 = new TH1F("Graph_30dO000000sPppm1201","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1201->SetMinimum(2.216463);
   Graph_30dO000000sPppm1201->SetMaximum(2.940815);
   Graph_30dO000000sPppm1201->SetDirectory(0);
   Graph_30dO000000sPppm1201->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1201->SetLineColor(ci);
   Graph_30dO000000sPppm1201->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1201->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1201->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1201->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1201->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1201->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1201->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1201->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1201);
   
   
   TF1 *quadLineFit1202 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1202->SetFillColor(19);
   quadLineFit1202->SetFillStyle(0);
   quadLineFit1202->SetLineColor(5);
   quadLineFit1202->SetLineWidth(2);
   quadLineFit1202->SetChisquare(15.97457);
   quadLineFit1202->SetNDF(1);
   quadLineFit1202->GetXaxis()->SetLabelFont(42);
   quadLineFit1202->GetXaxis()->SetTitleOffset(1);
   quadLineFit1202->GetXaxis()->SetTitleFont(42);
   quadLineFit1202->GetYaxis()->SetLabelFont(42);
   quadLineFit1202->GetYaxis()->SetTitleFont(42);
   quadLineFit1202->SetParameter(0,5.208046);
   quadLineFit1202->SetParError(0,0.05223994);
   quadLineFit1202->SetParLimits(0,0,0);
   quadLineFit1202->SetParameter(1,-0.1468192);
   quadLineFit1202->SetParError(1,0.00289035);
   quadLineFit1202->SetParLimits(1,0,0);
   quadLineFit1202->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1202);
   gre->Draw("p ");
   
   TF1 *quadLineFit1203 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1203->SetFillColor(19);
   quadLineFit1203->SetFillStyle(0);
   quadLineFit1203->SetLineColor(5);
   quadLineFit1203->SetLineWidth(2);
   quadLineFit1203->SetChisquare(15.97457);
   quadLineFit1203->SetNDF(1);
   quadLineFit1203->GetXaxis()->SetLabelFont(42);
   quadLineFit1203->GetXaxis()->SetTitleOffset(1);
   quadLineFit1203->GetXaxis()->SetTitleFont(42);
   quadLineFit1203->GetYaxis()->SetLabelFont(42);
   quadLineFit1203->GetYaxis()->SetTitleFont(42);
   quadLineFit1203->SetParameter(0,5.208046);
   quadLineFit1203->SetParError(0,0.05223994);
   quadLineFit1203->SetParLimits(0,0,0);
   quadLineFit1203->SetParameter(1,-0.1468192);
   quadLineFit1203->SetParError(1,0.00289035);
   quadLineFit1203->SetParLimits(1,0,0);
   quadLineFit1203->Draw("same");
   
   Double_t 50.000000 ppm_fx1203[3] = {
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1203[3] = {
   4.362706,
   3.888204,
   3.498777};
   Double_t 50.000000 ppm_fex1203[3] = {
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1203[3] = {
   0.008174905,
   0.008174905,
   0.008174905};
   gre = new TGraphErrors(3,50.000000 ppm_fx1203,50.000000 ppm_fy1203,50.000000 ppm_fex1203,50.000000 ppm_fey1203);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_50dO000000sPppm1203 = new TH1F("Graph_50dO000000sPppm1203","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1203->SetMinimum(3.402574);
   Graph_50dO000000sPppm1203->SetMaximum(4.458909);
   Graph_50dO000000sPppm1203->SetDirectory(0);
   Graph_50dO000000sPppm1203->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1203->SetLineColor(ci);
   Graph_50dO000000sPppm1203->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1203->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1203->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1203->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1203->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1203->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1203->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1203->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1203);
   
   
   TF1 *quadLineFit1204 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1204->SetFillColor(19);
   quadLineFit1204->SetFillStyle(0);
   quadLineFit1204->SetLineColor(6);
   quadLineFit1204->SetLineWidth(2);
   quadLineFit1204->SetChisquare(18.0506);
   quadLineFit1204->SetNDF(1);
   quadLineFit1204->GetXaxis()->SetLabelFont(42);
   quadLineFit1204->GetXaxis()->SetTitleOffset(1);
   quadLineFit1204->GetXaxis()->SetTitleFont(42);
   quadLineFit1204->GetYaxis()->SetLabelFont(42);
   quadLineFit1204->GetYaxis()->SetTitleFont(42);
   quadLineFit1204->SetParameter(0,7.804245);
   quadLineFit1204->SetParError(0,0.0522058);
   quadLineFit1204->SetParLimits(0,0,0);
   quadLineFit1204->SetParameter(1,-0.2159824);
   quadLineFit1204->SetParError(1,0.002888452);
   quadLineFit1204->SetParLimits(1,0,0);
   quadLineFit1204->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1204);
   gre->Draw("p ");
   
   TF1 *quadLineFit1205 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1205->SetFillColor(19);
   quadLineFit1205->SetFillStyle(0);
   quadLineFit1205->SetLineColor(6);
   quadLineFit1205->SetLineWidth(2);
   quadLineFit1205->SetChisquare(18.0506);
   quadLineFit1205->SetNDF(1);
   quadLineFit1205->GetXaxis()->SetLabelFont(42);
   quadLineFit1205->GetXaxis()->SetTitleOffset(1);
   quadLineFit1205->GetXaxis()->SetTitleFont(42);
   quadLineFit1205->GetYaxis()->SetLabelFont(42);
   quadLineFit1205->GetYaxis()->SetTitleFont(42);
   quadLineFit1205->SetParameter(0,7.804245);
   quadLineFit1205->SetParError(0,0.0522058);
   quadLineFit1205->SetParLimits(0,0,0);
   quadLineFit1205->SetParameter(1,-0.2159824);
   quadLineFit1205->SetParError(1,0.002888452);
   quadLineFit1205->SetParLimits(1,0,0);
   quadLineFit1205->Draw("same");
   
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
