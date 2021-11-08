void S12S18_g2_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:46:51 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.6860171,2750,1.338025);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1167[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1167[7] = {
   0.5679194,
   0.1089941,
   -0.02034989,
   -0.03864498,
   0.1087774,
   -0.2806393,
   -0.05039434};
   Double_t _fex1167[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1167[7] = {
   0.2064369,
   0.133882,
   0.1097417,
   0.1074889,
   0.1223973,
   0.1623788,
   0.2776181};
   TGraphErrors *gre = new TGraphErrors(7,_fx1167,_fy1167,_fex1167,_fey1167);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta'_{g#minus2}^{BLIND} [mrad];");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1167 = new TH1F("Graph_Graph1167","",100,725,2525);
   Graph_Graph1167->SetMinimum(-0.4836129);
   Graph_Graph1167->SetMaximum(1.135621);
   Graph_Graph1167->SetDirectory(0);
   Graph_Graph1167->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1167->SetLineColor(ci);
   Graph_Graph1167->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph1167->GetXaxis()->CenterTitle(true);
   Graph_Graph1167->GetXaxis()->SetLabelFont(42);
   Graph_Graph1167->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1167->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1167->GetXaxis()->SetTitleFont(42);
   Graph_Graph1167->GetYaxis()->SetTitle("#delta'_{g#minus2}^{BLIND} [mrad]");
   Graph_Graph1167->GetYaxis()->CenterTitle(true);
   Graph_Graph1167->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1167->GetYaxis()->SetLabelFont(42);
   Graph_Graph1167->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1167->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1167->GetYaxis()->SetTitleFont(42);
   Graph_Graph1167->GetZaxis()->SetLabelFont(42);
   Graph_Graph1167->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1167->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1167);
   
   
   TF1 *pol01168 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01168->SetFillColor(19);
   pol01168->SetFillStyle(0);
   pol01168->SetLineColor(2);
   pol01168->SetLineWidth(2);
   pol01168->SetChisquare(11.91301);
   pol01168->SetNDF(6);
   pol01168->GetXaxis()->SetLabelFont(42);
   pol01168->GetXaxis()->SetTitleOffset(1);
   pol01168->GetXaxis()->SetTitleFont(42);
   pol01168->GetYaxis()->SetLabelFont(42);
   pol01168->GetYaxis()->SetTitleFont(42);
   pol01168->SetParameter(0,0.02820283);
   pol01168->SetParError(0,0.05223571);
   pol01168->SetParLimits(0,0,0);
   pol01168->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01168);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.028
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
