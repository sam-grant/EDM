void S12_g2_delta_prime_plus_vs_p_750-2500MeV_Run-1d_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(515.2849,-1.801482,2728.515,1.475503);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1129[7] = {
   884.1567,
   1127.482,
   1373.619,
   1620.287,
   1866.945,
   2116.357,
   2359.644};
   Double_t _fy1129[7] = {
   0.2280421,
   0.2075908,
   0.2586441,
   0.0051046,
   -0.04569167,
   -0.07011476,
   -0.5053072};
   Double_t _fex1129[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1129[7] = {
   0.1697625,
   0.1457218,
   0.1047049,
   0.09904608,
   0.1248449,
   0.167821,
   0.2184766};
   TGraphErrors *gre = new TGraphErrors(7,_fx1129,_fy1129,_fex1129,_fey1129);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1129 = new TH1F("Graph_Graph1129","S12",100,736.608,2507.192);
   Graph_Graph1129->SetMinimum(-1.473784);
   Graph_Graph1129->SetMaximum(1.147805);
   Graph_Graph1129->SetDirectory(0);
   Graph_Graph1129->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1129->SetLineColor(ci);
   Graph_Graph1129->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1129->GetXaxis()->CenterTitle(true);
   Graph_Graph1129->GetXaxis()->SetLabelFont(42);
   Graph_Graph1129->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1129->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1129->GetXaxis()->SetTitleFont(42);
   Graph_Graph1129->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
   Graph_Graph1129->GetYaxis()->CenterTitle(true);
   Graph_Graph1129->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1129->GetYaxis()->SetLabelFont(42);
   Graph_Graph1129->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1129->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1129->GetYaxis()->SetTitleFont(42);
   Graph_Graph1129->GetZaxis()->SetLabelFont(42);
   Graph_Graph1129->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1129->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1129);
   
   
   TF1 *pol01130 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01130->SetFillColor(19);
   pol01130->SetFillStyle(0);
   pol01130->SetLineColor(2);
   pol01130->SetLineWidth(2);
   pol01130->SetChisquare(13.91435);
   pol01130->SetNDF(6);
   pol01130->GetXaxis()->SetLabelFont(42);
   pol01130->GetXaxis()->SetTitleOffset(1);
   pol01130->GetXaxis()->SetTitleFont(42);
   pol01130->GetYaxis()->SetLabelFont(42);
   pol01130->GetYaxis()->SetTitleFont(42);
   pol01130->SetParameter(0,0.06520895);
   pol01130->SetParError(0,0.05027999);
   pol01130->SetParLimits(0,0,0);
   pol01130->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01130);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1d","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.0652
#pm0.05
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
