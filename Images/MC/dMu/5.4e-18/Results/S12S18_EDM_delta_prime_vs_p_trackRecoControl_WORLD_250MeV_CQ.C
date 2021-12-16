void S12S18_EDM_delta_prime_vs_p_trackRecoControl_WORLD_250MeV_CQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:42:03 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(451.571,1.522563,3045.709,1.684594);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1051[8] = {
   883.9274,
   1126.188,
   1373.751,
   1622.443,
   1870.726,
   2119.143,
   2366.618,
   2613.353};
   Double_t _fy1051[8] = {
   1.581505,
   1.544777,
   1.90031,
   1.761091,
   1.881805,
   1.296629,
   1.623251,
   1.999639};
   Double_t _fex1051[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1051[8] = {
   -0.3045919,
   -0.219227,
   -0.1855356,
   -0.1724318,
   -0.1750119,
   -0.1937093,
   -0.2351755,
   -0.3327626};
   TGraphErrors *gre = new TGraphErrors(8,_fx1051,_fy1051,_fex1051,_fey1051);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{EDM} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1051 = new TH1F("Graph_Graph1051","",100,710.9849,2786.295);
   Graph_Graph1051->SetMinimum(1.538766);
   Graph_Graph1051->SetMaximum(1.668391);
   Graph_Graph1051->SetDirectory(0);
   Graph_Graph1051->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1051->SetLineColor(ci);
   Graph_Graph1051->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1051->GetXaxis()->CenterTitle(true);
   Graph_Graph1051->GetXaxis()->SetLabelFont(42);
   Graph_Graph1051->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1051->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1051->GetXaxis()->SetTitleFont(42);
   Graph_Graph1051->GetYaxis()->SetTitle("#delta'_{EDM} [mrad] / 250 MeV");
   Graph_Graph1051->GetYaxis()->CenterTitle(true);
   Graph_Graph1051->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1051->GetYaxis()->SetLabelFont(42);
   Graph_Graph1051->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1051->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1051->GetYaxis()->SetTitleFont(42);
   Graph_Graph1051->GetZaxis()->SetLabelFont(42);
   Graph_Graph1051->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1051->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1051);
   
   
   TF1 *pol01052 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01052->SetFillColor(19);
   pol01052->SetFillStyle(0);
   pol01052->SetLineColor(2);
   pol01052->SetLineWidth(2);
   pol01052->SetChisquare(0.3734115);
   pol01052->SetNDF(7);
   pol01052->GetXaxis()->SetLabelFont(42);
   pol01052->GetXaxis()->SetTitleOffset(1);
   pol01052->GetXaxis()->SetTitleFont(42);
   pol01052->GetYaxis()->SetLabelFont(42);
   pol01052->GetYaxis()->SetTitleFont(42);
   pol01052->SetParameter(0,1.698626);
   pol01052->SetParError(0,0.0816582);
   pol01052->SetParLimits(0,0,0);
   pol01052->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01052);
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
