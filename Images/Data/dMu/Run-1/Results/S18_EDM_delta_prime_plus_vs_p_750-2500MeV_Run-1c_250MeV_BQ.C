void S18_EDM_delta_prime_plus_vs_p_750-2500MeV_Run-1c_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:53 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(514.6398,-1.00569,2728.454,2.571101);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1081[7] = {
   883.6089,
   1127.304,
   1372.916,
   1619.588,
   1866.593,
   2115.809,
   2359.485};
   Double_t _fy1081[7] = {
   0.6851117,
   1.206722,
   0.2711393,
   0.5020357,
   0.6373991,
   0.8317654,
   0.5334057};
   Double_t _fex1081[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1081[7] = {
   0.268878,
   0.2566992,
   0.1691505,
   0.1628822,
   0.1758403,
   0.258343,
   0.2343815};
   TGraphErrors *gre = new TGraphErrors(7,_fx1081,_fy1081,_fex1081,_fey1081);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1081 = new TH1F("Graph_Graph1081","S18",100,736.0212,2507.073);
   Graph_Graph1081->SetMinimum(-0.6480112);
   Graph_Graph1081->SetMaximum(2.213421);
   Graph_Graph1081->SetDirectory(0);
   Graph_Graph1081->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1081->SetLineColor(ci);
   Graph_Graph1081->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1081->GetXaxis()->CenterTitle(true);
   Graph_Graph1081->GetXaxis()->SetLabelFont(42);
   Graph_Graph1081->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1081->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1081->GetXaxis()->SetTitleFont(42);
   Graph_Graph1081->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1081->GetYaxis()->CenterTitle(true);
   Graph_Graph1081->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1081->GetYaxis()->SetLabelFont(42);
   Graph_Graph1081->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1081->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1081->GetYaxis()->SetTitleFont(42);
   Graph_Graph1081->GetZaxis()->SetLabelFont(42);
   Graph_Graph1081->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1081->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1081);
   
   
   TF1 *pol01082 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01082->SetFillColor(19);
   pol01082->SetFillStyle(0);
   pol01082->SetLineColor(2);
   pol01082->SetLineWidth(2);
   pol01082->SetChisquare(10.74838);
   pol01082->SetNDF(6);
   pol01082->GetXaxis()->SetLabelFont(42);
   pol01082->GetXaxis()->SetTitleOffset(1);
   pol01082->GetXaxis()->SetTitleFont(42);
   pol01082->GetYaxis()->SetLabelFont(42);
   pol01082->GetYaxis()->SetTitleFont(42);
   pol01082->SetParameter(0,0.5920344);
   pol01082->SetParError(0,0.07734084);
   pol01082->SetParLimits(0,0,0);
   pol01082->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01082);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.592
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
