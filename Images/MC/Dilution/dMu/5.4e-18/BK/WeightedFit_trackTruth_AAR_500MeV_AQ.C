void WeightedFit_trackTruth_AAR_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Sep  9 14:17:26 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,0.5875,3456.75,2.7125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t delta_A_vs_p_fx1007[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t delta_A_vs_p_fy1007[6] = {
   1.52304,
   1.720467,
   1.712893,
   1.685376,
   1.576281,
   1.983893};
   Double_t delta_A_vs_p_fex1007[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t delta_A_vs_p_fey1007[6] = {
   0.54635,
   0.1598666,
   0.1256459,
   0.1245004,
   0.160771,
   0.3089185};
   TGraphErrors *gre = new TGraphErrors(6,delta_A_vs_p_fx1007,delta_A_vs_p_fy1007,delta_A_vs_p_fex1007,delta_A_vs_p_fey1007);
   gre->SetName("delta_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_delta_A_vs_p1007 = new TH1F("Graph_delta_A_vs_p1007","",100,0,3300);
   Graph_delta_A_vs_p1007->SetMinimum(0.8);
   Graph_delta_A_vs_p1007->SetMaximum(2.5);
   Graph_delta_A_vs_p1007->SetDirectory(0);
   Graph_delta_A_vs_p1007->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_delta_A_vs_p1007->SetLineColor(ci);
   Graph_delta_A_vs_p1007->GetXaxis()->SetTitle("p [MeV] in range: p #minus 250 < p < p #plus 250");
   Graph_delta_A_vs_p1007->GetXaxis()->SetRange(0,93);
   Graph_delta_A_vs_p1007->GetXaxis()->CenterTitle(true);
   Graph_delta_A_vs_p1007->GetXaxis()->SetLabelFont(42);
   Graph_delta_A_vs_p1007->GetXaxis()->SetTitleSize(0.04);
   Graph_delta_A_vs_p1007->GetXaxis()->SetTitleOffset(1.1);
   Graph_delta_A_vs_p1007->GetXaxis()->SetTitleFont(42);
   Graph_delta_A_vs_p1007->GetYaxis()->SetTitle("#delta' [mrad]");
   Graph_delta_A_vs_p1007->GetYaxis()->CenterTitle(true);
   Graph_delta_A_vs_p1007->GetYaxis()->SetNdivisions(4000510);
   Graph_delta_A_vs_p1007->GetYaxis()->SetLabelFont(42);
   Graph_delta_A_vs_p1007->GetYaxis()->SetTitleSize(0.04);
   Graph_delta_A_vs_p1007->GetYaxis()->SetTitleOffset(1.1);
   Graph_delta_A_vs_p1007->GetYaxis()->SetTitleFont(42);
   Graph_delta_A_vs_p1007->GetZaxis()->SetLabelFont(42);
   Graph_delta_A_vs_p1007->GetZaxis()->SetTitleOffset(1);
   Graph_delta_A_vs_p1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_delta_A_vs_p1007);
   
   
   TF1 *pol01008 = new TF1("pol0","pol0",-33,3069, TF1::EAddToList::kNo);
   pol01008->SetFillColor(19);
   pol01008->SetFillStyle(0);
   pol01008->SetLineColor(2);
   pol01008->SetLineWidth(2);
   pol01008->SetChisquare(1.56871);
   pol01008->SetNDF(5);
   pol01008->GetXaxis()->SetLabelFont(42);
   pol01008->GetXaxis()->SetTitleOffset(1);
   pol01008->GetXaxis()->SetTitleFont(42);
   pol01008->GetYaxis()->SetLabelFont(42);
   pol01008->GetYaxis()->SetTitleFont(42);
   pol01008->SetParameter(0,1.692117);
   pol01008->SetParError(0,0.06749616);
   pol01008->SetParLimits(0,0,0);
   pol01008->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01008);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 1.69
#pm0.07
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
