void S12S18_EDM_delta_prime_plus_vs_p_750-2500MeV_Run-1d_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(515.0162,-0.7820701,2728.333,1.774266);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1123[7] = {
   883.9024,
   1127.365,
   1373.276,
   1619.898,
   1866.765,
   2116.081,
   2359.447};
   Double_t _fy1123[7] = {
   0.3685535,
   0.4189224,
   0.5702695,
   0.3994299,
   0.4850237,
   0.5887031,
   0.6336168};
   Double_t _fex1123[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1123[7] = {
   0.1449899,
   0.109862,
   0.08816926,
   0.07672363,
   0.08120295,
   0.09811499,
   0.1350158};
   TGraphErrors *gre = new TGraphErrors(7,_fx1123,_fy1123,_fex1123,_fey1123);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1123 = new TH1F("Graph_Graph1123","S12S18",100,736.348,2507.002);
   Graph_Graph1123->SetMinimum(-0.5264364);
   Graph_Graph1123->SetMaximum(1.518633);
   Graph_Graph1123->SetDirectory(0);
   Graph_Graph1123->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1123->SetLineColor(ci);
   Graph_Graph1123->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1123->GetXaxis()->CenterTitle(true);
   Graph_Graph1123->GetXaxis()->SetLabelFont(42);
   Graph_Graph1123->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1123->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1123->GetXaxis()->SetTitleFont(42);
   Graph_Graph1123->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1123->GetYaxis()->CenterTitle(true);
   Graph_Graph1123->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1123->GetYaxis()->SetLabelFont(42);
   Graph_Graph1123->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1123->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1123->GetYaxis()->SetTitleFont(42);
   Graph_Graph1123->GetZaxis()->SetLabelFont(42);
   Graph_Graph1123->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1123);
   
   
   TF1 *pol01124 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01124->SetFillColor(19);
   pol01124->SetFillStyle(0);
   pol01124->SetLineColor(2);
   pol01124->SetLineWidth(2);
   pol01124->SetChisquare(5.4892);
   pol01124->SetNDF(6);
   pol01124->GetXaxis()->SetLabelFont(42);
   pol01124->GetXaxis()->SetTitleOffset(1);
   pol01124->GetXaxis()->SetTitleFont(42);
   pol01124->GetYaxis()->SetLabelFont(42);
   pol01124->GetYaxis()->SetTitleFont(42);
   pol01124->SetParameter(0,0.4908798);
   pol01124->SetParError(0,0.0367774);
   pol01124->SetParLimits(0,0,0);
   pol01124->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01124);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.491
#pm0.04
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
