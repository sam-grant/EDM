void QuadScans_NSUBRUN_125_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:19:20 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(12.37143,-3.25,22.65714,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -30.000000 ppm_fx1049[4] = {
   14,
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1049[4] = {
   -1.88696,
   -1.664741,
   -1.481876,
   -1.312988};
   Double_t -30.000000 ppm_fex1049[4] = {
   0,
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1049[4] = {
   0.01320349,
   0.01320349,
   0.01320349,
   0.01320349};
   TGraphErrors *gre = new TGraphErrors(4,-30.000000 ppm_fx1049,-30.000000 ppm_fy1049,-30.000000 ppm_fex1049,-30.000000 ppm_fey1049);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI30dO000000sPppm1049 = new TH1F("Graph_mI30dO000000sPppm1049","",100,13.4,20.6);
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
   
   
   TF1 *quadLineFit1050 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1050->SetFillColor(19);
   quadLineFit1050->SetFillStyle(0);
   quadLineFit1050->SetLineWidth(2);
   quadLineFit1050->SetChisquare(4.263289);
   quadLineFit1050->SetNDF(2);
   quadLineFit1050->GetXaxis()->SetLabelFont(42);
   quadLineFit1050->GetXaxis()->SetTitleOffset(1);
   quadLineFit1050->GetXaxis()->SetTitleFont(42);
   quadLineFit1050->GetYaxis()->SetLabelFont(42);
   quadLineFit1050->GetYaxis()->SetTitleFont(42);
   quadLineFit1050->SetParameter(0,-3.205705);
   quadLineFit1050->SetParError(0,0.05062242);
   quadLineFit1050->SetParLimits(0,0,0);
   quadLineFit1050->SetParameter(1,0.09523903);
   quadLineFit1050->SetParError(1,0.002952359);
   quadLineFit1050->SetParLimits(1,0,0);
   quadLineFit1050->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1050);
   gre->Draw("ap");
   
   TF1 *quadLineFit1051 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1051->SetFillColor(19);
   quadLineFit1051->SetFillStyle(0);
   quadLineFit1051->SetLineWidth(2);
   quadLineFit1051->SetChisquare(4.263289);
   quadLineFit1051->SetNDF(2);
   quadLineFit1051->GetXaxis()->SetLabelFont(42);
   quadLineFit1051->GetXaxis()->SetTitleOffset(1);
   quadLineFit1051->GetXaxis()->SetTitleFont(42);
   quadLineFit1051->GetYaxis()->SetLabelFont(42);
   quadLineFit1051->GetYaxis()->SetTitleFont(42);
   quadLineFit1051->SetParameter(0,-3.205705);
   quadLineFit1051->SetParError(0,0.05062242);
   quadLineFit1051->SetParLimits(0,0,0);
   quadLineFit1051->SetParameter(1,0.09523903);
   quadLineFit1051->SetParError(1,0.002952359);
   quadLineFit1051->SetParLimits(1,0,0);
   quadLineFit1051->Draw("same");
   
   Double_t -10.000000 ppm_fx1051[4] = {
   14,
   16,
   18,
   20};
   Double_t -10.000000 ppm_fy1051[4] = {
   -0.1677175,
   -0.1788113,
   -0.1109896,
   -0.1367094};
   Double_t -10.000000 ppm_fex1051[4] = {
   0,
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1051[4] = {
   0.01320349,
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(4,-10.000000 ppm_fx1051,-10.000000 ppm_fy1051,-10.000000 ppm_fex1051,-10.000000 ppm_fey1051);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   
   TH1F *Graph_mI10dO000000sPppm1051 = new TH1F("Graph_mI10dO000000sPppm1051","Graph",100,13.4,20.6);
   Graph_mI10dO000000sPppm1051->SetMinimum(-0.2014377);
   Graph_mI10dO000000sPppm1051->SetMaximum(-0.08836326);
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
   
   
   TF1 *quadLineFit1052 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1052->SetFillColor(19);
   quadLineFit1052->SetFillStyle(0);
   quadLineFit1052->SetLineColor(2);
   quadLineFit1052->SetLineWidth(2);
   quadLineFit1052->SetChisquare(8.836886);
   quadLineFit1052->SetNDF(2);
   quadLineFit1052->GetXaxis()->SetLabelFont(42);
   quadLineFit1052->GetXaxis()->SetTitleOffset(1);
   quadLineFit1052->GetXaxis()->SetTitleFont(42);
   quadLineFit1052->GetYaxis()->SetLabelFont(42);
   quadLineFit1052->GetYaxis()->SetTitleFont(42);
   quadLineFit1052->SetParameter(0,-0.285276);
   quadLineFit1052->SetParError(0,0.05062289);
   quadLineFit1052->SetParLimits(0,0,0);
   quadLineFit1052->SetParameter(1,0.008042296);
   quadLineFit1052->SetParError(1,0.002952387);
   quadLineFit1052->SetParLimits(1,0,0);
   quadLineFit1052->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1052);
   gre->Draw("p ");
   
   TF1 *quadLineFit1053 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1053->SetFillColor(19);
   quadLineFit1053->SetFillStyle(0);
   quadLineFit1053->SetLineColor(2);
   quadLineFit1053->SetLineWidth(2);
   quadLineFit1053->SetChisquare(8.836886);
   quadLineFit1053->SetNDF(2);
   quadLineFit1053->GetXaxis()->SetLabelFont(42);
   quadLineFit1053->GetXaxis()->SetTitleOffset(1);
   quadLineFit1053->GetXaxis()->SetTitleFont(42);
   quadLineFit1053->GetYaxis()->SetLabelFont(42);
   quadLineFit1053->GetYaxis()->SetTitleFont(42);
   quadLineFit1053->SetParameter(0,-0.285276);
   quadLineFit1053->SetParError(0,0.05062289);
   quadLineFit1053->SetParLimits(0,0,0);
   quadLineFit1053->SetParameter(1,0.008042296);
   quadLineFit1053->SetParError(1,0.002952387);
   quadLineFit1053->SetParLimits(1,0,0);
   quadLineFit1053->Draw("same");
   
   Double_t 10.000000 ppm_fx1053[4] = {
   14,
   16,
   18,
   20};
   Double_t 10.000000 ppm_fy1053[4] = {
   1.532445,
   1.366886,
   1.204196,
   1.091866};
   Double_t 10.000000 ppm_fex1053[4] = {
   0,
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1053[4] = {
   0.01320349,
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(4,10.000000 ppm_fx1053,10.000000 ppm_fy1053,10.000000 ppm_fex1053,10.000000 ppm_fey1053);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   
   TH1F *Graph_10dO000000sPppm1053 = new TH1F("Graph_10dO000000sPppm1053","Graph",100,13.4,20.6);
   Graph_10dO000000sPppm1053->SetMinimum(1.031964);
   Graph_10dO000000sPppm1053->SetMaximum(1.592347);
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
   
   
   TF1 *quadLineFit1054 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1054->SetFillColor(19);
   quadLineFit1054->SetFillStyle(0);
   quadLineFit1054->SetLineColor(3);
   quadLineFit1054->SetLineWidth(2);
   quadLineFit1054->SetChisquare(4.709935);
   quadLineFit1054->SetNDF(2);
   quadLineFit1054->GetXaxis()->SetLabelFont(42);
   quadLineFit1054->GetXaxis()->SetTitleOffset(1);
   quadLineFit1054->GetXaxis()->SetTitleFont(42);
   quadLineFit1054->GetYaxis()->SetLabelFont(42);
   quadLineFit1054->GetYaxis()->SetTitleFont(42);
   quadLineFit1054->SetParameter(0,2.560612);
   quadLineFit1054->SetParError(0,0.05062295);
   quadLineFit1054->SetParLimits(0,0,0);
   quadLineFit1054->SetParameter(1,-0.07422138);
   quadLineFit1054->SetParError(1,0.00295239);
   quadLineFit1054->SetParLimits(1,0,0);
   quadLineFit1054->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1054);
   gre->Draw("p ");
   
   TF1 *quadLineFit1055 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1055->SetFillColor(19);
   quadLineFit1055->SetFillStyle(0);
   quadLineFit1055->SetLineColor(3);
   quadLineFit1055->SetLineWidth(2);
   quadLineFit1055->SetChisquare(4.709935);
   quadLineFit1055->SetNDF(2);
   quadLineFit1055->GetXaxis()->SetLabelFont(42);
   quadLineFit1055->GetXaxis()->SetTitleOffset(1);
   quadLineFit1055->GetXaxis()->SetTitleFont(42);
   quadLineFit1055->GetYaxis()->SetLabelFont(42);
   quadLineFit1055->GetYaxis()->SetTitleFont(42);
   quadLineFit1055->SetParameter(0,2.560612);
   quadLineFit1055->SetParError(0,0.05062295);
   quadLineFit1055->SetParLimits(0,0,0);
   quadLineFit1055->SetParameter(1,-0.07422138);
   quadLineFit1055->SetParError(1,0.00295239);
   quadLineFit1055->SetParLimits(1,0,0);
   quadLineFit1055->Draw("same");
   
   Double_t 30.000000 ppm_fx1055[4] = {
   14,
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1055[4] = {
   3.258514,
   2.865899,
   2.537309,
   2.302277};
   Double_t 30.000000 ppm_fex1055[4] = {
   0,
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1055[4] = {
   0.01320349,
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(4,30.000000 ppm_fx1055,30.000000 ppm_fy1055,30.000000 ppm_fex1055,30.000000 ppm_fey1055);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   
   TH1F *Graph_30dO000000sPppm1055 = new TH1F("Graph_30dO000000sPppm1055","Graph",100,13.4,20.6);
   Graph_30dO000000sPppm1055->SetMinimum(2.190809);
   Graph_30dO000000sPppm1055->SetMaximum(3.369982);
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
   
   
   TF1 *quadLineFit1056 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1056->SetFillColor(19);
   quadLineFit1056->SetFillStyle(0);
   quadLineFit1056->SetLineColor(4);
   quadLineFit1056->SetLineWidth(2);
   quadLineFit1056->SetChisquare(35.86065);
   quadLineFit1056->SetNDF(2);
   quadLineFit1056->GetXaxis()->SetLabelFont(42);
   quadLineFit1056->GetXaxis()->SetTitleOffset(1);
   quadLineFit1056->GetXaxis()->SetTitleFont(42);
   quadLineFit1056->GetYaxis()->SetLabelFont(42);
   quadLineFit1056->GetYaxis()->SetTitleFont(42);
   quadLineFit1056->SetParameter(0,5.458704);
   quadLineFit1056->SetParError(0,0.05062304);
   quadLineFit1056->SetParLimits(0,0,0);
   quadLineFit1056->SetParameter(1,-0.159865);
   quadLineFit1056->SetParError(1,0.002952396);
   quadLineFit1056->SetParLimits(1,0,0);
   quadLineFit1056->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1056);
   gre->Draw("p ");
   
   TF1 *quadLineFit1057 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1057->SetFillColor(19);
   quadLineFit1057->SetFillStyle(0);
   quadLineFit1057->SetLineColor(4);
   quadLineFit1057->SetLineWidth(2);
   quadLineFit1057->SetChisquare(35.86065);
   quadLineFit1057->SetNDF(2);
   quadLineFit1057->GetXaxis()->SetLabelFont(42);
   quadLineFit1057->GetXaxis()->SetTitleOffset(1);
   quadLineFit1057->GetXaxis()->SetTitleFont(42);
   quadLineFit1057->GetYaxis()->SetLabelFont(42);
   quadLineFit1057->GetYaxis()->SetTitleFont(42);
   quadLineFit1057->SetParameter(0,5.458704);
   quadLineFit1057->SetParError(0,0.05062304);
   quadLineFit1057->SetParLimits(0,0,0);
   quadLineFit1057->SetParameter(1,-0.159865);
   quadLineFit1057->SetParError(1,0.002952396);
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
