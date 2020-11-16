void QuadScans_NSUBRUN_50_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 12 08:03:51 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(12.37143,-3.25,22.65714,4.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t -50.000000 ppm_fx1013[4] = {
   14,
   16,
   18,
   20};
   Double_t -50.000000 ppm_fy1013[4] = {
   -3.636521,
   -3.164993,
   -2.791911,
   -2.573163};
   Double_t -50.000000 ppm_fex1013[4] = {
   0,
   0,
   0,
   0};
   Double_t -50.000000 ppm_fey1013[4] = {
   0.02074029,
   0.02074029,
   0.02074029,
   0.02074029};
   TGraphErrors *gre = new TGraphErrors(4,-50.000000 ppm_fx1013,-50.000000 ppm_fy1013,-50.000000 ppm_fex1013,-50.000000 ppm_fey1013);
   gre->SetName("-50.000000 ppm");
   gre->SetTitle(";QHV [kV];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_mI50dO000000sPppm1013 = new TH1F("Graph_mI50dO000000sPppm1013","",100,13.4,20.6);
   Graph_mI50dO000000sPppm1013->SetMinimum(-2.5);
   Graph_mI50dO000000sPppm1013->SetMaximum(3.5);
   Graph_mI50dO000000sPppm1013->SetDirectory(0);
   Graph_mI50dO000000sPppm1013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_mI50dO000000sPppm1013->SetLineColor(ci);
   Graph_mI50dO000000sPppm1013->GetXaxis()->SetTitle("QHV [kV]");
   Graph_mI50dO000000sPppm1013->GetXaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1013->GetXaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1013->GetXaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1013->GetXaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1013->GetXaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1013->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_mI50dO000000sPppm1013->GetYaxis()->CenterTitle(true);
   Graph_mI50dO000000sPppm1013->GetYaxis()->SetNdivisions(4000510);
   Graph_mI50dO000000sPppm1013->GetYaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1013->GetYaxis()->SetTitleSize(0.04);
   Graph_mI50dO000000sPppm1013->GetYaxis()->SetTitleOffset(1.1);
   Graph_mI50dO000000sPppm1013->GetYaxis()->SetTitleFont(42);
   Graph_mI50dO000000sPppm1013->GetZaxis()->SetLabelFont(42);
   Graph_mI50dO000000sPppm1013->GetZaxis()->SetTitleOffset(1);
   Graph_mI50dO000000sPppm1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-50.000000 ppm1013);
   
   
   TF1 *quadLineFit1014 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1014->SetFillColor(19);
   quadLineFit1014->SetFillStyle(0);
   quadLineFit1014->SetLineWidth(2);
   quadLineFit1014->SetChisquare(37.49932);
   quadLineFit1014->SetNDF(2);
   quadLineFit1014->GetXaxis()->SetLabelFont(42);
   quadLineFit1014->GetXaxis()->SetTitleOffset(1);
   quadLineFit1014->GetXaxis()->SetTitleFont(42);
   quadLineFit1014->GetYaxis()->SetLabelFont(42);
   quadLineFit1014->GetYaxis()->SetTitleFont(42);
   quadLineFit1014->SetParameter(0,-6.07033);
   quadLineFit1014->SetParError(0,0.07951871);
   quadLineFit1014->SetParLimits(0,0,0);
   quadLineFit1014->SetParameter(1,0.1781578);
   quadLineFit1014->SetParError(1,0.004637625);
   quadLineFit1014->SetParLimits(1,0,0);
   quadLineFit1014->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1014);
   gre->Draw("ap");
   
   TF1 *quadLineFit1015 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1015->SetFillColor(19);
   quadLineFit1015->SetFillStyle(0);
   quadLineFit1015->SetLineWidth(2);
   quadLineFit1015->SetChisquare(37.49932);
   quadLineFit1015->SetNDF(2);
   quadLineFit1015->GetXaxis()->SetLabelFont(42);
   quadLineFit1015->GetXaxis()->SetTitleOffset(1);
   quadLineFit1015->GetXaxis()->SetTitleFont(42);
   quadLineFit1015->GetYaxis()->SetLabelFont(42);
   quadLineFit1015->GetYaxis()->SetTitleFont(42);
   quadLineFit1015->SetParameter(0,-6.07033);
   quadLineFit1015->SetParError(0,0.07951871);
   quadLineFit1015->SetParLimits(0,0,0);
   quadLineFit1015->SetParameter(1,0.1781578);
   quadLineFit1015->SetParError(1,0.004637625);
   quadLineFit1015->SetParLimits(1,0,0);
   quadLineFit1015->Draw("same");
   
   Double_t -30.000000 ppm_fx1015[4] = {
   14,
   16,
   18,
   20};
   Double_t -30.000000 ppm_fy1015[4] = {
   -1.926725,
   -1.651582,
   -1.458455,
   -1.302653};
   Double_t -30.000000 ppm_fex1015[4] = {
   0,
   0,
   0,
   0};
   Double_t -30.000000 ppm_fey1015[4] = {
   0.02074029,
   0.02074029,
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(4,-30.000000 ppm_fx1015,-30.000000 ppm_fy1015,-30.000000 ppm_fex1015,-30.000000 ppm_fey1015);
   gre->SetName("-30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   
   TH1F *Graph_mI30dO000000sPppm1015 = new TH1F("Graph_mI30dO000000sPppm1015","Graph",100,13.4,20.6);
   Graph_mI30dO000000sPppm1015->SetMinimum(-2.01402);
   Graph_mI30dO000000sPppm1015->SetMaximum(-1.215358);
   Graph_mI30dO000000sPppm1015->SetDirectory(0);
   Graph_mI30dO000000sPppm1015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI30dO000000sPppm1015->SetLineColor(ci);
   Graph_mI30dO000000sPppm1015->GetXaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1015->GetXaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1015->GetXaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1015->GetYaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1015->GetYaxis()->SetTitleFont(42);
   Graph_mI30dO000000sPppm1015->GetZaxis()->SetLabelFont(42);
   Graph_mI30dO000000sPppm1015->GetZaxis()->SetTitleOffset(1);
   Graph_mI30dO000000sPppm1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-30.000000 ppm1015);
   
   
   TF1 *quadLineFit1016 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1016->SetFillColor(19);
   quadLineFit1016->SetFillStyle(0);
   quadLineFit1016->SetLineColor(2);
   quadLineFit1016->SetLineWidth(2);
   quadLineFit1016->SetChisquare(8.509598);
   quadLineFit1016->SetNDF(2);
   quadLineFit1016->GetXaxis()->SetLabelFont(42);
   quadLineFit1016->GetXaxis()->SetTitleOffset(1);
   quadLineFit1016->GetXaxis()->SetTitleFont(42);
   quadLineFit1016->GetYaxis()->SetLabelFont(42);
   quadLineFit1016->GetYaxis()->SetTitleFont(42);
   quadLineFit1016->SetParameter(0,-3.340394);
   quadLineFit1016->SetParError(0,0.07952024);
   quadLineFit1016->SetParLimits(0,0,0);
   quadLineFit1016->SetParameter(1,0.1032671);
   quadLineFit1016->SetParError(1,0.004637715);
   quadLineFit1016->SetParLimits(1,0,0);
   quadLineFit1016->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1016);
   gre->Draw("p ");
   
   TF1 *quadLineFit1017 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1017->SetFillColor(19);
   quadLineFit1017->SetFillStyle(0);
   quadLineFit1017->SetLineColor(2);
   quadLineFit1017->SetLineWidth(2);
   quadLineFit1017->SetChisquare(8.509598);
   quadLineFit1017->SetNDF(2);
   quadLineFit1017->GetXaxis()->SetLabelFont(42);
   quadLineFit1017->GetXaxis()->SetTitleOffset(1);
   quadLineFit1017->GetXaxis()->SetTitleFont(42);
   quadLineFit1017->GetYaxis()->SetLabelFont(42);
   quadLineFit1017->GetYaxis()->SetTitleFont(42);
   quadLineFit1017->SetParameter(0,-3.340394);
   quadLineFit1017->SetParError(0,0.07952024);
   quadLineFit1017->SetParLimits(0,0,0);
   quadLineFit1017->SetParameter(1,0.1032671);
   quadLineFit1017->SetParError(1,0.004637715);
   quadLineFit1017->SetParLimits(1,0,0);
   quadLineFit1017->Draw("same");
   
   Double_t -10.000000 ppm_fx1017[4] = {
   14,
   16,
   18,
   20};
   Double_t -10.000000 ppm_fy1017[4] = {
   -0.1703335,
   -0.1492209,
   -0.09996522,
   -0.09577459};
   Double_t -10.000000 ppm_fex1017[4] = {
   0,
   0,
   0,
   0};
   Double_t -10.000000 ppm_fey1017[4] = {
   0.02074029,
   0.02074029,
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(4,-10.000000 ppm_fx1017,-10.000000 ppm_fy1017,-10.000000 ppm_fex1017,-10.000000 ppm_fey1017);
   gre->SetName("-10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   
   TH1F *Graph_mI10dO000000sPppm1017 = new TH1F("Graph_mI10dO000000sPppm1017","Graph",100,13.4,20.6);
   Graph_mI10dO000000sPppm1017->SetMinimum(-0.2026777);
   Graph_mI10dO000000sPppm1017->SetMaximum(-0.06343035);
   Graph_mI10dO000000sPppm1017->SetDirectory(0);
   Graph_mI10dO000000sPppm1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_mI10dO000000sPppm1017->SetLineColor(ci);
   Graph_mI10dO000000sPppm1017->GetXaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1017->GetXaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1017->GetXaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1017->GetYaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1017->GetYaxis()->SetTitleFont(42);
   Graph_mI10dO000000sPppm1017->GetZaxis()->SetLabelFont(42);
   Graph_mI10dO000000sPppm1017->GetZaxis()->SetTitleOffset(1);
   Graph_mI10dO000000sPppm1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_-10.000000 ppm1017);
   
   
   TF1 *quadLineFit1018 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1018->SetFillColor(19);
   quadLineFit1018->SetFillStyle(0);
   quadLineFit1018->SetLineColor(3);
   quadLineFit1018->SetLineWidth(2);
   quadLineFit1018->SetChisquare(0.7893819);
   quadLineFit1018->SetNDF(2);
   quadLineFit1018->GetXaxis()->SetLabelFont(42);
   quadLineFit1018->GetXaxis()->SetTitleOffset(1);
   quadLineFit1018->GetXaxis()->SetTitleFont(42);
   quadLineFit1018->GetYaxis()->SetLabelFont(42);
   quadLineFit1018->GetYaxis()->SetTitleFont(42);
   quadLineFit1018->SetParameter(0,-0.3608161);
   quadLineFit1018->SetParError(0,0.07951942);
   quadLineFit1018->SetParLimits(0,0,0);
   quadLineFit1018->SetParameter(1,0.01364662);
   quadLineFit1018->SetParError(1,0.004637667);
   quadLineFit1018->SetParLimits(1,0,0);
   quadLineFit1018->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1018);
   gre->Draw("p ");
   
   TF1 *quadLineFit1019 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1019->SetFillColor(19);
   quadLineFit1019->SetFillStyle(0);
   quadLineFit1019->SetLineColor(3);
   quadLineFit1019->SetLineWidth(2);
   quadLineFit1019->SetChisquare(0.7893819);
   quadLineFit1019->SetNDF(2);
   quadLineFit1019->GetXaxis()->SetLabelFont(42);
   quadLineFit1019->GetXaxis()->SetTitleOffset(1);
   quadLineFit1019->GetXaxis()->SetTitleFont(42);
   quadLineFit1019->GetYaxis()->SetLabelFont(42);
   quadLineFit1019->GetYaxis()->SetTitleFont(42);
   quadLineFit1019->SetParameter(0,-0.3608161);
   quadLineFit1019->SetParError(0,0.07951942);
   quadLineFit1019->SetParLimits(0,0,0);
   quadLineFit1019->SetParameter(1,0.01364662);
   quadLineFit1019->SetParError(1,0.004637667);
   quadLineFit1019->SetParLimits(1,0,0);
   quadLineFit1019->Draw("same");
   
   Double_t 10.000000 ppm_fx1019[4] = {
   14,
   16,
   18,
   20};
   Double_t 10.000000 ppm_fy1019[4] = {
   1.558,
   1.347953,
   1.207933,
   1.079681};
   Double_t 10.000000 ppm_fex1019[4] = {
   0,
   0,
   0,
   0};
   Double_t 10.000000 ppm_fey1019[4] = {
   0.02074029,
   0.02074029,
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(4,10.000000 ppm_fx1019,10.000000 ppm_fy1019,10.000000 ppm_fex1019,10.000000 ppm_fey1019);
   gre->SetName("10.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   
   TH1F *Graph_10dO000000sPppm1019 = new TH1F("Graph_10dO000000sPppm1019","Graph",100,13.4,20.6);
   Graph_10dO000000sPppm1019->SetMinimum(1.006961);
   Graph_10dO000000sPppm1019->SetMaximum(1.630721);
   Graph_10dO000000sPppm1019->SetDirectory(0);
   Graph_10dO000000sPppm1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_10dO000000sPppm1019->SetLineColor(ci);
   Graph_10dO000000sPppm1019->GetXaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1019->GetXaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1019->GetXaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1019->GetYaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1019->GetYaxis()->SetTitleFont(42);
   Graph_10dO000000sPppm1019->GetZaxis()->SetLabelFont(42);
   Graph_10dO000000sPppm1019->GetZaxis()->SetTitleOffset(1);
   Graph_10dO000000sPppm1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_10.000000 ppm1019);
   
   
   TF1 *quadLineFit1020 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1020->SetFillColor(19);
   quadLineFit1020->SetFillStyle(0);
   quadLineFit1020->SetLineColor(4);
   quadLineFit1020->SetLineWidth(2);
   quadLineFit1020->SetChisquare(4.282922);
   quadLineFit1020->SetNDF(2);
   quadLineFit1020->GetXaxis()->SetLabelFont(42);
   quadLineFit1020->GetXaxis()->SetTitleOffset(1);
   quadLineFit1020->GetXaxis()->SetTitleFont(42);
   quadLineFit1020->GetYaxis()->SetLabelFont(42);
   quadLineFit1020->GetYaxis()->SetTitleFont(42);
   quadLineFit1020->SetParameter(0,2.637123);
   quadLineFit1020->SetParError(0,0.07951916);
   quadLineFit1020->SetParLimits(0,0,0);
   quadLineFit1020->SetParameter(1,-0.07874892);
   quadLineFit1020->SetParError(1,0.004637651);
   quadLineFit1020->SetParLimits(1,0,0);
   quadLineFit1020->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1020);
   gre->Draw("p ");
   
   TF1 *quadLineFit1021 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1021->SetFillColor(19);
   quadLineFit1021->SetFillStyle(0);
   quadLineFit1021->SetLineColor(4);
   quadLineFit1021->SetLineWidth(2);
   quadLineFit1021->SetChisquare(4.282922);
   quadLineFit1021->SetNDF(2);
   quadLineFit1021->GetXaxis()->SetLabelFont(42);
   quadLineFit1021->GetXaxis()->SetTitleOffset(1);
   quadLineFit1021->GetXaxis()->SetTitleFont(42);
   quadLineFit1021->GetYaxis()->SetLabelFont(42);
   quadLineFit1021->GetYaxis()->SetTitleFont(42);
   quadLineFit1021->SetParameter(0,2.637123);
   quadLineFit1021->SetParError(0,0.07951916);
   quadLineFit1021->SetParLimits(0,0,0);
   quadLineFit1021->SetParameter(1,-0.07874892);
   quadLineFit1021->SetParError(1,0.004637651);
   quadLineFit1021->SetParLimits(1,0,0);
   quadLineFit1021->Draw("same");
   
   Double_t 30.000000 ppm_fx1021[4] = {
   14,
   16,
   18,
   20};
   Double_t 30.000000 ppm_fy1021[4] = {
   3.29234,
   2.852756,
   2.549741,
   2.312451};
   Double_t 30.000000 ppm_fex1021[4] = {
   0,
   0,
   0,
   0};
   Double_t 30.000000 ppm_fey1021[4] = {
   0.02074029,
   0.02074029,
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(4,30.000000 ppm_fx1021,30.000000 ppm_fy1021,30.000000 ppm_fex1021,30.000000 ppm_fey1021);
   gre->SetName("30.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(5);
   
   TH1F *Graph_30dO000000sPppm1021 = new TH1F("Graph_30dO000000sPppm1021","Graph",100,13.4,20.6);
   Graph_30dO000000sPppm1021->SetMinimum(2.189574);
   Graph_30dO000000sPppm1021->SetMaximum(3.415217);
   Graph_30dO000000sPppm1021->SetDirectory(0);
   Graph_30dO000000sPppm1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_30dO000000sPppm1021->SetLineColor(ci);
   Graph_30dO000000sPppm1021->GetXaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1021->GetXaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1021->GetXaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1021->GetYaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1021->GetYaxis()->SetTitleFont(42);
   Graph_30dO000000sPppm1021->GetZaxis()->SetLabelFont(42);
   Graph_30dO000000sPppm1021->GetZaxis()->SetTitleOffset(1);
   Graph_30dO000000sPppm1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_30.000000 ppm1021);
   
   
   TF1 *quadLineFit1022 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1022->SetFillColor(19);
   quadLineFit1022->SetFillStyle(0);
   quadLineFit1022->SetLineColor(5);
   quadLineFit1022->SetLineWidth(2);
   quadLineFit1022->SetChisquare(24.36668);
   quadLineFit1022->SetNDF(2);
   quadLineFit1022->GetXaxis()->SetLabelFont(42);
   quadLineFit1022->GetXaxis()->SetTitleOffset(1);
   quadLineFit1022->GetXaxis()->SetTitleFont(42);
   quadLineFit1022->GetYaxis()->SetLabelFont(42);
   quadLineFit1022->GetYaxis()->SetTitleFont(42);
   quadLineFit1022->SetParameter(0,5.508102);
   quadLineFit1022->SetParError(0,0.07952076);
   quadLineFit1022->SetParLimits(0,0,0);
   quadLineFit1022->SetParameter(1,-0.1621341);
   quadLineFit1022->SetParError(1,0.004637746);
   quadLineFit1022->SetParLimits(1,0,0);
   quadLineFit1022->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1022);
   gre->Draw("p ");
   
   TF1 *quadLineFit1023 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1023->SetFillColor(19);
   quadLineFit1023->SetFillStyle(0);
   quadLineFit1023->SetLineColor(5);
   quadLineFit1023->SetLineWidth(2);
   quadLineFit1023->SetChisquare(24.36668);
   quadLineFit1023->SetNDF(2);
   quadLineFit1023->GetXaxis()->SetLabelFont(42);
   quadLineFit1023->GetXaxis()->SetTitleOffset(1);
   quadLineFit1023->GetXaxis()->SetTitleFont(42);
   quadLineFit1023->GetYaxis()->SetLabelFont(42);
   quadLineFit1023->GetYaxis()->SetTitleFont(42);
   quadLineFit1023->SetParameter(0,5.508102);
   quadLineFit1023->SetParError(0,0.07952076);
   quadLineFit1023->SetParLimits(0,0,0);
   quadLineFit1023->SetParameter(1,-0.1621341);
   quadLineFit1023->SetParError(1,0.004637746);
   quadLineFit1023->SetParLimits(1,0,0);
   quadLineFit1023->Draw("same");
   
   Double_t 50.000000 ppm_fx1023[4] = {
   14,
   16,
   18,
   20};
   Double_t 50.000000 ppm_fy1023[4] = {
   5.011325,
   4.370788,
   3.861107,
   3.515331};
   Double_t 50.000000 ppm_fex1023[4] = {
   0,
   0,
   0,
   0};
   Double_t 50.000000 ppm_fey1023[4] = {
   0.02074029,
   0.02074029,
   0.02074029,
   0.02074029};
   gre = new TGraphErrors(4,50.000000 ppm_fx1023,50.000000 ppm_fy1023,50.000000 ppm_fex1023,50.000000 ppm_fey1023);
   gre->SetName("50.000000 ppm");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(6);
   
   TH1F *Graph_50dO000000sPppm1023 = new TH1F("Graph_50dO000000sPppm1023","Graph",100,13.4,20.6);
   Graph_50dO000000sPppm1023->SetMinimum(3.340844);
   Graph_50dO000000sPppm1023->SetMaximum(5.185812);
   Graph_50dO000000sPppm1023->SetDirectory(0);
   Graph_50dO000000sPppm1023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_50dO000000sPppm1023->SetLineColor(ci);
   Graph_50dO000000sPppm1023->GetXaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1023->GetXaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1023->GetXaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1023->GetYaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1023->GetYaxis()->SetTitleFont(42);
   Graph_50dO000000sPppm1023->GetZaxis()->SetLabelFont(42);
   Graph_50dO000000sPppm1023->GetZaxis()->SetTitleOffset(1);
   Graph_50dO000000sPppm1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_50.000000 ppm1023);
   
   
   TF1 *quadLineFit1024 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1024->SetFillColor(19);
   quadLineFit1024->SetFillStyle(0);
   quadLineFit1024->SetLineColor(6);
   quadLineFit1024->SetLineWidth(2);
   quadLineFit1024->SetChisquare(50.62244);
   quadLineFit1024->SetNDF(2);
   quadLineFit1024->GetXaxis()->SetLabelFont(42);
   quadLineFit1024->GetXaxis()->SetTitleOffset(1);
   quadLineFit1024->GetXaxis()->SetTitleFont(42);
   quadLineFit1024->GetYaxis()->SetLabelFont(42);
   quadLineFit1024->GetYaxis()->SetTitleFont(42);
   quadLineFit1024->SetParameter(0,8.437649);
   quadLineFit1024->SetParError(0,0.07952036);
   quadLineFit1024->SetParLimits(0,0,0);
   quadLineFit1024->SetParameter(1,-0.249883);
   quadLineFit1024->SetParError(1,0.004637722);
   quadLineFit1024->SetParLimits(1,0,0);
   quadLineFit1024->SetParent(gre);
   gre->GetListOfFunctions()->Add(quadLineFit1024);
   gre->Draw("p ");
   
   TF1 *quadLineFit1025 = new TF1("quadLineFit","[0]+[1]*x",13.4,20.6, TF1::EAddToList::kNo);
   quadLineFit1025->SetFillColor(19);
   quadLineFit1025->SetFillStyle(0);
   quadLineFit1025->SetLineColor(6);
   quadLineFit1025->SetLineWidth(2);
   quadLineFit1025->SetChisquare(50.62244);
   quadLineFit1025->SetNDF(2);
   quadLineFit1025->GetXaxis()->SetLabelFont(42);
   quadLineFit1025->GetXaxis()->SetTitleOffset(1);
   quadLineFit1025->GetXaxis()->SetTitleFont(42);
   quadLineFit1025->GetYaxis()->SetLabelFont(42);
   quadLineFit1025->GetYaxis()->SetTitleFont(42);
   quadLineFit1025->SetParameter(0,8.437649);
   quadLineFit1025->SetParError(0,0.07952036);
   quadLineFit1025->SetParLimits(0,0,0);
   quadLineFit1025->SetParameter(1,-0.249883);
   quadLineFit1025->SetParError(1,0.004637722);
   quadLineFit1025->SetParLimits(1,0,0);
   quadLineFit1025->Draw("same");
   
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
