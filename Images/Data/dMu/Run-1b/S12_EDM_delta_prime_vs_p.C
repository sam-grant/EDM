void S12_EDM_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:46:13 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.5667446,2750,1.875879);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1145[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1145[7] = {
   0.6545674,
   0.1718086,
   0.2780682,
   0.1906763,
   0.233316,
   0.5412033,
   1.061837};
   Double_t _fex1145[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1145[7] = {
   0.3552908,
   0.2301731,
   0.18663,
   0.1810916,
   0.2032358,
   0.2636554,
   0.4382899};
   TGraphErrors *gre = new TGraphErrors(7,_fx1145,_fy1145,_fex1145,_fey1145);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta'_{EDM}^{BLIND} [mrad];");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1145 = new TH1F("Graph_Graph1145","",100,725,2525);
   Graph_Graph1145->SetMinimum(-0.3224822);
   Graph_Graph1145->SetMaximum(1.631617);
   Graph_Graph1145->SetDirectory(0);
   Graph_Graph1145->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1145->SetLineColor(ci);
   Graph_Graph1145->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph1145->GetXaxis()->CenterTitle(true);
   Graph_Graph1145->GetXaxis()->SetLabelFont(42);
   Graph_Graph1145->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1145->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1145->GetXaxis()->SetTitleFont(42);
   Graph_Graph1145->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   Graph_Graph1145->GetYaxis()->CenterTitle(true);
   Graph_Graph1145->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1145->GetYaxis()->SetLabelFont(42);
   Graph_Graph1145->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1145->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1145->GetYaxis()->SetTitleFont(42);
   Graph_Graph1145->GetZaxis()->SetLabelFont(42);
   Graph_Graph1145->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1145->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1145);
   
   
   TF1 *pol01146 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01146->SetFillColor(19);
   pol01146->SetFillStyle(0);
   pol01146->SetLineColor(2);
   pol01146->SetLineWidth(2);
   pol01146->SetChisquare(5.611405);
   pol01146->SetNDF(6);
   pol01146->GetXaxis()->SetLabelFont(42);
   pol01146->GetXaxis()->SetTitleOffset(1);
   pol01146->GetXaxis()->SetTitleFont(42);
   pol01146->GetYaxis()->SetLabelFont(42);
   pol01146->GetYaxis()->SetTitleFont(42);
   pol01146->SetParameter(0,0.3173126);
   pol01146->SetParError(0,0.08777264);
   pol01146->SetParLimits(0,0,0);
   pol01146->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01146);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.32
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
