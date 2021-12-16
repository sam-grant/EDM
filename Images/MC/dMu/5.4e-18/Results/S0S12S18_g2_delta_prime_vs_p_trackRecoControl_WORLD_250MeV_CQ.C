void S0S12S18_g2_delta_prime_vs_p_trackRecoControl_WORLD_250MeV_CQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:43:21 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(451.417,-0.6992768,3045.949,0.06343939);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1063[8] = {
   883.8391,
   1126.202,
   1373.788,
   1622.437,
   1870.724,
   2119.217,
   2366.762,
   2613.527};
   Double_t _fy1063[8] = {
   -0.485679,
   -0.5082033,
   0.1701465,
   -0.3006882,
   -0.05378565,
   -0.329331,
   -0.5727756,
   -0.9950676};
   Double_t _fex1063[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1063[8] = {
   -0.2556096,
   -0.1774334,
   -0.146383,
   -0.1345381,
   -0.136287,
   -0.1530228,
   -0.194171,
   -0.2976499};
   TGraphErrors *gre = new TGraphErrors(8,_fx1063,_fy1063,_fex1063,_fey1063);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1063 = new TH1F("Graph_Graph1063","",100,710.8702,2786.496);
   Graph_Graph1063->SetMinimum(-0.6230052);
   Graph_Graph1063->SetMaximum(-0.01283224);
   Graph_Graph1063->SetDirectory(0);
   Graph_Graph1063->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1063->SetLineColor(ci);
   Graph_Graph1063->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1063->GetXaxis()->CenterTitle(true);
   Graph_Graph1063->GetXaxis()->SetLabelFont(42);
   Graph_Graph1063->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1063->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1063->GetXaxis()->SetTitleFont(42);
   Graph_Graph1063->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1063->GetYaxis()->CenterTitle(true);
   Graph_Graph1063->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1063->GetYaxis()->SetLabelFont(42);
   Graph_Graph1063->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1063->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1063->GetYaxis()->SetTitleFont(42);
   Graph_Graph1063->GetZaxis()->SetLabelFont(42);
   Graph_Graph1063->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1063);
   
   
   TF1 *pol01064 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01064->SetFillColor(19);
   pol01064->SetFillStyle(0);
   pol01064->SetLineColor(2);
   pol01064->SetLineWidth(2);
   pol01064->SetChisquare(0.8608528);
   pol01064->SetNDF(7);
   pol01064->GetXaxis()->SetLabelFont(42);
   pol01064->GetXaxis()->SetTitleOffset(1);
   pol01064->GetXaxis()->SetTitleFont(42);
   pol01064->GetYaxis()->SetLabelFont(42);
   pol01064->GetYaxis()->SetTitleFont(42);
   pol01064->SetParameter(0,-0.384423);
   pol01064->SetParError(0,0.1239854);
   pol01064->SetParLimits(0,0,0);
   pol01064->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01064);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.38
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
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
