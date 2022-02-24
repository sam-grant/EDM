void RatioGraph()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb 24 15:03:19 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-90,-0.9138966,90,17.18177);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1001[22] = {
   -60,
   -54.28571,
   -48.57143,
   -42.85714,
   -37.14286,
   -31.42857,
   -25.71429,
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
   60};
   Double_t _fy1001[22] = {
   10.38996,
   6.762384,
   5.371169,
   3.536879,
   2.503313,
   1.846329,
   1.477442,
   1.261031,
   1.137271,
   1.044962,
   0.9994127,
   1.005582,
   1.054592,
   1.174616,
   1.333808,
   1.599878,
   2.024488,
   2.608477,
   3.90613,
   5.776615,
   8.083506,
   9.174567};
   Double_t _fex1001[22] = {
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
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1001[22] = {
   3.675236,
   0.550736,
   0.22382,
   0.08332507,
   0.03767154,
   0.01904313,
   0.01127565,
   0.007576176,
   0.005707183,
   0.004645297,
   0.004223962,
   0.00426175,
   0.00471165,
   0.005987499,
   0.008238159,
   0.01270807,
   0.02188381,
   0.04009152,
   0.09664166,
   0.2495026,
   0.7205969,
   3.059914};
   TGraphErrors *gre = new TGraphErrors(22,_fx1001,_fy1001,_fex1001,_fey1001);
   gre->SetName("");
   gre->SetTitle(";#theta_{y} [mrad];Acceptance weighting");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,-72,72);
   Graph_Graph1001->SetMinimum(0.8956699);
   Graph_Graph1001->SetMaximum(15.3722);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   Graph_Graph1001->GetXaxis()->CenterTitle(true);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("Acceptance weighting");
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
   
   
   TF1 *AcceptanceFunc1002 = new TF1("AcceptanceFunc","1/([0]*exp(-0.5*((x-[1])/[2])**2))",-72,72, TF1::EAddToList::kNo);
   AcceptanceFunc1002->SetFillColor(19);
   AcceptanceFunc1002->SetFillStyle(0);
   AcceptanceFunc1002->SetLineColor(2);
   AcceptanceFunc1002->SetLineWidth(2);
   AcceptanceFunc1002->SetChisquare(65.2215);
   AcceptanceFunc1002->SetNDF(19);
   AcceptanceFunc1002->GetXaxis()->SetLabelFont(42);
   AcceptanceFunc1002->GetXaxis()->SetTitleOffset(1);
   AcceptanceFunc1002->GetXaxis()->SetTitleFont(42);
   AcceptanceFunc1002->GetYaxis()->SetLabelFont(42);
   AcceptanceFunc1002->GetYaxis()->SetTitleFont(42);
   AcceptanceFunc1002->SetParameter(0,1.004075);
   AcceptanceFunc1002->SetParError(0,0.001955095);
   AcceptanceFunc1002->SetParLimits(0,0,0);
   AcceptanceFunc1002->SetParameter(1,-0.9014559);
   AcceptanceFunc1002->SetParError(1,0.07107473);
   AcceptanceFunc1002->SetParLimits(1,0,0);
   AcceptanceFunc1002->SetParameter(2,27.09008);
   AcceptanceFunc1002->SetParError(2,0.08815743);
   AcceptanceFunc1002->SetParLimits(2,0,0);
   AcceptanceFunc1002->SetParent(gre);
   gre->GetListOfFunctions()->Add(AcceptanceFunc1002);
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
   pt_LaTex = pt->AddText("3.43
");
   pt_LaTex = pt->AddText("1.004#pm0.002");
   pt_LaTex = pt->AddText("0.91#pm0.07");
   pt_LaTex = pt->AddText("27.09#pm0.09");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
