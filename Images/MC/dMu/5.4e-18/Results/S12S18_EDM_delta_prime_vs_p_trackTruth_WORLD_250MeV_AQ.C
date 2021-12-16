void S12S18_EDM_delta_prime_vs_p_trackTruth_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:44:27 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(441.242,1.063534,3047.66,2.154631);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1071[8] = {
   875.645,
   1124.343,
   1373.479,
   1622.481,
   1871.403,
   2119.962,
   2367.8,
   2613.257};
   Double_t _fy1071[8] = {
   1.609083,
   1.764224,
   1.667847,
   1.760855,
   1.755628,
   1.584565,
   1.672841,
   1.768576};
   Double_t _fex1071[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1071[8] = {
   0.1587051,
   0.1244554,
   0.1056652,
   0.09610206,
   0.09339077,
   0.09734388,
   0.1108763,
   0.1440877};
   TGraphErrors *gre = new TGraphErrors(8,_fx1071,_fy1071,_fex1071,_fey1071);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{EDM} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1071 = new TH1F("Graph_Graph1071","",100,701.8838,2787.018);
   Graph_Graph1071->SetMinimum(1.172644);
   Graph_Graph1071->SetMaximum(2.045522);
   Graph_Graph1071->SetDirectory(0);
   Graph_Graph1071->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1071->SetLineColor(ci);
   Graph_Graph1071->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1071->GetXaxis()->CenterTitle(true);
   Graph_Graph1071->GetXaxis()->SetLabelFont(42);
   Graph_Graph1071->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1071->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1071->GetXaxis()->SetTitleFont(42);
   Graph_Graph1071->GetYaxis()->SetTitle("#delta'_{EDM} [mrad] / 250 MeV");
   Graph_Graph1071->GetYaxis()->CenterTitle(true);
   Graph_Graph1071->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1071->GetYaxis()->SetLabelFont(42);
   Graph_Graph1071->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1071->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1071->GetYaxis()->SetTitleFont(42);
   Graph_Graph1071->GetZaxis()->SetLabelFont(42);
   Graph_Graph1071->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1071);
   
   
   TF1 *pol01072 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01072->SetFillColor(19);
   pol01072->SetFillStyle(0);
   pol01072->SetLineColor(2);
   pol01072->SetLineWidth(2);
   pol01072->SetChisquare(3.135275);
   pol01072->SetNDF(7);
   pol01072->GetXaxis()->SetLabelFont(42);
   pol01072->GetXaxis()->SetTitleOffset(1);
   pol01072->GetXaxis()->SetTitleFont(42);
   pol01072->GetYaxis()->SetLabelFont(42);
   pol01072->GetYaxis()->SetTitleFont(42);
   pol01072->SetParameter(0,1.699288);
   pol01072->SetParError(0,0.03916899);
   pol01072->SetParLimits(0,0,0);
   pol01072->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01072);
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
