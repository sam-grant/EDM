void S12S18_g2_delta_prime_vs_p_750-2500MeV_Run-1b_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:53 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(515.0943,-1.531611,2728.411,1.448167);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1067[7] = {
   883.9805,
   1127.404,
   1373.257,
   1619.935,
   1866.796,
   2116.303,
   2359.525};
   Double_t _fy1067[7] = {
   0.1459847,
   -0.2644667,
   0.05507357,
   0.1959459,
   -0.322514,
   -0.1455869,
   -0.24008};
   Double_t _fex1067[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1067[7] = {
   0.2542042,
   0.1913261,
   0.1526774,
   0.1326636,
   0.1408379,
   0.1743388,
   0.243553};
   TGraphErrors *gre = new TGraphErrors(7,_fx1067,_fy1067,_fex1067,_fey1067);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1067 = new TH1F("Graph_Graph1067","S12S18",100,736.426,2507.08);
   Graph_Graph1067->SetMinimum(-1.233633);
   Graph_Graph1067->SetMaximum(1.150189);
   Graph_Graph1067->SetDirectory(0);
   Graph_Graph1067->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1067->SetLineColor(ci);
   Graph_Graph1067->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1067->GetXaxis()->CenterTitle(true);
   Graph_Graph1067->GetXaxis()->SetLabelFont(42);
   Graph_Graph1067->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1067->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1067->GetXaxis()->SetTitleFont(42);
   Graph_Graph1067->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
   Graph_Graph1067->GetYaxis()->CenterTitle(true);
   Graph_Graph1067->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1067->GetYaxis()->SetLabelFont(42);
   Graph_Graph1067->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1067->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1067->GetYaxis()->SetTitleFont(42);
   Graph_Graph1067->GetZaxis()->SetLabelFont(42);
   Graph_Graph1067->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1067);
   
   
   TF1 *pol01068 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01068->SetFillColor(19);
   pol01068->SetFillStyle(0);
   pol01068->SetLineColor(2);
   pol01068->SetLineWidth(2);
   pol01068->SetChisquare(10.33432);
   pol01068->SetNDF(6);
   pol01068->GetXaxis()->SetLabelFont(42);
   pol01068->GetXaxis()->SetTitleOffset(1);
   pol01068->GetXaxis()->SetTitleFont(42);
   pol01068->GetYaxis()->SetLabelFont(42);
   pol01068->GetYaxis()->SetTitleFont(42);
   pol01068->SetParameter(0,-0.06826243);
   pol01068->SetParError(0,0.06419143);
   pol01068->SetParLimits(0,0,0);
   pol01068->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01068);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1b","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.0683
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
