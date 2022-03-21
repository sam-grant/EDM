void RatioGraph_-5_5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb 24 13:36:18 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-88.57143,-922.749,82.85714,4613.718);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1011[21] = {
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
   54.28571};
   Double_t _fy1011[21] = {
   1845.485,
   164.206,
   52.50325,
   14.45555,
   5.258786,
   2.300465,
   1.366468,
   1.077373,
   0.981517,
   0.9833454,
   1,
   1.012162,
   0.9665045,
   1.010748,
   1.150457,
   1.515112,
   2.601443,
   5.239352,
   12.64638,
   32.61478,
   120.861};
   Double_t _fex1011[21] = {
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
   Double_t _fey1011[21] = {
   1845.489,
   43.88707,
   7.080128,
   0.905516,
   0.1755365,
   0.04484949,
   0.01819563,
   0.01136355,
   0.008940506,
   0.008323412,
   0.008199587,
   0.008352488,
   0.008116055,
   0.009340998,
   0.01252592,
   0.0212438,
   0.05401902,
   0.1745972,
   0.7416011,
   3.457624,
   27.72842};
   TGraphErrors *gre = new TGraphErrors(21,_fx1011,_fy1011,_fex1011,_fey1011);
   gre->SetName("");
   gre->SetTitle(";#theta_{y} [mrad];Acceptance weighting");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","",100,-71.42857,65.71429);
   Graph_Graph1011->SetMinimum(-369.1022);
   Graph_Graph1011->SetMaximum(4060.072);
   Graph_Graph1011->SetDirectory(0);
   Graph_Graph1011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1011->SetLineColor(ci);
   Graph_Graph1011->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   Graph_Graph1011->GetXaxis()->CenterTitle(true);
   Graph_Graph1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph1011->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1011->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph1011->GetYaxis()->SetTitle("Acceptance weighting");
   Graph_Graph1011->GetYaxis()->CenterTitle(true);
   Graph_Graph1011->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph1011->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1011->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph1011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1011);
   
   
   TF1 *AcceptanceFunc1012 = new TF1("AcceptanceFunc","1/([0]*exp(-0.5*((x-[1])/[2])**2))",-71.42857,65.71429, TF1::EAddToList::kNo);
   AcceptanceFunc1012->SetFillColor(19);
   AcceptanceFunc1012->SetFillStyle(0);
   AcceptanceFunc1012->SetLineColor(2);
   AcceptanceFunc1012->SetLineWidth(2);
   AcceptanceFunc1012->SetChisquare(1682.342);
   AcceptanceFunc1012->SetNDF(18);
   AcceptanceFunc1012->GetXaxis()->SetLabelFont(42);
   AcceptanceFunc1012->GetXaxis()->SetTitleOffset(1);
   AcceptanceFunc1012->GetXaxis()->SetTitleFont(42);
   AcceptanceFunc1012->GetYaxis()->SetLabelFont(42);
   AcceptanceFunc1012->GetYaxis()->SetTitleFont(42);
   AcceptanceFunc1012->SetParameter(0,1.111873);
   AcceptanceFunc1012->SetParError(0,0.004806356);
   AcceptanceFunc1012->SetParLimits(0,0,0);
   AcceptanceFunc1012->SetParameter(1,-0.9708628);
   AcceptanceFunc1012->SetParError(1,0.117809);
   AcceptanceFunc1012->SetParLimits(1,0,0);
   AcceptanceFunc1012->SetParameter(2,24.99495);
   AcceptanceFunc1012->SetParError(2,0.2017382);
   AcceptanceFunc1012->SetParLimits(2,0,0);
   AcceptanceFunc1012->SetParent(gre);
   gre->GetListOfFunctions()->Add(AcceptanceFunc1012);
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
   pt_LaTex = pt->AddText("93.5
");
   pt_LaTex = pt->AddText("1.004#pm0.002");
   pt_LaTex = pt->AddText("0.91#pm0.07");
   pt_LaTex = pt->AddText("27.09#pm0.09");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
