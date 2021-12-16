void S18_chi2NDF_vs_p_fit_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  8 14:22:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(496.5205,-0.9045081,3027.918,2.845492);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S18_chi2NDF_vs_p_fx1015[22] = {
   367.0173,
   457.2104,
   570.0374,
   694.4612,
   815.6827,
   938.5171,
   1062.885,
   1188.2,
   1312.605,
   1435.72,
   1562.001,
   1685.025,
   1810.514,
   1934.906,
   2060.262,
   2184.773,
   2308.971,
   2433.427,
   2559.674,
   2677.991,
   2781.684,
   2884.375};
   Double_t S18_chi2NDF_vs_p_fy1015[22] = {
   1.150863,
   0.9217589,
   0.9920219,
   0.7599499,
   0.7154145,
   1.516205,
   1.18499,
   0.751244,
   1.439188,
   0.5522747,
   0.7407795,
   0.8763213,
   1.12533,
   0.8632308,
   1.332993,
   1.127218,
   0.8610684,
   1.035463,
   0.6202112,
   0.7859407,
   0.8146972,
   5.139303};
   Double_t S18_chi2NDF_vs_p_fex1015[22] = {
   0.2151465,
   0.1079987,
   0.0715069,
   0.05014894,
   0.04063452,
   0.03685518,
   0.03488971,
   0.03392339,
   0.03470107,
   0.03500905,
   0.03780692,
   0.04004255,
   0.04550979,
   0.04999256,
   0.05762843,
   0.06384773,
   0.07415466,
   0.08977885,
   0.1061248,
   0.1233522,
   0.2631774,
   1.230174};
   Double_t S18_chi2NDF_vs_p_fey1015[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,S18_chi2NDF_vs_p_fx1015,S18_chi2NDF_vs_p_fy1015,S18_chi2NDF_vs_p_fex1015,S18_chi2NDF_vs_p_fey1015);
   gre->SetName("S18_chi2NDF_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_chi2NDF_vs_p1015 = new TH1F("Graph_S18_chi2NDF_vs_p1015","",100,114.9218,3137.486);
   Graph_S18_chi2NDF_vs_p1015->SetMinimum(-0.529508);
   Graph_S18_chi2NDF_vs_p1015->SetMaximum(2.470492);
   Graph_S18_chi2NDF_vs_p1015->SetDirectory(0);
   Graph_S18_chi2NDF_vs_p1015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S18_chi2NDF_vs_p1015->SetLineColor(ci);
   Graph_S18_chi2NDF_vs_p1015->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_chi2NDF_vs_p1015->GetXaxis()->SetRange(22,88);
   Graph_S18_chi2NDF_vs_p1015->GetXaxis()->CenterTitle(true);
   Graph_S18_chi2NDF_vs_p1015->GetXaxis()->SetLabelFont(42);
   Graph_S18_chi2NDF_vs_p1015->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_chi2NDF_vs_p1015->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_chi2NDF_vs_p1015->GetXaxis()->SetTitleFont(42);
   Graph_S18_chi2NDF_vs_p1015->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 125 MeV");
   Graph_S18_chi2NDF_vs_p1015->GetYaxis()->CenterTitle(true);
   Graph_S18_chi2NDF_vs_p1015->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_chi2NDF_vs_p1015->GetYaxis()->SetLabelFont(42);
   Graph_S18_chi2NDF_vs_p1015->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_chi2NDF_vs_p1015->GetYaxis()->SetTitleOffset(1.1);
   Graph_S18_chi2NDF_vs_p1015->GetYaxis()->SetTitleFont(42);
   Graph_S18_chi2NDF_vs_p1015->GetZaxis()->SetLabelFont(42);
   Graph_S18_chi2NDF_vs_p1015->GetZaxis()->SetTitleOffset(1);
   Graph_S18_chi2NDF_vs_p1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_chi2NDF_vs_p1015);
   
   
   TF1 *pol01016 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01016->SetFillColor(19);
   pol01016->SetFillStyle(0);
   pol01016->SetLineColor(2);
   pol01016->SetLineWidth(2);
   pol01016->SetChisquare(1.277565);
   pol01016->SetNDF(15);
   pol01016->GetXaxis()->SetLabelFont(42);
   pol01016->GetXaxis()->SetTitleOffset(1);
   pol01016->GetXaxis()->SetTitleFont(42);
   pol01016->GetYaxis()->SetLabelFont(42);
   pol01016->GetYaxis()->SetTitleFont(42);
   pol01016->SetParameter(0,0.970492);
   pol01016->SetParError(0,0.07296016);
   pol01016->SetParLimits(0,0,0);
   pol01016->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01016);
   gre->Draw("apl");
   
   TLegend *leg = new TLegend(0.41,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S18_chi2NDF_vs_p","Run-1c","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#chi^{2}/NDF#GT = 0.97
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
