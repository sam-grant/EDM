void QuadScans_NSUBRUN_0_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:11:02 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.05142857,-3.060543,0.0768254,3.8735);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.15);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t 30.000000 ppm_fx1089[2] = {
   0.07142857,
   0.05555556};
   Double_t 30.000000 ppm_fy1089[2] = {
   3.270956,
   2.544077};
   Double_t 30.000000 ppm_fex1089[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1089[2] = {
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(2,30.000000 ppm_fx1089,30.000000 ppm_fy1089,30.000000 ppm_fex1089,30.000000 ppm_fey1089);
   gre->SetName("30.000000 ppm");
   gre->SetTitle(";1/V [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_30dO000000sPppm1089 = new TH1F("Graph_30dO000000sPppm1089","",100,0.05396825,0.07301587);
   Graph_30dO000000sPppm1089->SetMinimum(-2.367139);
   Graph_30dO000000sPppm1089->SetMaximum(3.180096);
   Graph_30dO000000sPppm1089->SetDirectory(0);
   Graph_30dO000000sPppm1089->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1089->SetLineColor(ci);
   Graph_30dO000000sPppm1089->GetXaxis()->SetTitle("1/V [kV^{-1}]");
   Graph_30dO000000sPppm1089->GetXaxis()->CenterTitle(true);
   Graph_30dO000000sPppm1089->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1089->GetXaxis()->SetTitleSize(0.04);
   Graph_30dO000000sPppm1089->GetXaxis()->SetTitleOffset(1.1);
   Graph_30dO000000sPppm1089->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1089->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_30dO000000sPppm1089->GetYaxis()->CenterTitle(true);
   Graph_30dO000000sPppm1089->GetYaxis()->SetNdivisions(4000510);
   Graph_30dO000000sPppm1089->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1089->GetYaxis()->SetTitleSize(0.04);
   Graph_30dO000000sPppm1089->GetYaxis()->SetTitleOffset(1.1);
   Graph_30dO000000sPppm1089->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1089->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1089->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1089->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1089);
   
   
   TF1 *quadLineFit1090 = new TF1("quadLineFit","[0]+[1]*x",0.05555556,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1090->SetFillColor(19);
   quadLineFit1090->SetFillStyle(0);
   quadLineFit1090->SetLineWidth(2);
   quadLineFit1090->SetChisquare(4.927576e-25);
   quadLineFit1090->SetNDF(0);
   quadLineFit1090->GetXaxis()->SetLabelFont(42);
   quadLineFit1090->GetXaxis()->SetTitleOffset(1);
   quadLineFit1090->GetXaxis()->SetTitleFont(42);
   quadLineFit1090->GetYaxis()->SetLabelFont(42);
   quadLineFit1090->GetYaxis()->SetTitleFont(42);
   quadLineFit1090->SetParameter(0,-3.530509e-13);
   quadLineFit1090->SetParError(0,5.700877);
   quadLineFit1090->SetParLimits(0,0,0);
   quadLineFit1090->SetParameter(1,45.79338);
   quadLineFit1090->SetParError(1,89.09545);
   quadLineFit1090->SetParLimits(1,0,0);
   quadLineFit1090->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1090);
   gre->Draw("ap");
   
   TF1 *quadLineFit1091 = new TF1("quadLineFit","[0]+[1]*x",0.05555556,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1091->SetFillColor(19);
   quadLineFit1091->SetFillStyle(0);
   quadLineFit1091->SetLineWidth(2);
   quadLineFit1091->SetChisquare(4.927576e-25);
   quadLineFit1091->SetNDF(0);
   quadLineFit1091->GetXaxis()->SetLabelFont(42);
   quadLineFit1091->GetXaxis()->SetTitleOffset(1);
   quadLineFit1091->GetXaxis()->SetTitleFont(42);
   quadLineFit1091->GetYaxis()->SetLabelFont(42);
   quadLineFit1091->GetYaxis()->SetTitleFont(42);
   quadLineFit1091->SetParameter(0,-3.530509e-13);
   quadLineFit1091->SetParError(0,5.700877);
   quadLineFit1091->SetParLimits(0,0,0);
   quadLineFit1091->SetParameter(1,45.79338);
   quadLineFit1091->SetParError(1,89.09545);
   quadLineFit1091->SetParLimits(1,0,0);
   quadLineFit1091->Draw("same");
   
   Double_t -30.000000 ppm_fx1091[2] = {
   0.07142857,
   0.05555556};
   Double_t -30.000000 ppm_fy1091[2] = {
   -1.893711,
   -1.472886};
   Double_t -30.000000 ppm_fex1091[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1091[2] = {
   0,
   0};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1091,-30.000000 ppm_fy1091,-30.000000 ppm_fex1091,-30.000000 ppm_fey1091);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI30dO000000sPppm1091 = new TH1F("Graph_mI30dO000000sPppm1091","Graph",100,0.05396825,0.07301587);
   Graph_mI30dO000000sPppm1091->SetMinimum(-1.935794);
   Graph_mI30dO000000sPppm1091->SetMaximum(-1.430804);
   Graph_mI30dO000000sPppm1091->SetDirectory(0);
   Graph_mI30dO000000sPppm1091->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1091->SetLineColor(ci);
   Graph_mI30dO000000sPppm1091->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1091->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1091->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1091->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1091->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1091->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1091->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1091);
   
   
   TF1 *quadLineFit1092 = new TF1("quadLineFit","[0]+[1]*x",0.05555556,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1092->SetFillColor(19);
   quadLineFit1092->SetFillStyle(0);
   quadLineFit1092->SetLineColor(2);
   quadLineFit1092->SetLineWidth(2);
   quadLineFit1092->SetChisquare(1.296134e-25);
   quadLineFit1092->SetNDF(0);
   quadLineFit1092->GetXaxis()->SetLabelFont(42);
   quadLineFit1092->GetXaxis()->SetTitleOffset(1);
   quadLineFit1092->GetXaxis()->SetTitleFont(42);
   quadLineFit1092->GetYaxis()->SetLabelFont(42);
   quadLineFit1092->GetYaxis()->SetTitleFont(42);
   quadLineFit1092->SetParameter(0,1.341149e-13);
   quadLineFit1092->SetParError(0,5.700877);
   quadLineFit1092->SetParLimits(0,0,0);
   quadLineFit1092->SetParameter(1,-26.51196);
   quadLineFit1092->SetParError(1,89.09545);
   quadLineFit1092->SetParLimits(1,0,0);
   quadLineFit1092->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1092);
   gre->Draw("p ");
   
   TF1 *quadLineFit1093 = new TF1("quadLineFit","[0]+[1]*x",0.05555556,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1093->SetFillColor(19);
   quadLineFit1093->SetFillStyle(0);
   quadLineFit1093->SetLineColor(2);
   quadLineFit1093->SetLineWidth(2);
   quadLineFit1093->SetChisquare(1.296134e-25);
   quadLineFit1093->SetNDF(0);
   quadLineFit1093->GetXaxis()->SetLabelFont(42);
   quadLineFit1093->GetXaxis()->SetTitleOffset(1);
   quadLineFit1093->GetXaxis()->SetTitleFont(42);
   quadLineFit1093->GetYaxis()->SetLabelFont(42);
   quadLineFit1093->GetYaxis()->SetTitleFont(42);
   quadLineFit1093->SetParameter(0,1.341149e-13);
   quadLineFit1093->SetParError(0,5.700877);
   quadLineFit1093->SetParLimits(0,0,0);
   quadLineFit1093->SetParameter(1,-26.51196);
   quadLineFit1093->SetParError(1,89.09545);
   quadLineFit1093->SetParLimits(1,0,0);
   quadLineFit1093->Draw("same");
   
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
   entry=leg->AddEntry("-30.000000 ppm","  #minus30","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30","lpf");
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
