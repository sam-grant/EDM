void QuadScans_NSUBRUN_300_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  8 12:25:48 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.05124717,-3.25,0.07845805,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1089[2] = {
   0.07142857,
   0.05555556};
   Double_t -30.000000 ppm_fy1089[2] = {
   -1.882482,
   -1.488048};
   Double_t -30.000000 ppm_fex1089[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1089[2] = {
   0.008522719,
   0.008522719};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1089,-30.000000 ppm_fy1089,-30.000000 ppm_fex1089,-30.000000 ppm_fey1089);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1089 = new TH1F("Graph_mI30dO000000sPppm1089","",100,0.05396825,0.07301587);
   Graph_mI30dO000000sPppm1089->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1089->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1089->SetDirectory(0);
   Graph_mI30dO000000sPppm1089->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1089->SetLineColor(ci);
   Graph_mI30dO000000sPppm1089->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
   Graph_mI30dO000000sPppm1089->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1089->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1089->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1089->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1089->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1089->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1089->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1089->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1089->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1089->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1089->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1089->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1089->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1089->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1089->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1089);
   
   
   TF1 *quadLineFit1090 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1090->SetFillColor(19);
   quadLineFit1090->SetFillStyle(0);
   quadLineFit1090->SetLineWidth(2);
   quadLineFit1090->SetChisquare(2.786379e-20);
   quadLineFit1090->SetNDF(0);
   quadLineFit1090->GetXaxis()->SetLabelFont(42);
   quadLineFit1090->GetXaxis()->SetTitleOffset(1);
   quadLineFit1090->GetXaxis()->SetTitleFont(42);
   quadLineFit1090->GetYaxis()->SetLabelFont(42);
   quadLineFit1090->GetYaxis()->SetTitleFont(42);
   quadLineFit1090->SetParameter(0,-0.1075304);
   quadLineFit1090->SetParError(0,0.04858698);
   quadLineFit1090->SetParLimits(0,0,0);
   quadLineFit1090->SetParameter(1,-24.84932);
   quadLineFit1090->SetParError(1,0.7593355);
   quadLineFit1090->SetParLimits(1,0,0);
   quadLineFit1090->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1090);
   gre->Draw("ap");
   
   TF1 *quadLineFit1091 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1091->SetFillColor(19);
   quadLineFit1091->SetFillStyle(0);
   quadLineFit1091->SetLineWidth(2);
   quadLineFit1091->SetChisquare(2.786379e-20);
   quadLineFit1091->SetNDF(0);
   quadLineFit1091->GetXaxis()->SetLabelFont(42);
   quadLineFit1091->GetXaxis()->SetTitleOffset(1);
   quadLineFit1091->GetXaxis()->SetTitleFont(42);
   quadLineFit1091->GetYaxis()->SetLabelFont(42);
   quadLineFit1091->GetYaxis()->SetTitleFont(42);
   quadLineFit1091->SetParameter(0,-0.1075304);
   quadLineFit1091->SetParError(0,0.04858698);
   quadLineFit1091->SetParLimits(0,0,0);
   quadLineFit1091->SetParameter(1,-24.84932);
   quadLineFit1091->SetParError(1,0.7593355);
   quadLineFit1091->SetParLimits(1,0,0);
   quadLineFit1091->Draw("same");
   
   Double_t 30.000000 ppm_fx1091[2] = {
   0.07142857,
   0.05555556};
   Double_t 30.000000 ppm_fy1091[2] = {
   3.261586,
   2.539647};
   Double_t 30.000000 ppm_fex1091[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1091[2] = {
   0.008522719,
   0.008522719};
   gre = new TGraphErrors(2,30.000000 ppm_fx1091,30.000000 ppm_fy1091,30.000000 ppm_fex1091,30.000000 ppm_fey1091);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   
   TH1F *Graph_30dO000000sPppm1091 = new TH1F("Graph_30dO000000sPppm1091","Graph",100,0.05396825,0.07301587);
   Graph_30dO000000sPppm1091->SetMinimum(2.457226);
   Graph_30dO000000sPppm1091->SetMaximum(3.344007);
   Graph_30dO000000sPppm1091->SetDirectory(0);
   Graph_30dO000000sPppm1091->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1091->SetLineColor(ci);
   Graph_30dO000000sPppm1091->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1091->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1091->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1091->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1091->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1091->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1091->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1091);
   
   
   TF1 *quadLineFit1092 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1092->SetFillColor(19);
   quadLineFit1092->SetFillStyle(0);
   quadLineFit1092->SetLineColor(2);
   quadLineFit1092->SetLineWidth(2);
   quadLineFit1092->SetChisquare(2.297783e-21);
   quadLineFit1092->SetNDF(0);
   quadLineFit1092->GetXaxis()->SetLabelFont(42);
   quadLineFit1092->GetXaxis()->SetTitleOffset(1);
   quadLineFit1092->GetXaxis()->SetTitleFont(42);
   quadLineFit1092->GetYaxis()->SetLabelFont(42);
   quadLineFit1092->GetYaxis()->SetTitleFont(42);
   quadLineFit1092->SetParameter(0,0.01286091);
   quadLineFit1092->SetParError(0,0.04858698);
   quadLineFit1092->SetParLimits(0,0,0);
   quadLineFit1092->SetParameter(1,45.48215);
   quadLineFit1092->SetParError(1,0.7593355);
   quadLineFit1092->SetParLimits(1,0,0);
   quadLineFit1092->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1092);
   gre->Draw("p ");
   
   TF1 *quadLineFit1093 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1093->SetFillColor(19);
   quadLineFit1093->SetFillStyle(0);
   quadLineFit1093->SetLineColor(2);
   quadLineFit1093->SetLineWidth(2);
   quadLineFit1093->SetChisquare(2.297783e-21);
   quadLineFit1093->SetNDF(0);
   quadLineFit1093->GetXaxis()->SetLabelFont(42);
   quadLineFit1093->GetXaxis()->SetTitleOffset(1);
   quadLineFit1093->GetXaxis()->SetTitleFont(42);
   quadLineFit1093->GetYaxis()->SetLabelFont(42);
   quadLineFit1093->GetYaxis()->SetTitleFont(42);
   quadLineFit1093->SetParameter(0,0.01286091);
   quadLineFit1093->SetParError(0,0.04858698);
   quadLineFit1093->SetParLimits(0,0,0);
   quadLineFit1093->SetParameter(1,45.48215);
   quadLineFit1093->SetParError(1,0.7593355);
   quadLineFit1093->SetParLimits(1,0,0);
   quadLineFit1093->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#LTB_{r}^{App}#GT","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
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
