void S0S12S18_g2_delta_prime_vs_p_trackTruth_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:56:11 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(446.8716,-1.357378,3047.279,1.0836);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1123[8] = {
   880.2728,
   1123.023,
   1371.209,
   1620.261,
   1867.114,
   2115.52,
   2363.035,
   2613.878};
   Double_t _fy1123[8] = {
   -0.3687459,
   -0.3251191,
   0.1642746,
   0.1184141,
   0.09702404,
   0.1432647,
   0.4555113,
   0.2926457};
   Double_t _fex1123[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1123[8] = {
   0.2707397,
   0.2116285,
   0.191393,
   0.1875356,
   0.2004506,
   0.236543,
   0.3071926,
   0.4212547};
   TGraphErrors *gre = new TGraphErrors(8,_fx1123,_fy1123,_fex1123,_fey1123);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1123 = new TH1F("Graph_Graph1123","",100,706.9123,2787.238);
   Graph_Graph1123->SetMinimum(-1.11328);
   Graph_Graph1123->SetMaximum(0.839502);
   Graph_Graph1123->SetDirectory(0);
   Graph_Graph1123->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1123->SetLineColor(ci);
   Graph_Graph1123->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1123->GetXaxis()->CenterTitle(true);
   Graph_Graph1123->GetXaxis()->SetLabelFont(42);
   Graph_Graph1123->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1123->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1123->GetXaxis()->SetTitleFont(42);
   Graph_Graph1123->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1123->GetYaxis()->CenterTitle(true);
   Graph_Graph1123->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1123->GetYaxis()->SetLabelFont(42);
   Graph_Graph1123->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1123->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1123->GetYaxis()->SetTitleFont(42);
   Graph_Graph1123->GetZaxis()->SetLabelFont(42);
   Graph_Graph1123->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1123);
   
   
   TF1 *pol01124 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01124->SetFillColor(19);
   pol01124->SetFillStyle(0);
   pol01124->SetLineColor(2);
   pol01124->SetLineWidth(2);
   pol01124->SetChisquare(8.306672);
   pol01124->SetNDF(7);
   pol01124->GetXaxis()->SetLabelFont(42);
   pol01124->GetXaxis()->SetTitleOffset(1);
   pol01124->GetXaxis()->SetTitleFont(42);
   pol01124->GetYaxis()->SetLabelFont(42);
   pol01124->GetYaxis()->SetTitleFont(42);
   pol01124->SetParameter(0,0.04653661);
   pol01124->SetParError(0,0.08146103);
   pol01124->SetParLimits(0,0,0);
   pol01124->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01124);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.047
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
