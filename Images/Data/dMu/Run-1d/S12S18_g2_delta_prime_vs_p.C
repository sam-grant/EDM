void S12S18_g2_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:47:20 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.7603128,2750,0.915132);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1179[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1179[7] = {
   0.3332035,
   0.1512383,
   0.1320814,
   0.07082689,
   -0.1782562,
   0.1136566,
   -0.3378307};
   Double_t _fex1179[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1179[7] = {
   0.1506851,
   0.09798088,
   0.08035449,
   0.07866445,
   0.08988139,
   0.1192068,
   0.2039501};
   TGraphErrors *gre = new TGraphErrors(7,_fx1179,_fy1179,_fex1179,_fey1179);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta'_{g#minus2}^{BLIND} [mrad];");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1179 = new TH1F("Graph_Graph1179","",100,725,2525);
   Graph_Graph1179->SetMinimum(-0.5927683);
   Graph_Graph1179->SetMaximum(0.7475875);
   Graph_Graph1179->SetDirectory(0);
   Graph_Graph1179->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1179->SetLineColor(ci);
   Graph_Graph1179->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph1179->GetXaxis()->CenterTitle(true);
   Graph_Graph1179->GetXaxis()->SetLabelFont(42);
   Graph_Graph1179->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1179->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1179->GetXaxis()->SetTitleFont(42);
   Graph_Graph1179->GetYaxis()->SetTitle("#delta'_{g#minus2}^{BLIND} [mrad]");
   Graph_Graph1179->GetYaxis()->CenterTitle(true);
   Graph_Graph1179->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1179->GetYaxis()->SetLabelFont(42);
   Graph_Graph1179->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1179->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1179->GetYaxis()->SetTitleFont(42);
   Graph_Graph1179->GetZaxis()->SetLabelFont(42);
   Graph_Graph1179->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1179->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1179);
   
   
   TF1 *pol01180 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01180->SetFillColor(19);
   pol01180->SetFillStyle(0);
   pol01180->SetLineColor(2);
   pol01180->SetLineWidth(2);
   pol01180->SetChisquare(16.01118);
   pol01180->SetNDF(6);
   pol01180->GetXaxis()->SetLabelFont(42);
   pol01180->GetXaxis()->SetTitleOffset(1);
   pol01180->GetXaxis()->SetTitleFont(42);
   pol01180->GetYaxis()->SetLabelFont(42);
   pol01180->GetYaxis()->SetTitleFont(42);
   pol01180->SetParameter(0,0.05878277);
   pol01180->SetParError(0,0.03826742);
   pol01180->SetParLimits(0,0,0);
   pol01180->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01180);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1d","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.059
#pm0.04
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
