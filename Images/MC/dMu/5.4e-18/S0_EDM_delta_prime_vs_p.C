void S0_EDM_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:45:39 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,0.2754353,2750,3.862003);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1113[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1113[7] = {
   2.068719,
   1.701049,
   2.28834,
   2.103543,
   1.46828,
   2.053621,
   1.771537};
   Double_t _fex1113[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1113[7] = {
   0.5216825,
   0.36529,
   0.3130876,
   0.3023628,
   0.3292334,
   0.4187473,
   0.6620397};
   TGraphErrors *gre = new TGraphErrors(7,_fx1113,_fy1113,_fex1113,_fey1113);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta'_{EDM} [mrad];");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1113 = new TH1F("Graph_Graph1113","",100,725,2525);
   Graph_Graph1113->SetMinimum(0.6340921);
   Graph_Graph1113->SetMaximum(3.503346);
   Graph_Graph1113->SetDirectory(0);
   Graph_Graph1113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1113->SetLineColor(ci);
   Graph_Graph1113->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph1113->GetXaxis()->CenterTitle(true);
   Graph_Graph1113->GetXaxis()->SetLabelFont(42);
   Graph_Graph1113->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1113->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1113->GetXaxis()->SetTitleFont(42);
   Graph_Graph1113->GetYaxis()->SetTitle("#delta'_{EDM} [mrad]");
   Graph_Graph1113->GetYaxis()->CenterTitle(true);
   Graph_Graph1113->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1113->GetYaxis()->SetLabelFont(42);
   Graph_Graph1113->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1113->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1113->GetYaxis()->SetTitleFont(42);
   Graph_Graph1113->GetZaxis()->SetLabelFont(42);
   Graph_Graph1113->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1113->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1113);
   
   
   TF1 *pol01114 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01114->SetFillColor(19);
   pol01114->SetFillStyle(0);
   pol01114->SetLineColor(2);
   pol01114->SetLineWidth(2);
   pol01114->SetChisquare(4.210366);
   pol01114->SetNDF(6);
   pol01114->GetXaxis()->SetLabelFont(42);
   pol01114->GetXaxis()->SetTitleOffset(1);
   pol01114->GetXaxis()->SetTitleFont(42);
   pol01114->GetYaxis()->SetLabelFont(42);
   pol01114->GetYaxis()->SetTitleFont(42);
   pol01114->SetParameter(0,1.938716);
   pol01114->SetParError(0,0.1421075);
   pol01114->SetParLimits(0,0,0);
   pol01114->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01114);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 1.9
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
