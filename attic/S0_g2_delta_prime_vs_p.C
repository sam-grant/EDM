void S0_g2_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:12:14 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(446.0854,-2.947094,3049.135,1.973378);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1131[8] = {
   879.9271,
   1123.054,
   1371.406,
   1620.739,
   1868.003,
   2116.569,
   2363.182,
   2615.294};
   Double_t _fy1131[8] = {
   -0.01444312,
   -0.6617152,
   0.1714949,
   -0.207555,
   0.4153359,
   -0.109625,
   0.7646034,
   -0.7487957};
   Double_t _fex1131[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1131[8] = {
   0.4158172,
   0.3114685,
   0.2764533,
   0.2724823,
   0.2984834,
   0.3770733,
   0.5733819,
   1.365001};
   TGraphErrors *gre = new TGraphErrors(8,_fx1131,_fy1131,_fex1131,_fey1131);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1131 = new TH1F("Graph_Graph1131","",100,706.3904,2788.83);
   Graph_Graph1131->SetMinimum(-2.455047);
   Graph_Graph1131->SetMaximum(1.481331);
   Graph_Graph1131->SetDirectory(0);
   Graph_Graph1131->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1131->SetLineColor(ci);
   Graph_Graph1131->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1131->GetXaxis()->CenterTitle(true);
   Graph_Graph1131->GetXaxis()->SetLabelFont(42);
   Graph_Graph1131->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1131->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1131->GetXaxis()->SetTitleFont(42);
   Graph_Graph1131->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1131->GetYaxis()->CenterTitle(true);
   Graph_Graph1131->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1131->GetYaxis()->SetLabelFont(42);
   Graph_Graph1131->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1131->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1131->GetYaxis()->SetTitleFont(42);
   Graph_Graph1131->GetZaxis()->SetLabelFont(42);
   Graph_Graph1131->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1131->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1131);
   
   
   TF1 *pol01132 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01132->SetFillColor(19);
   pol01132->SetFillStyle(0);
   pol01132->SetLineColor(2);
   pol01132->SetLineWidth(2);
   pol01132->SetChisquare(9.537868);
   pol01132->SetNDF(7);
   pol01132->GetXaxis()->SetLabelFont(42);
   pol01132->GetXaxis()->SetTitleOffset(1);
   pol01132->GetXaxis()->SetTitleFont(42);
   pol01132->GetYaxis()->SetLabelFont(42);
   pol01132->GetYaxis()->SetTitleFont(42);
   pol01132->SetParameter(0,-0.02545533);
   pol01132->SetParError(0,0.1245335);
   pol01132->SetParLimits(0,0,0);
   pol01132->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01132);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.025
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
