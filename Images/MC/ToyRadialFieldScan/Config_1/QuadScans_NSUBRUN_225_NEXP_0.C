void QuadScans_NSUBRUN_225_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:48:22 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1065[2] = {
   16,
   20};
   Double_t -30.000000 ppm_fy1065[2] = {
   -1.679286,
   -1.333066};
   Double_t -30.000000 ppm_fex1065[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1065[2] = {
   0.009828933,
   0.009828933};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1065,-30.000000 ppm_fy1065,-30.000000 ppm_fex1065,-30.000000 ppm_fey1065);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1065 = new TH1F("Graph_mI30dO000000sPppm1065","",100,15.6,20.4);
   Graph_mI30dO000000sPppm1065->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1065->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1065->SetDirectory(0);
   Graph_mI30dO000000sPppm1065->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1065->SetLineColor(ci);
   Graph_mI30dO000000sPppm1065->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1065->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1065->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1065->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1065->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1065->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1065->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1065->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1065->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1065->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1065->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1065->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1065->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1065->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1065->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1065);
   
   
   TF1 *quadLineFit1066 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1066->SetFillColor(19);
   quadLineFit1066->SetFillStyle(0);
   quadLineFit1066->SetLineWidth(2);
   quadLineFit1066->SetChisquare(2.557908e-20);
   quadLineFit1066->SetNDF(0);
   quadLineFit1066->GetXaxis()->SetLabelFont(42);
   quadLineFit1066->GetXaxis()->SetTitleOffset(1);
   quadLineFit1066->GetXaxis()->SetTitleFont(42);
   quadLineFit1066->GetYaxis()->SetLabelFont(42);
   quadLineFit1066->GetYaxis()->SetTitleFont(42);
   quadLineFit1066->SetParameter(0,-3.064166);
   quadLineFit1066->SetParError(0,0.06293588);
   quadLineFit1066->SetParLimits(0,0,0);
   quadLineFit1066->SetParameter(1,0.08655501);
   quadLineFit1066->SetParError(1,0.003475053);
   quadLineFit1066->SetParLimits(1,0,0);
   quadLineFit1066->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1066);
   gre->Draw("ap");
   
   TF1 *quadLineFit1067 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1067->SetFillColor(19);
   quadLineFit1067->SetFillStyle(0);
   quadLineFit1067->SetLineWidth(2);
   quadLineFit1067->SetChisquare(2.557908e-20);
   quadLineFit1067->SetNDF(0);
   quadLineFit1067->GetXaxis()->SetLabelFont(42);
   quadLineFit1067->GetXaxis()->SetTitleOffset(1);
   quadLineFit1067->GetXaxis()->SetTitleFont(42);
   quadLineFit1067->GetYaxis()->SetLabelFont(42);
   quadLineFit1067->GetYaxis()->SetTitleFont(42);
   quadLineFit1067->SetParameter(0,-3.064166);
   quadLineFit1067->SetParError(0,0.06293588);
   quadLineFit1067->SetParLimits(0,0,0);
   quadLineFit1067->SetParameter(1,0.08655501);
   quadLineFit1067->SetParError(1,0.003475053);
   quadLineFit1067->SetParLimits(1,0,0);
   quadLineFit1067->Draw("same");
   
   Double_t 30.000000 ppm_fx1067[2] = {
   16,
   20};
   Double_t 30.000000 ppm_fy1067[2] = {
   2.854127,
   2.294226};
   Double_t 30.000000 ppm_fex1067[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1067[2] = {
   0.009828933,
   0.009828933};
   gre = new TGraphErrors(2,30.000000 ppm_fx1067,30.000000 ppm_fy1067,30.000000 ppm_fex1067,30.000000 ppm_fey1067);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_30dO000000sPppm1067 = new TH1F("Graph_30dO000000sPppm1067","Graph",100,15.6,20.4);
   Graph_30dO000000sPppm1067->SetMinimum(2.226441);
   Graph_30dO000000sPppm1067->SetMaximum(2.921912);
   Graph_30dO000000sPppm1067->SetDirectory(0);
   Graph_30dO000000sPppm1067->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1067->SetLineColor(ci);
   Graph_30dO000000sPppm1067->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1067->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1067->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1067->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1067->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1067->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1067->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1067);
   
   
   TF1 *quadLineFit1068 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1068->SetFillColor(19);
   quadLineFit1068->SetFillStyle(0);
   quadLineFit1068->SetLineColor(2);
   quadLineFit1068->SetLineWidth(2);
   quadLineFit1068->SetChisquare(7.774318e-22);
   quadLineFit1068->SetNDF(0);
   quadLineFit1068->GetXaxis()->SetLabelFont(42);
   quadLineFit1068->GetXaxis()->SetTitleOffset(1);
   quadLineFit1068->GetXaxis()->SetTitleFont(42);
   quadLineFit1068->GetYaxis()->SetLabelFont(42);
   quadLineFit1068->GetYaxis()->SetTitleFont(42);
   quadLineFit1068->SetParameter(0,5.093734);
   quadLineFit1068->SetParError(0,0.06293588);
   quadLineFit1068->SetParLimits(0,0,0);
   quadLineFit1068->SetParameter(1,-0.1399754);
   quadLineFit1068->SetParError(1,0.003475053);
   quadLineFit1068->SetParLimits(1,0,0);
   quadLineFit1068->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1068);
   gre->Draw("p ");
   
   TF1 *quadLineFit1069 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1069->SetFillColor(19);
   quadLineFit1069->SetFillStyle(0);
   quadLineFit1069->SetLineColor(2);
   quadLineFit1069->SetLineWidth(2);
   quadLineFit1069->SetChisquare(7.774318e-22);
   quadLineFit1069->SetNDF(0);
   quadLineFit1069->GetXaxis()->SetLabelFont(42);
   quadLineFit1069->GetXaxis()->SetTitleOffset(1);
   quadLineFit1069->GetXaxis()->SetTitleFont(42);
   quadLineFit1069->GetYaxis()->SetLabelFont(42);
   quadLineFit1069->GetYaxis()->SetTitleFont(42);
   quadLineFit1069->SetParameter(0,5.093734);
   quadLineFit1069->SetParError(0,0.06293588);
   quadLineFit1069->SetParLimits(0,0,0);
   quadLineFit1069->SetParameter(1,-0.1399754);
   quadLineFit1069->SetParError(1,0.003475053);
   quadLineFit1069->SetParLimits(1,0,0);
   quadLineFit1069->Draw("same");
   
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
