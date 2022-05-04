void S18_EDM_delta_prime_minus_vs_p_750-2500MeV_Run-1b_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(514.7194,-1.229874,2728.173,2.489498);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1047[7] = {
   883.6284,
   1127.172,
   1372.863,
   1619.552,
   1866.463,
   2116.151,
   2359.264};
   Double_t _fy1047[7] = {
   1.003749,
   0.9064156,
   0.3665078,
   0.2189234,
   0.1252578,
   0.8021216,
   0.7367243};
   Double_t _fex1047[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1047[7] = {
   0.3638122,
   0.3437138,
   0.2255072,
   0.2159143,
   0.2331943,
   0.3533825,
   0.3192395};
   TGraphErrors *gre = new TGraphErrors(7,_fx1047,_fy1047,_fex1047,_fey1047);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1047 = new TH1F("Graph_Graph1047","S18",100,736.0648,2506.828);
   Graph_Graph1047->SetMinimum(-0.8579365);
   Graph_Graph1047->SetMaximum(2.117561);
   Graph_Graph1047->SetDirectory(0);
   Graph_Graph1047->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1047->SetLineColor(ci);
   Graph_Graph1047->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1047->GetXaxis()->CenterTitle(true);
   Graph_Graph1047->GetXaxis()->SetLabelFont(42);
   Graph_Graph1047->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1047->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1047->GetXaxis()->SetTitleFont(42);
   Graph_Graph1047->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1047->GetYaxis()->CenterTitle(true);
   Graph_Graph1047->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1047->GetYaxis()->SetLabelFont(42);
   Graph_Graph1047->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1047->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1047->GetYaxis()->SetTitleFont(42);
   Graph_Graph1047->GetZaxis()->SetLabelFont(42);
   Graph_Graph1047->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1047);
   
   
   TF1 *pol01048 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01048->SetFillColor(19);
   pol01048->SetFillStyle(0);
   pol01048->SetLineColor(2);
   pol01048->SetLineWidth(2);
   pol01048->SetChisquare(9.088106);
   pol01048->SetNDF(6);
   pol01048->GetXaxis()->SetLabelFont(42);
   pol01048->GetXaxis()->SetTitleOffset(1);
   pol01048->GetXaxis()->SetTitleFont(42);
   pol01048->GetYaxis()->SetLabelFont(42);
   pol01048->GetYaxis()->SetTitleFont(42);
   pol01048->SetParameter(0,0.46189);
   pol01048->SetParError(0,0.103504);
   pol01048->SetParLimits(0,0,0);
   pol01048->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01048);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.462
#pm0.1
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
