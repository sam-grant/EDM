void RatioGraph_-35_-25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb 24 13:36:18 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-44.28572,-937.7178,101.4286,4688.562);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1005[18] = {
   -20,
   -14.28571,
   -8.571429,
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
   Double_t _fy1005[18] = {
   1875.422,
   29.66155,
   2.850526,
   1.081241,
   1,
   0.9350399,
   0.9354719,
   0.8943422,
   0.9334262,
   1.007417,
   1.066633,
   1.41538,
   1.732671,
   2.704008,
   4.425789,
   7.161744,
   11.2294,
   32.21942};
   Double_t _fex1005[18] = {
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
   0,
   0,
   0,
   0};
   Double_t _fey1005[18] = {
   1875.427,
   3.380759,
   0.09361966,
   0.02102367,
   0.01870122,
   0.01766095,
   0.01896674,
   0.01963267,
   0.02349181,
   0.02977465,
   0.03680402,
   0.06381824,
   0.09695872,
   0.2127997,
   0.4953205,
   1.133081,
   2.451437,
   13.15536};
   TGraphErrors *gre = new TGraphErrors(18,_fx1005,_fy1005,_fex1005,_fey1005);
   gre->SetName("");
   gre->SetTitle(";#theta_{y} [mrad];Acceptance weighting");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","",100,-29.71429,86.85714);
   Graph_Graph1005->SetMinimum(-375.0898);
   Graph_Graph1005->SetMaximum(4125.934);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   Graph_Graph1005->GetXaxis()->CenterTitle(true);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetTitle("Acceptance weighting");
   Graph_Graph1005->GetYaxis()->CenterTitle(true);
   Graph_Graph1005->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1005->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   
   TF1 *AcceptanceFunc1006 = new TF1("AcceptanceFunc","1/([0]*exp(-0.5*((x-[1])/[2])**2))",-29.71429,86.85714, TF1::EAddToList::kNo);
   AcceptanceFunc1006->SetFillColor(19);
   AcceptanceFunc1006->SetFillStyle(0);
   AcceptanceFunc1006->SetLineColor(2);
   AcceptanceFunc1006->SetLineWidth(2);
   AcceptanceFunc1006->SetChisquare(349.1407);
   AcceptanceFunc1006->SetNDF(15);
   AcceptanceFunc1006->GetXaxis()->SetLabelFont(42);
   AcceptanceFunc1006->GetXaxis()->SetTitleOffset(1);
   AcceptanceFunc1006->GetXaxis()->SetTitleFont(42);
   AcceptanceFunc1006->GetYaxis()->SetLabelFont(42);
   AcceptanceFunc1006->GetYaxis()->SetTitleFont(42);
   AcceptanceFunc1006->SetParameter(0,1.158387);
   AcceptanceFunc1006->SetParError(0,0.01240782);
   AcceptanceFunc1006->SetParLimits(0,0,0);
   AcceptanceFunc1006->SetParameter(1,17.55963);
   AcceptanceFunc1006->SetParError(1,0.3196837);
   AcceptanceFunc1006->SetParLimits(1,0,0);
   AcceptanceFunc1006->SetParameter(2,24.90743);
   AcceptanceFunc1006->SetParError(2,0.4665238);
   AcceptanceFunc1006->SetParLimits(2,0,0);
   AcceptanceFunc1006->SetParent(gre);
   gre->GetListOfFunctions()->Add(AcceptanceFunc1006);
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
   pt_LaTex = pt->AddText("23.3
");
   pt_LaTex = pt->AddText("1.004#pm0.002");
   pt_LaTex = pt->AddText("0.91#pm0.07");
   pt_LaTex = pt->AddText("27.09#pm0.09");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
