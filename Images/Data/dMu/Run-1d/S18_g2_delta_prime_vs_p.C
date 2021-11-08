void S18_g2_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:47:15 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.6916576,2750,1.124021);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1177[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1177[7] = {
   0.3482013,
   0.06620745,
   -0.08810283,
   0.1146548,
   -0.3440747,
   0.3246309,
   -0.06579289};
   Double_t _fex1177[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1177[7] = {
   0.2160914,
   0.1408274,
   0.1165963,
   0.114847,
   0.1328121,
   0.1779348,
   0.3064425};
   TGraphErrors *gre = new TGraphErrors(7,_fx1177,_fy1177,_fex1177,_fey1177);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta'_{g#minus2}^{BLIND} [mrad];");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1177 = new TH1F("Graph_Graph1177","",100,725,2525);
   Graph_Graph1177->SetMinimum(-0.5100898);
   Graph_Graph1177->SetMaximum(0.9424528);
   Graph_Graph1177->SetDirectory(0);
   Graph_Graph1177->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1177->SetLineColor(ci);
   Graph_Graph1177->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph1177->GetXaxis()->CenterTitle(true);
   Graph_Graph1177->GetXaxis()->SetLabelFont(42);
   Graph_Graph1177->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1177->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1177->GetXaxis()->SetTitleFont(42);
   Graph_Graph1177->GetYaxis()->SetTitle("#delta'_{g#minus2}^{BLIND} [mrad]");
   Graph_Graph1177->GetYaxis()->CenterTitle(true);
   Graph_Graph1177->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1177->GetYaxis()->SetLabelFont(42);
   Graph_Graph1177->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1177->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1177->GetYaxis()->SetTitleFont(42);
   Graph_Graph1177->GetZaxis()->SetLabelFont(42);
   Graph_Graph1177->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1177->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1177);
   
   
   TF1 *pol01178 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01178->SetFillColor(19);
   pol01178->SetFillStyle(0);
   pol01178->SetLineColor(2);
   pol01178->SetLineWidth(2);
   pol01178->SetChisquare(14.44233);
   pol01178->SetNDF(6);
   pol01178->GetXaxis()->SetLabelFont(42);
   pol01178->GetXaxis()->SetTitleOffset(1);
   pol01178->GetXaxis()->SetTitleFont(42);
   pol01178->GetYaxis()->SetLabelFont(42);
   pol01178->GetYaxis()->SetTitleFont(42);
   pol01178->SetParameter(0,0.009538233);
   pol01178->SetParError(0,0.05588965);
   pol01178->SetParLimits(0,0,0);
   pol01178->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01178);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.0095
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
