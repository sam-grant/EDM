void c_vs_p_pmin_overlay_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 22:57:29 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(200,-2.5,2600,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_c_vs_p_pmin_fx1417[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t S0_c_vs_p_pmin_fy1417[9] = {
   -0.02868432,
   -0.02337472,
   -0.01974982,
   -0.01111272,
   -0.0150174,
   -0.01387922,
   -0.0008839656,
   0.02185595,
   0.01847999};
   Double_t S0_c_vs_p_pmin_fex1417[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_c_vs_p_pmin_fey1417[9] = {
   0.005576547,
   0.00785824,
   0.007907924,
   0.008112381,
   0.008511541,
   0.009193696,
   0.01035312,
   0.01247564,
   0.01752195};
   TGraphErrors *gre = new TGraphErrors(9,S0_c_vs_p_pmin_fx1417,S0_c_vs_p_pmin_fy1417,S0_c_vs_p_pmin_fex1417,S0_c_vs_p_pmin_fey1417);
   gre->SetName("S0_c_vs_p_pmin");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p_pmin1417 = new TH1F("Graph_S0_c_vs_p_pmin1417","",100,440,2360);
   Graph_S0_c_vs_p_pmin1417->SetMinimum(-2);
   Graph_S0_c_vs_p_pmin1417->SetMaximum(2);
   Graph_S0_c_vs_p_pmin1417->SetDirectory(0);
   Graph_S0_c_vs_p_pmin1417->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p_pmin1417->SetLineColor(ci);
   Graph_S0_c_vs_p_pmin1417->GetXaxis()->SetTitle("p_{min} MeV");
   Graph_S0_c_vs_p_pmin1417->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p_pmin1417->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_pmin1417->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p_pmin1417->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p_pmin1417->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p_pmin1417->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p_pmin1417->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p_pmin1417->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p_pmin1417->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_pmin1417->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p_pmin1417->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p_pmin1417->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p_pmin1417->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_pmin1417->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p_pmin1417->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p_pmin1417);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_pmin_fx1418[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t S12_c_vs_p_pmin_fy1418[9] = {
   -0.2572881,
   -0.2338526,
   -0.1987908,
   -0.1676417,
   -0.142549,
   -0.1245672,
   -0.1068766,
   -0.08685136,
   -0.07199175};
   Double_t S12_c_vs_p_pmin_fex1418[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_c_vs_p_pmin_fey1418[9] = {
   0.005611996,
   0.007910198,
   0.007960404,
   0.008167291,
   0.008577117,
   0.009268145,
   0.01045504,
   0.0125995,
   0.01767652};
   gre = new TGraphErrors(9,S12_c_vs_p_pmin_fx1418,S12_c_vs_p_pmin_fy1418,S12_c_vs_p_pmin_fex1418,S12_c_vs_p_pmin_fey1418);
   gre->SetName("S12_c_vs_p_pmin");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p_pmin1418 = new TH1F("Graph_S12_c_vs_p_pmin1418","S12",100,440,2360);
   Graph_S12_c_vs_p_pmin1418->SetMinimum(-0.2837586);
   Graph_S12_c_vs_p_pmin1418->SetMaximum(-0.03345674);
   Graph_S12_c_vs_p_pmin1418->SetDirectory(0);
   Graph_S12_c_vs_p_pmin1418->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p_pmin1418->SetLineColor(ci);
   Graph_S12_c_vs_p_pmin1418->GetXaxis()->SetTitle("p_{min} MeV");
   Graph_S12_c_vs_p_pmin1418->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p_pmin1418->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_pmin1418->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p_pmin1418->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p_pmin1418->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p_pmin1418->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p_pmin1418->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p_pmin1418->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p_pmin1418->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_pmin1418->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p_pmin1418->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p_pmin1418->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p_pmin1418->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_pmin1418->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p_pmin1418->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p_pmin1418);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_pmin_fx1419[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t S18_c_vs_p_pmin_fy1419[9] = {
   -0.2008784,
   -0.1831917,
   -0.1562114,
   -0.1400255,
   -0.1228582,
   -0.1058387,
   -0.09309516,
   -0.08429374,
   -0.07803309};
   Double_t S18_c_vs_p_pmin_fex1419[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_c_vs_p_pmin_fey1419[9] = {
   0.005645302,
   0.007957536,
   0.008016009,
   0.008231592,
   0.008642685,
   0.009350227,
   0.01054156,
   0.0127139,
   0.01790064};
   gre = new TGraphErrors(9,S18_c_vs_p_pmin_fx1419,S18_c_vs_p_pmin_fy1419,S18_c_vs_p_pmin_fex1419,S18_c_vs_p_pmin_fey1419);
   gre->SetName("S18_c_vs_p_pmin");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p_pmin1419 = new TH1F("Graph_S18_c_vs_p_pmin1419","S18",100,440,2360);
   Graph_S18_c_vs_p_pmin1419->SetMinimum(-0.2211629);
   Graph_S18_c_vs_p_pmin1419->SetMaximum(-0.04549332);
   Graph_S18_c_vs_p_pmin1419->SetDirectory(0);
   Graph_S18_c_vs_p_pmin1419->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p_pmin1419->SetLineColor(ci);
   Graph_S18_c_vs_p_pmin1419->GetXaxis()->SetTitle("p_{min} MeV");
   Graph_S18_c_vs_p_pmin1419->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p_pmin1419->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_pmin1419->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p_pmin1419->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p_pmin1419->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p_pmin1419->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p_pmin1419->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p_pmin1419->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p_pmin1419->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_pmin1419->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p_pmin1419->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p_pmin1419->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p_pmin1419->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_pmin1419->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p_pmin1419->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p_pmin1419);
   
   gre->Draw("p ");
   
   Double_t S12S18_c_vs_p_pmin_fx1420[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t S12S18_c_vs_p_pmin_fy1420[9] = {
   -0.2293005,
   -0.2087151,
   -0.1776777,
   -0.1539363,
   -0.1328747,
   -0.1153438,
   -0.1001595,
   -0.08563885,
   -0.07494671};
   Double_t S12S18_c_vs_p_pmin_fex1420[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12S18_c_vs_p_pmin_fey1420[9] = {
   0.003980081,
   0.005610132,
   0.005648548,
   0.005797905,
   0.006088256,
   0.006582745,
   0.007423822,
   0.008950456,
   0.01258155};
   gre = new TGraphErrors(9,S12S18_c_vs_p_pmin_fx1420,S12S18_c_vs_p_pmin_fy1420,S12S18_c_vs_p_pmin_fex1420,S12S18_c_vs_p_pmin_fey1420);
   gre->SetName("S12S18_c_vs_p_pmin");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_c_vs_p_pmin1420 = new TH1F("Graph_S12S18_c_vs_p_pmin1420","S12S18",100,440,2360);
   Graph_S12S18_c_vs_p_pmin1420->SetMinimum(-0.2503722);
   Graph_S12S18_c_vs_p_pmin1420->SetMaximum(-0.04527361);
   Graph_S12S18_c_vs_p_pmin1420->SetDirectory(0);
   Graph_S12S18_c_vs_p_pmin1420->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_c_vs_p_pmin1420->SetLineColor(ci);
   Graph_S12S18_c_vs_p_pmin1420->GetXaxis()->SetTitle("p_{min} MeV");
   Graph_S12S18_c_vs_p_pmin1420->GetXaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p_pmin1420->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p_pmin1420->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p_pmin1420->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_c_vs_p_pmin1420->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p_pmin1420->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12S18_c_vs_p_pmin1420->GetYaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p_pmin1420->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_c_vs_p_pmin1420->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p_pmin1420->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p_pmin1420->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_c_vs_p_pmin1420->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p_pmin1420->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p_pmin1420->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_c_vs_p_pmin1420->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_c_vs_p_pmin1420);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_c_vs_p_pmin_fx1421[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t S0S12S18_c_vs_p_pmin_fy1421[9] = {
   -0.1613923,
   -0.1459494,
   -0.1241469,
   -0.1054967,
   -0.09287142,
   -0.08083953,
   -0.06645014,
   -0.04909253,
   -0.04300507};
   Double_t S0S12S18_c_vs_p_pmin_fex1421[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0S12S18_c_vs_p_pmin_fey1421[9] = {
   0.003239698,
   0.004566095,
   0.004596546,
   0.00471718,
   0.00495203,
   0.005352448,
   0.006033409,
   0.007273073,
   0.01022168};
   gre = new TGraphErrors(9,S0S12S18_c_vs_p_pmin_fx1421,S0S12S18_c_vs_p_pmin_fy1421,S0S12S18_c_vs_p_pmin_fex1421,S0S12S18_c_vs_p_pmin_fey1421);
   gre->SetName("S0S12S18_c_vs_p_pmin");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_c_vs_p_pmin1421 = new TH1F("Graph_S0S12S18_c_vs_p_pmin1421","S0S12S18",100,440,2360);
   Graph_S0S12S18_c_vs_p_pmin1421->SetMinimum(-0.1778168);
   Graph_S0S12S18_c_vs_p_pmin1421->SetMaximum(-0.01959854);
   Graph_S0S12S18_c_vs_p_pmin1421->SetDirectory(0);
   Graph_S0S12S18_c_vs_p_pmin1421->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_c_vs_p_pmin1421->SetLineColor(ci);
   Graph_S0S12S18_c_vs_p_pmin1421->GetXaxis()->SetTitle("p_{min} MeV");
   Graph_S0S12S18_c_vs_p_pmin1421->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p_pmin1421->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p_pmin1421->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p_pmin1421->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_c_vs_p_pmin1421->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p_pmin1421->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0S12S18_c_vs_p_pmin1421->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p_pmin1421->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_c_vs_p_pmin1421->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p_pmin1421->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p_pmin1421->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_c_vs_p_pmin1421->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p_pmin1421->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p_pmin1421->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_c_vs_p_pmin1421->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_c_vs_p_pmin1421);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_c_vs_p_pmin","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_c_vs_p_pmin","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_c_vs_p_pmin","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12S18_c_vs_p_pmin","S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S0S12S18_c_vs_p_pmin","S0S12S18","lpf");
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
