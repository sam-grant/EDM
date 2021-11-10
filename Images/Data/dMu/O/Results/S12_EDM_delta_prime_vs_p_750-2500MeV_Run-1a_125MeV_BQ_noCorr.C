void S12_EDM_delta_prime_vs_p_750-2500MeV_Run-1a_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 13:49:14 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-0.2531775,2843.25,0.2457257);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1049[14] = {
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
   Double_t _fy1049[14] = {
   -0.003725919,
   0.01758526,
   -0.02247815,
   0.01206428,
   -0.02862572,
   -0.09557811,
   0.01850904,
   -0.01846881,
   -0.1188271,
   0.007712939,
   -0.03616552,
   0.06898029,
   -0.03344359,
   0.1129977};
   Double_t _fex1049[14] = {
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
   Double_t _fey1049[14] = {
   0.07256774,
   0.05941138,
   0.05224258,
   0.04727634,
   0.04398997,
   0.04173698,
   0.04176009,
   0.04025059,
   0.04138125,
   0.04162108,
   0.04336358,
   0.04384121,
   0.04562816,
   0.04917207};
   TGraphErrors *gre = new TGraphErrors(14,_fx1049,_fy1049,_fex1049,_fey1049);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1049 = new TH1F("Graph_Graph1049","S12_",100,649.5,2599.5);
   Graph_Graph1049->SetMinimum(-0.2032872);
   Graph_Graph1049->SetMaximum(0.1958354);
   Graph_Graph1049->SetDirectory(0);
   Graph_Graph1049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1049->SetLineColor(ci);
   Graph_Graph1049->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1049->GetXaxis()->CenterTitle(true);
   Graph_Graph1049->GetXaxis()->SetLabelFont(42);
   Graph_Graph1049->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1049->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1049->GetXaxis()->SetTitleFont(42);
   Graph_Graph1049->GetYaxis()->SetTitle("#delta'_{s}^{} [mrad] / 125 MeV");
   Graph_Graph1049->GetYaxis()->CenterTitle(true);
   Graph_Graph1049->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1049->GetYaxis()->SetLabelFont(42);
   Graph_Graph1049->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1049->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1049->GetYaxis()->SetTitleFont(42);
   Graph_Graph1049->GetZaxis()->SetLabelFont(42);
   Graph_Graph1049->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1049);
   
   
   TF1 *pol01050 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01050->SetFillColor(19);
   pol01050->SetFillStyle(0);
   pol01050->SetLineColor(2);
   pol01050->SetLineWidth(2);
   pol01050->SetChisquare(22.56029);
   pol01050->SetNDF(13);
   pol01050->GetXaxis()->SetLabelFont(42);
   pol01050->GetXaxis()->SetTitleOffset(1);
   pol01050->GetXaxis()->SetTitleFont(42);
   pol01050->GetYaxis()->SetLabelFont(42);
   pol01050->GetYaxis()->SetTitleFont(42);
   pol01050->SetParameter(0,-0.01297587);
   pol01050->SetParError(0,0.01223913);
   pol01050->SetParLimits(0,0,0);
   pol01050->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01050);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.013
#pm0.01
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
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
