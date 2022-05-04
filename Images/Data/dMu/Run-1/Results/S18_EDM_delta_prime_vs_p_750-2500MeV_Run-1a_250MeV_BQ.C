void S18_EDM_delta_prime_vs_p_750-2500MeV_Run-1a_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  4 12:58:24 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(514.4911,-1.527179,2728.721,1.927023);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1047[7] = {
   883.5294,
   1127.34,
   1373.07,
   1619.549,
   1866.691,
   2115.977,
   2359.683};
   Double_t _fy1047[7] = {
   0.3650802,
   0.4098267,
   -0.04297085,
   0.1663674,
   -0.04143866,
   0.5706747,
   0.1360671};
   Double_t _fex1047[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1047[7] = {
   0.3011522,
   0.2466722,
   0.2163726,
   0.2213406,
   0.3427998,
   0.2609279,
   0.5678261};
   TGraphErrors *gre = new TGraphErrors(7,_fx1047,_fy1047,_fex1047,_fey1047);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1047 = new TH1F("Graph_Graph1047","S18",100,735.9141,2507.298);
   Graph_Graph1047->SetMinimum(-1.181759);
   Graph_Graph1047->SetMaximum(1.581603);
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
   Graph_Graph1047->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
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
   
   
   TF1 *pol01048 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01048->SetFillColor(19);
   pol01048->SetFillStyle(0);
   pol01048->SetLineColor(2);
   pol01048->SetLineWidth(2);
   pol01048->SetChisquare(4.765064);
   pol01048->SetNDF(6);
   pol01048->GetXaxis()->SetLabelFont(42);
   pol01048->GetXaxis()->SetTitleOffset(1);
   pol01048->GetXaxis()->SetTitleFont(42);
   pol01048->GetYaxis()->SetLabelFont(42);
   pol01048->GetYaxis()->SetTitleFont(42);
   pol01048->SetParameter(0,0.2270476);
   pol01048->SetParError(0,0.1023121);
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
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.227
#pm0.1
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
