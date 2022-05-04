void S12_EDM_delta_prime_vs_p_750-2500MeV_Run-1d_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(515.2849,-0.8543634,2728.515,1.894187);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1109[7] = {
   884.1567,
   1127.482,
   1373.619,
   1620.287,
   1866.945,
   2116.357,
   2359.644};
   Double_t _fy1109[7] = {
   0.3498053,
   0.5056312,
   0.4742182,
   0.5058258,
   0.4909625,
   0.6265488,
   0.6446358};
   Double_t _fex1109[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1109[7] = {
   0.1793137,
   0.1534897,
   0.1101377,
   0.104111,
   0.1305146,
   0.1761973,
   0.2246959};
   TGraphErrors *gre = new TGraphErrors(7,_fx1109,_fy1109,_fex1109,_fey1109);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1109 = new TH1F("Graph_Graph1109","S12",100,736.608,2507.192);
   Graph_Graph1109->SetMinimum(-0.5795084);
   Graph_Graph1109->SetMaximum(1.619332);
   Graph_Graph1109->SetDirectory(0);
   Graph_Graph1109->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1109->SetLineColor(ci);
   Graph_Graph1109->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1109->GetXaxis()->CenterTitle(true);
   Graph_Graph1109->GetXaxis()->SetLabelFont(42);
   Graph_Graph1109->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1109->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1109->GetXaxis()->SetTitleFont(42);
   Graph_Graph1109->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1109->GetYaxis()->CenterTitle(true);
   Graph_Graph1109->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1109->GetYaxis()->SetLabelFont(42);
   Graph_Graph1109->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1109->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1109->GetYaxis()->SetTitleFont(42);
   Graph_Graph1109->GetZaxis()->SetLabelFont(42);
   Graph_Graph1109->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1109->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1109);
   
   
   TF1 *pol01110 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01110->SetFillColor(19);
   pol01110->SetFillStyle(0);
   pol01110->SetLineColor(2);
   pol01110->SetLineWidth(2);
   pol01110->SetChisquare(1.69542);
   pol01110->SetNDF(6);
   pol01110->GetXaxis()->SetLabelFont(42);
   pol01110->GetXaxis()->SetTitleOffset(1);
   pol01110->GetXaxis()->SetTitleFont(42);
   pol01110->GetYaxis()->SetLabelFont(42);
   pol01110->GetYaxis()->SetTitleFont(42);
   pol01110->SetParameter(0,0.5010874);
   pol01110->SetParError(0,0.05278038);
   pol01110->SetParLimits(0,0,0);
   pol01110->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01110);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.501
#pm0.05
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
