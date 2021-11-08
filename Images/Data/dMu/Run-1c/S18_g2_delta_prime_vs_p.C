void S18_g2_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:46:47 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-1.234353,2750,1.746117);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1165[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1165[7] = {
   0.6387344,
   -0.009987311,
   -0.144159,
   0.07217065,
   0.1481651,
   -0.2001538,
   -0.418794};
   Double_t _fex1165[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1165[7] = {
   0.2943039,
   0.1915576,
   0.1584674,
   0.1559989,
   0.1799381,
   0.2405198,
   0.4140098};
   TGraphErrors *gre = new TGraphErrors(7,_fx1165,_fy1165,_fex1165,_fey1165);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta'_{g#minus2}^{BLIND} [mrad];");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1165 = new TH1F("Graph_Graph1165","",100,725,2525);
   Graph_Graph1165->SetMinimum(-0.9363062);
   Graph_Graph1165->SetMaximum(1.44807);
   Graph_Graph1165->SetDirectory(0);
   Graph_Graph1165->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1165->SetLineColor(ci);
   Graph_Graph1165->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph1165->GetXaxis()->CenterTitle(true);
   Graph_Graph1165->GetXaxis()->SetLabelFont(42);
   Graph_Graph1165->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1165->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1165->GetXaxis()->SetTitleFont(42);
   Graph_Graph1165->GetYaxis()->SetTitle("#delta'_{g#minus2}^{BLIND} [mrad]");
   Graph_Graph1165->GetYaxis()->CenterTitle(true);
   Graph_Graph1165->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1165->GetYaxis()->SetLabelFont(42);
   Graph_Graph1165->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1165->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1165->GetYaxis()->SetTitleFont(42);
   Graph_Graph1165->GetZaxis()->SetLabelFont(42);
   Graph_Graph1165->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1165->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1165);
   
   
   TF1 *pol01166 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01166->SetFillColor(19);
   pol01166->SetFillStyle(0);
   pol01166->SetLineColor(2);
   pol01166->SetLineWidth(2);
   pol01166->SetChisquare(8.096584);
   pol01166->SetNDF(6);
   pol01166->GetXaxis()->SetLabelFont(42);
   pol01166->GetXaxis()->SetTitleOffset(1);
   pol01166->GetXaxis()->SetTitleFont(42);
   pol01166->GetYaxis()->SetLabelFont(42);
   pol01166->GetYaxis()->SetTitleFont(42);
   pol01166->SetParameter(0,0.01727038);
   pol01166->SetParError(0,0.07587153);
   pol01166->SetParLimits(0,0,0);
   pol01166->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01166);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.017
#pm0.08
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
