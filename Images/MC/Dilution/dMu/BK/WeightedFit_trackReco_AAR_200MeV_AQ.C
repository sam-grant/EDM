void WeightedFit_trackReco_AAR_200MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Aug 26 14:08:36 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.25,-21.125,3605.25,10.125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t delta_A_vs_p_fx1001[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t delta_A_vs_p_fy1001[15] = {
   -5.897779,
   3.048617,
   0.7414536,
   1.997808,
   2.241917,
   1.182351,
   1.677747,
   1.982601,
   1.615951,
   1.826485,
   1.742298,
   1.682931,
   1.879162,
   1.530498,
   0.7199518};
   Double_t delta_A_vs_p_fex1001[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t delta_A_vs_p_fey1001[15] = {
   10.94069,
   1.388931,
   0.429075,
   0.3273677,
   0.2956371,
   0.2816773,
   0.2746572,
   0.2721375,
   0.2779555,
   0.2931667,
   0.3214673,
   0.3642184,
   0.4276116,
   0.4735688,
   0.7107924};
   TGraphErrors *gre = new TGraphErrors(15,delta_A_vs_p_fx1001,delta_A_vs_p_fy1001,delta_A_vs_p_fex1001,delta_A_vs_p_fey1001);
   gre->SetName("delta_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_delta_A_vs_p1001 = new TH1F("Graph_delta_A_vs_p1001","",100,0,3300);
   Graph_delta_A_vs_p1001->SetMinimum(-18);
   Graph_delta_A_vs_p1001->SetMaximum(7);
   Graph_delta_A_vs_p1001->SetDirectory(0);
   Graph_delta_A_vs_p1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_delta_A_vs_p1001->SetLineColor(ci);
   Graph_delta_A_vs_p1001->GetXaxis()->SetTitle("p [MeV] in range: p #minus 100 < p < p #plus 100");
   Graph_delta_A_vs_p1001->GetXaxis()->SetRange(0,97);
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
   
   
   TF1 *pol01002 = new TF1("pol0","pol0",-33,3201, TF1::EAddToList::kNo);
   pol01002->SetFillColor(19);
   pol01002->SetFillStyle(0);
   pol01002->SetLineColor(2);
   pol01002->SetLineWidth(2);
   pol01002->SetChisquare(17.56641);
   pol01002->SetNDF(14);
   pol01002->GetXaxis()->SetLabelFont(42);
   pol01002->GetXaxis()->SetTitleOffset(1);
   pol01002->GetXaxis()->SetTitleFont(42);
   pol01002->GetYaxis()->SetLabelFont(42);
   pol01002->GetYaxis()->SetTitleFont(42);
   pol01002->SetParameter(0,1.702951);
   pol01002->SetParError(0,0.09136545);
   pol01002->SetParLimits(0,0,0);
   pol01002->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01002);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.3,0.27,0.7,0.42,NULL,"brNDC");
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
