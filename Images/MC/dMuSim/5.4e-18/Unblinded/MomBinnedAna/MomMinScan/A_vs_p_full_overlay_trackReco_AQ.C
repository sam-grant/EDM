void A_vs_p_full_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 17 13:47:59 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-535,-0.31875,3335,0.36875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_A_vs_p_fx1426[15] = {
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
   Double_t S0_A_vs_p_fy1426[15] = {
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
   Double_t S0_A_vs_p_fex1426[15] = {
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
   Double_t S0_A_vs_p_fey1426[15] = {
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
   TGraphErrors *gre = new TGraphErrors(15,S0_A_vs_p_fx1426,S0_A_vs_p_fy1426,S0_A_vs_p_fex1426,S0_A_vs_p_fey1426);
   gre->SetName("S0_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_A_vs_p1426 = new TH1F("Graph_S0_A_vs_p1426","",100,-400,3200);
   Graph_S0_A_vs_p1426->SetMinimum(-0.25);
   Graph_S0_A_vs_p1426->SetMaximum(0.3);
   Graph_S0_A_vs_p1426->SetDirectory(0);
   Graph_S0_A_vs_p1426->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_A_vs_p1426->SetLineColor(ci);
   Graph_S0_A_vs_p1426->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S0_A_vs_p1426->GetXaxis()->SetRange(8,93);
   Graph_S0_A_vs_p1426->GetXaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1426->GetXaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1426->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1426->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1426->GetXaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1426->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0_A_vs_p1426->GetYaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1426->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_A_vs_p1426->GetYaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1426->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1426->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1426->GetYaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1426->GetZaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1426->GetZaxis()->SetTitleOffset(1);
   Graph_S0_A_vs_p1426->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_A_vs_p1426);
   
   gre->Draw("ap");
   
   Double_t S12_A_vs_p_fx1427[15] = {
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
   Double_t S12_A_vs_p_fy1427[15] = {
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
   Double_t S12_A_vs_p_fex1427[15] = {
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
   Double_t S12_A_vs_p_fey1427[15] = {
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
   gre = new TGraphErrors(15,S12_A_vs_p_fx1427,S12_A_vs_p_fy1427,S12_A_vs_p_fex1427,S12_A_vs_p_fey1427);
   gre->SetName("S12_A_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_A_vs_p1427 = new TH1F("Graph_S12_A_vs_p1427","S12",100,-400,3200);
   Graph_S12_A_vs_p1427->SetMinimum(-0.1361569);
   Graph_S12_A_vs_p1427->SetMaximum(0.2381122);
   Graph_S12_A_vs_p1427->SetDirectory(0);
   Graph_S12_A_vs_p1427->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_A_vs_p1427->SetLineColor(ci);
   Graph_S12_A_vs_p1427->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S12_A_vs_p1427->GetXaxis()->SetRange(8,93);
   Graph_S12_A_vs_p1427->GetXaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1427->GetXaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1427->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1427->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_A_vs_p1427->GetXaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1427->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S12_A_vs_p1427->GetYaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1427->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_A_vs_p1427->GetYaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1427->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1427->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_A_vs_p1427->GetYaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1427->GetZaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1427->GetZaxis()->SetTitleOffset(1);
   Graph_S12_A_vs_p1427->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_A_vs_p1427);
   
   gre->Draw("p ");
   
   Double_t S18_A_vs_p_fx1428[15] = {
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
   Double_t S18_A_vs_p_fy1428[15] = {
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
   Double_t S18_A_vs_p_fex1428[15] = {
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
   Double_t S18_A_vs_p_fey1428[15] = {
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
   gre = new TGraphErrors(15,S18_A_vs_p_fx1428,S18_A_vs_p_fy1428,S18_A_vs_p_fex1428,S18_A_vs_p_fey1428);
   gre->SetName("S18_A_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_A_vs_p1428 = new TH1F("Graph_S18_A_vs_p1428","S18",100,-400,3200);
   Graph_S18_A_vs_p1428->SetMinimum(-0.1135132);
   Graph_S18_A_vs_p1428->SetMaximum(0.2071627);
   Graph_S18_A_vs_p1428->SetDirectory(0);
   Graph_S18_A_vs_p1428->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_A_vs_p1428->SetLineColor(ci);
   Graph_S18_A_vs_p1428->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S18_A_vs_p1428->GetXaxis()->SetRange(8,93);
   Graph_S18_A_vs_p1428->GetXaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1428->GetXaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1428->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1428->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_A_vs_p1428->GetXaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1428->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S18_A_vs_p1428->GetYaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1428->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_A_vs_p1428->GetYaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1428->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1428->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_A_vs_p1428->GetYaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1428->GetZaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1428->GetZaxis()->SetTitleOffset(1);
   Graph_S18_A_vs_p1428->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_A_vs_p1428);
   
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
