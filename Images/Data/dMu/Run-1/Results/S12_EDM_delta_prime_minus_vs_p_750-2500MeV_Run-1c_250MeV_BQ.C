void S12_EDM_delta_prime_minus_vs_p_750-2500MeV_Run-1c_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:53 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(515.5161,-1.210721,2728.522,2.274561);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1077[7] = {
   884.3505,
   1127.522,
   1373.594,
   1620.299,
   1867.139,
   2116.241,
   2359.688};
   Double_t _fy1077[7] = {
   0.1494838,
   0.5413103,
   0.6774021,
   0.589462,
   0.8058715,
   0.6077519,
   0.8478889};
   Double_t _fex1077[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1077[7] = {
   0.261677,
   0.2212417,
   0.1586556,
   0.1498965,
   0.1876007,
   0.2571427,
   0.3281438};
   TGraphErrors *gre = new TGraphErrors(7,_fx1077,_fy1077,_fex1077,_fey1077);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1077 = new TH1F("Graph_Graph1077","S12",100,736.8167,2507.221);
   Graph_Graph1077->SetMinimum(-0.8621932);
   Graph_Graph1077->SetMaximum(1.926033);
   Graph_Graph1077->SetDirectory(0);
   Graph_Graph1077->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1077->SetLineColor(ci);
   Graph_Graph1077->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1077->GetXaxis()->CenterTitle(true);
   Graph_Graph1077->GetXaxis()->SetLabelFont(42);
   Graph_Graph1077->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1077->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1077->GetXaxis()->SetTitleFont(42);
   Graph_Graph1077->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1077->GetYaxis()->CenterTitle(true);
   Graph_Graph1077->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1077->GetYaxis()->SetLabelFont(42);
   Graph_Graph1077->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1077->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1077->GetYaxis()->SetTitleFont(42);
   Graph_Graph1077->GetZaxis()->SetLabelFont(42);
   Graph_Graph1077->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1077);
   
   
   TF1 *pol01078 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01078->SetFillColor(19);
   pol01078->SetFillStyle(0);
   pol01078->SetLineColor(2);
   pol01078->SetLineWidth(2);
   pol01078->SetChisquare(4.997528);
   pol01078->SetNDF(6);
   pol01078->GetXaxis()->SetLabelFont(42);
   pol01078->GetXaxis()->SetTitleOffset(1);
   pol01078->GetXaxis()->SetTitleFont(42);
   pol01078->GetYaxis()->SetLabelFont(42);
   pol01078->GetYaxis()->SetTitleFont(42);
   pol01078->SetParameter(0,0.6179941);
   pol01078->SetParError(0,0.07622907);
   pol01078->SetParLimits(0,0,0);
   pol01078->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01078);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1c","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.618
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
