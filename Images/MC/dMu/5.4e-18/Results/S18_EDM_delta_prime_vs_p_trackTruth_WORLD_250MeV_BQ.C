void S18_EDM_delta_prime_vs_p_trackTruth_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:52:17 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(447.7922,-0.9599583,3044.962,3.41405);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1109[8] = {
   880.6539,
   1123,
   1370.953,
   1619.754,
   1866.477,
   2115.036,
   2363.276,
   2612.101};
   Double_t _fy1109[8] = {
   1.227046,
   1.91833,
   1.580597,
   2.145454,
   2.061781,
   0.9463181,
   1.039458,
   2.385703};
   Double_t _fex1109[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1109[8] = {
   0.6362194,
   0.483921,
   0.4233289,
   0.3917271,
   0.3924289,
   0.416564,
   0.4608808,
   0.4723247};
   TGraphErrors *gre = new TGraphErrors(8,_fx1109,_fy1109,_fex1109,_fey1109);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{EDM} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1109 = new TH1F("Graph_Graph1109","",100,707.5092,2785.245);
   Graph_Graph1109->SetMinimum(-0.5225575);
   Graph_Graph1109->SetMaximum(2.976649);
   Graph_Graph1109->SetDirectory(0);
   Graph_Graph1109->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1109->SetLineColor(ci);
   Graph_Graph1109->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1109->GetXaxis()->CenterTitle(true);
   Graph_Graph1109->GetXaxis()->SetLabelFont(42);
   Graph_Graph1109->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1109->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1109->GetXaxis()->SetTitleFont(42);
   Graph_Graph1109->GetYaxis()->SetTitle("#delta'_{EDM} [mrad] / 250 MeV");
   Graph_Graph1109->GetYaxis()->CenterTitle(true);
   Graph_Graph1109->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1109->GetYaxis()->SetLabelFont(42);
   Graph_Graph1109->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1109->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1109->GetYaxis()->SetTitleFont(42);
   Graph_Graph1109->GetZaxis()->SetLabelFont(42);
   Graph_Graph1109->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1109->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1109);
   
   
   TF1 *pol01110 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01110->SetFillColor(19);
   pol01110->SetFillStyle(0);
   pol01110->SetLineColor(2);
   pol01110->SetLineWidth(2);
   pol01110->SetChisquare(10.41395);
   pol01110->SetNDF(7);
   pol01110->GetXaxis()->SetLabelFont(42);
   pol01110->GetXaxis()->SetTitleOffset(1);
   pol01110->GetXaxis()->SetTitleFont(42);
   pol01110->GetYaxis()->SetLabelFont(42);
   pol01110->GetYaxis()->SetTitleFont(42);
   pol01110->SetParameter(0,1.699263);
   pol01110->SetParError(0,0.157555);
   pol01110->SetParLimits(0,0,0);
   pol01110->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01110);
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
#pm0.2
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
