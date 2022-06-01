void VerticalOffsetSimStationOverlay()
{
//=========Macro generated from canvas: c/
//=========  (Mon May 30 21:32:42 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(196.6363,-0.8625,3213.013,0.2625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_thetaY_fx1003[11] = {
   451.6469,
   653.2585,
   879.9235,
   1123.046,
   1371.407,
   1620.72,
   1868.002,
   2116.574,
   2363.173,
   2615.303,
   2789.539};
   Double_t S0_c_vs_p_thetaY_fy1003[11] = {
   5.65108,
   0.03594492,
   -0.239272,
   -0.1684808,
   -0.1203835,
   -0.1598394,
   -0.09643004,
   -0.04166507,
   -0.01797081,
   -0.004246611,
   -0.101769};
   Double_t S0_c_vs_p_thetaY_fex1003[11] = {
   0.1383888,
   0.1171073,
   0.08542908,
   0.08352372,
   0.08892402,
   0.0981727,
   0.1127012,
   0.136412,
   0.1707298,
   0.2138176,
   0.2465359};
   Double_t S0_c_vs_p_thetaY_fey1003[11] = {
   0.132419,
   0.04421799,
   0.02551614,
   0.0209571,
   0.01913568,
   0.01823076,
   0.018048,
   0.01875392,
   0.0199469,
   0.02080325,
   0.04706361};
   TGraphErrors *gre = new TGraphErrors(11,S0_c_vs_p_thetaY_fx1003,S0_c_vs_p_thetaY_fy1003,S0_c_vs_p_thetaY_fex1003,S0_c_vs_p_thetaY_fey1003);
   gre->SetName("S0_c_vs_p_thetaY");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p_thetaY1003 = new TH1F("Graph_S0_c_vs_p_thetaY1003","",100,217.6808,3023.613);
   Graph_S0_c_vs_p_thetaY1003->SetMinimum(-0.75);
   Graph_S0_c_vs_p_thetaY1003->SetMaximum(0.15);
   Graph_S0_c_vs_p_thetaY1003->SetDirectory(0);
   Graph_S0_c_vs_p_thetaY1003->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p_thetaY1003->SetLineColor(ci);
   Graph_S0_c_vs_p_thetaY1003->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S0_c_vs_p_thetaY1003->GetXaxis()->SetRange(11,96);
   Graph_S0_c_vs_p_thetaY1003->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p_thetaY1003->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_thetaY1003->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p_thetaY1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p_thetaY1003->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p_thetaY1003->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_S0_c_vs_p_thetaY1003->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p_thetaY1003->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p_thetaY1003->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_thetaY1003->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p_thetaY1003->GetYaxis()->SetTitleOffset(1.15);
   Graph_S0_c_vs_p_thetaY1003->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p_thetaY1003->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_thetaY1003->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p_thetaY1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p_thetaY1003);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_thetaY_fx1004[11] = {
   451.7813,
   653.3899,
   880.2814,
   1123.172,
   1371.155,
   1620.23,
   1866.957,
   2115.041,
   2362.635,
   2614.361,
   2787.793};
   Double_t S12_c_vs_p_thetaY_fy1004[11] = {
   5.094055,
   -0.3585594,
   -0.6245168,
   -0.4490933,
   -0.3716474,
   -0.3596137,
   -0.2113336,
   -0.162044,
   -0.1828867,
   -0.1170736,
   -0.1206249};
   Double_t S12_c_vs_p_thetaY_fex1004[11] = {
   0.09598716,
   0.08110103,
   0.05875489,
   0.05741567,
   0.0611556,
   0.06753555,
   0.07881058,
   0.09874796,
   0.1289024,
   0.1585721,
   0.1940861};
   Double_t S12_c_vs_p_thetaY_fey1004[11] = {
   0.0905783,
   0.03043958,
   0.01746652,
   0.01435144,
   0.01311159,
   0.01250208,
   0.01263477,
   0.01355014,
   0.01498643,
   0.01560608,
   0.03766214};
   gre = new TGraphErrors(11,S12_c_vs_p_thetaY_fx1004,S12_c_vs_p_thetaY_fy1004,S12_c_vs_p_thetaY_fex1004,S12_c_vs_p_thetaY_fey1004);
   gre->SetName("S12_c_vs_p_thetaY");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p_thetaY1004 = new TH1F("Graph_S12_c_vs_p_thetaY1004","S12_",100,218.0551,3021.618);
   Graph_S12_c_vs_p_thetaY1004->SetMinimum(-1.224645);
   Graph_S12_c_vs_p_thetaY1004->SetMaximum(5.767295);
   Graph_S12_c_vs_p_thetaY1004->SetDirectory(0);
   Graph_S12_c_vs_p_thetaY1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p_thetaY1004->SetLineColor(ci);
   Graph_S12_c_vs_p_thetaY1004->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_c_vs_p_thetaY1004->GetXaxis()->SetRange(0,100);
   Graph_S12_c_vs_p_thetaY1004->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p_thetaY1004->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_thetaY1004->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p_thetaY1004->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p_thetaY1004->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p_thetaY1004->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_S12_c_vs_p_thetaY1004->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p_thetaY1004->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p_thetaY1004->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_thetaY1004->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p_thetaY1004->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p_thetaY1004->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p_thetaY1004->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_thetaY1004->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p_thetaY1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p_thetaY1004);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_thetaY_fx1005[11] = {
   452.0131,
   653.3092,
   880.5524,
   1123.038,
   1370.896,
   1619.753,
   1866.511,
   2115.078,
   2363.235,
   2612.145,
   2787.407};
   Double_t S18_c_vs_p_thetaY_fy1005[11] = {
   5.406631,
   -0.1193659,
   -0.4038042,
   -0.3586216,
   -0.2610722,
   -0.2570318,
   -0.214894,
   -0.1312509,
   -0.1436213,
   -0.0880649,
   -0.1092141};
   Double_t S18_c_vs_p_thetaY_fex1005[11] = {
   0.09668649,
   0.08148288,
   0.05877316,
   0.05735144,
   0.06150273,
   0.06815156,
   0.08043981,
   0.1010412,
   0.1328141,
   0.158873,
   0.2002977};
   Double_t S18_c_vs_p_thetaY_fey1005[11] = {
   0.09104102,
   0.03042387,
   0.0173927,
   0.01425666,
   0.01314242,
   0.01260555,
   0.01286202,
   0.0138174,
   0.01533864,
   0.0157475,
   0.03975635};
   gre = new TGraphErrors(11,S18_c_vs_p_thetaY_fx1005,S18_c_vs_p_thetaY_fy1005,S18_c_vs_p_thetaY_fex1005,S18_c_vs_p_thetaY_fey1005);
   gre->SetName("S18_c_vs_p_thetaY");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p_thetaY1005 = new TH1F("Graph_S18_c_vs_p_thetaY1005","S18_",100,218.3473,3021.177);
   Graph_S18_c_vs_p_thetaY1005->SetMinimum(-1.013084);
   Graph_S18_c_vs_p_thetaY1005->SetMaximum(6.089559);
   Graph_S18_c_vs_p_thetaY1005->SetDirectory(0);
   Graph_S18_c_vs_p_thetaY1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p_thetaY1005->SetLineColor(ci);
   Graph_S18_c_vs_p_thetaY1005->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_c_vs_p_thetaY1005->GetXaxis()->SetRange(0,100);
   Graph_S18_c_vs_p_thetaY1005->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p_thetaY1005->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_thetaY1005->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p_thetaY1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p_thetaY1005->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p_thetaY1005->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_S18_c_vs_p_thetaY1005->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p_thetaY1005->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p_thetaY1005->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_thetaY1005->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p_thetaY1005->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p_thetaY1005->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p_thetaY1005->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_thetaY1005->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p_thetaY1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p_thetaY1005);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.63,0.2,0.85,0.33,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_c_vs_p_thetaY","Station 0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S12_c_vs_p_thetaY","Station 12","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S18_c_vs_p_thetaY","Station 18","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
