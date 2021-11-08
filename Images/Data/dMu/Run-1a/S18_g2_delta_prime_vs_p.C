void S18_g2_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 26 00:47:48 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-1.931556,2750,2.410414);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1009[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1009[7] = {
   0.8243682,
   -0.05468049,
   0.202557,
   -0.09527016,
   0.3244153,
   -0.2644831,
   -0.7712452};
   Double_t _fex1009[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1009[7] = {
   0.4188541,
   0.2724236,
   0.2244964,
   0.2205672,
   0.2533152,
   0.3391554,
   0.5808908};
   TGraphErrors *gre = new TGraphErrors(7,_fx1009,_fy1009,_fex1009,_fey1009);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta'_{g#minus2}^{BLIND} [mrad];");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","",100,725,2525);
   Graph_Graph1009->SetMinimum(-1.497359);
   Graph_Graph1009->SetMaximum(1.976217);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1009->SetLineColor(ci);
   Graph_Graph1009->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph1009->GetXaxis()->CenterTitle(true);
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1009->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetTitle("#delta'_{g#minus2}^{BLIND} [mrad]");
   Graph_Graph1009->GetYaxis()->CenterTitle(true);
   Graph_Graph1009->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1009->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1009);
   
   
   TF1 *pol01010 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01010->SetFillColor(19);
   pol01010->SetFillStyle(0);
   pol01010->SetLineColor(2);
   pol01010->SetLineWidth(2);
   pol01010->SetChisquare(8.43988);
   pol01010->SetNDF(6);
   pol01010->GetXaxis()->SetLabelFont(42);
   pol01010->GetXaxis()->SetTitleOffset(1);
   pol01010->GetXaxis()->SetTitleFont(42);
   pol01010->GetYaxis()->SetLabelFont(42);
   pol01010->GetYaxis()->SetTitleFont(42);
   pol01010->SetParameter(0,0.07480096);
   pol01010->SetParError(0,0.107327);
   pol01010->SetParLimits(0,0,0);
   pol01010->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01010);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.075
#pm0.1
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
