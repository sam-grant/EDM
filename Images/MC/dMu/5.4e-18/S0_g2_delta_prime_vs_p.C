void S0_g2_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:45:50 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-2.011052,2750,2.187285);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1123[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1123[7] = {
   -0.1539866,
   -0.8255743,
   0.07433766,
   -0.2990661,
   0.4183251,
   -0.1588397,
   0.8993168};
   Double_t _fex1123[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1123[7] = {
   0.5226298,
   0.3662142,
   0.3140219,
   0.303984,
   0.3322053,
   0.4269767,
   0.6945078};
   TGraphErrors *gre = new TGraphErrors(7,_fx1123,_fy1123,_fex1123,_fey1123);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta'_{g#minus2} [mrad];");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1123 = new TH1F("Graph_Graph1123","",100,725,2525);
   Graph_Graph1123->SetMinimum(-1.591218);
   Graph_Graph1123->SetMaximum(1.767452);
   Graph_Graph1123->SetDirectory(0);
   Graph_Graph1123->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1123->SetLineColor(ci);
   Graph_Graph1123->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph1123->GetXaxis()->CenterTitle(true);
   Graph_Graph1123->GetXaxis()->SetLabelFont(42);
   Graph_Graph1123->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1123->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1123->GetXaxis()->SetTitleFont(42);
   Graph_Graph1123->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad]");
   Graph_Graph1123->GetYaxis()->CenterTitle(true);
   Graph_Graph1123->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1123->GetYaxis()->SetLabelFont(42);
   Graph_Graph1123->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1123->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1123->GetYaxis()->SetTitleFont(42);
   Graph_Graph1123->GetZaxis()->SetLabelFont(42);
   Graph_Graph1123->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1123);
   
   
   TF1 *pol01124 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01124->SetFillColor(19);
   pol01124->SetFillStyle(0);
   pol01124->SetLineColor(2);
   pol01124->SetLineWidth(2);
   pol01124->SetChisquare(9.192805);
   pol01124->SetNDF(6);
   pol01124->GetXaxis()->SetLabelFont(42);
   pol01124->GetXaxis()->SetTitleOffset(1);
   pol01124->GetXaxis()->SetTitleFont(42);
   pol01124->GetYaxis()->SetLabelFont(42);
   pol01124->GetYaxis()->SetTitleFont(42);
   pol01124->SetParameter(0,-0.09072694);
   pol01124->SetParError(0,0.1432966);
   pol01124->SetParLimits(0,0,0);
   pol01124->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01124);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Sim: Tracks","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.091
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
