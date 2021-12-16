void S18_EDM_delta_prime_vs_p_trackTruth_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:44:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(441.2313,0.7330552,3047.589,2.403556);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1069[8] = {
   875.6243,
   1124.334,
   1373.468,
   1622.472,
   1871.33,
   2119.915,
   2367.684,
   2613.196};
   Double_t _fy1069[8] = {
   1.561285,
   2.011823,
   1.497109,
   1.683789,
   1.708555,
   1.725256,
   1.745693,
   1.647155};
   Double_t _fex1069[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1069[8] = {
   0.240429,
   0.1797466,
   0.148033,
   0.1318987,
   0.1263831,
   0.1307242,
   0.1489473,
   0.1959426};
   TGraphErrors *gre = new TGraphErrors(8,_fx1069,_fy1069,_fex1069,_fey1069);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{EDM} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1069 = new TH1F("Graph_Graph1069","",100,701.8671,2786.953);
   Graph_Graph1069->SetMinimum(0.9001054);
   Graph_Graph1069->SetMaximum(2.236506);
   Graph_Graph1069->SetDirectory(0);
   Graph_Graph1069->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1069->SetLineColor(ci);
   Graph_Graph1069->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1069->GetXaxis()->CenterTitle(true);
   Graph_Graph1069->GetXaxis()->SetLabelFont(42);
   Graph_Graph1069->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1069->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1069->GetXaxis()->SetTitleFont(42);
   Graph_Graph1069->GetYaxis()->SetTitle("#delta'_{EDM} [mrad] / 250 MeV");
   Graph_Graph1069->GetYaxis()->CenterTitle(true);
   Graph_Graph1069->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1069->GetYaxis()->SetLabelFont(42);
   Graph_Graph1069->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1069->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1069->GetYaxis()->SetTitleFont(42);
   Graph_Graph1069->GetZaxis()->SetLabelFont(42);
   Graph_Graph1069->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1069->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1069);
   
   
   TF1 *pol01070 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01070->SetFillColor(19);
   pol01070->SetFillStyle(0);
   pol01070->SetLineColor(2);
   pol01070->SetLineWidth(2);
   pol01070->SetChisquare(5.444544);
   pol01070->SetNDF(7);
   pol01070->GetXaxis()->SetLabelFont(42);
   pol01070->GetXaxis()->SetTitleOffset(1);
   pol01070->GetXaxis()->SetTitleFont(42);
   pol01070->GetYaxis()->SetLabelFont(42);
   pol01070->GetYaxis()->SetTitleFont(42);
   pol01070->SetParameter(0,1.699296);
   pol01070->SetParError(0,0.05394699);
   pol01070->SetParLimits(0,0,0);
   pol01070->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01070);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Sim: trackTruth","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 1.7
#pm0.05
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
