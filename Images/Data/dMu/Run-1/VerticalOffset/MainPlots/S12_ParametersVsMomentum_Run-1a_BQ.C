void S12_ParametersVsMomentum_Run-1a_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 12 19:00:35 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(125,-125.6773,3125,97.56267);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1027[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1027[9] = {
   -71.46499,
   -17.01377,
   -17.7752,
   -15.45685,
   -17.22661,
   -25.17377,
   -16.67914,
   -26.36383,
   -15.49925};
   Double_t Graph0_fex1027[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1027[9] = {
   11.21765,
   5.634952,
   4.270575,
   3.676896,
   3.503724,
   3.545352,
   3.7151,
   4.041636,
   4.640006};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1027,Graph0_fy1027,Graph0_fex1027,Graph0_fey1027);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01027 = new TH1F("Graph_Graph01027","S12",100,425,2825);
   Graph_Graph01027->SetMinimum(-103.3533);
   Graph_Graph01027->SetMaximum(75.23867);
   Graph_Graph01027->SetDirectory(0);
   Graph_Graph01027->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01027->SetLineColor(ci);
   Graph_Graph01027->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01027->GetXaxis()->CenterTitle(true);
   Graph_Graph01027->GetXaxis()->SetLabelFont(42);
   Graph_Graph01027->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01027->GetXaxis()->SetTitleFont(42);
   Graph_Graph01027->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01027->GetYaxis()->CenterTitle(true);
   Graph_Graph01027->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01027->GetYaxis()->SetLabelFont(42);
   Graph_Graph01027->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01027->GetYaxis()->SetTitleFont(42);
   Graph_Graph01027->GetZaxis()->SetLabelFont(42);
   Graph_Graph01027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01027);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1028[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph1_fy1028[9] = {
   53.50411,
   30.47038,
   28.43203,
   19.53759,
   17.6553,
   15.18956,
   12.54288,
   12.90722,
   8.000039};
   Double_t Graph1_fex1028[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1028[9] = {
   6.686826,
   3.354786,
   2.527779,
   2.157113,
   2.035458,
   2.048692,
   2.159158,
   2.331076,
   2.706334};
   gre = new TGraphErrors(9,Graph1_fx1028,Graph1_fy1028,Graph1_fex1028,Graph1_fey1028);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11028 = new TH1F("Graph_Graph11028","Graph",100,425,2825);
   Graph_Graph11028->SetMinimum(4.764335);
   Graph_Graph11028->SetMaximum(65.68066);
   Graph_Graph11028->SetDirectory(0);
   Graph_Graph11028->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11028->SetLineColor(ci);
   Graph_Graph11028->GetXaxis()->SetLabelFont(42);
   Graph_Graph11028->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11028->GetXaxis()->SetTitleFont(42);
   Graph_Graph11028->GetYaxis()->SetLabelFont(42);
   Graph_Graph11028->GetYaxis()->SetTitleFont(42);
   Graph_Graph11028->GetZaxis()->SetLabelFont(42);
   Graph_Graph11028->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11028);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1029[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph2_fy1029[9] = {
   1.051915,
   0.4106059,
   -0.2747857,
   -0.4498982,
   -0.1489098,
   0.06295275,
   0.003286074,
   0.09358704,
   0.1117778};
   Double_t Graph2_fex1029[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1029[9] = {
   0.07269308,
   0.03679315,
   0.02803228,
   0.02428017,
   0.0232744,
   0.02362311,
   0.02482476,
   0.02707161,
   0.0310312};
   gre = new TGraphErrors(9,Graph2_fx1029,Graph2_fy1029,Graph2_fex1029,Graph2_fey1029);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21029 = new TH1F("Graph_Graph21029","Graph",100,425,2825);
   Graph_Graph21029->SetMinimum(-0.634057);
   Graph_Graph21029->SetMaximum(1.284487);
   Graph_Graph21029->SetDirectory(0);
   Graph_Graph21029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21029->SetLineColor(ci);
   Graph_Graph21029->GetXaxis()->SetLabelFont(42);
   Graph_Graph21029->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21029->GetXaxis()->SetTitleFont(42);
   Graph_Graph21029->GetYaxis()->SetLabelFont(42);
   Graph_Graph21029->GetYaxis()->SetTitleFont(42);
   Graph_Graph21029->GetZaxis()->SetLabelFont(42);
   Graph_Graph21029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21029);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.625,0.75,0.875,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Data: Run-1a","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","A","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","B","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","c","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
