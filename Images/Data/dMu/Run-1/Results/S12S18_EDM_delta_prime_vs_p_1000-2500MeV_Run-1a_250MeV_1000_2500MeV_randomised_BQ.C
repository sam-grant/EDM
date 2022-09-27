#ifdef __CLING__
#pragma cling optimize(0)
#endif
void S12S18_EDM_delta_prime_vs_p_1000-2500MeV_Run-1a_250MeV_1000_2500MeV_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Sep 26 18:25:51 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(819.4016,-0.5886825,2667.941,1.074283);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1009[6] = {
   1127.491,
   1373.326,
   1619.953,
   1866.968,
   2116.15,
   2359.851};
   Double_t _fy1009[6] = {
   0.4279491,
   0.3227272,
   0.4129834,
   0.05860396,
   0.4452739,
   0.04294916};
   Double_t _fex1009[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1009[6] = {
   0.2269864,
   0.1734029,
   0.1702091,
   0.1801315,
   0.2127127,
   0.2653351};
   TGraphErrors *gre = new TGraphErrors(6,_fx1009,_fy1009,_fex1009,_fey1009);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","S12S18",100,1004.256,2483.087);
   Graph_Graph1009->SetMinimum(-0.4223859);
   Graph_Graph1009->SetMaximum(0.9079865);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1009->SetLineColor(ci);
   Graph_Graph1009->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1009->GetXaxis()->CenterTitle(true);
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1009->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetTitle("#delta^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1009->GetYaxis()->CenterTitle(true);
   Graph_Graph1009->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1009->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1009);
   
   
   TF1 *pol01010 = new TF1("pol0","pol0",1000,2500, TF1::EAddToList::kNo);
   pol01010->SetFillColor(19);
   pol01010->SetFillStyle(0);
   pol01010->SetLineColor(2);
   pol01010->SetLineWidth(2);
   pol01010->SetChisquare(3.97284);
   pol01010->SetNDF(5);
   pol01010->GetXaxis()->SetLabelFont(42);
   pol01010->GetXaxis()->SetTitleOffset(1);
   pol01010->GetXaxis()->SetTitleFont(42);
   pol01010->GetYaxis()->SetLabelFont(42);
   pol01010->GetYaxis()->SetTitleFont(42);
   pol01010->SetParameter(0,0.2951978);
   pol01010->SetParError(0,0.08050195);
   pol01010->SetParLimits(0,0,0);
   pol01010->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01010);
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
   entry=leg->AddEntry("pol0","#LT#delta^{BLIND}#GT = 0.3
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
