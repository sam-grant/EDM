void S12S18_EDM_delta_prime_vs_p_Run-1d_125MeV_BQ_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 17:46:59 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(405.75,-0.1464037,2843.25,0.05610853);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1089[14] = {
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437};
   Double_t _fy1089[14] = {
   -0.05369949,
   -0.03403397,
   -0.02789049,
   -0.004676508,
   -0.01463239,
   -0.001485307,
   2.085325e-05,
   -0.01192295,
   -0.03276218,
   -0.02166788,
   -0.01836617,
   0.01489736,
   -0.03210476,
   -0.02232613};
   Double_t _fex1089[14] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1089[14] = {
   0.02634653,
   0.02169375,
   0.01911169,
   0.01728887,
   0.01629454,
   0.01543599,
   0.01548739,
   0.01501215,
   0.01563732,
   0.01575548,
   0.01652578,
   0.01676796,
   0.01760814,
   0.01897235};
   TGraphErrors *gre = new TGraphErrors(14,_fx1089,_fy1089,_fex1089,_fey1089);
   gre->SetName("");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1089 = new TH1F("Graph_Graph1089","S12S18_",100,649.5,2599.5);
   Graph_Graph1089->SetMinimum(-0.1261525);
   Graph_Graph1089->SetMaximum(0.03585731);
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
   Graph_Graph1089->GetYaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad] / 125 MeV");
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
   pol01090->SetChisquare(11.23135);
   pol01090->SetNDF(13);
   pol01090->GetXaxis()->SetLabelFont(42);
   pol01090->GetXaxis()->SetTitleOffset(1);
   pol01090->GetXaxis()->SetTitleFont(42);
   pol01090->GetYaxis()->SetLabelFont(42);
   pol01090->GetYaxis()->SetTitleFont(42);
   pol01090->SetParameter(0,-0.01591639);
   pol01090->SetParError(0,0.004585507);
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
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1d","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.016
#pm0.005
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
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
