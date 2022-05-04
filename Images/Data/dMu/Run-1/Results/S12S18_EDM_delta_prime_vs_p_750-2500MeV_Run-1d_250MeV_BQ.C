void S12S18_EDM_delta_prime_vs_p_750-2500MeV_Run-1d_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(515.0162,-0.7744761,2728.333,1.826896);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1121[7] = {
   883.9024,
   1127.365,
   1373.276,
   1619.898,
   1866.765,
   2116.081,
   2359.447};
   Double_t _fy1121[7] = {
   0.3884968,
   0.4392985,
   0.5971186,
   0.4183675,
   0.5084335,
   0.6258212,
   0.6732895};
   Double_t _fex1121[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1121[7] = {
   0.1528356,
   0.1152056,
   0.0923204,
   0.08036121,
   0.08512223,
   0.1043012,
   0.1434696};
   TGraphErrors *gre = new TGraphErrors(7,_fx1121,_fy1121,_fex1121,_fey1121);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1121 = new TH1F("Graph_Graph1121","S12S18",100,736.348,2507.002);
   Graph_Graph1121->SetMinimum(-0.5143388);
   Graph_Graph1121->SetMaximum(1.566759);
   Graph_Graph1121->SetDirectory(0);
   Graph_Graph1121->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1121->SetLineColor(ci);
   Graph_Graph1121->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1121->GetXaxis()->CenterTitle(true);
   Graph_Graph1121->GetXaxis()->SetLabelFont(42);
   Graph_Graph1121->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1121->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1121->GetXaxis()->SetTitleFont(42);
   Graph_Graph1121->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1121->GetYaxis()->CenterTitle(true);
   Graph_Graph1121->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1121->GetYaxis()->SetLabelFont(42);
   Graph_Graph1121->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1121->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1121->GetYaxis()->SetTitleFont(42);
   Graph_Graph1121->GetZaxis()->SetLabelFont(42);
   Graph_Graph1121->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1121);
   
   
   TF1 *pol01122 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01122->SetFillColor(19);
   pol01122->SetFillStyle(0);
   pol01122->SetLineColor(2);
   pol01122->SetLineWidth(2);
   pol01122->SetChisquare(5.705769);
   pol01122->SetNDF(6);
   pol01122->GetXaxis()->SetLabelFont(42);
   pol01122->GetXaxis()->SetTitleOffset(1);
   pol01122->GetXaxis()->SetTitleFont(42);
   pol01122->GetYaxis()->SetLabelFont(42);
   pol01122->GetYaxis()->SetTitleFont(42);
   pol01122->SetParameter(0,0.5157818);
   pol01122->SetParError(0,0.03866661);
   pol01122->SetParLimits(0,0,0);
   pol01122->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01122);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.516
#pm0.04
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
