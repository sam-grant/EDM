void S0_EDM_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:09:13 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(446.0854,0.07884942,3049.135,4.140636);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1121[8] = {
   879.9271,
   1123.054,
   1371.406,
   1620.739,
   1868.003,
   2116.569,
   2363.182,
   2615.294};
   Double_t _fy1121[8] = {
   1.626549,
   1.472159,
   2.029072,
   1.914531,
   1.300998,
   1.743653,
   1.527232,
   2.187961};
   Double_t _fex1121[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1121[8] = {
   0.4150985,
   0.310692,
   0.2758151,
   0.2711695,
   0.2958116,
   0.3700616,
   0.5468726,
   1.237198};
   TGraphErrors *gre = new TGraphErrors(8,_fx1121,_fy1121,_fex1121,_fey1121);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{EDM} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1121 = new TH1F("Graph_Graph1121","",100,706.3904,2788.83);
   Graph_Graph1121->SetMinimum(0.4850282);
   Graph_Graph1121->SetMaximum(3.734458);
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
   Graph_Graph1121->GetYaxis()->SetTitle("#delta'_{EDM} [mrad] / 250 MeV");
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
   
   
   TF1 *pol01122 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01122->SetFillColor(19);
   pol01122->SetFillStyle(0);
   pol01122->SetLineColor(2);
   pol01122->SetLineWidth(2);
   pol01122->SetChisquare(4.707061);
   pol01122->SetNDF(7);
   pol01122->GetXaxis()->SetLabelFont(42);
   pol01122->GetXaxis()->SetTitleOffset(1);
   pol01122->GetXaxis()->SetTitleFont(42);
   pol01122->GetYaxis()->SetLabelFont(42);
   pol01122->GetYaxis()->SetTitleFont(42);
   pol01122->SetParameter(0,1.699339);
   pol01122->SetParError(0,0.1234335);
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
   TLegendEntry *entry=leg->AddEntry("","Sim: trackReco","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 1.7
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
