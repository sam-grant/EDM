void QuadScans_NSUBRUN_594_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:35:41 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.05142857,-3.060543,0.0768254,3.8735);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.15);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t 30.000000 ppm_fx1065[2] = {
   0.07142857,
   0.05555556};
   Double_t 30.000000 ppm_fy1065[2] = {
   3.270956,
   2.544077};
   Double_t 30.000000 ppm_fex1065[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1065[2] = {
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(2,30.000000 ppm_fx1065,30.000000 ppm_fy1065,30.000000 ppm_fex1065,30.000000 ppm_fey1065);
   gre->SetName("30.000000 ppm");
   gre->SetTitle(";1/V [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_30dO000000sPppm1065 = new TH1F("Graph_30dO000000sPppm1065","",100,0.05396825,0.07301587);
   Graph_30dO000000sPppm1065->SetMinimum(-2.367139);
   Graph_30dO000000sPppm1065->SetMaximum(3.180096);
   Graph_30dO000000sPppm1065->SetDirectory(0);
   Graph_30dO000000sPppm1065->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1065->SetLineColor(ci);
   Graph_30dO000000sPppm1065->GetXaxis()->SetTitle("1/V [kV^{-1}]");
   Graph_30dO000000sPppm1065->GetXaxis()->CenterTitle(true);
   Graph_30dO000000sPppm1065->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1065->GetXaxis()->SetTitleSize(0.04);
   Graph_30dO000000sPppm1065->GetXaxis()->SetTitleOffset(1.1);
   Graph_30dO000000sPppm1065->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1065->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_30dO000000sPppm1065->GetYaxis()->CenterTitle(true);
   Graph_30dO000000sPppm1065->GetYaxis()->SetNdivisions(4000510);
   Graph_30dO000000sPppm1065->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1065->GetYaxis()->SetTitleSize(0.04);
   Graph_30dO000000sPppm1065->GetYaxis()->SetTitleOffset(1.1);
   Graph_30dO000000sPppm1065->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1065->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1065->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1065);
   
   
   TF1 *quadLineFit1066 = new TF1("quadLineFit","[0]+[1]*x",0.05555556,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1066->SetFillColor(19);
   quadLineFit1066->SetFillStyle(0);
   quadLineFit1066->SetLineWidth(2);
   quadLineFit1066->SetChisquare(4.927576e-25);
   quadLineFit1066->SetNDF(0);
   quadLineFit1066->GetXaxis()->SetLabelFont(42);
   quadLineFit1066->GetXaxis()->SetTitleOffset(1);
   quadLineFit1066->GetXaxis()->SetTitleFont(42);
   quadLineFit1066->GetYaxis()->SetLabelFont(42);
   quadLineFit1066->GetYaxis()->SetTitleFont(42);
   quadLineFit1066->SetParameter(0,-3.530509e-13);
   quadLineFit1066->SetParError(0,5.700877);
   quadLineFit1066->SetParLimits(0,0,0);
   quadLineFit1066->SetParameter(1,45.79338);
   quadLineFit1066->SetParError(1,89.09545);
   quadLineFit1066->SetParLimits(1,0,0);
   quadLineFit1066->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1066);
   gre->Draw("ap");
   
   TF1 *quadLineFit1067 = new TF1("quadLineFit","[0]+[1]*x",0.05555556,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1067->SetFillColor(19);
   quadLineFit1067->SetFillStyle(0);
   quadLineFit1067->SetLineWidth(2);
   quadLineFit1067->SetChisquare(4.927576e-25);
   quadLineFit1067->SetNDF(0);
   quadLineFit1067->GetXaxis()->SetLabelFont(42);
   quadLineFit1067->GetXaxis()->SetTitleOffset(1);
   quadLineFit1067->GetXaxis()->SetTitleFont(42);
   quadLineFit1067->GetYaxis()->SetLabelFont(42);
   quadLineFit1067->GetYaxis()->SetTitleFont(42);
   quadLineFit1067->SetParameter(0,-3.530509e-13);
   quadLineFit1067->SetParError(0,5.700877);
   quadLineFit1067->SetParLimits(0,0,0);
   quadLineFit1067->SetParameter(1,45.79338);
   quadLineFit1067->SetParError(1,89.09545);
   quadLineFit1067->SetParLimits(1,0,0);
   quadLineFit1067->Draw("same");
   
   Double_t -30.000000 ppm_fx1067[2] = {
   0.07142857,
   0.05555556};
   Double_t -30.000000 ppm_fy1067[2] = {
   -1.893711,
   -1.472886};
   Double_t -30.000000 ppm_fex1067[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1067[2] = {
   0,
   0};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1067,-30.000000 ppm_fy1067,-30.000000 ppm_fex1067,-30.000000 ppm_fey1067);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI30dO000000sPppm1067 = new TH1F("Graph_mI30dO000000sPppm1067","Graph",100,0.05396825,0.07301587);
   Graph_mI30dO000000sPppm1067->SetMinimum(-1.935794);
   Graph_mI30dO000000sPppm1067->SetMaximum(-1.430804);
   Graph_mI30dO000000sPppm1067->SetDirectory(0);
   Graph_mI30dO000000sPppm1067->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1067->SetLineColor(ci);
   Graph_mI30dO000000sPppm1067->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1067->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1067->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1067->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1067->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1067->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1067->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1067);
   
   
   TF1 *quadLineFit1068 = new TF1("quadLineFit","[0]+[1]*x",0.05555556,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1068->SetFillColor(19);
   quadLineFit1068->SetFillStyle(0);
   quadLineFit1068->SetLineColor(2);
   quadLineFit1068->SetLineWidth(2);
   quadLineFit1068->SetChisquare(1.296134e-25);
   quadLineFit1068->SetNDF(0);
   quadLineFit1068->GetXaxis()->SetLabelFont(42);
   quadLineFit1068->GetXaxis()->SetTitleOffset(1);
   quadLineFit1068->GetXaxis()->SetTitleFont(42);
   quadLineFit1068->GetYaxis()->SetLabelFont(42);
   quadLineFit1068->GetYaxis()->SetTitleFont(42);
   quadLineFit1068->SetParameter(0,1.341149e-13);
   quadLineFit1068->SetParError(0,5.700877);
   quadLineFit1068->SetParLimits(0,0,0);
   quadLineFit1068->SetParameter(1,-26.51196);
   quadLineFit1068->SetParError(1,89.09545);
   quadLineFit1068->SetParLimits(1,0,0);
   quadLineFit1068->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1068);
   gre->Draw("p ");
   
   TF1 *quadLineFit1069 = new TF1("quadLineFit","[0]+[1]*x",0.05555556,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1069->SetFillColor(19);
   quadLineFit1069->SetFillStyle(0);
   quadLineFit1069->SetLineColor(2);
   quadLineFit1069->SetLineWidth(2);
   quadLineFit1069->SetChisquare(1.296134e-25);
   quadLineFit1069->SetNDF(0);
   quadLineFit1069->GetXaxis()->SetLabelFont(42);
   quadLineFit1069->GetXaxis()->SetTitleOffset(1);
   quadLineFit1069->GetXaxis()->SetTitleFont(42);
   quadLineFit1069->GetYaxis()->SetLabelFont(42);
   quadLineFit1069->GetYaxis()->SetTitleFont(42);
   quadLineFit1069->SetParameter(0,1.341149e-13);
   quadLineFit1069->SetParError(0,5.700877);
   quadLineFit1069->SetParLimits(0,0,0);
   quadLineFit1069->SetParameter(1,-26.51196);
   quadLineFit1069->SetParError(1,89.09545);
   quadLineFit1069->SetParLimits(1,0,0);
   quadLineFit1069->Draw("same");
   
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
