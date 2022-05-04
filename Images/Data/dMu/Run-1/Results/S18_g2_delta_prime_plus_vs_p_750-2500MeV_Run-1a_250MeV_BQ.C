void S18_g2_delta_prime_plus_vs_p_750-2500MeV_Run-1a_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  4 12:58:25 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(514.4911,-2.435737,2728.721,2.067142);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1067[7] = {
   883.5294,
   1127.34,
   1373.07,
   1619.549,
   1866.691,
   2115.977,
   2359.683};
   Double_t _fy1067[7] = {
   0.5883354,
   -0.03794949,
   0.1623964,
   -0.145093,
   0.3176787,
   -0.1721079,
   -0.7186206};
   Double_t _fex1067[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1067[7] = {
   0.2785191,
   0.2283392,
   0.2010739,
   0.2063063,
   0.3124691,
   0.2445624,
   0.5168287};
   TGraphErrors *gre = new TGraphErrors(7,_fx1067,_fy1067,_fex1067,_fey1067);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1067 = new TH1F("Graph_Graph1067","S18",100,735.9141,2507.298);
   Graph_Graph1067->SetMinimum(-1.985449);
   Graph_Graph1067->SetMaximum(1.616854);
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
   pol01068->SetChisquare(8.859911);
   pol01068->SetNDF(6);
   pol01068->GetXaxis()->SetLabelFont(42);
   pol01068->GetXaxis()->SetTitleOffset(1);
   pol01068->GetXaxis()->SetTitleFont(42);
   pol01068->GetYaxis()->SetLabelFont(42);
   pol01068->GetYaxis()->SetTitleFont(42);
   pol01068->SetParameter(0,0.04639394);
   pol01068->SetParError(0,0.09491387);
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
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.0464
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
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
