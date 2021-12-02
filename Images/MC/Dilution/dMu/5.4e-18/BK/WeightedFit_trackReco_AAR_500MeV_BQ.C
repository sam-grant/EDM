void WeightedFit_trackReco_AAR_500MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Sep  9 14:17:26 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-4.5625,3456.75,6.0625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t delta_A_vs_p_fx1009[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t delta_A_vs_p_fy1009[6] = {
   -0.2654435,
   1.822097,
   1.694909,
   1.69679,
   1.402628,
   3.369264};
   Double_t delta_A_vs_p_fex1009[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t delta_A_vs_p_fey1009[6] = {
   2.87471,
   0.2776257,
   0.1487447,
   0.1421114,
   0.2075875,
   0.7371041};
   TGraphErrors *gre = new TGraphErrors(6,delta_A_vs_p_fx1009,delta_A_vs_p_fy1009,delta_A_vs_p_fex1009,delta_A_vs_p_fey1009);
   gre->SetName("delta_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_delta_A_vs_p1009 = new TH1F("Graph_delta_A_vs_p1009","",100,0,3300);
   Graph_delta_A_vs_p1009->SetMinimum(-3.5);
   Graph_delta_A_vs_p1009->SetMaximum(5);
   Graph_delta_A_vs_p1009->SetDirectory(0);
   Graph_delta_A_vs_p1009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_delta_A_vs_p1009->SetLineColor(ci);
   Graph_delta_A_vs_p1009->GetXaxis()->SetTitle("p [MeV] in range: p #minus 250 < p < p #plus 250");
   Graph_delta_A_vs_p1009->GetXaxis()->SetRange(0,93);
   Graph_delta_A_vs_p1009->GetXaxis()->CenterTitle(true);
   Graph_delta_A_vs_p1009->GetXaxis()->SetLabelFont(42);
   Graph_delta_A_vs_p1009->GetXaxis()->SetTitleSize(0.04);
   Graph_delta_A_vs_p1009->GetXaxis()->SetTitleOffset(1.1);
   Graph_delta_A_vs_p1009->GetXaxis()->SetTitleFont(42);
   Graph_delta_A_vs_p1009->GetYaxis()->SetTitle("#delta' [mrad]");
   Graph_delta_A_vs_p1009->GetYaxis()->CenterTitle(true);
   Graph_delta_A_vs_p1009->GetYaxis()->SetNdivisions(4000510);
   Graph_delta_A_vs_p1009->GetYaxis()->SetLabelFont(42);
   Graph_delta_A_vs_p1009->GetYaxis()->SetTitleSize(0.04);
   Graph_delta_A_vs_p1009->GetYaxis()->SetTitleOffset(1.1);
   Graph_delta_A_vs_p1009->GetYaxis()->SetTitleFont(42);
   Graph_delta_A_vs_p1009->GetZaxis()->SetLabelFont(42);
   Graph_delta_A_vs_p1009->GetZaxis()->SetTitleOffset(1);
   Graph_delta_A_vs_p1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_delta_A_vs_p1009);
   
   
   TF1 *pol01010 = new TF1("pol0","pol0",-33,3069, TF1::EAddToList::kNo);
   pol01010->SetFillColor(19);
   pol01010->SetFillStyle(0);
   pol01010->SetLineColor(2);
   pol01010->SetLineWidth(2);
   pol01010->SetChisquare(7.781111);
   pol01010->SetNDF(5);
   pol01010->GetXaxis()->SetLabelFont(42);
   pol01010->GetXaxis()->SetTitleOffset(1);
   pol01010->GetXaxis()->SetTitleFont(42);
   pol01010->GetYaxis()->SetLabelFont(42);
   pol01010->GetYaxis()->SetTitleFont(42);
   pol01010->SetParameter(0,1.678388);
   pol01010->SetParError(0,0.0867583);
   pol01010->SetParLimits(0,0,0);
   pol01010->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01010);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 1.68
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
