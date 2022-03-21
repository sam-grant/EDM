void RatioGraph_5_15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb 24 13:36:18 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-100,-507.5465,71.42857,2537.706);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1013[21] = {
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
   31.42857,
   37.14286,
   42.85714};
   Double_t _fy1013[21] = {
   1015.08,
   136.549,
   47.50445,
   15.0735,
   6.203654,
   2.814291,
   1.723497,
   1.195942,
   1.002897,
   0.9406889,
   0.9413583,
   0.9713808,
   1.005159,
   1,
   1.03091,
   1.238097,
   1.92646,
   4.338982,
   12.32129,
   45.91793,
   152.5584};
   Double_t _fex1013[21] = {
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
   Double_t _fey1013[21] = {
   1015.084,
   45.51778,
   8.398454,
   1.343245,
   0.3163909,
   0.0857298,
   0.03633009,
   0.01852794,
   0.01259977,
   0.01019266,
   0.00924174,
   0.008989801,
   0.009094533,
   0.009017012,
   0.009826943,
   0.01392003,
   0.0297758,
   0.1129767,
   0.6109609,
   4.980974,
   34.11407};
   TGraphErrors *gre = new TGraphErrors(21,_fx1013,_fy1013,_fex1013,_fey1013);
   gre->SetName("");
   gre->SetTitle(";#theta_{y} [mrad];Acceptance weighting");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","",100,-82.85714,54.28571);
   Graph_Graph1013->SetMinimum(-203.0212);
   Graph_Graph1013->SetMaximum(2233.181);
   Graph_Graph1013->SetDirectory(0);
   Graph_Graph1013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1013->SetLineColor(ci);
   Graph_Graph1013->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   Graph_Graph1013->GetXaxis()->CenterTitle(true);
   Graph_Graph1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph1013->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph1013->GetYaxis()->SetTitle("Acceptance weighting");
   Graph_Graph1013->GetYaxis()->CenterTitle(true);
   Graph_Graph1013->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph1013->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1013->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph1013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1013);
   
   
   TF1 *AcceptanceFunc1014 = new TF1("AcceptanceFunc","1/([0]*exp(-0.5*((x-[1])/[2])**2))",-82.85714,54.28571, TF1::EAddToList::kNo);
   AcceptanceFunc1014->SetFillColor(19);
   AcceptanceFunc1014->SetFillStyle(0);
   AcceptanceFunc1014->SetLineColor(2);
   AcceptanceFunc1014->SetLineWidth(2);
   AcceptanceFunc1014->SetChisquare(1435.848);
   AcceptanceFunc1014->SetNDF(18);
   AcceptanceFunc1014->GetXaxis()->SetLabelFont(42);
   AcceptanceFunc1014->GetXaxis()->SetTitleOffset(1);
   AcceptanceFunc1014->GetXaxis()->SetTitleFont(42);
   AcceptanceFunc1014->GetYaxis()->SetLabelFont(42);
   AcceptanceFunc1014->GetYaxis()->SetTitleFont(42);
   AcceptanceFunc1014->SetParameter(0,1.135015);
   AcceptanceFunc1014->SetParError(0,0.005528804);
   AcceptanceFunc1014->SetParLimits(0,0,0);
   AcceptanceFunc1014->SetParameter(1,-9.095718);
   AcceptanceFunc1014->SetParError(1,0.1301629);
   AcceptanceFunc1014->SetParLimits(1,0,0);
   AcceptanceFunc1014->SetParameter(2,24.72679);
   AcceptanceFunc1014->SetParError(2,0.2161566);
   AcceptanceFunc1014->SetParLimits(2,0,0);
   AcceptanceFunc1014->SetParent(gre);
   gre->GetListOfFunctions()->Add(AcceptanceFunc1014);
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
   pt_LaTex = pt->AddText("79.8
");
   pt_LaTex = pt->AddText("1.004#pm0.002");
   pt_LaTex = pt->AddText("0.91#pm0.07");
   pt_LaTex = pt->AddText("27.09#pm0.09");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
