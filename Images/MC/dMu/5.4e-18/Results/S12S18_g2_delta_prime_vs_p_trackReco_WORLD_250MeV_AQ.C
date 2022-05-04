void S12S18_g2_delta_prime_vs_p_trackReco_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 23:59:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(502.2799,-1.579967,2739.695,1.157815);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1017[7] = {
   875.1825,
   1123.948,
   1373.209,
   1622.265,
   1870.711,
   2119.19,
   2366.793};
   Double_t _fy1017[7] = {
   -0.1432578,
   -0.1723517,
   0.01239251,
   -0.1671583,
   -0.08948808,
   -0.3388222,
   -0.3202415};
   Double_t _fex1017[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1017[7] = {
   0.1463504,
   0.1370819,
   0.1216447,
   0.1158592,
   0.1654274,
   0.1150339,
   0.2359471};
   TGraphErrors *gre = new TGraphErrors(7,_fx1017,_fy1017,_fex1017,_fey1017);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","",100,726.0215,2515.954);
   Graph_Graph1017->SetMinimum(-1.306189);
   Graph_Graph1017->SetMaximum(0.8840372);
   Graph_Graph1017->SetDirectory(0);
   Graph_Graph1017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1017->SetLineColor(ci);
   Graph_Graph1017->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1017->GetXaxis()->CenterTitle(true);
   Graph_Graph1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph1017->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph1017->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1017->GetYaxis()->CenterTitle(true);
   Graph_Graph1017->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph1017->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1017->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph1017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1017);
   
   
   TF1 *pol01018 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01018->SetFillColor(19);
   pol01018->SetFillStyle(0);
   pol01018->SetLineColor(2);
   pol01018->SetLineWidth(2);
   pol01018->SetChisquare(5.075053);
   pol01018->SetNDF(6);
   pol01018->GetXaxis()->SetLabelFont(42);
   pol01018->GetXaxis()->SetTitleOffset(1);
   pol01018->GetXaxis()->SetTitleFont(42);
   pol01018->GetYaxis()->SetLabelFont(42);
   pol01018->GetYaxis()->SetTitleFont(42);
   pol01018->SetParameter(0,-0.1669185);
   pol01018->SetParError(0,0.05184378);
   pol01018->SetParLimits(0,0,0);
   pol01018->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01018);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Sim: reco vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.167
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
