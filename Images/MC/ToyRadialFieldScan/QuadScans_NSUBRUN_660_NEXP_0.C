void QuadScans_NSUBRUN_660_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:35:42 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.05142857,-3.060543,0.0768254,3.8735);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.15);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t 30.000000 ppm_fx1073[2] = {
   0.07142857,
   0.05555556};
   Double_t 30.000000 ppm_fy1073[2] = {
   3.270956,
   2.544077};
   Double_t 30.000000 ppm_fex1073[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1073[2] = {
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(2,30.000000 ppm_fx1073,30.000000 ppm_fy1073,30.000000 ppm_fex1073,30.000000 ppm_fey1073);
   gre->SetName("30.000000 ppm");
   gre->SetTitle(";1/V [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_30dO000000sPppm1073 = new TH1F("Graph_30dO000000sPppm1073","",100,0.05396825,0.07301587);
   Graph_30dO000000sPppm1073->SetMinimum(-2.367139);
   Graph_30dO000000sPppm1073->SetMaximum(3.180096);
   Graph_30dO000000sPppm1073->SetDirectory(0);
   Graph_30dO000000sPppm1073->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1073->SetLineColor(ci);
   Graph_30dO000000sPppm1073->GetXaxis()->SetTitle("1/V [kV^{-1}]");
   Graph_30dO000000sPppm1073->GetXaxis()->CenterTitle(true);
   Graph_30dO000000sPppm1073->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1073->GetXaxis()->SetTitleSize(0.04);
   Graph_30dO000000sPppm1073->GetXaxis()->SetTitleOffset(1.1);
   Graph_30dO000000sPppm1073->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1073->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_30dO000000sPppm1073->GetYaxis()->CenterTitle(true);
   Graph_30dO000000sPppm1073->GetYaxis()->SetNdivisions(4000510);
   Graph_30dO000000sPppm1073->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1073->GetYaxis()->SetTitleSize(0.04);
   Graph_30dO000000sPppm1073->GetYaxis()->SetTitleOffset(1.1);
   Graph_30dO000000sPppm1073->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1073->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1073->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1073);
   
   
   TF1 *quadLineFit1074 = new TF1("quadLineFit","[0]+[1]*x",0.05555556,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1074->SetFillColor(19);
   quadLineFit1074->SetFillStyle(0);
   quadLineFit1074->SetLineWidth(2);
   quadLineFit1074->SetChisquare(4.927576e-25);
   quadLineFit1074->SetNDF(0);
   quadLineFit1074->GetXaxis()->SetLabelFont(42);
   quadLineFit1074->GetXaxis()->SetTitleOffset(1);
   quadLineFit1074->GetXaxis()->SetTitleFont(42);
   quadLineFit1074->GetYaxis()->SetLabelFont(42);
   quadLineFit1074->GetYaxis()->SetTitleFont(42);
   quadLineFit1074->SetParameter(0,-3.530509e-13);
   quadLineFit1074->SetParError(0,5.700877);
   quadLineFit1074->SetParLimits(0,0,0);
   quadLineFit1074->SetParameter(1,45.79338);
   quadLineFit1074->SetParError(1,89.09545);
   quadLineFit1074->SetParLimits(1,0,0);
   quadLineFit1074->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1074);
   gre->Draw("ap");
   
   TF1 *quadLineFit1075 = new TF1("quadLineFit","[0]+[1]*x",0.05555556,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1075->SetFillColor(19);
   quadLineFit1075->SetFillStyle(0);
   quadLineFit1075->SetLineWidth(2);
   quadLineFit1075->SetChisquare(4.927576e-25);
   quadLineFit1075->SetNDF(0);
   quadLineFit1075->GetXaxis()->SetLabelFont(42);
   quadLineFit1075->GetXaxis()->SetTitleOffset(1);
   quadLineFit1075->GetXaxis()->SetTitleFont(42);
   quadLineFit1075->GetYaxis()->SetLabelFont(42);
   quadLineFit1075->GetYaxis()->SetTitleFont(42);
   quadLineFit1075->SetParameter(0,-3.530509e-13);
   quadLineFit1075->SetParError(0,5.700877);
   quadLineFit1075->SetParLimits(0,0,0);
   quadLineFit1075->SetParameter(1,45.79338);
   quadLineFit1075->SetParError(1,89.09545);
   quadLineFit1075->SetParLimits(1,0,0);
   quadLineFit1075->Draw("same");
   
   Double_t -30.000000 ppm_fx1075[2] = {
   0.07142857,
   0.05555556};
   Double_t -30.000000 ppm_fy1075[2] = {
   -1.893711,
   -1.472886};
   Double_t -30.000000 ppm_fex1075[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1075[2] = {
   0,
   0};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1075,-30.000000 ppm_fy1075,-30.000000 ppm_fex1075,-30.000000 ppm_fey1075);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI30dO000000sPppm1075 = new TH1F("Graph_mI30dO000000sPppm1075","Graph",100,0.05396825,0.07301587);
   Graph_mI30dO000000sPppm1075->SetMinimum(-1.935794);
   Graph_mI30dO000000sPppm1075->SetMaximum(-1.430804);
   Graph_mI30dO000000sPppm1075->SetDirectory(0);
   Graph_mI30dO000000sPppm1075->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1075->SetLineColor(ci);
   Graph_mI30dO000000sPppm1075->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1075->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1075->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1075->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1075->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1075->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1075->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1075->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1075);
   
   
   TF1 *quadLineFit1076 = new TF1("quadLineFit","[0]+[1]*x",0.05555556,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1076->SetFillColor(19);
   quadLineFit1076->SetFillStyle(0);
   quadLineFit1076->SetLineColor(2);
   quadLineFit1076->SetLineWidth(2);
   quadLineFit1076->SetChisquare(1.296134e-25);
   quadLineFit1076->SetNDF(0);
   quadLineFit1076->GetXaxis()->SetLabelFont(42);
   quadLineFit1076->GetXaxis()->SetTitleOffset(1);
   quadLineFit1076->GetXaxis()->SetTitleFont(42);
   quadLineFit1076->GetYaxis()->SetLabelFont(42);
   quadLineFit1076->GetYaxis()->SetTitleFont(42);
   quadLineFit1076->SetParameter(0,1.341149e-13);
   quadLineFit1076->SetParError(0,5.700877);
   quadLineFit1076->SetParLimits(0,0,0);
   quadLineFit1076->SetParameter(1,-26.51196);
   quadLineFit1076->SetParError(1,89.09545);
   quadLineFit1076->SetParLimits(1,0,0);
   quadLineFit1076->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1076);
   gre->Draw("p ");
   
   TF1 *quadLineFit1077 = new TF1("quadLineFit","[0]+[1]*x",0.05555556,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1077->SetFillColor(19);
   quadLineFit1077->SetFillStyle(0);
   quadLineFit1077->SetLineColor(2);
   quadLineFit1077->SetLineWidth(2);
   quadLineFit1077->SetChisquare(1.296134e-25);
   quadLineFit1077->SetNDF(0);
   quadLineFit1077->GetXaxis()->SetLabelFont(42);
   quadLineFit1077->GetXaxis()->SetTitleOffset(1);
   quadLineFit1077->GetXaxis()->SetTitleFont(42);
   quadLineFit1077->GetYaxis()->SetLabelFont(42);
   quadLineFit1077->GetYaxis()->SetTitleFont(42);
   quadLineFit1077->SetParameter(0,1.341149e-13);
   quadLineFit1077->SetParError(0,5.700877);
   quadLineFit1077->SetParLimits(0,0,0);
   quadLineFit1077->SetParameter(1,-26.51196);
   quadLineFit1077->SetParError(1,89.09545);
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
