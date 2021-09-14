void WeightedFit_truth_AAR_200MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Aug 26 14:08:36 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,0.5875,3456.75,2.7125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t delta_A_vs_p_fx1003[15] = {
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
   Double_t delta_A_vs_p_fy1003[15] = {
   1.746973,
   1.823485,
   1.618093,
   1.685891,
   1.721751,
   1.679809,
   1.786679,
   1.690322,
   1.654648,
   1.719564,
   1.679262,
   1.699254,
   1.539784,
   1.691594,
   1.119691};
   Double_t delta_A_vs_p_fex1003[15] = {
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
   Double_t delta_A_vs_p_fey1003[15] = {
   0.4412674,
   0.1869647,
   0.1192364,
   0.08826738,
   0.07119454,
   0.0618446,
   0.05647524,
   0.05316313,
   0.05174647,
   0.05255288,
   0.05554257,
   0.06160095,
   0.07217529,
   0.09308235,
   0.147127};
   TGraphErrors *gre = new TGraphErrors(15,delta_A_vs_p_fx1003,delta_A_vs_p_fy1003,delta_A_vs_p_fex1003,delta_A_vs_p_fey1003);
   gre->SetName("delta_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_delta_A_vs_p1003 = new TH1F("Graph_delta_A_vs_p1003","",100,0,3300);
   Graph_delta_A_vs_p1003->SetMinimum(0.8);
   Graph_delta_A_vs_p1003->SetMaximum(2.5);
   Graph_delta_A_vs_p1003->SetDirectory(0);
   Graph_delta_A_vs_p1003->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_delta_A_vs_p1003->SetLineColor(ci);
   Graph_delta_A_vs_p1003->GetXaxis()->SetTitle("p [MeV] in range: p #minus 100 < p < p #plus 100");
   Graph_delta_A_vs_p1003->GetXaxis()->SetRange(0,93);
   Graph_delta_A_vs_p1003->GetXaxis()->CenterTitle(true);
   Graph_delta_A_vs_p1003->GetXaxis()->SetLabelFont(42);
   Graph_delta_A_vs_p1003->GetXaxis()->SetTitleSize(0.04);
   Graph_delta_A_vs_p1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_delta_A_vs_p1003->GetXaxis()->SetTitleFont(42);
   Graph_delta_A_vs_p1003->GetYaxis()->SetTitle("#delta' [mrad]");
   Graph_delta_A_vs_p1003->GetYaxis()->CenterTitle(true);
   Graph_delta_A_vs_p1003->GetYaxis()->SetNdivisions(4000510);
   Graph_delta_A_vs_p1003->GetYaxis()->SetLabelFont(42);
   Graph_delta_A_vs_p1003->GetYaxis()->SetTitleSize(0.04);
   Graph_delta_A_vs_p1003->GetYaxis()->SetTitleOffset(1.1);
   Graph_delta_A_vs_p1003->GetYaxis()->SetTitleFont(42);
   Graph_delta_A_vs_p1003->GetZaxis()->SetLabelFont(42);
   Graph_delta_A_vs_p1003->GetZaxis()->SetTitleOffset(1);
   Graph_delta_A_vs_p1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_delta_A_vs_p1003);
   
   
   TF1 *pol01004 = new TF1("pol0","pol0",-33,3069, TF1::EAddToList::kNo);
   pol01004->SetFillColor(19);
   pol01004->SetFillStyle(0);
   pol01004->SetLineColor(2);
   pol01004->SetLineWidth(2);
   pol01004->SetChisquare(24.0272);
   pol01004->SetNDF(14);
   pol01004->GetXaxis()->SetLabelFont(42);
   pol01004->GetXaxis()->SetTitleOffset(1);
   pol01004->GetXaxis()->SetTitleFont(42);
   pol01004->GetYaxis()->SetLabelFont(42);
   pol01004->GetYaxis()->SetTitleFont(42);
   pol01004->SetParameter(0,1.681438);
   pol01004->SetParError(0,0.01815088);
   pol01004->SetParLimits(0,0,0);
   pol01004->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01004);
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
   entry=leg->AddEntry("pol0","Fit: #LT#delta'#GT = 1.68
#pm0.02
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
