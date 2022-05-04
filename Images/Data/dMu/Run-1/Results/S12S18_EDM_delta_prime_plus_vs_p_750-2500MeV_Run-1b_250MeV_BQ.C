void S12S18_EDM_delta_prime_plus_vs_p_750-2500MeV_Run-1b_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(515.0943,-0.998857,2728.411,2.078642);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1051[7] = {
   883.9805,
   1127.404,
   1373.257,
   1619.935,
   1866.796,
   2116.303,
   2359.525};
   Double_t _fy1051[7] = {
   0.7788313,
   0.4686708,
   0.3331238,
   0.1901215,
   0.1930399,
   0.4431955,
   0.7831965};
   Double_t _fex1051[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1051[7] = {
   0.2420611,
   0.1830584,
   0.1464997,
   0.1270203,
   0.134147,
   0.1618699,
   0.2216734};
   TGraphErrors *gre = new TGraphErrors(7,_fx1051,_fy1051,_fex1051,_fey1051);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1051 = new TH1F("Graph_Graph1051","S12S18",100,736.426,2507.08);
   Graph_Graph1051->SetMinimum(-0.691107);
   Graph_Graph1051->SetMaximum(1.770892);
   Graph_Graph1051->SetDirectory(0);
   Graph_Graph1051->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1051->SetLineColor(ci);
   Graph_Graph1051->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1051->GetXaxis()->CenterTitle(true);
   Graph_Graph1051->GetXaxis()->SetLabelFont(42);
   Graph_Graph1051->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1051->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1051->GetXaxis()->SetTitleFont(42);
   Graph_Graph1051->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1051->GetYaxis()->CenterTitle(true);
   Graph_Graph1051->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1051->GetYaxis()->SetLabelFont(42);
   Graph_Graph1051->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1051->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1051->GetYaxis()->SetTitleFont(42);
   Graph_Graph1051->GetZaxis()->SetLabelFont(42);
   Graph_Graph1051->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1051);
   
   
   TF1 *pol01052 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01052->SetFillColor(19);
   pol01052->SetFillStyle(0);
   pol01052->SetLineColor(2);
   pol01052->SetLineWidth(2);
   pol01052->SetChisquare(10.62179);
   pol01052->SetNDF(6);
   pol01052->GetXaxis()->SetLabelFont(42);
   pol01052->GetXaxis()->SetTitleOffset(1);
   pol01052->GetXaxis()->SetTitleFont(42);
   pol01052->GetYaxis()->SetLabelFont(42);
   pol01052->GetYaxis()->SetTitleFont(42);
   pol01052->SetParameter(0,0.3641514);
   pol01052->SetParError(0,0.06090686);
   pol01052->SetParLimits(0,0,0);
   pol01052->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01052);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.364
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
