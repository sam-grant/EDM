void S12_chi2NDF_vs_p_fit_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  8 14:22:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(466.5837,-0.7882279,3003.847,2.961772);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_chi2NDF_vs_p_fx1013[22] = {
   367.0912,
   456.9775,
   570.3352,
   695.1607,
   816.036,
   938.5588,
   1062.792,
   1188.402,
   1312.659,
   1436.008,
   1561.944,
   1685.355,
   1810.634,
   1935.163,
   2060.286,
   2185.107,
   2309.111,
   2432.867,
   2559.582,
   2678.741,
   2780.764,
   2889.945};
   Double_t S12_chi2NDF_vs_p_fy1013[22] = {
   1.329528,
   1.008622,
   0.6875288,
   1.323746,
   1.102629,
   1.164941,
   1.661625,
   1.102862,
   1.170317,
   0.7970521,
   1.191616,
   1.103644,
   0.9709623,
   1.314207,
   1.013678,
   0.9251664,
   0.6386919,
   1.230899,
   1.345926,
   0.6541365,
   1.357911,
   2.585097};
   Double_t S12_chi2NDF_vs_p_fex1013[22] = {
   0.2307802,
   0.1107898,
   0.07402972,
   0.05028522,
   0.03996554,
   0.0359552,
   0.03405148,
   0.0329787,
   0.03328915,
   0.03339202,
   0.03587261,
   0.03762182,
   0.04222444,
   0.04610221,
   0.05261229,
   0.05817227,
   0.06684824,
   0.08026796,
   0.09667362,
   0.1106825,
   0.2199447,
   1.555816};
   Double_t S12_chi2NDF_vs_p_fey1013[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,S12_chi2NDF_vs_p_fx1013,S12_chi2NDF_vs_p_fy1013,S12_chi2NDF_vs_p_fex1013,S12_chi2NDF_vs_p_fey1013);
   gre->SetName("S12_chi2NDF_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_chi2NDF_vs_p1013 = new TH1F("Graph_S12_chi2NDF_vs_p1013","",100,114.3965,3143.964);
   Graph_S12_chi2NDF_vs_p1013->SetMinimum(-0.4132279);
   Graph_S12_chi2NDF_vs_p1013->SetMaximum(2.586772);
   Graph_S12_chi2NDF_vs_p1013->SetDirectory(0);
   Graph_S12_chi2NDF_vs_p1013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12_chi2NDF_vs_p1013->SetLineColor(ci);
   Graph_S12_chi2NDF_vs_p1013->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_chi2NDF_vs_p1013->GetXaxis()->SetRange(21,87);
   Graph_S12_chi2NDF_vs_p1013->GetXaxis()->CenterTitle(true);
   Graph_S12_chi2NDF_vs_p1013->GetXaxis()->SetLabelFont(42);
   Graph_S12_chi2NDF_vs_p1013->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_chi2NDF_vs_p1013->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_chi2NDF_vs_p1013->GetXaxis()->SetTitleFont(42);
   Graph_S12_chi2NDF_vs_p1013->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 125 MeV");
   Graph_S12_chi2NDF_vs_p1013->GetYaxis()->CenterTitle(true);
   Graph_S12_chi2NDF_vs_p1013->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_chi2NDF_vs_p1013->GetYaxis()->SetLabelFont(42);
   Graph_S12_chi2NDF_vs_p1013->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_chi2NDF_vs_p1013->GetYaxis()->SetTitleOffset(1.1);
   Graph_S12_chi2NDF_vs_p1013->GetYaxis()->SetTitleFont(42);
   Graph_S12_chi2NDF_vs_p1013->GetZaxis()->SetLabelFont(42);
   Graph_S12_chi2NDF_vs_p1013->GetZaxis()->SetTitleOffset(1);
   Graph_S12_chi2NDF_vs_p1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_chi2NDF_vs_p1013);
   
   
   TF1 *pol01014 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01014->SetFillColor(19);
   pol01014->SetFillStyle(0);
   pol01014->SetLineColor(2);
   pol01014->SetLineWidth(2);
   pol01014->SetChisquare(1.011752);
   pol01014->SetNDF(15);
   pol01014->GetXaxis()->SetLabelFont(42);
   pol01014->GetXaxis()->SetTitleOffset(1);
   pol01014->GetXaxis()->SetTitleFont(42);
   pol01014->GetYaxis()->SetLabelFont(42);
   pol01014->GetYaxis()->SetTitleFont(42);
   pol01014->SetParameter(0,1.086772);
   pol01014->SetParError(0,0.0649279);
   pol01014->SetParLimits(0,0,0);
   pol01014->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01014);
   gre->Draw("apl");
   
   TLegend *leg = new TLegend(0.41,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12_chi2NDF_vs_p","Run-1c","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#chi^{2}/NDF#GT = 1.09
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
