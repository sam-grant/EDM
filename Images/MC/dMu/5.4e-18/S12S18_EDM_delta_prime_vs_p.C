void S12S18_EDM_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:45:45 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,0.3733287,2750,2.891173);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1119[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1119[7] = {
   1.632251,
   1.68367,
   1.204949,
   1.638424,
   1.859536,
   1.479995,
   1.594043};
   Double_t _fex1119[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1119[7] = {
   0.366232,
   0.256506,
   0.2212186,
   0.2141423,
   0.239373,
   0.3134256,
   0.5162898};
   TGraphErrors *gre = new TGraphErrors(7,_fx1119,_fy1119,_fex1119,_fey1119);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta'_{EDM} [mrad];");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1119 = new TH1F("Graph_Graph1119","",100,725,2525);
   Graph_Graph1119->SetMinimum(0.6251132);
   Graph_Graph1119->SetMaximum(2.639389);
   Graph_Graph1119->SetDirectory(0);
   Graph_Graph1119->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1119->SetLineColor(ci);
   Graph_Graph1119->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph1119->GetXaxis()->CenterTitle(true);
   Graph_Graph1119->GetXaxis()->SetLabelFont(42);
   Graph_Graph1119->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1119->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1119->GetXaxis()->SetTitleFont(42);
   Graph_Graph1119->GetYaxis()->SetTitle("#delta'_{EDM} [mrad]");
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
   
   
   TF1 *pol01120 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01120->SetFillColor(19);
   pol01120->SetFillStyle(0);
   pol01120->SetLineColor(2);
   pol01120->SetLineWidth(2);
   pol01120->SetChisquare(4.596016);
   pol01120->SetNDF(6);
   pol01120->GetXaxis()->SetLabelFont(42);
   pol01120->GetXaxis()->SetTitleOffset(1);
   pol01120->GetXaxis()->SetTitleFont(42);
   pol01120->GetYaxis()->SetLabelFont(42);
   pol01120->GetYaxis()->SetTitleFont(42);
   pol01120->SetParameter(0,1.574689);
   pol01120->SetParError(0,0.1019142);
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
   TLegendEntry *entry=leg->AddEntry("","Sim: Tracks","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 1.6
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
