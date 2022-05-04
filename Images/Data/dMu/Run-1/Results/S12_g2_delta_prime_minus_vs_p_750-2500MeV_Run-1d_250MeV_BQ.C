void S12_g2_delta_prime_minus_vs_p_750-2500MeV_Run-1d_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(515.2849,-1.915949,2728.515,1.538794);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1131[7] = {
   884.1567,
   1127.482,
   1373.619,
   1620.287,
   1866.945,
   2116.357,
   2359.644};
   Double_t _fy1131[7] = {
   0.2541339,
   0.2288174,
   0.2842021,
   0.005612725,
   -0.05032599,
   -0.07955129,
   -0.5728117};
   Double_t _fex1131[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1131[7] = {
   0.1891862,
   0.1606222,
   0.1150514,
   0.1089054,
   0.1375074,
   0.1904075,
   0.2476631};
   TGraphErrors *gre = new TGraphErrors(7,_fx1131,_fy1131,_fex1131,_fey1131);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1131 = new TH1F("Graph_Graph1131","S12",100,736.608,2507.192);
   Graph_Graph1131->SetMinimum(-1.570475);
   Graph_Graph1131->SetMaximum(1.19332);
   Graph_Graph1131->SetDirectory(0);
   Graph_Graph1131->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1131->SetLineColor(ci);
   Graph_Graph1131->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1131->GetXaxis()->CenterTitle(true);
   Graph_Graph1131->GetXaxis()->SetLabelFont(42);
   Graph_Graph1131->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1131->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1131->GetXaxis()->SetTitleFont(42);
   Graph_Graph1131->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
   Graph_Graph1131->GetYaxis()->CenterTitle(true);
   Graph_Graph1131->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1131->GetYaxis()->SetLabelFont(42);
   Graph_Graph1131->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1131->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1131->GetYaxis()->SetTitleFont(42);
   Graph_Graph1131->GetZaxis()->SetLabelFont(42);
   Graph_Graph1131->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1131->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1131);
   
   
   TF1 *pol01132 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01132->SetFillColor(19);
   pol01132->SetFillStyle(0);
   pol01132->SetLineColor(2);
   pol01132->SetLineWidth(2);
   pol01132->SetChisquare(13.85641);
   pol01132->SetNDF(6);
   pol01132->GetXaxis()->SetLabelFont(42);
   pol01132->GetXaxis()->SetTitleOffset(1);
   pol01132->GetXaxis()->SetTitleFont(42);
   pol01132->GetYaxis()->SetLabelFont(42);
   pol01132->GetYaxis()->SetTitleFont(42);
   pol01132->SetParameter(0,0.07335674);
   pol01132->SetParError(0,0.05561275);
   pol01132->SetParLimits(0,0,0);
   pol01132->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01132);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.0734
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
