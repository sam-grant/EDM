void A_vs_p_full_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May 21 13:26:32 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-419.65,-0.31875,3468.85,0.36875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_A_vs_p_fx1561[15] = {
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
   Double_t S0_A_vs_p_fy1561[15] = {
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
   Double_t S0_A_vs_p_fex1561[15] = {
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
   Double_t S0_A_vs_p_fey1561[15] = {
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
   TGraphErrors *gre = new TGraphErrors(15,S0_A_vs_p_fx1561,S0_A_vs_p_fy1561,S0_A_vs_p_fex1561,S0_A_vs_p_fey1561);
   gre->SetName("S0_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_A_vs_p1561 = new TH1F("Graph_S0_A_vs_p1561","",100,0,3080);
   Graph_S0_A_vs_p1561->SetMinimum(-0.25);
   Graph_S0_A_vs_p1561->SetMaximum(0.3);
   Graph_S0_A_vs_p1561->SetDirectory(0);
   Graph_S0_A_vs_p1561->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_A_vs_p1561->SetLineColor(ci);
   Graph_S0_A_vs_p1561->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S0_A_vs_p1561->GetXaxis()->SetRange(0,100);
   Graph_S0_A_vs_p1561->GetXaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1561->GetXaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1561->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1561->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1561->GetXaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1561->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0_A_vs_p1561->GetYaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1561->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_A_vs_p1561->GetYaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1561->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1561->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1561->GetYaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1561->GetZaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1561->GetZaxis()->SetTitleOffset(1);
   Graph_S0_A_vs_p1561->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_A_vs_p1561);
   
   gre->Draw("ap");
   
   Double_t S12_A_vs_p_fx1562[15] = {
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
   Double_t S12_A_vs_p_fy1562[15] = {
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
   Double_t S12_A_vs_p_fex1562[15] = {
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
   Double_t S12_A_vs_p_fey1562[15] = {
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
   gre = new TGraphErrors(15,S12_A_vs_p_fx1562,S12_A_vs_p_fy1562,S12_A_vs_p_fex1562,S12_A_vs_p_fey1562);
   gre->SetName("S12_A_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_A_vs_p1562 = new TH1F("Graph_S12_A_vs_p1562","S12",100,0,3080);
   Graph_S12_A_vs_p1562->SetMinimum(-0.1361569);
   Graph_S12_A_vs_p1562->SetMaximum(0.2381122);
   Graph_S12_A_vs_p1562->SetDirectory(0);
   Graph_S12_A_vs_p1562->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_A_vs_p1562->SetLineColor(ci);
   Graph_S12_A_vs_p1562->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S12_A_vs_p1562->GetXaxis()->SetRange(0,100);
   Graph_S12_A_vs_p1562->GetXaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1562->GetXaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1562->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1562->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_A_vs_p1562->GetXaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1562->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S12_A_vs_p1562->GetYaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1562->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_A_vs_p1562->GetYaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1562->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1562->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_A_vs_p1562->GetYaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1562->GetZaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1562->GetZaxis()->SetTitleOffset(1);
   Graph_S12_A_vs_p1562->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_A_vs_p1562);
   
   gre->Draw("p ");
   
   Double_t S18_A_vs_p_fx1563[15] = {
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
   Double_t S18_A_vs_p_fy1563[15] = {
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
   Double_t S18_A_vs_p_fex1563[15] = {
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
   Double_t S18_A_vs_p_fey1563[15] = {
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
   gre = new TGraphErrors(15,S18_A_vs_p_fx1563,S18_A_vs_p_fy1563,S18_A_vs_p_fex1563,S18_A_vs_p_fey1563);
   gre->SetName("S18_A_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_A_vs_p1563 = new TH1F("Graph_S18_A_vs_p1563","S18",100,0,3080);
   Graph_S18_A_vs_p1563->SetMinimum(-0.1135132);
   Graph_S18_A_vs_p1563->SetMaximum(0.2071627);
   Graph_S18_A_vs_p1563->SetDirectory(0);
   Graph_S18_A_vs_p1563->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_A_vs_p1563->SetLineColor(ci);
   Graph_S18_A_vs_p1563->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S18_A_vs_p1563->GetXaxis()->SetRange(0,100);
   Graph_S18_A_vs_p1563->GetXaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1563->GetXaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1563->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1563->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_A_vs_p1563->GetXaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1563->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S18_A_vs_p1563->GetYaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1563->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_A_vs_p1563->GetYaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1563->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1563->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_A_vs_p1563->GetYaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1563->GetZaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1563->GetZaxis()->SetTitleOffset(1);
   Graph_S18_A_vs_p1563->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_A_vs_p1563);
   
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
