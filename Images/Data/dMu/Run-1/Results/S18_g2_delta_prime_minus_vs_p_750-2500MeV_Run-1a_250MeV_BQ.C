void S18_g2_delta_prime_minus_vs_p_750-2500MeV_Run-1a_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  4 12:58:25 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(514.4911,-2.886647,2728.721,2.283568);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1069[7] = {
   883.5294,
   1127.34,
   1373.07,
   1619.549,
   1866.691,
   2115.977,
   2359.683};
   Double_t _fy1069[7] = {
   0.6899318,
   -0.04422439,
   0.1871467,
   -0.1672813,
   0.3878033,
   -0.2027693,
   -0.9420835};
   Double_t _fex1069[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1069[7] = {
   0.326615,
   0.2660948,
   0.2317189,
   0.2378556,
   0.3814438,
   0.2881318,
   0.6775422};
   TGraphErrors *gre = new TGraphErrors(7,_fx1069,_fy1069,_fex1069,_fey1069);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1069 = new TH1F("Graph_Graph1069","S18",100,735.9141,2507.298);
   Graph_Graph1069->SetMinimum(-2.369626);
   Graph_Graph1069->SetMaximum(1.766547);
   Graph_Graph1069->SetDirectory(0);
   Graph_Graph1069->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1069->SetLineColor(ci);
   Graph_Graph1069->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1069->GetXaxis()->CenterTitle(true);
   Graph_Graph1069->GetXaxis()->SetLabelFont(42);
   Graph_Graph1069->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1069->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1069->GetXaxis()->SetTitleFont(42);
   Graph_Graph1069->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
   Graph_Graph1069->GetYaxis()->CenterTitle(true);
   Graph_Graph1069->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1069->GetYaxis()->SetLabelFont(42);
   Graph_Graph1069->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1069->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1069->GetYaxis()->SetTitleFont(42);
   Graph_Graph1069->GetZaxis()->SetLabelFont(42);
   Graph_Graph1069->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1069->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1069);
   
   
   TF1 *pol01070 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01070->SetFillColor(19);
   pol01070->SetFillStyle(0);
   pol01070->SetLineColor(2);
   pol01070->SetLineWidth(2);
   pol01070->SetChisquare(8.843783);
   pol01070->SetNDF(6);
   pol01070->GetXaxis()->SetLabelFont(42);
   pol01070->GetXaxis()->SetTitleOffset(1);
   pol01070->GetXaxis()->SetTitleFont(42);
   pol01070->GetYaxis()->SetLabelFont(42);
   pol01070->GetYaxis()->SetTitleFont(42);
   pol01070->SetParameter(0,0.05615131);
   pol01070->SetParError(0,0.1111843);
   pol01070->SetParLimits(0,0,0);
   pol01070->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01070);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.0562
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
