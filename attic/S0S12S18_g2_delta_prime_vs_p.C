void S0S12S18_g2_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:14:46 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(446.8204,-1.361554,3047.464,1.190254);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1139[8] = {
   880.261,
   1123.043,
   1371.131,
   1620.23,
   1867.05,
   2115.574,
   2362.998,
   2614.023};
   Double_t _fy1139[8] = {
   -0.3652624,
   -0.3985241,
   0.1346003,
   0.1073879,
   0.1564911,
   0.1262009,
   0.3836682,
   0.3862056};
   Double_t _fex1139[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1139[8] = {
   0.2694947,
   0.2103684,
   0.1904466,
   0.1867599,
   0.2003159,
   0.2383155,
   0.312749,
   0.4390944};
   TGraphErrors *gre = new TGraphErrors(8,_fx1139,_fy1139,_fex1139,_fey1139);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1139 = new TH1F("Graph_Graph1139","",100,706.8848,2787.4);
   Graph_Graph1139->SetMinimum(-1.106373);
   Graph_Graph1139->SetMaximum(0.9350736);
   Graph_Graph1139->SetDirectory(0);
   Graph_Graph1139->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1139->SetLineColor(ci);
   Graph_Graph1139->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1139->GetXaxis()->CenterTitle(true);
   Graph_Graph1139->GetXaxis()->SetLabelFont(42);
   Graph_Graph1139->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1139->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1139->GetXaxis()->SetTitleFont(42);
   Graph_Graph1139->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1139->GetYaxis()->CenterTitle(true);
   Graph_Graph1139->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1139->GetYaxis()->SetLabelFont(42);
   Graph_Graph1139->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1139->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1139->GetYaxis()->SetTitleFont(42);
   Graph_Graph1139->GetZaxis()->SetLabelFont(42);
   Graph_Graph1139->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1139->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1139);
   
   
   TF1 *pol01140 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01140->SetFillColor(19);
   pol01140->SetFillStyle(0);
   pol01140->SetLineColor(2);
   pol01140->SetLineWidth(2);
   pol01140->SetChisquare(9.27198);
   pol01140->SetNDF(7);
   pol01140->GetXaxis()->SetLabelFont(42);
   pol01140->GetXaxis()->SetTitleOffset(1);
   pol01140->GetXaxis()->SetTitleFont(42);
   pol01140->GetYaxis()->SetLabelFont(42);
   pol01140->GetYaxis()->SetTitleFont(42);
   pol01140->SetParameter(0,0.03190446);
   pol01140->SetParError(0,0.08150156);
   pol01140->SetParLimits(0,0,0);
   pol01140->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01140);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.032
#pm0.08
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
