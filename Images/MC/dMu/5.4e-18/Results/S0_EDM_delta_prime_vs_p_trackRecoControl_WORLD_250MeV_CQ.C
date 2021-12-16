void S0_EDM_delta_prime_vs_p_trackRecoControl_WORLD_250MeV_CQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:41:30 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(451.1189,-0.4308946,3046.401,3.878051);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1045[8] = {
   883.6659,
   1126.229,
   1373.859,
   1622.425,
   1870.722,
   2119.361,
   2367.038,
   2613.854};
   Double_t _fy1045[8] = {
   2.064097,
   1.357952,
   1.776986,
   1.59305,
   1.98535,
   1.550796,
   1.598843,
   1.803354};
   Double_t _fex1045[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1045[8] = {
   -0.4667588,
   -0.3003383,
   -0.2361671,
   -0.211299,
   -0.209417,
   -0.2323715,
   -0.2924959,
   -0.4562355};
   TGraphErrors *gre = new TGraphErrors(8,_fx1045,_fy1045,_fex1045,_fey1045);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{EDM} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1045 = new TH1F("Graph_Graph1045","",100,710.6471,2786.873);
   Graph_Graph1045->SetMinimum(1.733375);
   Graph_Graph1045->SetMaximum(1.723578);
   Graph_Graph1045->SetDirectory(0);
   Graph_Graph1045->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1045->SetLineColor(ci);
   Graph_Graph1045->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1045->GetXaxis()->CenterTitle(true);
   Graph_Graph1045->GetXaxis()->SetLabelFont(42);
   Graph_Graph1045->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1045->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1045->GetXaxis()->SetTitleFont(42);
   Graph_Graph1045->GetYaxis()->SetTitle("#delta'_{EDM} [mrad] / 250 MeV");
   Graph_Graph1045->GetYaxis()->CenterTitle(true);
   Graph_Graph1045->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1045->GetYaxis()->SetLabelFont(42);
   Graph_Graph1045->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1045->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1045->GetYaxis()->SetTitleFont(42);
   Graph_Graph1045->GetZaxis()->SetLabelFont(42);
   Graph_Graph1045->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1045);
   
   
   TF1 *pol01046 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01046->SetFillColor(19);
   pol01046->SetFillStyle(0);
   pol01046->SetLineColor(2);
   pol01046->SetLineWidth(2);
   pol01046->SetChisquare(0.3894033);
   pol01046->SetNDF(7);
   pol01046->GetXaxis()->SetLabelFont(42);
   pol01046->GetXaxis()->SetTitleOffset(1);
   pol01046->GetXaxis()->SetTitleFont(42);
   pol01046->GetYaxis()->SetLabelFont(42);
   pol01046->GetYaxis()->SetTitleFont(42);
   pol01046->SetParameter(0,1.716303);
   pol01046->SetParError(0,0.08338843);
   pol01046->SetParLimits(0,0,0);
   pol01046->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01046);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 1.7
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
