void SimultaneousFits_vs_DS_blinded_1000_2500MeV_250MeV_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun  8 13:11:24 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0.105,-5.2472e-19,4.695,3.12638e-18);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1001[4] = {
   0.9,
   1.9,
   2.9,
   3.9};
   Double_t _fy1001[4] = {
   1.91533e-18,
   9.57667e-19,
   2.04302e-18,
   1.50034e-18};
   Double_t _fex1001[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1001[4] = {
   3.19222e-19,
   3.19222e-19,
   2.873e-19,
   2.23456e-19};
   TGraphErrors *gre = new TGraphErrors(4,_fx1001,_fy1001,_fex1001,_fey1001);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,0.6,4.2);
   Graph_Graph1001->SetMinimum(-1.5961e-19);
   Graph_Graph1001->SetMaximum(2.76127e-18);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetBinLabel(12,"Run-1a");
   Graph_Graph1001->GetXaxis()->SetBinLabel(39,"Run-1b");
   Graph_Graph1001->GetXaxis()->SetBinLabel(67,"Run-1c");
   Graph_Graph1001->GetXaxis()->SetBinLabel(95,"Run-1d");
   Graph_Graph1001->GetXaxis()->SetRange(0,101);
   Graph_Graph1001->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph1001->GetXaxis()->CenterTitle(true);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.055);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1001->GetXaxis()->SetTickLength(0);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("d_{#mu} (BLIND) [e#upointcm]");
   Graph_Graph1001->GetYaxis()->CenterTitle(true);
   Graph_Graph1001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("ap");
   
   TF1 *fit1 = new TF1("fit","pol0",0,5, TF1::EAddToList::kDefault);
   fit1->SetFillColor(19);
   fit1->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   fit1->SetLineColor(ci);
   fit1->SetLineWidth(1);
   fit1->GetXaxis()->SetLabelFont(42);
   fit1->GetXaxis()->SetTitleOffset(1);
   fit1->GetXaxis()->SetTitleFont(42);
   fit1->GetYaxis()->SetLabelFont(42);
   fit1->GetYaxis()->SetTitleFont(42);
   fit1->SetParameter(0,1.503039e-18);
   fit1->SetParError(0,1.054804e-19);
   fit1->SetParLimits(0,0,0);
   fit1->Draw("same");
   
   TF1 *minusSigma2 = new TF1("minusSigma","pol0",0,5, TF1::EAddToList::kDefault);
   minusSigma2->SetFillColor(19);
   minusSigma2->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   minusSigma2->SetLineColor(ci);
   minusSigma2->SetLineWidth(2);
   minusSigma2->SetLineStyle(2);
   minusSigma2->GetXaxis()->SetLabelFont(42);
   minusSigma2->GetXaxis()->SetTitleOffset(1);
   minusSigma2->GetXaxis()->SetTitleFont(42);
   minusSigma2->GetYaxis()->SetLabelFont(42);
   minusSigma2->GetYaxis()->SetTitleFont(42);
   minusSigma2->SetParameter(0,1.397558e-18);
   minusSigma2->SetParError(0,0);
   minusSigma2->SetParLimits(0,0,0);
   minusSigma2->Draw("same");
   
   TF1 *plusSigma3 = new TF1("plusSigma","pol0",0,5, TF1::EAddToList::kDefault);
   plusSigma3->SetFillColor(19);
   plusSigma3->SetFillStyle(0);

   ci = TColor::GetColor("#cccccc");
   plusSigma3->SetLineColor(ci);
   plusSigma3->SetLineWidth(2);
   plusSigma3->SetLineStyle(2);
   plusSigma3->GetXaxis()->SetLabelFont(42);
   plusSigma3->GetXaxis()->SetTitleOffset(1);
   plusSigma3->GetXaxis()->SetTitleFont(42);
   plusSigma3->GetYaxis()->SetLabelFont(42);
   plusSigma3->GetYaxis()->SetTitleFont(42);
   plusSigma3->SetParameter(0,1.608519e-18);
   plusSigma3->SetParError(0,0);
   plusSigma3->SetParLimits(0,0,0);
   plusSigma3->Draw("same");
   
   Double_t _fx1002[4] = {
   0.9,
   1.9,
   2.9,
   3.9};
   Double_t _fy1002[4] = {
   1.91533e-18,
   9.57667e-19,
   2.04302e-18,
   1.50034e-18};
   Double_t _fex1002[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1002[4] = {
   3.19222e-19,
   3.19222e-19,
   2.873e-19,
   2.23456e-19};
   gre = new TGraphErrors(4,_fx1002,_fy1002,_fex1002,_fey1002);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10011002 = new TH1F("Graph_Graph_Graph10011002","",100,0.6,4.2);
   Graph_Graph_Graph10011002->SetMinimum(-1.5961e-19);
   Graph_Graph_Graph10011002->SetMaximum(2.76127e-18);
   Graph_Graph_Graph10011002->SetDirectory(0);
   Graph_Graph_Graph10011002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10011002->SetLineColor(ci);
   Graph_Graph_Graph10011002->GetXaxis()->SetBinLabel(12,"Run-1a");
   Graph_Graph_Graph10011002->GetXaxis()->SetBinLabel(39,"Run-1b");
   Graph_Graph_Graph10011002->GetXaxis()->SetBinLabel(67,"Run-1c");
   Graph_Graph_Graph10011002->GetXaxis()->SetBinLabel(95,"Run-1d");
   Graph_Graph_Graph10011002->GetXaxis()->SetRange(0,101);
   Graph_Graph_Graph10011002->GetXaxis()->SetBit(TAxis::kLabelsHori);
   Graph_Graph_Graph10011002->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10011002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011002->GetXaxis()->SetLabelSize(0.055);
   Graph_Graph_Graph10011002->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10011002->GetXaxis()->SetTickLength(0);
   Graph_Graph_Graph10011002->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10011002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011002->GetYaxis()->SetTitle("d_{#mu} (BLIND) [e#upointcm]");
   Graph_Graph_Graph10011002->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10011002->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10011002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011002->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10011002->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph10011002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10011002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10011002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10011002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10011002);
   
   gre->Draw("p ");
   
   Double_t _fx1003[4] = {
   1,
   2,
   3,
   4};
   Double_t _fy1003[4] = {
   6.38445e-19,
   1.27689e-18,
   1.91533e-18,
   1.30881e-18};
   Double_t _fex1003[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1003[4] = {
   3.19222e-19,
   3.19222e-19,
   3.19222e-19,
   2.55378e-19};
   gre = new TGraphErrors(4,_fx1003,_fy1003,_fex1003,_fey1003);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,0.7,4.3);
   Graph_Graph1003->SetMinimum(1.276901e-19);
   Graph_Graph1003->SetMaximum(2.426085e-18);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   gre->Draw("p ");
   
   Double_t _fx1004[4] = {
   1.1,
   2.1,
   3.1,
   4.1};
   Double_t _fy1004[4] = {
   1.30881e-18,
   1.18112e-18,
   1.94726e-18,
   1.40458e-18};
   Double_t _fex1004[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1004[4] = {
   2.55378e-19,
   2.23456e-19,
   1.91533e-19,
   1.91533e-19};
   gre = new TGraphErrors(4,_fx1004,_fy1004,_fex1004,_fey1004);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","",100,0.8,4.4);
   Graph_Graph1004->SetMinimum(8.395511e-19);
   Graph_Graph1004->SetMaximum(2.256906e-18);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1004->SetLineColor(ci);
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1004);
   
   
   TF1 *pol01005 = new TF1("pol0","pol0",0.8,4.4, TF1::EAddToList::kNo);
   pol01005->SetFillColor(19);
   pol01005->SetFillStyle(0);
   pol01005->SetLineColor(2);
   pol01005->SetLineWidth(0);
   pol01005->SetChisquare(8.297251);
   pol01005->SetNDF(3);
   pol01005->GetXaxis()->SetLabelFont(42);
   pol01005->GetXaxis()->SetTitleOffset(1);
   pol01005->GetXaxis()->SetTitleFont(42);
   pol01005->GetYaxis()->SetLabelFont(42);
   pol01005->GetYaxis()->SetTitleFont(42);
   pol01005->SetParameter(0,1.503039e-18);
   pol01005->SetParError(0,1.054804e-19);
   pol01005->SetParLimits(0,0,0);
   pol01005->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01005);
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.66,0.18,0.85,0.38,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Station 12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","Station 18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","Combined","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.15,0.79,0.4,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("#delta#LTd_{#mu}#GT = 1.05#times10^{#minus19} e#upointcm");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
