void S12_EDM_delta_prime_vs_p_trackReco_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 01:01:42 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(446.7139,0.08540479,3047.74,3.331895);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1011[8] = {
   880.2183,
   1123.039,
   1371.147,
   1620.261,
   1866.732,
   2114.885,
   2362.567,
   2614.236};
   Double_t _fy1011[8] = {
   1.842403,
   1.787067,
   1.283021,
   1.681544,
   2.17059,
   1.775719,
   1.076122,
   1.961839};
   Double_t _fex1011[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1011[8] = {
   0.4235793,
   0.3476248,
   0.3249767,
   0.3241016,
   0.3526306,
   0.4191707,
   0.5328546,
   0.6876442};
   TGraphErrors *gre = new TGraphErrors(8,_fx1011,_fy1011,_fex1011,_fey1011);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{EDM} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","",100,706.8166,2787.638);
   Graph_Graph1011->SetMinimum(0.4100539);
   Graph_Graph1011->SetMaximum(3.007246);
   Graph_Graph1011->SetDirectory(0);
   Graph_Graph1011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1011->SetLineColor(ci);
   Graph_Graph1011->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1011->GetXaxis()->CenterTitle(true);
   Graph_Graph1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph1011->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1011->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph1011->GetYaxis()->SetTitle("#delta'_{EDM} [mrad] / 250 MeV");
   Graph_Graph1011->GetYaxis()->CenterTitle(true);
   Graph_Graph1011->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph1011->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1011->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph1011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1011);
   
   
   TF1 *pol01012 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01012->SetFillColor(19);
   pol01012->SetFillStyle(0);
   pol01012->SetLineColor(2);
   pol01012->SetLineWidth(2);
   pol01012->SetChisquare(5.154697);
   pol01012->SetNDF(7);
   pol01012->GetXaxis()->SetLabelFont(42);
   pol01012->GetXaxis()->SetTitleOffset(1);
   pol01012->GetXaxis()->SetTitleFont(42);
   pol01012->GetYaxis()->SetLabelFont(42);
   pol01012->GetYaxis()->SetTitleFont(42);
   pol01012->SetParameter(0,1.699273);
   pol01012->SetParError(0,0.138399);
   pol01012->SetParLimits(0,0,0);
   pol01012->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01012);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 1.7
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
