void S0S12S18_EDM_delta_prime_vs_p_trackReco_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:48:23 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(440.857,1.304431,3046.99,2.134995);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1093[8] = {
   875.2126,
   1123.934,
   1373.236,
   1622.304,
   1870.749,
   2119.247,
   2366.839,
   2612.635};
   Double_t _fy1093[8] = {
   1.740822,
   1.590232,
   1.722038,
   1.736787,
   1.800951,
   1.647746,
   1.518543,
   1.853576};
   Double_t _fex1093[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1093[8] = {
   0.1131334,
   0.09805495,
   0.08923085,
   0.08517967,
   0.08583055,
   0.09179991,
   0.1048447,
   0.1323346};
   TGraphErrors *gre = new TGraphErrors(8,_fx1093,_fy1093,_fex1093,_fey1093);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{EDM} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1093 = new TH1F("Graph_Graph1093","",100,701.4704,2786.377);
   Graph_Graph1093->SetMinimum(1.387488);
   Graph_Graph1093->SetMaximum(2.051939);
   Graph_Graph1093->SetDirectory(0);
   Graph_Graph1093->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1093->SetLineColor(ci);
   Graph_Graph1093->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1093->GetXaxis()->CenterTitle(true);
   Graph_Graph1093->GetXaxis()->SetLabelFont(42);
   Graph_Graph1093->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1093->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1093->GetXaxis()->SetTitleFont(42);
   Graph_Graph1093->GetYaxis()->SetTitle("#delta'_{EDM} [mrad] / 250 MeV");
   Graph_Graph1093->GetYaxis()->CenterTitle(true);
   Graph_Graph1093->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1093->GetYaxis()->SetLabelFont(42);
   Graph_Graph1093->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1093->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1093->GetYaxis()->SetTitleFont(42);
   Graph_Graph1093->GetZaxis()->SetLabelFont(42);
   Graph_Graph1093->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1093);
   
   
   TF1 *pol01094 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01094->SetFillColor(19);
   pol01094->SetFillStyle(0);
   pol01094->SetLineColor(2);
   pol01094->SetLineWidth(2);
   pol01094->SetChisquare(7.679987);
   pol01094->SetNDF(7);
   pol01094->GetXaxis()->SetLabelFont(42);
   pol01094->GetXaxis()->SetTitleOffset(1);
   pol01094->GetXaxis()->SetTitleFont(42);
   pol01094->GetYaxis()->SetLabelFont(42);
   pol01094->GetYaxis()->SetTitleFont(42);
   pol01094->SetParameter(0,1.699264);
   pol01094->SetParError(0,0.03433941);
   pol01094->SetParLimits(0,0,0);
   pol01094->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01094);
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
