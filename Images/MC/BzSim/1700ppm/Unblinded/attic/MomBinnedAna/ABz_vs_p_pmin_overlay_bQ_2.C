void ABz_vs_p_pmin_overlay_bQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  4 16:58:31 2021) by ROOT version 6.22/08
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
   0.168234,
   0.1611321,
   0.1419193,
   0.1459441,
   0.1612638,
   0.186093,
   0.1916576,
   0.177506,
   0.1743827};
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
   0.01193865,
   0.01683363,
   0.01703968,
   0.01768601,
   0.01882339,
   0.0206298,
   0.02369443,
   0.02920858,
   0.04158424};
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
   0.1653143,
   0.1664306,
   0.156739,
   0.1751951,
   0.1598106,
   0.1272443,
   0.1289243,
   0.1245442,
   0.1636217};
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
   0.01207651,
   0.01704645,
   0.01730538,
   0.01802826,
   0.0193278,
   0.02139484,
   0.02489923,
   0.0311264,
   0.04512329};
   gre = new TGraphErrors(9,S12_ABz_vs_p_pmin_fx1423,S12_ABz_vs_p_pmin_fy1423,S12_ABz_vs_p_pmin_fex1423,S12_ABz_vs_p_pmin_fey1423);
   gre->SetName("S12_ABz_vs_p_pmin");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_ABz_vs_p_pmin1423 = new TH1F("Graph_S12_ABz_vs_p_pmin1423","S12",100,440,2360);
   Graph_S12_ABz_vs_p_pmin1423->SetMinimum(0.08188513);
   Graph_S12_ABz_vs_p_pmin1423->SetMaximum(0.2202777);
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
   0.1378211,
   0.1383285,
   0.1430734,
   0.1386604,
   0.1418645,
   0.1557964,
   0.1615957,
   0.1721734,
   0.1898209};
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
   0.01216303,
   0.01717722,
   0.01748018,
   0.01828251,
   0.01962766,
   0.02182072,
   0.02541478,
   0.03170042,
   0.04658568};
   gre = new TGraphErrors(9,S18_ABz_vs_p_pmin_fx1424,S18_ABz_vs_p_pmin_fy1424,S18_ABz_vs_p_pmin_fex1424,S18_ABz_vs_p_pmin_fey1424);
   gre->SetName("S18_ABz_vs_p_pmin");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_ABz_vs_p_pmin1424 = new TH1F("Graph_S18_ABz_vs_p_pmin1424","S18",100,440,2360);
   Graph_S18_ABz_vs_p_pmin1424->SetMinimum(0.108775);
   Graph_S18_ABz_vs_p_pmin1424->SetMaximum(0.2480094);
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
   0.1518792,
   0.1526187,
   0.1501383,
   0.1571137,
   0.1509899,
   0.141206,
   0.1451078,
   0.1476523,
   0.1771968};
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
   0.008570193,
   0.01210024,
   0.01229881,
   0.01283772,
   0.01377276,
   0.01527889,
   0.01778956,
   0.02221784,
   0.03244358};
   gre = new TGraphErrors(9,S12S18_ABz_vs_p_pmin_fx1425,S12S18_ABz_vs_p_pmin_fy1425,S12S18_ABz_vs_p_pmin_fex1425,S12S18_ABz_vs_p_pmin_fey1425);
   gre->SetName("S12S18_ABz_vs_p_pmin");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_ABz_vs_p_pmin1425 = new TH1F("Graph_S12S18_ABz_vs_p_pmin1425","S12S18",100,440,2360);
   Graph_S12S18_ABz_vs_p_pmin1425->SetMinimum(0.1170139);
   Graph_S12S18_ABz_vs_p_pmin1425->SetMaximum(0.2180609);
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
   0.1572121,
   0.1553128,
   0.1471078,
   0.1531071,
   0.1544154,
   0.1568697,
   0.1616151,
   0.1583325,
   0.1752809};
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
   0.006962497,
   0.009825919,
   0.009973176,
   0.01039012,
   0.01111617,
   0.0122797,
   0.01422874,
   0.01768773,
   0.0255953};
   gre = new TGraphErrors(9,S0S12S18_ABz_vs_p_pmin_fx1426,S0S12S18_ABz_vs_p_pmin_fy1426,S0S12S18_ABz_vs_p_pmin_fex1426,S0S12S18_ABz_vs_p_pmin_fey1426);
   gre->SetName("S0S12S18_ABz_vs_p_pmin");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_ABz_vs_p_pmin1426 = new TH1F("Graph_S0S12S18_ABz_vs_p_pmin1426","S0S12S18",100,440,2360);
   Graph_S0S12S18_ABz_vs_p_pmin1426->SetMinimum(0.1307605);
   Graph_S0S12S18_ABz_vs_p_pmin1426->SetMaximum(0.2072503);
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
