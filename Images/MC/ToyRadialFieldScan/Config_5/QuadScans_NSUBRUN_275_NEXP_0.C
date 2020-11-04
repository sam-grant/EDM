void QuadScans_NSUBRUN_275_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:51:50 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(15.37571,-3.25,19.31857,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1081[2] = {
   16,
   18.3};
   Double_t -30.000000 ppm_fy1081[2] = {
   -1.653554,
   -1.446425};
   Double_t -30.000000 ppm_fex1081[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1081[2] = {
   0.008888156,
   0.008888156};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1081,-30.000000 ppm_fy1081,-30.000000 ppm_fex1081,-30.000000 ppm_fey1081);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1081 = new TH1F("Graph_mI30dO000000sPppm1081","",100,15.77,18.53);
   Graph_mI30dO000000sPppm1081->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1081->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1081->SetDirectory(0);
   Graph_mI30dO000000sPppm1081->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1081->SetLineColor(ci);
   Graph_mI30dO000000sPppm1081->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1081->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1081->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1081->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1081->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1081->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1081->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1081->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1081->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1081->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1081->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1081->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1081->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1081->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1081->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1081->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1081);
   
   
   TF1 *quadLineFit1082 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1082->SetFillColor(19);
   quadLineFit1082->SetFillStyle(0);
   quadLineFit1082->SetLineWidth(2);
   quadLineFit1082->SetChisquare(1.071963e-19);
   quadLineFit1082->SetNDF(0);
   quadLineFit1082->GetXaxis()->SetLabelFont(42);
   quadLineFit1082->GetXaxis()->SetTitleOffset(1);
   quadLineFit1082->GetXaxis()->SetTitleFont(42);
   quadLineFit1082->GetYaxis()->SetLabelFont(42);
   quadLineFit1082->GetYaxis()->SetTitleFont(42);
   quadLineFit1082->SetParameter(0,-3.094448);
   quadLineFit1082->SetParError(0,0.0939371);
   quadLineFit1082->SetParLimits(0,0,0);
   quadLineFit1082->SetParameter(1,0.09005586);
   quadLineFit1082->SetParError(1,0.005465109);
   quadLineFit1082->SetParLimits(1,0,0);
   quadLineFit1082->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1082);
   gre->Draw("ap");
   
   TF1 *quadLineFit1083 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1083->SetFillColor(19);
   quadLineFit1083->SetFillStyle(0);
   quadLineFit1083->SetLineWidth(2);
   quadLineFit1083->SetChisquare(1.071963e-19);
   quadLineFit1083->SetNDF(0);
   quadLineFit1083->GetXaxis()->SetLabelFont(42);
   quadLineFit1083->GetXaxis()->SetTitleOffset(1);
   quadLineFit1083->GetXaxis()->SetTitleFont(42);
   quadLineFit1083->GetYaxis()->SetLabelFont(42);
   quadLineFit1083->GetYaxis()->SetTitleFont(42);
   quadLineFit1083->SetParameter(0,-3.094448);
   quadLineFit1083->SetParError(0,0.0939371);
   quadLineFit1083->SetParLimits(0,0,0);
   quadLineFit1083->SetParameter(1,0.09005586);
   quadLineFit1083->SetParError(1,0.005465109);
   quadLineFit1083->SetParLimits(1,0,0);
   quadLineFit1083->Draw("same");
   
   Double_t 30.000000 ppm_fx1083[2] = {
   16,
   18.3};
   Double_t 30.000000 ppm_fy1083[2] = {
   2.866915,
   2.494381};
   Double_t 30.000000 ppm_fex1083[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1083[2] = {
   0.008888156,
   0.008888156};
   gre = new TGraphErrors(2,30.000000 ppm_fx1083,30.000000 ppm_fy1083,30.000000 ppm_fex1083,30.000000 ppm_fey1083);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_30dO000000sPppm1083 = new TH1F("Graph_30dO000000sPppm1083","Graph",100,15.77,18.53);
   Graph_30dO000000sPppm1083->SetMinimum(2.446462);
   Graph_30dO000000sPppm1083->SetMaximum(2.914835);
   Graph_30dO000000sPppm1083->SetDirectory(0);
   Graph_30dO000000sPppm1083->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1083->SetLineColor(ci);
   Graph_30dO000000sPppm1083->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1083->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1083->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1083->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1083->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1083->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1083->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1083->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1083);
   
   
   TF1 *quadLineFit1084 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1084->SetFillColor(19);
   quadLineFit1084->SetFillStyle(0);
   quadLineFit1084->SetLineColor(2);
   quadLineFit1084->SetLineWidth(2);
   quadLineFit1084->SetChisquare(1.78268e-19);
   quadLineFit1084->SetNDF(0);
   quadLineFit1084->GetXaxis()->SetLabelFont(42);
   quadLineFit1084->GetXaxis()->SetTitleOffset(1);
   quadLineFit1084->GetXaxis()->SetTitleFont(42);
   quadLineFit1084->GetYaxis()->SetLabelFont(42);
   quadLineFit1084->GetYaxis()->SetTitleFont(42);
   quadLineFit1084->SetParameter(0,5.458458);
   quadLineFit1084->SetParError(0,0.0939371);
   quadLineFit1084->SetParLimits(0,0,0);
   quadLineFit1084->SetParameter(1,-0.1619714);
   quadLineFit1084->SetParError(1,0.005465109);
   quadLineFit1084->SetParLimits(1,0,0);
   quadLineFit1084->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1084);
   gre->Draw("p ");
   
   TF1 *quadLineFit1085 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1085->SetFillColor(19);
   quadLineFit1085->SetFillStyle(0);
   quadLineFit1085->SetLineColor(2);
   quadLineFit1085->SetLineWidth(2);
   quadLineFit1085->SetChisquare(1.78268e-19);
   quadLineFit1085->SetNDF(0);
   quadLineFit1085->GetXaxis()->SetLabelFont(42);
   quadLineFit1085->GetXaxis()->SetTitleOffset(1);
   quadLineFit1085->GetXaxis()->SetTitleFont(42);
   quadLineFit1085->GetYaxis()->SetLabelFont(42);
   quadLineFit1085->GetYaxis()->SetTitleFont(42);
   quadLineFit1085->SetParameter(0,5.458458);
   quadLineFit1085->SetParError(0,0.0939371);
   quadLineFit1085->SetParLimits(0,0,0);
   quadLineFit1085->SetParameter(1,-0.1619714);
   quadLineFit1085->SetParError(1,0.005465109);
   quadLineFit1085->SetParLimits(1,0,0);
   quadLineFit1085->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
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
