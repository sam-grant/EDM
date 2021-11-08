void S18_EDM_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:46:36 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.2079117,2750,1.81819);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1159[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1159[7] = {
   0.8051389,
   0.8608888,
   0.2345756,
   0.5222014,
   0.6202992,
   0.7790589,
   0.9259865};
   Double_t _fex1159[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1159[7] = {
   0.2947056,
   0.1922936,
   0.1589798,
   0.1565101,
   0.1796097,
   0.2377849,
   0.3994712};
   TGraphErrors *gre = new TGraphErrors(7,_fx1159,_fy1159,_fex1159,_fey1159);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta'_{EDM}^{BLIND} [mrad];");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1159 = new TH1F("Graph_Graph1159","",100,725,2525);
   Graph_Graph1159->SetMinimum(-0.005301538);
   Graph_Graph1159->SetMaximum(1.615579);
   Graph_Graph1159->SetDirectory(0);
   Graph_Graph1159->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1159->SetLineColor(ci);
   Graph_Graph1159->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph1159->GetXaxis()->CenterTitle(true);
   Graph_Graph1159->GetXaxis()->SetLabelFont(42);
   Graph_Graph1159->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1159->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1159->GetXaxis()->SetTitleFont(42);
   Graph_Graph1159->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   Graph_Graph1159->GetYaxis()->CenterTitle(true);
   Graph_Graph1159->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1159->GetYaxis()->SetLabelFont(42);
   Graph_Graph1159->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1159->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1159->GetYaxis()->SetTitleFont(42);
   Graph_Graph1159->GetZaxis()->SetLabelFont(42);
   Graph_Graph1159->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1159->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1159);
   
   
   TF1 *pol01160 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01160->SetFillColor(19);
   pol01160->SetFillStyle(0);
   pol01160->SetLineColor(2);
   pol01160->SetLineWidth(2);
   pol01160->SetChisquare(9.068924);
   pol01160->SetNDF(6);
   pol01160->GetXaxis()->SetLabelFont(42);
   pol01160->GetXaxis()->SetTitleOffset(1);
   pol01160->GetXaxis()->SetTitleFont(42);
   pol01160->GetYaxis()->SetLabelFont(42);
   pol01160->GetYaxis()->SetTitleFont(42);
   pol01160->SetParameter(0,0.5863259);
   pol01160->SetParError(0,0.07583194);
   pol01160->SetParLimits(0,0,0);
   pol01160->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01160);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.59
#pm0.08
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
