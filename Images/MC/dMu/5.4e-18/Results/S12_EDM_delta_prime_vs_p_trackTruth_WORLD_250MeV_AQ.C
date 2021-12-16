void S12_EDM_delta_prime_vs_p_trackTruth_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:43:53 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(441.2527,0.9261976,3047.729,2.373798);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1067[8] = {
   875.6655,
   1124.351,
   1373.49,
   1622.49,
   1871.474,
   2120.007,
   2367.914,
   2613.316};
   Double_t _fy1067[8] = {
   1.649998,
   1.529121,
   1.84084,
   1.840572,
   1.806626,
   1.431073,
   1.592193,
   1.897926};
   Double_t _fex1067[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1067[8] = {
   0.2105601,
   0.1724376,
   0.1508367,
   0.1401275,
   0.1382372,
   0.1452913,
   0.1654198,
   0.2120468};
   TGraphErrors *gre = new TGraphErrors(8,_fx1067,_fy1067,_fex1067,_fey1067);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{EDM} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1067 = new TH1F("Graph_Graph1067","",100,701.9004,2787.082);
   Graph_Graph1067->SetMinimum(1.070958);
   Graph_Graph1067->SetMaximum(2.229038);
   Graph_Graph1067->SetDirectory(0);
   Graph_Graph1067->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1067->SetLineColor(ci);
   Graph_Graph1067->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1067->GetXaxis()->CenterTitle(true);
   Graph_Graph1067->GetXaxis()->SetLabelFont(42);
   Graph_Graph1067->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1067->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1067->GetXaxis()->SetTitleFont(42);
   Graph_Graph1067->GetYaxis()->SetTitle("#delta'_{EDM} [mrad] / 250 MeV");
   Graph_Graph1067->GetYaxis()->CenterTitle(true);
   Graph_Graph1067->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1067->GetYaxis()->SetLabelFont(42);
   Graph_Graph1067->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1067->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1067->GetYaxis()->SetTitleFont(42);
   Graph_Graph1067->GetZaxis()->SetLabelFont(42);
   Graph_Graph1067->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1067);
   
   
   TF1 *pol01068 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01068->SetFillColor(19);
   pol01068->SetFillStyle(0);
   pol01068->SetLineColor(2);
   pol01068->SetLineWidth(2);
   pol01068->SetChisquare(8.233389);
   pol01068->SetNDF(7);
   pol01068->GetXaxis()->SetLabelFont(42);
   pol01068->GetXaxis()->SetTitleOffset(1);
   pol01068->GetXaxis()->SetTitleFont(42);
   pol01068->GetYaxis()->SetLabelFont(42);
   pol01068->GetYaxis()->SetTitleFont(42);
   pol01068->SetParameter(0,1.69928);
   pol01068->SetParError(0,0.05683716);
   pol01068->SetParLimits(0,0,0);
   pol01068->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01068);
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
