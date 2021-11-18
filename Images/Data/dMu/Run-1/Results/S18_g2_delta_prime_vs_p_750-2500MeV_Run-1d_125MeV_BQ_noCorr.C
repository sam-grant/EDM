void S18_g2_delta_prime_vs_p_750-2500MeV_Run-1d_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 12 21:53:15 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-0.070358,2843.25,0.1055937);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1093[14] = {
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437};
   Double_t _fy1093[14] = {
   0.02332998,
   0.02517544,
   0.00307134,
   0.006628157,
   -0.008968489,
   -0.007981469,
   0.01275857,
   0.003549798,
   -0.02064081,
   -0.03451007,
   0.02028641,
   0.0170309,
   -0.0003450443,
   -0.003426058};
   Double_t _fex1093[14] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1093[14] = {
   0.02351584,
   0.01943426,
   0.01709444,
   0.01544852,
   0.01466274,
   0.01395861,
   0.01400469,
   0.01366009,
   0.01436575,
   0.0146022,
   0.01544962,
   0.01590132,
   0.01685789,
   0.01853675};
   TGraphErrors *gre = new TGraphErrors(14,_fx1093,_fy1093,_fex1093,_fey1093);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1093 = new TH1F("Graph_Graph1093","S18_",100,649.5,2599.5);
   Graph_Graph1093->SetMinimum(-0.05276282);
   Graph_Graph1093->SetMaximum(0.08799853);
   Graph_Graph1093->SetDirectory(0);
   Graph_Graph1093->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1093->SetLineColor(ci);
   Graph_Graph1093->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1093->GetXaxis()->CenterTitle(true);
   Graph_Graph1093->GetXaxis()->SetLabelFont(42);
   Graph_Graph1093->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1093->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1093->GetXaxis()->SetTitleFont(42);
   Graph_Graph1093->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1093->GetYaxis()->CenterTitle(true);
   Graph_Graph1093->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1093->GetYaxis()->SetLabelFont(42);
   Graph_Graph1093->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1093->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1093->GetYaxis()->SetTitleFont(42);
   Graph_Graph1093->GetZaxis()->SetLabelFont(42);
   Graph_Graph1093->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1093);
   
   
   TF1 *pol01094 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01094->SetFillColor(19);
   pol01094->SetFillStyle(0);
   pol01094->SetLineColor(2);
   pol01094->SetLineWidth(2);
   pol01094->SetChisquare(15.01923);
   pol01094->SetNDF(13);
   pol01094->GetXaxis()->SetLabelFont(42);
   pol01094->GetXaxis()->SetTitleOffset(1);
   pol01094->GetXaxis()->SetTitleFont(42);
   pol01094->GetYaxis()->SetLabelFont(42);
   pol01094->GetYaxis()->SetTitleFont(42);
   pol01094->SetParameter(0,0.0004931076);
   pol01094->SetParError(0,0.004210072);
   pol01094->SetParLimits(0,0,0);
   pol01094->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01094);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1d","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.00049
#pm0.004
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
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
