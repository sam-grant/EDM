void S12S18_g2_delta_prime_vs_p_trackReco_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 01:01:56 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(447.2191,-1.881431,3046.475,1.536246);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1025[8] = {
   880.4285,
   1123.038,
   1370.992,
   1619.971,
   1866.545,
   2115.011,
   2362.886,
   2613.266};
   Double_t _fy1025[8] = {
   -0.5762661,
   -0.2310204,
   0.1102668,
   0.3189132,
   -0.01576616,
   0.2635918,
   0.19157,
   0.6512342};
   Double_t _fex1025[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1025[8] = {
   0.3503264,
   0.2822115,
   0.2593932,
   0.253443,
   0.2670962,
   0.3049467,
   0.3700354,
   0.4345955};
   TGraphErrors *gre = new TGraphErrors(8,_fx1025,_fy1025,_fex1025,_fey1025);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1025 = new TH1F("Graph_Graph1025","",100,707.1447,2786.549);
   Graph_Graph1025->SetMinimum(-1.539664);
   Graph_Graph1025->SetMaximum(1.194479);
   Graph_Graph1025->SetDirectory(0);
   Graph_Graph1025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1025->SetLineColor(ci);
   Graph_Graph1025->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1025->GetXaxis()->CenterTitle(true);
   Graph_Graph1025->GetXaxis()->SetLabelFont(42);
   Graph_Graph1025->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1025->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1025->GetXaxis()->SetTitleFont(42);
   Graph_Graph1025->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1025->GetYaxis()->CenterTitle(true);
   Graph_Graph1025->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1025->GetYaxis()->SetLabelFont(42);
   Graph_Graph1025->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1025->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1025->GetYaxis()->SetTitleFont(42);
   Graph_Graph1025->GetZaxis()->SetLabelFont(42);
   Graph_Graph1025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1025);
   
   
   TF1 *pol01026 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01026->SetFillColor(19);
   pol01026->SetFillStyle(0);
   pol01026->SetLineColor(2);
   pol01026->SetLineWidth(2);
   pol01026->SetChisquare(7.931428);
   pol01026->SetNDF(7);
   pol01026->GetXaxis()->SetLabelFont(42);
   pol01026->GetXaxis()->SetTitleOffset(1);
   pol01026->GetXaxis()->SetTitleFont(42);
   pol01026->GetYaxis()->SetLabelFont(42);
   pol01026->GetYaxis()->SetTitleFont(42);
   pol01026->SetParameter(0,0.07308449);
   pol01026->SetParError(0,0.1062969);
   pol01026->SetParLimits(0,0,0);
   pol01026->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01026);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Sim: reco vertices","lpf");
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
