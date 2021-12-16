void S12S18_chi2NDF_vs_p_fit_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  8 14:22:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(462.7061,-0.814798,3034.515,2.935202);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12S18_chi2NDF_vs_p_fx1017[22] = {
   367.051,
   457.0974,
   570.1811,
   694.8088,
   815.8621,
   938.5384,
   1062.838,
   1188.304,
   1312.633,
   1435.871,
   1561.971,
   1685.2,
   1810.579,
   1935.045,
   2060.276,
   2184.955,
   2309.048,
   2433.116,
   2559.624,
   2678.406,
   2781.157,
   2887.23};
   Double_t S12S18_chi2NDF_vs_p_fy1017[22] = {
   0.7766172,
   1.147115,
   1.068831,
   1.226513,
   1.052506,
   1.487041,
   2.071586,
   0.6949485,
   1.433277,
   0.7364542,
   0.8030826,
   1.144107,
   1.078649,
   1.107742,
   1.059504,
   1.127779,
   0.605906,
   0.9152851,
   1.030341,
   0.6150247,
   0.8707826,
   1.770615};
   Double_t S12S18_chi2NDF_vs_p_fex1017[22] = {
   0.157396,
   0.07733575,
   0.05143223,
   0.03551066,
   0.02849384,
   0.02573646,
   0.02436904,
   0.02364648,
   0.02402267,
   0.02416336,
   0.02602274,
   0.0274188,
   0.03095359,
   0.0338914,
   0.0388552,
   0.04300123,
   0.04965168,
   0.05984093,
   0.07146685,
   0.08238563,
   0.1688844,
   1.045133};
   Double_t S12S18_chi2NDF_vs_p_fey1017[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,S12S18_chi2NDF_vs_p_fx1017,S12S18_chi2NDF_vs_p_fy1017,S12S18_chi2NDF_vs_p_fex1017,S12S18_chi2NDF_vs_p_fey1017);
   gre->SetName("S12S18_chi2NDF_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_chi2NDF_vs_p1017 = new TH1F("Graph_S12S18_chi2NDF_vs_p1017","",100,114.7555,3140.413);
   Graph_S12S18_chi2NDF_vs_p1017->SetMinimum(-0.4397979);
   Graph_S12S18_chi2NDF_vs_p1017->SetMaximum(2.560202);
   Graph_S12S18_chi2NDF_vs_p1017->SetDirectory(0);
   Graph_S12S18_chi2NDF_vs_p1017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12S18_chi2NDF_vs_p1017->SetLineColor(ci);
   Graph_S12S18_chi2NDF_vs_p1017->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12S18_chi2NDF_vs_p1017->GetXaxis()->SetRange(21,88);
   Graph_S12S18_chi2NDF_vs_p1017->GetXaxis()->CenterTitle(true);
   Graph_S12S18_chi2NDF_vs_p1017->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_chi2NDF_vs_p1017->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_chi2NDF_vs_p1017->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_chi2NDF_vs_p1017->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_chi2NDF_vs_p1017->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 125 MeV");
   Graph_S12S18_chi2NDF_vs_p1017->GetYaxis()->CenterTitle(true);
   Graph_S12S18_chi2NDF_vs_p1017->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_chi2NDF_vs_p1017->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_chi2NDF_vs_p1017->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_chi2NDF_vs_p1017->GetYaxis()->SetTitleOffset(1.1);
   Graph_S12S18_chi2NDF_vs_p1017->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_chi2NDF_vs_p1017->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_chi2NDF_vs_p1017->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_chi2NDF_vs_p1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_chi2NDF_vs_p1017);
   
   
   TF1 *pol01018 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01018->SetFillColor(19);
   pol01018->SetFillStyle(0);
   pol01018->SetLineColor(2);
   pol01018->SetLineWidth(2);
   pol01018->SetChisquare(2.089335);
   pol01018->SetNDF(15);
   pol01018->GetXaxis()->SetLabelFont(42);
   pol01018->GetXaxis()->SetTitleOffset(1);
   pol01018->GetXaxis()->SetTitleFont(42);
   pol01018->GetYaxis()->SetLabelFont(42);
   pol01018->GetYaxis()->SetTitleFont(42);
   pol01018->SetParameter(0,1.060202);
   pol01018->SetParError(0,0.0933036);
   pol01018->SetParLimits(0,0,0);
   pol01018->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01018);
   gre->Draw("apl");
   
   TLegend *leg = new TLegend(0.41,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12S18_chi2NDF_vs_p","Run-1c","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#chi^{2}/NDF#GT = 1.06
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
