void S12S18_g2_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:14:06 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(447.2191,-1.881431,3046.475,1.536246);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1137[8] = {
   880.4285,
   1123.038,
   1370.992,
   1619.971,
   1866.545,
   2115.011,
   2362.886,
   2613.266};
   Double_t _fy1137[8] = {
   -0.5762661,
   -0.2310204,
   0.1102668,
   0.3189132,
   -0.01576616,
   0.2635918,
   0.19157,
   0.6512342};
   Double_t _fex1137[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1137[8] = {
   0.3503264,
   0.2822115,
   0.2593932,
   0.253443,
   0.2670962,
   0.3049467,
   0.3700354,
   0.4345955};
   TGraphErrors *gre = new TGraphErrors(8,_fx1137,_fy1137,_fex1137,_fey1137);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1137 = new TH1F("Graph_Graph1137","",100,707.1447,2786.549);
   Graph_Graph1137->SetMinimum(-1.539664);
   Graph_Graph1137->SetMaximum(1.194479);
   Graph_Graph1137->SetDirectory(0);
   Graph_Graph1137->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1137->SetLineColor(ci);
   Graph_Graph1137->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1137->GetXaxis()->CenterTitle(true);
   Graph_Graph1137->GetXaxis()->SetLabelFont(42);
   Graph_Graph1137->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1137->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1137->GetXaxis()->SetTitleFont(42);
   Graph_Graph1137->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1137->GetYaxis()->CenterTitle(true);
   Graph_Graph1137->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1137->GetYaxis()->SetLabelFont(42);
   Graph_Graph1137->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1137->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1137->GetYaxis()->SetTitleFont(42);
   Graph_Graph1137->GetZaxis()->SetLabelFont(42);
   Graph_Graph1137->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1137->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1137);
   
   
   TF1 *pol01138 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01138->SetFillColor(19);
   pol01138->SetFillStyle(0);
   pol01138->SetLineColor(2);
   pol01138->SetLineWidth(2);
   pol01138->SetChisquare(7.931428);
   pol01138->SetNDF(7);
   pol01138->GetXaxis()->SetLabelFont(42);
   pol01138->GetXaxis()->SetTitleOffset(1);
   pol01138->GetXaxis()->SetTitleFont(42);
   pol01138->GetYaxis()->SetLabelFont(42);
   pol01138->GetYaxis()->SetTitleFont(42);
   pol01138->SetParameter(0,0.07308449);
   pol01138->SetParError(0,0.1062969);
   pol01138->SetParLimits(0,0,0);
   pol01138->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01138);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.073
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
