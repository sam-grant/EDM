void S12S18_ParametersVsMomentum_Run-1a_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 29 09:35:53 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(125,-75.91573,3125,73.33539);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1089[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1089[9] = {
   -40.96711,
   -14.50668,
   -10.63349,
   -14.40976,
   -16.86708,
   -19.86578,
   -16.99694,
   -18.99391,
   -15.65575};
   Double_t Graph0_fex1089[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1089[9] = {
   7.825384,
   3.994304,
   3.039418,
   2.641128,
   2.530039,
   2.585707,
   2.737593,
   2.99074,
   3.409756};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1089,Graph0_fy1089,Graph0_fex1089,Graph0_fey1089);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01089 = new TH1F("Graph_Graph01089","S12S18",100,425,2825);
   Graph_Graph01089->SetMinimum(-60.99061);
   Graph_Graph01089->SetMaximum(58.41028);
   Graph_Graph01089->SetDirectory(0);
   Graph_Graph01089->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01089->SetLineColor(ci);
   Graph_Graph01089->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01089->GetXaxis()->CenterTitle(true);
   Graph_Graph01089->GetXaxis()->SetLabelFont(42);
   Graph_Graph01089->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01089->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01089->GetXaxis()->SetTitleFont(42);
   Graph_Graph01089->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01089->GetYaxis()->CenterTitle(true);
   Graph_Graph01089->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01089->GetYaxis()->SetLabelFont(42);
   Graph_Graph01089->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01089->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01089->GetYaxis()->SetTitleFont(42);
   Graph_Graph01089->GetZaxis()->SetLabelFont(42);
   Graph_Graph01089->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01089->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01089);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1090[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph1_fy1090[9] = {
   42.28897,
   30.51939,
   24.38079,
   19.00244,
   18.22039,
   13.11788,
   12.61765,
   9.367771,
   4.789598};
   Double_t Graph1_fex1090[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1090[9] = {
   4.439255,
   2.256584,
   1.706031,
   1.47195,
   1.399235,
   1.424043,
   1.508903,
   1.638092,
   1.901738};
   gre = new TGraphErrors(9,Graph1_fx1090,Graph1_fy1090,Graph1_fex1090,Graph1_fey1090);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11090 = new TH1F("Graph_Graph11090","Graph",100,425,2825);
   Graph_Graph11090->SetMinimum(2.599074);
   Graph_Graph11090->SetMaximum(51.11226);
   Graph_Graph11090->SetDirectory(0);
   Graph_Graph11090->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11090->SetLineColor(ci);
   Graph_Graph11090->GetXaxis()->SetLabelFont(42);
   Graph_Graph11090->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11090->GetXaxis()->SetTitleFont(42);
   Graph_Graph11090->GetYaxis()->SetLabelFont(42);
   Graph_Graph11090->GetYaxis()->SetTitleFont(42);
   Graph_Graph11090->GetZaxis()->SetLabelFont(42);
   Graph_Graph11090->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11090->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11090);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1091[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph2_fy1091[9] = {
   0.847241,
   0.3198485,
   -0.3878717,
   -0.4370952,
   -0.1779539,
   -0.0007194727,
   -0.003700606,
   0.03987079,
   0.06306661};
   Double_t Graph2_fex1091[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1091[9] = {
   0.05042215,
   0.02587192,
   0.01977056,
   0.0172565,
   0.01661366,
   0.01702373,
   0.01808549,
   0.01979822,
   0.02248706};
   gre = new TGraphErrors(9,Graph2_fx1091,Graph2_fy1091,Graph2_fex1091,Graph2_fey1091);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21091 = new TH1F("Graph_Graph21091","Graph",100,425,2825);
   Graph_Graph21091->SetMinimum(-0.5895532);
   Graph_Graph21091->SetMaximum(1.032865);
   Graph_Graph21091->SetDirectory(0);
   Graph_Graph21091->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21091->SetLineColor(ci);
   Graph_Graph21091->GetXaxis()->SetLabelFont(42);
   Graph_Graph21091->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21091->GetXaxis()->SetTitleFont(42);
   Graph_Graph21091->GetYaxis()->SetLabelFont(42);
   Graph_Graph21091->GetYaxis()->SetTitleFont(42);
   Graph_Graph21091->GetZaxis()->SetLabelFont(42);
   Graph_Graph21091->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21091);
   
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
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
