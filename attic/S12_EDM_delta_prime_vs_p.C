void S12_EDM_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:09:49 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(446.7139,0.08540479,3047.74,3.331895);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1123[8] = {
   880.2183,
   1123.039,
   1371.147,
   1620.261,
   1866.732,
   2114.885,
   2362.567,
   2614.236};
   Double_t _fy1123[8] = {
   1.842403,
   1.787067,
   1.283021,
   1.681544,
   2.17059,
   1.775719,
   1.076122,
   1.961839};
   Double_t _fex1123[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1123[8] = {
   0.4235793,
   0.3476248,
   0.3249767,
   0.3241016,
   0.3526306,
   0.4191707,
   0.5328546,
   0.6876442};
   TGraphErrors *gre = new TGraphErrors(8,_fx1123,_fy1123,_fex1123,_fey1123);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{EDM} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1123 = new TH1F("Graph_Graph1123","",100,706.8166,2787.638);
   Graph_Graph1123->SetMinimum(0.4100539);
   Graph_Graph1123->SetMaximum(3.007246);
   Graph_Graph1123->SetDirectory(0);
   Graph_Graph1123->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1123->SetLineColor(ci);
   Graph_Graph1123->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1123->GetXaxis()->CenterTitle(true);
   Graph_Graph1123->GetXaxis()->SetLabelFont(42);
   Graph_Graph1123->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1123->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1123->GetXaxis()->SetTitleFont(42);
   Graph_Graph1123->GetYaxis()->SetTitle("#delta'_{EDM} [mrad] / 250 MeV");
   Graph_Graph1123->GetYaxis()->CenterTitle(true);
   Graph_Graph1123->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1123->GetYaxis()->SetLabelFont(42);
   Graph_Graph1123->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1123->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1123->GetYaxis()->SetTitleFont(42);
   Graph_Graph1123->GetZaxis()->SetLabelFont(42);
   Graph_Graph1123->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1123);
   
   
   TF1 *pol01124 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01124->SetFillColor(19);
   pol01124->SetFillStyle(0);
   pol01124->SetLineColor(2);
   pol01124->SetLineWidth(2);
   pol01124->SetChisquare(5.154697);
   pol01124->SetNDF(7);
   pol01124->GetXaxis()->SetLabelFont(42);
   pol01124->GetXaxis()->SetTitleOffset(1);
   pol01124->GetXaxis()->SetTitleFont(42);
   pol01124->GetYaxis()->SetLabelFont(42);
   pol01124->GetYaxis()->SetTitleFont(42);
   pol01124->SetParameter(0,1.699273);
   pol01124->SetParError(0,0.138399);
   pol01124->SetParLimits(0,0,0);
   pol01124->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01124);
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
