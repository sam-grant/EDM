void QuadScans_NSUBRUN_300_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:56:28 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(14.91429,-3.25,21.77143,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1089[3] = {
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1089[3] = {
   -3.16444,
   -2.803358,
   -2.533058};
   Double_t -50.000000 ppm_fex1089[3] = {
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1089[3] = {
   0.008508651,
   0.008508651,
   0.008508651};
   TGraphErrors *gre = new TGraphErrors(3,-50.000000 ppm_fx1089,-50.000000 ppm_fy1089,-50.000000 ppm_fex1089,-50.000000 ppm_fey1089);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1089 = new TH1F("Graph_mI50dO000000sPppm1089","",100,15.6,20.4);
   Graph_mI50dO000000sPppm1089->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1089->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1089->SetDirectory(0);
   Graph_mI50dO000000sPppm1089->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1089->SetLineColor(ci);
   Graph_mI50dO000000sPppm1089->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1089->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1089->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1089->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1089->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1089->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1089->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1089->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1089->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1089->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1089->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1089->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1089->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1089->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1089->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1089->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1089);
   
   
   TF1 *quadLineFit1090 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1090->SetFillColor(19);
   quadLineFit1090->SetFillStyle(0);
   quadLineFit1090->SetLineWidth(2);
   quadLineFit1090->SetChisquare(18.97219);
   quadLineFit1090->SetNDF(1);
   quadLineFit1090->GetXaxis()->SetLabelFont(42);
   quadLineFit1090->GetXaxis()->SetTitleOffset(1);
   quadLineFit1090->GetXaxis()->SetTitleFont(42);
   quadLineFit1090->GetYaxis()->SetLabelFont(42);
   quadLineFit1090->GetYaxis()->SetTitleFont(42);
   quadLineFit1090->SetParameter(0,-5.674837);
   quadLineFit1090->SetParError(0,0.05437106);
   quadLineFit1090->SetParLimits(0,0,0);
   quadLineFit1090->SetParameter(1,0.1578455);
   quadLineFit1090->SetParError(1,0.00300826);
   quadLineFit1090->SetParLimits(1,0,0);
   quadLineFit1090->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1090);
   gre->Draw("ap");
   
   TF1 *quadLineFit1091 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1091->SetFillColor(19);
   quadLineFit1091->SetFillStyle(0);
   quadLineFit1091->SetLineWidth(2);
   quadLineFit1091->SetChisquare(18.97219);
   quadLineFit1091->SetNDF(1);
   quadLineFit1091->GetXaxis()->SetLabelFont(42);
   quadLineFit1091->GetXaxis()->SetTitleOffset(1);
   quadLineFit1091->GetXaxis()->SetTitleFont(42);
   quadLineFit1091->GetYaxis()->SetLabelFont(42);
   quadLineFit1091->GetYaxis()->SetTitleFont(42);
   quadLineFit1091->SetParameter(0,-5.674837);
   quadLineFit1091->SetParError(0,0.05437106);
   quadLineFit1091->SetParLimits(0,0,0);
   quadLineFit1091->SetParameter(1,0.1578455);
   quadLineFit1091->SetParError(1,0.00300826);
   quadLineFit1091->SetParLimits(1,0,0);
   quadLineFit1091->Draw("same");
   
   Double_t 50.000000 ppm_fx1091[3] = {
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1091[3] = {
   4.363921,
   3.877469,
   3.49105};
   Double_t 50.000000 ppm_fex1091[3] = {
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1091[3] = {
   0.008508651,
   0.008508651,
   0.008508651};
   gre = new TGraphErrors(3,50.000000 ppm_fx1091,50.000000 ppm_fy1091,50.000000 ppm_fex1091,50.000000 ppm_fey1091);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_50dO000000sPppm1091 = new TH1F("Graph_50dO000000sPppm1091","Graph",100,15.6,20.4);
   Graph_50dO000000sPppm1091->SetMinimum(3.393553);
   Graph_50dO000000sPppm1091->SetMaximum(4.461418);
   Graph_50dO000000sPppm1091->SetDirectory(0);
   Graph_50dO000000sPppm1091->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1091->SetLineColor(ci);
   Graph_50dO000000sPppm1091->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1091->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1091->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1091->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1091->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1091->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1091->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1091);
   
   
   TF1 *quadLineFit1092 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1092->SetFillColor(19);
   quadLineFit1092->SetFillStyle(0);
   quadLineFit1092->SetLineColor(2);
   quadLineFit1092->SetLineWidth(2);
   quadLineFit1092->SetChisquare(23.03666);
   quadLineFit1092->SetNDF(1);
   quadLineFit1092->GetXaxis()->SetLabelFont(42);
   quadLineFit1092->GetXaxis()->SetTitleOffset(1);
   quadLineFit1092->GetXaxis()->SetTitleFont(42);
   quadLineFit1092->GetYaxis()->SetLabelFont(42);
   quadLineFit1092->GetYaxis()->SetTitleFont(42);
   quadLineFit1092->SetParameter(0,7.83873);
   quadLineFit1092->SetParError(0,0.05436692);
   quadLineFit1092->SetParLimits(0,0,0);
   quadLineFit1092->SetParameter(1,-0.2182176);
   quadLineFit1092->SetParError(1,0.00300803);
   quadLineFit1092->SetParLimits(1,0,0);
   quadLineFit1092->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1092);
   gre->Draw("p ");
   
   TF1 *quadLineFit1093 = new TF1("quadLineFit","[0]+[1]*x",15.6,20.4, TF1::EAddToList::kNo);
   quadLineFit1093->SetFillColor(19);
   quadLineFit1093->SetFillStyle(0);
   quadLineFit1093->SetLineColor(2);
   quadLineFit1093->SetLineWidth(2);
   quadLineFit1093->SetChisquare(23.03666);
   quadLineFit1093->SetNDF(1);
   quadLineFit1093->GetXaxis()->SetLabelFont(42);
   quadLineFit1093->GetXaxis()->SetTitleOffset(1);
   quadLineFit1093->GetXaxis()->SetTitleFont(42);
   quadLineFit1093->GetYaxis()->SetLabelFont(42);
   quadLineFit1093->GetYaxis()->SetTitleFont(42);
   quadLineFit1093->SetParameter(0,7.83873);
   quadLineFit1093->SetParError(0,0.05436692);
   quadLineFit1093->SetParLimits(0,0,0);
   quadLineFit1093->SetParameter(1,-0.2182176);
   quadLineFit1093->SetParError(1,0.00300803);
   quadLineFit1093->SetParLimits(1,0,0);
   quadLineFit1093->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("50.000000 ppm","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-50.000000 ppm","  #minus50 ppm","lpf");
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
