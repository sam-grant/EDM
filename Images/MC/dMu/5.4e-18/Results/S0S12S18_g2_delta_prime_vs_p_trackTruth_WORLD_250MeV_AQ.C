void S0S12S18_g2_delta_prime_vs_p_trackTruth_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:46:25 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(441.251,-0.5848221,3047.736,0.3402391);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1083[8] = {
   875.6653,
   1124.341,
   1373.527,
   1622.515,
   1871.416,
   2120.03,
   2367.802,
   2613.322};
   Double_t _fy1083[8] = {
   -0.1583646,
   -0.08262067,
   0.1392168,
   0.02128595,
   0.06468522,
   0.05284695,
   0.1289688,
   0.04425517};
   Double_t _fex1083[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1083[8] = {
   0.1214369,
   0.09721441,
   0.0837278,
   0.0773077,
   0.07615242,
   0.0809607,
   0.0950113,
   0.1293555};
   TGraphErrors *gre = new TGraphErrors(8,_fx1083,_fy1083,_fex1083,_fey1083);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1083 = new TH1F("Graph_Graph1083","",100,701.8996,2787.088);
   Graph_Graph1083->SetMinimum(-0.492316);
   Graph_Graph1083->SetMaximum(0.247733);
   Graph_Graph1083->SetDirectory(0);
   Graph_Graph1083->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1083->SetLineColor(ci);
   Graph_Graph1083->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1083->GetXaxis()->CenterTitle(true);
   Graph_Graph1083->GetXaxis()->SetLabelFont(42);
   Graph_Graph1083->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1083->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1083->GetXaxis()->SetTitleFont(42);
   Graph_Graph1083->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1083->GetYaxis()->CenterTitle(true);
   Graph_Graph1083->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1083->GetYaxis()->SetLabelFont(42);
   Graph_Graph1083->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1083->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1083->GetYaxis()->SetTitleFont(42);
   Graph_Graph1083->GetZaxis()->SetLabelFont(42);
   Graph_Graph1083->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1083->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1083);
   
   
   TF1 *pol01084 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01084->SetFillColor(19);
   pol01084->SetFillStyle(0);
   pol01084->SetLineColor(2);
   pol01084->SetLineWidth(2);
   pol01084->SetChisquare(6.729363);
   pol01084->SetNDF(7);
   pol01084->GetXaxis()->SetLabelFont(42);
   pol01084->GetXaxis()->SetTitleOffset(1);
   pol01084->GetXaxis()->SetTitleFont(42);
   pol01084->GetYaxis()->SetLabelFont(42);
   pol01084->GetYaxis()->SetTitleFont(42);
   pol01084->SetParameter(0,0.04094182);
   pol01084->SetParError(0,0.03195795);
   pol01084->SetParLimits(0,0,0);
   pol01084->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01084);
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
#pm0.03
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
