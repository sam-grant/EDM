void S12S18_g2_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:46:29 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.9658547,2750,1.10002);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1155[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1155[7] = {
   0.202714,
   -0.1900099,
   0.05779693,
   0.1950271,
   -0.2694152,
   -0.1892272,
   -0.340707};
   Double_t _fex1155[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1155[7] = {
   0.2511705,
   0.1634361,
   0.1334974,
   0.1302802,
   0.1483412,
   0.1966887,
   0.3348481};
   TGraphErrors *gre = new TGraphErrors(7,_fx1155,_fy1155,_fex1155,_fey1155);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta'_{g#minus2}^{BLIND} [mrad];");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1155 = new TH1F("Graph_Graph1155","",100,725,2525);
   Graph_Graph1155->SetMinimum(-0.7592672);
   Graph_Graph1155->SetMaximum(0.8934329);
   Graph_Graph1155->SetDirectory(0);
   Graph_Graph1155->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1155->SetLineColor(ci);
   Graph_Graph1155->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph1155->GetXaxis()->CenterTitle(true);
   Graph_Graph1155->GetXaxis()->SetLabelFont(42);
   Graph_Graph1155->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1155->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1155->GetXaxis()->SetTitleFont(42);
   Graph_Graph1155->GetYaxis()->SetTitle("#delta'_{g#minus2}^{BLIND} [mrad]");
   Graph_Graph1155->GetYaxis()->CenterTitle(true);
   Graph_Graph1155->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1155->GetYaxis()->SetLabelFont(42);
   Graph_Graph1155->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1155->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1155->GetYaxis()->SetTitleFont(42);
   Graph_Graph1155->GetZaxis()->SetLabelFont(42);
   Graph_Graph1155->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1155->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1155);
   
   
   TF1 *pol01156 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01156->SetFillColor(19);
   pol01156->SetFillStyle(0);
   pol01156->SetLineColor(2);
   pol01156->SetLineWidth(2);
   pol01156->SetChisquare(9.339797);
   pol01156->SetNDF(6);
   pol01156->GetXaxis()->SetLabelFont(42);
   pol01156->GetXaxis()->SetTitleOffset(1);
   pol01156->GetXaxis()->SetTitleFont(42);
   pol01156->GetYaxis()->SetLabelFont(42);
   pol01156->GetYaxis()->SetTitleFont(42);
   pol01156->SetParameter(0,-0.0375807);
   pol01156->SetParError(0,0.06343241);
   pol01156->SetParLimits(0,0,0);
   pol01156->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01156);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.038
#pm0.06
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
