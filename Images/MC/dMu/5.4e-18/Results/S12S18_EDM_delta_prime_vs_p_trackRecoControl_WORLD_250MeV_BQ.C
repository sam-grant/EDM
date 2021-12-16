void S12S18_EDM_delta_prime_vs_p_trackRecoControl_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:40:39 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(446.7675,1.563749,3075.373,7.407713);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1031[8] = {
   884.8685,
   1123.522,
   1363.588,
   1601.322,
   1825.172,
   2101.221,
   2411.982,
   2637.272};
   Double_t _fy1031[8] = {
   1.987808,
   1.374286,
   1.757057,
   2.036995,
   0.5982748,
   14.13347,
   -0.4787027,
   1.83379};
   Double_t _fex1031[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1031[8] = {
   -0.876374,
   -0.6190871,
   -0.5834392,
   -0.7154323,
   -1.453012,
   -5.84812,
   -2.760641,
   -1.246949};
   TGraphErrors *gre = new TGraphErrors(8,_fx1031,_fy1031,_fex1031,_fey1031);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{EDM} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1031 = new TH1F("Graph_Graph1031","",100,709.6281,2812.513);
   Graph_Graph1031->SetMinimum(2.148145);
   Graph_Graph1031->SetMaximum(6.823316);
   Graph_Graph1031->SetDirectory(0);
   Graph_Graph1031->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1031->SetLineColor(ci);
   Graph_Graph1031->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1031->GetXaxis()->CenterTitle(true);
   Graph_Graph1031->GetXaxis()->SetLabelFont(42);
   Graph_Graph1031->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1031->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1031->GetXaxis()->SetTitleFont(42);
   Graph_Graph1031->GetYaxis()->SetTitle("#delta'_{EDM} [mrad] / 250 MeV");
   Graph_Graph1031->GetYaxis()->CenterTitle(true);
   Graph_Graph1031->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1031->GetYaxis()->SetLabelFont(42);
   Graph_Graph1031->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1031->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1031->GetYaxis()->SetTitleFont(42);
   Graph_Graph1031->GetZaxis()->SetLabelFont(42);
   Graph_Graph1031->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1031);
   
   
   TF1 *pol01032 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01032->SetFillColor(19);
   pol01032->SetFillStyle(0);
   pol01032->SetLineColor(2);
   pol01032->SetLineWidth(2);
   pol01032->SetChisquare(149.2519);
   pol01032->SetNDF(7);
   pol01032->GetXaxis()->SetLabelFont(42);
   pol01032->GetXaxis()->SetTitleOffset(1);
   pol01032->GetXaxis()->SetTitleFont(42);
   pol01032->GetYaxis()->SetLabelFont(42);
   pol01032->GetYaxis()->SetTitleFont(42);
   pol01032->SetParameter(0,2.905372);
   pol01032->SetParError(0,1.632548);
   pol01032->SetParLimits(0,0,0);
   pol01032->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01032);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Sim: trackRecoControl","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 2.9
#pm2
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
