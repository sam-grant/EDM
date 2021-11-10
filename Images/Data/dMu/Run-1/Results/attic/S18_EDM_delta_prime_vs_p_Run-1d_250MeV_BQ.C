void S18_EDM_delta_prime_vs_p_Run-1d_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 19:06:42 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.4654339,2750,1.737332);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1039[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1039[7] = {
   0.3505878,
   0.2637248,
   0.5880835,
   0.2767517,
   0.642825,
   0.8869336,
   1.146697};
   Double_t _fex1039[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1039[7] = {
   0.2166346,
   0.1413837,
   0.1170806,
   0.1151255,
   0.1324645,
   0.175393,
   0.2962865};
   TGraphErrors *gre = new TGraphErrors(7,_fx1039,_fy1039,_fex1039,_fey1039);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1039 = new TH1F("Graph_Graph1039","S18_",100,725,2525);
   Graph_Graph1039->SetMinimum(-0.2451573);
   Graph_Graph1039->SetMaximum(1.517055);
   Graph_Graph1039->SetDirectory(0);
   Graph_Graph1039->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1039->SetLineColor(ci);
   Graph_Graph1039->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1039->GetXaxis()->CenterTitle(true);
   Graph_Graph1039->GetXaxis()->SetLabelFont(42);
   Graph_Graph1039->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1039->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1039->GetXaxis()->SetTitleFont(42);
   Graph_Graph1039->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1039->GetYaxis()->CenterTitle(true);
   Graph_Graph1039->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1039->GetYaxis()->SetLabelFont(42);
   Graph_Graph1039->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1039->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1039->GetYaxis()->SetTitleFont(42);
   Graph_Graph1039->GetZaxis()->SetLabelFont(42);
   Graph_Graph1039->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1039);
   
   
   TF1 *pol01040 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01040->SetFillColor(19);
   pol01040->SetFillStyle(0);
   pol01040->SetLineColor(2);
   pol01040->SetLineWidth(2);
   pol01040->SetChisquare(18.36622);
   pol01040->SetNDF(6);
   pol01040->GetXaxis()->SetLabelFont(42);
   pol01040->GetXaxis()->SetTitleOffset(1);
   pol01040->GetXaxis()->SetTitleFont(42);
   pol01040->GetYaxis()->SetLabelFont(42);
   pol01040->GetYaxis()->SetTitleFont(42);
   pol01040->SetParameter(0,0.508304);
   pol01040->SetParError(0,0.0558473);
   pol01040->SetParLimits(0,0,0);
   pol01040->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01040);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.51
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
