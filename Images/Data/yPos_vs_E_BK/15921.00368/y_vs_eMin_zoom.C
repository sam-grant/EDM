void y_vs_eMin_zoom()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr 23 15:56:46 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-433.125,71.8125,3568.125,78.6875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1004[7] = {
   0,
   500,
   1000,
   1500,
   2000,
   2500,
   3000};
   Double_t Graph0_fy1004[7] = {
   74.74583,
   74.83428,
   74.89947,
   74.81684,
   74.79933,
   74.70536,
   73.26161};
   Double_t Graph0_fex1004[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1004[7] = {
   0.05556609,
   0.0639482,
   0.07348388,
   0.08858056,
   0.1180248,
   0.1827266,
   0.2392792};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1004,Graph0_fy1004,Graph0_fex1004,Graph0_fey1004);
   gre->SetName("Graph0");
   gre->SetTitle(";E_{min} [MeV];#LT y_{calo} #GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01004 = new TH1F("Graph_Graph01004","",100,0,3300);
   Graph_Graph01004->SetMinimum(72.5);
   Graph_Graph01004->SetMaximum(78);
   Graph_Graph01004->SetDirectory(0);
   Graph_Graph01004->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01004->SetLineColor(ci);
   Graph_Graph01004->GetXaxis()->SetTitle("E_{min} [MeV]");
   Graph_Graph01004->GetXaxis()->SetRange(0,96);
   Graph_Graph01004->GetXaxis()->CenterTitle(true);
   Graph_Graph01004->GetXaxis()->SetLabelFont(42);
   Graph_Graph01004->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01004->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01004->GetXaxis()->SetTitleFont(42);
   Graph_Graph01004->GetYaxis()->SetTitle("#LT y_{calo} #GT [mm]");
   Graph_Graph01004->GetYaxis()->CenterTitle(true);
   Graph_Graph01004->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01004->GetYaxis()->SetLabelFont(42);
   Graph_Graph01004->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01004->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01004->GetYaxis()->SetTitleFont(42);
   Graph_Graph01004->GetZaxis()->SetLabelFont(42);
   Graph_Graph01004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01004);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1005[7] = {
   0,
   500,
   1000,
   1500,
   2000,
   2500,
   3000};
   Double_t Graph1_fy1005[7] = {
   75.46683,
   75.44186,
   75.51057,
   75.39189,
   75.63231,
   76.48541,
   74.68263};
   Double_t Graph1_fex1005[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1005[7] = {
   0.08286577,
   0.09185756,
   0.105654,
   0.1314654,
   0.1908391,
   0.3976255,
   1.757164};
   gre = new TGraphErrors(7,Graph1_fx1005,Graph1_fy1005,Graph1_fex1005,Graph1_fey1005);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11005 = new TH1F("Graph_Graph11005","Graph",100,0,3300);
   Graph_Graph11005->SetMinimum(72.52971);
   Graph_Graph11005->SetMaximum(77.27879);
   Graph_Graph11005->SetDirectory(0);
   Graph_Graph11005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11005->SetLineColor(ci);
   Graph_Graph11005->GetXaxis()->SetLabelFont(42);
   Graph_Graph11005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11005->GetXaxis()->SetTitleFont(42);
   Graph_Graph11005->GetYaxis()->SetLabelFont(42);
   Graph_Graph11005->GetYaxis()->SetTitleFont(42);
   Graph_Graph11005->GetZaxis()->SetLabelFont(42);
   Graph_Graph11005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11005);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1006[7] = {
   0,
   500,
   1000,
   1500,
   2000,
   2500,
   3000};
   Double_t Graph2_fy1006[7] = {
   75.4029,
   75.4075,
   75.4741,
   75.35945,
   75.60684,
   76.46484,
   75.29452};
   Double_t Graph2_fex1006[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1006[7] = {
   0.08776322,
   0.09725012,
   0.1118435,
   0.1390471,
   0.2015198,
   0.4206412,
   1.901801};
   gre = new TGraphErrors(7,Graph2_fx1006,Graph2_fy1006,Graph2_fex1006,Graph2_fey1006);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21006 = new TH1F("Graph_Graph21006","Graph",100,0,3300);
   Graph_Graph21006->SetMinimum(73.01236);
   Graph_Graph21006->SetMaximum(77.57668);
   Graph_Graph21006->SetDirectory(0);
   Graph_Graph21006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21006->SetLineColor(ci);
   Graph_Graph21006->GetXaxis()->SetLabelFont(42);
   Graph_Graph21006->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21006->GetXaxis()->SetTitleFont(42);
   Graph_Graph21006->GetYaxis()->SetLabelFont(42);
   Graph_Graph21006->GetYaxis()->SetTitleFont(42);
   Graph_Graph21006->GetZaxis()->SetLabelFont(42);
   Graph_Graph21006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21006);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.45,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","t > 0 #mus","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","t > 24 #mus","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","t > 30 #mus","lpf");
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
