void S18_chi2NDF_vs_p_fit_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  8 14:22:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(462.9306,-0.8474991,3032.834,2.902501);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S18_chi2NDF_vs_p_fx1009[22] = {
   367.4445,
   456.6744,
   569.9789,
   694.4389,
   815.6606,
   938.5876,
   1062.746,
   1187.917,
   1312.682,
   1435.616,
   1562.048,
   1684.958,
   1810.531,
   1934.89,
   2060.321,
   2184.823,
   2308.917,
   2433.332,
   2560.037,
   2678.052,
   2781.147,
   2885.139};
   Double_t S18_chi2NDF_vs_p_fy1009[22] = {
   1.059984,
   0.9717133,
   0.746464,
   0.8154614,
   1.378344,
   0.9423395,
   0.7599263,
   0.9384497,
   0.5829053,
   0.9762823,
   1.171302,
   0.9653349,
   0.5699877,
   0.7862575,
   0.618408,
   1.226508,
   0.8590603,
   1.852624,
   1.533874,
   1.27841,
   1.277424,
   2.515595};
   Double_t S18_chi2NDF_vs_p_fex1009[22] = {
   0.2553993,
   0.1283725,
   0.08555645,
   0.05917273,
   0.04836058,
   0.04376859,
   0.04168402,
   0.04033179,
   0.04122483,
   0.04165085,
   0.04471225,
   0.04754877,
   0.05370202,
   0.05912233,
   0.06807641,
   0.07513118,
   0.08716273,
   0.1058334,
   0.1243805,
   0.14237,
   0.2931026,
   1.562872};
   Double_t S18_chi2NDF_vs_p_fey1009[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,S18_chi2NDF_vs_p_fx1009,S18_chi2NDF_vs_p_fy1009,S18_chi2NDF_vs_p_fex1009,S18_chi2NDF_vs_p_fey1009);
   gre->SetName("S18_chi2NDF_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_chi2NDF_vs_p1009 = new TH1F("Graph_S18_chi2NDF_vs_p1009","",100,115.2378,3138.654);
   Graph_S18_chi2NDF_vs_p1009->SetMinimum(-0.4724991);
   Graph_S18_chi2NDF_vs_p1009->SetMaximum(2.527501);
   Graph_S18_chi2NDF_vs_p1009->SetDirectory(0);
   Graph_S18_chi2NDF_vs_p1009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S18_chi2NDF_vs_p1009->SetLineColor(ci);
   Graph_S18_chi2NDF_vs_p1009->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_chi2NDF_vs_p1009->GetXaxis()->SetRange(21,88);
   Graph_S18_chi2NDF_vs_p1009->GetXaxis()->CenterTitle(true);
   Graph_S18_chi2NDF_vs_p1009->GetXaxis()->SetLabelFont(42);
   Graph_S18_chi2NDF_vs_p1009->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_chi2NDF_vs_p1009->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_chi2NDF_vs_p1009->GetXaxis()->SetTitleFont(42);
   Graph_S18_chi2NDF_vs_p1009->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 125 MeV");
   Graph_S18_chi2NDF_vs_p1009->GetYaxis()->CenterTitle(true);
   Graph_S18_chi2NDF_vs_p1009->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_chi2NDF_vs_p1009->GetYaxis()->SetLabelFont(42);
   Graph_S18_chi2NDF_vs_p1009->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_chi2NDF_vs_p1009->GetYaxis()->SetTitleOffset(1.1);
   Graph_S18_chi2NDF_vs_p1009->GetYaxis()->SetTitleFont(42);
   Graph_S18_chi2NDF_vs_p1009->GetZaxis()->SetLabelFont(42);
   Graph_S18_chi2NDF_vs_p1009->GetZaxis()->SetTitleOffset(1);
   Graph_S18_chi2NDF_vs_p1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_chi2NDF_vs_p1009);
   
   
   TF1 *pol01010 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01010->SetFillColor(19);
   pol01010->SetFillStyle(0);
   pol01010->SetLineColor(2);
   pol01010->SetLineWidth(2);
   pol01010->SetChisquare(1.937749);
   pol01010->SetNDF(15);
   pol01010->GetXaxis()->SetLabelFont(42);
   pol01010->GetXaxis()->SetTitleOffset(1);
   pol01010->GetXaxis()->SetTitleFont(42);
   pol01010->GetYaxis()->SetLabelFont(42);
   pol01010->GetYaxis()->SetTitleFont(42);
   pol01010->SetParameter(0,1.027501);
   pol01010->SetParError(0,0.08985518);
   pol01010->SetParLimits(0,0,0);
   pol01010->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01010);
   gre->Draw("apl");
   
   TLegend *leg = new TLegend(0.41,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S18_chi2NDF_vs_p","Run-1b","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#chi^{2}/NDF#GT = 1.03
#pm0.09
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
