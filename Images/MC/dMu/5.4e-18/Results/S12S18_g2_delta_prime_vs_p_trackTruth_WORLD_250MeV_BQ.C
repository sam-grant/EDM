void S12S18_g2_delta_prime_vs_p_trackTruth_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:55:36 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(447.2779,-1.95161,3046.33,1.554001);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1121[8] = {
   880.4532,
   1123.026,
   1371.063,
   1620.016,
   1866.622,
   2114.934,
   2362.94,
   2613.154};
   Double_t _fy1121[8] = {
   -0.6242163,
   -0.1392855,
   0.1998041,
   0.2808644,
   -0.1183474,
   0.3943783,
   0.1650759,
   0.6532768};
   Double_t _fex1121[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1121[8] = {
   0.3552119,
   0.2838411,
   0.2593504,
   0.2528735,
   0.2663146,
   0.3042182,
   0.3713827,
   0.4401306};
   TGraphErrors *gre = new TGraphErrors(8,_fx1121,_fy1121,_fex1121,_fey1121);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1121 = new TH1F("Graph_Graph1121","",100,707.1831,2786.425);
   Graph_Graph1121->SetMinimum(-1.601049);
   Graph_Graph1121->SetMaximum(1.20344);
   Graph_Graph1121->SetDirectory(0);
   Graph_Graph1121->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1121->SetLineColor(ci);
   Graph_Graph1121->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1121->GetXaxis()->CenterTitle(true);
   Graph_Graph1121->GetXaxis()->SetLabelFont(42);
   Graph_Graph1121->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1121->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1121->GetXaxis()->SetTitleFont(42);
   Graph_Graph1121->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1121->GetYaxis()->CenterTitle(true);
   Graph_Graph1121->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1121->GetYaxis()->SetLabelFont(42);
   Graph_Graph1121->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1121->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1121->GetYaxis()->SetTitleFont(42);
   Graph_Graph1121->GetZaxis()->SetLabelFont(42);
   Graph_Graph1121->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1121);
   
   
   TF1 *pol01122 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01122->SetFillColor(19);
   pol01122->SetFillStyle(0);
   pol01122->SetLineColor(2);
   pol01122->SetLineWidth(2);
   pol01122->SetChisquare(8.736059);
   pol01122->SetNDF(7);
   pol01122->GetXaxis()->SetLabelFont(42);
   pol01122->GetXaxis()->SetTitleOffset(1);
   pol01122->GetXaxis()->SetTitleFont(42);
   pol01122->GetYaxis()->SetLabelFont(42);
   pol01122->GetYaxis()->SetTitleFont(42);
   pol01122->SetParameter(0,0.0890261);
   pol01122->SetParError(0,0.1065032);
   pol01122->SetParLimits(0,0,0);
   pol01122->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01122);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.089
#pm0.1
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
