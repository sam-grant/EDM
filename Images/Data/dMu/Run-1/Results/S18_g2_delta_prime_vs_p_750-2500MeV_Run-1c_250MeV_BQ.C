void S18_g2_delta_prime_vs_p_750-2500MeV_Run-1c_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(514.6398,-1.693104,2728.454,2.062961);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1097[7] = {
   883.6089,
   1127.304,
   1372.916,
   1619.588,
   1866.593,
   2115.809,
   2359.485};
   Double_t _fy1097[7] = {
   0.6543147,
   -0.03453076,
   -0.1815633,
   0.05532128,
   0.1229385,
   -0.2897171,
   -0.2955157};
   Double_t _fex1097[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1097[7] = {
   0.2830402,
   0.2681339,
   0.1765548,
   0.1699937,
   0.1846267,
   0.2777803,
   0.2580068};
   TGraphErrors *gre = new TGraphErrors(7,_fx1097,_fy1097,_fex1097,_fey1097);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1097 = new TH1F("Graph_Graph1097","S18",100,736.0212,2507.073);
   Graph_Graph1097->SetMinimum(-1.317497);
   Graph_Graph1097->SetMaximum(1.687355);
   Graph_Graph1097->SetDirectory(0);
   Graph_Graph1097->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1097->SetLineColor(ci);
   Graph_Graph1097->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1097->GetXaxis()->CenterTitle(true);
   Graph_Graph1097->GetXaxis()->SetLabelFont(42);
   Graph_Graph1097->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1097->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1097->GetXaxis()->SetTitleFont(42);
   Graph_Graph1097->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
   Graph_Graph1097->GetYaxis()->CenterTitle(true);
   Graph_Graph1097->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1097->GetYaxis()->SetLabelFont(42);
   Graph_Graph1097->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1097->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1097->GetYaxis()->SetTitleFont(42);
   Graph_Graph1097->GetZaxis()->SetLabelFont(42);
   Graph_Graph1097->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1097);
   
   
   TF1 *pol01098 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01098->SetFillColor(19);
   pol01098->SetFillStyle(0);
   pol01098->SetLineColor(2);
   pol01098->SetLineWidth(2);
   pol01098->SetChisquare(9.362872);
   pol01098->SetNDF(6);
   pol01098->GetXaxis()->SetLabelFont(42);
   pol01098->GetXaxis()->SetTitleOffset(1);
   pol01098->GetXaxis()->SetTitleFont(42);
   pol01098->GetYaxis()->SetLabelFont(42);
   pol01098->GetYaxis()->SetTitleFont(42);
   pol01098->SetParameter(0,-0.00538865);
   pol01098->SetParError(0,0.08154223);
   pol01098->SetParLimits(0,0,0);
   pol01098->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01098);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.00539
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
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
