void S12S18_EDM_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:46:20 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.1967116,2750,1.672414);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1149[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1149[7] = {
   0.787781,
   0.4010478,
   0.2955284,
   0.1851796,
   0.1753477,
   0.6174629,
   1.080751};
   Double_t _fex1149[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1149[7] = {
   0.2521446,
   0.1639724,
   0.1341285,
   0.1306846,
   0.1481174,
   0.1940653,
   0.3238005};
   TGraphErrors *gre = new TGraphErrors(7,_fx1149,_fy1149,_fex1149,_fey1149);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta'_{EDM}^{BLIND} [mrad];");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1149 = new TH1F("Graph_Graph1149","",100,725,2525);
   Graph_Graph1149->SetMinimum(-0.009798974);
   Graph_Graph1149->SetMaximum(1.485502);
   Graph_Graph1149->SetDirectory(0);
   Graph_Graph1149->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1149->SetLineColor(ci);
   Graph_Graph1149->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph1149->GetXaxis()->CenterTitle(true);
   Graph_Graph1149->GetXaxis()->SetLabelFont(42);
   Graph_Graph1149->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1149->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1149->GetXaxis()->SetTitleFont(42);
   Graph_Graph1149->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   Graph_Graph1149->GetYaxis()->CenterTitle(true);
   Graph_Graph1149->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1149->GetYaxis()->SetLabelFont(42);
   Graph_Graph1149->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1149->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1149->GetYaxis()->SetTitleFont(42);
   Graph_Graph1149->GetZaxis()->SetLabelFont(42);
   Graph_Graph1149->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1149->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1149);
   
   
   TF1 *pol01150 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01150->SetFillColor(19);
   pol01150->SetFillStyle(0);
   pol01150->SetLineColor(2);
   pol01150->SetLineWidth(2);
   pol01150->SetChisquare(13.23021);
   pol01150->SetNDF(6);
   pol01150->GetXaxis()->SetLabelFont(42);
   pol01150->GetXaxis()->SetTitleOffset(1);
   pol01150->GetXaxis()->SetTitleFont(42);
   pol01150->GetYaxis()->SetLabelFont(42);
   pol01150->GetYaxis()->SetTitleFont(42);
   pol01150->SetParameter(0,0.3589111);
   pol01150->SetParError(0,0.0634066);
   pol01150->SetParLimits(0,0,0);
   pol01150->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01150);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.36
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
