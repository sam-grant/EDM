void A_vs_p_full_overlay_trackReco_equalStats_500e3_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 19 17:10:34 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-419.65,-0.31875,3468.85,0.36875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_A_vs_p_fx1404[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t S0_A_vs_p_fy1404[15] = {
   0.1499026,
   0.1500304,
   0.1559951,
   0.1793103,
   0.1786679,
   0.1588242,
   0.1518354,
   0.1290085,
   0.1227035,
   0.1231032,
   0.1221579,
   0.106794,
   0.07037769,
   0.06267378,
   0.1312521};
   Double_t S0_A_vs_p_fex1404[15] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_A_vs_p_fey1404[15] = {
   0.01779706,
   0.01779665,
   0.01774581,
   0.01745325,
   0.01721895,
   0.01720209,
   0.01743562,
   0.01794128,
   0.0187871,
   0.02001553,
   0.02182314,
   0.02435724,
   0.02813355,
   0.03429063,
   0.05298344};
   TGraphErrors *gre = new TGraphErrors(15,S0_A_vs_p_fx1404,S0_A_vs_p_fy1404,S0_A_vs_p_fex1404,S0_A_vs_p_fey1404);
   gre->SetName("S0_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_A_vs_p1404 = new TH1F("Graph_S0_A_vs_p1404","",100,0,3080);
   Graph_S0_A_vs_p1404->SetMinimum(-0.25);
   Graph_S0_A_vs_p1404->SetMaximum(0.3);
   Graph_S0_A_vs_p1404->SetDirectory(0);
   Graph_S0_A_vs_p1404->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_A_vs_p1404->SetLineColor(ci);
   Graph_S0_A_vs_p1404->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S0_A_vs_p1404->GetXaxis()->SetRange(0,100);
   Graph_S0_A_vs_p1404->GetXaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1404->GetXaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1404->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1404->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1404->GetXaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1404->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0_A_vs_p1404->GetYaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1404->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_A_vs_p1404->GetYaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1404->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1404->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1404->GetYaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1404->GetZaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1404->GetZaxis()->SetTitleOffset(1);
   Graph_S0_A_vs_p1404->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_A_vs_p1404);
   
   gre->Draw("ap");
   
   Double_t S12_A_vs_p_fx1405[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t S12_A_vs_p_fy1405[15] = {
   0.1781517,
   0.1788238,
   0.1800454,
   0.1892259,
   0.1666333,
   0.1314406,
   0.1414576,
   0.1589993,
   0.1371668,
   0.1261717,
   0.1128671,
   0.104016,
   0.1073738,
   0.06271902,
   -0.04620357};
   Double_t S12_A_vs_p_fex1405[15] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_A_vs_p_fey1405[15] = {
   0.01801939,
   0.01801926,
   0.01797209,
   0.01769724,
   0.01752063,
   0.01757798,
   0.01789281,
   0.01851289,
   0.01954267,
   0.02108513,
   0.0232839,
   0.02633797,
   0.03072085,
   0.03765942,
   0.05876427};
   gre = new TGraphErrors(15,S12_A_vs_p_fx1405,S12_A_vs_p_fy1405,S12_A_vs_p_fex1405,S12_A_vs_p_fey1405);
   gre->SetName("S12_A_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_A_vs_p1405 = new TH1F("Graph_S12_A_vs_p1405","S12",100,0,3080);
   Graph_S12_A_vs_p1405->SetMinimum(-0.1361569);
   Graph_S12_A_vs_p1405->SetMaximum(0.2381122);
   Graph_S12_A_vs_p1405->SetDirectory(0);
   Graph_S12_A_vs_p1405->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_A_vs_p1405->SetLineColor(ci);
   Graph_S12_A_vs_p1405->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S12_A_vs_p1405->GetXaxis()->SetRange(0,100);
   Graph_S12_A_vs_p1405->GetXaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1405->GetXaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1405->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1405->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_A_vs_p1405->GetXaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1405->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S12_A_vs_p1405->GetYaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1405->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_A_vs_p1405->GetYaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1405->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1405->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_A_vs_p1405->GetYaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1405->GetZaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1405->GetZaxis()->SetTitleOffset(1);
   Graph_S12_A_vs_p1405->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_A_vs_p1405);
   
   gre->Draw("p ");
   
   Double_t S18_A_vs_p_fx1406[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t S18_A_vs_p_fy1406[15] = {
   0.1312192,
   0.1321253,
   0.1304023,
   0.1440798,
   0.1470276,
   0.1498308,
   0.162263,
   0.1541737,
   0.1419309,
   0.1394733,
   0.119022,
   0.1070043,
   0.1126408,
   0.08942889,
   -0.02513215};
   Double_t S18_A_vs_p_fex1406[15] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_A_vs_p_fey1406[15] = {
   0.01819188,
   0.018192,
   0.01814146,
   0.01788585,
   0.01771705,
   0.01780766,
   0.01817673,
   0.01888148,
   0.01998705,
   0.0216491,
   0.02395093,
   0.02716882,
   0.03161876,
   0.03860063,
   0.06165802};
   gre = new TGraphErrors(15,S18_A_vs_p_fx1406,S18_A_vs_p_fy1406,S18_A_vs_p_fex1406,S18_A_vs_p_fey1406);
   gre->SetName("S18_A_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_A_vs_p1406 = new TH1F("Graph_S18_A_vs_p1406","S18",100,0,3080);
   Graph_S18_A_vs_p1406->SetMinimum(-0.1135132);
   Graph_S18_A_vs_p1406->SetMaximum(0.2071627);
   Graph_S18_A_vs_p1406->SetDirectory(0);
   Graph_S18_A_vs_p1406->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_A_vs_p1406->SetLineColor(ci);
   Graph_S18_A_vs_p1406->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S18_A_vs_p1406->GetXaxis()->SetRange(0,100);
   Graph_S18_A_vs_p1406->GetXaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1406->GetXaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1406->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1406->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_A_vs_p1406->GetXaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1406->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S18_A_vs_p1406->GetYaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1406->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_A_vs_p1406->GetYaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1406->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1406->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_A_vs_p1406->GetYaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1406->GetZaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1406->GetZaxis()->SetTitleOffset(1);
   Graph_S18_A_vs_p1406->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_A_vs_p1406);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_A_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_A_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_A_vs_p","S18","lpf");
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
