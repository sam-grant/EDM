void S12_g2_delta_prime_vs_p_Run-1d_250MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 19:06:47 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.04879076,2750,0.07490839);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1091[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1091[7] = {
   0.02232411,
   0.01881079,
   0.02864795,
   0.002803964,
   -0.003059142,
   -0.003419263,
   -0.02243996};
   Double_t _fex1091[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1091[7] = {
   0.0146234,
   0.01113009,
   0.009637739,
   0.009231369,
   0.009445203,
   0.01003696,
   0.01118471};
   TGraphErrors *gre = new TGraphErrors(7,_fx1091,_fy1091,_fex1091,_fey1091);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1091 = new TH1F("Graph_Graph1091","S12_",100,725,2525);
   Graph_Graph1091->SetMinimum(-0.03642084);
   Graph_Graph1091->SetMaximum(0.06253847);
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
   Graph_Graph1091->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
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
   pol01092->SetChisquare(16.45869);
   pol01092->SetNDF(6);
   pol01092->GetXaxis()->SetLabelFont(42);
   pol01092->GetXaxis()->SetTitleOffset(1);
   pol01092->GetXaxis()->SetTitleFont(42);
   pol01092->GetYaxis()->SetLabelFont(42);
   pol01092->GetYaxis()->SetTitleFont(42);
   pol01092->SetParameter(0,0.005435883);
   pol01092->SetParError(0,0.003941204);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.0054
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
