#ifdef __CLING__
#pragma cling optimize(0)
#endif
void VerticalOffsetSimStationOverlay()
{
//=========Macro generated from canvas: c/
//=========  (Sun Sep 25 14:24:39 2022) by ROOT version 6.26/04
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
   5.669889,
   0.1255085,
   -0.2081711,
   -0.1745036,
   -0.1313914,
   -0.147111,
   -0.06172958,
   -0.02059434,
   0.01858561,
   0.002514351,
   -0.07358436};
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
   0.09621891,
   0.03215632,
   0.0185151,
   0.01520998,
   0.01387826,
   0.01317524,
   0.01306866,
   0.01357145,
   0.01445461,
   0.01506939,
   0.03554807};
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
   5.057332,
   -0.3277161,
   -0.6170577,
   -0.4505353,
   -0.3639681,
   -0.3484803,
   -0.2107882,
   -0.1630386,
   -0.1734397,
   -0.09903334,
   -0.09212177};
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
   0.07620734,
   0.0255477,
   0.01463073,
   0.01201824,
   0.01098505,
   0.01047016,
   0.0105642,
   0.01134891,
   0.01252182,
   0.01306908,
   0.03240963};
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
   Graph_S12_c_vs_p_thetaY1004->SetMinimum(-1.208211);
   Graph_S12_c_vs_p_thetaY1004->SetMaximum(5.710062);
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
   5.277136,
   -0.112415,
   -0.4140974,
   -0.3433315,
   -0.2536775,
   -0.2433802,
   -0.2100542,
   -0.1321991,
   -0.1590736,
   -0.08893159,
   -0.04922163};
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
   0.07648357,
   0.02554342,
   0.01457203,
   0.01194558,
   0.01099882,
   0.01054642,
   0.01075828,
   0.01154377,
   0.0128329,
   0.01319663,
   0.03429231};
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
   Graph_S18_c_vs_p_thetaY1005->SetMinimum(-1.006898);
   Graph_S18_c_vs_p_thetaY1005->SetMaximum(5.931848);
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
