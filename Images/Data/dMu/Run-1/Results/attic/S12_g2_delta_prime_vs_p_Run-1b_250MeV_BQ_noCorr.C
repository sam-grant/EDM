void S12_g2_delta_prime_vs_p_Run-1b_250MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 19:06:46 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.06625796,2750,0.1029527);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1067[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1067[7] = {
   0.01834738,
   -0.009601596,
   0.009130845,
   0.02154253,
   -0.0204318,
   -0.007806962,
   -0.008302308};
   Double_t _fex1067[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1067[7] = {
   0.02461246,
   0.01871567,
   0.01613536,
   0.01542751,
   0.01572566,
   0.0166921,
   0.01852131};
   TGraphErrors *gre = new TGraphErrors(7,_fx1067,_fy1067,_fex1067,_fey1067);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1067 = new TH1F("Graph_Graph1067","S12_",100,725,2525);
   Graph_Graph1067->SetMinimum(-0.04933689);
   Graph_Graph1067->SetMaximum(0.08603164);
   Graph_Graph1067->SetDirectory(0);
   Graph_Graph1067->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1067->SetLineColor(ci);
   Graph_Graph1067->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1067->GetXaxis()->CenterTitle(true);
   Graph_Graph1067->GetXaxis()->SetLabelFont(42);
   Graph_Graph1067->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1067->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1067->GetXaxis()->SetTitleFont(42);
   Graph_Graph1067->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
   Graph_Graph1067->GetYaxis()->CenterTitle(true);
   Graph_Graph1067->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1067->GetYaxis()->SetLabelFont(42);
   Graph_Graph1067->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1067->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1067->GetYaxis()->SetTitleFont(42);
   Graph_Graph1067->GetZaxis()->SetLabelFont(42);
   Graph_Graph1067->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1067);
   
   
   TF1 *pol01068 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01068->SetFillColor(19);
   pol01068->SetFillStyle(0);
   pol01068->SetLineColor(2);
   pol01068->SetLineWidth(2);
   pol01068->SetChisquare(5.194982);
   pol01068->SetNDF(6);
   pol01068->GetXaxis()->SetLabelFont(42);
   pol01068->GetXaxis()->SetTitleOffset(1);
   pol01068->GetXaxis()->SetTitleFont(42);
   pol01068->GetYaxis()->SetLabelFont(42);
   pol01068->GetYaxis()->SetTitleFont(42);
   pol01068->SetParameter(0,-0.0002763729);
   pol01068->SetParError(0,0.006580074);
   pol01068->SetParLimits(0,0,0);
   pol01068->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01068);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.00028
#pm0.007
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
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
