void RatioGraph_()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 22 10:36:53 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-90,-0.9005339,90,17.06677);
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
   9.235522,
   8.104125,
   5.771255,
   3.901794,
   2.611691,
   2.028987,
   1.601272,
   1.333351,
   1.17374,
   1.055579,
   1.004992,
   1,
   1.043985,
   1.13812,
   1.261463,
   1.476155,
   1.842234,
   2.500231,
   3.540808,
   5.376191,
   6.745176,
   10.32139};
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
   3.080232,
   0.7224338,
   0.2492713,
   0.09653453,
   0.04014083,
   0.02193232,
   0.01271911,
   0.008235347,
   0.00598305,
   0.004716038,
   0.004259259,
   0.004226431,
   0.004640973,
   0.005711423,
   0.007578761,
   0.01126586,
   0.01900101,
   0.03762526,
   0.08341749,
   0.2240291,
   0.5493357,
   3.65099};
   TGraphErrors *gre = new TGraphErrors(22,_fx1001,_fy1001,_fex1001,_fey1001);
   gre->SetName("");
   gre->SetTitle(";#theta_{y} [mrad];Acceptance weighting");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,-72,72);
   Graph_Graph1001->SetMinimum(0.8961962);
   Graph_Graph1001->SetMaximum(15.27004);
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
   AcceptanceFunc1002->SetChisquare(65.19854);
   AcceptanceFunc1002->SetNDF(19);
   AcceptanceFunc1002->GetXaxis()->SetLabelFont(42);
   AcceptanceFunc1002->GetXaxis()->SetTitleOffset(1);
   AcceptanceFunc1002->GetXaxis()->SetTitleFont(42);
   AcceptanceFunc1002->GetYaxis()->SetLabelFont(42);
   AcceptanceFunc1002->GetYaxis()->SetTitleFont(42);
   AcceptanceFunc1002->SetParameter(0,1.004082);
   AcceptanceFunc1002->SetParError(0,0.001955152);
   AcceptanceFunc1002->SetParLimits(0,0,0);
   AcceptanceFunc1002->SetParameter(1,0.9136563);
   AcceptanceFunc1002->SetParError(1,0.07108052);
   AcceptanceFunc1002->SetParLimits(1,0,0);
   AcceptanceFunc1002->SetParameter(2,27.09071);
   AcceptanceFunc1002->SetParError(2,0.08816792);
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
