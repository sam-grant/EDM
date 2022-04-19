void S12_EDM_delta_prime_vs_p_750-2750MeV_Run-1d_250MeV_BQ_noVertCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 20 00:13:30 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(453.1429,-0.9374973,3039.225,2.567403);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1037[8] = {
   884.1567,
   1127.482,
   1373.619,
   1620.287,
   1866.945,
   2116.357,
   2359.644,
   2608.212};
   Double_t _fy1037[8] = {
   0.3344195,
   0.5072361,
   0.4814481,
   0.5046092,
   0.4902571,
   0.6127097,
   0.7034993,
   1.115981};
   Double_t _fex1037[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1037[8] = {
   0.1714268,
   0.1539769,
   0.1118168,
   0.1038606,
   0.1303271,
   0.1723054,
   0.2452136,
   0.3509321};
   TGraphErrors *gre = new TGraphErrors(8,_fx1037,_fy1037,_fex1037,_fey1037);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1037 = new TH1F("Graph_Graph1037","S12",100,711.7512,2780.617);
   Graph_Graph1037->SetMinimum(-0.5870073);
   Graph_Graph1037->SetMaximum(2.216913);
   Graph_Graph1037->SetDirectory(0);
   Graph_Graph1037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1037->SetLineColor(ci);
   Graph_Graph1037->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1037->GetXaxis()->CenterTitle(true);
   Graph_Graph1037->GetXaxis()->SetLabelFont(42);
   Graph_Graph1037->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1037->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1037->GetXaxis()->SetTitleFont(42);
   Graph_Graph1037->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1037->GetYaxis()->CenterTitle(true);
   Graph_Graph1037->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1037->GetYaxis()->SetLabelFont(42);
   Graph_Graph1037->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1037->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1037->GetYaxis()->SetTitleFont(42);
   Graph_Graph1037->GetZaxis()->SetLabelFont(42);
   Graph_Graph1037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1037);
   
   
   TF1 *pol01038 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01038->SetFillColor(19);
   pol01038->SetFillStyle(0);
   pol01038->SetLineColor(2);
   pol01038->SetLineWidth(2);
   pol01038->SetChisquare(5.093321);
   pol01038->SetNDF(7);
   pol01038->GetXaxis()->SetLabelFont(42);
   pol01038->GetXaxis()->SetTitleOffset(1);
   pol01038->GetXaxis()->SetTitleFont(42);
   pol01038->GetYaxis()->SetLabelFont(42);
   pol01038->GetYaxis()->SetTitleFont(42);
   pol01038->SetParameter(0,0.5142628);
   pol01038->SetParError(0,0.0522566);
   pol01038->SetParLimits(0,0,0);
   pol01038->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01038);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.514
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
