void S0_g2_delta_prime_vs_p_trackTruth_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:45:04 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(441.2699,-0.7369432,3047.881,0.5448662);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1075[8] = {
   875.7051,
   1124.338,
   1373.621,
   1622.584,
   1871.441,
   2120.162,
   2367.805,
   2613.446};
   Double_t _fy1075[8] = {
   -0.09603851,
   -0.1730355,
   0.1786146,
   0.1259591,
   0.0217884,
   -0.05499216,
   0.1854107,
   0.08106084};
   Double_t _fex1075[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1075[8] = {
   0.186445,
   0.1546896,
   0.1367014,
   0.128956,
   0.1291173,
   0.1388397,
   0.1645298,
   0.2241749};
   TGraphErrors *gre = new TGraphErrors(8,_fx1075,_fy1075,_fex1075,_fey1075);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1075 = new TH1F("Graph_Graph1075","",100,701.931,2787.22);
   Graph_Graph1075->SetMinimum(-0.6087623);
   Graph_Graph1075->SetMaximum(0.4166853);
   Graph_Graph1075->SetDirectory(0);
   Graph_Graph1075->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1075->SetLineColor(ci);
   Graph_Graph1075->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1075->GetXaxis()->CenterTitle(true);
   Graph_Graph1075->GetXaxis()->SetLabelFont(42);
   Graph_Graph1075->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1075->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1075->GetXaxis()->SetTitleFont(42);
   Graph_Graph1075->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1075->GetYaxis()->CenterTitle(true);
   Graph_Graph1075->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1075->GetYaxis()->SetLabelFont(42);
   Graph_Graph1075->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1075->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1075->GetYaxis()->SetTitleFont(42);
   Graph_Graph1075->GetZaxis()->SetLabelFont(42);
   Graph_Graph1075->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1075->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1075);
   
   
   TF1 *pol01076 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01076->SetFillColor(19);
   pol01076->SetFillStyle(0);
   pol01076->SetLineColor(2);
   pol01076->SetLineWidth(2);
   pol01076->SetChisquare(5.204155);
   pol01076->SetNDF(7);
   pol01076->GetXaxis()->SetLabelFont(42);
   pol01076->GetXaxis()->SetTitleOffset(1);
   pol01076->GetXaxis()->SetTitleFont(42);
   pol01076->GetYaxis()->SetLabelFont(42);
   pol01076->GetYaxis()->SetTitleFont(42);
   pol01076->SetParameter(0,0.0398264);
   pol01076->SetParError(0,0.05323188);
   pol01076->SetParLimits(0,0,0);
   pol01076->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01076);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.04
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
