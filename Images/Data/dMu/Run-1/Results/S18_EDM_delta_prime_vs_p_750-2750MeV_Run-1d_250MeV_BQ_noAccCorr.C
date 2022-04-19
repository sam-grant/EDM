void S18_EDM_delta_prime_vs_p_750-2750MeV_Run-1d_250MeV_BQ_noAccCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 20 00:10:49 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(452.8467,-0.9636737,3037.552,1.686692);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1039[8] = {
   883.631,
   1127.239,
   1372.894,
   1619.454,
   1866.549,
   2115.743,
   2359.196,
   2606.768};
   Double_t _fy1039[8] = {
   0.1314589,
   0.1341083,
   0.2966276,
   0.1572153,
   0.36458,
   0.4915108,
   0.5328679,
   0.342655};
   Double_t _fex1039[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1039[8] = {
   0.08009602,
   0.06455218,
   0.06108506,
   0.06498915,
   0.07684878,
   0.09808915,
   0.1387871,
   0.2335027};
   TGraphErrors *gre = new TGraphErrors(8,_fx1039,_fy1039,_fex1039,_fey1039);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1039 = new TH1F("Graph_Graph1039","S18",100,711.3173,2779.082);
   Graph_Graph1039->SetMinimum(-0.6986372);
   Graph_Graph1039->SetMaximum(1.421655);
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
   
   
   TF1 *pol01040 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01040->SetFillColor(19);
   pol01040->SetFillStyle(0);
   pol01040->SetLineColor(2);
   pol01040->SetLineWidth(2);
   pol01040->SetChisquare(20.6101);
   pol01040->SetNDF(7);
   pol01040->GetXaxis()->SetLabelFont(42);
   pol01040->GetXaxis()->SetTitleOffset(1);
   pol01040->GetXaxis()->SetTitleFont(42);
   pol01040->GetYaxis()->SetLabelFont(42);
   pol01040->GetYaxis()->SetTitleFont(42);
   pol01040->SetParameter(0,0.2541199);
   pol01040->SetParError(0,0.02835083);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.254
#pm0.03
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
