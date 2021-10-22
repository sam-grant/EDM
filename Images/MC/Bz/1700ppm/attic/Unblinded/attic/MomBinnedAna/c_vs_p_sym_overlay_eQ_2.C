void c_vs_p_sym_overlay_eQ_2()
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
   
   Double_t S0_c_vs_p_sym_fx1427[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t S0_c_vs_p_sym_fy1427[6] = {
   -0.02868432,
   -0.02337472,
   -0.01974982,
   -0.01496231,
   -0.03134866,
   -0.04401628};
   Double_t S0_c_vs_p_sym_fex1427[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_c_vs_p_sym_fey1427[6] = {
   0.005576547,
   0.00785824,
   0.007907924,
   0.008780104,
   0.01083461,
   0.01293762};
   TGraphErrors *gre = new TGraphErrors(6,S0_c_vs_p_sym_fx1427,S0_c_vs_p_sym_fy1427,S0_c_vs_p_sym_fex1427,S0_c_vs_p_sym_fey1427);
   gre->SetName("S0_c_vs_p_sym");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_c_vs_p_sym1427 = new TH1F("Graph_S0_c_vs_p_sym1427","",100,0.5,6.5);
   Graph_S0_c_vs_p_sym1427->SetMinimum(-2);
   Graph_S0_c_vs_p_sym1427->SetMaximum(2);
   Graph_S0_c_vs_p_sym1427->SetDirectory(0);
   Graph_S0_c_vs_p_sym1427->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_c_vs_p_sym1427->SetLineColor(ci);
   Graph_S0_c_vs_p_sym1427->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_S0_c_vs_p_sym1427->GetXaxis()->CenterTitle(true);
   Graph_S0_c_vs_p_sym1427->GetXaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_sym1427->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p_sym1427->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p_sym1427->GetXaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p_sym1427->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0_c_vs_p_sym1427->GetYaxis()->CenterTitle(true);
   Graph_S0_c_vs_p_sym1427->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_c_vs_p_sym1427->GetYaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_sym1427->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_c_vs_p_sym1427->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_c_vs_p_sym1427->GetYaxis()->SetTitleFont(42);
   Graph_S0_c_vs_p_sym1427->GetZaxis()->SetLabelFont(42);
   Graph_S0_c_vs_p_sym1427->GetZaxis()->SetTitleOffset(1);
   Graph_S0_c_vs_p_sym1427->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_c_vs_p_sym1427);
   
   gre->Draw("ap");
   
   Double_t S12_c_vs_p_sym_fx1428[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t S12_c_vs_p_sym_fy1428[6] = {
   -0.2572881,
   -0.2338526,
   -0.1987908,
   -0.1785924,
   -0.1672214,
   -0.1621917};
   Double_t S12_c_vs_p_sym_fex1428[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_c_vs_p_sym_fey1428[6] = {
   0.005611996,
   0.007910198,
   0.007960404,
   0.008837253,
   0.01090677,
   0.01301409};
   gre = new TGraphErrors(6,S12_c_vs_p_sym_fx1428,S12_c_vs_p_sym_fy1428,S12_c_vs_p_sym_fex1428,S12_c_vs_p_sym_fey1428);
   gre->SetName("S12_c_vs_p_sym");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p_sym1428 = new TH1F("Graph_S12_c_vs_p_sym1428","S12",100,0.5,6.5);
   Graph_S12_c_vs_p_sym1428->SetMinimum(-0.2742723);
   Graph_S12_c_vs_p_sym1428->SetMaximum(-0.1378054);
   Graph_S12_c_vs_p_sym1428->SetDirectory(0);
   Graph_S12_c_vs_p_sym1428->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p_sym1428->SetLineColor(ci);
   Graph_S12_c_vs_p_sym1428->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_S12_c_vs_p_sym1428->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p_sym1428->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_sym1428->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p_sym1428->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p_sym1428->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p_sym1428->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12_c_vs_p_sym1428->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p_sym1428->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p_sym1428->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_sym1428->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p_sym1428->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_c_vs_p_sym1428->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p_sym1428->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p_sym1428->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p_sym1428->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p_sym1428);
   
   gre->Draw("p ");
   
   Double_t S18_c_vs_p_sym_fx1429[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t S18_c_vs_p_sym_fy1429[6] = {
   -0.2008784,
   -0.1831917,
   -0.1562114,
   -0.1465354,
   -0.1387201,
   -0.1323024};
   Double_t S18_c_vs_p_sym_fex1429[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_c_vs_p_sym_fey1429[6] = {
   0.005645302,
   0.007957536,
   0.008016009,
   0.008900388,
   0.01098361,
   0.01313214};
   gre = new TGraphErrors(6,S18_c_vs_p_sym_fx1429,S18_c_vs_p_sym_fy1429,S18_c_vs_p_sym_fex1429,S18_c_vs_p_sym_fey1429);
   gre->SetName("S18_c_vs_p_sym");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_c_vs_p_sym1429 = new TH1F("Graph_S18_c_vs_p_sym1429","S18",100,0.5,6.5);
   Graph_S18_c_vs_p_sym1429->SetMinimum(-0.2152591);
   Graph_S18_c_vs_p_sym1429->SetMaximum(-0.1104349);
   Graph_S18_c_vs_p_sym1429->SetDirectory(0);
   Graph_S18_c_vs_p_sym1429->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p_sym1429->SetLineColor(ci);
   Graph_S18_c_vs_p_sym1429->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_S18_c_vs_p_sym1429->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p_sym1429->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_sym1429->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p_sym1429->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p_sym1429->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p_sym1429->GetYaxis()->SetTitle("c [mrad]");
   Graph_S18_c_vs_p_sym1429->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p_sym1429->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p_sym1429->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_sym1429->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p_sym1429->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p_sym1429->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p_sym1429->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p_sym1429->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p_sym1429->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p_sym1429);
   
   gre->Draw("p ");
   
   Double_t S12S18_c_vs_p_sym_fx1430[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t S12S18_c_vs_p_sym_fy1430[6] = {
   -0.2293005,
   -0.2087151,
   -0.1776777,
   -0.1626596,
   -0.1531785,
   -0.1474986};
   Double_t S12S18_c_vs_p_sym_fex1430[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12S18_c_vs_p_sym_fey1430[6] = {
   0.003980081,
   0.005610132,
   0.005648548,
   0.006271266,
   0.007739685,
   0.009244791};
   gre = new TGraphErrors(6,S12S18_c_vs_p_sym_fx1430,S12S18_c_vs_p_sym_fy1430,S12S18_c_vs_p_sym_fex1430,S12S18_c_vs_p_sym_fey1430);
   gre->SetName("S12S18_c_vs_p_sym");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#33cc33");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_c_vs_p_sym1430 = new TH1F("Graph_S12S18_c_vs_p_sym1430","S12S18",100,0.5,6.5);
   Graph_S12S18_c_vs_p_sym1430->SetMinimum(-0.2427833);
   Graph_S12S18_c_vs_p_sym1430->SetMaximum(-0.1287512);
   Graph_S12S18_c_vs_p_sym1430->SetDirectory(0);
   Graph_S12S18_c_vs_p_sym1430->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12S18_c_vs_p_sym1430->SetLineColor(ci);
   Graph_S12S18_c_vs_p_sym1430->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_S12S18_c_vs_p_sym1430->GetXaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p_sym1430->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p_sym1430->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p_sym1430->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_c_vs_p_sym1430->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p_sym1430->GetYaxis()->SetTitle("c [mrad]");
   Graph_S12S18_c_vs_p_sym1430->GetYaxis()->CenterTitle(true);
   Graph_S12S18_c_vs_p_sym1430->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_c_vs_p_sym1430->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p_sym1430->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_c_vs_p_sym1430->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12S18_c_vs_p_sym1430->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_c_vs_p_sym1430->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_c_vs_p_sym1430->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_c_vs_p_sym1430->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_c_vs_p_sym1430);
   
   gre->Draw("p ");
   
   Double_t S0S12S18_c_vs_p_sym_fx1431[6] = {
   1,
   2,
   3,
   4,
   5,
   6};
   Double_t S0S12S18_c_vs_p_sym_fy1431[6] = {
   -0.1613923,
   -0.1459494,
   -0.1241469,
   -0.1125908,
   -0.1118673,
   -0.1122784};
   Double_t S0S12S18_c_vs_p_sym_fex1431[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0S12S18_c_vs_p_sym_fey1431[6] = {
   0.003239698,
   0.004566095,
   0.004596546,
   0.005103379,
   0.006298135,
   0.007522565};
   gre = new TGraphErrors(6,S0S12S18_c_vs_p_sym_fx1431,S0S12S18_c_vs_p_sym_fy1431,S0S12S18_c_vs_p_sym_fex1431,S0S12S18_c_vs_p_sym_fey1431);
   gre->SetName("S0S12S18_c_vs_p_sym");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff6600");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0S12S18_c_vs_p_sym1431 = new TH1F("Graph_S0S12S18_c_vs_p_sym1431","S0S12S18",100,0.5,6.5);
   Graph_S0S12S18_c_vs_p_sym1431->SetMinimum(-0.1706196);
   Graph_S0S12S18_c_vs_p_sym1431->SetMaximum(-0.09876824);
   Graph_S0S12S18_c_vs_p_sym1431->SetDirectory(0);
   Graph_S0S12S18_c_vs_p_sym1431->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S0S12S18_c_vs_p_sym1431->SetLineColor(ci);
   Graph_S0S12S18_c_vs_p_sym1431->GetXaxis()->SetTitle("p_{sym} [MeV]");
   Graph_S0S12S18_c_vs_p_sym1431->GetXaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p_sym1431->GetXaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p_sym1431->GetXaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p_sym1431->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0S12S18_c_vs_p_sym1431->GetXaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p_sym1431->GetYaxis()->SetTitle("c [mrad]");
   Graph_S0S12S18_c_vs_p_sym1431->GetYaxis()->CenterTitle(true);
   Graph_S0S12S18_c_vs_p_sym1431->GetYaxis()->SetNdivisions(4000510);
   Graph_S0S12S18_c_vs_p_sym1431->GetYaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p_sym1431->GetYaxis()->SetTitleSize(0.04);
   Graph_S0S12S18_c_vs_p_sym1431->GetYaxis()->SetTitleOffset(1.2);
   Graph_S0S12S18_c_vs_p_sym1431->GetYaxis()->SetTitleFont(42);
   Graph_S0S12S18_c_vs_p_sym1431->GetZaxis()->SetLabelFont(42);
   Graph_S0S12S18_c_vs_p_sym1431->GetZaxis()->SetTitleOffset(1);
   Graph_S0S12S18_c_vs_p_sym1431->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0S12S18_c_vs_p_sym1431);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_c_vs_p_sym","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_c_vs_p_sym","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_c_vs_p_sym","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12S18_c_vs_p_sym","S12S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#33cc33");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S0S12S18_c_vs_p_sym","S0S12S18","lpf");
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
