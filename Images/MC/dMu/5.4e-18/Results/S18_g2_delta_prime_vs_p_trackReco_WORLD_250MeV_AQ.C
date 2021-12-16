void S18_g2_delta_prime_vs_p_trackReco_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:49:47 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(440.7822,-0.9140342,3046.94,0.5975679);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1099[8] = {
   875.1418,
   1123.931,
   1373.172,
   1622.294,
   1870.639,
   2119.126,
   2366.724,
   2612.58};
   Double_t _fy1099[8] = {
   -0.2114354,
   -0.03660769,
   -0.007918737,
   -0.1175975,
   0.2577906,
   -0.4682738,
   -0.117067,
   0.1364583};
   Double_t _fex1099[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1099[8] = {
   0.2005231,
   0.1755838,
   0.1600884,
   0.1519717,
   0.1508937,
   0.1583091,
   0.1766049,
   0.2147653};
   TGraphErrors *gre = new TGraphErrors(8,_fx1099,_fy1099,_fex1099,_fey1099);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1099 = new TH1F("Graph_Graph1099","",100,701.3979,2786.324);
   Graph_Graph1099->SetMinimum(-0.762874);
   Graph_Graph1099->SetMaximum(0.4464077);
   Graph_Graph1099->SetDirectory(0);
   Graph_Graph1099->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1099->SetLineColor(ci);
   Graph_Graph1099->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1099->GetXaxis()->CenterTitle(true);
   Graph_Graph1099->GetXaxis()->SetLabelFont(42);
   Graph_Graph1099->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1099->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1099->GetXaxis()->SetTitleFont(42);
   Graph_Graph1099->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1099->GetYaxis()->CenterTitle(true);
   Graph_Graph1099->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1099->GetYaxis()->SetLabelFont(42);
   Graph_Graph1099->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1099->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1099->GetYaxis()->SetTitleFont(42);
   Graph_Graph1099->GetZaxis()->SetLabelFont(42);
   Graph_Graph1099->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1099);
   
   
   TF1 *pol01100 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01100->SetFillColor(19);
   pol01100->SetFillStyle(0);
   pol01100->SetLineColor(2);
   pol01100->SetLineWidth(2);
   pol01100->SetChisquare(12.82425);
   pol01100->SetNDF(7);
   pol01100->GetXaxis()->SetLabelFont(42);
   pol01100->GetXaxis()->SetTitleOffset(1);
   pol01100->GetXaxis()->SetTitleFont(42);
   pol01100->GetYaxis()->SetLabelFont(42);
   pol01100->GetYaxis()->SetTitleFont(42);
   pol01100->SetParameter(0,-0.07216852);
   pol01100->SetParError(0,0.06006381);
   pol01100->SetParLimits(0,0,0);
   pol01100->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01100);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.072
#pm0.06
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
