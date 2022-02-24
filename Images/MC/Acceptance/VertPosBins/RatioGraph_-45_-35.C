void RatioGraph_-45_-35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb 24 13:36:18 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-22.85714,-7.215501,97.14286,72.4574);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1003[15] = {
   -2.857143,
   2.857143,
   8.571429,
   14.28571,
   20,
   25.71429,
   31.42857,
   37.14286,
   42.85714,
   48.57143,
   54.28571,
   60,
   65.71429,
   71.42857,
   77.14286};
   Double_t _fy1003[15] = {
   3.747748,
   0.9952337,
   0.9634704,
   0.9752126,
   0.8939264,
   0.8750657,
   0.9469336,
   1.199047,
   1.373392,
   1.668926,
   2.08571,
   3.938049,
   11.63031,
   34.38565,
   27.97573};
   Double_t _fex1003[15] = {
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
   0,
   0};
   Double_t _fey1003[15] = {
   0.2518483,
   0.03466642,
   0.03425135,
   0.03777279,
   0.03656448,
   0.03974363,
   0.05065024,
   0.08171567,
   0.1132786,
   0.1717107,
   0.2676502,
   0.7732381,
   4.397625,
   24.31766,
   19.78516};
   TGraphErrors *gre = new TGraphErrors(15,_fx1003,_fy1003,_fex1003,_fey1003);
   gre->SetName("");
   gre->SetTitle(";#theta_{y} [mrad];Acceptance weighting");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,-10.85714,85.14286);
   Graph_Graph1003->SetMinimum(0.7517898);
   Graph_Graph1003->SetMaximum(64.49011);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   Graph_Graph1003->GetXaxis()->CenterTitle(true);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetTitle("Acceptance weighting");
   Graph_Graph1003->GetYaxis()->CenterTitle(true);
   Graph_Graph1003->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1003->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   
   TF1 *AcceptanceFunc1004 = new TF1("AcceptanceFunc","1/([0]*exp(-0.5*((x-[1])/[2])**2))",-10.85714,85.14286, TF1::EAddToList::kNo);
   AcceptanceFunc1004->SetFillColor(19);
   AcceptanceFunc1004->SetFillStyle(0);
   AcceptanceFunc1004->SetLineColor(2);
   AcceptanceFunc1004->SetLineWidth(2);
   AcceptanceFunc1004->SetChisquare(114.1954);
   AcceptanceFunc1004->SetNDF(12);
   AcceptanceFunc1004->GetXaxis()->SetLabelFont(42);
   AcceptanceFunc1004->GetXaxis()->SetTitleOffset(1);
   AcceptanceFunc1004->GetXaxis()->SetTitleFont(42);
   AcceptanceFunc1004->GetYaxis()->SetLabelFont(42);
   AcceptanceFunc1004->GetYaxis()->SetTitleFont(42);
   AcceptanceFunc1004->SetParameter(0,1.145472);
   AcceptanceFunc1004->SetParError(0,0.02421335);
   AcceptanceFunc1004->SetParLimits(0,0,0);
   AcceptanceFunc1004->SetParameter(1,19.55539);
   AcceptanceFunc1004->SetParError(1,0.7526042);
   AcceptanceFunc1004->SetParLimits(1,0,0);
   AcceptanceFunc1004->SetParameter(2,24.66544);
   AcceptanceFunc1004->SetParError(2,1.080282);
   AcceptanceFunc1004->SetParLimits(2,0,0);
   AcceptanceFunc1004->SetParent(gre);
   gre->GetListOfFunctions()->Add(AcceptanceFunc1004);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.325,0.75,0.8,0.85,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(26);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Sim","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("AcceptanceFunc","(ke^{#minus0.5#upoint(#frac{x-#mu}{#sigma})^{2}})^{-1}","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.35,0.5,0.5,0.7,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("k");
   pt_LaTex = pt->AddText("#mu");
   pt_LaTex = pt->AddText("#sigma");
   pt->Draw();
   
   pt = new TPaveText(0.5,0.5,0.65,0.7,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("9.52
");
   pt_LaTex = pt->AddText("1.004#pm0.002");
   pt_LaTex = pt->AddText("0.91#pm0.07");
   pt_LaTex = pt->AddText("27.09#pm0.09");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
