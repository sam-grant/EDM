void S18_EDM_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:46:17 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.4199146,2750,2.157401);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1147[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1147[7] = {
   0.9155568,
   0.6362955,
   0.3167645,
   0.1797977,
   0.1081678,
   0.715004,
   1.107981};
   Double_t _fex1147[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1147[7] = {
   0.3578591,
   0.2336268,
   0.1928794,
   0.1887545,
   0.2162806,
   0.2866226,
   0.4802335};
   TGraphErrors *gre = new TGraphErrors(7,_fx1147,_fy1147,_fex1147,_fey1147);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta'_{EDM}^{BLIND} [mrad];");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1147 = new TH1F("Graph_Graph1147","",100,725,2525);
   Graph_Graph1147->SetMinimum(-0.162183);
   Graph_Graph1147->SetMaximum(1.899669);
   Graph_Graph1147->SetDirectory(0);
   Graph_Graph1147->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1147->SetLineColor(ci);
   Graph_Graph1147->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph1147->GetXaxis()->CenterTitle(true);
   Graph_Graph1147->GetXaxis()->SetLabelFont(42);
   Graph_Graph1147->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1147->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1147->GetXaxis()->SetTitleFont(42);
   Graph_Graph1147->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   Graph_Graph1147->GetYaxis()->CenterTitle(true);
   Graph_Graph1147->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1147->GetYaxis()->SetLabelFont(42);
   Graph_Graph1147->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1147->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1147->GetYaxis()->SetTitleFont(42);
   Graph_Graph1147->GetZaxis()->SetLabelFont(42);
   Graph_Graph1147->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1147->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1147);
   
   
   TF1 *pol01148 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01148->SetFillColor(19);
   pol01148->SetFillStyle(0);
   pol01148->SetLineColor(2);
   pol01148->SetLineWidth(2);
   pol01148->SetChisquare(9.844563);
   pol01148->SetNDF(6);
   pol01148->GetXaxis()->SetLabelFont(42);
   pol01148->GetXaxis()->SetTitleOffset(1);
   pol01148->GetXaxis()->SetTitleFont(42);
   pol01148->GetYaxis()->SetLabelFont(42);
   pol01148->GetYaxis()->SetTitleFont(42);
   pol01148->SetParameter(0,0.4050652);
   pol01148->SetParError(0,0.09168378);
   pol01148->SetParLimits(0,0,0);
   pol01148->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01148);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.41
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
