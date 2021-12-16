void S0S12S18_g2_delta_prime_vs_p_trackReco_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:50:47 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(440.857,-0.5795291,3046.99,0.3488428);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1103[8] = {
   875.2126,
   1123.934,
   1373.236,
   1622.304,
   1870.749,
   2119.247,
   2366.839,
   2612.635};
   Double_t _fy1103[8] = {
   -0.05551032,
   -0.147018,
   0.05758438,
   -0.1484202,
   -0.1191719,
   -0.3215705,
   -0.2428872,
   -0.3034755};
   Double_t _fex1103[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1103[8] = {
   0.1132785,
   0.09819157,
   0.08945383,
   0.08566479,
   0.08689406,
   0.09425642,
   0.1107133,
   0.1465731};
   TGraphErrors *gre = new TGraphErrors(8,_fx1103,_fy1103,_fex1103,_fey1103);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1103 = new TH1F("Graph_Graph1103","",100,701.4704,2786.377);
   Graph_Graph1103->SetMinimum(-0.4866919);
   Graph_Graph1103->SetMaximum(0.2560056);
   Graph_Graph1103->SetDirectory(0);
   Graph_Graph1103->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1103->SetLineColor(ci);
   Graph_Graph1103->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1103->GetXaxis()->CenterTitle(true);
   Graph_Graph1103->GetXaxis()->SetLabelFont(42);
   Graph_Graph1103->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1103->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1103->GetXaxis()->SetTitleFont(42);
   Graph_Graph1103->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1103->GetYaxis()->CenterTitle(true);
   Graph_Graph1103->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1103->GetYaxis()->SetLabelFont(42);
   Graph_Graph1103->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1103->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1103->GetYaxis()->SetTitleFont(42);
   Graph_Graph1103->GetZaxis()->SetLabelFont(42);
   Graph_Graph1103->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1103);
   
   
   TF1 *pol01104 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01104->SetFillColor(19);
   pol01104->SetFillStyle(0);
   pol01104->SetLineColor(2);
   pol01104->SetLineWidth(2);
   pol01104->SetChisquare(11.30317);
   pol01104->SetNDF(7);
   pol01104->GetXaxis()->SetLabelFont(42);
   pol01104->GetXaxis()->SetTitleOffset(1);
   pol01104->GetXaxis()->SetTitleFont(42);
   pol01104->GetYaxis()->SetLabelFont(42);
   pol01104->GetYaxis()->SetTitleFont(42);
   pol01104->SetParameter(0,-0.1452463);
   pol01104->SetParError(0,0.03500671);
   pol01104->SetParLimits(0,0,0);
   pol01104->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01104);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.15
#pm0.04
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
