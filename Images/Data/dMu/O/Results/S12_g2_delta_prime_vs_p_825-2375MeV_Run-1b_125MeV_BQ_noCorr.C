void S12_g2_delta_prime_vs_p_825-2375MeV_Run-1b_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:04:12 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(593.25,-0.1578076,2655.75,0.1517816);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1163[12] = {
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
   Double_t _fy1163[12] = {
   -0.003012975,
   -0.0331527,
   -0.04298674,
   0.03185448,
   0.07009596,
   0.01301545,
   -0.0571535,
   -0.0184359,
   0.01390587,
   0.004101942,
   -0.04602539,
   -0.008507601};
   Double_t _fex1163[12] = {
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
   Double_t _fey1163[12] = {
   0.04503116,
   0.03966082,
   0.03576854,
   0.03349282,
   0.03164732,
   0.03157626,
   0.03040423,
   0.03145167,
   0.03158838,
   0.03293368,
   0.03330977,
   0.03478986};
   TGraphErrors *gre = new TGraphErrors(12,_fx1163,_fy1163,_fex1163,_fey1163);
   gre->SetName("");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1163 = new TH1F("Graph_Graph1163","S12_",100,799.5,2449.5);
   Graph_Graph1163->SetMinimum(-0.1268487);
   Graph_Graph1163->SetMaximum(0.1208227);
   Graph_Graph1163->SetDirectory(0);
   Graph_Graph1163->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1163->SetLineColor(ci);
   Graph_Graph1163->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1163->GetXaxis()->CenterTitle(true);
   Graph_Graph1163->GetXaxis()->SetLabelFont(42);
   Graph_Graph1163->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1163->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1163->GetXaxis()->SetTitleFont(42);
   Graph_Graph1163->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 125 MeV");
   Graph_Graph1163->GetYaxis()->CenterTitle(true);
   Graph_Graph1163->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1163->GetYaxis()->SetLabelFont(42);
   Graph_Graph1163->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1163->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1163->GetYaxis()->SetTitleFont(42);
   Graph_Graph1163->GetZaxis()->SetLabelFont(42);
   Graph_Graph1163->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1163->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1163);
   
   
   TF1 *pol01164 = new TF1("pol0","pol0",825,2375, TF1::EAddToList::kNo);
   pol01164->SetFillColor(19);
   pol01164->SetFillStyle(0);
   pol01164->SetLineColor(2);
   pol01164->SetLineWidth(2);
   pol01164->SetChisquare(13.88623);
   pol01164->SetNDF(11);
   pol01164->GetXaxis()->SetLabelFont(42);
   pol01164->GetXaxis()->SetTitleOffset(1);
   pol01164->GetXaxis()->SetTitleFont(42);
   pol01164->GetYaxis()->SetLabelFont(42);
   pol01164->GetYaxis()->SetTitleFont(42);
   pol01164->SetParameter(0,-0.005307332);
   pol01164->SetParError(0,0.009736923);
   pol01164->SetParLimits(0,0,0);
   pol01164->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01164);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.0053
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
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
