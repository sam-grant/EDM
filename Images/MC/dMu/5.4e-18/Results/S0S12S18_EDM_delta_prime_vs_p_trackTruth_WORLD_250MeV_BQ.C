void S0S12S18_EDM_delta_prime_vs_p_trackTruth_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:53:20 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(446.8716,0.5448025,3047.279,2.98657);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1113[8] = {
   880.2728,
   1123.023,
   1371.209,
   1620.261,
   1867.114,
   2115.52,
   2363.035,
   2613.878};
   Double_t _fy1113[8] = {
   1.578004,
   1.718849,
   1.629361,
   1.961175,
   1.801797,
   1.459317,
   1.154905,
   2.262432};
   Double_t _fex1113[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1113[8] = {
   0.2704867,
   0.2114418,
   0.1912375,
   0.1864972,
   0.1988042,
   0.2319952,
   0.2927408,
   0.3839693};
   TGraphErrors *gre = new TGraphErrors(8,_fx1113,_fy1113,_fex1113,_fey1113);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{EDM} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1113 = new TH1F("Graph_Graph1113","",100,706.9123,2787.238);
   Graph_Graph1113->SetMinimum(0.7889794);
   Graph_Graph1113->SetMaximum(2.742394);
   Graph_Graph1113->SetDirectory(0);
   Graph_Graph1113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1113->SetLineColor(ci);
   Graph_Graph1113->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1113->GetXaxis()->CenterTitle(true);
   Graph_Graph1113->GetXaxis()->SetLabelFont(42);
   Graph_Graph1113->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1113->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1113->GetXaxis()->SetTitleFont(42);
   Graph_Graph1113->GetYaxis()->SetTitle("#delta'_{EDM} [mrad] / 250 MeV");
   Graph_Graph1113->GetYaxis()->CenterTitle(true);
   Graph_Graph1113->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1113->GetYaxis()->SetLabelFont(42);
   Graph_Graph1113->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1113->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1113->GetYaxis()->SetTitleFont(42);
   Graph_Graph1113->GetZaxis()->SetLabelFont(42);
   Graph_Graph1113->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1113->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1113);
   
   
   TF1 *pol01114 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01114->SetFillColor(19);
   pol01114->SetFillStyle(0);
   pol01114->SetLineColor(2);
   pol01114->SetLineWidth(2);
   pol01114->SetChisquare(9.26019);
   pol01114->SetNDF(7);
   pol01114->GetXaxis()->SetLabelFont(42);
   pol01114->GetXaxis()->SetTitleOffset(1);
   pol01114->GetXaxis()->SetTitleFont(42);
   pol01114->GetYaxis()->SetLabelFont(42);
   pol01114->GetYaxis()->SetTitleFont(42);
   pol01114->SetParameter(0,1.699286);
   pol01114->SetParError(0,0.08046129);
   pol01114->SetParLimits(0,0,0);
   pol01114->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01114);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 1.7
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
