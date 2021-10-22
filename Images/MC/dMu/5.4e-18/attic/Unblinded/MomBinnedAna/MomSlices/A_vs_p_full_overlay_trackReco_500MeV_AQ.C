void A_vs_p_full_overlay_trackReco_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 13:08:35 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-0.625,3378.375,0.625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_A_vs_p_fx1259[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t S0_A_vs_p_fy1259[6] = {
   -9.37984,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11};
   Double_t S0_A_vs_p_fex1259[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t S0_A_vs_p_fey1259[6] = {
   67.70206,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12};
   TGraphErrors *gre = new TGraphErrors(6,S0_A_vs_p_fx1259,S0_A_vs_p_fy1259,S0_A_vs_p_fex1259,S0_A_vs_p_fey1259);
   gre->SetName("S0_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_A_vs_p1259 = new TH1F("Graph_S0_A_vs_p1259","",100,0,3300);
   Graph_S0_A_vs_p1259->SetMinimum(-0.5);
   Graph_S0_A_vs_p1259->SetMaximum(0.5);
   Graph_S0_A_vs_p1259->SetDirectory(0);
   Graph_S0_A_vs_p1259->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_A_vs_p1259->SetLineColor(ci);
   Graph_S0_A_vs_p1259->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250 MeV");
   Graph_S0_A_vs_p1259->GetXaxis()->SetRange(1,91);
   Graph_S0_A_vs_p1259->GetXaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1259->GetXaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1259->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1259->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1259->GetXaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1259->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0_A_vs_p1259->GetYaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1259->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_A_vs_p1259->GetYaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1259->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1259->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1259->GetYaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1259->GetZaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1259->GetZaxis()->SetTitleOffset(1);
   Graph_S0_A_vs_p1259->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_A_vs_p1259);
   
   gre->Draw("ap");
   
   Double_t S12_A_vs_p_fx1260[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t S12_A_vs_p_fy1260[6] = {
   0.1239871,
   0.2675572,
   0.1196105,
   0.1617478,
   0.1232423,
   0.09351699};
   Double_t S12_A_vs_p_fex1260[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t S12_A_vs_p_fey1260[6] = {
   0.1093606,
   0.03818885,
   0.03054251,
   0.02747075,
   0.02914445,
   0.03621984};
   gre = new TGraphErrors(6,S12_A_vs_p_fx1260,S12_A_vs_p_fy1260,S12_A_vs_p_fex1260,S12_A_vs_p_fey1260);
   gre->SetName("S12_A_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_A_vs_p1260 = new TH1F("Graph_S12_A_vs_p1260","S12",100,0,3300);
   Graph_S12_A_vs_p1260->SetMinimum(0.01316382);
   Graph_S12_A_vs_p1260->SetMaximum(0.334858);
   Graph_S12_A_vs_p1260->SetDirectory(0);
   Graph_S12_A_vs_p1260->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_A_vs_p1260->SetLineColor(ci);
   Graph_S12_A_vs_p1260->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250 MeV");
   Graph_S12_A_vs_p1260->GetXaxis()->SetRange(1,91);
   Graph_S12_A_vs_p1260->GetXaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1260->GetXaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1260->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1260->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_A_vs_p1260->GetXaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1260->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S12_A_vs_p1260->GetYaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1260->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_A_vs_p1260->GetYaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1260->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1260->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_A_vs_p1260->GetYaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1260->GetZaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1260->GetZaxis()->SetTitleOffset(1);
   Graph_S12_A_vs_p1260->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_A_vs_p1260);
   
   gre->Draw("p ");
   
   Double_t S18_A_vs_p_fx1261[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t S18_A_vs_p_fy1261[6] = {
   -0.7162098,
   0.2747434,
   -0.1895688,
   0.313103,
   0.2898705,
   0.3495863};
   Double_t S18_A_vs_p_fex1261[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t S18_A_vs_p_fey1261[6] = {
   0.9834645,
   0.2592331,
   0.1549144,
   0.1162896,
   0.1098569,
   0.0984058};
   gre = new TGraphErrors(6,S18_A_vs_p_fx1261,S18_A_vs_p_fy1261,S18_A_vs_p_fex1261,S18_A_vs_p_fey1261);
   gre->SetName("S18_A_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_A_vs_p1261 = new TH1F("Graph_S18_A_vs_p1261","S18",100,0,3300);
   Graph_S18_A_vs_p1261->SetMinimum(-1.923039);
   Graph_S18_A_vs_p1261->SetMaximum(0.7573416);
   Graph_S18_A_vs_p1261->SetDirectory(0);
   Graph_S18_A_vs_p1261->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_A_vs_p1261->SetLineColor(ci);
   Graph_S18_A_vs_p1261->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250 MeV");
   Graph_S18_A_vs_p1261->GetXaxis()->SetRange(1,91);
   Graph_S18_A_vs_p1261->GetXaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1261->GetXaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1261->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1261->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_A_vs_p1261->GetXaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1261->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S18_A_vs_p1261->GetYaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1261->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_A_vs_p1261->GetYaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1261->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1261->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_A_vs_p1261->GetYaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1261->GetZaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1261->GetZaxis()->SetTitleOffset(1);
   Graph_S18_A_vs_p1261->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_A_vs_p1261);
   
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
