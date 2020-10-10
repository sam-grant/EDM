void QuadScans_NSUBRUN_250_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 19:09:40 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1091[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1091[2] = {
   -1.651723,
   -1.330945};
   Double_t -30.000000 ppm_fex1091[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1091[2] = {
   0.009322777,
   0.009322777};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1091,-30.000000 ppm_fy1091,-30.000000 ppm_fex1091,-30.000000 ppm_fey1091);
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
   
   
   TF1 *quadLineFit1092 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1092->SetFillColor(19);
   quadLineFit1092->SetFillStyle(0);
   quadLineFit1092->SetLineWidth(2);
   quadLineFit1092->SetChisquare(5.483142e-20);
   quadLineFit1092->SetNDF(0);
   quadLineFit1092->GetXaxis()->SetLabelFont(42);
   quadLineFit1092->GetXaxis()->SetTitleOffset(1);
   quadLineFit1092->GetXaxis()->SetTitleFont(42);
   quadLineFit1092->GetYaxis()->SetLabelFont(42);
   quadLineFit1092->GetYaxis()->SetTitleFont(42);
   quadLineFit1092->SetParameter(0,-2.934832);
   quadLineFit1092->SetParError(0,0.0596949);
   quadLineFit1092->SetParLimits(0,0,0);
   quadLineFit1092->SetParameter(1,0.08019431);
   quadLineFit1092->SetParError(1,0.003296099);
   quadLineFit1092->SetParLimits(1,0,0);
   quadLineFit1092->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1092);
   gre->Draw("ap");
   
   TF1 *quadLineFit1093 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1093->SetFillColor(19);
   quadLineFit1093->SetFillStyle(0);
   quadLineFit1093->SetLineWidth(2);
   quadLineFit1093->SetChisquare(5.483142e-20);
   quadLineFit1093->SetNDF(0);
   quadLineFit1093->GetXaxis()->SetLabelFont(42);
   quadLineFit1093->GetXaxis()->SetTitleOffset(1);
   quadLineFit1093->GetXaxis()->SetTitleFont(42);
   quadLineFit1093->GetYaxis()->SetLabelFont(42);
   quadLineFit1093->GetYaxis()->SetTitleFont(42);
   quadLineFit1093->SetParameter(0,-2.934832);
   quadLineFit1093->SetParError(0,0.0596949);
   quadLineFit1093->SetParLimits(0,0,0);
   quadLineFit1093->SetParameter(1,0.08019431);
   quadLineFit1093->SetParError(1,0.003296099);
   quadLineFit1093->SetParLimits(1,0,0);
   quadLineFit1093->Draw("same");
   
   Double_t -10.000000 ppm_fx1093[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1093[2] = {
   -0.1613975,
   -0.1139977};
   Double_t -10.000000 ppm_fex1093[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1093[2] = {
   0.009322777,
   0.009322777};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1093,-10.000000 ppm_fy1093,-10.000000 ppm_fex1093,-10.000000 ppm_fey1093);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1093 = new TH1F("Graph_mI10dO000000sPppm1093","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1093->SetMinimum(-0.1773248);
   Graph_mI10dO000000sPppm1093->SetMaximum(-0.09807041);
   Graph_mI10dO000000sPppm1093->SetDirectory(0);
   Graph_mI10dO000000sPppm1093->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1093->SetLineColor(ci);
   Graph_mI10dO000000sPppm1093->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1093->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1093->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1093->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1093->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1093->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1093->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1093);
   
   
   TF1 *quadLineFit1094 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1094->SetFillColor(19);
   quadLineFit1094->SetFillStyle(0);
   quadLineFit1094->SetLineColor(2);
   quadLineFit1094->SetLineWidth(2);
   quadLineFit1094->SetChisquare(5.439478e-22);
   quadLineFit1094->SetNDF(0);
   quadLineFit1094->GetXaxis()->SetLabelFont(42);
   quadLineFit1094->GetXaxis()->SetTitleOffset(1);
   quadLineFit1094->GetXaxis()->SetTitleFont(42);
   quadLineFit1094->GetYaxis()->SetLabelFont(42);
   quadLineFit1094->GetYaxis()->SetTitleFont(42);
   quadLineFit1094->SetParameter(0,-0.3509966);
   quadLineFit1094->SetParError(0,0.0596949);
   quadLineFit1094->SetParLimits(0,0,0);
   quadLineFit1094->SetParameter(1,0.01184994);
   quadLineFit1094->SetParError(1,0.003296099);
   quadLineFit1094->SetParLimits(1,0,0);
   quadLineFit1094->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1094);
   gre->Draw("p ");
   
   TF1 *quadLineFit1095 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1095->SetFillColor(19);
   quadLineFit1095->SetFillStyle(0);
   quadLineFit1095->SetLineColor(2);
   quadLineFit1095->SetLineWidth(2);
   quadLineFit1095->SetChisquare(5.439478e-22);
   quadLineFit1095->SetNDF(0);
   quadLineFit1095->GetXaxis()->SetLabelFont(42);
   quadLineFit1095->GetXaxis()->SetTitleOffset(1);
   quadLineFit1095->GetXaxis()->SetTitleFont(42);
   quadLineFit1095->GetYaxis()->SetLabelFont(42);
   quadLineFit1095->GetYaxis()->SetTitleFont(42);
   quadLineFit1095->SetParameter(0,-0.3509966);
   quadLineFit1095->SetParError(0,0.0596949);
   quadLineFit1095->SetParLimits(0,0,0);
   quadLineFit1095->SetParameter(1,0.01184994);
   quadLineFit1095->SetParError(1,0.003296099);
   quadLineFit1095->SetParLimits(1,0,0);
   quadLineFit1095->Draw("same");
   
   Double_t 10.000000 ppm_fx1095[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1095[2] = {
   1.362867,
   1.088397};
   Double_t 10.000000 ppm_fex1095[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1095[2] = {
   0.009322777,
   0.009322777};
   gre = new TGraphErrors(2,10.000000 ppm_fx1095,10.000000 ppm_fy1095,10.000000 ppm_fex1095,10.000000 ppm_fey1095);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_10dO000000sPppm1095 = new TH1F("Graph_10dO000000sPppm1095","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1095->SetMinimum(1.049763);
   Graph_10dO000000sPppm1095->SetMaximum(1.401501);
   Graph_10dO000000sPppm1095->SetDirectory(0);
   Graph_10dO000000sPppm1095->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1095->SetLineColor(ci);
   Graph_10dO000000sPppm1095->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1095->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1095->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1095->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1095->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1095->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1095->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1095);
   
   
   TF1 *quadLineFit1096 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1096->SetFillColor(19);
   quadLineFit1096->SetFillStyle(0);
   quadLineFit1096->SetLineColor(3);
   quadLineFit1096->SetLineWidth(2);
   quadLineFit1096->SetChisquare(8.968164e-20);
   quadLineFit1096->SetNDF(0);
   quadLineFit1096->GetXaxis()->SetLabelFont(42);
   quadLineFit1096->GetXaxis()->SetTitleOffset(1);
   quadLineFit1096->GetXaxis()->SetTitleFont(42);
   quadLineFit1096->GetYaxis()->SetLabelFont(42);
   quadLineFit1096->GetYaxis()->SetTitleFont(42);
   quadLineFit1096->SetParameter(0,2.460747);
   quadLineFit1096->SetParError(0,0.0596949);
   quadLineFit1096->SetParLimits(0,0,0);
   quadLineFit1096->SetParameter(1,-0.06861748);
   quadLineFit1096->SetParError(1,0.003296099);
   quadLineFit1096->SetParLimits(1,0,0);
   quadLineFit1096->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1096);
   gre->Draw("p ");
   
   TF1 *quadLineFit1097 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1097->SetFillColor(19);
   quadLineFit1097->SetFillStyle(0);
   quadLineFit1097->SetLineColor(3);
   quadLineFit1097->SetLineWidth(2);
   quadLineFit1097->SetChisquare(8.968164e-20);
   quadLineFit1097->SetNDF(0);
   quadLineFit1097->GetXaxis()->SetLabelFont(42);
   quadLineFit1097->GetXaxis()->SetTitleOffset(1);
   quadLineFit1097->GetXaxis()->SetTitleFont(42);
   quadLineFit1097->GetYaxis()->SetLabelFont(42);
   quadLineFit1097->GetYaxis()->SetTitleFont(42);
   quadLineFit1097->SetParameter(0,2.460747);
   quadLineFit1097->SetParError(0,0.0596949);
   quadLineFit1097->SetParLimits(0,0,0);
   quadLineFit1097->SetParameter(1,-0.06861748);
   quadLineFit1097->SetParError(1,0.003296099);
   quadLineFit1097->SetParLimits(1,0,0);
   quadLineFit1097->Draw("same");
   
   Double_t 30.000000 ppm_fx1097[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1097[2] = {
   2.874511,
   2.304256};
   Double_t 30.000000 ppm_fex1097[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1097[2] = {
   0.009322777,
   0.009322777};
   gre = new TGraphErrors(2,30.000000 ppm_fx1097,30.000000 ppm_fy1097,30.000000 ppm_fex1097,30.000000 ppm_fey1097);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_30dO000000sPppm1097 = new TH1F("Graph_30dO000000sPppm1097","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1097->SetMinimum(2.236043);
   Graph_30dO000000sPppm1097->SetMaximum(2.942724);
   Graph_30dO000000sPppm1097->SetDirectory(0);
   Graph_30dO000000sPppm1097->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1097->SetLineColor(ci);
   Graph_30dO000000sPppm1097->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1097->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1097->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1097->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1097->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1097->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1097->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1097);
   
   
   TF1 *quadLineFit1098 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1098->SetFillColor(19);
   quadLineFit1098->SetFillStyle(0);
   quadLineFit1098->SetLineColor(4);
   quadLineFit1098->SetLineWidth(2);
   quadLineFit1098->SetChisquare(4.029065e-19);
   quadLineFit1098->SetNDF(0);
   quadLineFit1098->GetXaxis()->SetLabelFont(42);
   quadLineFit1098->GetXaxis()->SetTitleOffset(1);
   quadLineFit1098->GetXaxis()->SetTitleFont(42);
   quadLineFit1098->GetYaxis()->SetLabelFont(42);
   quadLineFit1098->GetYaxis()->SetTitleFont(42);
   quadLineFit1098->SetParameter(0,5.15553);
   quadLineFit1098->SetParError(0,0.0596949);
   quadLineFit1098->SetParLimits(0,0,0);
   quadLineFit1098->SetParameter(1,-0.1425637);
   quadLineFit1098->SetParError(1,0.003296099);
   quadLineFit1098->SetParLimits(1,0,0);
   quadLineFit1098->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1098);
   gre->Draw("p ");
   
   TF1 *quadLineFit1099 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1099->SetFillColor(19);
   quadLineFit1099->SetFillStyle(0);
   quadLineFit1099->SetLineColor(4);
   quadLineFit1099->SetLineWidth(2);
   quadLineFit1099->SetChisquare(4.029065e-19);
   quadLineFit1099->SetNDF(0);
   quadLineFit1099->GetXaxis()->SetLabelFont(42);
   quadLineFit1099->GetXaxis()->SetTitleOffset(1);
   quadLineFit1099->GetXaxis()->SetTitleFont(42);
   quadLineFit1099->GetYaxis()->SetLabelFont(42);
   quadLineFit1099->GetYaxis()->SetTitleFont(42);
   quadLineFit1099->SetParameter(0,5.15553);
   quadLineFit1099->SetParError(0,0.0596949);
   quadLineFit1099->SetParLimits(0,0,0);
   quadLineFit1099->SetParameter(1,-0.1425637);
   quadLineFit1099->SetParError(1,0.003296099);
   quadLineFit1099->SetParLimits(1,0,0);
   quadLineFit1099->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10 ppm","lpf");
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
