void S12_g2_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:46:22 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-1.018944,2750,1.487382);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1151[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1151[7] = {
   0.263753,
   -0.1176707,
   0.1050591,
   0.2519426,
   -0.2640781,
   -0.1248819,
   -0.2027967};
   Double_t _fex1151[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1151[7] = {
   0.3538169,
   0.2293666,
   0.1856527,
   0.1804267,
   0.2032519,
   0.2670106,
   0.4524114};
   TGraphErrors *gre = new TGraphErrors(7,_fx1151,_fy1151,_fex1151,_fey1151);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta'_{g#minus2}^{BLIND} [mrad];");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1151 = new TH1F("Graph_Graph1151","",100,725,2525);
   Graph_Graph1151->SetMinimum(-0.768311);
   Graph_Graph1151->SetMaximum(1.236749);
   Graph_Graph1151->SetDirectory(0);
   Graph_Graph1151->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1151->SetLineColor(ci);
   Graph_Graph1151->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph1151->GetXaxis()->CenterTitle(true);
   Graph_Graph1151->GetXaxis()->SetLabelFont(42);
   Graph_Graph1151->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1151->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1151->GetXaxis()->SetTitleFont(42);
   Graph_Graph1151->GetYaxis()->SetTitle("#delta'_{g#minus2}^{BLIND} [mrad]");
   Graph_Graph1151->GetYaxis()->CenterTitle(true);
   Graph_Graph1151->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1151->GetYaxis()->SetLabelFont(42);
   Graph_Graph1151->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1151->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1151->GetYaxis()->SetTitleFont(42);
   Graph_Graph1151->GetZaxis()->SetLabelFont(42);
   Graph_Graph1151->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1151->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1151);
   
   
   TF1 *pol01152 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01152->SetFillColor(19);
   pol01152->SetFillStyle(0);
   pol01152->SetLineColor(2);
   pol01152->SetLineWidth(2);
   pol01152->SetChisquare(5.178889);
   pol01152->SetNDF(6);
   pol01152->GetXaxis()->SetLabelFont(42);
   pol01152->GetXaxis()->SetTitleOffset(1);
   pol01152->GetXaxis()->SetTitleFont(42);
   pol01152->GetYaxis()->SetLabelFont(42);
   pol01152->GetYaxis()->SetTitleFont(42);
   pol01152->SetParameter(0,0.01172717);
   pol01152->SetParError(0,0.08775765);
   pol01152->SetParLimits(0,0,0);
   pol01152->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01152);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1b","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.012
#pm0.09
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
