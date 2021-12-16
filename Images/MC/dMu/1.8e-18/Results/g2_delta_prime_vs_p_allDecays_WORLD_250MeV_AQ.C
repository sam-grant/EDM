void g2_delta_prime_vs_p_allDecays_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 01:01:39 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(438.2601,-0.3215222,3048.148,0.48003);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1003[8] = {
   873.2413,
   1122.796,
   1372.228,
   1621.536,
   1870.683,
   2119.32,
   2367.287,
   2613.166};
   Double_t _fy1003[8] = {
   -0.06108089,
   -0.01975528,
   -0.02016057,
   -0.006860603,
   -0.03263276,
   0.06995584,
   -0.03357663,
   0.2322533};
   Double_t _fex1003[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1003[8] = {
   0.06555859,
   0.05948628,
   0.05701882,
   0.05755601,
   0.06138705,
   0.07023403,
   0.08899546,
   0.1340972};
   TGraphErrors *gre = new TGraphErrors(8,_fx1003,_fy1003,_fex1003,_fey1003);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,699.2488,2787.159);
   Graph_Graph1003->SetMinimum(-0.241367);
   Graph_Graph1003->SetMaximum(0.3998747);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1003->GetXaxis()->CenterTitle(true);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1003->GetYaxis()->CenterTitle(true);
   Graph_Graph1003->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1003->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   
   TF1 *pol01004 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01004->SetFillColor(19);
   pol01004->SetFillStyle(0);
   pol01004->SetLineColor(2);
   pol01004->SetLineWidth(2);
   pol01004->SetChisquare(5.425979);
   pol01004->SetNDF(7);
   pol01004->GetXaxis()->SetLabelFont(42);
   pol01004->GetXaxis()->SetTitleOffset(1);
   pol01004->GetXaxis()->SetTitleFont(42);
   pol01004->GetYaxis()->SetLabelFont(42);
   pol01004->GetYaxis()->SetTitleFont(42);
   pol01004->SetParameter(0,-0.007814371);
   pol01004->SetParError(0,0.02373777);
   pol01004->SetParLimits(0,0,0);
   pol01004->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01004);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Sim: all decays","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.0078
#pm0.02
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
