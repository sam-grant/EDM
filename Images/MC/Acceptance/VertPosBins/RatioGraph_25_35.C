void RatioGraph_25_35()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb 24 13:36:19 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-100,-4.336844,37.14286,46.82392);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1017[17] = {
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
   14.28571};
   Double_t _fy1017[17] = {
   27.572,
   15.46191,
   8.099492,
   5.293397,
   2.478421,
   1.731486,
   1.306318,
   1.086602,
   0.8906691,
   0.9059227,
   0.8973377,
   0.9055582,
   0.9260572,
   1.025503,
   1.187892,
   3.615008,
   33.44332};
   Double_t _fex1017[17] = {
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
   Double_t _fey1017[17] = {
   10.42293,
   3.993402,
   1.36982,
   0.6521224,
   0.1871548,
   0.09780985,
   0.05661717,
   0.03789424,
   0.02485513,
   0.02254226,
   0.01981138,
   0.01820039,
   0.01741494,
   0.01952037,
   0.02433379,
   0.1339629,
   4.05614};
   TGraphErrors *gre = new TGraphErrors(17,_fx1017,_fy1017,_fex1017,_fey1017);
   gre->SetName("");
   gre->SetTitle(";#theta_{y} [mrad];Acceptance weighting");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","",100,-86.28571,23.42857);
   Graph_Graph1017->SetMinimum(0.7792326);
   Graph_Graph1017->SetMaximum(41.70784);
   Graph_Graph1017->SetDirectory(0);
   Graph_Graph1017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1017->SetLineColor(ci);
   Graph_Graph1017->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   Graph_Graph1017->GetXaxis()->CenterTitle(true);
   Graph_Graph1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph1017->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph1017->GetYaxis()->SetTitle("Acceptance weighting");
   Graph_Graph1017->GetYaxis()->CenterTitle(true);
   Graph_Graph1017->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph1017->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1017->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph1017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1017);
   
   
   TF1 *AcceptanceFunc1018 = new TF1("AcceptanceFunc","1/([0]*exp(-0.5*((x-[1])/[2])**2))",-86.28571,23.42857, TF1::EAddToList::kNo);
   AcceptanceFunc1018->SetFillColor(19);
   AcceptanceFunc1018->SetFillStyle(0);
   AcceptanceFunc1018->SetLineColor(2);
   AcceptanceFunc1018->SetLineWidth(2);
   AcceptanceFunc1018->SetChisquare(333.9928);
   AcceptanceFunc1018->SetNDF(14);
   AcceptanceFunc1018->GetXaxis()->SetLabelFont(42);
   AcceptanceFunc1018->GetXaxis()->SetTitleOffset(1);
   AcceptanceFunc1018->GetXaxis()->SetTitleFont(42);
   AcceptanceFunc1018->GetYaxis()->SetLabelFont(42);
   AcceptanceFunc1018->GetYaxis()->SetTitleFont(42);
   AcceptanceFunc1018->SetParameter(0,1.194206);
   AcceptanceFunc1018->SetParError(0,0.0131827);
   AcceptanceFunc1018->SetParLimits(0,0,0);
   AcceptanceFunc1018->SetParameter(1,-19.23222);
   AcceptanceFunc1018->SetParError(1,0.284974);
   AcceptanceFunc1018->SetParLimits(1,0,0);
   AcceptanceFunc1018->SetParameter(2,23.61423);
   AcceptanceFunc1018->SetParError(2,0.422773);
   AcceptanceFunc1018->SetParLimits(2,0,0);
   AcceptanceFunc1018->SetParent(gre);
   gre->GetListOfFunctions()->Add(AcceptanceFunc1018);
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
   pt_LaTex = pt->AddText("23.9
");
   pt_LaTex = pt->AddText("1.004#pm0.002");
   pt_LaTex = pt->AddText("0.91#pm0.07");
   pt_LaTex = pt->AddText("27.09#pm0.09");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
