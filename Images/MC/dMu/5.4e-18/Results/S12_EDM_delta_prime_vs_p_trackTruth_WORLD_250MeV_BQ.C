void S12_EDM_delta_prime_vs_p_trackTruth_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:51:46 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(446.7703,0.09933575,3047.665,3.393936);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1107[8] = {
   880.2527,
   1123.051,
   1371.173,
   1620.272,
   1866.762,
   2114.836,
   2362.621,
   2614.182};
   Double_t _fy1107[8] = {
   1.923179,
   1.687105,
   1.342801,
   1.621238,
   2.177472,
   1.841992,
   1.111007,
   1.882597};
   Double_t _fex1107[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1107[8] = {
   0.4150168,
   0.3438073,
   0.3236209,
   0.3254151,
   0.356275,
   0.4256218,
   0.5457692,
   0.7103975};
   TGraphErrors *gre = new TGraphErrors(8,_fx1107,_fy1107,_fex1107,_fey1107);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{EDM} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1107 = new TH1F("Graph_Graph1107","",100,706.8598,2787.575);
   Graph_Graph1107->SetMinimum(0.4287958);
   Graph_Graph1107->SetMaximum(3.064476);
   Graph_Graph1107->SetDirectory(0);
   Graph_Graph1107->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1107->SetLineColor(ci);
   Graph_Graph1107->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1107->GetXaxis()->CenterTitle(true);
   Graph_Graph1107->GetXaxis()->SetLabelFont(42);
   Graph_Graph1107->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1107->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1107->GetXaxis()->SetTitleFont(42);
   Graph_Graph1107->GetYaxis()->SetTitle("#delta'_{EDM} [mrad] / 250 MeV");
   Graph_Graph1107->GetYaxis()->CenterTitle(true);
   Graph_Graph1107->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1107->GetYaxis()->SetLabelFont(42);
   Graph_Graph1107->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1107->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1107->GetYaxis()->SetTitleFont(42);
   Graph_Graph1107->GetZaxis()->SetLabelFont(42);
   Graph_Graph1107->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1107->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1107);
   
   
   TF1 *pol01108 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01108->SetFillColor(19);
   pol01108->SetFillStyle(0);
   pol01108->SetLineColor(2);
   pol01108->SetLineWidth(2);
   pol01108->SetChisquare(4.705535);
   pol01108->SetNDF(7);
   pol01108->GetXaxis()->SetLabelFont(42);
   pol01108->GetXaxis()->SetTitleOffset(1);
   pol01108->GetXaxis()->SetTitleFont(42);
   pol01108->GetYaxis()->SetLabelFont(42);
   pol01108->GetYaxis()->SetTitleFont(42);
   pol01108->SetParameter(0,1.699272);
   pol01108->SetParError(0,0.1386821);
   pol01108->SetParLimits(0,0,0);
   pol01108->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01108);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Sim: trackTruth","lpf");
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
