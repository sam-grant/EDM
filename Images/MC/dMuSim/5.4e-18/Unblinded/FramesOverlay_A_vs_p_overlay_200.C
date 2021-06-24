void FramesOverlay_A_vs_p_overlay_200()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 22 12:39:37 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,53,800,600);
   c->Range(-420.75,-1.9875,3456.75,16.8875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t A_vs_p_fx1001[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t A_vs_p_fy1001[15] = {
   0.2765086,
   0.2863377,
   0.3663951,
   0.3020206,
   0.3077968,
   0.30105,
   0.2909888,
   0.2587531,
   0.2731997,
   0.2207432,
   0.1695144,
   0.1645208,
   0.1279487,
   0.0845198,
   0.0503497};
   Double_t A_vs_p_fex1001[15] = {
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
   Double_t A_vs_p_fey1001[15] = {
   0.0873384,
   0.03633729,
   0.02695907,
   0.02212004,
   0.019049,
   0.01690462,
   0.0153393,
   0.01415151,
   0.01321502,
   0.01247728,
   0.01189514,
   0.01146114,
   0.01115797,
   0.01102777,
   0.01131686};
   TGraphErrors *gre = new TGraphErrors(15,A_vs_p_fx1001,A_vs_p_fy1001,A_vs_p_fex1001,A_vs_p_fey1001);
   gre->SetName("A_vs_p");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV;A_{EDM} [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_A_vs_p1001 = new TH1F("Graph_A_vs_p1001","",100,0,3300);
   Graph_A_vs_p1001->SetMinimum(-0.1);
   Graph_A_vs_p1001->SetMaximum(15);
   Graph_A_vs_p1001->SetDirectory(0);
   Graph_A_vs_p1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1001->SetLineColor(ci);
   Graph_A_vs_p1001->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV");
   Graph_A_vs_p1001->GetXaxis()->SetRange(0,93);
   Graph_A_vs_p1001->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1001->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1001->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1001->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1001->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_A_vs_p1001->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1001->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1001->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1001->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_A_vs_p1001->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1001->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1001->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1001);
   
   gre->Draw("ap");
   
   Double_t A_vs_p_fx1002[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t A_vs_p_fy1002[15] = {
   0.2765086,
   0.2863377,
   0.3663951,
   0.3020207,
   0.3077968,
   0.3010491,
   0.2910149,
   0.2587274,
   0.2731962,
   0.2207432,
   0.1695144,
   0.1645061,
   0.1279686,
   0.08453437,
   0.05031923};
   Double_t A_vs_p_fex1002[15] = {
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
   Double_t A_vs_p_fey1002[15] = {
   0.0873384,
   0.03633729,
   0.02695907,
   0.02212004,
   0.019049,
   0.01690462,
   0.0153393,
   0.01415152,
   0.01321501,
   0.01247728,
   0.01189514,
   0.01146115,
   0.01115796,
   0.01102778,
   0.01131686};
   gre = new TGraphErrors(15,A_vs_p_fx1002,A_vs_p_fy1002,A_vs_p_fex1002,A_vs_p_fey1002);
   gre->SetName("A_vs_p");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV;A_{EDM} [mrad]");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_A_vs_p1002 = new TH1F("Graph_A_vs_p1002","",100,0,3300);
   Graph_A_vs_p1002->SetMinimum(0.003567193);
   Graph_A_vs_p1002->SetMaximum(0.4287893);
   Graph_A_vs_p1002->SetDirectory(0);
   Graph_A_vs_p1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1002->SetLineColor(ci);
   Graph_A_vs_p1002->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV");
   Graph_A_vs_p1002->GetXaxis()->SetRange(0,93);
   Graph_A_vs_p1002->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1002->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1002->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1002->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1002->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_A_vs_p1002->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1002->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1002->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1002->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1002->GetYaxis()->SetTitleOffset(1.2);
   Graph_A_vs_p1002->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1002->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1002->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1002);
   
   gre->Draw("p ");
   
   Double_t A_vs_p_fx1003[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t A_vs_p_fy1003[15] = {
   0.08016442,
   1.362396,
   4.085895,
   4.864728,
   7.640853,
   9.095763,
   10.78248,
   10.55449,
   12.22825,
   10.4641,
   8.459376,
   8.543845,
   7.028202,
   4.702405,
   2.592409};
   Double_t A_vs_p_fex1003[15] = {
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
   Double_t A_vs_p_fey1003[15] = {
   0.2492031,
   0.3945467,
   0.4764866,
   0.5299871,
   0.5667886,
   0.5916406,
   0.6064705,
   0.6123481,
   0.6104377,
   0.60655,
   0.6028241,
   0.6016263,
   0.6035354,
   0.6110637,
   0.6368995};
   gre = new TGraphErrors(15,A_vs_p_fx1003,A_vs_p_fy1003,A_vs_p_fex1003,A_vs_p_fey1003);
   gre->SetName("A_vs_p");
   gre->SetTitle(";e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV;A_{EDM} [mrad]");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_A_vs_p1003 = new TH1F("Graph_A_vs_p1003","",100,0,3300);
   Graph_A_vs_p1003->SetMinimum(-1.469811);
   Graph_A_vs_p1003->SetMaximum(14.13946);
   Graph_A_vs_p1003->SetDirectory(0);
   Graph_A_vs_p1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_A_vs_p1003->SetLineColor(ci);
   Graph_A_vs_p1003->GetXaxis()->SetTitle("e^{+}_{LAB} p [MeV] in range: p #minus 100 < p < p #plus 100 MeV");
   Graph_A_vs_p1003->GetXaxis()->SetRange(0,93);
   Graph_A_vs_p1003->GetXaxis()->CenterTitle(true);
   Graph_A_vs_p1003->GetXaxis()->SetLabelFont(42);
   Graph_A_vs_p1003->GetXaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_A_vs_p1003->GetXaxis()->SetTitleFont(42);
   Graph_A_vs_p1003->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_A_vs_p1003->GetYaxis()->CenterTitle(true);
   Graph_A_vs_p1003->GetYaxis()->SetNdivisions(4000510);
   Graph_A_vs_p1003->GetYaxis()->SetLabelFont(42);
   Graph_A_vs_p1003->GetYaxis()->SetTitleSize(0.04);
   Graph_A_vs_p1003->GetYaxis()->SetTitleOffset(1.2);
   Graph_A_vs_p1003->GetYaxis()->SetTitleFont(42);
   Graph_A_vs_p1003->GetZaxis()->SetLabelFont(42);
   Graph_A_vs_p1003->GetZaxis()->SetTitleOffset(1);
   Graph_A_vs_p1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_A_vs_p1003);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.59,0.69,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("A_vs_p","WORLD","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("A_vs_p","AAR","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("A_vs_p","MRF","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
