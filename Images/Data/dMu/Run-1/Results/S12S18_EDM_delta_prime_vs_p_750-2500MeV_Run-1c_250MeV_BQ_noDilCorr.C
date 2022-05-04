void S12S18_EDM_delta_prime_vs_p_750-2500MeV_Run-1c_250MeV_BQ_noDilCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:07 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(515.085,-0.9072861,2728.5,1.11884);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1029[7] = {
   883.9874,
   1127.416,
   1373.27,
   1619.964,
   1866.887,
   2116.045,
   2359.597};
   Double_t _fy1029[7] = {
   0.08443949,
   0.1386634,
   0.0866488,
   0.08227446,
   0.08768335,
   0.0645351,
   0.06382809};
   Double_t _fex1029[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1029[7] = {
   0.03860199,
   0.02756377,
   0.02067145,
   0.01652564,
   0.01563293,
   0.01649869,
   0.01850157};
   TGraphErrors *gre = new TGraphErrors(7,_fx1029,_fy1029,_fex1029,_fey1029);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1029 = new TH1F("Graph_Graph1029","S12S18",100,736.4265,2507.158);
   Graph_Graph1029->SetMinimum(-0.7046735);
   Graph_Graph1029->SetMaximum(0.9162272);
   Graph_Graph1029->SetDirectory(0);
   Graph_Graph1029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1029->SetLineColor(ci);
   Graph_Graph1029->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1029->GetXaxis()->CenterTitle(true);
   Graph_Graph1029->GetXaxis()->SetLabelFont(42);
   Graph_Graph1029->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1029->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1029->GetXaxis()->SetTitleFont(42);
   Graph_Graph1029->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1029->GetYaxis()->CenterTitle(true);
   Graph_Graph1029->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1029->GetYaxis()->SetLabelFont(42);
   Graph_Graph1029->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1029->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1029->GetYaxis()->SetTitleFont(42);
   Graph_Graph1029->GetZaxis()->SetLabelFont(42);
   Graph_Graph1029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1029);
   
   
   TF1 *pol01030 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01030->SetFillColor(19);
   pol01030->SetFillStyle(0);
   pol01030->SetLineColor(2);
   pol01030->SetLineWidth(2);
   pol01030->SetChisquare(6.496378);
   pol01030->SetNDF(6);
   pol01030->GetXaxis()->SetLabelFont(42);
   pol01030->GetXaxis()->SetTitleOffset(1);
   pol01030->GetXaxis()->SetTitleFont(42);
   pol01030->GetYaxis()->SetLabelFont(42);
   pol01030->GetYaxis()->SetTitleFont(42);
   pol01030->SetParameter(0,0.08168464);
   pol01030->SetParError(0,0.007317403);
   pol01030->SetParLimits(0,0,0);
   pol01030->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01030);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.0817
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
