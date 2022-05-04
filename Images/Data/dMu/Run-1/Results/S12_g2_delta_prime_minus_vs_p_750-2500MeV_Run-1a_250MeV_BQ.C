void S12_g2_delta_prime_minus_vs_p_750-2500MeV_Run-1a_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  4 12:58:25 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(515.3999,-2.583737,2728.91,1.645007);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1063[7] = {
   884.3183,
   1127.644,
   1373.563,
   1620.325,
   1867.212,
   2116.298,
   2359.992};
   Double_t _fy1063[7] = {
   0.1565105,
   -0.02652099,
   0.2209717,
   0.0009968305,
   -0.6534132,
   -0.1449889,
   -0.8140572};
   Double_t _fex1063[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1063[7] = {
   0.3156223,
   0.2649541,
   0.2275908,
   0.2217764,
   0.3528573,
   0.255894,
   0.5968051};
   TGraphErrors *gre = new TGraphErrors(7,_fx1063,_fy1063,_fex1063,_fey1063);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1063 = new TH1F("Graph_Graph1063","S12",100,736.7509,2507.559);
   Graph_Graph1063->SetMinimum(-2.160862);
   Graph_Graph1063->SetMaximum(1.222133);
   Graph_Graph1063->SetDirectory(0);
   Graph_Graph1063->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1063->SetLineColor(ci);
   Graph_Graph1063->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1063->GetXaxis()->CenterTitle(true);
   Graph_Graph1063->GetXaxis()->SetLabelFont(42);
   Graph_Graph1063->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1063->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1063->GetXaxis()->SetTitleFont(42);
   Graph_Graph1063->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
   Graph_Graph1063->GetYaxis()->CenterTitle(true);
   Graph_Graph1063->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1063->GetYaxis()->SetLabelFont(42);
   Graph_Graph1063->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1063->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1063->GetYaxis()->SetTitleFont(42);
   Graph_Graph1063->GetZaxis()->SetLabelFont(42);
   Graph_Graph1063->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1063);
   
   
   TF1 *pol01064 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01064->SetFillColor(19);
   pol01064->SetFillStyle(0);
   pol01064->SetLineColor(2);
   pol01064->SetLineWidth(2);
   pol01064->SetChisquare(6.606963);
   pol01064->SetNDF(6);
   pol01064->GetXaxis()->SetLabelFont(42);
   pol01064->GetXaxis()->SetTitleOffset(1);
   pol01064->GetXaxis()->SetTitleFont(42);
   pol01064->GetYaxis()->SetLabelFont(42);
   pol01064->GetYaxis()->SetTitleFont(42);
   pol01064->SetParameter(0,-0.04740603);
   pol01064->SetParError(0,0.1053909);
   pol01064->SetParLimits(0,0,0);
   pol01064->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01064);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.0474
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
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
