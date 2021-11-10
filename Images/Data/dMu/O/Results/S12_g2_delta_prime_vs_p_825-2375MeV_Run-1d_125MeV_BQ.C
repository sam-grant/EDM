void S12_g2_delta_prime_vs_p_825-2375MeV_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:04:07 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-1.309054,2655.75,1.303385);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1139[12] = {
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
   2312};
   Double_t _fy1139[12] = {
   -0.03685006,
   0.6688317,
   0.0003615411,
   0.1475916,
   -0.05980807,
   -0.04230922,
   -0.1402756,
   0.1264426,
   0.05474339,
   -0.2670041,
   -0.1490163,
   -0.1036661};
   Double_t _fex1139[12] = {
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
   Double_t _fey1139[12] = {
   0.367622,
   0.2986477,
   0.2563957,
   0.2325808,
   0.2171519,
   0.2193463,
   0.2176751,
   0.2366014,
   0.2560909,
   0.2969998,
   0.3485264,
   0.4497698};
   TGraphErrors *gre = new TGraphErrors(12,_fx1139,_fy1139,_fex1139,_fey1139);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1139 = new TH1F("Graph_Graph1139","S12_",100,799.5,2449.5);
   Graph_Graph1139->SetMinimum(-1.04781);
   Graph_Graph1139->SetMaximum(1.042141);
   Graph_Graph1139->SetDirectory(0);
   Graph_Graph1139->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1139->SetLineColor(ci);
   Graph_Graph1139->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1139->GetXaxis()->CenterTitle(true);
   Graph_Graph1139->GetXaxis()->SetLabelFont(42);
   Graph_Graph1139->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1139->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1139->GetXaxis()->SetTitleFont(42);
   Graph_Graph1139->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1139->GetYaxis()->CenterTitle(true);
   Graph_Graph1139->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1139->GetYaxis()->SetLabelFont(42);
   Graph_Graph1139->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1139->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1139->GetYaxis()->SetTitleFont(42);
   Graph_Graph1139->GetZaxis()->SetLabelFont(42);
   Graph_Graph1139->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1139->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1139);
   
   
   TF1 *pol01140 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01140->SetFillColor(19);
   pol01140->SetFillStyle(0);
   pol01140->SetLineColor(2);
   pol01140->SetLineWidth(2);
   pol01140->SetChisquare(7.273622);
   pol01140->SetNDF(11);
   pol01140->GetXaxis()->SetLabelFont(42);
   pol01140->GetXaxis()->SetTitleOffset(1);
   pol01140->GetXaxis()->SetTitleFont(42);
   pol01140->GetYaxis()->SetLabelFont(42);
   pol01140->GetYaxis()->SetTitleFont(42);
   pol01140->SetParameter(0,0.01837393);
   pol01140->SetParError(0,0.07602213);
   pol01140->SetParLimits(0,0,0);
   pol01140->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01140);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.018
#pm0.08
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
