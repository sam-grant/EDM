void S12S18_EDM_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:11:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(447.2191,0.2768515,3046.475,3.021799);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1127[8] = {
   880.4285,
   1123.038,
   1370.992,
   1619.971,
   1866.545,
   2115.011,
   2362.886,
   2613.266};
   Double_t _fy1127[8] = {
   1.574755,
   1.842029,
   1.436236,
   1.911254,
   2.081731,
   1.39062,
   0.9920363,
   2.251285};
   Double_t _fex1127[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1127[8] = {
   0.3499427,
   0.2822923,
   0.2592871,
   0.2519095,
   0.2650728,
   0.2985853,
   0.352552,
   0.3968152};
   TGraphErrors *gre = new TGraphErrors(8,_fx1127,_fy1127,_fex1127,_fey1127);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{EDM} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1127 = new TH1F("Graph_Graph1127","",100,707.1447,2786.549);
   Graph_Graph1127->SetMinimum(0.5513463);
   Graph_Graph1127->SetMaximum(2.747304);
   Graph_Graph1127->SetDirectory(0);
   Graph_Graph1127->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1127->SetLineColor(ci);
   Graph_Graph1127->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1127->GetXaxis()->CenterTitle(true);
   Graph_Graph1127->GetXaxis()->SetLabelFont(42);
   Graph_Graph1127->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1127->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1127->GetXaxis()->SetTitleFont(42);
   Graph_Graph1127->GetYaxis()->SetTitle("#delta'_{EDM} [mrad] / 250 MeV");
   Graph_Graph1127->GetYaxis()->CenterTitle(true);
   Graph_Graph1127->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1127->GetYaxis()->SetLabelFont(42);
   Graph_Graph1127->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1127->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1127->GetYaxis()->SetTitleFont(42);
   Graph_Graph1127->GetZaxis()->SetLabelFont(42);
   Graph_Graph1127->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1127->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1127);
   
   
   TF1 *pol01128 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01128->SetFillColor(19);
   pol01128->SetFillStyle(0);
   pol01128->SetLineColor(2);
   pol01128->SetLineWidth(2);
   pol01128->SetChisquare(11.22938);
   pol01128->SetNDF(7);
   pol01128->GetXaxis()->SetLabelFont(42);
   pol01128->GetXaxis()->SetTitleOffset(1);
   pol01128->GetXaxis()->SetTitleFont(42);
   pol01128->GetYaxis()->SetLabelFont(42);
   pol01128->GetYaxis()->SetTitleFont(42);
   pol01128->SetParameter(0,1.699266);
   pol01128->SetParError(0,0.1047178);
   pol01128->SetParLimits(0,0,0);
   pol01128->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01128);
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
