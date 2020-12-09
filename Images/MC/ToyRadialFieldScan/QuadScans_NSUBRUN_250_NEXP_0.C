void QuadScans_NSUBRUN_250_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  8 12:25:47 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.05124717,-3.25,0.07845805,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1073[2] = {
   0.07142857,
   0.05555556};
   Double_t -30.000000 ppm_fy1073[2] = {
   -1.88425,
   -1.471192};
   Double_t -30.000000 ppm_fex1073[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1073[2] = {
   0.009341547,
   0.009341547};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1073,-30.000000 ppm_fy1073,-30.000000 ppm_fex1073,-30.000000 ppm_fey1073);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";1/QHV [kV^{-1}];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1073 = new TH1F("Graph_mI30dO000000sPppm1073","",100,0.05396825,0.07301587);
   Graph_mI30dO000000sPppm1073->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1073->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1073->SetDirectory(0);
   Graph_mI30dO000000sPppm1073->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1073->SetLineColor(ci);
   Graph_mI30dO000000sPppm1073->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
   Graph_mI30dO000000sPppm1073->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1073->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1073->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1073->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1073->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1073->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1073->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1073->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1073->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1073->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1073->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1073->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1073->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1073->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1073);
   
   
   TF1 *quadLineFit1074 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1074->SetFillColor(19);
   quadLineFit1074->SetFillStyle(0);
   quadLineFit1074->SetLineWidth(2);
   quadLineFit1074->SetChisquare(1.552196e-18);
   quadLineFit1074->SetNDF(0);
   quadLineFit1074->GetXaxis()->SetLabelFont(42);
   quadLineFit1074->GetXaxis()->SetTitleOffset(1);
   quadLineFit1074->GetXaxis()->SetTitleFont(42);
   quadLineFit1074->GetYaxis()->SetLabelFont(42);
   quadLineFit1074->GetYaxis()->SetTitleFont(42);
   quadLineFit1074->SetParameter(0,-0.02548665);
   quadLineFit1074->SetParError(0,0.05325501);
   quadLineFit1074->SetParLimits(0,0,0);
   quadLineFit1074->SetParameter(1,-26.02269);
   quadLineFit1074->SetParError(1,0.8322894);
   quadLineFit1074->SetParLimits(1,0,0);
   quadLineFit1074->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1074);
   gre->Draw("ap");
   
   TF1 *quadLineFit1075 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1075->SetFillColor(19);
   quadLineFit1075->SetFillStyle(0);
   quadLineFit1075->SetLineWidth(2);
   quadLineFit1075->SetChisquare(1.552196e-18);
   quadLineFit1075->SetNDF(0);
   quadLineFit1075->GetXaxis()->SetLabelFont(42);
   quadLineFit1075->GetXaxis()->SetTitleOffset(1);
   quadLineFit1075->GetXaxis()->SetTitleFont(42);
   quadLineFit1075->GetYaxis()->SetLabelFont(42);
   quadLineFit1075->GetYaxis()->SetTitleFont(42);
   quadLineFit1075->SetParameter(0,-0.02548665);
   quadLineFit1075->SetParError(0,0.05325501);
   quadLineFit1075->SetParLimits(0,0,0);
   quadLineFit1075->SetParameter(1,-26.02269);
   quadLineFit1075->SetParError(1,0.8322894);
   quadLineFit1075->SetParLimits(1,0,0);
   quadLineFit1075->Draw("same");
   
   Double_t 30.000000 ppm_fx1075[2] = {
   0.07142857,
   0.05555556};
   Double_t 30.000000 ppm_fy1075[2] = {
   3.264573,
   2.534306};
   Double_t 30.000000 ppm_fex1075[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1075[2] = {
   0.009341547,
   0.009341547};
   gre = new TGraphErrors(2,30.000000 ppm_fx1075,30.000000 ppm_fy1075,30.000000 ppm_fex1075,30.000000 ppm_fey1075);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   
   TH1F *Graph_30dO000000sPppm1075 = new TH1F("Graph_30dO000000sPppm1075","Graph",100,0.05396825,0.07301587);
   Graph_30dO000000sPppm1075->SetMinimum(2.450069);
   Graph_30dO000000sPppm1075->SetMaximum(3.348809);
   Graph_30dO000000sPppm1075->SetDirectory(0);
   Graph_30dO000000sPppm1075->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1075->SetLineColor(ci);
   Graph_30dO000000sPppm1075->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1075->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1075->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1075->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1075->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1075->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1075->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1075->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1075);
   
   
   TF1 *quadLineFit1076 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1076->SetFillColor(19);
   quadLineFit1076->SetFillStyle(0);
   quadLineFit1076->SetLineColor(2);
   quadLineFit1076->SetLineWidth(2);
   quadLineFit1076->SetChisquare(1.05116e-18);
   quadLineFit1076->SetNDF(0);
   quadLineFit1076->GetXaxis()->SetLabelFont(42);
   quadLineFit1076->GetXaxis()->SetTitleOffset(1);
   quadLineFit1076->GetXaxis()->SetTitleFont(42);
   quadLineFit1076->GetYaxis()->SetLabelFont(42);
   quadLineFit1076->GetYaxis()->SetTitleFont(42);
   quadLineFit1076->SetParameter(0,-0.02162908);
   quadLineFit1076->SetParError(0,0.05325502);
   quadLineFit1076->SetParLimits(0,0,0);
   quadLineFit1076->SetParameter(1,46.00683);
   quadLineFit1076->SetParError(1,0.8322894);
   quadLineFit1076->SetParLimits(1,0,0);
   quadLineFit1076->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1076);
   gre->Draw("p ");
   
   TF1 *quadLineFit1077 = new TF1("quadLineFit","[0]+[1]*x",0.05396825,0.07301587, TF1::EAddToList::kNo);
   quadLineFit1077->SetFillColor(19);
   quadLineFit1077->SetFillStyle(0);
   quadLineFit1077->SetLineColor(2);
   quadLineFit1077->SetLineWidth(2);
   quadLineFit1077->SetChisquare(1.05116e-18);
   quadLineFit1077->SetNDF(0);
   quadLineFit1077->GetXaxis()->SetLabelFont(42);
   quadLineFit1077->GetXaxis()->SetTitleOffset(1);
   quadLineFit1077->GetXaxis()->SetTitleFont(42);
   quadLineFit1077->GetYaxis()->SetLabelFont(42);
   quadLineFit1077->GetYaxis()->SetTitleFont(42);
   quadLineFit1077->SetParameter(0,-0.02162908);
   quadLineFit1077->SetParError(0,0.05325502);
   quadLineFit1077->SetParLimits(0,0,0);
   quadLineFit1077->SetParameter(1,46.00683);
   quadLineFit1077->SetParError(1,0.8322894);
   quadLineFit1077->SetParLimits(1,0,0);
   quadLineFit1077->Draw("same");
   
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
