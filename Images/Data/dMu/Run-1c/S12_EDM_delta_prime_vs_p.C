void S12_EDM_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:46:32 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.8581822,2750,1.746732);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1157[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1157[7] = {
   0.2018334,
   0.4932751,
   0.6997672,
   0.6049218,
   0.7132045,
   0.4930929,
   1.034046};
   Double_t _fex1157[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1157[7] = {
   0.290736,
   0.1878372,
   0.1529283,
   0.1485957,
   0.1665634,
   0.2168662,
   0.3617558};
   TGraphErrors *gre = new TGraphErrors(7,_fx1157,_fy1157,_fex1157,_fey1157);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta'_{EDM}^{BLIND} [mrad];");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1157 = new TH1F("Graph_Graph1157","",100,725,2525);
   Graph_Graph1157->SetMinimum(-0.5976907);
   Graph_Graph1157->SetMaximum(1.486241);
   Graph_Graph1157->SetDirectory(0);
   Graph_Graph1157->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1157->SetLineColor(ci);
   Graph_Graph1157->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph1157->GetXaxis()->CenterTitle(true);
   Graph_Graph1157->GetXaxis()->SetLabelFont(42);
   Graph_Graph1157->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1157->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1157->GetXaxis()->SetTitleFont(42);
   Graph_Graph1157->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   Graph_Graph1157->GetYaxis()->CenterTitle(true);
   Graph_Graph1157->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1157->GetYaxis()->SetLabelFont(42);
   Graph_Graph1157->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1157->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1157->GetYaxis()->SetTitleFont(42);
   Graph_Graph1157->GetZaxis()->SetLabelFont(42);
   Graph_Graph1157->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1157->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1157);
   
   
   TF1 *pol01158 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01158->SetFillColor(19);
   pol01158->SetFillStyle(0);
   pol01158->SetLineColor(2);
   pol01158->SetLineWidth(2);
   pol01158->SetChisquare(4.751367);
   pol01158->SetNDF(6);
   pol01158->GetXaxis()->SetLabelFont(42);
   pol01158->GetXaxis()->SetTitleOffset(1);
   pol01158->GetXaxis()->SetTitleFont(42);
   pol01158->GetYaxis()->SetLabelFont(42);
   pol01158->GetYaxis()->SetTitleFont(42);
   pol01158->SetParameter(0,0.6097193);
   pol01158->SetParError(0,0.07195016);
   pol01158->SetParLimits(0,0,0);
   pol01158->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01158);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.61
#pm0.07
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
