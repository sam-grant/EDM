void ABz_vs_p_sym_overlay_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 22:57:30 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.2500001,-2.5,7.25,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_ABz_vs_p_sym_fx1432[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t S0_ABz_vs_p_sym_fy1432[6] = {
   0.1757975,
   0.1729148,
   0.1665166,
   0.1684366,
   0.1875383,
   0.2259594};
   Double_t S0_ABz_vs_p_sym_fex1432[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_ABz_vs_p_sym_fey1432[6] = {
   0.00788421,
   0.01111046,
   0.01118106,
   0.01241392,
   0.01531669,
   0.01828118};
   TGraphErrors *gre = new TGraphErrors(6,S0_ABz_vs_p_sym_fx1432,S0_ABz_vs_p_sym_fy1432,S0_ABz_vs_p_sym_fex1432,S0_ABz_vs_p_sym_fey1432);
   gre->SetName("S0_ABz_vs_p_sym");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_ABz_vs_p_sym1432 = new TH1F("Graph_S0_ABz_vs_p_sym1432","",100,0.5,6.5);
   Graph_S0_ABz_vs_p_sym1432->SetMinimum(-2);
   Graph_S0_ABz_vs_p_sym1432->SetMaximum(2);
   Graph_S0_ABz_vs_p_sym1432->SetDirectory(0);
   Graph_S0_ABz_vs_p_sym1432->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_ABz_vs_p_sym1432->SetLineColor(ci);
   Graph_S0_ABz_vs_p_sym1432->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_S0_ABz_vs_p_sym1432->GetXaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p_sym1432->GetXaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p_sym1432->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p_sym1432->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p_sym1432->GetXaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p_sym1432->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0_ABz_vs_p_sym1432->GetYaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p_sym1432->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_ABz_vs_p_sym1432->GetYaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p_sym1432->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p_sym1432->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p_sym1432->GetYaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p_sym1432->GetZaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p_sym1432->GetZaxis()->SetTitleOffset(1);
   Graph_S0_ABz_vs_p_sym1432->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_ABz_vs_p_sym1432);
   
   gre->Draw("ap");
   
   Double_t S12_ABz_vs_p_sym_fx1433[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t S12_ABz_vs_p_sym_fy1433[6] = {
   0.1476851,
   0.1552636,
   0.1470141,
   0.1649595,
   0.160456,
   0.1456081};
   Double_t S12_ABz_vs_p_sym_fex1433[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_ABz_vs_p_sym_fey1433[6] = {
   0.007931676,
   0.01118118,
   0.01125504,
   0.01249575,
   0.01542716,
   0.01839765};
   gre = new TGraphErrors(6,S12_ABz_vs_p_sym_fx1433,S12_ABz_vs_p_sym_fy1433,S12_ABz_vs_p_sym_fex1433,S12_ABz_vs_p_sym_fey1433);
   gre->SetName("S12_ABz_vs_p_sym");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_ABz_vs_p_sym1433 = new TH1F("Graph_S12_ABz_vs_p_sym1433","S12",100,0.5,6.5);
   Graph_S12_ABz_vs_p_sym1433->SetMinimum(0.1221859);
   Graph_S12_ABz_vs_p_sym1433->SetMaximum(0.1824797);
   Graph_S12_ABz_vs_p_sym1433->SetDirectory(0);
   Graph_S12_ABz_vs_p_sym1433->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_ABz_vs_p_sym1433->SetLineColor(ci);
   Graph_S12_ABz_vs_p_sym1433->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_S12_ABz_vs_p_sym1433->GetXaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p_sym1433->GetXaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p_sym1433->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p_sym1433->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_ABz_vs_p_sym1433->GetXaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p_sym1433->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12_ABz_vs_p_sym1433->GetYaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p_sym1433->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_ABz_vs_p_sym1433->GetYaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p_sym1433->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p_sym1433->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_ABz_vs_p_sym1433->GetYaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p_sym1433->GetZaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p_sym1433->GetZaxis()->SetTitleOffset(1);
   Graph_S12_ABz_vs_p_sym1433->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_ABz_vs_p_sym1433);
   
   gre->Draw("p ");
   
   Double_t S18_ABz_vs_p_sym_fx1434[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t S18_ABz_vs_p_sym_fy1434[6] = {
   0.1441202,
   0.1427154,
   0.1395042,
   0.1367841,
   0.1377038,
   0.1401244};
   Double_t S18_ABz_vs_p_sym_fex1434[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_ABz_vs_p_sym_fey1434[6] = {
   0.007979725,
   0.01125121,
   0.01133618,
   0.01258871,
   0.01554308,
   0.01856926};
   gre = new TGraphErrors(6,S18_ABz_vs_p_sym_fx1434,S18_ABz_vs_p_sym_fy1434,S18_ABz_vs_p_sym_fex1434,S18_ABz_vs_p_sym_fey1434);
   gre->SetName("S18_ABz_vs_p_sym");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_ABz_vs_p_sym1434 = new TH1F("Graph_S18_ABz_vs_p_sym1434","S18",100,0.5,6.5);
   Graph_S18_ABz_vs_p_sym1434->SetMinimum(0.1178413);
   Graph_S18_ABz_vs_p_sym1434->SetMaximum(0.1624075);
   Graph_S18_ABz_vs_p_sym1434->SetDirectory(0);
   Graph_S18_ABz_vs_p_sym1434->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_ABz_vs_p_sym1434->SetLineColor(ci);
   Graph_S18_ABz_vs_p_sym1434->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_S18_ABz_vs_p_sym1434->GetXaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p_sym1434->GetXaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p_sym1434->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p_sym1434->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_ABz_vs_p_sym1434->GetXaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p_sym1434->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S18_ABz_vs_p_sym1434->GetYaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p_sym1434->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_ABz_vs_p_sym1434->GetYaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p_sym1434->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p_sym1434->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_ABz_vs_p_sym1434->GetYaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p_sym1434->GetZaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p_sym1434->GetZaxis()->SetTitleOffset(1);
   Graph_S18_ABz_vs_p_sym1434->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_ABz_vs_p_sym1434);
   
   gre->Draw("p ");
   
   Double_t S12S18_ABz_vs_p_sym_fx1435[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t S12S18_ABz_vs_p_sym_fy1435[6] = {
   0.145955,
   0.149073,
   0.1433311,
   0.1509564,
   0.148992,
   0.1426985};
   Double_t S12S18_ABz_vs_p_sym_fex1435[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12S18_ABz_vs_p_sym_fey1435[6] = {
   0.005625555,
   0.007931081,
   0.007987232,
   0.008868747,
   0.01094998,
   0.0130707};
   gre = new TGraphErrors(6,S12S18_ABz_vs_p_sym_fx1435,S12S18_ABz_vs_p_sym_fy1435,S12S18_ABz_vs_p_sym_fex1435,S12S18_ABz_vs_p_sym_fey1435);
   gre->SetName("S12S18_ABz_vs_p_sym");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_ABz_vs_p_sym1435 = new TH1F("Graph_S12S18_ABz_vs_p_sym1435","S12S18",100,0.5,6.5);
   Graph_S12S18_ABz_vs_p_sym1435->SetMinimum(0.1265964);
   Graph_S12S18_ABz_vs_p_sym1435->SetMaximum(0.1629734);
   Graph_S12S18_ABz_vs_p_sym1435->SetDirectory(0);
   Graph_S12S18_ABz_vs_p_sym1435->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_ABz_vs_p_sym1435->SetLineColor(ci);
   Graph_S12S18_ABz_vs_p_sym1435->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_S12S18_ABz_vs_p_sym1435->GetXaxis()->CenterTitle(true);
   Graph_S12S18_ABz_vs_p_sym1435->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_ABz_vs_p_sym1435->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_ABz_vs_p_sym1435->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_ABz_vs_p_sym1435->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_ABz_vs_p_sym1435->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12S18_ABz_vs_p_sym1435->GetYaxis()->CenterTitle(true);
   Graph_S12S18_ABz_vs_p_sym1435->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_ABz_vs_p_sym1435->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_ABz_vs_p_sym1435->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_ABz_vs_p_sym1435->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_ABz_vs_p_sym1435->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_ABz_vs_p_sym1435->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_ABz_vs_p_sym1435->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_ABz_vs_p_sym1435->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_ABz_vs_p_sym1435);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_ABz_vs_p_sym_fx1436[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t S0S12S18_ABz_vs_p_sym_fy1436[6] = {
   0.1560197,
   0.1571613,
   0.1512402,
   0.1569023,
   0.1620948,
   0.1707752};
   Double_t S0S12S18_ABz_vs_p_sym_fex1436[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0S12S18_ABz_vs_p_sym_fey1436[6] = {
   0.004579512,
   0.006455363,
   0.006499459,
   0.007216589,
   0.00890816,
   0.01063367};
   gre = new TGraphErrors(6,S0S12S18_ABz_vs_p_sym_fx1436,S0S12S18_ABz_vs_p_sym_fy1436,S0S12S18_ABz_vs_p_sym_fex1436,S0S12S18_ABz_vs_p_sym_fey1436);
   gre->SetName("S0S12S18_ABz_vs_p_sym");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_ABz_vs_p_sym1436 = new TH1F("Graph_S0S12S18_ABz_vs_p_sym1436","S0S12S18",100,0.5,6.5);
   Graph_S0S12S18_ABz_vs_p_sym1436->SetMinimum(0.1410739);
   Graph_S0S12S18_ABz_vs_p_sym1436->SetMaximum(0.1850757);
   Graph_S0S12S18_ABz_vs_p_sym1436->SetDirectory(0);
   Graph_S0S12S18_ABz_vs_p_sym1436->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_ABz_vs_p_sym1436->SetLineColor(ci);
   Graph_S0S12S18_ABz_vs_p_sym1436->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_S0S12S18_ABz_vs_p_sym1436->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_ABz_vs_p_sym1436->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p_sym1436->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_ABz_vs_p_sym1436->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_ABz_vs_p_sym1436->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_ABz_vs_p_sym1436->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0S12S18_ABz_vs_p_sym1436->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_ABz_vs_p_sym1436->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_ABz_vs_p_sym1436->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p_sym1436->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_ABz_vs_p_sym1436->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_ABz_vs_p_sym1436->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_ABz_vs_p_sym1436->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p_sym1436->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_ABz_vs_p_sym1436->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_ABz_vs_p_sym1436);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_ABz_vs_p_sym","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_ABz_vs_p_sym","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_ABz_vs_p_sym","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12S18_ABz_vs_p_sym","S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S0S12S18_ABz_vs_p_sym","S0S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff6600");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
