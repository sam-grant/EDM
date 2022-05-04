void S12_g2_delta_prime_minus_vs_p_750-2500MeV_Run-1c_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(515.5161,-1.859662,2728.522,1.763194);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1095[7] = {
   884.3505,
   1127.522,
   1373.594,
   1620.299,
   1867.139,
   2116.241,
   2359.688};
   Double_t _fy1095[7] = {
   0.390347,
   0.2362206,
   0.03582363,
   -0.1689122,
   0.1054309,
   -0.4865309,
   0.1822298};
   Double_t _fex1095[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1095[7] = {
   0.260561,
   0.2203979,
   0.1578063,
   0.1495671,
   0.1880611,
   0.2608454,
   0.3392237};
   TGraphErrors *gre = new TGraphErrors(7,_fx1095,_fy1095,_fex1095,_fey1095);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1095 = new TH1F("Graph_Graph1095","S12",100,736.8167,2507.221);
   Graph_Graph1095->SetMinimum(-1.497376);
   Graph_Graph1095->SetMaximum(1.400908);
   Graph_Graph1095->SetDirectory(0);
   Graph_Graph1095->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1095->SetLineColor(ci);
   Graph_Graph1095->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1095->GetXaxis()->CenterTitle(true);
   Graph_Graph1095->GetXaxis()->SetLabelFont(42);
   Graph_Graph1095->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1095->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1095->GetXaxis()->SetTitleFont(42);
   Graph_Graph1095->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
   Graph_Graph1095->GetYaxis()->CenterTitle(true);
   Graph_Graph1095->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1095->GetYaxis()->SetLabelFont(42);
   Graph_Graph1095->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1095->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1095->GetYaxis()->SetTitleFont(42);
   Graph_Graph1095->GetZaxis()->SetLabelFont(42);
   Graph_Graph1095->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1095);
   
   
   TF1 *pol01096 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01096->SetFillColor(19);
   pol01096->SetFillStyle(0);
   pol01096->SetLineColor(2);
   pol01096->SetLineWidth(2);
   pol01096->SetChisquare(8.780543);
   pol01096->SetNDF(6);
   pol01096->GetXaxis()->SetLabelFont(42);
   pol01096->GetXaxis()->SetTitleOffset(1);
   pol01096->GetXaxis()->SetTitleFont(42);
   pol01096->GetYaxis()->SetLabelFont(42);
   pol01096->GetYaxis()->SetTitleFont(42);
   pol01096->SetParameter(0,0.01114053);
   pol01096->SetParError(0,0.07628559);
   pol01096->SetParLimits(0,0,0);
   pol01096->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01096);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.0111
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
