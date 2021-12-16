void S0_EDM_delta_prime_vs_p_trackReco_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:46:46 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(440.8959,1.074345,3047.151,2.546488);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1085[8] = {
   875.2717,
   1123.906,
   1373.288,
   1622.379,
   1870.823,
   2119.356,
   2366.927,
   2612.775};
   Double_t _fy1085[8] = {
   1.881029,
   1.41971,
   1.82994,
   1.618598,
   1.7864,
   1.770155,
   1.533917,
   1.778334};
   Double_t _fex1085[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1085[8] = {
   0.1884527,
   0.1585203,
   0.141918,
   0.1354017,
   0.1381395,
   0.1525605,
   0.1853539,
   0.2652436};
   TGraphErrors *gre = new TGraphErrors(8,_fx1085,_fy1085,_fex1085,_fey1085);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{EDM} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1085 = new TH1F("Graph_Graph1085","",100,701.5214,2786.525);
   Graph_Graph1085->SetMinimum(1.221559);
   Graph_Graph1085->SetMaximum(2.399273);
   Graph_Graph1085->SetDirectory(0);
   Graph_Graph1085->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1085->SetLineColor(ci);
   Graph_Graph1085->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1085->GetXaxis()->CenterTitle(true);
   Graph_Graph1085->GetXaxis()->SetLabelFont(42);
   Graph_Graph1085->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1085->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1085->GetXaxis()->SetTitleFont(42);
   Graph_Graph1085->GetYaxis()->SetTitle("#delta'_{EDM} [mrad] / 250 MeV");
   Graph_Graph1085->GetYaxis()->CenterTitle(true);
   Graph_Graph1085->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1085->GetYaxis()->SetLabelFont(42);
   Graph_Graph1085->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1085->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1085->GetYaxis()->SetTitleFont(42);
   Graph_Graph1085->GetZaxis()->SetLabelFont(42);
   Graph_Graph1085->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1085->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1085);
   
   
   TF1 *pol01086 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01086->SetFillColor(19);
   pol01086->SetFillStyle(0);
   pol01086->SetLineColor(2);
   pol01086->SetLineWidth(2);
   pol01086->SetChisquare(6.741523);
   pol01086->SetNDF(7);
   pol01086->GetXaxis()->SetLabelFont(42);
   pol01086->GetXaxis()->SetTitleOffset(1);
   pol01086->GetXaxis()->SetTitleFont(42);
   pol01086->GetYaxis()->SetLabelFont(42);
   pol01086->GetYaxis()->SetTitleFont(42);
   pol01086->SetParameter(0,1.699279);
   pol01086->SetParError(0,0.05671958);
   pol01086->SetParLimits(0,0,0);
   pol01086->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01086);
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
