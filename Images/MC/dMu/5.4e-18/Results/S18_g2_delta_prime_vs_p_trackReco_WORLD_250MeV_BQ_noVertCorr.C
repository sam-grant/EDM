void S18_g2_delta_prime_vs_p_trackReco_WORLD_250MeV_BQ_noVertCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  4 16:39:22 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(812.9889,-1.623693,2673.284,1.802812);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1029[6] = {
   1123.038,
   1370.896,
   1619.753,
   1866.511,
   2115.078,
   2363.235};
   Double_t _fy1029[6] = {
   -0.09975975,
   0.1647795,
   0.1657817,
   0.1743155,
   -0.1675463,
   0.3761091};
   Double_t _fex1029[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1029[6] = {
   0.3482312,
   0.2397854,
   0.2291598,
   0.2428333,
   0.3634959,
   0.3340526};
   TGraphErrors *gre = new TGraphErrors(6,_fx1029,_fy1029,_fex1029,_fey1029);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1029 = new TH1F("Graph_Graph1029","",100,999.0184,2487.255);
   Graph_Graph1029->SetMinimum(-1.281042);
   Graph_Graph1029->SetMaximum(1.460162);
   Graph_Graph1029->SetDirectory(0);
   Graph_Graph1029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1029->SetLineColor(ci);
   Graph_Graph1029->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1029->GetXaxis()->CenterTitle(true);
   Graph_Graph1029->GetXaxis()->SetLabelFont(42);
   Graph_Graph1029->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1029->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1029->GetXaxis()->SetTitleFont(42);
   Graph_Graph1029->GetYaxis()->SetTitle("#delta [mrad] / 250 MeV");
   Graph_Graph1029->GetYaxis()->CenterTitle(true);
   Graph_Graph1029->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1029->GetYaxis()->SetLabelFont(42);
   Graph_Graph1029->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1029->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1029->GetYaxis()->SetTitleFont(42);
   Graph_Graph1029->GetZaxis()->SetLabelFont(42);
   Graph_Graph1029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1029);
   
   
   TF1 *pol01030 = new TF1("pol0","pol0",1000,2500, TF1::EAddToList::kNo);
   pol01030->SetFillColor(19);
   pol01030->SetFillStyle(0);
   pol01030->SetLineColor(2);
   pol01030->SetLineWidth(2);
   pol01030->SetChisquare(1.726764);
   pol01030->SetNDF(5);
   pol01030->GetXaxis()->SetLabelFont(42);
   pol01030->GetXaxis()->SetTitleOffset(1);
   pol01030->GetXaxis()->SetTitleFont(42);
   pol01030->GetYaxis()->SetLabelFont(42);
   pol01030->GetYaxis()->SetTitleFont(42);
   pol01030->SetParameter(0,0.1312359);
   pol01030->SetParError(0,0.1131052);
   pol01030->SetParLimits(0,0,0);
   pol01030->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01030);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.13
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
