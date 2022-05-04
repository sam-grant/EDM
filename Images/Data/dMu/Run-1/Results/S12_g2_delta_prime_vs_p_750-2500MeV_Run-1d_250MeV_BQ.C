void S12_g2_delta_prime_vs_p_750-2500MeV_Run-1d_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(515.2849,-1.855156,2728.515,1.505385);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1127[7] = {
   884.1567,
   1127.482,
   1373.619,
   1620.287,
   1866.945,
   2116.357,
   2359.644};
   Double_t _fy1127[7] = {
   0.240382,
   0.2176879,
   0.2708214,
   0.005346617,
   -0.04789699,
   -0.07453554,
   -0.5369461};
   Double_t _fex1127[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1127[7] = {
   0.1789488,
   0.1528097,
   0.1096346,
   0.103742,
   0.1308706,
   0.1784022,
   0.2321561};
   TGraphErrors *gre = new TGraphErrors(7,_fx1127,_fy1127,_fex1127,_fey1127);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1127 = new TH1F("Graph_Graph1127","S12",100,736.608,2507.192);
   Graph_Graph1127->SetMinimum(-1.519102);
   Graph_Graph1127->SetMaximum(1.169331);
   Graph_Graph1127->SetDirectory(0);
   Graph_Graph1127->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1127->SetLineColor(ci);
   Graph_Graph1127->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1127->GetXaxis()->CenterTitle(true);
   Graph_Graph1127->GetXaxis()->SetLabelFont(42);
   Graph_Graph1127->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1127->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1127->GetXaxis()->SetTitleFont(42);
   Graph_Graph1127->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
   Graph_Graph1127->GetYaxis()->CenterTitle(true);
   Graph_Graph1127->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1127->GetYaxis()->SetLabelFont(42);
   Graph_Graph1127->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1127->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1127->GetYaxis()->SetTitleFont(42);
   Graph_Graph1127->GetZaxis()->SetLabelFont(42);
   Graph_Graph1127->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1127->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1127);
   
   
   TF1 *pol01128 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01128->SetFillColor(19);
   pol01128->SetFillStyle(0);
   pol01128->SetLineColor(2);
   pol01128->SetLineWidth(2);
   pol01128->SetChisquare(13.88691);
   pol01128->SetNDF(6);
   pol01128->GetXaxis()->SetLabelFont(42);
   pol01128->GetXaxis()->SetTitleOffset(1);
   pol01128->GetXaxis()->SetTitleFont(42);
   pol01128->GetYaxis()->SetLabelFont(42);
   pol01128->GetYaxis()->SetTitleFont(42);
   pol01128->SetParameter(0,0.06905024);
   pol01128->SetParError(0,0.05281285);
   pol01128->SetParLimits(0,0,0);
   pol01128->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01128);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.0691
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
