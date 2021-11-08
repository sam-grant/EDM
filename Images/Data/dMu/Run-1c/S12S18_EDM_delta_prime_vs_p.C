void S12S18_EDM_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:46:40 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.2448804,2750,1.496569);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1161[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1161[7] = {
   0.4984635,
   0.6734735,
   0.4773551,
   0.5670744,
   0.6689467,
   0.6231465,
   0.987195};
   Double_t _fex1161[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1161[7] = {
   0.2069814,
   0.1343733,
   0.1102174,
   0.1077664,
   0.1221354,
   0.1602435,
   0.2681833};
   TGraphErrors *gre = new TGraphErrors(7,_fx1161,_fy1161,_fex1161,_fey1161);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta'_{EDM}^{BLIND} [mrad];");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1161 = new TH1F("Graph_Graph1161","",100,725,2525);
   Graph_Graph1161->SetMinimum(-0.0707354);
   Graph_Graph1161->SetMaximum(1.322424);
   Graph_Graph1161->SetDirectory(0);
   Graph_Graph1161->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1161->SetLineColor(ci);
   Graph_Graph1161->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph1161->GetXaxis()->CenterTitle(true);
   Graph_Graph1161->GetXaxis()->SetLabelFont(42);
   Graph_Graph1161->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1161->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1161->GetXaxis()->SetTitleFont(42);
   Graph_Graph1161->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   Graph_Graph1161->GetYaxis()->CenterTitle(true);
   Graph_Graph1161->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1161->GetYaxis()->SetLabelFont(42);
   Graph_Graph1161->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1161->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1161->GetYaxis()->SetTitleFont(42);
   Graph_Graph1161->GetZaxis()->SetLabelFont(42);
   Graph_Graph1161->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1161->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1161);
   
   
   TF1 *pol01162 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01162->SetFillColor(19);
   pol01162->SetFillStyle(0);
   pol01162->SetLineColor(2);
   pol01162->SetLineWidth(2);
   pol01162->SetChisquare(4.294915);
   pol01162->SetNDF(6);
   pol01162->GetXaxis()->SetLabelFont(42);
   pol01162->GetXaxis()->SetTitleOffset(1);
   pol01162->GetXaxis()->SetTitleFont(42);
   pol01162->GetYaxis()->SetLabelFont(42);
   pol01162->GetYaxis()->SetTitleFont(42);
   pol01162->SetParameter(0,0.5991144);
   pol01162->SetParError(0,0.05219711);
   pol01162->SetParLimits(0,0,0);
   pol01162->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01162);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.6
#pm0.05
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
