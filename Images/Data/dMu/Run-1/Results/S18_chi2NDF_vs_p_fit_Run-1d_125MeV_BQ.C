void S18_chi2NDF_vs_p_fit_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  8 14:22:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(496.8012,-0.8427488,3027.932,2.907251);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S18_chi2NDF_vs_p_fx1021[22] = {
   367.2526,
   457.422,
   569.9567,
   694.5039,
   815.7076,
   938.4818,
   1062.812,
   1188.157,
   1312.58,
   1435.625,
   1561.978,
   1684.876,
   1810.456,
   1934.89,
   2060.235,
   2184.761,
   2309.021,
   2433.199,
   2559.827,
   2677.84,
   2781.306,
   2884.655};
   Double_t S18_chi2NDF_vs_p_fy1021[22] = {
   0.3869076,
   0.7919788,
   0.7771941,
   0.9209159,
   1.281306,
   1.282334,
   1.028718,
   0.8164532,
   1.067132,
   0.7148725,
   1.049417,
   0.9928672,
   1.18194,
   0.9498707,
   1.285655,
   0.8062165,
   0.6236762,
   1.286201,
   1.124423,
   1.024936,
   1.117922,
   4.490936};
   Double_t S18_chi2NDF_vs_p_fex1021[22] = {
   0.15606,
   0.07784876,
   0.05150938,
   0.03611359,
   0.02931009,
   0.02657695,
   0.02519619,
   0.02445622,
   0.02503412,
   0.02524446,
   0.02724839,
   0.02892473,
   0.03296513,
   0.03615436,
   0.04161878,
   0.04617134,
   0.05378732,
   0.06532279,
   0.07707671,
   0.08880628,
   0.1895636,
   0.9802771};
   Double_t S18_chi2NDF_vs_p_fey1021[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,S18_chi2NDF_vs_p_fx1021,S18_chi2NDF_vs_p_fy1021,S18_chi2NDF_vs_p_fex1021,S18_chi2NDF_vs_p_fey1021);
   gre->SetName("S18_chi2NDF_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_chi2NDF_vs_p1021 = new TH1F("Graph_S18_chi2NDF_vs_p1021","",100,115.2427,3137.489);
   Graph_S18_chi2NDF_vs_p1021->SetMinimum(-0.4677488);
   Graph_S18_chi2NDF_vs_p1021->SetMaximum(2.532251);
   Graph_S18_chi2NDF_vs_p1021->SetDirectory(0);
   Graph_S18_chi2NDF_vs_p1021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S18_chi2NDF_vs_p1021->SetLineColor(ci);
   Graph_S18_chi2NDF_vs_p1021->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_chi2NDF_vs_p1021->GetXaxis()->SetRange(22,88);
   Graph_S18_chi2NDF_vs_p1021->GetXaxis()->CenterTitle(true);
   Graph_S18_chi2NDF_vs_p1021->GetXaxis()->SetLabelFont(42);
   Graph_S18_chi2NDF_vs_p1021->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_chi2NDF_vs_p1021->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_chi2NDF_vs_p1021->GetXaxis()->SetTitleFont(42);
   Graph_S18_chi2NDF_vs_p1021->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 125 MeV");
   Graph_S18_chi2NDF_vs_p1021->GetYaxis()->CenterTitle(true);
   Graph_S18_chi2NDF_vs_p1021->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_chi2NDF_vs_p1021->GetYaxis()->SetLabelFont(42);
   Graph_S18_chi2NDF_vs_p1021->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_chi2NDF_vs_p1021->GetYaxis()->SetTitleOffset(1.1);
   Graph_S18_chi2NDF_vs_p1021->GetYaxis()->SetTitleFont(42);
   Graph_S18_chi2NDF_vs_p1021->GetZaxis()->SetLabelFont(42);
   Graph_S18_chi2NDF_vs_p1021->GetZaxis()->SetTitleOffset(1);
   Graph_S18_chi2NDF_vs_p1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_chi2NDF_vs_p1021);
   
   
   TF1 *pol01022 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01022->SetFillColor(19);
   pol01022->SetFillStyle(0);
   pol01022->SetLineColor(2);
   pol01022->SetLineWidth(2);
   pol01022->SetChisquare(0.6594143);
   pol01022->SetNDF(15);
   pol01022->GetXaxis()->SetLabelFont(42);
   pol01022->GetXaxis()->SetTitleOffset(1);
   pol01022->GetXaxis()->SetTitleFont(42);
   pol01022->GetYaxis()->SetLabelFont(42);
   pol01022->GetYaxis()->SetTitleFont(42);
   pol01022->SetParameter(0,1.032251);
   pol01022->SetParError(0,0.05241717);
   pol01022->SetParLimits(0,0,0);
   pol01022->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01022);
   gre->Draw("apl");
   
   TLegend *leg = new TLegend(0.41,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S18_chi2NDF_vs_p","Run-1d","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#chi^{2}/NDF#GT = 1.03
#pm0.05
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
