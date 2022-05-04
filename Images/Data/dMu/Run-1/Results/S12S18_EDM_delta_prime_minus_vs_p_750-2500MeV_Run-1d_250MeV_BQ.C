void S12S18_EDM_delta_prime_minus_vs_p_750-2500MeV_Run-1d_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(515.0162,-0.7661286,2728.333,1.886586);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1125[7] = {
   883.9024,
   1127.365,
   1373.276,
   1619.898,
   1866.765,
   2116.081,
   2359.447};
   Double_t _fy1125[7] = {
   0.410722,
   0.4617581,
   0.6266209,
   0.4391902,
   0.5342177,
   0.6679349,
   0.7182622};
   Double_t _fex1125[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1125[7] = {
   0.1615791,
   0.1210956,
   0.09688173,
   0.08436089,
   0.08943903,
   0.11132,
   0.1530527};
   TGraphErrors *gre = new TGraphErrors(7,_fx1125,_fy1125,_fex1125,_fey1125);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1125 = new TH1F("Graph_Graph1125","S12S18",100,736.348,2507.002);
   Graph_Graph1125->SetMinimum(-0.5008571);
   Graph_Graph1125->SetMaximum(1.621315);
   Graph_Graph1125->SetDirectory(0);
   Graph_Graph1125->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1125->SetLineColor(ci);
   Graph_Graph1125->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1125->GetXaxis()->CenterTitle(true);
   Graph_Graph1125->GetXaxis()->SetLabelFont(42);
   Graph_Graph1125->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1125->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1125->GetXaxis()->SetTitleFont(42);
   Graph_Graph1125->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1125->GetYaxis()->CenterTitle(true);
   Graph_Graph1125->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1125->GetYaxis()->SetLabelFont(42);
   Graph_Graph1125->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1125->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1125->GetYaxis()->SetTitleFont(42);
   Graph_Graph1125->GetZaxis()->SetLabelFont(42);
   Graph_Graph1125->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1125->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1125);
   
   
   TF1 *pol01126 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01126->SetFillColor(19);
   pol01126->SetFillStyle(0);
   pol01126->SetLineColor(2);
   pol01126->SetLineWidth(2);
   pol01126->SetChisquare(5.959946);
   pol01126->SetNDF(6);
   pol01126->GetXaxis()->SetLabelFont(42);
   pol01126->GetXaxis()->SetTitleOffset(1);
   pol01126->GetXaxis()->SetTitleFont(42);
   pol01126->GetYaxis()->SetLabelFont(42);
   pol01126->GetYaxis()->SetTitleFont(42);
   pol01126->SetParameter(0,0.5433012);
   pol01126->SetParError(0,0.04075877);
   pol01126->SetParLimits(0,0,0);
   pol01126->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01126);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.543
#pm0.04
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
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
