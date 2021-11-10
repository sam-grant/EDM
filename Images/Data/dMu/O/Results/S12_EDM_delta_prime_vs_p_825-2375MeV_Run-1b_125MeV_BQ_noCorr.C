void S12_EDM_delta_prime_vs_p_825-2375MeV_Run-1b_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:04:12 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-0.2535867,2655.75,0.1852451);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1157[12] = {
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
   2312};
   Double_t _fy1157[12] = {
   -0.07036724,
   0.02128611,
   0.09117401,
   0.005634274,
   -0.0509358,
   -0.0417061,
   0.007990123,
   0.05815963,
   0.01676499,
   -0.01916878,
   0.01570625,
   -0.01098486};
   Double_t _fex1157[12] = {
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
   Double_t _fey1157[12] = {
   0.05066774,
   0.04463672,
   0.04015035,
   0.03759846,
   0.03560541,
   0.0355788,
   0.03428636,
   0.03537568,
   0.03550565,
   0.03694479,
   0.03751123,
   0.03899965};
   TGraphErrors *gre = new TGraphErrors(12,_fx1157,_fy1157,_fex1157,_fey1157);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1157 = new TH1F("Graph_Graph1157","S12_",100,799.5,2449.5);
   Graph_Graph1157->SetMinimum(-0.2097035);
   Graph_Graph1157->SetMaximum(0.1413619);
   Graph_Graph1157->SetDirectory(0);
   Graph_Graph1157->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1157->SetLineColor(ci);
   Graph_Graph1157->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1157->GetXaxis()->CenterTitle(true);
   Graph_Graph1157->GetXaxis()->SetLabelFont(42);
   Graph_Graph1157->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1157->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1157->GetXaxis()->SetTitleFont(42);
   Graph_Graph1157->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1157->GetYaxis()->CenterTitle(true);
   Graph_Graph1157->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1157->GetYaxis()->SetLabelFont(42);
   Graph_Graph1157->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1157->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1157->GetYaxis()->SetTitleFont(42);
   Graph_Graph1157->GetZaxis()->SetLabelFont(42);
   Graph_Graph1157->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1157->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1157);
   
   
   TF1 *pol01158 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01158->SetFillColor(19);
   pol01158->SetFillStyle(0);
   pol01158->SetLineColor(2);
   pol01158->SetLineWidth(2);
   pol01158->SetChisquare(14.17146);
   pol01158->SetNDF(11);
   pol01158->GetXaxis()->SetLabelFont(42);
   pol01158->GetXaxis()->SetTitleOffset(1);
   pol01158->GetXaxis()->SetTitleFont(42);
   pol01158->GetYaxis()->SetLabelFont(42);
   pol01158->GetYaxis()->SetTitleFont(42);
   pol01158->SetParameter(0,0.00325562);
   pol01158->SetParError(0,0.01094895);
   pol01158->SetParLimits(0,0,0);
   pol01158->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01158);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.0033
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
