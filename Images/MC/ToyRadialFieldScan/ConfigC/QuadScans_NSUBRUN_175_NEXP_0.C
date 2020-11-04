void QuadScans_NSUBRUN_175_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:20:02 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1097[3] = {
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1097[3] = {
   -3.142356,
   -2.805375,
   -2.54731};
   Double_t -50.000000 ppm_fex1097[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1097[3] = {
   0.01115179,
   0.01115179,
   0.01115179};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1097,-50.000000 ppm_fy1097,-50.000000 ppm_fex1097,-50.000000 ppm_fey1097);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1097 = new TH1F("Graph_mI50dO000000sPppm1097","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1097->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1097->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1097->SetDirectory(0);
   Graph_mI50dO000000sPppm1097->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1097->SetLineColor(ci);
   Graph_mI50dO000000sPppm1097->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1097->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1097->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1097->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1097->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1097->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1097->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1097->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1097->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1097->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1097->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1097->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1097->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1097->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1097->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1097);
   
   
   TF1 *quadLineFit1098 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1098->SetFillColor(19);
   quadLineFit1098->SetFillStyle(0);
   quadLineFit1098->SetLineWidth(2);
   quadLineFit1098->SetChisquare(8.346244);
   quadLineFit1098->SetNDF(1);
   quadLineFit1098->GetXaxis()->SetLabelFont(42);
   quadLineFit1098->GetXaxis()->SetTitleOffset(1);
   quadLineFit1098->GetXaxis()->SetTitleFont(42);
   quadLineFit1098->GetYaxis()->SetLabelFont(42);
   quadLineFit1098->GetYaxis()->SetTitleFont(42);
   quadLineFit1098->SetParameter(0,-5.509387);
   quadLineFit1098->SetParError(0,0.07126101);
   quadLineFit1098->SetParLimits(0,0,0);
   quadLineFit1098->SetParameter(1,0.1487615);
   quadLineFit1098->SetParError(1,0.003942753);
   quadLineFit1098->SetParLimits(1,0,0);
   quadLineFit1098->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1098);
   gre->Draw("ap");
   
   TF1 *quadLineFit1099 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1099->SetFillColor(19);
   quadLineFit1099->SetFillStyle(0);
   quadLineFit1099->SetLineWidth(2);
   quadLineFit1099->SetChisquare(8.346244);
   quadLineFit1099->SetNDF(1);
   quadLineFit1099->GetXaxis()->SetLabelFont(42);
   quadLineFit1099->GetXaxis()->SetTitleOffset(1);
   quadLineFit1099->GetXaxis()->SetTitleFont(42);
   quadLineFit1099->GetYaxis()->SetLabelFont(42);
   quadLineFit1099->GetYaxis()->SetTitleFont(42);
   quadLineFit1099->SetParameter(0,-5.509387);
   quadLineFit1099->SetParError(0,0.07126101);
   quadLineFit1099->SetParLimits(0,0,0);
   quadLineFit1099->SetParameter(1,0.1487615);
   quadLineFit1099->SetParError(1,0.003942753);
   quadLineFit1099->SetParLimits(1,0,0);
   quadLineFit1099->Draw("same");
   
   Double_t -30.000000 ppm_fx1099[3] = {
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1099[3] = {
   -1.644666,
   -1.464542,
   -1.328235};
   Double_t -30.000000 ppm_fex1099[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1099[3] = {
   0.01115179,
   0.01115179,
   0.01115179};
   gre = new TGraphErrors(3,-30.000000 ppm_fx1099,-30.000000 ppm_fy1099,-30.000000 ppm_fex1099,-30.000000 ppm_fey1099);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI30dO000000sPppm1099 = new TH1F("Graph_mI30dO000000sPppm1099","Graph",100,15.6,20.4);
   Graph_mI30dO000000sPppm1099->SetMinimum(-1.689691);
   Graph_mI30dO000000sPppm1099->SetMaximum(-1.28321);
   Graph_mI30dO000000sPppm1099->SetDirectory(0);
   Graph_mI30dO000000sPppm1099->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1099->SetLineColor(ci);
   Graph_mI30dO000000sPppm1099->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1099->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1099->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1099->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1099->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1099->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1099->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1099);
   
   
   TF1 *quadLineFit1100 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1100->SetFillColor(19);
   quadLineFit1100->SetFillStyle(0);
   quadLineFit1100->SetLineColor(2);
   quadLineFit1100->SetLineWidth(2);
   quadLineFit1100->SetChisquare(2.57293);
   quadLineFit1100->SetNDF(1);
   quadLineFit1100->GetXaxis()->SetLabelFont(42);
   quadLineFit1100->GetXaxis()->SetTitleOffset(1);
   quadLineFit1100->GetXaxis()->SetTitleFont(42);
   quadLineFit1100->GetYaxis()->SetLabelFont(42);
   quadLineFit1100->GetYaxis()->SetTitleFont(42);
   quadLineFit1100->SetParameter(0,-2.903086);
   quadLineFit1100->SetParError(0,0.07126106);
   quadLineFit1100->SetParLimits(0,0,0);
   quadLineFit1100->SetParameter(1,0.07910771);
   quadLineFit1100->SetParError(1,0.003942756);
   quadLineFit1100->SetParLimits(1,0,0);
   quadLineFit1100->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1100);
   gre->Draw("p ");
   
   TF1 *quadLineFit1101 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1101->SetFillColor(19);
   quadLineFit1101->SetFillStyle(0);
   quadLineFit1101->SetLineColor(2);
   quadLineFit1101->SetLineWidth(2);
   quadLineFit1101->SetChisquare(2.57293);
   quadLineFit1101->SetNDF(1);
   quadLineFit1101->GetXaxis()->SetLabelFont(42);
   quadLineFit1101->GetXaxis()->SetTitleOffset(1);
   quadLineFit1101->GetXaxis()->SetTitleFont(42);
   quadLineFit1101->GetYaxis()->SetLabelFont(42);
   quadLineFit1101->GetYaxis()->SetTitleFont(42);
   quadLineFit1101->SetParameter(0,-2.903086);
   quadLineFit1101->SetParError(0,0.07126106);
   quadLineFit1101->SetParLimits(0,0,0);
   quadLineFit1101->SetParameter(1,0.07910771);
   quadLineFit1101->SetParError(1,0.003942756);
   quadLineFit1101->SetParLimits(1,0,0);
   quadLineFit1101->Draw("same");
   
   Double_t -10.000000 ppm_fx1101[3] = {
   16,
   18,
   20};
   Double_t -10.000000 ppm_fy1101[3] = {
   -0.1803445,
   -0.1210822,
   -0.1251159};
   Double_t -10.000000 ppm_fex1101[3] = {
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1101[3] = {
   0.01115179,
   0.01115179,
   0.01115179};
   gre = new TGraphErrors(3,-10.000000 ppm_fx1101,-10.000000 ppm_fy1101,-10.000000 ppm_fex1101,-10.000000 ppm_fey1101);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_mI10dO000000sPppm1101 = new TH1F("Graph_mI10dO000000sPppm1101","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1101->SetMinimum(-0.1996529);
   Graph_mI10dO000000sPppm1101->SetMaximum(-0.1017738);
   Graph_mI10dO000000sPppm1101->SetDirectory(0);
   Graph_mI10dO000000sPppm1101->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1101->SetLineColor(ci);
   Graph_mI10dO000000sPppm1101->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1101->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1101->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1101->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1101->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1101->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1101->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1101->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1101);
   
   
   TF1 *quadLineFit1102 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1102->SetFillColor(19);
   quadLineFit1102->SetFillStyle(0);
   quadLineFit1102->SetLineColor(3);
   quadLineFit1102->SetLineWidth(2);
   quadLineFit1102->SetChisquare(5.369248);
   quadLineFit1102->SetNDF(1);
   quadLineFit1102->GetXaxis()->SetLabelFont(42);
   quadLineFit1102->GetXaxis()->SetTitleOffset(1);
   quadLineFit1102->GetXaxis()->SetTitleFont(42);
   quadLineFit1102->GetYaxis()->SetLabelFont(42);
   quadLineFit1102->GetYaxis()->SetTitleFont(42);
   quadLineFit1102->SetParameter(0,-0.3907097);
   quadLineFit1102->SetParError(0,0.07126074);
   quadLineFit1102->SetParLimits(0,0,0);
   quadLineFit1102->SetParameter(1,0.01380716);
   quadLineFit1102->SetParError(1,0.003942738);
   quadLineFit1102->SetParLimits(1,0,0);
   quadLineFit1102->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1102);
   gre->Draw("p ");
   
   TF1 *quadLineFit1103 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1103->SetFillColor(19);
   quadLineFit1103->SetFillStyle(0);
   quadLineFit1103->SetLineColor(3);
   quadLineFit1103->SetLineWidth(2);
   quadLineFit1103->SetChisquare(5.369248);
   quadLineFit1103->SetNDF(1);
   quadLineFit1103->GetXaxis()->SetLabelFont(42);
   quadLineFit1103->GetXaxis()->SetTitleOffset(1);
   quadLineFit1103->GetXaxis()->SetTitleFont(42);
   quadLineFit1103->GetYaxis()->SetLabelFont(42);
   quadLineFit1103->GetYaxis()->SetTitleFont(42);
   quadLineFit1103->SetParameter(0,-0.3907097);
   quadLineFit1103->SetParError(0,0.07126074);
   quadLineFit1103->SetParLimits(0,0,0);
   quadLineFit1103->SetParameter(1,0.01380716);
   quadLineFit1103->SetParError(1,0.003942738);
   quadLineFit1103->SetParLimits(1,0,0);
   quadLineFit1103->Draw("same");
   
   Double_t 10.000000 ppm_fx1103[3] = {
   16,
   18,
   20};
   Double_t 10.000000 ppm_fy1103[3] = {
   1.362906,
   1.206372,
   1.097422};
   Double_t 10.000000 ppm_fex1103[3] = {
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1103[3] = {
   0.01115179,
   0.01115179,
   0.01115179};
   gre = new TGraphErrors(3,10.000000 ppm_fx1103,10.000000 ppm_fy1103,10.000000 ppm_fex1103,10.000000 ppm_fey1103);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_10dO000000sPppm1103 = new TH1F("Graph_10dO000000sPppm1103","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1103->SetMinimum(1.057492);
   Graph_10dO000000sPppm1103->SetMaximum(1.402837);
   Graph_10dO000000sPppm1103->SetDirectory(0);
   Graph_10dO000000sPppm1103->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1103->SetLineColor(ci);
   Graph_10dO000000sPppm1103->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1103->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1103->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1103->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1103->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1103->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1103->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1103);
   
   
   TF1 *quadLineFit1104 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1104->SetFillColor(19);
   quadLineFit1104->SetFillStyle(0);
   quadLineFit1104->SetLineColor(4);
   quadLineFit1104->SetLineWidth(2);
   quadLineFit1104->SetChisquare(3.034478);
   quadLineFit1104->SetNDF(1);
   quadLineFit1104->GetXaxis()->SetLabelFont(42);
   quadLineFit1104->GetXaxis()->SetTitleOffset(1);
   quadLineFit1104->GetXaxis()->SetTitleFont(42);
   quadLineFit1104->GetYaxis()->SetLabelFont(42);
   quadLineFit1104->GetYaxis()->SetTitleFont(42);
   quadLineFit1104->SetParameter(0,2.41691);
   quadLineFit1104->SetParError(0,0.07126266);
   quadLineFit1104->SetParLimits(0,0,0);
   quadLineFit1104->SetParameter(1,-0.06637092);
   quadLineFit1104->SetParError(1,0.003942845);
   quadLineFit1104->SetParLimits(1,0,0);
   quadLineFit1104->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1104);
   gre->Draw("p ");
   
   TF1 *quadLineFit1105 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1105->SetFillColor(19);
   quadLineFit1105->SetFillStyle(0);
   quadLineFit1105->SetLineColor(4);
   quadLineFit1105->SetLineWidth(2);
   quadLineFit1105->SetChisquare(3.034478);
   quadLineFit1105->SetNDF(1);
   quadLineFit1105->GetXaxis()->SetLabelFont(42);
   quadLineFit1105->GetXaxis()->SetTitleOffset(1);
   quadLineFit1105->GetXaxis()->SetTitleFont(42);
   quadLineFit1105->GetYaxis()->SetLabelFont(42);
   quadLineFit1105->GetYaxis()->SetTitleFont(42);
   quadLineFit1105->SetParameter(0,2.41691);
   quadLineFit1105->SetParError(0,0.07126266);
   quadLineFit1105->SetParLimits(0,0,0);
   quadLineFit1105->SetParameter(1,-0.06637092);
   quadLineFit1105->SetParError(1,0.003942845);
   quadLineFit1105->SetParLimits(1,0,0);
   quadLineFit1105->Draw("same");
   
   Double_t 30.000000 ppm_fx1105[3] = {
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1105[3] = {
   2.856991,
   2.550094,
   2.294527};
   Double_t 30.000000 ppm_fex1105[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1105[3] = {
   0.01115179,
   0.01115179,
   0.01115179};
   gre = new TGraphErrors(3,30.000000 ppm_fx1105,30.000000 ppm_fy1105,30.000000 ppm_fex1105,30.000000 ppm_fey1105);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_30dO000000sPppm1105 = new TH1F("Graph_30dO000000sPppm1105","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1105->SetMinimum(2.224898);
   Graph_30dO000000sPppm1105->SetMaximum(2.926619);
   Graph_30dO000000sPppm1105->SetDirectory(0);
   Graph_30dO000000sPppm1105->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1105->SetLineColor(ci);
   Graph_30dO000000sPppm1105->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1105->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1105->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1105->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1105->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1105->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1105->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1105->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1105);
   
   
   TF1 *quadLineFit1106 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1106->SetFillColor(19);
   quadLineFit1106->SetFillStyle(0);
   quadLineFit1106->SetLineColor(5);
   quadLineFit1106->SetLineWidth(2);
   quadLineFit1106->SetChisquare(3.530889);
   quadLineFit1106->SetNDF(1);
   quadLineFit1106->GetXaxis()->SetLabelFont(42);
   quadLineFit1106->GetXaxis()->SetTitleOffset(1);
   quadLineFit1106->GetXaxis()->SetTitleFont(42);
   quadLineFit1106->GetYaxis()->SetLabelFont(42);
   quadLineFit1106->GetYaxis()->SetTitleFont(42);
   quadLineFit1106->SetParameter(0,5.098292);
   quadLineFit1106->SetParError(0,0.07126359);
   quadLineFit1106->SetParLimits(0,0,0);
   quadLineFit1106->SetParameter(1,-0.140616);
   quadLineFit1106->SetParError(1,0.003942897);
   quadLineFit1106->SetParLimits(1,0,0);
   quadLineFit1106->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1106);
   gre->Draw("p ");
   
   TF1 *quadLineFit1107 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1107->SetFillColor(19);
   quadLineFit1107->SetFillStyle(0);
   quadLineFit1107->SetLineColor(5);
   quadLineFit1107->SetLineWidth(2);
   quadLineFit1107->SetChisquare(3.530889);
   quadLineFit1107->SetNDF(1);
   quadLineFit1107->GetXaxis()->SetLabelFont(42);
   quadLineFit1107->GetXaxis()->SetTitleOffset(1);
   quadLineFit1107->GetXaxis()->SetTitleFont(42);
   quadLineFit1107->GetYaxis()->SetLabelFont(42);
   quadLineFit1107->GetYaxis()->SetTitleFont(42);
   quadLineFit1107->SetParameter(0,5.098292);
   quadLineFit1107->SetParError(0,0.07126359);
   quadLineFit1107->SetParLimits(0,0,0);
   quadLineFit1107->SetParameter(1,-0.140616);
   quadLineFit1107->SetParError(1,0.003942897);
   quadLineFit1107->SetParLimits(1,0,0);
   quadLineFit1107->Draw("same");
   
   Double_t 50.000000 ppm_fx1107[3] = {
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1107[3] = {
   4.388661,
   3.882656,
   3.493224};
   Double_t 50.000000 ppm_fex1107[3] = {
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1107[3] = {
   0.01115179,
   0.01115179,
   0.01115179};
   gre = new TGraphErrors(3,50.000000 ppm_fx1107,50.000000 ppm_fy1107,50.000000 ppm_fex1107,50.000000 ppm_fey1107);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_50dO000000sPppm1107 = new TH1F("Graph_50dO000000sPppm1107","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1107->SetMinimum(3.390299);
   Graph_50dO000000sPppm1107->SetMaximum(4.491587);
   Graph_50dO000000sPppm1107->SetDirectory(0);
   Graph_50dO000000sPppm1107->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1107->SetLineColor(ci);
   Graph_50dO000000sPppm1107->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1107->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1107->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1107->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1107->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1107->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1107->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1107->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1107);
   
   
   TF1 *quadLineFit1108 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1108->SetFillColor(19);
   quadLineFit1108->SetFillStyle(0);
   quadLineFit1108->SetLineColor(6);
   quadLineFit1108->SetLineWidth(2);
   quadLineFit1108->SetChisquare(18.21233);
   quadLineFit1108->SetNDF(1);
   quadLineFit1108->GetXaxis()->SetLabelFont(42);
   quadLineFit1108->GetXaxis()->SetTitleOffset(1);
   quadLineFit1108->GetXaxis()->SetTitleFont(42);
   quadLineFit1108->GetYaxis()->SetLabelFont(42);
   quadLineFit1108->GetYaxis()->SetTitleFont(42);
   quadLineFit1108->SetParameter(0,7.950978);
   quadLineFit1108->SetParError(0,0.07126089);
   quadLineFit1108->SetParLimits(0,0,0);
   quadLineFit1108->SetParameter(1,-0.2238591);
   quadLineFit1108->SetParError(1,0.003942746);
   quadLineFit1108->SetParLimits(1,0,0);
   quadLineFit1108->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1108);
   gre->Draw("p ");
   
   TF1 *quadLineFit1109 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1109->SetFillColor(19);
   quadLineFit1109->SetFillStyle(0);
   quadLineFit1109->SetLineColor(6);
   quadLineFit1109->SetLineWidth(2);
   quadLineFit1109->SetChisquare(18.21233);
   quadLineFit1109->SetNDF(1);
   quadLineFit1109->GetXaxis()->SetLabelFont(42);
   quadLineFit1109->GetXaxis()->SetTitleOffset(1);
   quadLineFit1109->GetXaxis()->SetTitleFont(42);
   quadLineFit1109->GetYaxis()->SetLabelFont(42);
   quadLineFit1109->GetYaxis()->SetTitleFont(42);
   quadLineFit1109->SetParameter(0,7.950978);
   quadLineFit1109->SetParError(0,0.07126089);
   quadLineFit1109->SetParLimits(0,0,0);
   quadLineFit1109->SetParameter(1,-0.2238591);
   quadLineFit1109->SetParError(1,0.003942746);
   quadLineFit1109->SetParLimits(1,0,0);
   quadLineFit1109->Draw("same");
   
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
