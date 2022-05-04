void S12_g2_delta_prime_minus_vs_p_750-2500MeV_Run-1b_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:53 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(515.4702,-1.73657,2728.594,1.668739);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1059[7] = {
   884.3242,
   1127.627,
   1373.623,
   1620.283,
   1867.085,
   2116.433,
   2359.74};
   Double_t _fy1059[7] = {
   0.2598052,
   -0.1910497,
   0.08591389,
   0.2151086,
   -0.4171693,
   -0.06153841,
   -0.2229327};
   Double_t _fex1059[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1059[7] = {
   0.3184028,
   0.2700379,
   0.1925983,
   0.1819812,
   0.2288694,
   0.3164707,
   0.4103025};
   TGraphErrors *gre = new TGraphErrors(7,_fx1059,_fy1059,_fex1059,_fey1059);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1059 = new TH1F("Graph_Graph1059","S12",100,736.7826,2507.282);
   Graph_Graph1059->SetMinimum(-1.396039);
   Graph_Graph1059->SetMaximum(1.328208);
   Graph_Graph1059->SetDirectory(0);
   Graph_Graph1059->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1059->SetLineColor(ci);
   Graph_Graph1059->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1059->GetXaxis()->CenterTitle(true);
   Graph_Graph1059->GetXaxis()->SetLabelFont(42);
   Graph_Graph1059->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1059->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1059->GetXaxis()->SetTitleFont(42);
   Graph_Graph1059->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
   Graph_Graph1059->GetYaxis()->CenterTitle(true);
   Graph_Graph1059->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1059->GetYaxis()->SetLabelFont(42);
   Graph_Graph1059->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1059->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1059->GetYaxis()->SetTitleFont(42);
   Graph_Graph1059->GetZaxis()->SetLabelFont(42);
   Graph_Graph1059->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1059);
   
   
   TF1 *pol01060 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01060->SetFillColor(19);
   pol01060->SetFillStyle(0);
   pol01060->SetLineColor(2);
   pol01060->SetLineWidth(2);
   pol01060->SetChisquare(6.406548);
   pol01060->SetNDF(6);
   pol01060->GetXaxis()->SetLabelFont(42);
   pol01060->GetXaxis()->SetTitleOffset(1);
   pol01060->GetXaxis()->SetTitleFont(42);
   pol01060->GetYaxis()->SetLabelFont(42);
   pol01060->GetYaxis()->SetTitleFont(42);
   pol01060->SetParameter(0,-0.009923201);
   pol01060->SetParError(0,0.09294899);
   pol01060->SetParLimits(0,0,0);
   pol01060->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01060);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.00992
#pm0.09
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
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
