void S18_g2_delta_prime_minus_vs_p_750-2500MeV_Run-1d_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(514.7396,-1.613042,2728.088,1.661083);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1137[7] = {
   883.631,
   1127.239,
   1372.894,
   1619.454,
   1866.549,
   2115.743,
   2359.196};
   Double_t _fy1137[7] = {
   0.3552375,
   0.09615428,
   -0.1252649,
   0.1199963,
   -0.3923956,
   0.3643597,
   -0.09365812};
   Double_t _fex1137[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1137[7] = {
   0.2196918,
   0.207191,
   0.1363371,
   0.1313942,
   0.1432336,
   0.2193105,
   0.2036808};
   TGraphErrors *gre = new TGraphErrors(7,_fx1137,_fy1137,_fex1137,_fey1137);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1137 = new TH1F("Graph_Graph1137","S18",100,736.0744,2506.753);
   Graph_Graph1137->SetMinimum(-1.285629);
   Graph_Graph1137->SetMaximum(1.33367);
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
   Graph_Graph1137->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
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
   
   
   TF1 *pol01138 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01138->SetFillColor(19);
   pol01138->SetFillStyle(0);
   pol01138->SetLineColor(2);
   pol01138->SetLineWidth(2);
   pol01138->SetChisquare(14.92093);
   pol01138->SetNDF(6);
   pol01138->GetXaxis()->SetLabelFont(42);
   pol01138->GetXaxis()->SetTitleOffset(1);
   pol01138->GetXaxis()->SetTitleFont(42);
   pol01138->GetYaxis()->SetLabelFont(42);
   pol01138->GetYaxis()->SetTitleFont(42);
   pol01138->SetParameter(0,-0.01602825);
   pol01138->SetParError(0,0.06332491);
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
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1d","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.016
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
