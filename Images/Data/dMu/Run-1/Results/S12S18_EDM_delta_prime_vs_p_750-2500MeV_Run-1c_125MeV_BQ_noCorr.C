void S12S18_EDM_delta_prime_vs_p_750-2500MeV_Run-1c_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 12 21:53:15 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-0.05242366,2843.25,0.1029828);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1077[14] = {
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
   Double_t _fy1077[14] = {
   0.02527955,
   0.03992747,
   0.04762085,
   0.06107144,
   0.0406704,
   0.04369234,
   0.03917267,
   0.05514308,
   0.04369229,
   0.06305223,
   0.05324795,
   0.02095383,
   0.06347445,
   0.003273984};
   Double_t _fex1077[14] = {
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
   Double_t _fey1077[14] = {
   0.02260457,
   0.01856433,
   0.01630922,
   0.0147455,
   0.01389343,
   0.01316404,
   0.01318706,
   0.0127812,
   0.01325803,
   0.01337107,
   0.01398118,
   0.01425223,
   0.01488895,
   0.01604418};
   TGraphErrors *gre = new TGraphErrors(14,_fx1077,_fy1077,_fex1077,_fey1077);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1077 = new TH1F("Graph_Graph1077","S12S18_",100,649.5,2599.5);
   Graph_Graph1077->SetMinimum(-0.03688302);
   Graph_Graph1077->SetMaximum(0.08744212);
   Graph_Graph1077->SetDirectory(0);
   Graph_Graph1077->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1077->SetLineColor(ci);
   Graph_Graph1077->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1077->GetXaxis()->CenterTitle(true);
   Graph_Graph1077->GetXaxis()->SetLabelFont(42);
   Graph_Graph1077->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1077->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1077->GetXaxis()->SetTitleFont(42);
   Graph_Graph1077->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1077->GetYaxis()->CenterTitle(true);
   Graph_Graph1077->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1077->GetYaxis()->SetLabelFont(42);
   Graph_Graph1077->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1077->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1077->GetYaxis()->SetTitleFont(42);
   Graph_Graph1077->GetZaxis()->SetLabelFont(42);
   Graph_Graph1077->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1077);
   
   
   TF1 *pol01078 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01078->SetFillColor(19);
   pol01078->SetFillStyle(0);
   pol01078->SetLineColor(2);
   pol01078->SetLineWidth(2);
   pol01078->SetChisquare(16.29599);
   pol01078->SetNDF(13);
   pol01078->GetXaxis()->SetLabelFont(42);
   pol01078->GetXaxis()->SetTitleOffset(1);
   pol01078->GetXaxis()->SetTitleFont(42);
   pol01078->GetYaxis()->SetLabelFont(42);
   pol01078->GetYaxis()->SetTitleFont(42);
   pol01078->SetParameter(0,0.04450802);
   pol01078->SetParError(0,0.003899663);
   pol01078->SetParLimits(0,0,0);
   pol01078->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01078);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.045
#pm0.004
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
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
