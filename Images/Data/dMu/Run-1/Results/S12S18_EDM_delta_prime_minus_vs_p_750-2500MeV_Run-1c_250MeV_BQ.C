void S12S18_EDM_delta_prime_minus_vs_p_750-2500MeV_Run-1c_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May  3 11:57:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(515.085,-0.7663143,2728.5,2.026758);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1089[7] = {
   883.9874,
   1127.416,
   1373.27,
   1619.964,
   1866.887,
   2116.045,
   2359.597};
   Double_t _fy1089[7] = {
   0.484472,
   0.8320533,
   0.554532,
   0.5735702,
   0.6834777,
   0.5930877,
   0.7181761};
   Double_t _fex1089[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1089[7] = {
   0.2214791,
   0.1653971,
   0.1322924,
   0.1152073,
   0.1218562,
   0.1516255,
   0.2081746};
   TGraphErrors *gre = new TGraphErrors(7,_fx1089,_fy1089,_fex1089,_fey1089);
   gre->SetName("");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1089 = new TH1F("Graph_Graph1089","S12S18",100,736.4265,2507.158);
   Graph_Graph1089->SetMinimum(-0.4870071);
   Graph_Graph1089->SetMaximum(1.74745);
   Graph_Graph1089->SetDirectory(0);
   Graph_Graph1089->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1089->SetLineColor(ci);
   Graph_Graph1089->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1089->GetXaxis()->CenterTitle(true);
   Graph_Graph1089->GetXaxis()->SetLabelFont(42);
   Graph_Graph1089->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1089->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1089->GetXaxis()->SetTitleFont(42);
   Graph_Graph1089->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 250 MeV");
   Graph_Graph1089->GetYaxis()->CenterTitle(true);
   Graph_Graph1089->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1089->GetYaxis()->SetLabelFont(42);
   Graph_Graph1089->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1089->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1089->GetYaxis()->SetTitleFont(42);
   Graph_Graph1089->GetZaxis()->SetLabelFont(42);
   Graph_Graph1089->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1089->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1089);
   
   
   TF1 *pol01090 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01090->SetFillColor(19);
   pol01090->SetFillStyle(0);
   pol01090->SetLineColor(2);
   pol01090->SetLineWidth(2);
   pol01090->SetChisquare(2.920689);
   pol01090->SetNDF(6);
   pol01090->GetXaxis()->SetLabelFont(42);
   pol01090->GetXaxis()->SetTitleOffset(1);
   pol01090->GetXaxis()->SetTitleFont(42);
   pol01090->GetYaxis()->SetLabelFont(42);
   pol01090->GetYaxis()->SetTitleFont(42);
   pol01090->SetParameter(0,0.6296478);
   pol01090->SetParError(0,0.05561234);
   pol01090->SetParLimits(0,0,0);
   pol01090->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01090);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.63
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
