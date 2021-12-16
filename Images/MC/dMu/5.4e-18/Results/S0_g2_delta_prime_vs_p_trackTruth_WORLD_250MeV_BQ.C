void S0_g2_delta_prime_vs_p_trackTruth_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:53:54 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(446.1177,-2.725886,3048.889,2.149089);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1115[8] = {
   879.913,
   1123.018,
   1371.498,
   1620.743,
   1868.042,
   2116.557,
   2363.191,
   2615.094};
   Double_t _fy1115[8] = {
   0.04520471,
   -0.6174181,
   0.1129276,
   -0.1267849,
   0.4265701,
   -0.2773172,
   0.9852602,
   -0.8929168};
   Double_t _fex1115[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1115[8] = {
   0.411107,
   0.3131054,
   0.2797042,
   0.27623,
   0.3007692,
   0.3721887,
   0.541065,
   1.076377};
   TGraphErrors *gre = new TGraphErrors(8,_fx1115,_fy1115,_fex1115,_fey1115);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1115 = new TH1F("Graph_Graph1115","",100,706.3949,2788.612);
   Graph_Graph1115->SetMinimum(-2.238388);
   Graph_Graph1115->SetMaximum(1.661591);
   Graph_Graph1115->SetDirectory(0);
   Graph_Graph1115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1115->SetLineColor(ci);
   Graph_Graph1115->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1115->GetXaxis()->CenterTitle(true);
   Graph_Graph1115->GetXaxis()->SetLabelFont(42);
   Graph_Graph1115->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1115->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1115->GetXaxis()->SetTitleFont(42);
   Graph_Graph1115->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1115->GetYaxis()->CenterTitle(true);
   Graph_Graph1115->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1115->GetYaxis()->SetLabelFont(42);
   Graph_Graph1115->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1115->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1115->GetYaxis()->SetTitleFont(42);
   Graph_Graph1115->GetZaxis()->SetLabelFont(42);
   Graph_Graph1115->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1115->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1115);
   
   
   TF1 *pol01116 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01116->SetFillColor(19);
   pol01116->SetFillStyle(0);
   pol01116->SetLineColor(2);
   pol01116->SetLineWidth(2);
   pol01116->SetChisquare(10.83125);
   pol01116->SetNDF(7);
   pol01116->GetXaxis()->SetLabelFont(42);
   pol01116->GetXaxis()->SetTitleOffset(1);
   pol01116->GetXaxis()->SetTitleFont(42);
   pol01116->GetYaxis()->SetLabelFont(42);
   pol01116->GetYaxis()->SetTitleFont(42);
   pol01116->SetParameter(0,-0.01456488);
   pol01116->SetParError(0,0.1244593);
   pol01116->SetParLimits(0,0,0);
   pol01116->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01116);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.015
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
