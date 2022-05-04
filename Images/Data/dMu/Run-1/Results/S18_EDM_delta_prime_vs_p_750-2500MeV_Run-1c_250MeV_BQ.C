void S18_EDM_delta_prime_vs_p_750-2500MeV_Run-1c_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:53 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(514.6398,-1.009186,2728.454,2.650578);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1079[7] = {
   883.6089,
   1127.304,
   1372.916,
   1619.588,
   1866.593,
   2115.809,
   2359.485};
   Double_t _fy1079[7] = {
   0.7221848,
   1.265417,
   0.2839049,
   0.525838,
   0.6681634,
   0.8842087,
   0.5668039};
   Double_t _fex1079[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1079[7] = {
   0.2834276,
   0.2691848,
   0.1771143,
   0.1706047,
   0.1843272,
   0.2746317,
   0.2490569};
   TGraphErrors *gre = new TGraphErrors(7,_fx1079,_fy1079,_fex1079,_fey1079);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1079 = new TH1F("Graph_Graph1079","S18",100,736.0212,2507.073);
   Graph_Graph1079->SetMinimum(-0.6432094);
   Graph_Graph1079->SetMaximum(2.284601);
   Graph_Graph1079->SetDirectory(0);
   Graph_Graph1079->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1079->SetLineColor(ci);
   Graph_Graph1079->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1079->GetXaxis()->CenterTitle(true);
   Graph_Graph1079->GetXaxis()->SetLabelFont(42);
   Graph_Graph1079->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1079->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1079->GetXaxis()->SetTitleFont(42);
   Graph_Graph1079->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1079->GetYaxis()->CenterTitle(true);
   Graph_Graph1079->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1079->GetYaxis()->SetLabelFont(42);
   Graph_Graph1079->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1079->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1079->GetYaxis()->SetTitleFont(42);
   Graph_Graph1079->GetZaxis()->SetLabelFont(42);
   Graph_Graph1079->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1079->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1079);
   
   
   TF1 *pol01080 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01080->SetFillColor(19);
   pol01080->SetFillStyle(0);
   pol01080->SetLineColor(2);
   pol01080->SetLineWidth(2);
   pol01080->SetChisquare(10.82325);
   pol01080->SetNDF(6);
   pol01080->GetXaxis()->SetLabelFont(42);
   pol01080->GetXaxis()->SetTitleOffset(1);
   pol01080->GetXaxis()->SetTitleFont(42);
   pol01080->GetYaxis()->SetLabelFont(42);
   pol01080->GetYaxis()->SetTitleFont(42);
   pol01080->SetParameter(0,0.6219364);
   pol01080->SetParError(0,0.08129905);
   pol01080->SetParLimits(0,0,0);
   pol01080->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01080);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.622
#pm0.08
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
