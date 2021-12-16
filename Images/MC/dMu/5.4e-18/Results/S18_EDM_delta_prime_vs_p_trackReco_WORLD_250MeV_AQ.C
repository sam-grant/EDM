void S18_EDM_delta_prime_vs_p_trackReco_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:47:33 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(440.7822,0.9206101,3046.94,2.297837);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1089[8] = {
   875.1418,
   1123.931,
   1373.172,
   1622.294,
   1870.639,
   2119.126,
   2366.724,
   2612.58};
   Double_t _fy1089[8] = {
   1.609224,
   1.887901,
   1.515861,
   1.798618,
   1.694742,
   1.718228,
   1.60601,
   1.762873};
   Double_t _fex1089[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1089[8] = {
   0.200324,
   0.175277,
   0.1595943,
   0.1509149,
   0.1490573,
   0.154139,
   0.1673403,
   0.1949052};
   TGraphErrors *gre = new TGraphErrors(8,_fx1089,_fy1089,_fex1089,_fey1089);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{EDM} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1089 = new TH1F("Graph_Graph1089","",100,701.3979,2786.324);
   Graph_Graph1089->SetMinimum(1.058333);
   Graph_Graph1089->SetMaximum(2.160115);
   Graph_Graph1089->SetDirectory(0);
   Graph_Graph1089->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1089->SetLineColor(ci);
   Graph_Graph1089->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1089->GetXaxis()->CenterTitle(true);
   Graph_Graph1089->GetXaxis()->SetLabelFont(42);
   Graph_Graph1089->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1089->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1089->GetXaxis()->SetTitleFont(42);
   Graph_Graph1089->GetYaxis()->SetTitle("#delta'_{EDM} [mrad] / 250 MeV");
   Graph_Graph1089->GetYaxis()->CenterTitle(true);
   Graph_Graph1089->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1089->GetYaxis()->SetLabelFont(42);
   Graph_Graph1089->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1089->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1089->GetYaxis()->SetTitleFont(42);
   Graph_Graph1089->GetZaxis()->SetLabelFont(42);
   Graph_Graph1089->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1089->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1089);
   
   
   TF1 *pol01090 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01090->SetFillColor(19);
   pol01090->SetFillStyle(0);
   pol01090->SetLineColor(2);
   pol01090->SetLineWidth(2);
   pol01090->SetChisquare(3.547439);
   pol01090->SetNDF(7);
   pol01090->GetXaxis()->SetLabelFont(42);
   pol01090->GetXaxis()->SetTitleOffset(1);
   pol01090->GetXaxis()->SetTitleFont(42);
   pol01090->GetYaxis()->SetLabelFont(42);
   pol01090->GetYaxis()->SetTitleFont(42);
   pol01090->SetParameter(0,1.699254);
   pol01090->SetParError(0,0.05874527);
   pol01090->SetParLimits(0,0,0);
   pol01090->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01090);
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
