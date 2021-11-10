void S12_g2_delta_prime_vs_p_825-2375MeV_Run-1d_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:04:13 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-0.09657262,2655.75,0.1024379);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1187[12] = {
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
   Double_t _fy1187[12] = {
   -0.002696434,
   0.05297101,
   3.020511e-05,
   0.01272354,
   -0.005214615,
   -0.003659344,
   -0.01179882,
   0.01012211,
   0.004068212,
   -0.01786134,
   -0.008612061,
   -0.004873254};
   Double_t _fex1187[12] = {
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
   Double_t _fey1187[12] = {
   0.02690005,
   0.02365269,
   0.0214207,
   0.02005027,
   0.01893329,
   0.01897136,
   0.01830903,
   0.01894065,
   0.01903119,
   0.01986792,
   0.0201423,
   0.02114329};
   TGraphErrors *gre = new TGraphErrors(12,_fx1187,_fy1187,_fex1187,_fey1187);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1187 = new TH1F("Graph_Graph1187","S12_",100,799.5,2449.5);
   Graph_Graph1187->SetMinimum(-0.07667156);
   Graph_Graph1187->SetMaximum(0.08253688);
   Graph_Graph1187->SetDirectory(0);
   Graph_Graph1187->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1187->SetLineColor(ci);
   Graph_Graph1187->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1187->GetXaxis()->CenterTitle(true);
   Graph_Graph1187->GetXaxis()->SetLabelFont(42);
   Graph_Graph1187->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1187->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1187->GetXaxis()->SetTitleFont(42);
   Graph_Graph1187->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1187->GetYaxis()->CenterTitle(true);
   Graph_Graph1187->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1187->GetYaxis()->SetLabelFont(42);
   Graph_Graph1187->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1187->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1187->GetYaxis()->SetTitleFont(42);
   Graph_Graph1187->GetZaxis()->SetLabelFont(42);
   Graph_Graph1187->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1187->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1187);
   
   
   TF1 *pol01188 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01188->SetFillColor(19);
   pol01188->SetFillStyle(0);
   pol01188->SetLineColor(2);
   pol01188->SetLineWidth(2);
   pol01188->SetChisquare(7.310899);
   pol01188->SetNDF(11);
   pol01188->GetXaxis()->SetLabelFont(42);
   pol01188->GetXaxis()->SetTitleOffset(1);
   pol01188->GetXaxis()->SetTitleFont(42);
   pol01188->GetYaxis()->SetLabelFont(42);
   pol01188->GetYaxis()->SetTitleFont(42);
   pol01188->SetParameter(0,0.0008512524);
   pol01188->SetParError(0,0.00585496);
   pol01188->SetParLimits(0,0,0);
   pol01188->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01188);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.00085
#pm0.006
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
