void RatioGraph_-25_-15()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb 24 13:36:18 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-58.57143,-1423.454,104.2857,7117.245);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1007[20] = {
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
   65.71429,
   71.42857,
   77.14286};
   Double_t _fy1007[20] = {
   2846.895,
   56.90136,
   8.14571,
   2.235129,
   1.181349,
   1.009276,
   1,
   0.9417359,
   0.9008118,
   0.9166429,
   0.9559411,
   1.052184,
   1.151251,
   1.600295,
   2.522953,
   3.891237,
   7.134847,
   12.17652,
   33.70056,
   156.0843};
   Double_t _fex1007[20] = {
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
   Double_t _fey1007[20] = {
   2846.9,
   7.113226,
   0.3431836,
   0.04476466,
   0.0159994,
   0.01214752,
   0.01196526,
   0.01141297,
   0.01147913,
   0.01302087,
   0.01556103,
   0.02033854,
   0.02633385,
   0.04889863,
   0.1089639,
   0.2340691,
   0.649027,
   1.59944,
   8.174665,
   90.11788};
   TGraphErrors *gre = new TGraphErrors(20,_fx1007,_fy1007,_fex1007,_fey1007);
   gre->SetName("");
   gre->SetTitle(";#theta_{y} [mrad];Acceptance weighting");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","",100,-42.28571,88);
   Graph_Graph1007->SetMinimum(-569.3844);
   Graph_Graph1007->SetMaximum(6263.175);
   Graph_Graph1007->SetDirectory(0);
   Graph_Graph1007->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1007->SetLineColor(ci);
   Graph_Graph1007->GetXaxis()->SetTitle("#theta_{y} [mrad]");
   Graph_Graph1007->GetXaxis()->CenterTitle(true);
   Graph_Graph1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph1007->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1007->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph1007->GetYaxis()->SetTitle("Acceptance weighting");
   Graph_Graph1007->GetYaxis()->CenterTitle(true);
   Graph_Graph1007->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph1007->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1007->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph1007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1007);
   
   
   TF1 *AcceptanceFunc1008 = new TF1("AcceptanceFunc","1/([0]*exp(-0.5*((x-[1])/[2])**2))",-42.28571,88, TF1::EAddToList::kNo);
   AcceptanceFunc1008->SetFillColor(19);
   AcceptanceFunc1008->SetFillStyle(0);
   AcceptanceFunc1008->SetLineColor(2);
   AcceptanceFunc1008->SetLineWidth(2);
   AcceptanceFunc1008->SetChisquare(782.4238);
   AcceptanceFunc1008->SetNDF(17);
   AcceptanceFunc1008->GetXaxis()->SetLabelFont(42);
   AcceptanceFunc1008->GetXaxis()->SetTitleOffset(1);
   AcceptanceFunc1008->GetXaxis()->SetTitleFont(42);
   AcceptanceFunc1008->GetYaxis()->SetLabelFont(42);
   AcceptanceFunc1008->GetYaxis()->SetTitleFont(42);
   AcceptanceFunc1008->SetParameter(0,1.162758);
   AcceptanceFunc1008->SetParError(0,0.007641679);
   AcceptanceFunc1008->SetParLimits(0,0,0);
   AcceptanceFunc1008->SetParameter(1,14.28792);
   AcceptanceFunc1008->SetParError(1,0.1756035);
   AcceptanceFunc1008->SetParLimits(1,0,0);
   AcceptanceFunc1008->SetParameter(2,24.69441);
   AcceptanceFunc1008->SetParError(2,0.271281);
   AcceptanceFunc1008->SetParLimits(2,0,0);
   AcceptanceFunc1008->SetParent(gre);
   gre->GetListOfFunctions()->Add(AcceptanceFunc1008);
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
   pt_LaTex = pt->AddText("46
");
   pt_LaTex = pt->AddText("1.004#pm0.002");
   pt_LaTex = pt->AddText("0.91#pm0.07");
   pt_LaTex = pt->AddText("27.09#pm0.09");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
