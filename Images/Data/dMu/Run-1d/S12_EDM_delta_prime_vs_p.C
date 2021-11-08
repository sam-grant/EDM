void S12_EDM_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:46:55 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.2928771,2750,1.314984);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1169[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1169[7] = {
   0.4471205,
   0.4659203,
   0.4877574,
   0.5391702,
   0.469706,
   0.5533278,
   0.8237788};
   Double_t _fex1169[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1169[7] = {
   0.2106223,
   0.1369953,
   0.1113891,
   0.1083363,
   0.1217459,
   0.1585682,
   0.2643353};
   TGraphErrors *gre = new TGraphErrors(7,_fx1169,_fy1169,_fex1169,_fey1169);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta'_{EDM}^{BLIND} [mrad];");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1169 = new TH1F("Graph_Graph1169","",100,725,2525);
   Graph_Graph1169->SetMinimum(-0.132091);
   Graph_Graph1169->SetMaximum(1.154198);
   Graph_Graph1169->SetDirectory(0);
   Graph_Graph1169->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1169->SetLineColor(ci);
   Graph_Graph1169->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph1169->GetXaxis()->CenterTitle(true);
   Graph_Graph1169->GetXaxis()->SetLabelFont(42);
   Graph_Graph1169->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1169->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1169->GetXaxis()->SetTitleFont(42);
   Graph_Graph1169->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   Graph_Graph1169->GetYaxis()->CenterTitle(true);
   Graph_Graph1169->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1169->GetYaxis()->SetLabelFont(42);
   Graph_Graph1169->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1169->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1169->GetYaxis()->SetTitleFont(42);
   Graph_Graph1169->GetZaxis()->SetLabelFont(42);
   Graph_Graph1169->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1169->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1169);
   
   
   TF1 *pol01170 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01170->SetFillColor(19);
   pol01170->SetFillStyle(0);
   pol01170->SetLineColor(2);
   pol01170->SetLineWidth(2);
   pol01170->SetChisquare(1.897826);
   pol01170->SetNDF(6);
   pol01170->GetXaxis()->SetLabelFont(42);
   pol01170->GetXaxis()->SetTitleOffset(1);
   pol01170->GetXaxis()->SetTitleFont(42);
   pol01170->GetYaxis()->SetLabelFont(42);
   pol01170->GetYaxis()->SetTitleFont(42);
   pol01170->SetParameter(0,0.5111619);
   pol01170->SetParError(0,0.05247385);
   pol01170->SetParLimits(0,0,0);
   pol01170->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01170);
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
