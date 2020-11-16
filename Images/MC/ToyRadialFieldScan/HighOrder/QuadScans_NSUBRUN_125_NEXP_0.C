void QuadScans_NSUBRUN_125_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 12 08:03:54 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(12.37143,-3.25,22.65714,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1049[4] = {
   14,
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1049[4] = {
   -3.599525,
   -3.165801,
   -2.809882,
   -2.541879};
   Double_t -50.000000 ppm_fex1049[4] = {
   0,
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1049[4] = {
   0.01320349,
   0.01320349,
   0.01320349,
   0.01320349};
   TGraphErrors *gre = new TGraphErrors(4,-50.000000 ppm_fx1049,-50.000000 ppm_fy1049,-50.000000 ppm_fex1049,-50.000000 ppm_fey1049);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1049 = new TH1F("Graph_mI50dO000000sPppm1049","",100,13.4,20.6);
   Graph_mI50dO000000sPppm1049->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1049->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1049->SetDirectory(0);
   Graph_mI50dO000000sPppm1049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1049->SetLineColor(ci);
   Graph_mI50dO000000sPppm1049->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1049->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1049->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1049->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1049->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1049->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1049->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1049->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1049->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1049->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1049->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1049->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1049->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1049->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1049->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1049);
   
   
   TF1 *quadLineFit1050 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1050->SetFillColor(19);
   quadLineFit1050->SetFillStyle(0);
   quadLineFit1050->SetLineWidth(2);
   quadLineFit1050->SetChisquare(39.41277);
   quadLineFit1050->SetNDF(2);
   quadLineFit1050->GetXaxis()->SetLabelFont(42);
   quadLineFit1050->GetXaxis()->SetTitleOffset(1);
   quadLineFit1050->GetXaxis()->SetTitleFont(42);
   quadLineFit1050->GetYaxis()->SetLabelFont(42);
   quadLineFit1050->GetYaxis()->SetTitleFont(42);
   quadLineFit1050->SetParameter(0,-6.028802);
   quadLineFit1050->SetParError(0,0.05062408);
   quadLineFit1050->SetParLimits(0,0,0);
   quadLineFit1050->SetParameter(1,0.1764429);
   quadLineFit1050->SetParError(1,0.002952457);
   quadLineFit1050->SetParLimits(1,0,0);
   quadLineFit1050->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1050);
   gre->Draw("ap");
   
   TF1 *quadLineFit1051 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1051->SetFillColor(19);
   quadLineFit1051->SetFillStyle(0);
   quadLineFit1051->SetLineWidth(2);
   quadLineFit1051->SetChisquare(39.41277);
   quadLineFit1051->SetNDF(2);
   quadLineFit1051->GetXaxis()->SetLabelFont(42);
   quadLineFit1051->GetXaxis()->SetTitleOffset(1);
   quadLineFit1051->GetXaxis()->SetTitleFont(42);
   quadLineFit1051->GetYaxis()->SetLabelFont(42);
   quadLineFit1051->GetYaxis()->SetTitleFont(42);
   quadLineFit1051->SetParameter(0,-6.028802);
   quadLineFit1051->SetParError(0,0.05062408);
   quadLineFit1051->SetParLimits(0,0,0);
   quadLineFit1051->SetParameter(1,0.1764429);
   quadLineFit1051->SetParError(1,0.002952457);
   quadLineFit1051->SetParLimits(1,0,0);
   quadLineFit1051->Draw("same");
   
   Double_t -30.000000 ppm_fx1051[4] = {
   14,
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1051[4] = {
   -1.883613,
   -1.630926,
   -1.471267,
   -1.318343};
   Double_t -30.000000 ppm_fex1051[4] = {
   0,
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1051[4] = {
   0.01320349,
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(4,-30.000000 ppm_fx1051,-30.000000 ppm_fy1051,-30.000000 ppm_fex1051,-30.000000 ppm_fey1051);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   
   TH1F *Graph_mI30dO000000sPppm1051 = new TH1F("Graph_mI30dO000000sPppm1051","Graph",100,13.4,20.6);
   Graph_mI30dO000000sPppm1051->SetMinimum(-1.955984);
   Graph_mI30dO000000sPppm1051->SetMaximum(-1.245972);
   Graph_mI30dO000000sPppm1051->SetDirectory(0);
   Graph_mI30dO000000sPppm1051->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1051->SetLineColor(ci);
   Graph_mI30dO000000sPppm1051->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1051->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1051->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1051->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1051->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1051->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1051->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1051);
   
   
   TF1 *quadLineFit1052 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1052->SetFillColor(19);
   quadLineFit1052->SetFillStyle(0);
   quadLineFit1052->SetLineColor(2);
   quadLineFit1052->SetLineWidth(2);
   quadLineFit1052->SetChisquare(16.40844);
   quadLineFit1052->SetNDF(2);
   quadLineFit1052->GetXaxis()->SetLabelFont(42);
   quadLineFit1052->GetXaxis()->SetTitleOffset(1);
   quadLineFit1052->GetXaxis()->SetTitleFont(42);
   quadLineFit1052->GetYaxis()->SetLabelFont(42);
   quadLineFit1052->GetYaxis()->SetTitleFont(42);
   quadLineFit1052->SetParameter(0,-3.153186);
   quadLineFit1052->SetParError(0,0.05062299);
   quadLineFit1052->SetParLimits(0,0,0);
   quadLineFit1052->SetParameter(1,0.09277347);
   quadLineFit1052->SetParError(1,0.002952393);
   quadLineFit1052->SetParLimits(1,0,0);
   quadLineFit1052->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1052);
   gre->Draw("p ");
   
   TF1 *quadLineFit1053 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1053->SetFillColor(19);
   quadLineFit1053->SetFillStyle(0);
   quadLineFit1053->SetLineColor(2);
   quadLineFit1053->SetLineWidth(2);
   quadLineFit1053->SetChisquare(16.40844);
   quadLineFit1053->SetNDF(2);
   quadLineFit1053->GetXaxis()->SetLabelFont(42);
   quadLineFit1053->GetXaxis()->SetTitleOffset(1);
   quadLineFit1053->GetXaxis()->SetTitleFont(42);
   quadLineFit1053->GetYaxis()->SetLabelFont(42);
   quadLineFit1053->GetYaxis()->SetTitleFont(42);
   quadLineFit1053->SetParameter(0,-3.153186);
   quadLineFit1053->SetParError(0,0.05062299);
   quadLineFit1053->SetParLimits(0,0,0);
   quadLineFit1053->SetParameter(1,0.09277347);
   quadLineFit1053->SetParError(1,0.002952393);
   quadLineFit1053->SetParLimits(1,0,0);
   quadLineFit1053->Draw("same");
   
   Double_t -10.000000 ppm_fx1053[4] = {
   14,
   16,
   18,
   20};
   Double_t -10.000000 ppm_fy1053[4] = {
   -0.1751739,
   -0.1486231,
   -0.123292,
   -0.1083161};
   Double_t -10.000000 ppm_fex1053[4] = {
   0,
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1053[4] = {
   0.01320349,
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(4,-10.000000 ppm_fx1053,-10.000000 ppm_fy1053,-10.000000 ppm_fex1053,-10.000000 ppm_fey1053);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   
   TH1F *Graph_mI10dO000000sPppm1053 = new TH1F("Graph_mI10dO000000sPppm1053","Graph",100,13.4,20.6);
   Graph_mI10dO000000sPppm1053->SetMinimum(-0.1977039);
   Graph_mI10dO000000sPppm1053->SetMaximum(-0.08578616);
   Graph_mI10dO000000sPppm1053->SetDirectory(0);
   Graph_mI10dO000000sPppm1053->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1053->SetLineColor(ci);
   Graph_mI10dO000000sPppm1053->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1053->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1053->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1053->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1053->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1053->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1053->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1053);
   
   
   TF1 *quadLineFit1054 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1054->SetFillColor(19);
   quadLineFit1054->SetFillStyle(0);
   quadLineFit1054->SetLineColor(3);
   quadLineFit1054->SetLineWidth(2);
   quadLineFit1054->SetChisquare(0.216071);
   quadLineFit1054->SetNDF(2);
   quadLineFit1054->GetXaxis()->SetLabelFont(42);
   quadLineFit1054->GetXaxis()->SetTitleOffset(1);
   quadLineFit1054->GetXaxis()->SetTitleFont(42);
   quadLineFit1054->GetYaxis()->SetLabelFont(42);
   quadLineFit1054->GetYaxis()->SetTitleFont(42);
   quadLineFit1054->SetParameter(0,-0.3308702);
   quadLineFit1054->SetParError(0,0.05062305);
   quadLineFit1054->SetParLimits(0,0,0);
   quadLineFit1054->SetParameter(1,0.01129523);
   quadLineFit1054->SetParError(1,0.002952396);
   quadLineFit1054->SetParLimits(1,0,0);
   quadLineFit1054->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1054);
   gre->Draw("p ");
   
   TF1 *quadLineFit1055 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1055->SetFillColor(19);
   quadLineFit1055->SetFillStyle(0);
   quadLineFit1055->SetLineColor(3);
   quadLineFit1055->SetLineWidth(2);
   quadLineFit1055->SetChisquare(0.216071);
   quadLineFit1055->SetNDF(2);
   quadLineFit1055->GetXaxis()->SetLabelFont(42);
   quadLineFit1055->GetXaxis()->SetTitleOffset(1);
   quadLineFit1055->GetXaxis()->SetTitleFont(42);
   quadLineFit1055->GetYaxis()->SetLabelFont(42);
   quadLineFit1055->GetYaxis()->SetTitleFont(42);
   quadLineFit1055->SetParameter(0,-0.3308702);
   quadLineFit1055->SetParError(0,0.05062305);
   quadLineFit1055->SetParLimits(0,0,0);
   quadLineFit1055->SetParameter(1,0.01129523);
   quadLineFit1055->SetParError(1,0.002952396);
   quadLineFit1055->SetParLimits(1,0,0);
   quadLineFit1055->Draw("same");
   
   Double_t 10.000000 ppm_fx1055[4] = {
   14,
   16,
   18,
   20};
   Double_t 10.000000 ppm_fy1055[4] = {
   1.543505,
   1.348564,
   1.192173,
   1.08751};
   Double_t 10.000000 ppm_fex1055[4] = {
   0,
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1055[4] = {
   0.01320349,
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(4,10.000000 ppm_fx1055,10.000000 ppm_fy1055,10.000000 ppm_fex1055,10.000000 ppm_fey1055);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   
   TH1F *Graph_10dO000000sPppm1055 = new TH1F("Graph_10dO000000sPppm1055","Graph",100,13.4,20.6);
   Graph_10dO000000sPppm1055->SetMinimum(1.026067);
   Graph_10dO000000sPppm1055->SetMaximum(1.604949);
   Graph_10dO000000sPppm1055->SetDirectory(0);
   Graph_10dO000000sPppm1055->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1055->SetLineColor(ci);
   Graph_10dO000000sPppm1055->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1055->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1055->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1055->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1055->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1055->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1055->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1055);
   
   
   TF1 *quadLineFit1056 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1056->SetFillColor(19);
   quadLineFit1056->SetFillStyle(0);
   quadLineFit1056->SetLineColor(4);
   quadLineFit1056->SetLineWidth(2);
   quadLineFit1056->SetChisquare(11.7375);
   quadLineFit1056->SetNDF(2);
   quadLineFit1056->GetXaxis()->SetLabelFont(42);
   quadLineFit1056->GetXaxis()->SetTitleOffset(1);
   quadLineFit1056->GetXaxis()->SetTitleFont(42);
   quadLineFit1056->GetYaxis()->SetLabelFont(42);
   quadLineFit1056->GetYaxis()->SetTitleFont(42);
   quadLineFit1056->SetParameter(0,2.588656);
   quadLineFit1056->SetParError(0,0.05062361);
   quadLineFit1056->SetParLimits(0,0,0);
   quadLineFit1056->SetParameter(1,-0.07621869);
   quadLineFit1056->SetParError(1,0.002952429);
   quadLineFit1056->SetParLimits(1,0,0);
   quadLineFit1056->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1056);
   gre->Draw("p ");
   
   TF1 *quadLineFit1057 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1057->SetFillColor(19);
   quadLineFit1057->SetFillStyle(0);
   quadLineFit1057->SetLineColor(4);
   quadLineFit1057->SetLineWidth(2);
   quadLineFit1057->SetChisquare(11.7375);
   quadLineFit1057->SetNDF(2);
   quadLineFit1057->GetXaxis()->SetLabelFont(42);
   quadLineFit1057->GetXaxis()->SetTitleOffset(1);
   quadLineFit1057->GetXaxis()->SetTitleFont(42);
   quadLineFit1057->GetYaxis()->SetLabelFont(42);
   quadLineFit1057->GetYaxis()->SetTitleFont(42);
   quadLineFit1057->SetParameter(0,2.588656);
   quadLineFit1057->SetParError(0,0.05062361);
   quadLineFit1057->SetParLimits(0,0,0);
   quadLineFit1057->SetParameter(1,-0.07621869);
   quadLineFit1057->SetParError(1,0.002952429);
   quadLineFit1057->SetParLimits(1,0,0);
   quadLineFit1057->Draw("same");
   
   Double_t 30.000000 ppm_fx1057[4] = {
   14,
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1057[4] = {
   3.290217,
   2.838389,
   2.522944,
   2.277762};
   Double_t 30.000000 ppm_fex1057[4] = {
   0,
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1057[4] = {
   0.01320349,
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(4,30.000000 ppm_fx1057,30.000000 ppm_fy1057,30.000000 ppm_fex1057,30.000000 ppm_fey1057);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   
   TH1F *Graph_30dO000000sPppm1057 = new TH1F("Graph_30dO000000sPppm1057","Graph",100,13.4,20.6);
   Graph_30dO000000sPppm1057->SetMinimum(2.160672);
   Graph_30dO000000sPppm1057->SetMaximum(3.407307);
   Graph_30dO000000sPppm1057->SetDirectory(0);
   Graph_30dO000000sPppm1057->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1057->SetLineColor(ci);
   Graph_30dO000000sPppm1057->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1057->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1057->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1057->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1057->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1057->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1057->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1057);
   
   
   TF1 *quadLineFit1058 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1058->SetFillColor(19);
   quadLineFit1058->SetFillStyle(0);
   quadLineFit1058->SetLineColor(5);
   quadLineFit1058->SetLineWidth(2);
   quadLineFit1058->SetChisquare(62.49157);
   quadLineFit1058->SetNDF(2);
   quadLineFit1058->GetXaxis()->SetLabelFont(42);
   quadLineFit1058->GetXaxis()->SetTitleOffset(1);
   quadLineFit1058->GetXaxis()->SetTitleFont(42);
   quadLineFit1058->GetYaxis()->SetLabelFont(42);
   quadLineFit1058->GetYaxis()->SetTitleFont(42);
   quadLineFit1058->SetParameter(0,5.582218);
   quadLineFit1058->SetParError(0,0.05062303);
   quadLineFit1058->SetParLimits(0,0,0);
   quadLineFit1058->SetParameter(1,-0.1676406);
   quadLineFit1058->SetParError(1,0.002952395);
   quadLineFit1058->SetParLimits(1,0,0);
   quadLineFit1058->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1058);
   gre->Draw("p ");
   
   TF1 *quadLineFit1059 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1059->SetFillColor(19);
   quadLineFit1059->SetFillStyle(0);
   quadLineFit1059->SetLineColor(5);
   quadLineFit1059->SetLineWidth(2);
   quadLineFit1059->SetChisquare(62.49157);
   quadLineFit1059->SetNDF(2);
   quadLineFit1059->GetXaxis()->SetLabelFont(42);
   quadLineFit1059->GetXaxis()->SetTitleOffset(1);
   quadLineFit1059->GetXaxis()->SetTitleFont(42);
   quadLineFit1059->GetYaxis()->SetLabelFont(42);
   quadLineFit1059->GetYaxis()->SetTitleFont(42);
   quadLineFit1059->SetParameter(0,5.582218);
   quadLineFit1059->SetParError(0,0.05062303);
   quadLineFit1059->SetParLimits(0,0,0);
   quadLineFit1059->SetParameter(1,-0.1676406);
   quadLineFit1059->SetParError(1,0.002952395);
   quadLineFit1059->SetParLimits(1,0,0);
   quadLineFit1059->Draw("same");
   
   Double_t 50.000000 ppm_fx1059[4] = {
   14,
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1059[4] = {
   4.994304,
   4.370043,
   3.895981,
   3.494694};
   Double_t 50.000000 ppm_fex1059[4] = {
   0,
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1059[4] = {
   0.01320349,
   0.01320349,
   0.01320349,
   0.01320349};
   gre = new TGraphErrors(4,50.000000 ppm_fx1059,50.000000 ppm_fy1059,50.000000 ppm_fex1059,50.000000 ppm_fey1059);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   
   TH1F *Graph_50dO000000sPppm1059 = new TH1F("Graph_50dO000000sPppm1059","Graph",100,13.4,20.6);
   Graph_50dO000000sPppm1059->SetMinimum(3.328889);
   Graph_50dO000000sPppm1059->SetMaximum(5.160109);
   Graph_50dO000000sPppm1059->SetDirectory(0);
   Graph_50dO000000sPppm1059->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1059->SetLineColor(ci);
   Graph_50dO000000sPppm1059->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1059->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1059->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1059->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1059->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1059->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1059->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1059);
   
   
   TF1 *quadLineFit1060 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1060->SetFillColor(19);
   quadLineFit1060->SetFillStyle(0);
   quadLineFit1060->SetLineColor(6);
   quadLineFit1060->SetLineWidth(2);
   quadLineFit1060->SetChisquare(73.01603);
   quadLineFit1060->SetNDF(2);
   quadLineFit1060->GetXaxis()->SetLabelFont(42);
   quadLineFit1060->GetXaxis()->SetTitleOffset(1);
   quadLineFit1060->GetXaxis()->SetTitleFont(42);
   quadLineFit1060->GetYaxis()->SetLabelFont(42);
   quadLineFit1060->GetYaxis()->SetTitleFont(42);
   quadLineFit1060->SetParameter(0,8.415714);
   quadLineFit1060->SetParError(0,0.05062287);
   quadLineFit1060->SetParLimits(0,0,0);
   quadLineFit1060->SetParameter(1,-0.2486446);
   quadLineFit1060->SetParError(1,0.002952386);
   quadLineFit1060->SetParLimits(1,0,0);
   quadLineFit1060->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1060);
   gre->Draw("p ");
   
   TF1 *quadLineFit1061 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1061->SetFillColor(19);
   quadLineFit1061->SetFillStyle(0);
   quadLineFit1061->SetLineColor(6);
   quadLineFit1061->SetLineWidth(2);
   quadLineFit1061->SetChisquare(73.01603);
   quadLineFit1061->SetNDF(2);
   quadLineFit1061->GetXaxis()->SetLabelFont(42);
   quadLineFit1061->GetXaxis()->SetTitleOffset(1);
   quadLineFit1061->GetXaxis()->SetTitleFont(42);
   quadLineFit1061->GetYaxis()->SetLabelFont(42);
   quadLineFit1061->GetYaxis()->SetTitleFont(42);
   quadLineFit1061->SetParameter(0,8.415714);
   quadLineFit1061->SetParError(0,0.05062287);
   quadLineFit1061->SetParLimits(0,0,0);
   quadLineFit1061->SetParameter(1,-0.2486446);
   quadLineFit1061->SetParError(1,0.002952386);
   quadLineFit1061->SetParLimits(1,0,0);
   quadLineFit1061->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","App. #LTB_{r}#GT","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("50.000000 ppm","   50 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("30.000000 ppm","   30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("10.000000 ppm","   10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-10.000000 ppm","  #minus10 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("-30.000000 ppm","  #minus30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
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
