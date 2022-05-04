void S12S18_EDM_delta_prime_vs_p_750-2500MeV_Run-1b_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(515.0943,-1.002565,2728.411,2.140435);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1049[7] = {
   883.9805,
   1127.404,
   1373.257,
   1619.935,
   1866.796,
   2116.303,
   2359.525};
   Double_t _fy1049[7] = {
   0.8209758,
   0.4914667,
   0.3488078,
   0.1991355,
   0.2023571,
   0.4711393,
   0.8322349};
   Double_t _fex1049[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1049[7] = {
   0.2551596,
   0.1919622,
   0.1533971,
   0.1330426,
   0.1406216,
   0.1720758,
   0.235553};
   TGraphErrors *gre = new TGraphErrors(7,_fx1049,_fy1049,_fex1049,_fey1049);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1049 = new TH1F("Graph_Graph1049","S12S18",100,736.426,2507.08);
   Graph_Graph1049->SetMinimum(-0.6882645);
   Graph_Graph1049->SetMaximum(1.826135);
   Graph_Graph1049->SetDirectory(0);
   Graph_Graph1049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1049->SetLineColor(ci);
   Graph_Graph1049->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1049->GetXaxis()->CenterTitle(true);
   Graph_Graph1049->GetXaxis()->SetLabelFont(42);
   Graph_Graph1049->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1049->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1049->GetXaxis()->SetTitleFont(42);
   Graph_Graph1049->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1049->GetYaxis()->CenterTitle(true);
   Graph_Graph1049->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1049->GetYaxis()->SetLabelFont(42);
   Graph_Graph1049->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1049->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1049->GetYaxis()->SetTitleFont(42);
   Graph_Graph1049->GetZaxis()->SetLabelFont(42);
   Graph_Graph1049->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1049);
   
   
   TF1 *pol01050 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01050->SetFillColor(19);
   pol01050->SetFillStyle(0);
   pol01050->SetLineColor(2);
   pol01050->SetLineWidth(2);
   pol01050->SetChisquare(10.77473);
   pol01050->SetNDF(6);
   pol01050->GetXaxis()->SetLabelFont(42);
   pol01050->GetXaxis()->SetTitleOffset(1);
   pol01050->GetXaxis()->SetTitleFont(42);
   pol01050->GetYaxis()->SetLabelFont(42);
   pol01050->GetYaxis()->SetTitleFont(42);
   pol01050->SetParameter(0,0.3820479);
   pol01050->SetParError(0,0.06403732);
   pol01050->SetParLimits(0,0,0);
   pol01050->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01050);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.382
#pm0.06
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
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
