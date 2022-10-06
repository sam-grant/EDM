#ifdef __CLING__
#pragma cling optimize(0)
#endif
void VerticalOffsetSimStationOverlay()
{
//=========Macro generated from canvas: c/
//=========  (Tue Oct  4 14:56:59 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(197.158,-0.86875,3210.89,0.31875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_thetaY_fx1003[11] = {
   451.9069,
   653.3776,
   879.9446,
   1123.186,
   1371.518,
   1620.715,
   1867.947,
   2116.42,
   2363.18,
   2614.765,
   2787.854};
   Double_t S0_c_vs_p_thetaY_fy1003[11] = {
   5.528468,
   0.1215535,
   -0.1998807,
   -0.1670715,
   -0.1249403,
   -0.1398474,
   -0.06266201,
   -0.01975476,
   0.01144286,
   0.003879446,
   -0.09225369};
   Double_t S0_c_vs_p_thetaY_fex1003[11] = {
   0.1002108,
   0.08522798,
   0.06199341,
   0.06053071,
   0.06432475,
   0.07078151,
   0.08118231,
   0.0984243,
   0.1230972,
   0.1545819,
   0.1789477};
   Double_t S0_c_vs_p_thetaY_fey1003[11] = {
   0.09363491,
   0.03097649,
   0.01787033,
   0.01466364,
   0.01338184,
   0.01271462,
   0.01257118,
   0.01289757,
   0.01324681,
   0.0133104,
   0.03001409};
   TGraphErrors *gre = new TGraphErrors(11,S0_c_vs_p_thetaY_fx1003,S0_c_vs_p_thetaY_fy1003,S0_c_vs_p_thetaY_fex1003,S0_c_vs_p_thetaY_fey1003);
   gre->SetName("S0_c_vs_p_thetaY");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p_thetaY1003 = new TH1F("Graph_S0_c_vs_p_thetaY1003","",100,218.1841,3021.656);
   Graph_S0_c_vs_p_thetaY1003->SetMinimum(-0.75);
   Graph_S0_c_vs_p_thetaY1003->SetMaximum(0.2);
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
   451.9095,
   653.4261,
   880.3169,
   1123.187,
   1371.206,
   1620.31,
   1866.992,
   2114.936,
   2362.544,
   2613.835,
   2786.947};
   Double_t S12_c_vs_p_thetaY_fy1004[11] = {
   4.866715,
   -0.3106749,
   -0.594907,
   -0.4349358,
   -0.3513033,
   -0.3351015,
   -0.2033608,
   -0.1570851,
   -0.1740306,
   -0.09800164,
   -0.08506539};
   Double_t S12_c_vs_p_thetaY_fex1004[11] = {
   0.08043361,
   0.06802521,
   0.04920645,
   0.04802135,
   0.05116607,
   0.05641708,
   0.06571804,
   0.08234854,
   0.1076149,
   0.1323241,
   0.1630051};
   Double_t S12_c_vs_p_thetaY_fey1004[11] = {
   0.07296709,
   0.02465975,
   0.01410407,
   0.01163111,
   0.01064083,
   0.0100925,
   0.01009103,
   0.01066601,
   0.01164823,
   0.01157434,
   0.02791341};
   gre = new TGraphErrors(11,S12_c_vs_p_thetaY_fx1004,S12_c_vs_p_thetaY_fy1004,S12_c_vs_p_thetaY_fex1004,S12_c_vs_p_thetaY_fey1004);
   gre->SetName("S12_c_vs_p_thetaY");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p_thetaY1004 = new TH1F("Graph_S12_c_vs_p_thetaY1004","S12_",100,218.301,3020.638);
   Graph_S12_c_vs_p_thetaY1004->SetMinimum(-1.16388);
   Graph_S12_c_vs_p_thetaY1004->SetMaximum(5.494551);
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
   452.0079,
   653.4046,
   880.5861,
   1123.101,
   1371.032,
   1619.797,
   1866.582,
   2115.028,
   2363.224,
   2611.794,
   2786.517};
   Double_t S18_c_vs_p_thetaY_fy1005[11] = {
   5.081156,
   -0.1026226,
   -0.4009445,
   -0.3309663,
   -0.2421865,
   -0.2357446,
   -0.2034012,
   -0.1242869,
   -0.1558606,
   -0.09737728,
   -0.06249754};
   Double_t S18_c_vs_p_thetaY_fex1005[11] = {
   0.0811291,
   0.06835249,
   0.04921854,
   0.04797054,
   0.05139622,
   0.05690497,
   0.06707798,
   0.08425766,
   0.1108206,
   0.1327986,
   0.1685929};
   Double_t S18_c_vs_p_thetaY_fey1005[11] = {
   0.07326822,
   0.02452466,
   0.01411252,
   0.01155315,
   0.01056861,
   0.0101661,
   0.01032303,
   0.01092072,
   0.01188887,
   0.01146838,
   0.02717116};
   gre = new TGraphErrors(11,S18_c_vs_p_thetaY_fx1005,S18_c_vs_p_thetaY_fy1005,S18_c_vs_p_thetaY_fex1005,S18_c_vs_p_thetaY_fey1005);
   gre->SetName("S18_c_vs_p_thetaY");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p_thetaY1005 = new TH1F("Graph_S18_c_vs_p_thetaY1005","S18_",100,218.4509,3020.162);
   Graph_S18_c_vs_p_thetaY1005->SetMinimum(-0.9720052);
   Graph_S18_c_vs_p_thetaY1005->SetMaximum(5.711373);
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
