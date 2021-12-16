void S12S18_EDM_delta_prime_vs_p_trackTruth_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:52:48 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(447.2779,0.3747553,3046.33,2.940611);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1111[8] = {
   880.4532,
   1123.026,
   1371.063,
   1620.016,
   1866.622,
   2114.934,
   2362.94,
   2613.154};
   Double_t _fy1111[8] = {
   1.650624,
   1.781406,
   1.444139,
   1.85958,
   2.123887,
   1.394182,
   1.073681,
   2.181092};
   Double_t _fex1111[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1111[8] = {
   0.3548538,
   0.2838767,
   0.2592765,
   0.2514116,
   0.2642869,
   0.2980697,
   0.3538718,
   0.4023473};
   TGraphErrors *gre = new TGraphErrors(8,_fx1111,_fy1111,_fex1111,_fey1111);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{EDM} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1111 = new TH1F("Graph_Graph1111","",100,707.1831,2786.425);
   Graph_Graph1111->SetMinimum(0.6313409);
   Graph_Graph1111->SetMaximum(2.684026);
   Graph_Graph1111->SetDirectory(0);
   Graph_Graph1111->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1111->SetLineColor(ci);
   Graph_Graph1111->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1111->GetXaxis()->CenterTitle(true);
   Graph_Graph1111->GetXaxis()->SetLabelFont(42);
   Graph_Graph1111->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1111->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1111->GetXaxis()->SetTitleFont(42);
   Graph_Graph1111->GetYaxis()->SetTitle("#delta'_{EDM} [mrad] / 250 MeV");
   Graph_Graph1111->GetYaxis()->CenterTitle(true);
   Graph_Graph1111->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1111->GetYaxis()->SetLabelFont(42);
   Graph_Graph1111->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1111->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1111->GetYaxis()->SetTitleFont(42);
   Graph_Graph1111->GetZaxis()->SetLabelFont(42);
   Graph_Graph1111->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1111->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1111);
   
   
   TF1 *pol01112 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01112->SetFillColor(19);
   pol01112->SetFillStyle(0);
   pol01112->SetLineColor(2);
   pol01112->SetLineWidth(2);
   pol01112->SetChisquare(9.665678);
   pol01112->SetNDF(7);
   pol01112->GetXaxis()->SetLabelFont(42);
   pol01112->GetXaxis()->SetTitleOffset(1);
   pol01112->GetXaxis()->SetTitleFont(42);
   pol01112->GetYaxis()->SetLabelFont(42);
   pol01112->GetYaxis()->SetTitleFont(42);
   pol01112->SetParameter(0,1.699268);
   pol01112->SetParError(0,0.1049541);
   pol01112->SetParLimits(0,0,0);
   pol01112->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01112);
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
