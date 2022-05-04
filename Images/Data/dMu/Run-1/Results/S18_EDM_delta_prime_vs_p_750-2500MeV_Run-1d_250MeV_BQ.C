void S18_EDM_delta_prime_vs_p_750-2500MeV_Run-1d_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(514.7396,-0.9394522,2728.088,2.290751);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1115[7] = {
   883.631,
   1127.239,
   1372.894,
   1619.454,
   1866.549,
   2115.743,
   2359.196};
   Double_t _fy1115[7] = {
   0.3418565,
   0.4111683,
   0.6334772,
   0.3036508,
   0.6448943,
   1.015142,
   0.7086825};
   Double_t _fex1115[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1115[7] = {
   0.2082883,
   0.1979133,
   0.1304531,
   0.1255222,
   0.1359354,
   0.2025885,
   0.1845785};
   TGraphErrors *gre = new TGraphErrors(7,_fx1115,_fy1115,_fex1115,_fey1115);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1115 = new TH1F("Graph_Graph1115","S18",100,736.0744,2506.753);
   Graph_Graph1115->SetMinimum(-0.6164318);
   Graph_Graph1115->SetMaximum(1.967731);
   Graph_Graph1115->SetDirectory(0);
   Graph_Graph1115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1115->SetLineColor(ci);
   Graph_Graph1115->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1115->GetXaxis()->CenterTitle(true);
   Graph_Graph1115->GetXaxis()->SetLabelFont(42);
   Graph_Graph1115->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1115->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1115->GetXaxis()->SetTitleFont(42);
   Graph_Graph1115->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1115->GetYaxis()->CenterTitle(true);
   Graph_Graph1115->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1115->GetYaxis()->SetLabelFont(42);
   Graph_Graph1115->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1115->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1115->GetYaxis()->SetTitleFont(42);
   Graph_Graph1115->GetZaxis()->SetLabelFont(42);
   Graph_Graph1115->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1115->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1115);
   
   
   TF1 *pol01116 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01116->SetFillColor(19);
   pol01116->SetFillStyle(0);
   pol01116->SetLineColor(2);
   pol01116->SetLineWidth(2);
   pol01116->SetChisquare(12.23479);
   pol01116->SetNDF(6);
   pol01116->GetXaxis()->SetLabelFont(42);
   pol01116->GetXaxis()->SetTitleOffset(1);
   pol01116->GetXaxis()->SetTitleFont(42);
   pol01116->GetYaxis()->SetLabelFont(42);
   pol01116->GetYaxis()->SetTitleFont(42);
   pol01116->SetParameter(0,0.5573716);
   pol01116->SetParError(0,0.05990665);
   pol01116->SetParLimits(0,0,0);
   pol01116->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01116);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.557
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
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
