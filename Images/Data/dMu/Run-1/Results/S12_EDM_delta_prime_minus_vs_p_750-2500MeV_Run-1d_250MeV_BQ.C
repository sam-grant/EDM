void S12_EDM_delta_prime_minus_vs_p_750-2500MeV_Run-1d_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(515.2849,-0.8506491,2728.515,1.958293);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1113[7] = {
   884.1567,
   1127.482,
   1373.619,
   1620.287,
   1866.945,
   2116.357,
   2359.644};
   Double_t _fy1113[7] = {
   0.3698171,
   0.5314822,
   0.4976482,
   0.5310014,
   0.5158606,
   0.6687115,
   0.6876945};
   Double_t _fex1113[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1113[7] = {
   0.1895719,
   0.1613371,
   0.1155793,
   0.1092927,
   0.1371334,
   0.1880542,
   0.2397046};
   TGraphErrors *gre = new TGraphErrors(7,_fx1113,_fy1113,_fex1113,_fey1113);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1113 = new TH1F("Graph_Graph1113","S12",100,736.608,2507.192);
   Graph_Graph1113->SetMinimum(-0.5697549);
   Graph_Graph1113->SetMaximum(1.677399);
   Graph_Graph1113->SetDirectory(0);
   Graph_Graph1113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1113->SetLineColor(ci);
   Graph_Graph1113->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1113->GetXaxis()->CenterTitle(true);
   Graph_Graph1113->GetXaxis()->SetLabelFont(42);
   Graph_Graph1113->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1113->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1113->GetXaxis()->SetTitleFont(42);
   Graph_Graph1113->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1113->GetYaxis()->CenterTitle(true);
   Graph_Graph1113->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1113->GetYaxis()->SetLabelFont(42);
   Graph_Graph1113->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1113->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1113->GetYaxis()->SetTitleFont(42);
   Graph_Graph1113->GetZaxis()->SetLabelFont(42);
   Graph_Graph1113->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1113->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1113);
   
   
   TF1 *pol01114 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01114->SetFillColor(19);
   pol01114->SetFillStyle(0);
   pol01114->SetLineColor(2);
   pol01114->SetLineWidth(2);
   pol01114->SetChisquare(1.777901);
   pol01114->SetNDF(6);
   pol01114->GetXaxis()->SetLabelFont(42);
   pol01114->GetXaxis()->SetTitleOffset(1);
   pol01114->GetXaxis()->SetTitleFont(42);
   pol01114->GetYaxis()->SetLabelFont(42);
   pol01114->GetYaxis()->SetTitleFont(42);
   pol01114->SetParameter(0,0.5274564);
   pol01114->SetParError(0,0.05558331);
   pol01114->SetParLimits(0,0,0);
   pol01114->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01114);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.527
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
