void S18_g2_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:13:28 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(447.7303,-3.5218,3045.18,2.578864);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1135[8] = {
   880.6386,
   1123.037,
   1370.835,
   1619.675,
   1866.351,
   2115.144,
   2363.223,
   2612.271};
   Double_t _fy1135[8] = {
   -1.273632,
   -0.1032153,
   0.2913027,
   0.6374042,
   0.3515645,
   0.2637856,
   0.1481101,
   1.324665};
   Double_t _fex1135[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1135[8] = {
   0.5956734,
   0.469327,
   0.4218901,
   0.3981348,
   0.4019527,
   0.4336764,
   0.4884624,
   0.5153056};
   TGraphErrors *gre = new TGraphErrors(8,_fx1135,_fy1135,_fex1135,_fey1135);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#delta'_{g#minus2} [mrad] / 250 MeV;");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1135 = new TH1F("Graph_Graph1135","",100,707.4753,2785.435);
   Graph_Graph1135->SetMinimum(-2.911734);
   Graph_Graph1135->SetMaximum(1.968797);
   Graph_Graph1135->SetDirectory(0);
   Graph_Graph1135->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1135->SetLineColor(ci);
   Graph_Graph1135->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1135->GetXaxis()->CenterTitle(true);
   Graph_Graph1135->GetXaxis()->SetLabelFont(42);
   Graph_Graph1135->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1135->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1135->GetXaxis()->SetTitleFont(42);
   Graph_Graph1135->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph1135->GetYaxis()->CenterTitle(true);
   Graph_Graph1135->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1135->GetYaxis()->SetLabelFont(42);
   Graph_Graph1135->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1135->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1135->GetYaxis()->SetTitleFont(42);
   Graph_Graph1135->GetZaxis()->SetLabelFont(42);
   Graph_Graph1135->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1135->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1135);
   
   
   TF1 *pol01136 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01136->SetFillColor(19);
   pol01136->SetFillStyle(0);
   pol01136->SetLineColor(2);
   pol01136->SetLineWidth(2);
   pol01136->SetChisquare(12.4917);
   pol01136->SetNDF(7);
   pol01136->GetXaxis()->SetLabelFont(42);
   pol01136->GetXaxis()->SetTitleOffset(1);
   pol01136->GetXaxis()->SetTitleFont(42);
   pol01136->GetYaxis()->SetLabelFont(42);
   pol01136->GetYaxis()->SetTitleFont(42);
   pol01136->SetParameter(0,0.2783998);
   pol01136->SetParError(0,0.1606465);
   pol01136->SetParLimits(0,0,0);
   pol01136->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01136);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.28
#pm0.2
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
