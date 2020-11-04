void QuadScans_NSUBRUN_250_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:45 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1091[3] = {
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1091[3] = {
   -1.659481,
   -1.485896,
   -1.338497};
   Double_t -30.000000 ppm_fex1091[3] = {
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1091[3] = {
   0.009322777,
   0.009322777,
   0.009322777};
   TGraphErrors *gre = new TGraphErrors(3,-30.000000 ppm_fx1091,-30.000000 ppm_fy1091,-30.000000 ppm_fex1091,-30.000000 ppm_fey1091);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1091 = new TH1F("Graph_mI30dO000000sPppm1091","",100,15.6,20.4);
   Graph_mI30dO000000sPppm1091->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1091->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1091->SetDirectory(0);
   Graph_mI30dO000000sPppm1091->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1091->SetLineColor(ci);
   Graph_mI30dO000000sPppm1091->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1091->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1091->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1091->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1091->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1091->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1091->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1091->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1091->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1091->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1091->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1091->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1091->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1091->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1091->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1091);
   
   
   TF1 *quadLineFit1092 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1092->SetFillColor(19);
   quadLineFit1092->SetFillStyle(0);
   quadLineFit1092->SetLineWidth(2);
   quadLineFit1092->SetChisquare(1.314811);
   quadLineFit1092->SetNDF(1);
   quadLineFit1092->GetXaxis()->SetLabelFont(42);
   quadLineFit1092->GetXaxis()->SetTitleOffset(1);
   quadLineFit1092->GetXaxis()->SetTitleFont(42);
   quadLineFit1092->GetYaxis()->SetLabelFont(42);
   quadLineFit1092->GetYaxis()->SetTitleFont(42);
   quadLineFit1092->SetParameter(0,-2.939055);
   quadLineFit1092->SetParError(0,0.05957188);
   quadLineFit1092->SetParLimits(0,0,0);
   quadLineFit1092->SetParameter(1,0.08024611);
   quadLineFit1092->SetParError(1,0.003296012);
   quadLineFit1092->SetParLimits(1,0,0);
   quadLineFit1092->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1092);
   gre->Draw("ap");
   
   TF1 *quadLineFit1093 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1093->SetFillColor(19);
   quadLineFit1093->SetFillStyle(0);
   quadLineFit1093->SetLineWidth(2);
   quadLineFit1093->SetChisquare(1.314811);
   quadLineFit1093->SetNDF(1);
   quadLineFit1093->GetXaxis()->SetLabelFont(42);
   quadLineFit1093->GetXaxis()->SetTitleOffset(1);
   quadLineFit1093->GetXaxis()->SetTitleFont(42);
   quadLineFit1093->GetYaxis()->SetLabelFont(42);
   quadLineFit1093->GetYaxis()->SetTitleFont(42);
   quadLineFit1093->SetParameter(0,-2.939055);
   quadLineFit1093->SetParError(0,0.05957188);
   quadLineFit1093->SetParLimits(0,0,0);
   quadLineFit1093->SetParameter(1,0.08024611);
   quadLineFit1093->SetParError(1,0.003296012);
   quadLineFit1093->SetParLimits(1,0,0);
   quadLineFit1093->Draw("same");
   
   Double_t 30.000000 ppm_fx1093[3] = {
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1093[3] = {
   2.864137,
   2.533773,
   2.288544};
   Double_t 30.000000 ppm_fex1093[3] = {
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1093[3] = {
   0.009322777,
   0.009322777,
   0.009322777};
   gre = new TGraphErrors(3,30.000000 ppm_fx1093,30.000000 ppm_fy1093,30.000000 ppm_fex1093,30.000000 ppm_fey1093);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_30dO000000sPppm1093 = new TH1F("Graph_30dO000000sPppm1093","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1093->SetMinimum(2.219797);
   Graph_30dO000000sPppm1093->SetMaximum(2.932884);
   Graph_30dO000000sPppm1093->SetDirectory(0);
   Graph_30dO000000sPppm1093->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1093->SetLineColor(ci);
   Graph_30dO000000sPppm1093->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1093->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1093->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1093->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1093->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1093->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1093->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1093);
   
   
   TF1 *quadLineFit1094 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1094->SetFillColor(19);
   quadLineFit1094->SetFillStyle(0);
   quadLineFit1094->SetLineColor(2);
   quadLineFit1094->SetLineWidth(2);
   quadLineFit1094->SetChisquare(13.89912);
   quadLineFit1094->SetNDF(1);
   quadLineFit1094->GetXaxis()->SetLabelFont(42);
   quadLineFit1094->GetXaxis()->SetTitleOffset(1);
   quadLineFit1094->GetXaxis()->SetTitleFont(42);
   quadLineFit1094->GetYaxis()->SetLabelFont(42);
   quadLineFit1094->GetYaxis()->SetTitleFont(42);
   quadLineFit1094->SetParameter(0,5.152323);
   quadLineFit1094->SetParError(0,0.05957354);
   quadLineFit1094->SetParLimits(0,0,0);
   quadLineFit1094->SetParameter(1,-0.1438984);
   quadLineFit1094->SetParError(1,0.003296105);
   quadLineFit1094->SetParLimits(1,0,0);
   quadLineFit1094->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1094);
   gre->Draw("p ");
   
   TF1 *quadLineFit1095 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1095->SetFillColor(19);
   quadLineFit1095->SetFillStyle(0);
   quadLineFit1095->SetLineColor(2);
   quadLineFit1095->SetLineWidth(2);
   quadLineFit1095->SetChisquare(13.89912);
   quadLineFit1095->SetNDF(1);
   quadLineFit1095->GetXaxis()->SetLabelFont(42);
   quadLineFit1095->GetXaxis()->SetTitleOffset(1);
   quadLineFit1095->GetXaxis()->SetTitleFont(42);
   quadLineFit1095->GetYaxis()->SetLabelFont(42);
   quadLineFit1095->GetYaxis()->SetTitleFont(42);
   quadLineFit1095->SetParameter(0,5.152323);
   quadLineFit1095->SetParError(0,0.05957354);
   quadLineFit1095->SetParLimits(0,0,0);
   quadLineFit1095->SetParameter(1,-0.1438984);
   quadLineFit1095->SetParError(1,0.003296105);
   quadLineFit1095->SetParLimits(1,0,0);
   quadLineFit1095->Draw("same");
   
   Double_t 0.000000 ppm_fx1095[3] = {
   16,
   18,
   20};
   Double_t 0.000000 ppm_fy1095[3] = {
   0.6061696,
   0.5360958,
   0.4901038};
   Double_t 0.000000 ppm_fex1095[3] = {
   0,
   0,
   0};
   Double_t 0.000000 ppm_fey1095[3] = {
   0.009322777,
   0.009322777,
   0.009322777};
   gre = new TGraphErrors(3,0.000000 ppm_fx1095,0.000000 ppm_fy1095,0.000000 ppm_fex1095,0.000000 ppm_fey1095);
   gre->SetName("0.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_0dO000000sPppm1095 = new TH1F("Graph_0dO000000sPppm1095","Graph",100,15.6,20.4);
   Graph_0dO000000sPppm1095->SetMinimum(0.4673099);
   Graph_0dO000000sPppm1095->SetMaximum(0.6289635);
   Graph_0dO000000sPppm1095->SetDirectory(0);
   Graph_0dO000000sPppm1095->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_0dO000000sPppm1095->SetLineColor(ci);
   Graph_0dO000000sPppm1095->GetXaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1095->GetXaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1095->GetXaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1095->GetYaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1095->GetYaxis()->SetTitleFont(42);
   Graph_0dO000000sPppm1095->GetZaxis()->SetLabelFont(42);
   Graph_0dO000000sPppm1095->GetZaxis()->SetTitleOffset(1);
   Graph_0dO000000sPppm1095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_0.000000 ppm1095);
   
   
   TF1 *quadLineFit1096 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1096->SetFillColor(19);
   quadLineFit1096->SetFillStyle(0);
   quadLineFit1096->SetLineColor(3);
   quadLineFit1096->SetLineWidth(2);
   quadLineFit1096->SetChisquare(1.11209);
   quadLineFit1096->SetNDF(1);
   quadLineFit1096->GetXaxis()->SetLabelFont(42);
   quadLineFit1096->GetXaxis()->SetTitleOffset(1);
   quadLineFit1096->GetXaxis()->SetTitleFont(42);
   quadLineFit1096->GetYaxis()->SetLabelFont(42);
   quadLineFit1096->GetYaxis()->SetTitleFont(42);
   quadLineFit1096->SetParameter(0,1.066419);
   quadLineFit1096->SetParError(0,0.05957263);
   quadLineFit1096->SetParLimits(0,0,0);
   quadLineFit1096->SetParameter(1,-0.02901645);
   quadLineFit1096->SetParError(1,0.003296054);
   quadLineFit1096->SetParLimits(1,0,0);
   quadLineFit1096->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1096);
   gre->Draw("p ");
   
   TF1 *quadLineFit1097 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1097->SetFillColor(19);
   quadLineFit1097->SetFillStyle(0);
   quadLineFit1097->SetLineColor(3);
   quadLineFit1097->SetLineWidth(2);
   quadLineFit1097->SetChisquare(1.11209);
   quadLineFit1097->SetNDF(1);
   quadLineFit1097->GetXaxis()->SetLabelFont(42);
   quadLineFit1097->GetXaxis()->SetTitleOffset(1);
   quadLineFit1097->GetXaxis()->SetTitleFont(42);
   quadLineFit1097->GetYaxis()->SetLabelFont(42);
   quadLineFit1097->GetYaxis()->SetTitleFont(42);
   quadLineFit1097->SetParameter(0,1.066419);
   quadLineFit1097->SetParError(0,0.05957263);
   quadLineFit1097->SetParLimits(0,0,0);
   quadLineFit1097->SetParameter(1,-0.02901645);
   quadLineFit1097->SetParError(1,0.003296054);
   quadLineFit1097->SetParLimits(1,0,0);
   quadLineFit1097->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("0.000000 ppm","    0 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
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
