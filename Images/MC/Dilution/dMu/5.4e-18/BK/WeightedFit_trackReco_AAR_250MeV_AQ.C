void WeightedFit_trackReco_AAR_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Sep 14 11:42:31 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-251.625,531.25,3254.625,2718.75);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t delta_A_vs_p_fx1001[12] = {
   125,
   375,
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t delta_A_vs_p_fy1001[12] = {
   0.08665039,
   0.09472849,
   0.1589652,
   0.185318,
   0.1650691,
   0.1740059,
   0.1684732,
   0.1625283,
   0.1211768,
   0.09276316,
   0.09874818,
   0.05578108};
   Double_t delta_A_vs_p_fex1001[12] = {
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125};
   Double_t delta_A_vs_p_fey1001[12] = {
   0.6016933,
   0.04066113,
   0.02025597,
   0.01662276,
   0.01500022,
   0.01382728,
   0.01306147,
   0.01281532,
   0.01299131,
   0.01367691,
   0.01396282,
   0.01671999};
   TGraphErrors *gre = new TGraphErrors(12,delta_A_vs_p_fx1001,delta_A_vs_p_fy1001,delta_A_vs_p_fex1001,delta_A_vs_p_fey1001);
   gre->SetName("delta_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_delta_A_vs_p1001 = new TH1F("Graph_delta_A_vs_p1001","",100,0,3300);
   Graph_delta_A_vs_p1001->SetMinimum(750);
   Graph_delta_A_vs_p1001->SetMaximum(2500);
   Graph_delta_A_vs_p1001->SetDirectory(0);
   Graph_delta_A_vs_p1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_delta_A_vs_p1001->SetLineColor(ci);
   Graph_delta_A_vs_p1001->GetXaxis()->SetTitle("p [MeV] in range: p #minus 125 < p < p #plus 125");
   Graph_delta_A_vs_p1001->GetXaxis()->SetRange(4,88);
   Graph_delta_A_vs_p1001->GetXaxis()->CenterTitle(true);
   Graph_delta_A_vs_p1001->GetXaxis()->SetLabelFont(42);
   Graph_delta_A_vs_p1001->GetXaxis()->SetTitleSize(0.04);
   Graph_delta_A_vs_p1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_delta_A_vs_p1001->GetXaxis()->SetTitleFont(42);
   Graph_delta_A_vs_p1001->GetYaxis()->SetTitle("#delta' [mrad]");
   Graph_delta_A_vs_p1001->GetYaxis()->CenterTitle(true);
   Graph_delta_A_vs_p1001->GetYaxis()->SetNdivisions(4000510);
   Graph_delta_A_vs_p1001->GetYaxis()->SetLabelFont(42);
   Graph_delta_A_vs_p1001->GetYaxis()->SetTitleSize(0.04);
   Graph_delta_A_vs_p1001->GetYaxis()->SetTitleOffset(1.1);
   Graph_delta_A_vs_p1001->GetYaxis()->SetTitleFont(42);
   Graph_delta_A_vs_p1001->GetZaxis()->SetLabelFont(42);
   Graph_delta_A_vs_p1001->GetZaxis()->SetTitleOffset(1);
   Graph_delta_A_vs_p1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_delta_A_vs_p1001);
   
   
   TF1 *pol01002 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01002->SetFillColor(19);
   pol01002->SetFillStyle(0);
   pol01002->SetLineColor(2);
   pol01002->SetLineWidth(2);
   pol01002->SetChisquare(33.90794);
   pol01002->SetNDF(6);
   pol01002->GetXaxis()->SetLabelFont(42);
   pol01002->GetXaxis()->SetTitleOffset(1);
   pol01002->GetXaxis()->SetTitleFont(42);
   pol01002->GetYaxis()->SetLabelFont(42);
   pol01002->GetYaxis()->SetTitleFont(42);
   pol01002->SetParameter(0,0.1507709);
   pol01002->SetParError(0,0.00523315);
   pol01002->SetParLimits(0,0,0);
   pol01002->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01002);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("delta_A_vs_p","Sim","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.151
#pm0.005
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
