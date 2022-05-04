void S18_EDM_delta_prime_minus_vs_p_750-2500MeV_Run-1d_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(514.7396,-0.941099,2728.088,2.381984);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1119[7] = {
   883.631,
   1127.239,
   1372.894,
   1619.454,
   1866.549,
   2115.743,
   2359.196};
   Double_t _fy1119[7] = {
   0.3614134,
   0.4321898,
   0.6647758,
   0.3187639,
   0.6775987,
   1.083455,
   0.7560193};
   Double_t _fex1119[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1119[7] = {
   0.2202041,
   0.2080318,
   0.1368985,
   0.1317696,
   0.1428291,
   0.2162214,
   0.1969076};
   TGraphErrors *gre = new TGraphErrors(7,_fx1119,_fy1119,_fex1119,_fey1119);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1119 = new TH1F("Graph_Graph1119","S18",100,736.0744,2506.753);
   Graph_Graph1119->SetMinimum(-0.6087907);
   Graph_Graph1119->SetMaximum(2.049676);
   Graph_Graph1119->SetDirectory(0);
   Graph_Graph1119->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1119->SetLineColor(ci);
   Graph_Graph1119->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1119->GetXaxis()->CenterTitle(true);
   Graph_Graph1119->GetXaxis()->SetLabelFont(42);
   Graph_Graph1119->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1119->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1119->GetXaxis()->SetTitleFont(42);
   Graph_Graph1119->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1119->GetYaxis()->CenterTitle(true);
   Graph_Graph1119->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1119->GetYaxis()->SetLabelFont(42);
   Graph_Graph1119->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1119->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1119->GetYaxis()->SetTitleFont(42);
   Graph_Graph1119->GetZaxis()->SetLabelFont(42);
   Graph_Graph1119->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1119->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1119);
   
   
   TF1 *pol01120 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01120->SetFillColor(19);
   pol01120->SetFillStyle(0);
   pol01120->SetLineColor(2);
   pol01120->SetLineWidth(2);
   pol01120->SetChisquare(12.48083);
   pol01120->SetNDF(6);
   pol01120->GetXaxis()->SetLabelFont(42);
   pol01120->GetXaxis()->SetTitleOffset(1);
   pol01120->GetXaxis()->SetTitleFont(42);
   pol01120->GetYaxis()->SetLabelFont(42);
   pol01120->GetYaxis()->SetTitleFont(42);
   pol01120->SetParameter(0,0.5865669);
   pol01120->SetParError(0,0.06313436);
   pol01120->SetParLimits(0,0,0);
   pol01120->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01120);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.587
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
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
