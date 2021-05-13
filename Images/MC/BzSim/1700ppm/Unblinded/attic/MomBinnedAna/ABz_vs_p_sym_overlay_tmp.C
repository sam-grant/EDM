void ABz_vs_p_sym_overlay_tmp()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 23:01:24 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(-0.2500001,-2.5,7.25,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_ABz_vs_p_sym_fx1522[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t S0_ABz_vs_p_sym_fy1522[6] = {
   0.1382707,
   0.1027681,
   0.08514553,
   0.1153313,
   0.1153335,
   0.1425046};
   Double_t S0_ABz_vs_p_sym_fex1522[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_ABz_vs_p_sym_fey1522[6] = {
   0.04601782,
   0.04619479,
   0.04835495,
   0.05368203,
   0.06623503,
   0.1115216};
   TGraphErrors *gre = new TGraphErrors(6,S0_ABz_vs_p_sym_fx1522,S0_ABz_vs_p_sym_fy1522,S0_ABz_vs_p_sym_fex1522,S0_ABz_vs_p_sym_fey1522);
   gre->SetName("S0_ABz_vs_p_sym");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_ABz_vs_p_sym1522 = new TH1F("Graph_S0_ABz_vs_p_sym1522","",100,0.5,6.5);
   Graph_S0_ABz_vs_p_sym1522->SetMinimum(-2);
   Graph_S0_ABz_vs_p_sym1522->SetMaximum(2);
   Graph_S0_ABz_vs_p_sym1522->SetDirectory(0);
   Graph_S0_ABz_vs_p_sym1522->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_ABz_vs_p_sym1522->SetLineColor(ci);
   Graph_S0_ABz_vs_p_sym1522->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_S0_ABz_vs_p_sym1522->GetXaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p_sym1522->GetXaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p_sym1522->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p_sym1522->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p_sym1522->GetXaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p_sym1522->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0_ABz_vs_p_sym1522->GetYaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p_sym1522->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_ABz_vs_p_sym1522->GetYaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p_sym1522->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p_sym1522->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p_sym1522->GetYaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p_sym1522->GetZaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p_sym1522->GetZaxis()->SetTitleOffset(1);
   Graph_S0_ABz_vs_p_sym1522->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_ABz_vs_p_sym1522);
   
   gre->Draw("ap");
   
   Double_t S12_ABz_vs_p_sym_fx1523[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t S12_ABz_vs_p_sym_fy1523[6] = {
   0.162742,
   0.1947836,
   0.1702147,
   0.1999876,
   0.1086306,
   0.2687075};
   Double_t S12_ABz_vs_p_sym_fex1523[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_ABz_vs_p_sym_fey1523[6] = {
   0.04627366,
   0.04654677,
   0.04876991,
   0.05414202,
   0.06679489,
   0.1123918};
   gre = new TGraphErrors(6,S12_ABz_vs_p_sym_fx1523,S12_ABz_vs_p_sym_fy1523,S12_ABz_vs_p_sym_fex1523,S12_ABz_vs_p_sym_fey1523);
   gre->SetName("S12_ABz_vs_p_sym");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_ABz_vs_p_sym1523 = new TH1F("Graph_S12_ABz_vs_p_sym1523","S12",100,0.5,6.5);
   Graph_S12_ABz_vs_p_sym1523->SetMinimum(0.007909406);
   Graph_S12_ABz_vs_p_sym1523->SetMaximum(0.4150257);
   Graph_S12_ABz_vs_p_sym1523->SetDirectory(0);
   Graph_S12_ABz_vs_p_sym1523->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_ABz_vs_p_sym1523->SetLineColor(ci);
   Graph_S12_ABz_vs_p_sym1523->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_S12_ABz_vs_p_sym1523->GetXaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p_sym1523->GetXaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p_sym1523->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p_sym1523->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_ABz_vs_p_sym1523->GetXaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p_sym1523->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12_ABz_vs_p_sym1523->GetYaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p_sym1523->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_ABz_vs_p_sym1523->GetYaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p_sym1523->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p_sym1523->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_ABz_vs_p_sym1523->GetYaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p_sym1523->GetZaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p_sym1523->GetZaxis()->SetTitleOffset(1);
   Graph_S12_ABz_vs_p_sym1523->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_ABz_vs_p_sym1523);
   
   gre->Draw("p ");
   
   Double_t S18_ABz_vs_p_sym_fx1524[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t S18_ABz_vs_p_sym_fy1524[6] = {
   0.1643662,
   0.1716553,
   0.1828697,
   0.1682677,
   0.2186118,
   0.08699089};
   Double_t S18_ABz_vs_p_sym_fex1524[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_ABz_vs_p_sym_fey1524[6] = {
   0.04671805,
   0.04701865,
   0.04910484,
   0.05424054,
   0.06686867,
   0.1135906};
   gre = new TGraphErrors(6,S18_ABz_vs_p_sym_fx1524,S18_ABz_vs_p_sym_fy1524,S18_ABz_vs_p_sym_fex1524,S18_ABz_vs_p_sym_fey1524);
   gre->SetName("S18_ABz_vs_p_sym");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_ABz_vs_p_sym1524 = new TH1F("Graph_S18_ABz_vs_p_sym1524","S18",100,0.5,6.5);
   Graph_S18_ABz_vs_p_sym1524->SetMinimum(-0.05780768);
   Graph_S18_ABz_vs_p_sym1524->SetMaximum(0.3166885);
   Graph_S18_ABz_vs_p_sym1524->SetDirectory(0);
   Graph_S18_ABz_vs_p_sym1524->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_ABz_vs_p_sym1524->SetLineColor(ci);
   Graph_S18_ABz_vs_p_sym1524->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_S18_ABz_vs_p_sym1524->GetXaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p_sym1524->GetXaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p_sym1524->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p_sym1524->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_ABz_vs_p_sym1524->GetXaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p_sym1524->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S18_ABz_vs_p_sym1524->GetYaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p_sym1524->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_ABz_vs_p_sym1524->GetYaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p_sym1524->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p_sym1524->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_ABz_vs_p_sym1524->GetYaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p_sym1524->GetZaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p_sym1524->GetZaxis()->SetTitleOffset(1);
   Graph_S18_ABz_vs_p_sym1524->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_ABz_vs_p_sym1524);
   
   gre->Draw("p ");
   
   Double_t S12S18_ABz_vs_p_sym_fx1525[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t S12S18_ABz_vs_p_sym_fy1525[6] = {
   0.1637239,
   0.1836622,
   0.1767257,
   0.1863839,
   0.1663799,
   0.1794578};
   Double_t S12S18_ABz_vs_p_sym_fex1525[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12S18_ABz_vs_p_sym_fey1525[6] = {
   0.03288256,
   0.03308574,
   0.03461332,
   0.03833985,
   0.04729184,
   0.08005234};
   gre = new TGraphErrors(6,S12S18_ABz_vs_p_sym_fx1525,S12S18_ABz_vs_p_sym_fy1525,S12S18_ABz_vs_p_sym_fex1525,S12S18_ABz_vs_p_sym_fey1525);
   gre->SetName("S12S18_ABz_vs_p_sym");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_ABz_vs_p_sym1525 = new TH1F("Graph_S12S18_ABz_vs_p_sym1525","S12S18",100,0.5,6.5);
   Graph_S12S18_ABz_vs_p_sym1525->SetMinimum(0.08339498);
   Graph_S12S18_ABz_vs_p_sym1525->SetMaximum(0.2755206);
   Graph_S12S18_ABz_vs_p_sym1525->SetDirectory(0);
   Graph_S12S18_ABz_vs_p_sym1525->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_ABz_vs_p_sym1525->SetLineColor(ci);
   Graph_S12S18_ABz_vs_p_sym1525->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_S12S18_ABz_vs_p_sym1525->GetXaxis()->CenterTitle(true);
   Graph_S12S18_ABz_vs_p_sym1525->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_ABz_vs_p_sym1525->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_ABz_vs_p_sym1525->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_ABz_vs_p_sym1525->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_ABz_vs_p_sym1525->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12S18_ABz_vs_p_sym1525->GetYaxis()->CenterTitle(true);
   Graph_S12S18_ABz_vs_p_sym1525->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_ABz_vs_p_sym1525->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_ABz_vs_p_sym1525->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_ABz_vs_p_sym1525->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_ABz_vs_p_sym1525->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_ABz_vs_p_sym1525->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_ABz_vs_p_sym1525->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_ABz_vs_p_sym1525->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_ABz_vs_p_sym1525);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_ABz_vs_p_sym_fx1526[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t S0S12S18_ABz_vs_p_sym_fy1526[6] = {
   0.1554359,
   0.15678,
   0.1466038,
   0.163655,
   0.1515257,
   0.1688432};
   Double_t S0S12S18_ABz_vs_p_sym_fex1526[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0S12S18_ABz_vs_p_sym_fey1526[6] = {
   0.02675886,
   0.02690421,
   0.02815295,
   0.03121184,
   0.03851683,
   0.0651482};
   gre = new TGraphErrors(6,S0S12S18_ABz_vs_p_sym_fx1526,S0S12S18_ABz_vs_p_sym_fy1526,S0S12S18_ABz_vs_p_sym_fex1526,S0S12S18_ABz_vs_p_sym_fey1526);
   gre->SetName("S0S12S18_ABz_vs_p_sym");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_ABz_vs_p_sym1526 = new TH1F("Graph_S0S12S18_ABz_vs_p_sym1526","S0S12S18",100,0.5,6.5);
   Graph_S0S12S18_ABz_vs_p_sym1526->SetMinimum(0.0906654);
   Graph_S0S12S18_ABz_vs_p_sym1526->SetMaximum(0.2470211);
   Graph_S0S12S18_ABz_vs_p_sym1526->SetDirectory(0);
   Graph_S0S12S18_ABz_vs_p_sym1526->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_ABz_vs_p_sym1526->SetLineColor(ci);
   Graph_S0S12S18_ABz_vs_p_sym1526->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_S0S12S18_ABz_vs_p_sym1526->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_ABz_vs_p_sym1526->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p_sym1526->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_ABz_vs_p_sym1526->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_ABz_vs_p_sym1526->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_ABz_vs_p_sym1526->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0S12S18_ABz_vs_p_sym1526->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_ABz_vs_p_sym1526->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_ABz_vs_p_sym1526->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p_sym1526->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_ABz_vs_p_sym1526->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_ABz_vs_p_sym1526->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_ABz_vs_p_sym1526->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p_sym1526->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_ABz_vs_p_sym1526->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_ABz_vs_p_sym1526);
   
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
