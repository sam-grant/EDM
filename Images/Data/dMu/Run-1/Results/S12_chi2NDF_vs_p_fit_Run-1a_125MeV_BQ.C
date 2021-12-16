void S12_chi2NDF_vs_p_fit_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  8 14:22:08 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(462.3259,-0.8630216,3036.37,2.886978);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_chi2NDF_vs_p_fx1001[22] = {
   366.7752,
   456.7644,
   570.6057,
   695.308,
   816.0199,
   938.5594,
   1062.714,
   1188.408,
   1312.768,
   1435.939,
   1561.836,
   1685.36,
   1810.677,
   1935.171,
   2060.181,
   2185.077,
   2309.281,
   2432.898,
   2559.531,
   2678.787,
   2781.468,
   2888.259};
   Double_t S12_chi2NDF_vs_p_fy1001[22] = {
   1.200782,
   0.6996111,
   0.5659878,
   0.7445525,
   0.7759255,
   0.8943206,
   0.8997789,
   1.296831,
   1.457429,
   1.145152,
   1.085448,
   1.289952,
   1.200752,
   0.9391065,
   0.4979404,
   0.8490005,
   0.6911705,
   1.433716,
   0.8248622,
   0.9102688,
   0.9400411,
   inf};
   Double_t S12_chi2NDF_vs_p_fex1001[22] = {
   0.3450021,
   0.157345,
   0.104901,
   0.07063794,
   0.05638435,
   0.05072089,
   0.0480066,
   0.04637203,
   0.04670397,
   0.04691625,
   0.05025981,
   0.05269888,
   0.05914443,
   0.06453306,
   0.07359379,
   0.08120261,
   0.09320425,
   0.1113982,
   0.1334389,
   0.1534676,
   0.3117639,
   1.744149};
   Double_t S12_chi2NDF_vs_p_fey1001[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,S12_chi2NDF_vs_p_fx1001,S12_chi2NDF_vs_p_fy1001,S12_chi2NDF_vs_p_fex1001,S12_chi2NDF_vs_p_fey1001);
   gre->SetName("S12_chi2NDF_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_chi2NDF_vs_p1001 = new TH1F("Graph_S12_chi2NDF_vs_p1001","",100,114.0729,3142.36);
   Graph_S12_chi2NDF_vs_p1001->SetMinimum(-0.4880216);
   Graph_S12_chi2NDF_vs_p1001->SetMaximum(2.511978);
   Graph_S12_chi2NDF_vs_p1001->SetDirectory(0);
   Graph_S12_chi2NDF_vs_p1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12_chi2NDF_vs_p1001->SetLineColor(ci);
   Graph_S12_chi2NDF_vs_p1001->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_chi2NDF_vs_p1001->GetXaxis()->SetRange(21,88);
   Graph_S12_chi2NDF_vs_p1001->GetXaxis()->CenterTitle(true);
   Graph_S12_chi2NDF_vs_p1001->GetXaxis()->SetLabelFont(42);
   Graph_S12_chi2NDF_vs_p1001->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_chi2NDF_vs_p1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_chi2NDF_vs_p1001->GetXaxis()->SetTitleFont(42);
   Graph_S12_chi2NDF_vs_p1001->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 125 MeV");
   Graph_S12_chi2NDF_vs_p1001->GetYaxis()->CenterTitle(true);
   Graph_S12_chi2NDF_vs_p1001->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_chi2NDF_vs_p1001->GetYaxis()->SetLabelFont(42);
   Graph_S12_chi2NDF_vs_p1001->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_chi2NDF_vs_p1001->GetYaxis()->SetTitleOffset(1.1);
   Graph_S12_chi2NDF_vs_p1001->GetYaxis()->SetTitleFont(42);
   Graph_S12_chi2NDF_vs_p1001->GetZaxis()->SetLabelFont(42);
   Graph_S12_chi2NDF_vs_p1001->GetZaxis()->SetTitleOffset(1);
   Graph_S12_chi2NDF_vs_p1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_chi2NDF_vs_p1001);
   
   
   TF1 *pol01002 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01002->SetFillColor(19);
   pol01002->SetFillStyle(0);
   pol01002->SetLineColor(2);
   pol01002->SetLineWidth(2);
   pol01002->SetChisquare(1.120004);
   pol01002->SetNDF(15);
   pol01002->GetXaxis()->SetLabelFont(42);
   pol01002->GetXaxis()->SetTitleOffset(1);
   pol01002->GetXaxis()->SetTitleFont(42);
   pol01002->GetYaxis()->SetLabelFont(42);
   pol01002->GetYaxis()->SetTitleFont(42);
   pol01002->SetParameter(0,1.011978);
   pol01002->SetParError(0,0.06831311);
   pol01002->SetParLimits(0,0,0);
   pol01002->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01002);
   gre->Draw("apl");
   
   TLegend *leg = new TLegend(0.41,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12_chi2NDF_vs_p","Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#chi^{2}/NDF#GT = 1.01
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
