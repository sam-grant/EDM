void S12_chi2NDF_vs_p_fit_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  8 14:22:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(462.8422,-0.9229209,3033.559,2.827079);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_chi2NDF_vs_p_fx1019[22] = {
   367.2264,
   456.6616,
   570.2511,
   695.0728,
   815.9922,
   938.5583,
   1062.66,
   1188.291,
   1312.787,
   1435.903,
   1561.974,
   1685.264,
   1810.607,
   1935.13,
   2060.293,
   2185.026,
   2309.146,
   2432.958,
   2559.535,
   2679.195,
   2781.14,
   2886.432};
   Double_t S12_chi2NDF_vs_p_fy1019[22] = {
   0.5767726,
   0.9690145,
   1.349918,
   0.6970472,
   1.214469,
   0.9545405,
   0.7380052,
   1.197589,
   1.047782,
   1.260327,
   0.8347273,
   0.9554534,
   0.9173097,
   0.4770884,
   0.6158979,
   1.217143,
   0.917417,
   1.449509,
   0.8298889,
   0.6061196,
   0.8809619,
   5.873862};
   Double_t S12_chi2NDF_vs_p_fex1019[22] = {
   0.1560151,
   0.07824154,
   0.05252292,
   0.03553039,
   0.02848522,
   0.025669,
   0.02434069,
   0.02350631,
   0.02380413,
   0.02386992,
   0.02563485,
   0.0268977,
   0.03016952,
   0.03304359,
   0.03766603,
   0.04149162,
   0.04786816,
   0.05746284,
   0.06891139,
   0.07858218,
   0.1570593,
   0.9491119};
   Double_t S12_chi2NDF_vs_p_fey1019[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,S12_chi2NDF_vs_p_fx1019,S12_chi2NDF_vs_p_fy1019,S12_chi2NDF_vs_p_fex1019,S12_chi2NDF_vs_p_fey1019);
   gre->SetName("S12_chi2NDF_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_chi2NDF_vs_p1019 = new TH1F("Graph_S12_chi2NDF_vs_p1019","",100,115.0394,3139.412);
   Graph_S12_chi2NDF_vs_p1019->SetMinimum(-0.5479208);
   Graph_S12_chi2NDF_vs_p1019->SetMaximum(2.452079);
   Graph_S12_chi2NDF_vs_p1019->SetDirectory(0);
   Graph_S12_chi2NDF_vs_p1019->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12_chi2NDF_vs_p1019->SetLineColor(ci);
   Graph_S12_chi2NDF_vs_p1019->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_chi2NDF_vs_p1019->GetXaxis()->SetRange(21,88);
   Graph_S12_chi2NDF_vs_p1019->GetXaxis()->CenterTitle(true);
   Graph_S12_chi2NDF_vs_p1019->GetXaxis()->SetLabelFont(42);
   Graph_S12_chi2NDF_vs_p1019->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_chi2NDF_vs_p1019->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_chi2NDF_vs_p1019->GetXaxis()->SetTitleFont(42);
   Graph_S12_chi2NDF_vs_p1019->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 125 MeV");
   Graph_S12_chi2NDF_vs_p1019->GetYaxis()->CenterTitle(true);
   Graph_S12_chi2NDF_vs_p1019->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_chi2NDF_vs_p1019->GetYaxis()->SetLabelFont(42);
   Graph_S12_chi2NDF_vs_p1019->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_chi2NDF_vs_p1019->GetYaxis()->SetTitleOffset(1.1);
   Graph_S12_chi2NDF_vs_p1019->GetYaxis()->SetTitleFont(42);
   Graph_S12_chi2NDF_vs_p1019->GetZaxis()->SetLabelFont(42);
   Graph_S12_chi2NDF_vs_p1019->GetZaxis()->SetTitleOffset(1);
   Graph_S12_chi2NDF_vs_p1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_chi2NDF_vs_p1019);
   
   
   TF1 *pol01020 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01020->SetFillColor(19);
   pol01020->SetFillStyle(0);
   pol01020->SetLineColor(2);
   pol01020->SetLineWidth(2);
   pol01020->SetChisquare(1.086273);
   pol01020->SetNDF(15);
   pol01020->GetXaxis()->SetLabelFont(42);
   pol01020->GetXaxis()->SetTitleOffset(1);
   pol01020->GetXaxis()->SetTitleFont(42);
   pol01020->GetYaxis()->SetLabelFont(42);
   pol01020->GetYaxis()->SetTitleFont(42);
   pol01020->SetParameter(0,0.9520792);
   pol01020->SetParError(0,0.06727659);
   pol01020->SetParLimits(0,0,0);
   pol01020->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01020);
   gre->Draw("apl");
   
   TLegend *leg = new TLegend(0.41,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12_chi2NDF_vs_p","Run-1d","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#chi^{2}/NDF#GT = 0.952
#pm0.07
","lpf");
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
