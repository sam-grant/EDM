void RatioGraph_35_45()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb 24 13:36:19 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-98.57143,-370.6641,30,1853.293);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1019[16] = {
   -77.14286,
   -71.42857,
   -65.71429,
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
   8.571429};
   Double_t _fy1019[16] = {
   17.7894,
   31.33634,
   7.181513,
   4.082895,
   2.391084,
   1.802673,
   1.316586,
   1.213928,
   1.019379,
   0.888583,
   0.8321156,
   0.9177622,
   0.9232949,
   1.069241,
   5.013723,
   741.3144};
   Double_t _fex1019[16] = {
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
   Double_t _fey1019[16] = {
   10.27335,
   22.16137,
   2.166685,
   0.8343497,
   0.3354581,
   0.1937561,
   0.1085977,
   0.08489619,
   0.05751013,
   0.04124143,
   0.03344018,
   0.03501082,
   0.03274324,
   0.03918356,
   0.3967307,
   741.319};
   TGraphErrors *gre = new TGraphErrors(16,_fx1019,_fy1019,_fex1019,_fey1019);
   gre->SetName("");
   gre->SetTitle(";#theta_{y} [mrad];Acceptance weighting");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1019 = new TH1F("Graph_Graph1019","",100,-85.71429,17.14286);
   Graph_Graph1019->SetMinimum(-148.2684);
   Graph_Graph1019->SetMaximum(1630.897);
   Graph_Graph1019->SetDirectory(0);
   Graph_Graph1019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1019->SetLineColor(ci);
   Graph_Graph1019->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   Graph_Graph1019->GetXaxis()->CenterTitle(true);
   Graph_Graph1019->GetXaxis()->SetLabelFont(42);
   Graph_Graph1019->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1019->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1019->GetXaxis()->SetTitleFont(42);
   Graph_Graph1019->GetYaxis()->SetTitle("Acceptance weighting");
   Graph_Graph1019->GetYaxis()->CenterTitle(true);
   Graph_Graph1019->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1019->GetYaxis()->SetLabelFont(42);
   Graph_Graph1019->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1019->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1019->GetYaxis()->SetTitleFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelFont(42);
   Graph_Graph1019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1019);
   
   
   TF1 *AcceptanceFunc1020 = new TF1("AcceptanceFunc","1/([0]*exp(-0.5*((x-[1])/[2])**2))",-85.71429,17.14286, TF1::EAddToList::kNo);
   AcceptanceFunc1020->SetFillColor(19);
   AcceptanceFunc1020->SetFillStyle(0);
   AcceptanceFunc1020->SetLineColor(2);
   AcceptanceFunc1020->SetLineWidth(2);
   AcceptanceFunc1020->SetChisquare(93.32111);
   AcceptanceFunc1020->SetNDF(13);
   AcceptanceFunc1020->GetXaxis()->SetLabelFont(42);
   AcceptanceFunc1020->GetXaxis()->SetTitleOffset(1);
   AcceptanceFunc1020->GetXaxis()->SetTitleFont(42);
   AcceptanceFunc1020->GetYaxis()->SetLabelFont(42);
   AcceptanceFunc1020->GetYaxis()->SetTitleFont(42);
   AcceptanceFunc1020->SetParameter(0,1.174938);
   AcceptanceFunc1020->SetParError(0,0.02428331);
   AcceptanceFunc1020->SetParLimits(0,0,0);
   AcceptanceFunc1020->SetParameter(1,-19.74511);
   AcceptanceFunc1020->SetParError(1,0.7045283);
   AcceptanceFunc1020->SetParLimits(1,0,0);
   AcceptanceFunc1020->SetParameter(2,23.02596);
   AcceptanceFunc1020->SetParError(2,0.8278977);
   AcceptanceFunc1020->SetParLimits(2,0,0);
   AcceptanceFunc1020->SetParent(gre);
   gre->GetListOfFunctions()->Add(AcceptanceFunc1020);
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
   pt_LaTex = pt->AddText("7.18
");
   pt_LaTex = pt->AddText("1.004#pm0.002");
   pt_LaTex = pt->AddText("0.91#pm0.07");
   pt_LaTex = pt->AddText("27.09#pm0.09");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
