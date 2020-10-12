void QuadScans_NSUBRUN_325_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 12 12:24:50 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1121[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1121[2] = {
   -1.665265,
   -1.324686};
   Double_t -30.000000 ppm_fex1121[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1121[2] = {
   0.008174905,
   0.008174905};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1121,-30.000000 ppm_fy1121,-30.000000 ppm_fex1121,-30.000000 ppm_fey1121);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1121 = new TH1F("Graph_mI30dO000000sPppm1121","",100,15.6,20.4);
   Graph_mI30dO000000sPppm1121->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1121->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1121->SetDirectory(0);
   Graph_mI30dO000000sPppm1121->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1121->SetLineColor(ci);
   Graph_mI30dO000000sPppm1121->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1121->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1121->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1121->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1121->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1121->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1121->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1121->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1121->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1121->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1121->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1121->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1121->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1121->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1121->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1121);
   
   
   TF1 *quadLineFit1122 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1122->SetFillColor(19);
   quadLineFit1122->SetFillStyle(0);
   quadLineFit1122->SetLineWidth(2);
   quadLineFit1122->SetChisquare(4.379874e-20);
   quadLineFit1122->SetNDF(0);
   quadLineFit1122->GetXaxis()->SetLabelFont(42);
   quadLineFit1122->GetXaxis()->SetTitleOffset(1);
   quadLineFit1122->GetXaxis()->SetTitleFont(42);
   quadLineFit1122->GetYaxis()->SetLabelFont(42);
   quadLineFit1122->GetYaxis()->SetTitleFont(42);
   quadLineFit1122->SetParameter(0,-3.02758);
   quadLineFit1122->SetParError(0,0.05234493);
   quadLineFit1122->SetParLimits(0,0,0);
   quadLineFit1122->SetParameter(1,0.08514469);
   quadLineFit1122->SetParError(1,0.002890265);
   quadLineFit1122->SetParLimits(1,0,0);
   quadLineFit1122->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1122);
   gre->Draw("ap");
   
   TF1 *quadLineFit1123 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1123->SetFillColor(19);
   quadLineFit1123->SetFillStyle(0);
   quadLineFit1123->SetLineWidth(2);
   quadLineFit1123->SetChisquare(4.379874e-20);
   quadLineFit1123->SetNDF(0);
   quadLineFit1123->GetXaxis()->SetLabelFont(42);
   quadLineFit1123->GetXaxis()->SetTitleOffset(1);
   quadLineFit1123->GetXaxis()->SetTitleFont(42);
   quadLineFit1123->GetYaxis()->SetLabelFont(42);
   quadLineFit1123->GetYaxis()->SetTitleFont(42);
   quadLineFit1123->SetParameter(0,-3.02758);
   quadLineFit1123->SetParError(0,0.05234493);
   quadLineFit1123->SetParLimits(0,0,0);
   quadLineFit1123->SetParameter(1,0.08514469);
   quadLineFit1123->SetParError(1,0.002890265);
   quadLineFit1123->SetParLimits(1,0,0);
   quadLineFit1123->Draw("same");
   
   Double_t -10.000000 ppm_fx1123[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1123[2] = {
   -0.1540634,
   -0.1147459};
   Double_t -10.000000 ppm_fex1123[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1123[2] = {
   0.008174905,
   0.008174905};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1123,-10.000000 ppm_fy1123,-10.000000 ppm_fex1123,-10.000000 ppm_fey1123);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1123 = new TH1F("Graph_mI10dO000000sPppm1123","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1123->SetMinimum(-0.167805);
   Graph_mI10dO000000sPppm1123->SetMaximum(-0.1010042);
   Graph_mI10dO000000sPppm1123->SetDirectory(0);
   Graph_mI10dO000000sPppm1123->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1123->SetLineColor(ci);
   Graph_mI10dO000000sPppm1123->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1123->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1123->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1123->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1123->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1123->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1123->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1123);
   
   
   TF1 *quadLineFit1124 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1124->SetFillColor(19);
   quadLineFit1124->SetFillStyle(0);
   quadLineFit1124->SetLineColor(2);
   quadLineFit1124->SetLineWidth(2);
   quadLineFit1124->SetChisquare(4.486883e-20);
   quadLineFit1124->SetNDF(0);
   quadLineFit1124->GetXaxis()->SetLabelFont(42);
   quadLineFit1124->GetXaxis()->SetTitleOffset(1);
   quadLineFit1124->GetXaxis()->SetTitleFont(42);
   quadLineFit1124->GetYaxis()->SetLabelFont(42);
   quadLineFit1124->GetYaxis()->SetTitleFont(42);
   quadLineFit1124->SetParameter(0,-0.3113334);
   quadLineFit1124->SetParError(0,0.05234493);
   quadLineFit1124->SetParLimits(0,0,0);
   quadLineFit1124->SetParameter(1,0.009829379);
   quadLineFit1124->SetParError(1,0.002890265);
   quadLineFit1124->SetParLimits(1,0,0);
   quadLineFit1124->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1124);
   gre->Draw("p ");
   
   TF1 *quadLineFit1125 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1125->SetFillColor(19);
   quadLineFit1125->SetFillStyle(0);
   quadLineFit1125->SetLineColor(2);
   quadLineFit1125->SetLineWidth(2);
   quadLineFit1125->SetChisquare(4.486883e-20);
   quadLineFit1125->SetNDF(0);
   quadLineFit1125->GetXaxis()->SetLabelFont(42);
   quadLineFit1125->GetXaxis()->SetTitleOffset(1);
   quadLineFit1125->GetXaxis()->SetTitleFont(42);
   quadLineFit1125->GetYaxis()->SetLabelFont(42);
   quadLineFit1125->GetYaxis()->SetTitleFont(42);
   quadLineFit1125->SetParameter(0,-0.3113334);
   quadLineFit1125->SetParError(0,0.05234493);
   quadLineFit1125->SetParLimits(0,0,0);
   quadLineFit1125->SetParameter(1,0.009829379);
   quadLineFit1125->SetParError(1,0.002890265);
   quadLineFit1125->SetParLimits(1,0,0);
   quadLineFit1125->Draw("same");
   
   Double_t 10.000000 ppm_fx1125[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1125[2] = {
   1.350572,
   1.073429};
   Double_t 10.000000 ppm_fex1125[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1125[2] = {
   0.008174905,
   0.008174905};
   gre = new TGraphErrors(2,10.000000 ppm_fx1125,10.000000 ppm_fy1125,10.000000 ppm_fex1125,10.000000 ppm_fey1125);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_10dO000000sPppm1125 = new TH1F("Graph_10dO000000sPppm1125","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1125->SetMinimum(1.035905);
   Graph_10dO000000sPppm1125->SetMaximum(1.388097);
   Graph_10dO000000sPppm1125->SetDirectory(0);
   Graph_10dO000000sPppm1125->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1125->SetLineColor(ci);
   Graph_10dO000000sPppm1125->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1125->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1125->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1125->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1125->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1125->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1125->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1125->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1125);
   
   
   TF1 *quadLineFit1126 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1126->SetFillColor(19);
   quadLineFit1126->SetFillStyle(0);
   quadLineFit1126->SetLineColor(3);
   quadLineFit1126->SetLineWidth(2);
   quadLineFit1126->SetChisquare(2.613965e-19);
   quadLineFit1126->SetNDF(0);
   quadLineFit1126->GetXaxis()->SetLabelFont(42);
   quadLineFit1126->GetXaxis()->SetTitleOffset(1);
   quadLineFit1126->GetXaxis()->SetTitleFont(42);
   quadLineFit1126->GetYaxis()->SetLabelFont(42);
   quadLineFit1126->GetYaxis()->SetTitleFont(42);
   quadLineFit1126->SetParameter(0,2.459144);
   quadLineFit1126->SetParError(0,0.05234493);
   quadLineFit1126->SetParLimits(0,0,0);
   quadLineFit1126->SetParameter(1,-0.06928574);
   quadLineFit1126->SetParError(1,0.002890265);
   quadLineFit1126->SetParLimits(1,0,0);
   quadLineFit1126->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1126);
   gre->Draw("p ");
   
   TF1 *quadLineFit1127 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1127->SetFillColor(19);
   quadLineFit1127->SetFillStyle(0);
   quadLineFit1127->SetLineColor(3);
   quadLineFit1127->SetLineWidth(2);
   quadLineFit1127->SetChisquare(2.613965e-19);
   quadLineFit1127->SetNDF(0);
   quadLineFit1127->GetXaxis()->SetLabelFont(42);
   quadLineFit1127->GetXaxis()->SetTitleOffset(1);
   quadLineFit1127->GetXaxis()->SetTitleFont(42);
   quadLineFit1127->GetYaxis()->SetLabelFont(42);
   quadLineFit1127->GetYaxis()->SetTitleFont(42);
   quadLineFit1127->SetParameter(0,2.459144);
   quadLineFit1127->SetParError(0,0.05234493);
   quadLineFit1127->SetParLimits(0,0,0);
   quadLineFit1127->SetParameter(1,-0.06928574);
   quadLineFit1127->SetParError(1,0.002890265);
   quadLineFit1127->SetParLimits(1,0,0);
   quadLineFit1127->Draw("same");
   
   Double_t 30.000000 ppm_fx1127[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1127[2] = {
   2.849992,
   2.279099};
   Double_t 30.000000 ppm_fex1127[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1127[2] = {
   0.008174905,
   0.008174905};
   gre = new TGraphErrors(2,30.000000 ppm_fx1127,30.000000 ppm_fy1127,30.000000 ppm_fex1127,30.000000 ppm_fey1127);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_30dO000000sPppm1127 = new TH1F("Graph_30dO000000sPppm1127","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1127->SetMinimum(2.2122);
   Graph_30dO000000sPppm1127->SetMaximum(2.916892);
   Graph_30dO000000sPppm1127->SetDirectory(0);
   Graph_30dO000000sPppm1127->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1127->SetLineColor(ci);
   Graph_30dO000000sPppm1127->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1127->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1127->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1127->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1127->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1127->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1127->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1127->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1127);
   
   
   TF1 *quadLineFit1128 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1128->SetFillColor(19);
   quadLineFit1128->SetFillStyle(0);
   quadLineFit1128->SetLineColor(4);
   quadLineFit1128->SetLineWidth(2);
   quadLineFit1128->SetChisquare(1.064048e-19);
   quadLineFit1128->SetNDF(0);
   quadLineFit1128->GetXaxis()->SetLabelFont(42);
   quadLineFit1128->GetXaxis()->SetTitleOffset(1);
   quadLineFit1128->GetXaxis()->SetTitleFont(42);
   quadLineFit1128->GetYaxis()->SetLabelFont(42);
   quadLineFit1128->GetYaxis()->SetTitleFont(42);
   quadLineFit1128->SetParameter(0,5.133565);
   quadLineFit1128->SetParError(0,0.05234493);
   quadLineFit1128->SetParLimits(0,0,0);
   quadLineFit1128->SetParameter(1,-0.1427233);
   quadLineFit1128->SetParError(1,0.002890265);
   quadLineFit1128->SetParLimits(1,0,0);
   quadLineFit1128->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1128);
   gre->Draw("p ");
   
   TF1 *quadLineFit1129 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1129->SetFillColor(19);
   quadLineFit1129->SetFillStyle(0);
   quadLineFit1129->SetLineColor(4);
   quadLineFit1129->SetLineWidth(2);
   quadLineFit1129->SetChisquare(1.064048e-19);
   quadLineFit1129->SetNDF(0);
   quadLineFit1129->GetXaxis()->SetLabelFont(42);
   quadLineFit1129->GetXaxis()->SetTitleOffset(1);
   quadLineFit1129->GetXaxis()->SetTitleFont(42);
   quadLineFit1129->GetYaxis()->SetLabelFont(42);
   quadLineFit1129->GetYaxis()->SetTitleFont(42);
   quadLineFit1129->SetParameter(0,5.133565);
   quadLineFit1129->SetParError(0,0.05234493);
   quadLineFit1129->SetParLimits(0,0,0);
   quadLineFit1129->SetParameter(1,-0.1427233);
   quadLineFit1129->SetParError(1,0.002890265);
   quadLineFit1129->SetParLimits(1,0,0);
   quadLineFit1129->Draw("same");
   
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
