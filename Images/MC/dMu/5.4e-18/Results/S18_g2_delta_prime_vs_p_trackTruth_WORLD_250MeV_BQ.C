void S18_g2_delta_prime_vs_p_trackTruth_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:55:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(447.7922,-3.792535,3044.962,2.406743);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1119[8] = {
   880.6539,
   1123,
   1370.953,
   1619.754,
   1866.477,
   2115.036,
   2363.276,
   2612.101};
   Double_t _fy1119[8] = {
   -1.420739,
   0.2430135,
   0.1983835,
   0.6470544,
   0.2453415,
   0.4244133,
   0.2151292,
   1.142992};
   Double_t _fex1119[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1119[8] = {
   0.6370429,
   0.4841489,
   0.4240011,
   0.3942408,
   0.3945236,
   0.425293,
   0.481873,
   0.5150585};
   TGraphErrors *gre = new TGraphErrors(8,_fx1119,_fy1119,_fex1119,_fey1119);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1119 = new TH1F("Graph_Graph1119","",100,707.5092,2785.245);
   Graph_Graph1119->SetMinimum(-3.172607);
   Graph_Graph1119->SetMaximum(1.786815);
   Graph_Graph1119->SetDirectory(0);
   Graph_Graph1119->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1119->SetLineColor(ci);
   Graph_Graph1119->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1119->GetXaxis()->CenterTitle(true);
   Graph_Graph1119->GetXaxis()->SetLabelFont(42);
   Graph_Graph1119->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1119->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1119->GetXaxis()->SetTitleFont(42);
   Graph_Graph1119->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1119->GetYaxis()->CenterTitle(true);
   Graph_Graph1119->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1119->GetYaxis()->SetLabelFont(42);
   Graph_Graph1119->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1119->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1119->GetYaxis()->SetTitleFont(42);
   Graph_Graph1119->GetZaxis()->SetLabelFont(42);
   Graph_Graph1119->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1119->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1119);
   
   
   TF1 *pol01120 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01120->SetFillColor(19);
   pol01120->SetFillStyle(0);
   pol01120->SetLineColor(2);
   pol01120->SetLineWidth(2);
   pol01120->SetChisquare(10.95406);
   pol01120->SetNDF(7);
   pol01120->GetXaxis()->SetLabelFont(42);
   pol01120->GetXaxis()->SetTitleOffset(1);
   pol01120->GetXaxis()->SetTitleFont(42);
   pol01120->GetYaxis()->SetLabelFont(42);
   pol01120->GetYaxis()->SetTitleFont(42);
   pol01120->SetParameter(0,0.3086003);
   pol01120->SetParError(0,0.1606309);
   pol01120->SetParLimits(0,0,0);
   pol01120->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01120);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Sim: trackTruth","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.31
#pm0.2
 mrad","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
