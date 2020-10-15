void QuadScans_NSUBRUN_125_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:32:51 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(15.37571,-3.25,19.31857,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1049[2] = {
   16,
   18.3};
   Double_t -30.000000 ppm_fy1049[2] = {
   -1.686938,
   -1.458773};
   Double_t -30.000000 ppm_fex1049[2] = {
   0,
   0};
   Double_t -30.000000 ppm_fey1049[2] = {
   0.01320349,
   0.01320349};
   TGraphErrors *gre = new TGraphErrors(2,-30.000000 ppm_fx1049,-30.000000 ppm_fy1049,-30.000000 ppm_fex1049,-30.000000 ppm_fey1049);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1049 = new TH1F("Graph_mI30dO000000sPppm1049","",100,15.77,18.53);
   Graph_mI30dO000000sPppm1049->SetMinimum(-2.5);
   Graph_mI30dO000000sPppm1049->SetMaximum(3.5);
   Graph_mI30dO000000sPppm1049->SetDirectory(0);
   Graph_mI30dO000000sPppm1049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1049->SetLineColor(ci);
   Graph_mI30dO000000sPppm1049->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI30dO000000sPppm1049->GetXaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1049->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1049->GetXaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1049->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1049->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1049->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI30dO000000sPppm1049->GetYaxis()->CenterTitle(true);
   Graph_mI30dO000000sPppm1049->GetYaxis()->SetNdivisions(4000510);
   Graph_mI30dO000000sPppm1049->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1049->GetYaxis()->SetTitleSize(0.04);
   Graph_mI30dO000000sPppm1049->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI30dO000000sPppm1049->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1049->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1049->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1049);
   
   
   TF1 *quadLineFit1050 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1050->SetFillColor(19);
   quadLineFit1050->SetFillStyle(0);
   quadLineFit1050->SetLineWidth(2);
   quadLineFit1050->SetChisquare(2.176169e-17);
   quadLineFit1050->SetNDF(0);
   quadLineFit1050->GetXaxis()->SetLabelFont(42);
   quadLineFit1050->GetXaxis()->SetTitleOffset(1);
   quadLineFit1050->GetXaxis()->SetTitleFont(42);
   quadLineFit1050->GetYaxis()->SetLabelFont(42);
   quadLineFit1050->GetYaxis()->SetTitleFont(42);
   quadLineFit1050->SetParameter(0,-3.274176);
   quadLineFit1050->SetParError(0,0.139545);
   quadLineFit1050->SetParLimits(0,0,0);
   quadLineFit1050->SetParameter(1,0.09920236);
   quadLineFit1050->SetParError(1,0.0081185);
   quadLineFit1050->SetParLimits(1,0,0);
   quadLineFit1050->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1050);
   gre->Draw("ap");
   
   TF1 *quadLineFit1051 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1051->SetFillColor(19);
   quadLineFit1051->SetFillStyle(0);
   quadLineFit1051->SetLineWidth(2);
   quadLineFit1051->SetChisquare(2.176169e-17);
   quadLineFit1051->SetNDF(0);
   quadLineFit1051->GetXaxis()->SetLabelFont(42);
   quadLineFit1051->GetXaxis()->SetTitleOffset(1);
   quadLineFit1051->GetXaxis()->SetTitleFont(42);
   quadLineFit1051->GetYaxis()->SetLabelFont(42);
   quadLineFit1051->GetYaxis()->SetTitleFont(42);
   quadLineFit1051->SetParameter(0,-3.274176);
   quadLineFit1051->SetParError(0,0.139545);
   quadLineFit1051->SetParLimits(0,0,0);
   quadLineFit1051->SetParameter(1,0.09920236);
   quadLineFit1051->SetParError(1,0.0081185);
   quadLineFit1051->SetParLimits(1,0,0);
   quadLineFit1051->Draw("same");
   
   Double_t -10.000000 ppm_fx1051[2] = {
   16,
   18.3};
   Double_t -10.000000 ppm_fy1051[2] = {
   -0.1613272,
   -0.1255822};
   Double_t -10.000000 ppm_fex1051[2] = {
   0,
   0};
   Double_t -10.000000 ppm_fey1051[2] = {
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(2,-10.000000 ppm_fx1051,-10.000000 ppm_fy1051,-10.000000 ppm_fex1051,-10.000000 ppm_fey1051);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1051 = new TH1F("Graph_mI10dO000000sPppm1051","Graph",100,15.77,18.53);
   Graph_mI10dO000000sPppm1051->SetMinimum(-0.1807459);
   Graph_mI10dO000000sPppm1051->SetMaximum(-0.1061635);
   Graph_mI10dO000000sPppm1051->SetDirectory(0);
   Graph_mI10dO000000sPppm1051->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1051->SetLineColor(ci);
   Graph_mI10dO000000sPppm1051->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1051->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1051->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1051->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1051->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1051->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1051->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1051);
   
   
   TF1 *quadLineFit1052 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1052->SetFillColor(19);
   quadLineFit1052->SetFillStyle(0);
   quadLineFit1052->SetLineColor(2);
   quadLineFit1052->SetLineWidth(2);
   quadLineFit1052->SetChisquare(1.765376e-20);
   quadLineFit1052->SetNDF(0);
   quadLineFit1052->GetXaxis()->SetLabelFont(42);
   quadLineFit1052->GetXaxis()->SetTitleOffset(1);
   quadLineFit1052->GetXaxis()->SetTitleFont(42);
   quadLineFit1052->GetYaxis()->SetLabelFont(42);
   quadLineFit1052->GetYaxis()->SetTitleFont(42);
   quadLineFit1052->SetParameter(0,-0.4099884);
   quadLineFit1052->SetParError(0,0.139545);
   quadLineFit1052->SetParLimits(0,0,0);
   quadLineFit1052->SetParameter(1,0.01554132);
   quadLineFit1052->SetParError(1,0.0081185);
   quadLineFit1052->SetParLimits(1,0,0);
   quadLineFit1052->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1052);
   gre->Draw("p ");
   
   TF1 *quadLineFit1053 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1053->SetFillColor(19);
   quadLineFit1053->SetFillStyle(0);
   quadLineFit1053->SetLineColor(2);
   quadLineFit1053->SetLineWidth(2);
   quadLineFit1053->SetChisquare(1.765376e-20);
   quadLineFit1053->SetNDF(0);
   quadLineFit1053->GetXaxis()->SetLabelFont(42);
   quadLineFit1053->GetXaxis()->SetTitleOffset(1);
   quadLineFit1053->GetXaxis()->SetTitleFont(42);
   quadLineFit1053->GetYaxis()->SetLabelFont(42);
   quadLineFit1053->GetYaxis()->SetTitleFont(42);
   quadLineFit1053->SetParameter(0,-0.4099884);
   quadLineFit1053->SetParError(0,0.139545);
   quadLineFit1053->SetParLimits(0,0,0);
   quadLineFit1053->SetParameter(1,0.01554132);
   quadLineFit1053->SetParError(1,0.0081185);
   quadLineFit1053->SetParLimits(1,0,0);
   quadLineFit1053->Draw("same");
   
   Double_t 10.000000 ppm_fx1053[2] = {
   16,
   18.3};
   Double_t 10.000000 ppm_fy1053[2] = {
   1.37762,
   1.161713};
   Double_t 10.000000 ppm_fex1053[2] = {
   0,
   0};
   Double_t 10.000000 ppm_fey1053[2] = {
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(2,10.000000 ppm_fx1053,10.000000 ppm_fy1053,10.000000 ppm_fex1053,10.000000 ppm_fey1053);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_10dO000000sPppm1053 = new TH1F("Graph_10dO000000sPppm1053","Graph",100,15.77,18.53);
   Graph_10dO000000sPppm1053->SetMinimum(1.124279);
   Graph_10dO000000sPppm1053->SetMaximum(1.415055);
   Graph_10dO000000sPppm1053->SetDirectory(0);
   Graph_10dO000000sPppm1053->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1053->SetLineColor(ci);
   Graph_10dO000000sPppm1053->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1053->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1053->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1053->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1053->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1053->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1053->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1053);
   
   
   TF1 *quadLineFit1054 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1054->SetFillColor(19);
   quadLineFit1054->SetFillStyle(0);
   quadLineFit1054->SetLineColor(3);
   quadLineFit1054->SetLineWidth(2);
   quadLineFit1054->SetChisquare(5.110929e-18);
   quadLineFit1054->SetNDF(0);
   quadLineFit1054->GetXaxis()->SetLabelFont(42);
   quadLineFit1054->GetXaxis()->SetTitleOffset(1);
   quadLineFit1054->GetXaxis()->SetTitleFont(42);
   quadLineFit1054->GetYaxis()->SetLabelFont(42);
   quadLineFit1054->GetYaxis()->SetTitleFont(42);
   quadLineFit1054->SetParameter(0,2.879576);
   quadLineFit1054->SetParError(0,0.1395449);
   quadLineFit1054->SetParLimits(0,0,0);
   quadLineFit1054->SetParameter(1,-0.09387229);
   quadLineFit1054->SetParError(1,0.0081185);
   quadLineFit1054->SetParLimits(1,0,0);
   quadLineFit1054->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1054);
   gre->Draw("p ");
   
   TF1 *quadLineFit1055 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1055->SetFillColor(19);
   quadLineFit1055->SetFillStyle(0);
   quadLineFit1055->SetLineColor(3);
   quadLineFit1055->SetLineWidth(2);
   quadLineFit1055->SetChisquare(5.110929e-18);
   quadLineFit1055->SetNDF(0);
   quadLineFit1055->GetXaxis()->SetLabelFont(42);
   quadLineFit1055->GetXaxis()->SetTitleOffset(1);
   quadLineFit1055->GetXaxis()->SetTitleFont(42);
   quadLineFit1055->GetYaxis()->SetLabelFont(42);
   quadLineFit1055->GetYaxis()->SetTitleFont(42);
   quadLineFit1055->SetParameter(0,2.879576);
   quadLineFit1055->SetParError(0,0.1395449);
   quadLineFit1055->SetParLimits(0,0,0);
   quadLineFit1055->SetParameter(1,-0.09387229);
   quadLineFit1055->SetParError(1,0.0081185);
   quadLineFit1055->SetParLimits(1,0,0);
   quadLineFit1055->Draw("same");
   
   Double_t 30.000000 ppm_fx1055[2] = {
   16,
   18.3};
   Double_t 30.000000 ppm_fy1055[2] = {
   2.858505,
   2.521005};
   Double_t 30.000000 ppm_fex1055[2] = {
   0,
   0};
   Double_t 30.000000 ppm_fey1055[2] = {
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(2,30.000000 ppm_fx1055,30.000000 ppm_fy1055,30.000000 ppm_fex1055,30.000000 ppm_fey1055);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_30dO000000sPppm1055 = new TH1F("Graph_30dO000000sPppm1055","Graph",100,15.77,18.53);
   Graph_30dO000000sPppm1055->SetMinimum(2.471411);
   Graph_30dO000000sPppm1055->SetMaximum(2.908099);
   Graph_30dO000000sPppm1055->SetDirectory(0);
   Graph_30dO000000sPppm1055->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1055->SetLineColor(ci);
   Graph_30dO000000sPppm1055->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1055->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1055->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1055->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1055->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1055->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1055->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1055);
   
   
   TF1 *quadLineFit1056 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1056->SetFillColor(19);
   quadLineFit1056->SetFillStyle(0);
   quadLineFit1056->SetLineColor(4);
   quadLineFit1056->SetLineWidth(2);
   quadLineFit1056->SetChisquare(1.016719e-16);
   quadLineFit1056->SetNDF(0);
   quadLineFit1056->GetXaxis()->SetLabelFont(42);
   quadLineFit1056->GetXaxis()->SetTitleOffset(1);
   quadLineFit1056->GetXaxis()->SetTitleFont(42);
   quadLineFit1056->GetYaxis()->SetLabelFont(42);
   quadLineFit1056->GetYaxis()->SetTitleFont(42);
   quadLineFit1056->SetParameter(0,5.206333);
   quadLineFit1056->SetParError(0,0.139545);
   quadLineFit1056->SetParLimits(0,0,0);
   quadLineFit1056->SetParameter(1,-0.1467392);
   quadLineFit1056->SetParError(1,0.0081185);
   quadLineFit1056->SetParLimits(1,0,0);
   quadLineFit1056->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1056);
   gre->Draw("p ");
   
   TF1 *quadLineFit1057 = new TF1("quadLineFit","[0]+[1]*x",15.77,18.53, TF1::EAddToList::kNo);
   quadLineFit1057->SetFillColor(19);
   quadLineFit1057->SetFillStyle(0);
   quadLineFit1057->SetLineColor(4);
   quadLineFit1057->SetLineWidth(2);
   quadLineFit1057->SetChisquare(1.016719e-16);
   quadLineFit1057->SetNDF(0);
   quadLineFit1057->GetXaxis()->SetLabelFont(42);
   quadLineFit1057->GetXaxis()->SetTitleOffset(1);
   quadLineFit1057->GetXaxis()->SetTitleFont(42);
   quadLineFit1057->GetYaxis()->SetLabelFont(42);
   quadLineFit1057->GetYaxis()->SetTitleFont(42);
   quadLineFit1057->SetParameter(0,5.206333);
   quadLineFit1057->SetParError(0,0.139545);
   quadLineFit1057->SetParLimits(0,0,0);
   quadLineFit1057->SetParameter(1,-0.1467392);
   quadLineFit1057->SetParError(1,0.0081185);
   quadLineFit1057->SetParLimits(1,0,0);
   quadLineFit1057->Draw("same");
   
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
