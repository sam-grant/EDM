void S12_g2_delta_prime_vs_p_trackReco_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:49:18 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(440.8932,-1.055204,3046.871,0.653059);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1097[8] = {
   875.2228,
   1123.964,
   1373.246,
   1622.237,
   1870.782,
   2119.254,
   2366.86,
   2612.541};
   Double_t _fy1097[8] = {
   -0.06725112,
   -0.2768111,
   0.03276677,
   -0.2002456,
   -0.3985085,
   -0.2154848,
   -0.259552,
   -0.5532743};
   Double_t _fex1097[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1097[8] = {
   0.1998123,
   0.1772931,
   0.164508,
   0.1593182,
   0.1626936,
   0.1764102,
   0.2048728,
   0.2648829};
   TGraphErrors *gre = new TGraphErrors(8,_fx1097,_fy1097,_fex1097,_fey1097);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1097 = new TH1F("Graph_Graph1097","",100,701.4909,2786.273);
   Graph_Graph1097->SetMinimum(-0.884378);
   Graph_Graph1097->SetMaximum(0.4822326);
   Graph_Graph1097->SetDirectory(0);
   Graph_Graph1097->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1097->SetLineColor(ci);
   Graph_Graph1097->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1097->GetXaxis()->CenterTitle(true);
   Graph_Graph1097->GetXaxis()->SetLabelFont(42);
   Graph_Graph1097->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1097->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1097->GetXaxis()->SetTitleFont(42);
   Graph_Graph1097->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1097->GetYaxis()->CenterTitle(true);
   Graph_Graph1097->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1097->GetYaxis()->SetLabelFont(42);
   Graph_Graph1097->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1097->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1097->GetYaxis()->SetTitleFont(42);
   Graph_Graph1097->GetZaxis()->SetLabelFont(42);
   Graph_Graph1097->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1097);
   
   
   TF1 *pol01098 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01098->SetFillColor(19);
   pol01098->SetFillStyle(0);
   pol01098->SetLineColor(2);
   pol01098->SetLineWidth(2);
   pol01098->SetChisquare(5.888036);
   pol01098->SetNDF(7);
   pol01098->GetXaxis()->SetLabelFont(42);
   pol01098->GetXaxis()->SetTitleOffset(1);
   pol01098->GetXaxis()->SetTitleFont(42);
   pol01098->GetYaxis()->SetLabelFont(42);
   pol01098->GetYaxis()->SetTitleFont(42);
   pol01098->SetParameter(0,-0.2206404);
   pol01098->SetParError(0,0.06438899);
   pol01098->SetParLimits(0,0,0);
   pol01098->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01098);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.22
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
