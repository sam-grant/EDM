void S12S18_EDM_delta_prime_vs_p_1025-2125MeV_Run-1a_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:10:17 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(812,-0.03926328,2312,0.1356747);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1053[9] = {
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062};
   Double_t _fy1053[9] = {
   0.05399142,
   0.02454566,
   0.05449651,
   0.01013245,
   0.03908913,
   0.02855503,
   0.01844788,
   0.001877898,
   0.04938729};
   Double_t _fex1053[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1053[9] = {
   0.02334162,
   0.02103986,
   0.01977623,
   0.01877181,
   0.01873663,
   0.01814319,
   0.01881834,
   0.01891791,
   0.01983274};
   TGraphErrors *gre = new TGraphErrors(9,_fx1053,_fy1053,_fex1053,_fey1053);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1053 = new TH1F("Graph_Graph1053","S12S18_",100,962,2162);
   Graph_Graph1053->SetMinimum(-0.02176948);
   Graph_Graph1053->SetMaximum(0.1181809);
   Graph_Graph1053->SetDirectory(0);
   Graph_Graph1053->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1053->SetLineColor(ci);
   Graph_Graph1053->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1053->GetXaxis()->CenterTitle(true);
   Graph_Graph1053->GetXaxis()->SetLabelFont(42);
   Graph_Graph1053->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1053->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1053->GetXaxis()->SetTitleFont(42);
   Graph_Graph1053->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
   Graph_Graph1053->GetYaxis()->CenterTitle(true);
   Graph_Graph1053->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1053->GetYaxis()->SetLabelFont(42);
   Graph_Graph1053->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1053->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1053->GetYaxis()->SetTitleFont(42);
   Graph_Graph1053->GetZaxis()->SetLabelFont(42);
   Graph_Graph1053->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1053);
   
   
   TF1 *pol01054 = new TF1("pol0","pol0",1025,2125, TF1::EAddToList::kNo);
   pol01054->SetFillColor(19);
   pol01054->SetFillStyle(0);
   pol01054->SetLineColor(2);
   pol01054->SetLineWidth(2);
   pol01054->SetChisquare(7.561767);
   pol01054->SetNDF(8);
   pol01054->GetXaxis()->SetLabelFont(42);
   pol01054->GetXaxis()->SetTitleOffset(1);
   pol01054->GetXaxis()->SetTitleFont(42);
   pol01054->GetYaxis()->SetLabelFont(42);
   pol01054->GetYaxis()->SetTitleFont(42);
   pol01054->SetParameter(0,0.02989625);
   pol01054->SetParError(0,0.006518304);
   pol01054->SetParLimits(0,0,0);
   pol01054->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01054);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.03
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
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
