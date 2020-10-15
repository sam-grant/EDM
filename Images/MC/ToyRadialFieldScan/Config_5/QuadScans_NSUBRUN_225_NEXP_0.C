void QuadScans_NSUBRUN_225_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:41:45 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(15.37571,-3.25,19.31857,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1209[2] = {
   16,
   18.3};
   Double_t -50.000000 ppm_fy1209[2] = {
   -3.162043,
   -2.764704};
   Double_t -50.000000 ppm_fex1209[2] = {
   0,
   0};
   Double_t -50.000000 ppm_fey1209[2] = {
   0.009828933,
   0.009828933};
   TGraphErrors *gre = new TGraphErrors(2,-50.000000 ppm_fx1209,-50.000000 ppm_fy1209,-50.000000 ppm_fex1209,-50.000000 ppm_fey1209);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1209 = new TH1F("Graph_mI50dO000000sPppm1209","",100,15.77,18.53);
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
   
   
   TF1 *quadLineFit1210 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1210->SetFillColor(19);
   quadLineFit1210->SetFillStyle(0);
   quadLineFit1210->SetLineWidth(2);
   quadLineFit1210->SetChisquare(8.86758e-21);
   quadLineFit1210->SetNDF(0);
   quadLineFit1210->GetXaxis()->SetLabelFont(42);
   quadLineFit1210->GetXaxis()->SetTitleOffset(1);
   quadLineFit1210->GetXaxis()->SetTitleFont(42);
   quadLineFit1210->GetYaxis()->SetLabelFont(42);
   quadLineFit1210->GetYaxis()->SetTitleFont(42);
   quadLineFit1210->SetParameter(0,-5.926137);
   quadLineFit1210->SetParError(0,0.10388);
   quadLineFit1210->SetParLimits(0,0,0);
   quadLineFit1210->SetParameter(1,0.1727559);
   quadLineFit1210->SetParError(1,0.00604357);
   quadLineFit1210->SetParLimits(1,0,0);
   quadLineFit1210->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1210);
   gre->Draw("ap");
   
   TF1 *quadLineFit1211 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1211->SetFillColor(19);
   quadLineFit1211->SetFillStyle(0);
   quadLineFit1211->SetLineWidth(2);
   quadLineFit1211->SetChisquare(8.86758e-21);
   quadLineFit1211->SetNDF(0);
   quadLineFit1211->GetXaxis()->SetLabelFont(42);
   quadLineFit1211->GetXaxis()->SetTitleOffset(1);
   quadLineFit1211->GetXaxis()->SetTitleFont(42);
   quadLineFit1211->GetYaxis()->SetLabelFont(42);
   quadLineFit1211->GetYaxis()->SetTitleFont(42);
   quadLineFit1211->SetParameter(0,-5.926137);
   quadLineFit1211->SetParError(0,0.10388);
   quadLineFit1211->SetParLimits(0,0,0);
   quadLineFit1211->SetParameter(1,0.1727559);
   quadLineFit1211->SetParError(1,0.00604357);
   quadLineFit1211->SetParLimits(1,0,0);
   quadLineFit1211->Draw("same");
   
   Double_t -40.000000 ppm_fx1211[2] = {
   16,
   18.3};
   Double_t -40.000000 ppm_fy1211[2] = {
   -2.403801,
   -2.113218};
   Double_t -40.000000 ppm_fex1211[2] = {
   0,
   0};
   Double_t -40.000000 ppm_fey1211[2] = {
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(2,-40.000000 ppm_fx1211,-40.000000 ppm_fy1211,-40.000000 ppm_fex1211,-40.000000 ppm_fey1211);
   gre->SetName("-40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI40dO000000sPppm1211 = new TH1F("Graph_mI40dO000000sPppm1211","Graph",100,15.77,18.53);
   Graph_mI40dO000000sPppm1211->SetMinimum(-2.444654);
   Graph_mI40dO000000sPppm1211->SetMaximum(-2.072366);
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
   
   
   TF1 *quadLineFit1212 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1212->SetFillColor(19);
   quadLineFit1212->SetFillStyle(0);
   quadLineFit1212->SetLineColor(2);
   quadLineFit1212->SetLineWidth(2);
   quadLineFit1212->SetChisquare(8.181587e-20);
   quadLineFit1212->SetNDF(0);
   quadLineFit1212->GetXaxis()->SetLabelFont(42);
   quadLineFit1212->GetXaxis()->SetTitleOffset(1);
   quadLineFit1212->GetXaxis()->SetTitleFont(42);
   quadLineFit1212->GetYaxis()->SetLabelFont(42);
   quadLineFit1212->GetYaxis()->SetTitleFont(42);
   quadLineFit1212->SetParameter(0,-4.425242);
   quadLineFit1212->SetParError(0,0.10388);
   quadLineFit1212->SetParLimits(0,0,0);
   quadLineFit1212->SetParameter(1,0.1263401);
   quadLineFit1212->SetParError(1,0.00604357);
   quadLineFit1212->SetParLimits(1,0,0);
   quadLineFit1212->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1212);
   gre->Draw("p ");
   
   TF1 *quadLineFit1213 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1213->SetFillColor(19);
   quadLineFit1213->SetFillStyle(0);
   quadLineFit1213->SetLineColor(2);
   quadLineFit1213->SetLineWidth(2);
   quadLineFit1213->SetChisquare(8.181587e-20);
   quadLineFit1213->SetNDF(0);
   quadLineFit1213->GetXaxis()->SetLabelFont(42);
   quadLineFit1213->GetXaxis()->SetTitleOffset(1);
   quadLineFit1213->GetXaxis()->SetTitleFont(42);
   quadLineFit1213->GetYaxis()->SetLabelFont(42);
   quadLineFit1213->GetYaxis()->SetTitleFont(42);
   quadLineFit1213->SetParameter(0,-4.425242);
   quadLineFit1213->SetParError(0,0.10388);
   quadLineFit1213->SetParLimits(0,0,0);
   quadLineFit1213->SetParameter(1,0.1263401);
   quadLineFit1213->SetParError(1,0.00604357);
   quadLineFit1213->SetParLimits(1,0,0);
   quadLineFit1213->Draw("same");
   
   Double_t -30.000000 ppm_fx1213[2] = {
   16,
   18.3};
   Double_t -30.000000 ppm_fy1213[2] = {
   -1.658715,
   -1.420529};
   Double_t -30.000000 ppm_fex1213[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1213[2] = {
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1213,-30.000000 ppm_fy1213,-30.000000 ppm_fex1213,-30.000000 ppm_fey1213);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_mI30dO000000sPppm1213 = new TH1F("Graph_mI30dO000000sPppm1213","Graph",100,15.77,18.53);
   Graph_mI30dO000000sPppm1213->SetMinimum(-1.694328);
   Graph_mI30dO000000sPppm1213->SetMaximum(-1.384916);
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
   
   
   TF1 *quadLineFit1214 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1214->SetFillColor(19);
   quadLineFit1214->SetFillStyle(0);
   quadLineFit1214->SetLineColor(3);
   quadLineFit1214->SetLineWidth(2);
   quadLineFit1214->SetChisquare(5.870295e-19);
   quadLineFit1214->SetNDF(0);
   quadLineFit1214->GetXaxis()->SetLabelFont(42);
   quadLineFit1214->GetXaxis()->SetTitleOffset(1);
   quadLineFit1214->GetXaxis()->SetTitleFont(42);
   quadLineFit1214->GetYaxis()->SetLabelFont(42);
   quadLineFit1214->GetYaxis()->SetTitleFont(42);
   quadLineFit1214->SetParameter(0,-3.315658);
   quadLineFit1214->SetParError(0,0.10388);
   quadLineFit1214->SetParLimits(0,0,0);
   quadLineFit1214->SetParameter(1,0.103559);
   quadLineFit1214->SetParError(1,0.00604357);
   quadLineFit1214->SetParLimits(1,0,0);
   quadLineFit1214->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1214);
   gre->Draw("p ");
   
   TF1 *quadLineFit1215 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1215->SetFillColor(19);
   quadLineFit1215->SetFillStyle(0);
   quadLineFit1215->SetLineColor(3);
   quadLineFit1215->SetLineWidth(2);
   quadLineFit1215->SetChisquare(5.870295e-19);
   quadLineFit1215->SetNDF(0);
   quadLineFit1215->GetXaxis()->SetLabelFont(42);
   quadLineFit1215->GetXaxis()->SetTitleOffset(1);
   quadLineFit1215->GetXaxis()->SetTitleFont(42);
   quadLineFit1215->GetYaxis()->SetLabelFont(42);
   quadLineFit1215->GetYaxis()->SetTitleFont(42);
   quadLineFit1215->SetParameter(0,-3.315658);
   quadLineFit1215->SetParError(0,0.10388);
   quadLineFit1215->SetParLimits(0,0,0);
   quadLineFit1215->SetParameter(1,0.103559);
   quadLineFit1215->SetParError(1,0.00604357);
   quadLineFit1215->SetParLimits(1,0,0);
   quadLineFit1215->Draw("same");
   
   Double_t -20.000000 ppm_fx1215[2] = {
   16,
   18.3};
   Double_t -20.000000 ppm_fy1215[2] = {
   -0.9078568,
   -0.7865439};
   Double_t -20.000000 ppm_fex1215[2] = {
   0,
   0};
   Double_t -20.000000 ppm_fey1215[2] = {
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(2,-20.000000 ppm_fx1215,-20.000000 ppm_fy1215,-20.000000 ppm_fex1215,-20.000000 ppm_fey1215);
   gre->SetName("-20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_mI20dO000000sPppm1215 = new TH1F("Graph_mI20dO000000sPppm1215","Graph",100,15.77,18.53);
   Graph_mI20dO000000sPppm1215->SetMinimum(-0.9317829);
   Graph_mI20dO000000sPppm1215->SetMaximum(-0.7626178);
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
   
   
   TF1 *quadLineFit1216 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1216->SetFillColor(19);
   quadLineFit1216->SetFillStyle(0);
   quadLineFit1216->SetLineColor(4);
   quadLineFit1216->SetLineWidth(2);
   quadLineFit1216->SetChisquare(4.368185e-18);
   quadLineFit1216->SetNDF(0);
   quadLineFit1216->GetXaxis()->SetLabelFont(42);
   quadLineFit1216->GetXaxis()->SetTitleOffset(1);
   quadLineFit1216->GetXaxis()->SetTitleFont(42);
   quadLineFit1216->GetYaxis()->SetLabelFont(42);
   quadLineFit1216->GetYaxis()->SetTitleFont(42);
   quadLineFit1216->SetParameter(0,-1.751773);
   quadLineFit1216->SetParError(0,0.10388);
   quadLineFit1216->SetParLimits(0,0,0);
   quadLineFit1216->SetParameter(1,0.05274477);
   quadLineFit1216->SetParError(1,0.00604357);
   quadLineFit1216->SetParLimits(1,0,0);
   quadLineFit1216->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1216);
   gre->Draw("p ");
   
   TF1 *quadLineFit1217 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1217->SetFillColor(19);
   quadLineFit1217->SetFillStyle(0);
   quadLineFit1217->SetLineColor(4);
   quadLineFit1217->SetLineWidth(2);
   quadLineFit1217->SetChisquare(4.368185e-18);
   quadLineFit1217->SetNDF(0);
   quadLineFit1217->GetXaxis()->SetLabelFont(42);
   quadLineFit1217->GetXaxis()->SetTitleOffset(1);
   quadLineFit1217->GetXaxis()->SetTitleFont(42);
   quadLineFit1217->GetYaxis()->SetLabelFont(42);
   quadLineFit1217->GetYaxis()->SetTitleFont(42);
   quadLineFit1217->SetParameter(0,-1.751773);
   quadLineFit1217->SetParError(0,0.10388);
   quadLineFit1217->SetParLimits(0,0,0);
   quadLineFit1217->SetParameter(1,0.05274477);
   quadLineFit1217->SetParError(1,0.00604357);
   quadLineFit1217->SetParLimits(1,0,0);
   quadLineFit1217->Draw("same");
   
   Double_t -10.000000 ppm_fx1217[2] = {
   16,
   18.3};
   Double_t -10.000000 ppm_fy1217[2] = {
   -0.1402752,
   -0.124079};
   Double_t -10.000000 ppm_fex1217[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1217[2] = {
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1217,-10.000000 ppm_fy1217,-10.000000 ppm_fex1217,-10.000000 ppm_fey1217);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   gre->SetMarkerColor(5);
   
   TH1F *Graph_mI10dO000000sPppm1217 = new TH1F("Graph_mI10dO000000sPppm1217","Graph",100,15.77,18.53);
   Graph_mI10dO000000sPppm1217->SetMinimum(-0.1536896);
   Graph_mI10dO000000sPppm1217->SetMaximum(-0.1106647);
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
   
   
   TF1 *quadLineFit1218 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1218->SetFillColor(19);
   quadLineFit1218->SetFillStyle(0);
   quadLineFit1218->SetLineColor(5);
   quadLineFit1218->SetLineWidth(2);
   quadLineFit1218->SetChisquare(4.8324e-22);
   quadLineFit1218->SetNDF(0);
   quadLineFit1218->GetXaxis()->SetLabelFont(42);
   quadLineFit1218->GetXaxis()->SetTitleOffset(1);
   quadLineFit1218->GetXaxis()->SetTitleFont(42);
   quadLineFit1218->GetYaxis()->SetLabelFont(42);
   quadLineFit1218->GetYaxis()->SetTitleFont(42);
   quadLineFit1218->SetParameter(0,-0.2529443);
   quadLineFit1218->SetParError(0,0.10388);
   quadLineFit1218->SetParLimits(0,0,0);
   quadLineFit1218->SetParameter(1,0.007041814);
   quadLineFit1218->SetParError(1,0.00604357);
   quadLineFit1218->SetParLimits(1,0,0);
   quadLineFit1218->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1218);
   gre->Draw("p ");
   
   TF1 *quadLineFit1219 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1219->SetFillColor(19);
   quadLineFit1219->SetFillStyle(0);
   quadLineFit1219->SetLineColor(5);
   quadLineFit1219->SetLineWidth(2);
   quadLineFit1219->SetChisquare(4.8324e-22);
   quadLineFit1219->SetNDF(0);
   quadLineFit1219->GetXaxis()->SetLabelFont(42);
   quadLineFit1219->GetXaxis()->SetTitleOffset(1);
   quadLineFit1219->GetXaxis()->SetTitleFont(42);
   quadLineFit1219->GetYaxis()->SetLabelFont(42);
   quadLineFit1219->GetYaxis()->SetTitleFont(42);
   quadLineFit1219->SetParameter(0,-0.2529443);
   quadLineFit1219->SetParError(0,0.10388);
   quadLineFit1219->SetParLimits(0,0,0);
   quadLineFit1219->SetParameter(1,0.007041814);
   quadLineFit1219->SetParError(1,0.00604357);
   quadLineFit1219->SetParLimits(1,0,0);
   quadLineFit1219->Draw("same");
   
   Double_t 0.000000 ppm_fx1219[2] = {
   16,
   18.3};
   Double_t 0.000000 ppm_fy1219[2] = {
   0.608793,
   0.5304154};
   Double_t 0.000000 ppm_fex1219[2] = {
   0,
   0};
   Double_t 0.000000 ppm_fey1219[2] = {
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(2,0.000000 ppm_fx1219,0.000000 ppm_fy1219,0.000000 ppm_fex1219,0.000000 ppm_fey1219);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   gre->SetMarkerColor(6);
   
   TH1F *Graph_0dO000000sPppm1219 = new TH1F("Graph_0dO000000sPppm1219","Graph",100,15.77,18.53);
   Graph_0dO000000sPppm1219->SetMinimum(0.5107829);
   Graph_0dO000000sPppm1219->SetMaximum(0.6284254);
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
   
   
   TF1 *quadLineFit1220 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1220->SetFillColor(19);
   quadLineFit1220->SetFillStyle(0);
   quadLineFit1220->SetLineColor(6);
   quadLineFit1220->SetLineWidth(2);
   quadLineFit1220->SetChisquare(1.168104e-20);
   quadLineFit1220->SetNDF(0);
   quadLineFit1220->GetXaxis()->SetLabelFont(42);
   quadLineFit1220->GetXaxis()->SetTitleOffset(1);
   quadLineFit1220->GetXaxis()->SetTitleFont(42);
   quadLineFit1220->GetYaxis()->SetLabelFont(42);
   quadLineFit1220->GetYaxis()->SetTitleFont(42);
   quadLineFit1220->SetParameter(0,1.154028);
   quadLineFit1220->SetParError(0,0.10388);
   quadLineFit1220->SetParLimits(0,0,0);
   quadLineFit1220->SetParameter(1,-0.03407719);
   quadLineFit1220->SetParError(1,0.00604357);
   quadLineFit1220->SetParLimits(1,0,0);
   quadLineFit1220->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1220);
   gre->Draw("p ");
   
   TF1 *quadLineFit1221 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1221->SetFillColor(19);
   quadLineFit1221->SetFillStyle(0);
   quadLineFit1221->SetLineColor(6);
   quadLineFit1221->SetLineWidth(2);
   quadLineFit1221->SetChisquare(1.168104e-20);
   quadLineFit1221->SetNDF(0);
   quadLineFit1221->GetXaxis()->SetLabelFont(42);
   quadLineFit1221->GetXaxis()->SetTitleOffset(1);
   quadLineFit1221->GetXaxis()->SetTitleFont(42);
   quadLineFit1221->GetYaxis()->SetLabelFont(42);
   quadLineFit1221->GetYaxis()->SetTitleFont(42);
   quadLineFit1221->SetParameter(0,1.154028);
   quadLineFit1221->SetParError(0,0.10388);
   quadLineFit1221->SetParLimits(0,0,0);
   quadLineFit1221->SetParameter(1,-0.03407719);
   quadLineFit1221->SetParError(1,0.00604357);
   quadLineFit1221->SetParLimits(1,0,0);
   quadLineFit1221->Draw("same");
   
   Double_t 10.000000 ppm_fx1221[2] = {
   16,
   18.3};
   Double_t 10.000000 ppm_fy1221[2] = {
   1.34847,
   1.187807};
   Double_t 10.000000 ppm_fex1221[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1221[2] = {
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(2,10.000000 ppm_fx1221,10.000000 ppm_fy1221,10.000000 ppm_fex1221,10.000000 ppm_fey1221);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(7);
   gre->SetMarkerColor(7);
   
   TH1F *Graph_10dO000000sPppm1221 = new TH1F("Graph_10dO000000sPppm1221","Graph",100,15.77,18.53);
   Graph_10dO000000sPppm1221->SetMinimum(1.159946);
   Graph_10dO000000sPppm1221->SetMaximum(1.376331);
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
   
   
   TF1 *quadLineFit1222 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1222->SetFillColor(19);
   quadLineFit1222->SetFillStyle(0);
   quadLineFit1222->SetLineColor(7);
   quadLineFit1222->SetLineWidth(2);
   quadLineFit1222->SetChisquare(7.365211e-22);
   quadLineFit1222->SetNDF(0);
   quadLineFit1222->GetXaxis()->SetLabelFont(42);
   quadLineFit1222->GetXaxis()->SetTitleOffset(1);
   quadLineFit1222->GetXaxis()->SetTitleFont(42);
   quadLineFit1222->GetYaxis()->SetLabelFont(42);
   quadLineFit1222->GetYaxis()->SetTitleFont(42);
   quadLineFit1222->SetParameter(0,2.466123);
   quadLineFit1222->SetParError(0,0.10388);
   quadLineFit1222->SetParLimits(0,0,0);
   quadLineFit1222->SetParameter(1,-0.06985332);
   quadLineFit1222->SetParError(1,0.00604357);
   quadLineFit1222->SetParLimits(1,0,0);
   quadLineFit1222->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1222);
   gre->Draw("p ");
   
   TF1 *quadLineFit1223 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1223->SetFillColor(19);
   quadLineFit1223->SetFillStyle(0);
   quadLineFit1223->SetLineColor(7);
   quadLineFit1223->SetLineWidth(2);
   quadLineFit1223->SetChisquare(7.365211e-22);
   quadLineFit1223->SetNDF(0);
   quadLineFit1223->GetXaxis()->SetLabelFont(42);
   quadLineFit1223->GetXaxis()->SetTitleOffset(1);
   quadLineFit1223->GetXaxis()->SetTitleFont(42);
   quadLineFit1223->GetYaxis()->SetLabelFont(42);
   quadLineFit1223->GetYaxis()->SetTitleFont(42);
   quadLineFit1223->SetParameter(0,2.466123);
   quadLineFit1223->SetParError(0,0.10388);
   quadLineFit1223->SetParLimits(0,0,0);
   quadLineFit1223->SetParameter(1,-0.06985332);
   quadLineFit1223->SetParError(1,0.00604357);
   quadLineFit1223->SetParLimits(1,0,0);
   quadLineFit1223->Draw("same");
   
   Double_t 20.000000 ppm_fx1223[2] = {
   16,
   18.3};
   Double_t 20.000000 ppm_fy1223[2] = {
   2.114642,
   1.838502};
   Double_t 20.000000 ppm_fex1223[2] = {
   0,
   0};
   Double_t 20.000000 ppm_fey1223[2] = {
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(2,20.000000 ppm_fx1223,20.000000 ppm_fy1223,20.000000 ppm_fex1223,20.000000 ppm_fey1223);
   gre->SetName("20.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(8);
   gre->SetMarkerColor(8);
   
   TH1F *Graph_20dO000000sPppm1223 = new TH1F("Graph_20dO000000sPppm1223","Graph",100,15.77,18.53);
   Graph_20dO000000sPppm1223->SetMinimum(1.799093);
   Graph_20dO000000sPppm1223->SetMaximum(2.15405);
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
   
   
   TF1 *quadLineFit1224 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1224->SetFillColor(19);
   quadLineFit1224->SetFillStyle(0);
   quadLineFit1224->SetLineColor(8);
   quadLineFit1224->SetLineWidth(2);
   quadLineFit1224->SetChisquare(5.740752e-19);
   quadLineFit1224->SetNDF(0);
   quadLineFit1224->GetXaxis()->SetLabelFont(42);
   quadLineFit1224->GetXaxis()->SetTitleOffset(1);
   quadLineFit1224->GetXaxis()->SetTitleFont(42);
   quadLineFit1224->GetYaxis()->SetLabelFont(42);
   quadLineFit1224->GetYaxis()->SetTitleFont(42);
   quadLineFit1224->SetParameter(0,4.035616);
   quadLineFit1224->SetParError(0,0.10388);
   quadLineFit1224->SetParLimits(0,0,0);
   quadLineFit1224->SetParameter(1,-0.1200609);
   quadLineFit1224->SetParError(1,0.00604357);
   quadLineFit1224->SetParLimits(1,0,0);
   quadLineFit1224->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1224);
   gre->Draw("p ");
   
   TF1 *quadLineFit1225 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1225->SetFillColor(19);
   quadLineFit1225->SetFillStyle(0);
   quadLineFit1225->SetLineColor(8);
   quadLineFit1225->SetLineWidth(2);
   quadLineFit1225->SetChisquare(5.740752e-19);
   quadLineFit1225->SetNDF(0);
   quadLineFit1225->GetXaxis()->SetLabelFont(42);
   quadLineFit1225->GetXaxis()->SetTitleOffset(1);
   quadLineFit1225->GetXaxis()->SetTitleFont(42);
   quadLineFit1225->GetYaxis()->SetLabelFont(42);
   quadLineFit1225->GetYaxis()->SetTitleFont(42);
   quadLineFit1225->SetParameter(0,4.035616);
   quadLineFit1225->SetParError(0,0.10388);
   quadLineFit1225->SetParLimits(0,0,0);
   quadLineFit1225->SetParameter(1,-0.1200609);
   quadLineFit1225->SetParError(1,0.00604357);
   quadLineFit1225->SetParLimits(1,0,0);
   quadLineFit1225->Draw("same");
   
   Double_t 30.000000 ppm_fx1225[2] = {
   16,
   18.3};
   Double_t 30.000000 ppm_fy1225[2] = {
   2.867413,
   2.498315};
   Double_t 30.000000 ppm_fex1225[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1225[2] = {
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(2,30.000000 ppm_fx1225,30.000000 ppm_fy1225,30.000000 ppm_fex1225,30.000000 ppm_fey1225);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(9);
   gre->SetMarkerColor(9);
   
   TH1F *Graph_30dO000000sPppm1225 = new TH1F("Graph_30dO000000sPppm1225","Graph",100,15.77,18.53);
   Graph_30dO000000sPppm1225->SetMinimum(2.44961);
   Graph_30dO000000sPppm1225->SetMaximum(2.916118);
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
   
   
   TF1 *quadLineFit1226 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1226->SetFillColor(19);
   quadLineFit1226->SetFillStyle(0);
   quadLineFit1226->SetLineColor(9);
   quadLineFit1226->SetLineWidth(2);
   quadLineFit1226->SetChisquare(2.979787e-18);
   quadLineFit1226->SetNDF(0);
   quadLineFit1226->GetXaxis()->SetLabelFont(42);
   quadLineFit1226->GetXaxis()->SetTitleOffset(1);
   quadLineFit1226->GetXaxis()->SetTitleFont(42);
   quadLineFit1226->GetYaxis()->SetLabelFont(42);
   quadLineFit1226->GetYaxis()->SetTitleFont(42);
   quadLineFit1226->SetParameter(0,5.435054);
   quadLineFit1226->SetParError(0,0.10388);
   quadLineFit1226->SetParLimits(0,0,0);
   quadLineFit1226->SetParameter(1,-0.1604775);
   quadLineFit1226->SetParError(1,0.00604357);
   quadLineFit1226->SetParLimits(1,0,0);
   quadLineFit1226->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1226);
   gre->Draw("p ");
   
   TF1 *quadLineFit1227 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1227->SetFillColor(19);
   quadLineFit1227->SetFillStyle(0);
   quadLineFit1227->SetLineColor(9);
   quadLineFit1227->SetLineWidth(2);
   quadLineFit1227->SetChisquare(2.979787e-18);
   quadLineFit1227->SetNDF(0);
   quadLineFit1227->GetXaxis()->SetLabelFont(42);
   quadLineFit1227->GetXaxis()->SetTitleOffset(1);
   quadLineFit1227->GetXaxis()->SetTitleFont(42);
   quadLineFit1227->GetYaxis()->SetLabelFont(42);
   quadLineFit1227->GetYaxis()->SetTitleFont(42);
   quadLineFit1227->SetParameter(0,5.435054);
   quadLineFit1227->SetParError(0,0.10388);
   quadLineFit1227->SetParLimits(0,0,0);
   quadLineFit1227->SetParameter(1,-0.1604775);
   quadLineFit1227->SetParError(1,0.00604357);
   quadLineFit1227->SetParLimits(1,0,0);
   quadLineFit1227->Draw("same");
   
   Double_t 40.000000 ppm_fx1227[2] = {
   16,
   18.3};
   Double_t 40.000000 ppm_fy1227[2] = {
   3.616703,
   3.177287};
   Double_t 40.000000 ppm_fex1227[2] = {
   0,
   0};
   Double_t 40.000000 ppm_fey1227[2] = {
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(2,40.000000 ppm_fx1227,40.000000 ppm_fy1227,40.000000 ppm_fex1227,40.000000 ppm_fey1227);
   gre->SetName("40.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(10);
   gre->SetMarkerColor(10);
   
   TH1F *Graph_40dO000000sPppm1227 = new TH1F("Graph_40dO000000sPppm1227","Graph",100,15.77,18.53);
   Graph_40dO000000sPppm1227->SetMinimum(3.12155);
   Graph_40dO000000sPppm1227->SetMaximum(3.67244);
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
   
   
   TF1 *quadLineFit1228 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1228->SetFillColor(19);
   quadLineFit1228->SetFillStyle(0);
   quadLineFit1228->SetLineColor(10);
   quadLineFit1228->SetLineWidth(2);
   quadLineFit1228->SetChisquare(8.641369e-20);
   quadLineFit1228->SetNDF(0);
   quadLineFit1228->GetXaxis()->SetLabelFont(42);
   quadLineFit1228->GetXaxis()->SetTitleOffset(1);
   quadLineFit1228->GetXaxis()->SetTitleFont(42);
   quadLineFit1228->GetYaxis()->SetLabelFont(42);
   quadLineFit1228->GetYaxis()->SetTitleFont(42);
   quadLineFit1228->SetParameter(0,6.673515);
   quadLineFit1228->SetParError(0,0.10388);
   quadLineFit1228->SetParLimits(0,0,0);
   quadLineFit1228->SetParameter(1,-0.1910507);
   quadLineFit1228->SetParError(1,0.00604357);
   quadLineFit1228->SetParLimits(1,0,0);
   quadLineFit1228->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1228);
   gre->Draw("p ");
   
   TF1 *quadLineFit1229 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1229->SetFillColor(19);
   quadLineFit1229->SetFillStyle(0);
   quadLineFit1229->SetLineColor(10);
   quadLineFit1229->SetLineWidth(2);
   quadLineFit1229->SetChisquare(8.641369e-20);
   quadLineFit1229->SetNDF(0);
   quadLineFit1229->GetXaxis()->SetLabelFont(42);
   quadLineFit1229->GetXaxis()->SetTitleOffset(1);
   quadLineFit1229->GetXaxis()->SetTitleFont(42);
   quadLineFit1229->GetYaxis()->SetLabelFont(42);
   quadLineFit1229->GetYaxis()->SetTitleFont(42);
   quadLineFit1229->SetParameter(0,6.673515);
   quadLineFit1229->SetParError(0,0.10388);
   quadLineFit1229->SetParLimits(0,0,0);
   quadLineFit1229->SetParameter(1,-0.1910507);
   quadLineFit1229->SetParError(1,0.00604357);
   quadLineFit1229->SetParLimits(1,0,0);
   quadLineFit1229->Draw("same");
   
   Double_t 50.000000 ppm_fx1229[2] = {
   16,
   18.3};
   Double_t 50.000000 ppm_fy1229[2] = {
   4.354129,
   3.819693};
   Double_t 50.000000 ppm_fex1229[2] = {
   0,
   0};
   Double_t 50.000000 ppm_fey1229[2] = {
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(2,50.000000 ppm_fx1229,50.000000 ppm_fy1229,50.000000 ppm_fex1229,50.000000 ppm_fey1229);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(11);
   gre->SetMarkerColor(11);
   
   TH1F *Graph_50dO000000sPppm1229 = new TH1F("Graph_50dO000000sPppm1229","Graph",100,15.77,18.53);
   Graph_50dO000000sPppm1229->SetMinimum(3.754454);
   Graph_50dO000000sPppm1229->SetMaximum(4.419367);
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
   
   
   TF1 *quadLineFit1230 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1230->SetFillColor(19);
   quadLineFit1230->SetFillStyle(0);
   quadLineFit1230->SetLineColor(11);
   quadLineFit1230->SetLineWidth(2);
   quadLineFit1230->SetChisquare(8.972973e-19);
   quadLineFit1230->SetNDF(0);
   quadLineFit1230->GetXaxis()->SetLabelFont(42);
   quadLineFit1230->GetXaxis()->SetTitleOffset(1);
   quadLineFit1230->GetXaxis()->SetTitleFont(42);
   quadLineFit1230->GetYaxis()->SetLabelFont(42);
   quadLineFit1230->GetYaxis()->SetTitleFont(42);
   quadLineFit1230->SetParameter(0,8.071944);
   quadLineFit1230->SetParError(0,0.10388);
   quadLineFit1230->SetParLimits(0,0,0);
   quadLineFit1230->SetParameter(1,-0.2323635);
   quadLineFit1230->SetParError(1,0.00604357);
   quadLineFit1230->SetParLimits(1,0,0);
   quadLineFit1230->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1230);
   gre->Draw("p ");
   
   TF1 *quadLineFit1231 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1231->SetFillColor(19);
   quadLineFit1231->SetFillStyle(0);
   quadLineFit1231->SetLineColor(11);
   quadLineFit1231->SetLineWidth(2);
   quadLineFit1231->SetChisquare(8.972973e-19);
   quadLineFit1231->SetNDF(0);
   quadLineFit1231->GetXaxis()->SetLabelFont(42);
   quadLineFit1231->GetXaxis()->SetTitleOffset(1);
   quadLineFit1231->GetXaxis()->SetTitleFont(42);
   quadLineFit1231->GetYaxis()->SetLabelFont(42);
   quadLineFit1231->GetYaxis()->SetTitleFont(42);
   quadLineFit1231->SetParameter(0,8.071944);
   quadLineFit1231->SetParError(0,0.10388);
   quadLineFit1231->SetParLimits(0,0,0);
   quadLineFit1231->SetParameter(1,-0.2323635);
   quadLineFit1231->SetParError(1,0.00604357);
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
