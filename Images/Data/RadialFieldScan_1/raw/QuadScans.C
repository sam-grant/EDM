void QuadScans()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  5 12:42:07 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.05142857,71.75,0.0768254,79.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.15);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t 30_ppm_fx1001[2] = {
   0.07142857,
   0.05555556};
   Double_t 30_ppm_fy1001[2] = {
   77.54268,
   76.92783};
   Double_t 30_ppm_fex1001[2] = {
   0,
   0};
   Double_t 30_ppm_fey1001[2] = {
   0.01708372,
   0.01630266};
   TGraphErrors *gre = new TGraphErrors(2,30_ppm_fx1001,30_ppm_fy1001,30_ppm_fex1001,30_ppm_fey1001);
   gre->SetName("30_ppm");
   gre->SetTitle(";1/V [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_30_ppm1001 = new TH1F("Graph_30_ppm1001","",100,0.05396825,0.07301588);
   Graph_30_ppm1001->SetMinimum(72.5);
   Graph_30_ppm1001->SetMaximum(78.5);
   Graph_30_ppm1001->SetDirectory(0);
   Graph_30_ppm1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_30_ppm1001->SetLineColor(ci);
   Graph_30_ppm1001->GetXaxis()->SetTitle("1/V [kV^{-1}]");
   Graph_30_ppm1001->GetXaxis()->CenterTitle(true);
   Graph_30_ppm1001->GetXaxis()->SetLabelFont(42);
   Graph_30_ppm1001->GetXaxis()->SetTitleSize(0.04);
   Graph_30_ppm1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_30_ppm1001->GetXaxis()->SetTitleFont(42);
   Graph_30_ppm1001->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_30_ppm1001->GetYaxis()->CenterTitle(true);
   Graph_30_ppm1001->GetYaxis()->SetNdivisions(4000510);
   Graph_30_ppm1001->GetYaxis()->SetLabelFont(42);
   Graph_30_ppm1001->GetYaxis()->SetTitleSize(0.04);
   Graph_30_ppm1001->GetYaxis()->SetTitleOffset(1.1);
   Graph_30_ppm1001->GetYaxis()->SetTitleFont(42);
   Graph_30_ppm1001->GetZaxis()->SetLabelFont(42);
   Graph_30_ppm1001->GetZaxis()->SetTitleOffset(1);
   Graph_30_ppm1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30_ppm1001);
   
   
   TF1 *quadLineFit1002 = new TF1("quadLineFit","[0]+[1]*x",0.05555556,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1002->SetFillColor(19);
   quadLineFit1002->SetFillStyle(0);
   quadLineFit1002->SetLineWidth(2);
   quadLineFit1002->SetChisquare(1.303336e-16);
   quadLineFit1002->SetNDF(0);
   quadLineFit1002->GetXaxis()->SetLabelFont(42);
   quadLineFit1002->GetXaxis()->SetTitleOffset(1);
   quadLineFit1002->GetXaxis()->SetTitleFont(42);
   quadLineFit1002->GetYaxis()->SetLabelFont(42);
   quadLineFit1002->GetYaxis()->SetTitleFont(42);
   quadLineFit1002->SetParameter(0,74.77585);
   quadLineFit1002->SetParError(0,0.09464236);
   quadLineFit1002->SetParLimits(0,0,0);
   quadLineFit1002->SetParameter(1,38.73573);
   quadLineFit1002->SetParError(1,1.487694);
   quadLineFit1002->SetParLimits(1,0,0);
   quadLineFit1002->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1002);
   gre->Draw("ap");
   
   TF1 *quadLineFit1003 = new TF1("quadLineFit","[0]+[1]*x",0.05555556,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1003->SetFillColor(19);
   quadLineFit1003->SetFillStyle(0);
   quadLineFit1003->SetLineWidth(2);
   quadLineFit1003->SetChisquare(1.303336e-16);
   quadLineFit1003->SetNDF(0);
   quadLineFit1003->GetXaxis()->SetLabelFont(42);
   quadLineFit1003->GetXaxis()->SetTitleOffset(1);
   quadLineFit1003->GetXaxis()->SetTitleFont(42);
   quadLineFit1003->GetYaxis()->SetLabelFont(42);
   quadLineFit1003->GetYaxis()->SetTitleFont(42);
   quadLineFit1003->SetParameter(0,74.77585);
   quadLineFit1003->SetParError(0,0.09464236);
   quadLineFit1003->SetParLimits(0,0,0);
   quadLineFit1003->SetParameter(1,38.73573);
   quadLineFit1003->SetParError(1,1.487694);
   quadLineFit1003->SetParLimits(1,0,0);
   quadLineFit1003->Draw("same");
   
   Double_t -30_ppm_fx1003[2] = {
   0.07142857,
   0.05555556};
   Double_t -30_ppm_fy1003[2] = {
   73.80985,
   74.01761};
   Double_t -30_ppm_fex1003[2] = {
   0,
   0};
   Double_t -30_ppm_fey1003[2] = {
   0.01841627,
   0.01655306};
   gre = new TGraphErrors(2,-30_ppm_fx1003,-30_ppm_fy1003,-30_ppm_fex1003,-30_ppm_fey1003);
   gre->SetName("-30_ppm");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_mI30_ppm1003 = new TH1F("Graph_mI30_ppm1003","",100,0.05396825,0.07301588);
   Graph_mI30_ppm1003->SetMinimum(73.76716);
   Graph_mI30_ppm1003->SetMaximum(74.05843);
   Graph_mI30_ppm1003->SetDirectory(0);
   Graph_mI30_ppm1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30_ppm1003->SetLineColor(ci);
   Graph_mI30_ppm1003->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
   Graph_mI30_ppm1003->GetXaxis()->CenterTitle(true);
   Graph_mI30_ppm1003->GetXaxis()->SetLabelFont(42);
   Graph_mI30_ppm1003->GetXaxis()->SetTitleOffset(1);
   Graph_mI30_ppm1003->GetXaxis()->SetTitleFont(42);
   Graph_mI30_ppm1003->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30_ppm1003->GetYaxis()->CenterTitle(true);
   Graph_mI30_ppm1003->GetYaxis()->SetLabelFont(42);
   Graph_mI30_ppm1003->GetYaxis()->SetTitleFont(42);
   Graph_mI30_ppm1003->GetZaxis()->SetLabelFont(42);
   Graph_mI30_ppm1003->GetZaxis()->SetTitleOffset(1);
   Graph_mI30_ppm1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30_ppm1003);
   
   
   TF1 *quadLineFit1004 = new TF1("quadLineFit","[0]+[1]*x",0.05555556,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1004->SetFillColor(19);
   quadLineFit1004->SetFillStyle(0);
   quadLineFit1004->SetLineColor(2);
   quadLineFit1004->SetLineWidth(2);
   quadLineFit1004->SetChisquare(1.250442e-15);
   quadLineFit1004->SetNDF(0);
   quadLineFit1004->GetXaxis()->SetLabelFont(42);
   quadLineFit1004->GetXaxis()->SetTitleOffset(1);
   quadLineFit1004->GetXaxis()->SetTitleFont(42);
   quadLineFit1004->GetYaxis()->SetLabelFont(42);
   quadLineFit1004->GetYaxis()->SetTitleFont(42);
   quadLineFit1004->SetParameter(0,74.74476);
   quadLineFit1004->SetParError(0,0.0985052);
   quadLineFit1004->SetParLimits(0,0,0);
   quadLineFit1004->SetParameter(1,-13.08869);
   quadLineFit1004->SetParError(1,1.560014);
   quadLineFit1004->SetParLimits(1,0,0);
   quadLineFit1004->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1004);
   gre->Draw("p ");
   
   TF1 *quadLineFit1005 = new TF1("quadLineFit","[0]+[1]*x",0.05555556,0.07142857, TF1::EAddToList::kNo);
   quadLineFit1005->SetFillColor(19);
   quadLineFit1005->SetFillStyle(0);
   quadLineFit1005->SetLineColor(2);
   quadLineFit1005->SetLineWidth(2);
   quadLineFit1005->SetChisquare(1.250442e-15);
   quadLineFit1005->SetNDF(0);
   quadLineFit1005->GetXaxis()->SetLabelFont(42);
   quadLineFit1005->GetXaxis()->SetTitleOffset(1);
   quadLineFit1005->GetXaxis()->SetTitleFont(42);
   quadLineFit1005->GetYaxis()->SetLabelFont(42);
   quadLineFit1005->GetYaxis()->SetTitleFont(42);
   quadLineFit1005->SetParameter(0,74.74476);
   quadLineFit1005->SetParError(0,0.0985052);
   quadLineFit1005->SetParLimits(0,0,0);
   quadLineFit1005->SetParameter(1,-13.08869);
   quadLineFit1005->SetParError(1,1.560014);
   quadLineFit1005->SetParLimits(1,0,0);
   quadLineFit1005->Draw("same");
   
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
   entry=leg->AddEntry("-30_ppm","  #minus30","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30_ppm","   30","lpf");
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
