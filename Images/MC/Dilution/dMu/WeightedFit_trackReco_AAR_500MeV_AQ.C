void WeightedFit_trackReco_AAR_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Aug 26 13:50:52 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-0.28125,3456.75,2.53125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t delta_A_vs_p_fx1001[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t delta_A_vs_p_fy1001[6] = {
   0.8139453,
   1.925995,
   1.524164,
   1.760498,
   1.757572,
   1.666631};
   Double_t delta_A_vs_p_fex1001[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t delta_A_vs_p_fey1001[6] = {
   0.6207731,
   0.2068717,
   0.17705,
   0.1808788,
   0.2278966,
   0.3592338};
   TGraphErrors *gre = new TGraphErrors(6,delta_A_vs_p_fx1001,delta_A_vs_p_fy1001,delta_A_vs_p_fex1001,delta_A_vs_p_fey1001);
   gre->SetName("delta_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_delta_A_vs_p1001 = new TH1F("Graph_delta_A_vs_p1001","",100,0,3300);
   Graph_delta_A_vs_p1001->SetMinimum(0);
   Graph_delta_A_vs_p1001->SetMaximum(2.25);
   Graph_delta_A_vs_p1001->SetDirectory(0);
   Graph_delta_A_vs_p1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_delta_A_vs_p1001->SetLineColor(ci);
   Graph_delta_A_vs_p1001->GetXaxis()->SetTitle("p [MeV] in range: p #minus 250 < p < p #plus 250");
   Graph_delta_A_vs_p1001->GetXaxis()->SetRange(0,93);
   Graph_delta_A_vs_p1001->GetXaxis()->CenterTitle(true);
   Graph_delta_A_vs_p1001->GetXaxis()->SetLabelFont(42);
   Graph_delta_A_vs_p1001->GetXaxis()->SetTitleSize(0.04);
   Graph_delta_A_vs_p1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_delta_A_vs_p1001->GetXaxis()->SetTitleFont(42);
   Graph_delta_A_vs_p1001->GetYaxis()->SetTitle("#delta' [mrad]");
   Graph_delta_A_vs_p1001->GetYaxis()->CenterTitle(true);
   Graph_delta_A_vs_p1001->GetYaxis()->SetNdivisions(4000510);
   Graph_delta_A_vs_p1001->GetYaxis()->SetLabelFont(42);
   Graph_delta_A_vs_p1001->GetYaxis()->SetTitleSize(0.04);
   Graph_delta_A_vs_p1001->GetYaxis()->SetTitleOffset(1.1);
   Graph_delta_A_vs_p1001->GetYaxis()->SetTitleFont(42);
   Graph_delta_A_vs_p1001->GetZaxis()->SetLabelFont(42);
   Graph_delta_A_vs_p1001->GetZaxis()->SetTitleOffset(1);
   Graph_delta_A_vs_p1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_delta_A_vs_p1001);
   
   
   TF1 *pol01002 = new TF1("pol0","pol0",-33,3069, TF1::EAddToList::kNo);
   pol01002->SetFillColor(19);
   pol01002->SetFillStyle(0);
   pol01002->SetLineColor(2);
   pol01002->SetLineWidth(2);
   pol01002->SetChisquare(4.401328);
   pol01002->SetNDF(5);
   pol01002->GetXaxis()->SetLabelFont(42);
   pol01002->GetXaxis()->SetTitleOffset(1);
   pol01002->GetXaxis()->SetTitleFont(42);
   pol01002->GetYaxis()->SetLabelFont(42);
   pol01002->GetYaxis()->SetTitleFont(42);
   pol01002->SetParameter(0,1.700616);
   pol01002->SetParError(0,0.09307616);
   pol01002->SetParLimits(0,0,0);
   pol01002->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01002);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.36,0.27,0.83,0.42,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("delta_A_vs_p","Sim","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","Fit: #LT#delta'#GT = 1.7
#pm0.09
 mrad","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
