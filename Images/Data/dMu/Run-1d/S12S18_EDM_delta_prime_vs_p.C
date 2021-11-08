void S12S18_EDM_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:47:04 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.1687646,2750,1.367768);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1173[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1173[7] = {
   0.4001903,
   0.3685857,
   0.5348875,
   0.4166876,
   0.5485477,
   0.7018648,
   0.9675346};
   Double_t _fex1173[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1173[7] = {
   0.1510188,
   0.09838854,
   0.08070275,
   0.07889977,
   0.08964158,
   0.1176293,
   0.1972641};
   TGraphErrors *gre = new TGraphErrors(7,_fx1173,_fy1173,_fex1173,_fey1173);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta'_{EDM}^{BLIND} [mrad];");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1173 = new TH1F("Graph_Graph1173","",100,725,2525);
   Graph_Graph1173->SetMinimum(-0.01511138);
   Graph_Graph1173->SetMaximum(1.214115);
   Graph_Graph1173->SetDirectory(0);
   Graph_Graph1173->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1173->SetLineColor(ci);
   Graph_Graph1173->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph1173->GetXaxis()->CenterTitle(true);
   Graph_Graph1173->GetXaxis()->SetLabelFont(42);
   Graph_Graph1173->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1173->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1173->GetXaxis()->SetTitleFont(42);
   Graph_Graph1173->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   Graph_Graph1173->GetYaxis()->CenterTitle(true);
   Graph_Graph1173->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1173->GetYaxis()->SetLabelFont(42);
   Graph_Graph1173->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1173->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1173->GetYaxis()->SetTitleFont(42);
   Graph_Graph1173->GetZaxis()->SetLabelFont(42);
   Graph_Graph1173->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1173->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1173);
   
   
   TF1 *pol01174 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01174->SetFillColor(19);
   pol01174->SetFillStyle(0);
   pol01174->SetLineColor(2);
   pol01174->SetLineWidth(2);
   pol01174->SetChisquare(12.31335);
   pol01174->SetNDF(6);
   pol01174->GetXaxis()->SetLabelFont(42);
   pol01174->GetXaxis()->SetTitleOffset(1);
   pol01174->GetXaxis()->SetTitleFont(42);
   pol01174->GetYaxis()->SetLabelFont(42);
   pol01174->GetYaxis()->SetTitleFont(42);
   pol01174->SetParameter(0,0.5097511);
   pol01174->SetParError(0,0.03824311);
   pol01174->SetParLimits(0,0,0);
   pol01174->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01174);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.51
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
