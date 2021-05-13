void ABz_vs_p_pmin_overlay_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 22:57:30 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   c->SetHighLightColor(2);
   c->Range(200,-2.5,2600,2.5);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_ABz_vs_p_pmin_fx1422[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t S0_ABz_vs_p_pmin_fy1422[9] = {
   0.1757975,
   0.1729148,
   0.1665166,
   0.1640651,
   0.1733418,
   0.1780919,
   0.1567001,
   0.1464407,
   0.1304434};
   Double_t S0_ABz_vs_p_pmin_fex1422[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_ABz_vs_p_pmin_fey1422[9] = {
   0.00788421,
   0.01111046,
   0.01118106,
   0.01147009,
   0.01203618,
   0.0130012,
   0.01464652,
   0.01766834,
   0.02482369};
   TGraphErrors *gre = new TGraphErrors(9,S0_ABz_vs_p_pmin_fx1422,S0_ABz_vs_p_pmin_fy1422,S0_ABz_vs_p_pmin_fex1422,S0_ABz_vs_p_pmin_fey1422);
   gre->SetName("S0_ABz_vs_p_pmin");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_ABz_vs_p_pmin1422 = new TH1F("Graph_S0_ABz_vs_p_pmin1422","",100,440,2360);
   Graph_S0_ABz_vs_p_pmin1422->SetMinimum(-2);
   Graph_S0_ABz_vs_p_pmin1422->SetMaximum(2);
   Graph_S0_ABz_vs_p_pmin1422->SetDirectory(0);
   Graph_S0_ABz_vs_p_pmin1422->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_ABz_vs_p_pmin1422->SetLineColor(ci);
   Graph_S0_ABz_vs_p_pmin1422->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S0_ABz_vs_p_pmin1422->GetXaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p_pmin1422->GetXaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p_pmin1422->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p_pmin1422->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p_pmin1422->GetXaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p_pmin1422->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0_ABz_vs_p_pmin1422->GetYaxis()->CenterTitle(true);
   Graph_S0_ABz_vs_p_pmin1422->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_ABz_vs_p_pmin1422->GetYaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p_pmin1422->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_ABz_vs_p_pmin1422->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_ABz_vs_p_pmin1422->GetYaxis()->SetTitleFont(42);
   Graph_S0_ABz_vs_p_pmin1422->GetZaxis()->SetLabelFont(42);
   Graph_S0_ABz_vs_p_pmin1422->GetZaxis()->SetTitleOffset(1);
   Graph_S0_ABz_vs_p_pmin1422->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_ABz_vs_p_pmin1422);
   
   gre->Draw("ap");
   
   Double_t S12_ABz_vs_p_pmin_fx1423[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t S12_ABz_vs_p_pmin_fy1423[9] = {
   0.1476851,
   0.1552636,
   0.1470141,
   0.1578035,
   0.137287,
   0.1233214,
   0.1164048,
   0.09512354,
   0.1238875};
   Double_t S12_ABz_vs_p_pmin_fex1423[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_ABz_vs_p_pmin_fey1423[9] = {
   0.007931676,
   0.01118118,
   0.01125504,
   0.01154891,
   0.01213245,
   0.01310636,
   0.01479131,
   0.01784932,
   0.02508984};
   gre = new TGraphErrors(9,S12_ABz_vs_p_pmin_fx1423,S12_ABz_vs_p_pmin_fy1423,S12_ABz_vs_p_pmin_fex1423,S12_ABz_vs_p_pmin_fey1423);
   gre->SetName("S12_ABz_vs_p_pmin");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_ABz_vs_p_pmin1423 = new TH1F("Graph_S12_ABz_vs_p_pmin1423","S12",100,440,2360);
   Graph_S12_ABz_vs_p_pmin1423->SetMinimum(0.06806641);
   Graph_S12_ABz_vs_p_pmin1423->SetMaximum(0.1785603);
   Graph_S12_ABz_vs_p_pmin1423->SetDirectory(0);
   Graph_S12_ABz_vs_p_pmin1423->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_ABz_vs_p_pmin1423->SetLineColor(ci);
   Graph_S12_ABz_vs_p_pmin1423->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S12_ABz_vs_p_pmin1423->GetXaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p_pmin1423->GetXaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p_pmin1423->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p_pmin1423->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_ABz_vs_p_pmin1423->GetXaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p_pmin1423->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12_ABz_vs_p_pmin1423->GetYaxis()->CenterTitle(true);
   Graph_S12_ABz_vs_p_pmin1423->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_ABz_vs_p_pmin1423->GetYaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p_pmin1423->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_ABz_vs_p_pmin1423->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_ABz_vs_p_pmin1423->GetYaxis()->SetTitleFont(42);
   Graph_S12_ABz_vs_p_pmin1423->GetZaxis()->SetLabelFont(42);
   Graph_S12_ABz_vs_p_pmin1423->GetZaxis()->SetTitleOffset(1);
   Graph_S12_ABz_vs_p_pmin1423->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_ABz_vs_p_pmin1423);
   
   gre->Draw("p ");
   
   Double_t S18_ABz_vs_p_pmin_fx1424[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t S18_ABz_vs_p_pmin_fy1424[9] = {
   0.1441202,
   0.1427154,
   0.1395042,
   0.1347623,
   0.1308674,
   0.1291591,
   0.1265126,
   0.1238429,
   0.1365712};
   Double_t S18_ABz_vs_p_pmin_fex1424[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_ABz_vs_p_pmin_fey1424[9] = {
   0.007979725,
   0.01125121,
   0.01133618,
   0.0116422,
   0.01223146,
   0.01323725,
   0.01493397,
   0.01800827,
   0.02533482};
   gre = new TGraphErrors(9,S18_ABz_vs_p_pmin_fx1424,S18_ABz_vs_p_pmin_fy1424,S18_ABz_vs_p_pmin_fex1424,S18_ABz_vs_p_pmin_fey1424);
   gre->SetName("S18_ABz_vs_p_pmin");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_ABz_vs_p_pmin1424 = new TH1F("Graph_S18_ABz_vs_p_pmin1424","S18",100,440,2360);
   Graph_S18_ABz_vs_p_pmin1424->SetMinimum(0.1002275);
   Graph_S18_ABz_vs_p_pmin1424->SetMaximum(0.1675132);
   Graph_S18_ABz_vs_p_pmin1424->SetDirectory(0);
   Graph_S18_ABz_vs_p_pmin1424->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_ABz_vs_p_pmin1424->SetLineColor(ci);
   Graph_S18_ABz_vs_p_pmin1424->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S18_ABz_vs_p_pmin1424->GetXaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p_pmin1424->GetXaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p_pmin1424->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p_pmin1424->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_ABz_vs_p_pmin1424->GetXaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p_pmin1424->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S18_ABz_vs_p_pmin1424->GetYaxis()->CenterTitle(true);
   Graph_S18_ABz_vs_p_pmin1424->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_ABz_vs_p_pmin1424->GetYaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p_pmin1424->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_ABz_vs_p_pmin1424->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_ABz_vs_p_pmin1424->GetYaxis()->SetTitleFont(42);
   Graph_S18_ABz_vs_p_pmin1424->GetZaxis()->SetLabelFont(42);
   Graph_S18_ABz_vs_p_pmin1424->GetZaxis()->SetTitleOffset(1);
   Graph_S18_ABz_vs_p_pmin1424->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_ABz_vs_p_pmin1424);
   
   gre->Draw("p ");
   
   Double_t S12S18_ABz_vs_p_pmin_fx1425[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t S12S18_ABz_vs_p_pmin_fy1425[9] = {
   0.145955,
   0.149073,
   0.1433311,
   0.146385,
   0.1340357,
   0.1262838,
   0.1213824,
   0.1092006,
   0.1299939};
   Double_t S12S18_ABz_vs_p_pmin_fex1425[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12S18_ABz_vs_p_pmin_fey1425[9] = {
   0.005625555,
   0.007931081,
   0.007987232,
   0.008199299,
   0.008614092,
   0.009314012,
   0.01050995,
   0.01267874,
   0.01783263};
   gre = new TGraphErrors(9,S12S18_ABz_vs_p_pmin_fx1425,S12S18_ABz_vs_p_pmin_fy1425,S12S18_ABz_vs_p_pmin_fex1425,S12S18_ABz_vs_p_pmin_fey1425);
   gre->SetName("S12S18_ABz_vs_p_pmin");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_ABz_vs_p_pmin1425 = new TH1F("Graph_S12S18_ABz_vs_p_pmin1425","S12S18",100,440,2360);
   Graph_S12S18_ABz_vs_p_pmin1425->SetMinimum(0.09047363);
   Graph_S12S18_ABz_vs_p_pmin1425->SetMaximum(0.1630523);
   Graph_S12S18_ABz_vs_p_pmin1425->SetDirectory(0);
   Graph_S12S18_ABz_vs_p_pmin1425->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_ABz_vs_p_pmin1425->SetLineColor(ci);
   Graph_S12S18_ABz_vs_p_pmin1425->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S12S18_ABz_vs_p_pmin1425->GetXaxis()->CenterTitle(true);
   Graph_S12S18_ABz_vs_p_pmin1425->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_ABz_vs_p_pmin1425->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_ABz_vs_p_pmin1425->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_ABz_vs_p_pmin1425->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_ABz_vs_p_pmin1425->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S12S18_ABz_vs_p_pmin1425->GetYaxis()->CenterTitle(true);
   Graph_S12S18_ABz_vs_p_pmin1425->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_ABz_vs_p_pmin1425->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_ABz_vs_p_pmin1425->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_ABz_vs_p_pmin1425->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_ABz_vs_p_pmin1425->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_ABz_vs_p_pmin1425->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_ABz_vs_p_pmin1425->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_ABz_vs_p_pmin1425->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_ABz_vs_p_pmin1425);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_ABz_vs_p_pmin_fx1426[9] = {
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200};
   Double_t S0S12S18_ABz_vs_p_pmin_fy1426[9] = {
   0.1560197,
   0.1571613,
   0.1512402,
   0.1523979,
   0.1474396,
   0.143861,
   0.1334364,
   0.1218786,
   0.1302188};
   Double_t S0S12S18_ABz_vs_p_pmin_fex1426[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0S12S18_ABz_vs_p_pmin_fey1426[9] = {
   0.004579512,
   0.006455363,
   0.006499459,
   0.0066705,
   0.007005184,
   0.007571831,
   0.008539435,
   0.01030163,
   0.01448526};
   gre = new TGraphErrors(9,S0S12S18_ABz_vs_p_pmin_fx1426,S0S12S18_ABz_vs_p_pmin_fy1426,S0S12S18_ABz_vs_p_pmin_fex1426,S0S12S18_ABz_vs_p_pmin_fey1426);
   gre->SetName("S0S12S18_ABz_vs_p_pmin");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_ABz_vs_p_pmin1426 = new TH1F("Graph_S0S12S18_ABz_vs_p_pmin1426","S0S12S18",100,440,2360);
   Graph_S0S12S18_ABz_vs_p_pmin1426->SetMinimum(0.106373);
   Graph_S0S12S18_ABz_vs_p_pmin1426->SetMaximum(0.1688206);
   Graph_S0S12S18_ABz_vs_p_pmin1426->SetDirectory(0);
   Graph_S0S12S18_ABz_vs_p_pmin1426->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_ABz_vs_p_pmin1426->SetLineColor(ci);
   Graph_S0S12S18_ABz_vs_p_pmin1426->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S0S12S18_ABz_vs_p_pmin1426->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_ABz_vs_p_pmin1426->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p_pmin1426->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_ABz_vs_p_pmin1426->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_ABz_vs_p_pmin1426->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_ABz_vs_p_pmin1426->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_S0S12S18_ABz_vs_p_pmin1426->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_ABz_vs_p_pmin1426->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_ABz_vs_p_pmin1426->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p_pmin1426->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_ABz_vs_p_pmin1426->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_ABz_vs_p_pmin1426->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_ABz_vs_p_pmin1426->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_ABz_vs_p_pmin1426->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_ABz_vs_p_pmin1426->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_ABz_vs_p_pmin1426);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_ABz_vs_p_pmin","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_ABz_vs_p_pmin","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_ABz_vs_p_pmin","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12S18_ABz_vs_p_pmin","S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S0S12S18_ABz_vs_p_pmin","S0S12S18","lpf");
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
