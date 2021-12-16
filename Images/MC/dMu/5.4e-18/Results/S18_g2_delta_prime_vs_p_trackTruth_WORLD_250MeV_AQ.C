void S18_g2_delta_prime_vs_p_trackTruth_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:45:43 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(441.2313,-1.123773,3047.589,0.6451392);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1079[8] = {
   875.6243,
   1124.334,
   1373.468,
   1622.472,
   1871.33,
   2119.915,
   2367.684,
   2613.196};
   Double_t _fy1079[8] = {
   -0.2843394,
   0.1690648,
   0.102931,
   0.06933231,
   0.2714261,
   0.1472325,
   0.2313144,
   0.1995993};
   Double_t _fex1079[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1079[8] = {
   0.2409245,
   0.1801238,
   0.1482541,
   0.1325468,
   0.1275174,
   0.134015,
   0.1561849,
   0.214919};
   TGraphErrors *gre = new TGraphErrors(8,_fx1079,_fy1079,_fex1079,_fey1079);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1079 = new TH1F("Graph_Graph1079","",100,701.8671,2786.953);
   Graph_Graph1079->SetMinimum(-0.9468818);
   Graph_Graph1079->SetMaximum(0.468248);
   Graph_Graph1079->SetDirectory(0);
   Graph_Graph1079->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1079->SetLineColor(ci);
   Graph_Graph1079->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1079->GetXaxis()->CenterTitle(true);
   Graph_Graph1079->GetXaxis()->SetLabelFont(42);
   Graph_Graph1079->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1079->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1079->GetXaxis()->SetTitleFont(42);
   Graph_Graph1079->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1079->GetYaxis()->CenterTitle(true);
   Graph_Graph1079->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1079->GetYaxis()->SetLabelFont(42);
   Graph_Graph1079->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1079->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1079->GetYaxis()->SetTitleFont(42);
   Graph_Graph1079->GetZaxis()->SetLabelFont(42);
   Graph_Graph1079->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1079->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1079);
   
   
   TF1 *pol01080 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01080->SetFillColor(19);
   pol01080->SetFillStyle(0);
   pol01080->SetLineColor(2);
   pol01080->SetLineWidth(2);
   pol01080->SetChisquare(4.952959);
   pol01080->SetNDF(7);
   pol01080->GetXaxis()->SetLabelFont(42);
   pol01080->GetXaxis()->SetTitleOffset(1);
   pol01080->GetXaxis()->SetTitleFont(42);
   pol01080->GetYaxis()->SetLabelFont(42);
   pol01080->GetYaxis()->SetTitleFont(42);
   pol01080->SetParameter(0,0.144224);
   pol01080->SetParError(0,0.05502419);
   pol01080->SetParLimits(0,0,0);
   pol01080->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01080);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.14
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
