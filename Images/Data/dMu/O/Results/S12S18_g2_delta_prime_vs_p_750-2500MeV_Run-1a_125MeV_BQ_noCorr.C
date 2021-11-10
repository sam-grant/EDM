void S12S18_g2_delta_prime_vs_p_750-2500MeV_Run-1a_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 13:49:14 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-0.1228776,2843.25,0.1919872);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1059[14] = {
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
   Double_t _fy1059[14] = {
   0.03455484,
   0.0190882,
   0.005146727,
   0.06582296,
   -6.728306e-05,
   0.07237125,
   -0.05701154,
   0.02266005,
   0.01185608,
   -0.007952864,
   0.02661633,
   0.0268318,
   0.009025406,
   -0.0378582};
   Double_t _fex1059[14] = {
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
   Double_t _fey1059[14] = {
   0.04579852,
   0.03757009,
   0.03304379,
   0.02989574,
   0.02808008,
   0.02664159,
   0.02662491,
   0.02578362,
   0.02667834,
   0.02689129,
   0.02818432,
   0.02851761,
   0.03004673,
   0.03235531};
   TGraphErrors *gre = new TGraphErrors(14,_fx1059,_fy1059,_fex1059,_fey1059);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1059 = new TH1F("Graph_Graph1059","S12S18_",100,649.5,2599.5);
   Graph_Graph1059->SetMinimum(-0.09139108);
   Graph_Graph1059->SetMaximum(0.1605008);
   Graph_Graph1059->SetDirectory(0);
   Graph_Graph1059->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1059->SetLineColor(ci);
   Graph_Graph1059->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1059->GetXaxis()->CenterTitle(true);
   Graph_Graph1059->GetXaxis()->SetLabelFont(42);
   Graph_Graph1059->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1059->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1059->GetXaxis()->SetTitleFont(42);
   Graph_Graph1059->GetYaxis()->SetTitle("#delta'_{c}^{} [mrad] / 125 MeV");
   Graph_Graph1059->GetYaxis()->CenterTitle(true);
   Graph_Graph1059->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1059->GetYaxis()->SetLabelFont(42);
   Graph_Graph1059->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1059->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1059->GetYaxis()->SetTitleFont(42);
   Graph_Graph1059->GetZaxis()->SetLabelFont(42);
   Graph_Graph1059->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1059);
   
   
   TF1 *pol01060 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01060->SetFillColor(19);
   pol01060->SetFillStyle(0);
   pol01060->SetLineColor(2);
   pol01060->SetLineWidth(2);
   pol01060->SetChisquare(19.22982);
   pol01060->SetNDF(13);
   pol01060->GetXaxis()->SetLabelFont(42);
   pol01060->GetXaxis()->SetTitleOffset(1);
   pol01060->GetXaxis()->SetTitleFont(42);
   pol01060->GetYaxis()->SetLabelFont(42);
   pol01060->GetYaxis()->SetTitleFont(42);
   pol01060->SetParameter(0,0.01299546);
   pol01060->SetParError(0,0.007868593);
   pol01060->SetParLimits(0,0,0);
   pol01060->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01060);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.013
#pm0.008
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
