void S18_g2_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:46:25 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-1.407581,2750,1.39345);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1153[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1153[7] = {
   0.1327709,
   -0.2656166,
   0.007232519,
   0.1332407,
   -0.2742112,
   -0.2634514,
   -0.5052998};
   Double_t _fex1153[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1153[7] = {
   0.3565731,
   0.2329235,
   0.1920825,
   0.1882867,
   0.2169562,
   0.2907688,
   0.4977425};
   TGraphErrors *gre = new TGraphErrors(7,_fx1153,_fy1153,_fex1153,_fey1153);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta'_{g#minus2}^{BLIND} [mrad];");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1153 = new TH1F("Graph_Graph1153","",100,725,2525);
   Graph_Graph1153->SetMinimum(-1.127478);
   Graph_Graph1153->SetMaximum(1.113347);
   Graph_Graph1153->SetDirectory(0);
   Graph_Graph1153->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1153->SetLineColor(ci);
   Graph_Graph1153->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph1153->GetXaxis()->CenterTitle(true);
   Graph_Graph1153->GetXaxis()->SetLabelFont(42);
   Graph_Graph1153->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1153->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1153->GetXaxis()->SetTitleFont(42);
   Graph_Graph1153->GetYaxis()->SetTitle("#delta'_{g#minus2}^{BLIND} [mrad]");
   Graph_Graph1153->GetYaxis()->CenterTitle(true);
   Graph_Graph1153->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1153->GetYaxis()->SetLabelFont(42);
   Graph_Graph1153->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1153->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1153->GetYaxis()->SetTitleFont(42);
   Graph_Graph1153->GetZaxis()->SetLabelFont(42);
   Graph_Graph1153->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1153->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1153);
   
   
   TF1 *pol01154 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01154->SetFillColor(19);
   pol01154->SetFillStyle(0);
   pol01154->SetLineColor(2);
   pol01154->SetLineWidth(2);
   pol01154->SetChisquare(4.39339);
   pol01154->SetNDF(6);
   pol01154->GetXaxis()->SetLabelFont(42);
   pol01154->GetXaxis()->SetTitleOffset(1);
   pol01154->GetXaxis()->SetTitleFont(42);
   pol01154->GetYaxis()->SetLabelFont(42);
   pol01154->GetYaxis()->SetTitleFont(42);
   pol01154->SetParameter(0,-0.09163358);
   pol01154->SetParError(0,0.09177907);
   pol01154->SetParLimits(0,0,0);
   pol01154->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01154);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.092
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
