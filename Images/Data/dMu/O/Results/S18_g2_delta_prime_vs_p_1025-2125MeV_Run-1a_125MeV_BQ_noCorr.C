void S18_g2_delta_prime_vs_p_1025-2125MeV_Run-1a_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 13:39:41 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(812,-0.2231363,2312,0.1826829);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1057[9] = {
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062};
   Double_t _fy1057[9] = {
   -0.0534868,
   0.08889733,
   -0.02398247,
   0.04465899,
   -0.0320729,
   0.02989552,
   0.005781798,
   0.03882598,
   0.02215613};
   Double_t _fex1057[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1057[9] = {
   0.04693365,
   0.04256289,
   0.04017483,
   0.03825829,
   0.03826339,
   0.03729798,
   0.03883369,
   0.03935893,
   0.04141934};
   TGraphErrors *gre = new TGraphErrors(9,_fx1057,_fy1057,_fex1057,_fey1057);
   gre->SetName("");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1057 = new TH1F("Graph_Graph1057","S18_",100,962,2162);
   Graph_Graph1057->SetMinimum(-0.1825544);
   Graph_Graph1057->SetMaximum(0.1421009);
   Graph_Graph1057->SetDirectory(0);
   Graph_Graph1057->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1057->SetLineColor(ci);
   Graph_Graph1057->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1057->GetXaxis()->CenterTitle(true);
   Graph_Graph1057->GetXaxis()->SetLabelFont(42);
   Graph_Graph1057->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1057->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1057->GetXaxis()->SetTitleFont(42);
   Graph_Graph1057->GetYaxis()->SetTitle("#delta'_{s}^{} [mrad] / 125 MeV");
   Graph_Graph1057->GetYaxis()->CenterTitle(true);
   Graph_Graph1057->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1057->GetYaxis()->SetLabelFont(42);
   Graph_Graph1057->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1057->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1057->GetYaxis()->SetTitleFont(42);
   Graph_Graph1057->GetZaxis()->SetLabelFont(42);
   Graph_Graph1057->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1057);
   
   
   TF1 *pol01058 = new TF1("pol0","pol0",1025,2125, TF1::EAddToList::kNo);
   pol01058->SetFillColor(19);
   pol01058->SetFillStyle(0);
   pol01058->SetLineColor(2);
   pol01058->SetLineWidth(2);
   pol01058->SetChisquare(8.810961);
   pol01058->SetNDF(8);
   pol01058->GetXaxis()->SetLabelFont(42);
   pol01058->GetXaxis()->SetTitleOffset(1);
   pol01058->GetXaxis()->SetTitleFont(42);
   pol01058->GetYaxis()->SetLabelFont(42);
   pol01058->GetYaxis()->SetTitleFont(42);
   pol01058->SetParameter(0,0.01460823);
   pol01058->SetParError(0,0.01336052);
   pol01058->SetParLimits(0,0,0);
   pol01058->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01058);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.015
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
