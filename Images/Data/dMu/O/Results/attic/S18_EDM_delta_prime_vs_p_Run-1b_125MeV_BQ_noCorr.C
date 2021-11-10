void S18_EDM_delta_prime_vs_p_Run-1b_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 17:46:57 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-0.1712096,2843.25,0.2550695);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1063[14] = {
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
   Double_t _fy1063[14] = {
   0.04192994,
   0.00497348,
   -0.006991241,
   0.01757761,
   -0.02346623,
   0.0540355,
   -0.02189556,
   -0.007972636,
   -0.007611004,
   -0.02130962,
   -0.01593898,
   -0.01695674,
   -0.004013437,
   -0.001185358};
   Double_t _fex1063[14] = {
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
   Double_t _fey1063[14] = {
   0.06200422,
   0.05120888,
   0.04519556,
   0.04088514,
   0.03852598,
   0.03680451,
   0.036672,
   0.03582899,
   0.03724832,
   0.0378324,
   0.03995599,
   0.0406045,
   0.04227845,
   0.04586511};
   TGraphErrors *gre = new TGraphErrors(14,_fx1063,_fy1063,_fex1063,_fey1063);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1063 = new TH1F("Graph_Graph1063","S18_",100,649.5,2599.5);
   Graph_Graph1063->SetMinimum(-0.1285817);
   Graph_Graph1063->SetMaximum(0.2124416);
   Graph_Graph1063->SetDirectory(0);
   Graph_Graph1063->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1063->SetLineColor(ci);
   Graph_Graph1063->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1063->GetXaxis()->CenterTitle(true);
   Graph_Graph1063->GetXaxis()->SetLabelFont(42);
   Graph_Graph1063->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1063->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1063->GetXaxis()->SetTitleFont(42);
   Graph_Graph1063->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1063->GetYaxis()->CenterTitle(true);
   Graph_Graph1063->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1063->GetYaxis()->SetLabelFont(42);
   Graph_Graph1063->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1063->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1063->GetYaxis()->SetTitleFont(42);
   Graph_Graph1063->GetZaxis()->SetLabelFont(42);
   Graph_Graph1063->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1063);
   
   
   TF1 *pol01064 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01064->SetFillColor(19);
   pol01064->SetFillStyle(0);
   pol01064->SetLineColor(2);
   pol01064->SetLineWidth(2);
   pol01064->SetChisquare(4.252493);
   pol01064->SetNDF(13);
   pol01064->GetXaxis()->SetLabelFont(42);
   pol01064->GetXaxis()->SetTitleOffset(1);
   pol01064->GetXaxis()->SetTitleFont(42);
   pol01064->GetYaxis()->SetLabelFont(42);
   pol01064->GetYaxis()->SetTitleFont(42);
   pol01064->SetParameter(0,-0.002630406);
   pol01064->SetParError(0,0.01094289);
   pol01064->SetParLimits(0,0,0);
   pol01064->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01064);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1b","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.0026
#pm0.01
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
