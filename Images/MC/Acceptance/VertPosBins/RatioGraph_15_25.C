void RatioGraph_15_25()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb 24 13:36:19 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-104.2857,-73.71425,58.57143,671.0776);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1015[20] = {
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
   8.571429,
   14.28571,
   20,
   25.71429,
   31.42857};
   Double_t _fy1015[20] = {
   228.496,
   34.8273,
   14.74471,
   8.648671,
   4.125353,
   2.414073,
   1.5382,
   1.169842,
   0.9675558,
   0.8912411,
   0.8620113,
   0.8841704,
   0.9423201,
   0.9978893,
   1.003242,
   1.191126,
   2.305138,
   9.534033,
   60.64752,
   393.6515};
   Double_t _fex1015[20] = {
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
   Double_t _fey1015[20] = {
   161.5741,
   8.707904,
   2.174625,
   0.8785772,
   0.2596296,
   0.1036873,
   0.04674261,
   0.02742464,
   0.01820138,
   0.01425452,
   0.01208351,
   0.0113599,
   0.01159342,
   0.01214711,
   0.01223178,
   0.01645936,
   0.04773172,
   0.4423301,
   7.963976,
   148.7879};
   TGraphErrors *gre = new TGraphErrors(20,_fx1015,_fy1015,_fex1015,_fey1015);
   gre->SetName("");
   gre->SetTitle(";#theta_{y} [mrad];Acceptance weighting");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","",100,-88,42.28571);
   Graph_Graph1015->SetMinimum(0.764935);
   Graph_Graph1015->SetMaximum(596.5984);
   Graph_Graph1015->SetDirectory(0);
   Graph_Graph1015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1015->SetLineColor(ci);
   Graph_Graph1015->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   Graph_Graph1015->GetXaxis()->CenterTitle(true);
   Graph_Graph1015->GetXaxis()->SetLabelFont(42);
   Graph_Graph1015->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1015->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1015->GetXaxis()->SetTitleFont(42);
   Graph_Graph1015->GetYaxis()->SetTitle("Acceptance weighting");
   Graph_Graph1015->GetYaxis()->CenterTitle(true);
   Graph_Graph1015->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1015->GetYaxis()->SetLabelFont(42);
   Graph_Graph1015->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1015->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1015->GetYaxis()->SetTitleFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelFont(42);
   Graph_Graph1015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1015);
   
   
   TF1 *AcceptanceFunc1016 = new TF1("AcceptanceFunc","1/([0]*exp(-0.5*((x-[1])/[2])**2))",-88,42.28571, TF1::EAddToList::kNo);
   AcceptanceFunc1016->SetFillColor(19);
   AcceptanceFunc1016->SetFillStyle(0);
   AcceptanceFunc1016->SetLineColor(2);
   AcceptanceFunc1016->SetLineWidth(2);
   AcceptanceFunc1016->SetChisquare(784.7174);
   AcceptanceFunc1016->SetNDF(17);
   AcceptanceFunc1016->GetXaxis()->SetLabelFont(42);
   AcceptanceFunc1016->GetXaxis()->SetTitleOffset(1);
   AcceptanceFunc1016->GetXaxis()->SetTitleFont(42);
   AcceptanceFunc1016->GetYaxis()->SetLabelFont(42);
   AcceptanceFunc1016->GetYaxis()->SetTitleFont(42);
   AcceptanceFunc1016->SetParameter(0,1.199911);
   AcceptanceFunc1016->SetParError(0,0.008013841);
   AcceptanceFunc1016->SetParLimits(0,0,0);
   AcceptanceFunc1016->SetParameter(1,-15.01621);
   AcceptanceFunc1016->SetParError(1,0.1749036);
   AcceptanceFunc1016->SetParLimits(1,0,0);
   AcceptanceFunc1016->SetParameter(2,24.33296);
   AcceptanceFunc1016->SetParError(2,0.2745368);
   AcceptanceFunc1016->SetParLimits(2,0,0);
   AcceptanceFunc1016->SetParent(gre);
   gre->GetListOfFunctions()->Add(AcceptanceFunc1016);
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
   pt_LaTex = pt->AddText("46.2
");
   pt_LaTex = pt->AddText("1.004#pm0.002");
   pt_LaTex = pt->AddText("0.91#pm0.07");
   pt_LaTex = pt->AddText("27.09#pm0.09");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
