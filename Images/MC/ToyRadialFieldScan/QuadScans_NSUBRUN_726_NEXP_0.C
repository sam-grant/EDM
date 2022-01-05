void QuadScans_NSUBRUN_726_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:35:43 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.05142857,-3.060543,0.0768254,3.8735);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.15);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t 30.000000 ppm_fx1081[2] = {
   0.07142857,
   0.05555556};
   Double_t 30.000000 ppm_fy1081[2] = {
   3.270956,
   2.544077};
   Double_t 30.000000 ppm_fex1081[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1081[2] = {
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(2,30.000000 ppm_fx1081,30.000000 ppm_fy1081,30.000000 ppm_fex1081,30.000000 ppm_fey1081);
   gre->SetName("30.000000 ppm");
   gre->SetTitle(";1/V [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_30dO000000sPppm1081 = new TH1F("Graph_30dO000000sPppm1081","",100,0.05396825,0.07301587);
   Graph_30dO000000sPppm1081->SetMinimum(-2.367139);
   Graph_30dO000000sPppm1081->SetMaximum(3.180096);
   Graph_30dO000000sPppm1081->SetDirectory(0);
   Graph_30dO000000sPppm1081->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1081->SetLineColor(ci);
   Graph_30dO000000sPppm1081->GetXaxis()->SetTitle("1/V [kV^{-1}]");
   Graph_30dO000000sPppm1081->GetXaxis()->CenterTitle(true);
   Graph_30dO000000sPppm1081->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1081->GetXaxis()->SetTitleSize(0.04);
   Graph_30dO000000sPppm1081->GetXaxis()->SetTitleOffset(1.1);
   Graph_30dO000000sPppm1081->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1081->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_30dO000000sPppm1081->GetYaxis()->CenterTitle(true);
   Graph_30dO000000sPppm1081->GetYaxis()->SetNdivisions(4000510);
   Graph_30dO000000sPppm1081->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1081->GetYaxis()->SetTitleSize(0.04);
   Graph_30dO000000sPppm1081->GetYaxis()->SetTitleOffset(1.1);
   Graph_30dO000000sPppm1081->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1081->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1081->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1081->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1081);
   
   
   TF1 *quadLineFit1082 = new TF1("quadLineFit","[0]+[1]*x",0.05555556,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1082->SetFillColor(19);
   quadLineFit1082->SetFillStyle(0);
   quadLineFit1082->SetLineWidth(2);
   quadLineFit1082->SetChisquare(4.927576e-25);
   quadLineFit1082->SetNDF(0);
   quadLineFit1082->GetXaxis()->SetLabelFont(42);
   quadLineFit1082->GetXaxis()->SetTitleOffset(1);
   quadLineFit1082->GetXaxis()->SetTitleFont(42);
   quadLineFit1082->GetYaxis()->SetLabelFont(42);
   quadLineFit1082->GetYaxis()->SetTitleFont(42);
   quadLineFit1082->SetParameter(0,-3.530509e-13);
   quadLineFit1082->SetParError(0,5.700877);
   quadLineFit1082->SetParLimits(0,0,0);
   quadLineFit1082->SetParameter(1,45.79338);
   quadLineFit1082->SetParError(1,89.09545);
   quadLineFit1082->SetParLimits(1,0,0);
   quadLineFit1082->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1082);
   gre->Draw("ap");
   
   TF1 *quadLineFit1083 = new TF1("quadLineFit","[0]+[1]*x",0.05555556,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1083->SetFillColor(19);
   quadLineFit1083->SetFillStyle(0);
   quadLineFit1083->SetLineWidth(2);
   quadLineFit1083->SetChisquare(4.927576e-25);
   quadLineFit1083->SetNDF(0);
   quadLineFit1083->GetXaxis()->SetLabelFont(42);
   quadLineFit1083->GetXaxis()->SetTitleOffset(1);
   quadLineFit1083->GetXaxis()->SetTitleFont(42);
   quadLineFit1083->GetYaxis()->SetLabelFont(42);
   quadLineFit1083->GetYaxis()->SetTitleFont(42);
   quadLineFit1083->SetParameter(0,-3.530509e-13);
   quadLineFit1083->SetParError(0,5.700877);
   quadLineFit1083->SetParLimits(0,0,0);
   quadLineFit1083->SetParameter(1,45.79338);
   quadLineFit1083->SetParError(1,89.09545);
   quadLineFit1083->SetParLimits(1,0,0);
   quadLineFit1083->Draw("same");
   
   Double_t -30.000000 ppm_fx1083[2] = {
   0.07142857,
   0.05555556};
   Double_t -30.000000 ppm_fy1083[2] = {
   -1.893711,
   -1.472886};
   Double_t -30.000000 ppm_fex1083[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1083[2] = {
   0,
   0};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1083,-30.000000 ppm_fy1083,-30.000000 ppm_fex1083,-30.000000 ppm_fey1083);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI30dO000000sPppm1083 = new TH1F("Graph_mI30dO000000sPppm1083","Graph",100,0.05396825,0.07301587);
   Graph_mI30dO000000sPppm1083->SetMinimum(-1.935794);
   Graph_mI30dO000000sPppm1083->SetMaximum(-1.430804);
   Graph_mI30dO000000sPppm1083->SetDirectory(0);
   Graph_mI30dO000000sPppm1083->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1083->SetLineColor(ci);
   Graph_mI30dO000000sPppm1083->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1083->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1083->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1083->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1083->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1083->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1083->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1083->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1083);
   
   
   TF1 *quadLineFit1084 = new TF1("quadLineFit","[0]+[1]*x",0.05555556,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1084->SetFillColor(19);
   quadLineFit1084->SetFillStyle(0);
   quadLineFit1084->SetLineColor(2);
   quadLineFit1084->SetLineWidth(2);
   quadLineFit1084->SetChisquare(1.296134e-25);
   quadLineFit1084->SetNDF(0);
   quadLineFit1084->GetXaxis()->SetLabelFont(42);
   quadLineFit1084->GetXaxis()->SetTitleOffset(1);
   quadLineFit1084->GetXaxis()->SetTitleFont(42);
   quadLineFit1084->GetYaxis()->SetLabelFont(42);
   quadLineFit1084->GetYaxis()->SetTitleFont(42);
   quadLineFit1084->SetParameter(0,1.341149e-13);
   quadLineFit1084->SetParError(0,5.700877);
   quadLineFit1084->SetParLimits(0,0,0);
   quadLineFit1084->SetParameter(1,-26.51196);
   quadLineFit1084->SetParError(1,89.09545);
   quadLineFit1084->SetParLimits(1,0,0);
   quadLineFit1084->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1084);
   gre->Draw("p ");
   
   TF1 *quadLineFit1085 = new TF1("quadLineFit","[0]+[1]*x",0.05555556,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1085->SetFillColor(19);
   quadLineFit1085->SetFillStyle(0);
   quadLineFit1085->SetLineColor(2);
   quadLineFit1085->SetLineWidth(2);
   quadLineFit1085->SetChisquare(1.296134e-25);
   quadLineFit1085->SetNDF(0);
   quadLineFit1085->GetXaxis()->SetLabelFont(42);
   quadLineFit1085->GetXaxis()->SetTitleOffset(1);
   quadLineFit1085->GetXaxis()->SetTitleFont(42);
   quadLineFit1085->GetYaxis()->SetLabelFont(42);
   quadLineFit1085->GetYaxis()->SetTitleFont(42);
   quadLineFit1085->SetParameter(0,1.341149e-13);
   quadLineFit1085->SetParError(0,5.700877);
   quadLineFit1085->SetParLimits(0,0,0);
   quadLineFit1085->SetParameter(1,-26.51196);
   quadLineFit1085->SetParError(1,89.09545);
   quadLineFit1085->SetParLimits(1,0,0);
   quadLineFit1085->Draw("same");
   
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
