void S18_chi2NDF_vs_p_fit_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  8 14:22:08 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(496.0523,-0.7671279,3028.099,2.982872);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S18_chi2NDF_vs_p_fx1003[22] = {
   366.6108,
   457.1028,
   570.2676,
   694.5045,
   815.6442,
   938.5045,
   1062.791,
   1188.168,
   1312.631,
   1435.783,
   1561.985,
   1685.031,
   1810.403,
   1935.07,
   2060.344,
   2184.717,
   2309.137,
   2433.457,
   2559.791,
   2678.02,
   2781.349,
   2884.595};
   Double_t S18_chi2NDF_vs_p_fy1003[22] = {
   2.367263,
   0.8578513,
   1.059764,
   0.5182124,
   1.1574,
   1.323507,
   1.242564,
   1.395353,
   1.275541,
   1.086098,
   1.232789,
   0.6778414,
   1.197035,
   0.9367662,
   1.170906,
   0.9833346,
   0.9246229,
   1.455932,
   0.533479,
   1.132784,
   1.390665,
   7.076192};
   Double_t S18_chi2NDF_vs_p_fex1003[22] = {
   0.3102122,
   0.1519888,
   0.1005352,
   0.06984739,
   0.05677918,
   0.05154475,
   0.04885287,
   0.04739523,
   0.04842386,
   0.04890634,
   0.05247658,
   0.05577436,
   0.06316181,
   0.06915618,
   0.07965764,
   0.08793112,
   0.1021086,
   0.1237632,
   0.1455347,
   0.1671362,
   0.3532232,
   1.155309};
   Double_t S18_chi2NDF_vs_p_fey1003[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,S18_chi2NDF_vs_p_fx1003,S18_chi2NDF_vs_p_fy1003,S18_chi2NDF_vs_p_fex1003,S18_chi2NDF_vs_p_fey1003);
   gre->SetName("S18_chi2NDF_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_chi2NDF_vs_p1003 = new TH1F("Graph_S18_chi2NDF_vs_p1003","",100,114.3557,3137.695);
   Graph_S18_chi2NDF_vs_p1003->SetMinimum(-0.3921279);
   Graph_S18_chi2NDF_vs_p1003->SetMaximum(2.607872);
   Graph_S18_chi2NDF_vs_p1003->SetDirectory(0);
   Graph_S18_chi2NDF_vs_p1003->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S18_chi2NDF_vs_p1003->SetLineColor(ci);
   Graph_S18_chi2NDF_vs_p1003->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_chi2NDF_vs_p1003->GetXaxis()->SetRange(22,88);
   Graph_S18_chi2NDF_vs_p1003->GetXaxis()->CenterTitle(true);
   Graph_S18_chi2NDF_vs_p1003->GetXaxis()->SetLabelFont(42);
   Graph_S18_chi2NDF_vs_p1003->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_chi2NDF_vs_p1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_chi2NDF_vs_p1003->GetXaxis()->SetTitleFont(42);
   Graph_S18_chi2NDF_vs_p1003->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 125 MeV");
   Graph_S18_chi2NDF_vs_p1003->GetYaxis()->CenterTitle(true);
   Graph_S18_chi2NDF_vs_p1003->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_chi2NDF_vs_p1003->GetYaxis()->SetLabelFont(42);
   Graph_S18_chi2NDF_vs_p1003->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_chi2NDF_vs_p1003->GetYaxis()->SetTitleOffset(1.1);
   Graph_S18_chi2NDF_vs_p1003->GetYaxis()->SetTitleFont(42);
   Graph_S18_chi2NDF_vs_p1003->GetZaxis()->SetLabelFont(42);
   Graph_S18_chi2NDF_vs_p1003->GetZaxis()->SetTitleOffset(1);
   Graph_S18_chi2NDF_vs_p1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_chi2NDF_vs_p1003);
   
   
   TF1 *pol01004 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01004->SetFillColor(19);
   pol01004->SetFillStyle(0);
   pol01004->SetLineColor(2);
   pol01004->SetLineWidth(2);
   pol01004->SetChisquare(0.9208409);
   pol01004->SetNDF(15);
   pol01004->GetXaxis()->SetLabelFont(42);
   pol01004->GetXaxis()->SetTitleOffset(1);
   pol01004->GetXaxis()->SetTitleFont(42);
   pol01004->GetYaxis()->SetLabelFont(42);
   pol01004->GetYaxis()->SetTitleFont(42);
   pol01004->SetParameter(0,1.107872);
   pol01004->SetParError(0,0.06194221);
   pol01004->SetParLimits(0,0,0);
   pol01004->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01004);
   gre->Draw("apl");
   
   TLegend *leg = new TLegend(0.41,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S18_chi2NDF_vs_p","Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#chi^{2}/NDF#GT = 1.11
#pm0.06
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
