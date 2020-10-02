void Scans_NSUBRUN_50()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  2 13:49:32 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.625,21.77143,2.625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1011[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1011[2] = {
   -2.375,
   -1.9};
   Double_t -30.000000 ppm_fex1011[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1011[2] = {
   0.04177491,
   0.04177491};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1011,-30.000000 ppm_fy1011,-30.000000 ppm_fex1011,-30.000000 ppm_fey1011);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph_mI30dO000000sPppm10011011 = new TH1F("Graph_Graph_mI30dO000000sPppm10011011","",100,15.6,20.4);
   Graph_Graph_mI30dO000000sPppm10011011->SetMinimum(-3);
   Graph_Graph_mI30dO000000sPppm10011011->SetMaximum(2);
   Graph_Graph_mI30dO000000sPppm10011011->SetDirectory(0);
   Graph_Graph_mI30dO000000sPppm10011011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_mI30dO000000sPppm10011011->SetLineColor(ci);
   Graph_Graph_mI30dO000000sPppm10011011->GetXaxis()->SetTitle("QHV [kV]");
   Graph_Graph_mI30dO000000sPppm10011011->GetXaxis()->CenterTitle(true);
   Graph_Graph_mI30dO000000sPppm10011011->GetXaxis()->SetLabelFont(42);
   Graph_Graph_mI30dO000000sPppm10011011->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_mI30dO000000sPppm10011011->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_mI30dO000000sPppm10011011->GetXaxis()->SetTitleFont(42);
   Graph_Graph_mI30dO000000sPppm10011011->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph_mI30dO000000sPppm10011011->GetYaxis()->CenterTitle(true);
   Graph_Graph_mI30dO000000sPppm10011011->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_mI30dO000000sPppm10011011->GetYaxis()->SetLabelFont(42);
   Graph_Graph_mI30dO000000sPppm10011011->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_mI30dO000000sPppm10011011->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph_mI30dO000000sPppm10011011->GetYaxis()->SetTitleFont(42);
   Graph_Graph_mI30dO000000sPppm10011011->GetZaxis()->SetLabelFont(42);
   Graph_Graph_mI30dO000000sPppm10011011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_mI30dO000000sPppm10011011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_-30.000000 ppm10011011);
   
   
   TF1 *lineFit1012 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1012->SetFillColor(19);
   lineFit1012->SetFillStyle(0);
   lineFit1012->SetLineWidth(2);
   lineFit1012->SetChisquare(5.175768e-26);
   lineFit1012->SetNDF(0);
   lineFit1012->GetXaxis()->SetLabelFont(42);
   lineFit1012->GetXaxis()->SetTitleOffset(1);
   lineFit1012->GetXaxis()->SetTitleFont(42);
   lineFit1012->GetYaxis()->SetLabelFont(42);
   lineFit1012->GetYaxis()->SetTitleFont(42);
   lineFit1012->SetParameter(0,-4.275);
   lineFit1012->SetParError(0,0.26749);
   lineFit1012->SetParLimits(0,0,0);
   lineFit1012->SetParameter(1,0.11875);
   lineFit1012->SetParError(1,0.01476966);
   lineFit1012->SetParLimits(1,0,0);
   lineFit1012->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1012);
   gre->Draw("ap");
   
   TF1 *lineFit1013 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1013->SetFillColor(19);
   lineFit1013->SetFillStyle(0);
   lineFit1013->SetLineWidth(2);
   lineFit1013->SetChisquare(5.175768e-26);
   lineFit1013->SetNDF(0);
   lineFit1013->GetXaxis()->SetLabelFont(42);
   lineFit1013->GetXaxis()->SetTitleOffset(1);
   lineFit1013->GetXaxis()->SetTitleFont(42);
   lineFit1013->GetYaxis()->SetLabelFont(42);
   lineFit1013->GetYaxis()->SetTitleFont(42);
   lineFit1013->SetParameter(0,-4.275);
   lineFit1013->SetParError(0,0.26749);
   lineFit1013->SetParLimits(0,0,0);
   lineFit1013->SetParameter(1,0.11875);
   lineFit1013->SetParError(1,0.01476966);
   lineFit1013->SetParLimits(1,0,0);
   lineFit1013->Draw("same");
   
   Double_t -10.000000 ppm_fx1013[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1013[2] = {
   -1.125,
   -0.9};
   Double_t -10.000000 ppm_fex1013[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1013[2] = {
   0.04177491,
   0.04177491};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1013,-10.000000 ppm_fy1013,-10.000000 ppm_fex1013,-10.000000 ppm_fey1013);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_Graph_mI10dO000000sPppm10031013 = new TH1F("Graph_Graph_mI10dO000000sPppm10031013","Graph",100,15.6,20.4);
   Graph_Graph_mI10dO000000sPppm10031013->SetMinimum(-1.19763);
   Graph_Graph_mI10dO000000sPppm10031013->SetMaximum(-0.8273701);
   Graph_Graph_mI10dO000000sPppm10031013->SetDirectory(0);
   Graph_Graph_mI10dO000000sPppm10031013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_mI10dO000000sPppm10031013->SetLineColor(ci);
   Graph_Graph_mI10dO000000sPppm10031013->GetXaxis()->SetLabelFont(42);
   Graph_Graph_mI10dO000000sPppm10031013->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_mI10dO000000sPppm10031013->GetXaxis()->SetTitleFont(42);
   Graph_Graph_mI10dO000000sPppm10031013->GetYaxis()->SetLabelFont(42);
   Graph_Graph_mI10dO000000sPppm10031013->GetYaxis()->SetTitleFont(42);
   Graph_Graph_mI10dO000000sPppm10031013->GetZaxis()->SetLabelFont(42);
   Graph_Graph_mI10dO000000sPppm10031013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_mI10dO000000sPppm10031013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_-10.000000 ppm10031013);
   
   
   TF1 *lineFit1014 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1014->SetFillColor(19);
   lineFit1014->SetFillStyle(0);
   lineFit1014->SetLineColor(2);
   lineFit1014->SetLineWidth(2);
   lineFit1014->SetChisquare(5.155992e-28);
   lineFit1014->SetNDF(0);
   lineFit1014->GetXaxis()->SetLabelFont(42);
   lineFit1014->GetXaxis()->SetTitleOffset(1);
   lineFit1014->GetXaxis()->SetTitleFont(42);
   lineFit1014->GetYaxis()->SetLabelFont(42);
   lineFit1014->GetYaxis()->SetTitleFont(42);
   lineFit1014->SetParameter(0,-2.025);
   lineFit1014->SetParError(0,0.26749);
   lineFit1014->SetParLimits(0,0,0);
   lineFit1014->SetParameter(1,0.05625);
   lineFit1014->SetParError(1,0.01476966);
   lineFit1014->SetParLimits(1,0,0);
   lineFit1014->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1014);
   gre->Draw("p ");
   
   TF1 *lineFit1015 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1015->SetFillColor(19);
   lineFit1015->SetFillStyle(0);
   lineFit1015->SetLineColor(2);
   lineFit1015->SetLineWidth(2);
   lineFit1015->SetChisquare(5.155992e-28);
   lineFit1015->SetNDF(0);
   lineFit1015->GetXaxis()->SetLabelFont(42);
   lineFit1015->GetXaxis()->SetTitleOffset(1);
   lineFit1015->GetXaxis()->SetTitleFont(42);
   lineFit1015->GetYaxis()->SetLabelFont(42);
   lineFit1015->GetYaxis()->SetTitleFont(42);
   lineFit1015->SetParameter(0,-2.025);
   lineFit1015->SetParError(0,0.26749);
   lineFit1015->SetParLimits(0,0,0);
   lineFit1015->SetParameter(1,0.05625);
   lineFit1015->SetParError(1,0.01476966);
   lineFit1015->SetParLimits(1,0,0);
   lineFit1015->Draw("same");
   
   Double_t 10.000000 ppm_fx1015[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1015[2] = {
   0.125,
   0.1};
   Double_t 10.000000 ppm_fex1015[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1015[2] = {
   0.04177491,
   0.04177491};
   gre = new TGraphErrors(2,10.000000 ppm_fx1015,10.000000 ppm_fy1015,10.000000 ppm_fex1015,10.000000 ppm_fey1015);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_Graph_10dO000000sPppm10051015 = new TH1F("Graph_Graph_10dO000000sPppm10051015","Graph",100,15.6,20.4);
   Graph_Graph_10dO000000sPppm10051015->SetMinimum(0.0473701);
   Graph_Graph_10dO000000sPppm10051015->SetMaximum(0.1776299);
   Graph_Graph_10dO000000sPppm10051015->SetDirectory(0);
   Graph_Graph_10dO000000sPppm10051015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_10dO000000sPppm10051015->SetLineColor(ci);
   Graph_Graph_10dO000000sPppm10051015->GetXaxis()->SetLabelFont(42);
   Graph_Graph_10dO000000sPppm10051015->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_10dO000000sPppm10051015->GetXaxis()->SetTitleFont(42);
   Graph_Graph_10dO000000sPppm10051015->GetYaxis()->SetLabelFont(42);
   Graph_Graph_10dO000000sPppm10051015->GetYaxis()->SetTitleFont(42);
   Graph_Graph_10dO000000sPppm10051015->GetZaxis()->SetLabelFont(42);
   Graph_Graph_10dO000000sPppm10051015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_10dO000000sPppm10051015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_10.000000 ppm10051015);
   
   
   TF1 *lineFit1016 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1016->SetFillColor(19);
   lineFit1016->SetFillStyle(0);
   lineFit1016->SetLineColor(3);
   lineFit1016->SetLineWidth(2);
   lineFit1016->SetChisquare(6.731924e-30);
   lineFit1016->SetNDF(0);
   lineFit1016->GetXaxis()->SetLabelFont(42);
   lineFit1016->GetXaxis()->SetTitleOffset(1);
   lineFit1016->GetXaxis()->SetTitleFont(42);
   lineFit1016->GetYaxis()->SetLabelFont(42);
   lineFit1016->GetYaxis()->SetTitleFont(42);
   lineFit1016->SetParameter(0,0.225);
   lineFit1016->SetParError(0,0.26749);
   lineFit1016->SetParLimits(0,0,0);
   lineFit1016->SetParameter(1,-0.00625);
   lineFit1016->SetParError(1,0.01476966);
   lineFit1016->SetParLimits(1,0,0);
   lineFit1016->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1016);
   gre->Draw("p ");
   
   TF1 *lineFit1017 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1017->SetFillColor(19);
   lineFit1017->SetFillStyle(0);
   lineFit1017->SetLineColor(3);
   lineFit1017->SetLineWidth(2);
   lineFit1017->SetChisquare(6.731924e-30);
   lineFit1017->SetNDF(0);
   lineFit1017->GetXaxis()->SetLabelFont(42);
   lineFit1017->GetXaxis()->SetTitleOffset(1);
   lineFit1017->GetXaxis()->SetTitleFont(42);
   lineFit1017->GetYaxis()->SetLabelFont(42);
   lineFit1017->GetYaxis()->SetTitleFont(42);
   lineFit1017->SetParameter(0,0.225);
   lineFit1017->SetParError(0,0.26749);
   lineFit1017->SetParLimits(0,0,0);
   lineFit1017->SetParameter(1,-0.00625);
   lineFit1017->SetParError(1,0.01476966);
   lineFit1017->SetParLimits(1,0,0);
   lineFit1017->Draw("same");
   
   Double_t 30.000000 ppm_fx1017[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1017[2] = {
   1.375,
   1.1};
   Double_t 30.000000 ppm_fex1017[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1017[2] = {
   0.04177491,
   0.04177491};
   gre = new TGraphErrors(2,30.000000 ppm_fx1017,30.000000 ppm_fy1017,30.000000 ppm_fex1017,30.000000 ppm_fey1017);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_Graph_30dO000000sPppm10071017 = new TH1F("Graph_Graph_30dO000000sPppm10071017","Graph",100,15.6,20.4);
   Graph_Graph_30dO000000sPppm10071017->SetMinimum(1.02237);
   Graph_Graph_30dO000000sPppm10071017->SetMaximum(1.45263);
   Graph_Graph_30dO000000sPppm10071017->SetDirectory(0);
   Graph_Graph_30dO000000sPppm10071017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_30dO000000sPppm10071017->SetLineColor(ci);
   Graph_Graph_30dO000000sPppm10071017->GetXaxis()->SetLabelFont(42);
   Graph_Graph_30dO000000sPppm10071017->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_30dO000000sPppm10071017->GetXaxis()->SetTitleFont(42);
   Graph_Graph_30dO000000sPppm10071017->GetYaxis()->SetLabelFont(42);
   Graph_Graph_30dO000000sPppm10071017->GetYaxis()->SetTitleFont(42);
   Graph_Graph_30dO000000sPppm10071017->GetZaxis()->SetLabelFont(42);
   Graph_Graph_30dO000000sPppm10071017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_30dO000000sPppm10071017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_30.000000 ppm10071017);
   
   
   TF1 *lineFit1018 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1018->SetFillColor(19);
   lineFit1018->SetFillStyle(0);
   lineFit1018->SetLineColor(4);
   lineFit1018->SetLineWidth(2);
   lineFit1018->SetChisquare(1.358922e-26);
   lineFit1018->SetNDF(0);
   lineFit1018->GetXaxis()->SetLabelFont(42);
   lineFit1018->GetXaxis()->SetTitleOffset(1);
   lineFit1018->GetXaxis()->SetTitleFont(42);
   lineFit1018->GetYaxis()->SetLabelFont(42);
   lineFit1018->GetYaxis()->SetTitleFont(42);
   lineFit1018->SetParameter(0,2.475);
   lineFit1018->SetParError(0,0.26749);
   lineFit1018->SetParLimits(0,0,0);
   lineFit1018->SetParameter(1,-0.06875);
   lineFit1018->SetParError(1,0.01476966);
   lineFit1018->SetParLimits(1,0,0);
   lineFit1018->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1018);
   gre->Draw("p ");
   
   TF1 *lineFit1019 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1019->SetFillColor(19);
   lineFit1019->SetFillStyle(0);
   lineFit1019->SetLineColor(4);
   lineFit1019->SetLineWidth(2);
   lineFit1019->SetChisquare(1.358922e-26);
   lineFit1019->SetNDF(0);
   lineFit1019->GetXaxis()->SetLabelFont(42);
   lineFit1019->GetXaxis()->SetTitleOffset(1);
   lineFit1019->GetXaxis()->SetTitleFont(42);
   lineFit1019->GetYaxis()->SetLabelFont(42);
   lineFit1019->GetYaxis()->SetTitleFont(42);
   lineFit1019->SetParameter(0,2.475);
   lineFit1019->SetParError(0,0.26749);
   lineFit1019->SetParLimits(0,0,0);
   lineFit1019->SetParameter(1,-0.06875);
   lineFit1019->SetParError(1,0.01476966);
   lineFit1019->SetParLimits(1,0,0);
   lineFit1019->Draw("same");
   
   Double_t -30.000000 ppm_fx1019[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1019[2] = {
   -2.375,
   -1.9};
   Double_t -30.000000 ppm_fex1019[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1019[2] = {
   0.02474879,
   0.02474879};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1019,-30.000000 ppm_fy1019,-30.000000 ppm_fex1019,-30.000000 ppm_fey1019);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_mI30dO000000sPppm1019 = new TH1F("Graph_mI30dO000000sPppm1019","Graph",100,15.6,20.4);
   Graph_mI30dO000000sPppm1019->SetMinimum(-2.452199);
   Graph_mI30dO000000sPppm1019->SetMaximum(-1.822801);
   Graph_mI30dO000000sPppm1019->SetDirectory(0);
   Graph_mI30dO000000sPppm1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1019->SetLineColor(ci);
   Graph_mI30dO000000sPppm1019->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1019->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1019->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1019->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1019->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1019->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1019->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1019);
   
   
   TF1 *lineFit1020 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1020->SetFillColor(19);
   lineFit1020->SetFillStyle(0);
   lineFit1020->SetLineColor(5);
   lineFit1020->SetLineWidth(2);
   lineFit1020->SetChisquare(1.355547e-25);
   lineFit1020->SetNDF(0);
   lineFit1020->GetXaxis()->SetLabelFont(42);
   lineFit1020->GetXaxis()->SetTitleOffset(1);
   lineFit1020->GetXaxis()->SetTitleFont(42);
   lineFit1020->GetYaxis()->SetLabelFont(42);
   lineFit1020->GetYaxis()->SetTitleFont(42);
   lineFit1020->SetParameter(0,-4.275);
   lineFit1020->SetParError(0,0.1584696);
   lineFit1020->SetParLimits(0,0,0);
   lineFit1020->SetParameter(1,0.11875);
   lineFit1020->SetParError(1,0.008750018);
   lineFit1020->SetParLimits(1,0,0);
   lineFit1020->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1020);
   gre->Draw("p ");
   
   TF1 *lineFit1021 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1021->SetFillColor(19);
   lineFit1021->SetFillStyle(0);
   lineFit1021->SetLineColor(5);
   lineFit1021->SetLineWidth(2);
   lineFit1021->SetChisquare(1.355547e-25);
   lineFit1021->SetNDF(0);
   lineFit1021->GetXaxis()->SetLabelFont(42);
   lineFit1021->GetXaxis()->SetTitleOffset(1);
   lineFit1021->GetXaxis()->SetTitleFont(42);
   lineFit1021->GetYaxis()->SetLabelFont(42);
   lineFit1021->GetYaxis()->SetTitleFont(42);
   lineFit1021->SetParameter(0,-4.275);
   lineFit1021->SetParError(0,0.1584696);
   lineFit1021->SetParLimits(0,0,0);
   lineFit1021->SetParameter(1,0.11875);
   lineFit1021->SetParError(1,0.008750018);
   lineFit1021->SetParLimits(1,0,0);
   lineFit1021->Draw("same");
   
   Double_t -10.000000 ppm_fx1021[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1021[2] = {
   -1.125,
   -0.9};
   Double_t -10.000000 ppm_fex1021[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1021[2] = {
   0.02474879,
   0.02474879};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1021,-10.000000 ppm_fy1021,-10.000000 ppm_fex1021,-10.000000 ppm_fey1021);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_mI10dO000000sPppm1021 = new TH1F("Graph_mI10dO000000sPppm1021","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1021->SetMinimum(-1.177199);
   Graph_mI10dO000000sPppm1021->SetMaximum(-0.8478015);
   Graph_mI10dO000000sPppm1021->SetDirectory(0);
   Graph_mI10dO000000sPppm1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1021->SetLineColor(ci);
   Graph_mI10dO000000sPppm1021->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1021->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1021->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1021->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1021->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1021->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1021->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1021);
   
   
   TF1 *lineFit1022 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1022->SetFillColor(19);
   lineFit1022->SetFillStyle(0);
   lineFit1022->SetLineColor(6);
   lineFit1022->SetLineWidth(2);
   lineFit1022->SetChisquare(1.791029e-27);
   lineFit1022->SetNDF(0);
   lineFit1022->GetXaxis()->SetLabelFont(42);
   lineFit1022->GetXaxis()->SetTitleOffset(1);
   lineFit1022->GetXaxis()->SetTitleFont(42);
   lineFit1022->GetYaxis()->SetLabelFont(42);
   lineFit1022->GetYaxis()->SetTitleFont(42);
   lineFit1022->SetParameter(0,-2.025);
   lineFit1022->SetParError(0,0.1584696);
   lineFit1022->SetParLimits(0,0,0);
   lineFit1022->SetParameter(1,0.05625);
   lineFit1022->SetParError(1,0.008750018);
   lineFit1022->SetParLimits(1,0,0);
   lineFit1022->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1022);
   gre->Draw("p ");
   
   TF1 *lineFit1023 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1023->SetFillColor(19);
   lineFit1023->SetFillStyle(0);
   lineFit1023->SetLineColor(6);
   lineFit1023->SetLineWidth(2);
   lineFit1023->SetChisquare(1.791029e-27);
   lineFit1023->SetNDF(0);
   lineFit1023->GetXaxis()->SetLabelFont(42);
   lineFit1023->GetXaxis()->SetTitleOffset(1);
   lineFit1023->GetXaxis()->SetTitleFont(42);
   lineFit1023->GetYaxis()->SetLabelFont(42);
   lineFit1023->GetYaxis()->SetTitleFont(42);
   lineFit1023->SetParameter(0,-2.025);
   lineFit1023->SetParError(0,0.1584696);
   lineFit1023->SetParLimits(0,0,0);
   lineFit1023->SetParameter(1,0.05625);
   lineFit1023->SetParError(1,0.008750018);
   lineFit1023->SetParLimits(1,0,0);
   lineFit1023->Draw("same");
   
   Double_t 10.000000 ppm_fx1023[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1023[2] = {
   0.125,
   0.1};
   Double_t 10.000000 ppm_fex1023[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1023[2] = {
   0.02474879,
   0.02474879};
   gre = new TGraphErrors(2,10.000000 ppm_fx1023,10.000000 ppm_fy1023,10.000000 ppm_fex1023,10.000000 ppm_fey1023);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(7);
   gre->SetMarkerColor(7);
   
   TH1F *Graph_10dO000000sPppm1023 = new TH1F("Graph_10dO000000sPppm1023","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1023->SetMinimum(0.06780145);
   Graph_10dO000000sPppm1023->SetMaximum(0.1571985);
   Graph_10dO000000sPppm1023->SetDirectory(0);
   Graph_10dO000000sPppm1023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1023->SetLineColor(ci);
   Graph_10dO000000sPppm1023->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1023->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1023->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1023->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1023->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1023->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1023->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1023);
   
   
   TF1 *lineFit1024 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1024->SetFillColor(19);
   lineFit1024->SetFillStyle(0);
   lineFit1024->SetLineColor(7);
   lineFit1024->SetLineWidth(2);
   lineFit1024->SetChisquare(1.336354e-27);
   lineFit1024->SetNDF(0);
   lineFit1024->GetXaxis()->SetLabelFont(42);
   lineFit1024->GetXaxis()->SetTitleOffset(1);
   lineFit1024->GetXaxis()->SetTitleFont(42);
   lineFit1024->GetYaxis()->SetLabelFont(42);
   lineFit1024->GetYaxis()->SetTitleFont(42);
   lineFit1024->SetParameter(0,0.225);
   lineFit1024->SetParError(0,0.1584696);
   lineFit1024->SetParLimits(0,0,0);
   lineFit1024->SetParameter(1,-0.00625);
   lineFit1024->SetParError(1,0.008750018);
   lineFit1024->SetParLimits(1,0,0);
   lineFit1024->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1024);
   gre->Draw("p ");
   
   TF1 *lineFit1025 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1025->SetFillColor(19);
   lineFit1025->SetFillStyle(0);
   lineFit1025->SetLineColor(7);
   lineFit1025->SetLineWidth(2);
   lineFit1025->SetChisquare(1.336354e-27);
   lineFit1025->SetNDF(0);
   lineFit1025->GetXaxis()->SetLabelFont(42);
   lineFit1025->GetXaxis()->SetTitleOffset(1);
   lineFit1025->GetXaxis()->SetTitleFont(42);
   lineFit1025->GetYaxis()->SetLabelFont(42);
   lineFit1025->GetYaxis()->SetTitleFont(42);
   lineFit1025->SetParameter(0,0.225);
   lineFit1025->SetParError(0,0.1584696);
   lineFit1025->SetParLimits(0,0,0);
   lineFit1025->SetParameter(1,-0.00625);
   lineFit1025->SetParError(1,0.008750018);
   lineFit1025->SetParLimits(1,0,0);
   lineFit1025->Draw("same");
   
   Double_t 30.000000 ppm_fx1025[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1025[2] = {
   1.375,
   1.1};
   Double_t 30.000000 ppm_fex1025[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1025[2] = {
   0.02474879,
   0.02474879};
   gre = new TGraphErrors(2,30.000000 ppm_fx1025,30.000000 ppm_fy1025,30.000000 ppm_fex1025,30.000000 ppm_fey1025);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   
   TH1F *Graph_30dO000000sPppm1025 = new TH1F("Graph_30dO000000sPppm1025","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1025->SetMinimum(1.042801);
   Graph_30dO000000sPppm1025->SetMaximum(1.432199);
   Graph_30dO000000sPppm1025->SetDirectory(0);
   Graph_30dO000000sPppm1025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1025->SetLineColor(ci);
   Graph_30dO000000sPppm1025->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1025->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1025->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1025->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1025->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1025->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1025->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1025);
   
   
   TF1 *lineFit1026 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1026->SetFillColor(19);
   lineFit1026->SetFillStyle(0);
   lineFit1026->SetLineColor(8);
   lineFit1026->SetLineWidth(2);
   lineFit1026->SetChisquare(6.439654e-27);
   lineFit1026->SetNDF(0);
   lineFit1026->GetXaxis()->SetLabelFont(42);
   lineFit1026->GetXaxis()->SetTitleOffset(1);
   lineFit1026->GetXaxis()->SetTitleFont(42);
   lineFit1026->GetYaxis()->SetLabelFont(42);
   lineFit1026->GetYaxis()->SetTitleFont(42);
   lineFit1026->SetParameter(0,2.475);
   lineFit1026->SetParError(0,0.1584696);
   lineFit1026->SetParLimits(0,0,0);
   lineFit1026->SetParameter(1,-0.06875);
   lineFit1026->SetParError(1,0.008750018);
   lineFit1026->SetParLimits(1,0,0);
   lineFit1026->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit1026);
   gre->Draw("p ");
   
   TF1 *lineFit1027 = new TF1("lineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   lineFit1027->SetFillColor(19);
   lineFit1027->SetFillStyle(0);
   lineFit1027->SetLineColor(8);
   lineFit1027->SetLineWidth(2);
   lineFit1027->SetChisquare(6.439654e-27);
   lineFit1027->SetNDF(0);
   lineFit1027->GetXaxis()->SetLabelFont(42);
   lineFit1027->GetXaxis()->SetTitleOffset(1);
   lineFit1027->GetXaxis()->SetTitleFont(42);
   lineFit1027->GetYaxis()->SetLabelFont(42);
   lineFit1027->GetYaxis()->SetTitleFont(42);
   lineFit1027->SetParameter(0,2.475);
   lineFit1027->SetParError(0,0.1584696);
   lineFit1027->SetParLimits(0,0,0);
   lineFit1027->SetParameter(1,-0.06875);
   lineFit1027->SetParError(1,0.008750018);
   lineFit1027->SetParLimits(1,0,0);
   lineFit1027->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("30.000000 ppm","2.46e-299 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(8);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","3.04e-310 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(7);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(7);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","   20 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","   16 ppm","lpf");
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
