void QuadScans_NSUBRUN_225_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:53:57 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(15.37571,-3.25,19.31857,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1113[2] = {
   16,
   18.3};
   Double_t -50.000000 ppm_fy1113[2] = {
   -3.171032,
   -2.772554};
   Double_t -50.000000 ppm_fex1113[2] = {
   0,
   0};
   Double_t -50.000000 ppm_fey1113[2] = {
   0.009828933,
   0.009828933};
   TGraphErrors *gre = new TGraphErrors(2,-50.000000 ppm_fx1113,-50.000000 ppm_fy1113,-50.000000 ppm_fex1113,-50.000000 ppm_fey1113);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1113 = new TH1F("Graph_mI50dO000000sPppm1113","",100,15.77,18.53);
   Graph_mI50dO000000sPppm1113->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1113->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1113->SetDirectory(0);
   Graph_mI50dO000000sPppm1113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1113->SetLineColor(ci);
   Graph_mI50dO000000sPppm1113->GetXaxis()->SetTitle("QHV [kV]");
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
   
   
   TF1 *quadLineFit1114 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1114->SetFillColor(19);
   quadLineFit1114->SetFillStyle(0);
   quadLineFit1114->SetLineWidth(2);
   quadLineFit1114->SetChisquare(2.508198e-16);
   quadLineFit1114->SetNDF(0);
   quadLineFit1114->GetXaxis()->SetLabelFont(42);
   quadLineFit1114->GetXaxis()->SetTitleOffset(1);
   quadLineFit1114->GetXaxis()->SetTitleFont(42);
   quadLineFit1114->GetYaxis()->SetLabelFont(42);
   quadLineFit1114->GetYaxis()->SetTitleFont(42);
   quadLineFit1114->SetParameter(0,-5.943058);
   quadLineFit1114->SetParError(0,0.10388);
   quadLineFit1114->SetParLimits(0,0,0);
   quadLineFit1114->SetParameter(1,0.1732516);
   quadLineFit1114->SetParError(1,0.00604357);
   quadLineFit1114->SetParLimits(1,0,0);
   quadLineFit1114->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1114);
   gre->Draw("ap");
   
   TF1 *quadLineFit1115 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1115->SetFillColor(19);
   quadLineFit1115->SetFillStyle(0);
   quadLineFit1115->SetLineWidth(2);
   quadLineFit1115->SetChisquare(2.508198e-16);
   quadLineFit1115->SetNDF(0);
   quadLineFit1115->GetXaxis()->SetLabelFont(42);
   quadLineFit1115->GetXaxis()->SetTitleOffset(1);
   quadLineFit1115->GetXaxis()->SetTitleFont(42);
   quadLineFit1115->GetYaxis()->SetLabelFont(42);
   quadLineFit1115->GetYaxis()->SetTitleFont(42);
   quadLineFit1115->SetParameter(0,-5.943058);
   quadLineFit1115->SetParError(0,0.10388);
   quadLineFit1115->SetParLimits(0,0,0);
   quadLineFit1115->SetParameter(1,0.1732516);
   quadLineFit1115->SetParError(1,0.00604357);
   quadLineFit1115->SetParLimits(1,0,0);
   quadLineFit1115->Draw("same");
   
   Double_t -25.000000 ppm_fx1115[2] = {
   16,
   18.3};
   Double_t -25.000000 ppm_fy1115[2] = {
   -1.284102,
   -1.120079};
   Double_t -25.000000 ppm_fex1115[2] = {
   0,
   0};
   Double_t -25.000000 ppm_fey1115[2] = {
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(2,-25.000000 ppm_fx1115,-25.000000 ppm_fy1115,-25.000000 ppm_fex1115,-25.000000 ppm_fey1115);
   gre->SetName("-25.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI25dO000000sPppm1115 = new TH1F("Graph_mI25dO000000sPppm1115","Graph",100,15.77,18.53);
   Graph_mI25dO000000sPppm1115->SetMinimum(-1.3123);
   Graph_mI25dO000000sPppm1115->SetMaximum(-1.091882);
   Graph_mI25dO000000sPppm1115->SetDirectory(0);
   Graph_mI25dO000000sPppm1115->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI25dO000000sPppm1115->SetLineColor(ci);
   Graph_mI25dO000000sPppm1115->GetXaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1115->GetXaxis()->SetTitleOffset(1);
   Graph_mI25dO000000sPppm1115->GetXaxis()->SetTitleFont(42);
   Graph_mI25dO000000sPppm1115->GetYaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1115->GetYaxis()->SetTitleFont(42);
   Graph_mI25dO000000sPppm1115->GetZaxis()->SetLabelFont(42);
   Graph_mI25dO000000sPppm1115->GetZaxis()->SetTitleOffset(1);
   Graph_mI25dO000000sPppm1115->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-25.000000 ppm1115);
   
   
   TF1 *quadLineFit1116 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1116->SetFillColor(19);
   quadLineFit1116->SetFillStyle(0);
   quadLineFit1116->SetLineColor(2);
   quadLineFit1116->SetLineWidth(2);
   quadLineFit1116->SetChisquare(6.524218e-20);
   quadLineFit1116->SetNDF(0);
   quadLineFit1116->GetXaxis()->SetLabelFont(42);
   quadLineFit1116->GetXaxis()->SetTitleOffset(1);
   quadLineFit1116->GetXaxis()->SetTitleFont(42);
   quadLineFit1116->GetYaxis()->SetLabelFont(42);
   quadLineFit1116->GetYaxis()->SetTitleFont(42);
   quadLineFit1116->SetParameter(0,-2.425135);
   quadLineFit1116->SetParError(0,0.10388);
   quadLineFit1116->SetParLimits(0,0,0);
   quadLineFit1116->SetParameter(1,0.07131456);
   quadLineFit1116->SetParError(1,0.00604357);
   quadLineFit1116->SetParLimits(1,0,0);
   quadLineFit1116->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1116);
   gre->Draw("p ");
   
   TF1 *quadLineFit1117 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1117->SetFillColor(19);
   quadLineFit1117->SetFillStyle(0);
   quadLineFit1117->SetLineColor(2);
   quadLineFit1117->SetLineWidth(2);
   quadLineFit1117->SetChisquare(6.524218e-20);
   quadLineFit1117->SetNDF(0);
   quadLineFit1117->GetXaxis()->SetLabelFont(42);
   quadLineFit1117->GetXaxis()->SetTitleOffset(1);
   quadLineFit1117->GetXaxis()->SetTitleFont(42);
   quadLineFit1117->GetYaxis()->SetLabelFont(42);
   quadLineFit1117->GetYaxis()->SetTitleFont(42);
   quadLineFit1117->SetParameter(0,-2.425135);
   quadLineFit1117->SetParError(0,0.10388);
   quadLineFit1117->SetParLimits(0,0,0);
   quadLineFit1117->SetParameter(1,0.07131456);
   quadLineFit1117->SetParError(1,0.00604357);
   quadLineFit1117->SetParLimits(1,0,0);
   quadLineFit1117->Draw("same");
   
   Double_t 0.000000 ppm_fx1117[2] = {
   16,
   18.3};
   Double_t 0.000000 ppm_fy1117[2] = {
   0.5989453,
   0.5224457};
   Double_t 0.000000 ppm_fex1117[2] = {
   0,
   0};
   Double_t 0.000000 ppm_fey1117[2] = {
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(2,0.000000 ppm_fx1117,0.000000 ppm_fy1117,0.000000 ppm_fex1117,0.000000 ppm_fey1117);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_0dO000000sPppm1117 = new TH1F("Graph_0dO000000sPppm1117","Graph",100,15.77,18.53);
   Graph_0dO000000sPppm1117->SetMinimum(0.5030011);
   Graph_0dO000000sPppm1117->SetMaximum(0.61839);
   Graph_0dO000000sPppm1117->SetDirectory(0);
   Graph_0dO000000sPppm1117->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1117->SetLineColor(ci);
   Graph_0dO000000sPppm1117->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1117->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1117->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1117->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1117->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1117->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1117->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1117->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1117);
   
   
   TF1 *quadLineFit1118 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1118->SetFillColor(19);
   quadLineFit1118->SetFillStyle(0);
   quadLineFit1118->SetLineColor(3);
   quadLineFit1118->SetLineWidth(2);
   quadLineFit1118->SetChisquare(6.613101e-21);
   quadLineFit1118->SetNDF(0);
   quadLineFit1118->GetXaxis()->SetLabelFont(42);
   quadLineFit1118->GetXaxis()->SetTitleOffset(1);
   quadLineFit1118->GetXaxis()->SetTitleFont(42);
   quadLineFit1118->GetYaxis()->SetLabelFont(42);
   quadLineFit1118->GetYaxis()->SetTitleFont(42);
   quadLineFit1118->SetParameter(0,1.131116);
   quadLineFit1118->SetParError(0,0.10388);
   quadLineFit1118->SetParLimits(0,0,0);
   quadLineFit1118->SetParameter(1,-0.03326067);
   quadLineFit1118->SetParError(1,0.00604357);
   quadLineFit1118->SetParLimits(1,0,0);
   quadLineFit1118->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1118);
   gre->Draw("p ");
   
   TF1 *quadLineFit1119 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1119->SetFillColor(19);
   quadLineFit1119->SetFillStyle(0);
   quadLineFit1119->SetLineColor(3);
   quadLineFit1119->SetLineWidth(2);
   quadLineFit1119->SetChisquare(6.613101e-21);
   quadLineFit1119->SetNDF(0);
   quadLineFit1119->GetXaxis()->SetLabelFont(42);
   quadLineFit1119->GetXaxis()->SetTitleOffset(1);
   quadLineFit1119->GetXaxis()->SetTitleFont(42);
   quadLineFit1119->GetYaxis()->SetLabelFont(42);
   quadLineFit1119->GetYaxis()->SetTitleFont(42);
   quadLineFit1119->SetParameter(0,1.131116);
   quadLineFit1119->SetParError(0,0.10388);
   quadLineFit1119->SetParLimits(0,0,0);
   quadLineFit1119->SetParameter(1,-0.03326067);
   quadLineFit1119->SetParError(1,0.00604357);
   quadLineFit1119->SetParLimits(1,0,0);
   quadLineFit1119->Draw("same");
   
   Double_t 25.000000 ppm_fx1119[2] = {
   16,
   18.3};
   Double_t 25.000000 ppm_fy1119[2] = {
   2.477581,
   2.162178};
   Double_t 25.000000 ppm_fex1119[2] = {
   0,
   0};
   Double_t 25.000000 ppm_fey1119[2] = {
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(2,25.000000 ppm_fx1119,25.000000 ppm_fy1119,25.000000 ppm_fex1119,25.000000 ppm_fey1119);
   gre->SetName("25.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_25dO000000sPppm1119 = new TH1F("Graph_25dO000000sPppm1119","Graph",100,15.77,18.53);
   Graph_25dO000000sPppm1119->SetMinimum(2.118843);
   Graph_25dO000000sPppm1119->SetMaximum(2.520916);
   Graph_25dO000000sPppm1119->SetDirectory(0);
   Graph_25dO000000sPppm1119->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_25dO000000sPppm1119->SetLineColor(ci);
   Graph_25dO000000sPppm1119->GetXaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1119->GetXaxis()->SetTitleOffset(1);
   Graph_25dO000000sPppm1119->GetXaxis()->SetTitleFont(42);
   Graph_25dO000000sPppm1119->GetYaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1119->GetYaxis()->SetTitleFont(42);
   Graph_25dO000000sPppm1119->GetZaxis()->SetLabelFont(42);
   Graph_25dO000000sPppm1119->GetZaxis()->SetTitleOffset(1);
   Graph_25dO000000sPppm1119->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_25.000000 ppm1119);
   
   
   TF1 *quadLineFit1120 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1120->SetFillColor(19);
   quadLineFit1120->SetFillStyle(0);
   quadLineFit1120->SetLineColor(4);
   quadLineFit1120->SetLineWidth(2);
   quadLineFit1120->SetChisquare(2.009673e-16);
   quadLineFit1120->SetNDF(0);
   quadLineFit1120->GetXaxis()->SetLabelFont(42);
   quadLineFit1120->GetXaxis()->SetTitleOffset(1);
   quadLineFit1120->GetXaxis()->SetTitleFont(42);
   quadLineFit1120->GetYaxis()->SetLabelFont(42);
   quadLineFit1120->GetYaxis()->SetTitleFont(42);
   quadLineFit1120->SetParameter(0,4.671691);
   quadLineFit1120->SetParError(0,0.10388);
   quadLineFit1120->SetParLimits(0,0,0);
   quadLineFit1120->SetParameter(1,-0.1371319);
   quadLineFit1120->SetParError(1,0.00604357);
   quadLineFit1120->SetParLimits(1,0,0);
   quadLineFit1120->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1120);
   gre->Draw("p ");
   
   TF1 *quadLineFit1121 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1121->SetFillColor(19);
   quadLineFit1121->SetFillStyle(0);
   quadLineFit1121->SetLineColor(4);
   quadLineFit1121->SetLineWidth(2);
   quadLineFit1121->SetChisquare(2.009673e-16);
   quadLineFit1121->SetNDF(0);
   quadLineFit1121->GetXaxis()->SetLabelFont(42);
   quadLineFit1121->GetXaxis()->SetTitleOffset(1);
   quadLineFit1121->GetXaxis()->SetTitleFont(42);
   quadLineFit1121->GetYaxis()->SetLabelFont(42);
   quadLineFit1121->GetYaxis()->SetTitleFont(42);
   quadLineFit1121->SetParameter(0,4.671691);
   quadLineFit1121->SetParError(0,0.10388);
   quadLineFit1121->SetParLimits(0,0,0);
   quadLineFit1121->SetParameter(1,-0.1371319);
   quadLineFit1121->SetParError(1,0.00604357);
   quadLineFit1121->SetParLimits(1,0,0);
   quadLineFit1121->Draw("same");
   
   Double_t 50.000000 ppm_fx1121[2] = {
   16,
   18.3};
   Double_t 50.000000 ppm_fy1121[2] = {
   4.367521,
   3.82465};
   Double_t 50.000000 ppm_fex1121[2] = {
   0,
   0};
   Double_t 50.000000 ppm_fey1121[2] = {
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(2,50.000000 ppm_fx1121,50.000000 ppm_fy1121,50.000000 ppm_fex1121,50.000000 ppm_fey1121);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_50dO000000sPppm1121 = new TH1F("Graph_50dO000000sPppm1121","Graph",100,15.77,18.53);
   Graph_50dO000000sPppm1121->SetMinimum(3.758568);
   Graph_50dO000000sPppm1121->SetMaximum(4.433603);
   Graph_50dO000000sPppm1121->SetDirectory(0);
   Graph_50dO000000sPppm1121->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1121->SetLineColor(ci);
   Graph_50dO000000sPppm1121->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1121->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1121->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1121->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1121->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1121->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1121->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1121);
   
   
   TF1 *quadLineFit1122 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1122->SetFillColor(19);
   quadLineFit1122->SetFillStyle(0);
   quadLineFit1122->SetLineColor(5);
   quadLineFit1122->SetLineWidth(2);
   quadLineFit1122->SetChisquare(1.787247e-16);
   quadLineFit1122->SetNDF(0);
   quadLineFit1122->GetXaxis()->SetLabelFont(42);
   quadLineFit1122->GetXaxis()->SetTitleOffset(1);
   quadLineFit1122->GetXaxis()->SetTitleFont(42);
   quadLineFit1122->GetYaxis()->SetLabelFont(42);
   quadLineFit1122->GetYaxis()->SetTitleFont(42);
   quadLineFit1122->SetParameter(0,8.144017);
   quadLineFit1122->SetParError(0,0.10388);
   quadLineFit1122->SetParLimits(0,0,0);
   quadLineFit1122->SetParameter(1,-0.236031);
   quadLineFit1122->SetParError(1,0.00604357);
   quadLineFit1122->SetParLimits(1,0,0);
   quadLineFit1122->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1122);
   gre->Draw("p ");
   
   TF1 *quadLineFit1123 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1123->SetFillColor(19);
   quadLineFit1123->SetFillStyle(0);
   quadLineFit1123->SetLineColor(5);
   quadLineFit1123->SetLineWidth(2);
   quadLineFit1123->SetChisquare(1.787247e-16);
   quadLineFit1123->SetNDF(0);
   quadLineFit1123->GetXaxis()->SetLabelFont(42);
   quadLineFit1123->GetXaxis()->SetTitleOffset(1);
   quadLineFit1123->GetXaxis()->SetTitleFont(42);
   quadLineFit1123->GetYaxis()->SetLabelFont(42);
   quadLineFit1123->GetYaxis()->SetTitleFont(42);
   quadLineFit1123->SetParameter(0,8.144017);
   quadLineFit1123->SetParError(0,0.10388);
   quadLineFit1123->SetParLimits(0,0,0);
   quadLineFit1123->SetParameter(1,-0.236031);
   quadLineFit1123->SetParError(1,0.00604357);
   quadLineFit1123->SetParLimits(1,0,0);
   quadLineFit1123->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("50.000000 ppm","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(5);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("25.000000 ppm","   25 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("0.000000 ppm","    0 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-25.000000 ppm","  #minus25 ppm","lpf");
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
