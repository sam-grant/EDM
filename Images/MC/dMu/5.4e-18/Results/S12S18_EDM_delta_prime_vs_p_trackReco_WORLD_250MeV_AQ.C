void S12S18_EDM_delta_prime_vs_p_trackReco_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:47:57 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(440.838,1.176124,3046.905,2.176728);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1091[8] = {
   875.1825,
   1123.948,
   1373.209,
   1622.265,
   1870.711,
   2119.19,
   2366.793,
   2612.56};
   Double_t _fy1091[8] = {
   1.665016,
   1.686671,
   1.659623,
   1.805445,
   1.809683,
   1.580938,
   1.509375,
   1.886946};
   Double_t _fex1091[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1091[8] = {
   0.1413933,
   0.1246127,
   0.1144655,
   0.1093138,
   0.1093539,
   0.1148795,
   0.1270928,
   0.1517774};
   TGraphErrors *gre = new TGraphErrors(8,_fx1091,_fy1091,_fex1091,_fey1091);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{EDM} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1091 = new TH1F("Graph_Graph1091","",100,701.4447,2786.298);
   Graph_Graph1091->SetMinimum(1.276185);
   Graph_Graph1091->SetMaximum(2.076668);
   Graph_Graph1091->SetDirectory(0);
   Graph_Graph1091->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1091->SetLineColor(ci);
   Graph_Graph1091->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1091->GetXaxis()->CenterTitle(true);
   Graph_Graph1091->GetXaxis()->SetLabelFont(42);
   Graph_Graph1091->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1091->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1091->GetXaxis()->SetTitleFont(42);
   Graph_Graph1091->GetYaxis()->SetTitle("#delta'_{EDM} [mrad] / 250 MeV");
   Graph_Graph1091->GetYaxis()->CenterTitle(true);
   Graph_Graph1091->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1091->GetYaxis()->SetLabelFont(42);
   Graph_Graph1091->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1091->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1091->GetYaxis()->SetTitleFont(42);
   Graph_Graph1091->GetZaxis()->SetLabelFont(42);
   Graph_Graph1091->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1091);
   
   
   TF1 *pol01092 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01092->SetFillColor(19);
   pol01092->SetFillStyle(0);
   pol01092->SetLineColor(2);
   pol01092->SetLineWidth(2);
   pol01092->SetChisquare(6.974201);
   pol01092->SetNDF(7);
   pol01092->GetXaxis()->SetLabelFont(42);
   pol01092->GetXaxis()->SetTitleOffset(1);
   pol01092->GetXaxis()->SetTitleFont(42);
   pol01092->GetYaxis()->SetLabelFont(42);
   pol01092->GetYaxis()->SetTitleFont(42);
   pol01092->SetParameter(0,1.699255);
   pol01092->SetParError(0,0.04306736);
   pol01092->SetParLimits(0,0,0);
   pol01092->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01092);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Sim: trackReco","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 1.7
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
