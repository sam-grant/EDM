void S12S18_g2_delta_prime_vs_p_750-2750MeV_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 11:01:06 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(350.1667,-1.871137,3144.291,1.878863);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1047[16] = {
   815.8541,
   938.5214,
   1062.733,
   1188.227,
   1312.688,
   1435.772,
   1561.976,
   1685.084,
   1810.538,
   1935.021,
   2060.267,
   2184.908,
   2309.091,
   2433.063,
   2559.665,
   2678.604};
   Double_t _fy1047[16] = {
   0.6212564,
   0.1418671,
   0.2768799,
   0.0276289,
   0.1997196,
   0.05110659,
   -0.1222612,
   0.1990755,
   -0.1799424,
   -0.3401236,
   0.06518389,
   0.08713069,
   -0.1713845,
   -0.4363753,
   -0.260459,
   0.1478234};
   Double_t _fex1047[16] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1047[16] = {
   0.2780928,
   0.2192345,
   0.1862557,
   0.163767,
   0.1516755,
   0.1423373,
   0.1422416,
   0.1387312,
   0.1466009,
   0.1513856,
   0.1641598,
   0.1742414,
   0.1935474,
   0.2248927,
   0.2613967,
   0.3173113};
   TGraphErrors *gre = new TGraphErrors(16,_fx1047,_fy1047,_fex1047,_fey1047);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1047 = new TH1F("Graph_Graph1047","S12S18",100,629.5792,2864.879);
   Graph_Graph1047->SetMinimum(-1.496137);
   Graph_Graph1047->SetMaximum(1.503863);
   Graph_Graph1047->SetDirectory(0);
   Graph_Graph1047->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1047->SetLineColor(ci);
   Graph_Graph1047->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1047->GetXaxis()->CenterTitle(true);
   Graph_Graph1047->GetXaxis()->SetLabelFont(42);
   Graph_Graph1047->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1047->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1047->GetXaxis()->SetTitleFont(42);
   Graph_Graph1047->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1047->GetYaxis()->CenterTitle(true);
   Graph_Graph1047->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1047->GetYaxis()->SetLabelFont(42);
   Graph_Graph1047->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1047->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1047->GetYaxis()->SetTitleFont(42);
   Graph_Graph1047->GetZaxis()->SetLabelFont(42);
   Graph_Graph1047->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1047);
   
   
   TF1 *pol01048 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01048->SetFillColor(19);
   pol01048->SetFillStyle(0);
   pol01048->SetLineColor(2);
   pol01048->SetLineWidth(2);
   pol01048->SetChisquare(25.02177);
   pol01048->SetNDF(15);
   pol01048->GetXaxis()->SetLabelFont(42);
   pol01048->GetXaxis()->SetTitleOffset(1);
   pol01048->GetXaxis()->SetTitleFont(42);
   pol01048->GetYaxis()->SetLabelFont(42);
   pol01048->GetYaxis()->SetTitleFont(42);
   pol01048->SetParameter(0,0.003863137);
   pol01048->SetParError(0,0.04363107);
   pol01048->SetParLimits(0,0,0);
   pol01048->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01048);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.0039
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
