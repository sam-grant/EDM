void S12_EDM_delta_prime_vs_p_750-2750MeV_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 10:59:57 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(350.1731,-1.514712,3144.974,2.235288);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1013[16] = {
   815.9733,
   938.7135,
   1062.734,
   1188.27,
   1312.739,
   1435.93,
   1561.976,
   1685.237,
   1810.655,
   1935.236,
   2060.303,
   2185.135,
   2309.226,
   2432.987,
   2559.503,
   2679.174};
   Double_t _fy1013[16] = {
   1.308184,
   0.2929926,
   0.8622399,
   -0.290446,
   0.8067053,
   -0.1466204,
   0.2489426,
   0.2023115,
   0.1179953,
   0.5542757,
   0.6084544,
   0.3298806,
   0.9865027,
   0.9134872,
   -0.02122072,
   0.9361252};
   Double_t _fex1013[16] = {
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
   Double_t _fey1013[16] = {
   0.679894,
   0.5000029,
   0.4068061,
   0.3459242,
   0.3119164,
   0.2880255,
   0.2867755,
   0.2795215,
   0.296834,
   0.3127025,
   0.347985,
   0.3859366,
   0.4561252,
   0.579458,
   0.7867567,
   1.198477};
   TGraphErrors *gre = new TGraphErrors(16,_fx1013,_fy1013,_fex1013,_fey1013);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","S12",100,629.6532,2865.494);
   Graph_Graph1013->SetMinimum(-1.139712);
   Graph_Graph1013->SetMaximum(1.860288);
   Graph_Graph1013->SetDirectory(0);
   Graph_Graph1013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1013->SetLineColor(ci);
   Graph_Graph1013->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1013->GetXaxis()->CenterTitle(true);
   Graph_Graph1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph1013->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph1013->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1013->GetYaxis()->CenterTitle(true);
   Graph_Graph1013->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph1013->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1013->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph1013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1013);
   
   
   TF1 *pol01014 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01014->SetFillColor(19);
   pol01014->SetFillStyle(0);
   pol01014->SetLineColor(2);
   pol01014->SetLineWidth(2);
   pol01014->SetChisquare(17.46715);
   pol01014->SetNDF(15);
   pol01014->GetXaxis()->SetLabelFont(42);
   pol01014->GetXaxis()->SetTitleOffset(1);
   pol01014->GetXaxis()->SetTitleFont(42);
   pol01014->GetYaxis()->SetLabelFont(42);
   pol01014->GetYaxis()->SetTitleFont(42);
   pol01014->SetParameter(0,0.3602877);
   pol01014->SetParError(0,0.09345467);
   pol01014->SetParLimits(0,0,0);
   pol01014->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01014);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.36
#pm0.09
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
