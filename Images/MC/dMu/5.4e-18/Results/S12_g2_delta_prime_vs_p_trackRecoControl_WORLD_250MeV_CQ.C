void S12_g2_delta_prime_vs_p_trackRecoControl_WORLD_250MeV_CQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:42:39 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(451.3751,-1.494411,3045.793,-0.1290242);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1057[8] = {
   883.7782,
   1126.204,
   1373.8,
   1622.32,
   1870.781,
   2119.266,
   2366.747,
   2613.39};
   Double_t _fy1057[8] = {
   -0.8448522,
   -0.7527428,
   0.02603754,
   0.06446916,
   -0.590633,
   -0.7053459,
   -0.3863923,
   -2.034015};
   Double_t _fex1057[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1057[8] = {
   -0.3996774,
   -0.3079086,
   -0.2740338,
   -0.2640256,
   -0.2759883,
   -0.3106057,
   -0.3850031,
   -0.5409143};
   TGraphErrors *gre = new TGraphErrors(8,_fx1057,_fy1057,_fex1057,_fey1057);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1057 = new TH1F("Graph_Graph1057","",100,710.817,2786.351);
   Graph_Graph1057->SetMinimum(-1.357872);
   Graph_Graph1057->SetMaximum(-0.2655629);
   Graph_Graph1057->SetDirectory(0);
   Graph_Graph1057->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1057->SetLineColor(ci);
   Graph_Graph1057->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1057->GetXaxis()->CenterTitle(true);
   Graph_Graph1057->GetXaxis()->SetLabelFont(42);
   Graph_Graph1057->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1057->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1057->GetXaxis()->SetTitleFont(42);
   Graph_Graph1057->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1057->GetYaxis()->CenterTitle(true);
   Graph_Graph1057->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1057->GetYaxis()->SetLabelFont(42);
   Graph_Graph1057->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1057->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1057->GetYaxis()->SetTitleFont(42);
   Graph_Graph1057->GetZaxis()->SetLabelFont(42);
   Graph_Graph1057->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1057);
   
   
   TF1 *pol01058 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01058->SetFillColor(19);
   pol01058->SetFillStyle(0);
   pol01058->SetLineColor(2);
   pol01058->SetLineWidth(2);
   pol01058->SetChisquare(3.007522);
   pol01058->SetNDF(7);
   pol01058->GetXaxis()->SetLabelFont(42);
   pol01058->GetXaxis()->SetTitleOffset(1);
   pol01058->GetXaxis()->SetTitleFont(42);
   pol01058->GetYaxis()->SetLabelFont(42);
   pol01058->GetYaxis()->SetTitleFont(42);
   pol01058->SetParameter(0,-0.6529343);
   pol01058->SetParError(0,0.231745);
   pol01058->SetParLimits(0,0,0);
   pol01058->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01058);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Sim: trackRecoControl","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.65
#pm0.2
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
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
