void S12S18_g2_delta_prime_vs_p_trackRecoControl_WORLD_250MeV_CQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:43:06 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(451.571,-0.9478298,3045.709,-0.1400325);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1061[8] = {
   883.9274,
   1126.188,
   1373.751,
   1622.443,
   1870.726,
   2119.143,
   2366.618,
   2613.353};
   Double_t _fy1061[8] = {
   -0.4311758,
   -0.43033,
   0.01164485,
   -0.01691136,
   -0.1109681,
   -0.5173805,
   -0.6655993,
   -1.326841};
   Double_t _fex1061[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1061[8] = {
   -0.3048697,
   -0.2194921,
   -0.1859657,
   -0.173431,
   -0.1771834,
   -0.198782,
   -0.248772,
   -0.3678329};
   TGraphErrors *gre = new TGraphErrors(8,_fx1061,_fy1061,_fex1061,_fey1061);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1061 = new TH1F("Graph_Graph1061","",100,710.9849,2786.295);
   Graph_Graph1061->SetMinimum(-0.8670501);
   Graph_Graph1061->SetMaximum(-0.2208123);
   Graph_Graph1061->SetDirectory(0);
   Graph_Graph1061->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1061->SetLineColor(ci);
   Graph_Graph1061->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1061->GetXaxis()->CenterTitle(true);
   Graph_Graph1061->GetXaxis()->SetLabelFont(42);
   Graph_Graph1061->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1061->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1061->GetXaxis()->SetTitleFont(42);
   Graph_Graph1061->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1061->GetYaxis()->CenterTitle(true);
   Graph_Graph1061->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1061->GetYaxis()->SetLabelFont(42);
   Graph_Graph1061->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1061->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1061->GetYaxis()->SetTitleFont(42);
   Graph_Graph1061->GetZaxis()->SetLabelFont(42);
   Graph_Graph1061->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1061->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1061);
   
   
   TF1 *pol01062 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01062->SetFillColor(19);
   pol01062->SetFillStyle(0);
   pol01062->SetLineColor(2);
   pol01062->SetLineWidth(2);
   pol01062->SetChisquare(1.334659);
   pol01062->SetNDF(7);
   pol01062->GetXaxis()->SetLabelFont(42);
   pol01062->GetXaxis()->SetTitleOffset(1);
   pol01062->GetXaxis()->SetTitleFont(42);
   pol01062->GetYaxis()->SetLabelFont(42);
   pol01062->GetYaxis()->SetTitleFont(42);
   pol01062->SetParameter(0,-0.4359452);
   pol01062->SetParError(0,0.15438);
   pol01062->SetParLimits(0,0,0);
   pol01062->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01062);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.44
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
