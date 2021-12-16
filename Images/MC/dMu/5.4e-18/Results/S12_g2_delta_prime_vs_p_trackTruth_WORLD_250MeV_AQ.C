void S12_g2_delta_prime_vs_p_trackTruth_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:45:23 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(441.2527,-0.8502411,3047.729,0.6000118);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1077[8] = {
   875.6655,
   1124.351,
   1373.49,
   1622.49,
   1871.474,
   2120.007,
   2367.914,
   2613.316};
   Double_t _fy1077[8] = {
   -0.1251147,
   -0.221986,
   0.1313651,
   -0.1443189,
   -0.1124083,
   0.06164201,
   -0.04369268,
   -0.1502641};
   Double_t _fex1077[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1077[8] = {
   0.2109459,
   0.172556,
   0.1509652,
   0.1407388,
   0.1396529,
   0.148516,
   0.173698,
   0.2333193};
   TGraphErrors *gre = new TGraphErrors(8,_fx1077,_fy1077,_fex1077,_fey1077);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1077 = new TH1F("Graph_Graph1077","",100,701.9004,2787.082);
   Graph_Graph1077->SetMinimum(-0.7052158);
   Graph_Graph1077->SetMaximum(0.4549865);
   Graph_Graph1077->SetDirectory(0);
   Graph_Graph1077->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1077->SetLineColor(ci);
   Graph_Graph1077->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1077->GetXaxis()->CenterTitle(true);
   Graph_Graph1077->GetXaxis()->SetLabelFont(42);
   Graph_Graph1077->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1077->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1077->GetXaxis()->SetTitleFont(42);
   Graph_Graph1077->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1077->GetYaxis()->CenterTitle(true);
   Graph_Graph1077->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1077->GetYaxis()->SetLabelFont(42);
   Graph_Graph1077->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1077->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1077->GetYaxis()->SetTitleFont(42);
   Graph_Graph1077->GetZaxis()->SetLabelFont(42);
   Graph_Graph1077->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1077);
   
   
   TF1 *pol01078 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01078->SetFillColor(19);
   pol01078->SetFillStyle(0);
   pol01078->SetLineColor(2);
   pol01078->SetLineWidth(2);
   pol01078->SetChisquare(3.908738);
   pol01078->SetNDF(7);
   pol01078->GetXaxis()->SetLabelFont(42);
   pol01078->GetXaxis()->SetTitleOffset(1);
   pol01078->GetXaxis()->SetTitleFont(42);
   pol01078->GetYaxis()->SetLabelFont(42);
   pol01078->GetYaxis()->SetTitleFont(42);
   pol01078->SetParameter(0,-0.06352938);
   pol01078->SetParError(0,0.05787536);
   pol01078->SetParLimits(0,0,0);
   pol01078->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01078);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.064
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
