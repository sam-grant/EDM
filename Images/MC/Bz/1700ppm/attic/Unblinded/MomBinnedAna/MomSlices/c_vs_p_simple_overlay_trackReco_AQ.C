void c_vs_p_simple_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 13 01:18:45 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-412.5,-2.5,3712.5,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_fx1407[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t S0_c_vs_p_fy1407[15] = {
   6.347801,
   -2.414527,
   -1.189524,
   -0.2059425,
   -0.03859603,
   -0.08562016,
   0.03505259,
   -0.0219542,
   -0.04076063,
   -0.006185237,
   0.03170976,
   -0.01024639,
   -0.01658639,
   0.03189668,
   0.03740953};
   Double_t S0_c_vs_p_fex1407[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S0_c_vs_p_fey1407[15] = {
   0.7622989,
   0.1673368,
   0.05581958,
   0.04351482,
   0.03837076,
   0.03559071,
   0.03323369,
   0.03143238,
   0.03019955,
   0.02993859,
   0.03007196,
   0.03079214,
   0.0328038,
   0.03467226,
   0.04430928};
   TGraphErrors *gre = new TGraphErrors(15,S0_c_vs_p_fx1407,S0_c_vs_p_fy1407,S0_c_vs_p_fex1407,S0_c_vs_p_fey1407);
   gre->SetName("S0_c_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p1407 = new TH1F("Graph_S0_c_vs_p1407","",100,0,3300);
   Graph_S0_c_vs_p1407->SetMinimum(-2);
   Graph_S0_c_vs_p1407->SetMaximum(2);
   Graph_S0_c_vs_p1407->SetDirectory(0);
   Graph_S0_c_vs_p1407->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p1407->SetLineColor(ci);
   Graph_S0_c_vs_p1407->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S0_c_vs_p1407->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1407->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1407->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1407->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1407->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1407->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p1407->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p1407->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p1407->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1407->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p1407->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p1407->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p1407->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p1407->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p1407->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p1407);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_fx1408[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t S12_c_vs_p_fy1408[15] = {
   -2.349322,
   -2.849881,
   -1.500052,
   -0.6566471,
   -0.4379771,
   -0.3482645,
   -0.2672689,
   -0.2189503,
   -0.1496941,
   -0.1417182,
   -0.08464467,
   -0.1696869,
   -0.03594179,
   -0.08548306,
   -0.1236831};
   Double_t S12_c_vs_p_fex1408[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S12_c_vs_p_fey1408[15] = {
   0.8942917,
   0.1615382,
   0.05605586,
   0.04349043,
   0.03847068,
   0.03556918,
   0.03318687,
   0.03144894,
   0.03035247,
   0.0303219,
   0.03115923,
   0.03294349,
   0.03582973,
   0.03624482,
   0.05059996};
   gre = new TGraphErrors(15,S12_c_vs_p_fx1408,S12_c_vs_p_fy1408,S12_c_vs_p_fex1408,S12_c_vs_p_fey1408);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1408 = new TH1F("Graph_S12_c_vs_p1408","S12",100,0,3300);
   Graph_S12_c_vs_p1408->SetMinimum(-3.567964);
   Graph_S12_c_vs_p1408->SetMaximum(0.3242381);
   Graph_S12_c_vs_p1408->SetDirectory(0);
   Graph_S12_c_vs_p1408->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1408->SetLineColor(ci);
   Graph_S12_c_vs_p1408->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S12_c_vs_p1408->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1408->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1408->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1408->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1408->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1408->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p1408->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1408->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1408->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1408->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1408->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p1408->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1408->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1408->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1408->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1408);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_fx1409[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t S18_c_vs_p_fy1409[15] = {
   -2.568806,
   -2.88629,
   -1.444213,
   -0.5202099,
   -0.3731324,
   -0.3007494,
   -0.2365243,
   -0.1857351,
   -0.09701132,
   -0.1458445,
   -0.1843081,
   -0.08904066,
   -0.07634079,
   -0.1040064,
   0.002707208};
   Double_t S18_c_vs_p_fex1409[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t S18_c_vs_p_fey1409[15] = {
   0.8838735,
   0.1659239,
   0.05593579,
   0.04335314,
   0.03833547,
   0.03548673,
   0.03323402,
   0.03155236,
   0.03070376,
   0.03076675,
   0.03187311,
   0.03434547,
   0.03654128,
   0.03719143,
   0.05166644};
   gre = new TGraphErrors(15,S18_c_vs_p_fx1409,S18_c_vs_p_fy1409,S18_c_vs_p_fex1409,S18_c_vs_p_fey1409);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p1409 = new TH1F("Graph_S18_c_vs_p1409","S18",100,0,3300);
   Graph_S18_c_vs_p1409->SetMinimum(-3.803385);
   Graph_S18_c_vs_p1409->SetMaximum(0.405079);
   Graph_S18_c_vs_p1409->SetDirectory(0);
   Graph_S18_c_vs_p1409->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1409->SetLineColor(ci);
   Graph_S18_c_vs_p1409->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_S18_c_vs_p1409->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1409->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1409->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1409->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1409->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1409->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p1409->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1409->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1409->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1409->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1409->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1409->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1409->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1409->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1409->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1409);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_c_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_c_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_c_vs_p","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
