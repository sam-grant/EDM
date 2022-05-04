void S12S18_g2_delta_prime_plus_vs_p_750-2500MeV_Run-1d_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(515.0162,-1.47105,2728.333,1.493535);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1141[7] = {
   883.9024,
   1127.365,
   1373.276,
   1619.898,
   1866.765,
   2116.081,
   2359.447};
   Double_t _fy1141[7] = {
   0.3024036,
   0.1475452,
   0.1025228,
   0.05061016,
   -0.1721111,
   0.07950764,
   -0.2850238};
   Double_t _fex1141[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1141[7] = {
   0.1446732,
   0.1093952,
   0.08778597,
   0.07647554,
   0.08142775,
   0.0994208,
   0.1395678};
   TGraphErrors *gre = new TGraphErrors(7,_fx1141,_fy1141,_fex1141,_fey1141);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1141 = new TH1F("Graph_Graph1141","S12S18",100,736.348,2507.002);
   Graph_Graph1141->SetMinimum(-1.174592);
   Graph_Graph1141->SetMaximum(1.197077);
   Graph_Graph1141->SetDirectory(0);
   Graph_Graph1141->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1141->SetLineColor(ci);
   Graph_Graph1141->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1141->GetXaxis()->CenterTitle(true);
   Graph_Graph1141->GetXaxis()->SetLabelFont(42);
   Graph_Graph1141->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1141->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1141->GetXaxis()->SetTitleFont(42);
   Graph_Graph1141->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
   Graph_Graph1141->GetYaxis()->CenterTitle(true);
   Graph_Graph1141->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1141->GetYaxis()->SetLabelFont(42);
   Graph_Graph1141->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1141->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1141->GetYaxis()->SetTitleFont(42);
   Graph_Graph1141->GetZaxis()->SetLabelFont(42);
   Graph_Graph1141->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1141->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1141);
   
   
   TF1 *pol01142 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01142->SetFillColor(19);
   pol01142->SetFillStyle(0);
   pol01142->SetLineColor(2);
   pol01142->SetLineWidth(2);
   pol01142->SetChisquare(16.91145);
   pol01142->SetNDF(6);
   pol01142->GetXaxis()->SetLabelFont(42);
   pol01142->GetXaxis()->SetTitleOffset(1);
   pol01142->GetXaxis()->SetTitleFont(42);
   pol01142->GetYaxis()->SetLabelFont(42);
   pol01142->GetYaxis()->SetTitleFont(42);
   pol01142->SetParameter(0,0.02201243);
   pol01142->SetParError(0,0.03687529);
   pol01142->SetParLimits(0,0,0);
   pol01142->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01142);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.022
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
