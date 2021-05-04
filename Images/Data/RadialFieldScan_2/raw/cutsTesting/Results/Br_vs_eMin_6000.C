void Br_vs_eMin_6000()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Apr 26 21:06:41 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-433.125,-3.5625,3568.125,7.0625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[13] = {
   0,
   250,
   500,
   750,
   1000,
   1250,
   1500,
   1750,
   2000,
   2250,
   2500,
   2750,
   3000};
   Double_t Graph0_fy1001[13] = {
   1.675632,
   2.087813,
   2.076034,
   2.047293,
   1.715407,
   1.562798,
   2.004857,
   2.083904,
   1.819857,
   1.896091,
   2.00339,
   2.560565,
   2.853615};
   Double_t Graph0_fex1001[13] = {
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
   Double_t Graph0_fey1001[13] = {
   0.3313258,
   0.332625,
   0.3483928,
   0.3714507,
   0.4003291,
   0.436353,
   0.4836197,
   0.5395421,
   0.604652,
   0.6921527,
   0.8183537,
   0.9709477,
   1.179767};
   TGraphErrors *gre = new TGraphErrors(13,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle(";E_{min} [MeV];#LT B_{r}^{Bkg} #GT [ppm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","",100,0,3300);
   Graph_Graph01001->SetMinimum(-2.5);
   Graph_Graph01001->SetMaximum(6);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01001->SetLineColor(ci);
   Graph_Graph01001->GetXaxis()->SetTitle("E_{min} [MeV]");
   Graph_Graph01001->GetXaxis()->SetRange(0,96);
   Graph_Graph01001->GetXaxis()->CenterTitle(true);
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle("#LT B_{r}^{Bkg} #GT [ppm]");
   Graph_Graph01001->GetYaxis()->CenterTitle(true);
   Graph_Graph01001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01001->GetYaxis()->SetLabelFont(42);
   Graph_Graph01001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01001->GetYaxis()->SetTitleFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelFont(42);
   Graph_Graph01001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01001);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1002[13] = {
   0,
   250,
   500,
   750,
   1000,
   1250,
   1500,
   1750,
   2000,
   2250,
   2500,
   2750,
   3000};
   Double_t Graph1_fy1002[13] = {
   1.950223,
   1.449134,
   1.228996,
   1.144196,
   0.3165108,
   -0.05142979,
   0.1036548,
   -0.2116887,
   -0.7629644,
   -0.2300287,
   0.06175961,
   -0.4525374,
   -2.013037};
   Double_t Graph1_fex1002[13] = {
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
   Double_t Graph1_fey1002[13] = {
   0.4071698,
   0.4340306,
   0.4690993,
   0.5007396,
   0.5522742,
   0.6145152,
   0.692541,
   0.7808089,
   0.8932326,
   1.016446,
   1.220438,
   1.51289,
   1.941761};
   gre = new TGraphErrors(13,Graph1_fx1002,Graph1_fy1002,Graph1_fex1002,Graph1_fey1002);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11002 = new TH1F("Graph_Graph11002","Graph",100,0,3300);
   Graph_Graph11002->SetMinimum(-4.586017);
   Graph_Graph11002->SetMaximum(2.988612);
   Graph_Graph11002->SetDirectory(0);
   Graph_Graph11002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11002->SetLineColor(ci);
   Graph_Graph11002->GetXaxis()->SetLabelFont(42);
   Graph_Graph11002->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11002->GetXaxis()->SetTitleFont(42);
   Graph_Graph11002->GetYaxis()->SetLabelFont(42);
   Graph_Graph11002->GetYaxis()->SetTitleFont(42);
   Graph_Graph11002->GetZaxis()->SetLabelFont(42);
   Graph_Graph11002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11002);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1003[13] = {
   0,
   250,
   500,
   750,
   1000,
   1250,
   1500,
   1750,
   2000,
   2250,
   2500,
   2750,
   3000};
   Double_t Graph2_fy1003[13] = {
   2.197232,
   1.67163,
   1.497704,
   1.398465,
   0.5339033,
   0.2121601,
   0.3282493,
   -0.1083407,
   -0.5139957,
   -0.167876,
   0.03603589,
   0.08586857,
   -1.811426};
   Double_t Graph2_fex1003[13] = {
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
   Double_t Graph2_fey1003[13] = {
   0.4270222,
   0.4550947,
   0.4871737,
   0.5285277,
   0.5781349,
   0.6435973,
   0.7301432,
   0.8208011,
   0.9452209,
   1.063208,
   1.270536,
   1.52445,
   1.934169};
   gre = new TGraphErrors(13,Graph2_fx1003,Graph2_fy1003,Graph2_fex1003,Graph2_fey1003);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21003 = new TH1F("Graph_Graph21003","Graph",100,0,3300);
   Graph_Graph21003->SetMinimum(-4.38258);
   Graph_Graph21003->SetMaximum(3.261239);
   Graph_Graph21003->SetDirectory(0);
   Graph_Graph21003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21003->SetLineColor(ci);
   Graph_Graph21003->GetXaxis()->SetLabelFont(42);
   Graph_Graph21003->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21003->GetXaxis()->SetTitleFont(42);
   Graph_Graph21003->GetYaxis()->SetLabelFont(42);
   Graph_Graph21003->GetYaxis()->SetTitleFont(42);
   Graph_Graph21003->GetZaxis()->SetLabelFont(42);
   Graph_Graph21003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21003);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.15,0.79,0.59,0.89,NULL,"brNDC");
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
