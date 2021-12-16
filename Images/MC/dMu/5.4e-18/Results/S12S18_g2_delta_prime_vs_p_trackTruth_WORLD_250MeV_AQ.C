void S12S18_g2_delta_prime_vs_p_trackTruth_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:46:05 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(441.242,-0.7462321,3047.66,0.3598579);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1081[8] = {
   875.645,
   1124.343,
   1373.479,
   1622.481,
   1871.403,
   2119.962,
   2367.8,
   2613.257};
   Double_t _fy1081[8] = {
   -0.1983357,
   -0.03148851,
   0.1170129,
   -0.03427699,
   0.08693238,
   0.1066998,
   0.1007536,
   0.02712616};
   Double_t _fex1081[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1081[8] = {
   0.1590136,
   0.1246277,
   0.1057888,
   0.09654782,
   0.09428835,
   0.0996477,
   0.116346,
   0.1582984};
   TGraphErrors *gre = new TGraphErrors(8,_fx1081,_fy1081,_fex1081,_fey1081);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1081 = new TH1F("Graph_Graph1081","",100,701.8838,2787.018);
   Graph_Graph1081->SetMinimum(-0.6356231);
   Graph_Graph1081->SetMaximum(0.2492489);
   Graph_Graph1081->SetDirectory(0);
   Graph_Graph1081->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1081->SetLineColor(ci);
   Graph_Graph1081->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1081->GetXaxis()->CenterTitle(true);
   Graph_Graph1081->GetXaxis()->SetLabelFont(42);
   Graph_Graph1081->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1081->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1081->GetXaxis()->SetTitleFont(42);
   Graph_Graph1081->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1081->GetYaxis()->CenterTitle(true);
   Graph_Graph1081->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1081->GetYaxis()->SetLabelFont(42);
   Graph_Graph1081->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1081->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1081->GetYaxis()->SetTitleFont(42);
   Graph_Graph1081->GetZaxis()->SetLabelFont(42);
   Graph_Graph1081->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1081->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1081);
   
   
   TF1 *pol01082 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01082->SetFillColor(19);
   pol01082->SetFillStyle(0);
   pol01082->SetLineColor(2);
   pol01082->SetLineWidth(2);
   pol01082->SetChisquare(4.671301);
   pol01082->SetNDF(7);
   pol01082->GetXaxis()->SetLabelFont(42);
   pol01082->GetXaxis()->SetTitleOffset(1);
   pol01082->GetXaxis()->SetTitleFont(42);
   pol01082->GetYaxis()->SetLabelFont(42);
   pol01082->GetYaxis()->SetTitleFont(42);
   pol01082->SetParameter(0,0.04136304);
   pol01082->SetParError(0,0.03991902);
   pol01082->SetParLimits(0,0,0);
   pol01082->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01082);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Sim: trackTruth","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.041
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
