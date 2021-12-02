void WeightedFit_trackTruth_AAR_500MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Sep  9 14:17:26 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-4,3456.75,6);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t delta_A_vs_p_fx1011[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t delta_A_vs_p_fy1011[6] = {
   0.2128646,
   1.784098,
   1.697337,
   1.692046,
   1.338238,
   3.691794};
   Double_t delta_A_vs_p_fex1011[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t delta_A_vs_p_fey1011[6] = {
   2.752792,
   0.2976939,
   0.164876,
   0.1597957,
   0.2329019,
   0.7746211};
   TGraphErrors *gre = new TGraphErrors(6,delta_A_vs_p_fx1011,delta_A_vs_p_fy1011,delta_A_vs_p_fex1011,delta_A_vs_p_fey1011);
   gre->SetName("delta_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_delta_A_vs_p1011 = new TH1F("Graph_delta_A_vs_p1011","",100,0,3300);
   Graph_delta_A_vs_p1011->SetMinimum(-3);
   Graph_delta_A_vs_p1011->SetMaximum(5);
   Graph_delta_A_vs_p1011->SetDirectory(0);
   Graph_delta_A_vs_p1011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_delta_A_vs_p1011->SetLineColor(ci);
   Graph_delta_A_vs_p1011->GetXaxis()->SetTitle("p [MeV] in range: p #minus 250 < p < p #plus 250");
   Graph_delta_A_vs_p1011->GetXaxis()->SetRange(0,93);
   Graph_delta_A_vs_p1011->GetXaxis()->CenterTitle(true);
   Graph_delta_A_vs_p1011->GetXaxis()->SetLabelFont(42);
   Graph_delta_A_vs_p1011->GetXaxis()->SetTitleSize(0.04);
   Graph_delta_A_vs_p1011->GetXaxis()->SetTitleOffset(1.1);
   Graph_delta_A_vs_p1011->GetXaxis()->SetTitleFont(42);
   Graph_delta_A_vs_p1011->GetYaxis()->SetTitle("#delta' [mrad]");
   Graph_delta_A_vs_p1011->GetYaxis()->CenterTitle(true);
   Graph_delta_A_vs_p1011->GetYaxis()->SetNdivisions(4000510);
   Graph_delta_A_vs_p1011->GetYaxis()->SetLabelFont(42);
   Graph_delta_A_vs_p1011->GetYaxis()->SetTitleSize(0.04);
   Graph_delta_A_vs_p1011->GetYaxis()->SetTitleOffset(1.1);
   Graph_delta_A_vs_p1011->GetYaxis()->SetTitleFont(42);
   Graph_delta_A_vs_p1011->GetZaxis()->SetLabelFont(42);
   Graph_delta_A_vs_p1011->GetZaxis()->SetTitleOffset(1);
   Graph_delta_A_vs_p1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_delta_A_vs_p1011);
   
   
   TF1 *pol01012 = new TF1("pol0","pol0",-33,3069, TF1::EAddToList::kNo);
   pol01012->SetFillColor(19);
   pol01012->SetFillStyle(0);
   pol01012->SetLineColor(2);
   pol01012->SetLineWidth(2);
   pol01012->SetChisquare(9.31461);
   pol01012->SetNDF(5);
   pol01012->GetXaxis()->SetLabelFont(42);
   pol01012->GetXaxis()->SetTitleOffset(1);
   pol01012->GetXaxis()->SetTitleFont(42);
   pol01012->GetYaxis()->SetLabelFont(42);
   pol01012->GetYaxis()->SetTitleFont(42);
   pol01012->SetParameter(0,1.672023);
   pol01012->SetParError(0,0.09646355);
   pol01012->SetParLimits(0,0,0);
   pol01012->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01012);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 1.67
#pm0.1
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
