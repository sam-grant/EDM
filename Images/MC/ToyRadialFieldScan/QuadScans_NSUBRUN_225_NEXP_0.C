void QuadScans_NSUBRUN_225_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 12 12:24:46 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1081[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1081[2] = {
   -1.635175,
   -1.331051};
   Double_t -30.000000 ppm_fex1081[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1081[2] = {
   0.009828933,
   0.009828933};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1081,-30.000000 ppm_fy1081,-30.000000 ppm_fex1081,-30.000000 ppm_fey1081);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1081 = new TH1F("Graph_mI30dO000000sPppm1081","",100,15.6,20.4);
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
   
   
   TF1 *quadLineFit1082 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1082->SetFillColor(19);
   quadLineFit1082->SetFillStyle(0);
   quadLineFit1082->SetLineWidth(2);
   quadLineFit1082->SetChisquare(5.621922e-20);
   quadLineFit1082->SetNDF(0);
   quadLineFit1082->GetXaxis()->SetLabelFont(42);
   quadLineFit1082->GetXaxis()->SetTitleOffset(1);
   quadLineFit1082->GetXaxis()->SetTitleFont(42);
   quadLineFit1082->GetYaxis()->SetLabelFont(42);
   quadLineFit1082->GetYaxis()->SetTitleFont(42);
   quadLineFit1082->SetParameter(0,-2.851673);
   quadLineFit1082->SetParError(0,0.06293588);
   quadLineFit1082->SetParLimits(0,0,0);
   quadLineFit1082->SetParameter(1,0.0760311);
   quadLineFit1082->SetParError(1,0.003475053);
   quadLineFit1082->SetParLimits(1,0,0);
   quadLineFit1082->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1082);
   gre->Draw("ap");
   
   TF1 *quadLineFit1083 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1083->SetFillColor(19);
   quadLineFit1083->SetFillStyle(0);
   quadLineFit1083->SetLineWidth(2);
   quadLineFit1083->SetChisquare(5.621922e-20);
   quadLineFit1083->SetNDF(0);
   quadLineFit1083->GetXaxis()->SetLabelFont(42);
   quadLineFit1083->GetXaxis()->SetTitleOffset(1);
   quadLineFit1083->GetXaxis()->SetTitleFont(42);
   quadLineFit1083->GetYaxis()->SetLabelFont(42);
   quadLineFit1083->GetYaxis()->SetTitleFont(42);
   quadLineFit1083->SetParameter(0,-2.851673);
   quadLineFit1083->SetParError(0,0.06293588);
   quadLineFit1083->SetParLimits(0,0,0);
   quadLineFit1083->SetParameter(1,0.0760311);
   quadLineFit1083->SetParError(1,0.003475053);
   quadLineFit1083->SetParLimits(1,0,0);
   quadLineFit1083->Draw("same");
   
   Double_t -10.000000 ppm_fx1083[2] = {
   16,
   20};
   Double_t -10.000000 ppm_fy1083[2] = {
   -0.1552639,
   -0.1149677};
   Double_t -10.000000 ppm_fex1083[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1083[2] = {
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1083,-10.000000 ppm_fy1083,-10.000000 ppm_fex1083,-10.000000 ppm_fey1083);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1083 = new TH1F("Graph_mI10dO000000sPppm1083","Graph",100,15.6,20.4);
   Graph_mI10dO000000sPppm1083->SetMinimum(-0.1710882);
   Graph_mI10dO000000sPppm1083->SetMaximum(-0.09914334);
   Graph_mI10dO000000sPppm1083->SetDirectory(0);
   Graph_mI10dO000000sPppm1083->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1083->SetLineColor(ci);
   Graph_mI10dO000000sPppm1083->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1083->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1083->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1083->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1083->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1083->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1083->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1083->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1083);
   
   
   TF1 *quadLineFit1084 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1084->SetFillColor(19);
   quadLineFit1084->SetFillStyle(0);
   quadLineFit1084->SetLineColor(2);
   quadLineFit1084->SetLineWidth(2);
   quadLineFit1084->SetChisquare(2.881762e-20);
   quadLineFit1084->SetNDF(0);
   quadLineFit1084->GetXaxis()->SetLabelFont(42);
   quadLineFit1084->GetXaxis()->SetTitleOffset(1);
   quadLineFit1084->GetXaxis()->SetTitleFont(42);
   quadLineFit1084->GetYaxis()->SetLabelFont(42);
   quadLineFit1084->GetYaxis()->SetTitleFont(42);
   quadLineFit1084->SetParameter(0,-0.3164488);
   quadLineFit1084->SetParError(0,0.06293588);
   quadLineFit1084->SetParLimits(0,0,0);
   quadLineFit1084->SetParameter(1,0.01007406);
   quadLineFit1084->SetParError(1,0.003475053);
   quadLineFit1084->SetParLimits(1,0,0);
   quadLineFit1084->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1084);
   gre->Draw("p ");
   
   TF1 *quadLineFit1085 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1085->SetFillColor(19);
   quadLineFit1085->SetFillStyle(0);
   quadLineFit1085->SetLineColor(2);
   quadLineFit1085->SetLineWidth(2);
   quadLineFit1085->SetChisquare(2.881762e-20);
   quadLineFit1085->SetNDF(0);
   quadLineFit1085->GetXaxis()->SetLabelFont(42);
   quadLineFit1085->GetXaxis()->SetTitleOffset(1);
   quadLineFit1085->GetXaxis()->SetTitleFont(42);
   quadLineFit1085->GetYaxis()->SetLabelFont(42);
   quadLineFit1085->GetYaxis()->SetTitleFont(42);
   quadLineFit1085->SetParameter(0,-0.3164488);
   quadLineFit1085->SetParError(0,0.06293588);
   quadLineFit1085->SetParLimits(0,0,0);
   quadLineFit1085->SetParameter(1,0.01007406);
   quadLineFit1085->SetParError(1,0.003475053);
   quadLineFit1085->SetParLimits(1,0,0);
   quadLineFit1085->Draw("same");
   
   Double_t 10.000000 ppm_fx1085[2] = {
   16,
   20};
   Double_t 10.000000 ppm_fy1085[2] = {
   1.354533,
   1.102905};
   Double_t 10.000000 ppm_fex1085[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1085[2] = {
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(2,10.000000 ppm_fx1085,10.000000 ppm_fy1085,10.000000 ppm_fex1085,10.000000 ppm_fey1085);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_10dO000000sPppm1085 = new TH1F("Graph_10dO000000sPppm1085","Graph",100,15.6,20.4);
   Graph_10dO000000sPppm1085->SetMinimum(1.065947);
   Graph_10dO000000sPppm1085->SetMaximum(1.391491);
   Graph_10dO000000sPppm1085->SetDirectory(0);
   Graph_10dO000000sPppm1085->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1085->SetLineColor(ci);
   Graph_10dO000000sPppm1085->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1085->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1085->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1085->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1085->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1085->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1085->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1085->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1085);
   
   
   TF1 *quadLineFit1086 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1086->SetFillColor(19);
   quadLineFit1086->SetFillStyle(0);
   quadLineFit1086->SetLineColor(3);
   quadLineFit1086->SetLineWidth(2);
   quadLineFit1086->SetChisquare(7.165466e-20);
   quadLineFit1086->SetNDF(0);
   quadLineFit1086->GetXaxis()->SetLabelFont(42);
   quadLineFit1086->GetXaxis()->SetTitleOffset(1);
   quadLineFit1086->GetXaxis()->SetTitleFont(42);
   quadLineFit1086->GetYaxis()->SetLabelFont(42);
   quadLineFit1086->GetYaxis()->SetTitleFont(42);
   quadLineFit1086->SetParameter(0,2.361046);
   quadLineFit1086->SetParError(0,0.06293588);
   quadLineFit1086->SetParLimits(0,0,0);
   quadLineFit1086->SetParameter(1,-0.06290705);
   quadLineFit1086->SetParError(1,0.003475053);
   quadLineFit1086->SetParLimits(1,0,0);
   quadLineFit1086->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1086);
   gre->Draw("p ");
   
   TF1 *quadLineFit1087 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1087->SetFillColor(19);
   quadLineFit1087->SetFillStyle(0);
   quadLineFit1087->SetLineColor(3);
   quadLineFit1087->SetLineWidth(2);
   quadLineFit1087->SetChisquare(7.165466e-20);
   quadLineFit1087->SetNDF(0);
   quadLineFit1087->GetXaxis()->SetLabelFont(42);
   quadLineFit1087->GetXaxis()->SetTitleOffset(1);
   quadLineFit1087->GetXaxis()->SetTitleFont(42);
   quadLineFit1087->GetYaxis()->SetLabelFont(42);
   quadLineFit1087->GetYaxis()->SetTitleFont(42);
   quadLineFit1087->SetParameter(0,2.361046);
   quadLineFit1087->SetParError(0,0.06293588);
   quadLineFit1087->SetParLimits(0,0,0);
   quadLineFit1087->SetParameter(1,-0.06290705);
   quadLineFit1087->SetParError(1,0.003475053);
   quadLineFit1087->SetParLimits(1,0,0);
   quadLineFit1087->Draw("same");
   
   Double_t 30.000000 ppm_fx1087[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1087[2] = {
   2.866487,
   2.298786};
   Double_t 30.000000 ppm_fex1087[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1087[2] = {
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(2,30.000000 ppm_fx1087,30.000000 ppm_fy1087,30.000000 ppm_fex1087,30.000000 ppm_fey1087);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_30dO000000sPppm1087 = new TH1F("Graph_30dO000000sPppm1087","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1087->SetMinimum(2.230221);
   Graph_30dO000000sPppm1087->SetMaximum(2.935052);
   Graph_30dO000000sPppm1087->SetDirectory(0);
   Graph_30dO000000sPppm1087->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1087->SetLineColor(ci);
   Graph_30dO000000sPppm1087->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1087->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1087->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1087->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1087->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1087->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1087->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1087->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1087);
   
   
   TF1 *quadLineFit1088 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1088->SetFillColor(19);
   quadLineFit1088->SetFillStyle(0);
   quadLineFit1088->SetLineColor(4);
   quadLineFit1088->SetLineWidth(2);
   quadLineFit1088->SetChisquare(2.489067e-19);
   quadLineFit1088->SetNDF(0);
   quadLineFit1088->GetXaxis()->SetLabelFont(42);
   quadLineFit1088->GetXaxis()->SetTitleOffset(1);
   quadLineFit1088->GetXaxis()->SetTitleFont(42);
   quadLineFit1088->GetYaxis()->SetLabelFont(42);
   quadLineFit1088->GetYaxis()->SetTitleFont(42);
   quadLineFit1088->SetParameter(0,5.137292);
   quadLineFit1088->SetParError(0,0.06293588);
   quadLineFit1088->SetParLimits(0,0,0);
   quadLineFit1088->SetParameter(1,-0.1419253);
   quadLineFit1088->SetParError(1,0.003475053);
   quadLineFit1088->SetParLimits(1,0,0);
   quadLineFit1088->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1088);
   gre->Draw("p ");
   
   TF1 *quadLineFit1089 = new TF1("quadLineFit","pol 1",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1089->SetFillColor(19);
   quadLineFit1089->SetFillStyle(0);
   quadLineFit1089->SetLineColor(4);
   quadLineFit1089->SetLineWidth(2);
   quadLineFit1089->SetChisquare(2.489067e-19);
   quadLineFit1089->SetNDF(0);
   quadLineFit1089->GetXaxis()->SetLabelFont(42);
   quadLineFit1089->GetXaxis()->SetTitleOffset(1);
   quadLineFit1089->GetXaxis()->SetTitleFont(42);
   quadLineFit1089->GetYaxis()->SetLabelFont(42);
   quadLineFit1089->GetYaxis()->SetTitleFont(42);
   quadLineFit1089->SetParameter(0,5.137292);
   quadLineFit1089->SetParError(0,0.06293588);
   quadLineFit1089->SetParLimits(0,0,0);
   quadLineFit1089->SetParameter(1,-0.1419253);
   quadLineFit1089->SetParError(1,0.003475053);
   quadLineFit1089->SetParLimits(1,0,0);
   quadLineFit1089->Draw("same");
   
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
