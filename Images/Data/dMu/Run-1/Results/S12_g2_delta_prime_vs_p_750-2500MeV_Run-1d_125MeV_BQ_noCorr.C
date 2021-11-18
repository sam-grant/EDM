void S12_g2_delta_prime_vs_p_750-2500MeV_Run-1d_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 12 21:53:15 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-0.0787899,2843.25,0.1370269);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1091[14] = {
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
   Double_t _fy1091[14] = {
   0.05229044,
   -0.004464053,
   0.03483386,
   0.00113064,
   0.03842674,
   0.01836775,
   -0.02283513,
   0.02709406,
   0.0001847299,
   -0.007257561,
   -0.004766404,
   -0.0008498167,
   -0.01498093,
   -0.03663766};
   Double_t _fex1091[14] = {
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
   Double_t _fey1091[14] = {
   0.02296539,
   0.01885212,
   0.01658054,
   0.01494899,
   0.01400599,
   0.01322239,
   0.01323079,
   0.01278652,
   0.01325411,
   0.01335813,
   0.01402343,
   0.01424823,
   0.01507326,
   0.01645644};
   TGraphErrors *gre = new TGraphErrors(14,_fx1091,_fy1091,_fex1091,_fey1091);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1091 = new TH1F("Graph_Graph1091","S12_",100,649.5,2599.5);
   Graph_Graph1091->SetMinimum(-0.05720821);
   Graph_Graph1091->SetMaximum(0.1154453);
   Graph_Graph1091->SetDirectory(0);
   Graph_Graph1091->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1091->SetLineColor(ci);
   Graph_Graph1091->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1091->GetXaxis()->CenterTitle(true);
   Graph_Graph1091->GetXaxis()->SetLabelFont(42);
   Graph_Graph1091->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1091->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1091->GetXaxis()->SetTitleFont(42);
   Graph_Graph1091->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1091->GetYaxis()->CenterTitle(true);
   Graph_Graph1091->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1091->GetYaxis()->SetLabelFont(42);
   Graph_Graph1091->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1091->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1091->GetYaxis()->SetTitleFont(42);
   Graph_Graph1091->GetZaxis()->SetLabelFont(42);
   Graph_Graph1091->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1091);
   
   
   TF1 *pol01092 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01092->SetFillColor(19);
   pol01092->SetFillStyle(0);
   pol01092->SetLineColor(2);
   pol01092->SetLineWidth(2);
   pol01092->SetChisquare(31.6897);
   pol01092->SetNDF(13);
   pol01092->GetXaxis()->SetLabelFont(42);
   pol01092->GetXaxis()->SetTitleOffset(1);
   pol01092->GetXaxis()->SetTitleFont(42);
   pol01092->GetYaxis()->SetLabelFont(42);
   pol01092->GetYaxis()->SetTitleFont(42);
   pol01092->SetParameter(0,0.004398096);
   pol01092->SetParError(0,0.003926257);
   pol01092->SetParLimits(0,0,0);
   pol01092->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01092);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.0044
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
