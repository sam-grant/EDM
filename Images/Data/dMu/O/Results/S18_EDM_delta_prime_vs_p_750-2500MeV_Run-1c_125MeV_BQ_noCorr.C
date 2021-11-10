void S18_EDM_delta_prime_vs_p_750-2500MeV_Run-1c_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 13:49:15 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-0.2800259,2843.25,0.1238957);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1075[14] = {
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437};
   Double_t _fy1075[14] = {
   -0.09925915,
   0.02749927,
   0.009283538,
   -0.02156343,
   0.005503218,
   -0.012759,
   -0.03434157,
   -0.01791361,
   -0.03006793,
   -0.02593287,
   0.04222019,
   -0.03075241,
   0.01957218,
   -0.02076728};
   Double_t _fex1075[14] = {
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
   Double_t _fey1075[14] = {
   0.05104532,
   0.04224353,
   0.03721926,
   0.03361137,
   0.03183875,
   0.03040513,
   0.03054381,
   0.0297013,
   0.03100127,
   0.03148928,
   0.03302665,
   0.03361586,
   0.03542367,
   0.03835864};
   TGraphErrors *gre = new TGraphErrors(14,_fx1075,_fy1075,_fex1075,_fey1075);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1075 = new TH1F("Graph_Graph1075","S18_",100,649.5,2599.5);
   Graph_Graph1075->SetMinimum(-0.2396338);
   Graph_Graph1075->SetMaximum(0.08350351);
   Graph_Graph1075->SetDirectory(0);
   Graph_Graph1075->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1075->SetLineColor(ci);
   Graph_Graph1075->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1075->GetXaxis()->CenterTitle(true);
   Graph_Graph1075->GetXaxis()->SetLabelFont(42);
   Graph_Graph1075->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1075->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1075->GetXaxis()->SetTitleFont(42);
   Graph_Graph1075->GetYaxis()->SetTitle("#delta'_{s}^{} [mrad] / 125 MeV");
   Graph_Graph1075->GetYaxis()->CenterTitle(true);
   Graph_Graph1075->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1075->GetYaxis()->SetLabelFont(42);
   Graph_Graph1075->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1075->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1075->GetYaxis()->SetTitleFont(42);
   Graph_Graph1075->GetZaxis()->SetLabelFont(42);
   Graph_Graph1075->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1075->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1075);
   
   
   TF1 *pol01076 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01076->SetFillColor(19);
   pol01076->SetFillStyle(0);
   pol01076->SetLineColor(2);
   pol01076->SetLineWidth(2);
   pol01076->SetChisquare(9.470379);
   pol01076->SetNDF(13);
   pol01076->GetXaxis()->SetLabelFont(42);
   pol01076->GetXaxis()->SetTitleOffset(1);
   pol01076->GetXaxis()->SetTitleFont(42);
   pol01076->GetYaxis()->SetLabelFont(42);
   pol01076->GetYaxis()->SetTitleFont(42);
   pol01076->SetParameter(0,-0.01193387);
   pol01076->SetParError(0,0.009071389);
   pol01076->SetParLimits(0,0,0);
   pol01076->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01076);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.012
#pm0.009
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
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
