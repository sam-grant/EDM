void S18_g2_delta_prime_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 20:00:26 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-1.461729,2843.25,2.077379);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1033[14] = {
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437};
   Double_t _fy1033[14] = {
   0.3780161,
   0.8710272,
   -0.2562403,
   0.2021349,
   0.09230974,
   -0.4072408,
   -0.07060029,
   0.2125197,
   0.2294357,
   -0.03627297,
   -0.2457586,
   -0.2960383,
   -0.5010666,
   -0.1813866};
   Double_t _fex1033[14] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1033[14] = {
   0.4892551,
   0.3616447,
   0.293523,
   0.2515454,
   0.2308918,
   0.2178529,
   0.2200016,
   0.2205466,
   0.2427149,
   0.2666527,
   0.312385,
   0.371818,
   0.485401,
   0.7227102};
   TGraphErrors *gre = new TGraphErrors(14,_fx1033,_fy1033,_fex1033,_fey1033);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1033 = new TH1F("Graph_Graph1033","S18_",100,649.5,2599.5);
   Graph_Graph1033->SetMinimum(-1.107818);
   Graph_Graph1033->SetMaximum(1.723468);
   Graph_Graph1033->SetDirectory(0);
   Graph_Graph1033->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1033->SetLineColor(ci);
   Graph_Graph1033->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1033->GetXaxis()->CenterTitle(true);
   Graph_Graph1033->GetXaxis()->SetLabelFont(42);
   Graph_Graph1033->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1033->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1033->GetXaxis()->SetTitleFont(42);
   Graph_Graph1033->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1033->GetYaxis()->CenterTitle(true);
   Graph_Graph1033->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1033->GetYaxis()->SetLabelFont(42);
   Graph_Graph1033->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1033->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1033->GetYaxis()->SetTitleFont(42);
   Graph_Graph1033->GetZaxis()->SetLabelFont(42);
   Graph_Graph1033->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1033);
   
   
   TF1 *pol01034 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01034->SetFillColor(19);
   pol01034->SetFillStyle(0);
   pol01034->SetLineColor(2);
   pol01034->SetLineWidth(2);
   pol01034->SetChisquare(15.78162);
   pol01034->SetNDF(13);
   pol01034->GetXaxis()->SetLabelFont(42);
   pol01034->GetXaxis()->SetTitleOffset(1);
   pol01034->GetXaxis()->SetTitleFont(42);
   pol01034->GetYaxis()->SetLabelFont(42);
   pol01034->GetYaxis()->SetTitleFont(42);
   pol01034->SetParameter(0,0.004410156);
   pol01034->SetParError(0,0.07560129);
   pol01034->SetParLimits(0,0,0);
   pol01034->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01034);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1c","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.0044
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
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
