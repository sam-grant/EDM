void S12_g2_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:46:44 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.8659803,2750,1.541153);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1163[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1163[7] = {
   0.5040028,
   0.2231126,
   0.09196223,
   -0.1368206,
   0.07415605,
   -0.3501688,
   0.2455405};
   Double_t _fex1163[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1163[7] = {
   0.2896135,
   0.18718,
   0.1521133,
   0.1482996,
   0.1669647,
   0.2200785,
   0.3740929};
   TGraphErrors *gre = new TGraphErrors(7,_fx1163,_fy1163,_fex1163,_fey1163);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta'_{g#minus2}^{BLIND} [mrad];");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1163 = new TH1F("Graph_Graph1163","",100,725,2525);
   Graph_Graph1163->SetMinimum(-0.625267);
   Graph_Graph1163->SetMaximum(1.30044);
   Graph_Graph1163->SetDirectory(0);
   Graph_Graph1163->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1163->SetLineColor(ci);
   Graph_Graph1163->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph1163->GetXaxis()->CenterTitle(true);
   Graph_Graph1163->GetXaxis()->SetLabelFont(42);
   Graph_Graph1163->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1163->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1163->GetXaxis()->SetTitleFont(42);
   Graph_Graph1163->GetYaxis()->SetTitle("#delta'_{g#minus2}^{BLIND} [mrad]");
   Graph_Graph1163->GetYaxis()->CenterTitle(true);
   Graph_Graph1163->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1163->GetYaxis()->SetLabelFont(42);
   Graph_Graph1163->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1163->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1163->GetYaxis()->SetTitleFont(42);
   Graph_Graph1163->GetZaxis()->SetLabelFont(42);
   Graph_Graph1163->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1163->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1163);
   
   
   TF1 *pol01164 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01164->SetFillColor(19);
   pol01164->SetFillStyle(0);
   pol01164->SetLineColor(2);
   pol01164->SetLineWidth(2);
   pol01164->SetChisquare(8.548149);
   pol01164->SetNDF(6);
   pol01164->GetXaxis()->SetLabelFont(42);
   pol01164->GetXaxis()->SetTitleOffset(1);
   pol01164->GetXaxis()->SetTitleFont(42);
   pol01164->GetYaxis()->SetLabelFont(42);
   pol01164->GetYaxis()->SetTitleFont(42);
   pol01164->SetParameter(0,0.03793846);
   pol01164->SetParError(0,0.07201603);
   pol01164->SetParLimits(0,0,0);
   pol01164->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01164);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1c","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.038
#pm0.07
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
