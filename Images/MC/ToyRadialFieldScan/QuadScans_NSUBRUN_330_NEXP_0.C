void QuadScans_NSUBRUN_330_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:36:11 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.05142857,-3.063137,0.0768254,3.877842);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.15);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t 30.000000 ppm_fx1033[2] = {
   0.07142857,
   0.05555556};
   Double_t 30.000000 ppm_fy1033[2] = {
   3.284137,
   2.546996};
   Double_t 30.000000 ppm_fex1033[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1033[2] = {
   0.00812451,
   0.00812451};
   TGraphErrors *gre = new TGraphErrors(2,30.000000 ppm_fx1033,30.000000 ppm_fy1033,30.000000 ppm_fex1033,30.000000 ppm_fey1033);
   gre->SetName("30.000000 ppm");
   gre->SetTitle(";1/V [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_30dO000000sPppm1033 = new TH1F("Graph_30dO000000sPppm1033","",100,0.05396825,0.07301587);
   Graph_30dO000000sPppm1033->SetMinimum(-2.369039);
   Graph_30dO000000sPppm1033->SetMaximum(3.183744);
   Graph_30dO000000sPppm1033->SetDirectory(0);
   Graph_30dO000000sPppm1033->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1033->SetLineColor(ci);
   Graph_30dO000000sPppm1033->GetXaxis()->SetTitle("1/V [kV^{-1}]");
   Graph_30dO000000sPppm1033->GetXaxis()->CenterTitle(true);
   Graph_30dO000000sPppm1033->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1033->GetXaxis()->SetTitleSize(0.04);
   Graph_30dO000000sPppm1033->GetXaxis()->SetTitleOffset(1.1);
   Graph_30dO000000sPppm1033->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1033->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_30dO000000sPppm1033->GetYaxis()->CenterTitle(true);
   Graph_30dO000000sPppm1033->GetYaxis()->SetNdivisions(4000510);
   Graph_30dO000000sPppm1033->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1033->GetYaxis()->SetTitleSize(0.04);
   Graph_30dO000000sPppm1033->GetYaxis()->SetTitleOffset(1.1);
   Graph_30dO000000sPppm1033->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1033->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1033->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1033);
   
   
   TF1 *quadLineFit1034 = new TF1("quadLineFit","[0]+[1]*x",0.05555556,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1034->SetFillColor(19);
   quadLineFit1034->SetFillStyle(0);
   quadLineFit1034->SetLineWidth(2);
   quadLineFit1034->SetChisquare(1.289927e-19);
   quadLineFit1034->SetNDF(0);
   quadLineFit1034->GetXaxis()->SetLabelFont(42);
   quadLineFit1034->GetXaxis()->SetTitleOffset(1);
   quadLineFit1034->GetXaxis()->SetTitleFont(42);
   quadLineFit1034->GetYaxis()->SetLabelFont(42);
   quadLineFit1034->GetYaxis()->SetTitleFont(42);
   quadLineFit1034->SetParameter(0,-0.03299897);
   quadLineFit1034->SetParError(0,0.04631683);
   quadLineFit1034->SetParLimits(0,0,0);
   quadLineFit1034->SetParameter(1,46.4399);
   quadLineFit1034->SetParError(1,0.7238569);
   quadLineFit1034->SetParLimits(1,0,0);
   quadLineFit1034->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1034);
   gre->Draw("ap");
   
   TF1 *quadLineFit1035 = new TF1("quadLineFit","[0]+[1]*x",0.05555556,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1035->SetFillColor(19);
   quadLineFit1035->SetFillStyle(0);
   quadLineFit1035->SetLineWidth(2);
   quadLineFit1035->SetChisquare(1.289927e-19);
   quadLineFit1035->SetNDF(0);
   quadLineFit1035->GetXaxis()->SetLabelFont(42);
   quadLineFit1035->GetXaxis()->SetTitleOffset(1);
   quadLineFit1035->GetXaxis()->SetTitleFont(42);
   quadLineFit1035->GetYaxis()->SetLabelFont(42);
   quadLineFit1035->GetYaxis()->SetTitleFont(42);
   quadLineFit1035->SetParameter(0,-0.03299897);
   quadLineFit1035->SetParError(0,0.04631683);
   quadLineFit1035->SetParLimits(0,0,0);
   quadLineFit1035->SetParameter(1,46.4399);
   quadLineFit1035->SetParError(1,0.7238569);
   quadLineFit1035->SetParLimits(1,0,0);
   quadLineFit1035->Draw("same");
   
   Double_t -30.000000 ppm_fx1035[2] = {
   0.07142857,
   0.05555556};
   Double_t -30.000000 ppm_fy1035[2] = {
   -1.895231,
   -1.464094};
   Double_t -30.000000 ppm_fex1035[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1035[2] = {
   0.00812451,
   0.00812451};
   gre = new TGraphErrors(2,-30.000000 ppm_fx1035,-30.000000 ppm_fy1035,-30.000000 ppm_fex1035,-30.000000 ppm_fey1035);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI30dO000000sPppm1035 = new TH1F("Graph_mI30dO000000sPppm1035","Graph",100,0.05396825,0.07301587);
   Graph_mI30dO000000sPppm1035->SetMinimum(-1.948095);
   Graph_mI30dO000000sPppm1035->SetMaximum(-1.411231);
   Graph_mI30dO000000sPppm1035->SetDirectory(0);
   Graph_mI30dO000000sPppm1035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1035->SetLineColor(ci);
   Graph_mI30dO000000sPppm1035->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1035->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1035->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1035->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1035->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1035->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1035->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1035);
   
   
   TF1 *quadLineFit1036 = new TF1("quadLineFit","[0]+[1]*x",0.05555556,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1036->SetFillColor(19);
   quadLineFit1036->SetFillStyle(0);
   quadLineFit1036->SetLineColor(2);
   quadLineFit1036->SetLineWidth(2);
   quadLineFit1036->SetChisquare(8.765913e-18);
   quadLineFit1036->SetNDF(0);
   quadLineFit1036->GetXaxis()->SetLabelFont(42);
   quadLineFit1036->GetXaxis()->SetTitleOffset(1);
   quadLineFit1036->GetXaxis()->SetTitleFont(42);
   quadLineFit1036->GetYaxis()->SetLabelFont(42);
   quadLineFit1036->GetYaxis()->SetTitleFont(42);
   quadLineFit1036->SetParameter(0,0.04488605);
   quadLineFit1036->SetParError(0,0.04631683);
   quadLineFit1036->SetParLimits(0,0,0);
   quadLineFit1036->SetParameter(1,-27.16164);
   quadLineFit1036->SetParError(1,0.7238569);
   quadLineFit1036->SetParLimits(1,0,0);
   quadLineFit1036->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1036);
   gre->Draw("p ");
   
   TF1 *quadLineFit1037 = new TF1("quadLineFit","[0]+[1]*x",0.05555556,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1037->SetFillColor(19);
   quadLineFit1037->SetFillStyle(0);
   quadLineFit1037->SetLineColor(2);
   quadLineFit1037->SetLineWidth(2);
   quadLineFit1037->SetChisquare(8.765913e-18);
   quadLineFit1037->SetNDF(0);
   quadLineFit1037->GetXaxis()->SetLabelFont(42);
   quadLineFit1037->GetXaxis()->SetTitleOffset(1);
   quadLineFit1037->GetXaxis()->SetTitleFont(42);
   quadLineFit1037->GetYaxis()->SetLabelFont(42);
   quadLineFit1037->GetYaxis()->SetTitleFont(42);
   quadLineFit1037->SetParameter(0,0.04488605);
   quadLineFit1037->SetParError(0,0.04631683);
   quadLineFit1037->SetParLimits(0,0,0);
   quadLineFit1037->SetParameter(1,-27.16164);
   quadLineFit1037->SetParError(1,0.7238569);
   quadLineFit1037->SetParLimits(1,0,0);
   quadLineFit1037->Draw("same");
   
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
