void S18_EDM_delta_prime_vs_p_Run-1d_250MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 19:06:47 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.02782957,2750,0.07992803);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1087[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1087[7] = {
   0.02438784,
   0.02151921,
   0.05111123,
   0.02366384,
   0.04973556,
   0.05544645,
   0.04694472};
   Double_t _fex1087[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1087[7] = {
   0.01506969,
   0.01153651,
   0.01017565,
   0.009843886,
   0.01024882,
   0.01096465,
   0.0121297};
   TGraphErrors *gre = new TGraphErrors(7,_fx1087,_fy1087,_fex1087,_fey1087);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1087 = new TH1F("Graph_Graph1087","S18_",100,725,2525);
   Graph_Graph1087->SetMinimum(-0.01705381);
   Graph_Graph1087->SetMaximum(0.06915227);
   Graph_Graph1087->SetDirectory(0);
   Graph_Graph1087->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1087->SetLineColor(ci);
   Graph_Graph1087->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1087->GetXaxis()->CenterTitle(true);
   Graph_Graph1087->GetXaxis()->SetLabelFont(42);
   Graph_Graph1087->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1087->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1087->GetXaxis()->SetTitleFont(42);
   Graph_Graph1087->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1087->GetYaxis()->CenterTitle(true);
   Graph_Graph1087->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1087->GetYaxis()->SetLabelFont(42);
   Graph_Graph1087->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1087->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1087->GetYaxis()->SetTitleFont(42);
   Graph_Graph1087->GetZaxis()->SetLabelFont(42);
   Graph_Graph1087->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1087->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1087);
   
   
   TF1 *pol01088 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01088->SetFillColor(19);
   pol01088->SetFillStyle(0);
   pol01088->SetLineColor(2);
   pol01088->SetLineWidth(2);
   pol01088->SetChisquare(10.80057);
   pol01088->SetNDF(6);
   pol01088->GetXaxis()->SetLabelFont(42);
   pol01088->GetXaxis()->SetTitleOffset(1);
   pol01088->GetXaxis()->SetTitleFont(42);
   pol01088->GetYaxis()->SetLabelFont(42);
   pol01088->GetYaxis()->SetTitleFont(42);
   pol01088->SetParameter(0,0.03999095);
   pol01088->SetParError(0,0.004205937);
   pol01088->SetParLimits(0,0,0);
   pol01088->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01088);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.04
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
