void RatioGraph_-15_-5()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb 24 13:36:18 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-70,-54.60478,92.85714,499.9846);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1009[20] = {
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
   60,
   65.71429};
   Double_t _fy1009[20] = {
   307.089,
   57.18624,
   13.85452,
   3.886309,
   1.729816,
   1.166018,
   0.9900444,
   0.9990125,
   1.001921,
   0.9685833,
   0.9585124,
   0.9815325,
   1.078753,
   1.285865,
   1.815371,
   3.232631,
   6.007726,
   12.25541,
   23.97883,
   103.505};
   Double_t _fex1009[20] = {
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
   Double_t _fey1009[20] = {
   97.11148,
   6.884947,
   0.7244182,
   0.09523635,
   0.02525878,
   0.01267203,
   0.009206744,
   0.008968088,
   0.009002715,
   0.008908208,
   0.009439977,
   0.01081693,
   0.01397429,
   0.02057153,
   0.03908328,
   0.1048583,
   0.2998586,
   0.9815719,
   2.997906,
   29.88059};
   TGraphErrors *gre = new TGraphErrors(20,_fx1009,_fy1009,_fex1009,_fey1009);
   gre->SetName("");
   gre->SetTitle(";#theta_{y} [mrad];Acceptance weighting");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","",100,-53.71429,76.57143);
   Graph_Graph1009->SetMinimum(0.8541651);
   Graph_Graph1009->SetMaximum(444.5257);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1009->SetLineColor(ci);
   Graph_Graph1009->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   Graph_Graph1009->GetXaxis()->CenterTitle(true);
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1009->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetTitle("Acceptance weighting");
   Graph_Graph1009->GetYaxis()->CenterTitle(true);
   Graph_Graph1009->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1009->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1009);
   
   
   TF1 *AcceptanceFunc1010 = new TF1("AcceptanceFunc","1/([0]*exp(-0.5*((x-[1])/[2])**2))",-53.71429,76.57143, TF1::EAddToList::kNo);
   AcceptanceFunc1010->SetFillColor(19);
   AcceptanceFunc1010->SetFillStyle(0);
   AcceptanceFunc1010->SetLineColor(2);
   AcceptanceFunc1010->SetLineWidth(2);
   AcceptanceFunc1010->SetChisquare(1392.808);
   AcceptanceFunc1010->SetNDF(17);
   AcceptanceFunc1010->GetXaxis()->SetLabelFont(42);
   AcceptanceFunc1010->GetXaxis()->SetTitleOffset(1);
   AcceptanceFunc1010->GetXaxis()->SetTitleFont(42);
   AcceptanceFunc1010->GetYaxis()->SetLabelFont(42);
   AcceptanceFunc1010->GetYaxis()->SetTitleFont(42);
   AcceptanceFunc1010->SetParameter(0,1.121538);
   AcceptanceFunc1010->SetParError(0,0.005375878);
   AcceptanceFunc1010->SetParLimits(0,0,0);
   AcceptanceFunc1010->SetParameter(1,7.239639);
   AcceptanceFunc1010->SetParError(1,0.1293783);
   AcceptanceFunc1010->SetParLimits(1,0,0);
   AcceptanceFunc1010->SetParameter(2,24.92326);
   AcceptanceFunc1010->SetParError(2,0.2157578);
   AcceptanceFunc1010->SetParLimits(2,0,0);
   AcceptanceFunc1010->SetParent(gre);
   gre->GetListOfFunctions()->Add(AcceptanceFunc1010);
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
   pt_LaTex = pt->AddText("81.9
");
   pt_LaTex = pt->AddText("1.004#pm0.002");
   pt_LaTex = pt->AddText("0.91#pm0.07");
   pt_LaTex = pt->AddText("27.09#pm0.09");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
