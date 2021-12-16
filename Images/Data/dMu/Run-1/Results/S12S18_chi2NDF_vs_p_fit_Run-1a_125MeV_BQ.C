void S12S18_chi2NDF_vs_p_fit_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  8 14:22:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(496.2707,-0.8259863,3029.518,2.924014);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12S18_chi2NDF_vs_p_fx1005[22] = {
   366.6885,
   456.94,
   570.4296,
   694.9006,
   815.8333,
   938.5324,
   1062.751,
   1188.29,
   1312.702,
   1435.864,
   1561.907,
   1685.205,
   1810.549,
   1935.124,
   2060.256,
   2184.912,
   2309.216,
   2433.15,
   2559.65,
   2678.438,
   2781.416,
   2886.078};
   Double_t S12S18_chi2NDF_vs_p_fy1005[22] = {
   1.170152,
   0.9386781,
   0.9136243,
   0.478624,
   1.088395,
   1.407799,
   0.7137943,
   0.6898619,
   1.247568,
   1.405468,
   1.57578,
   0.8265659,
   1.194045,
   1.253331,
   0.8038479,
   0.8015276,
   0.6649709,
   1.152957,
   0.7853265,
   1.172983,
   1.35193,
   1.448736};
   Double_t S12S18_chi2NDF_vs_p_fex1005[22] = {
   0.2309951,
   0.1093191,
   0.07258434,
   0.04967013,
   0.04000918,
   0.03615285,
   0.0342411,
   0.033146,
   0.03361641,
   0.03385663,
   0.03629752,
   0.03830532,
   0.04317216,
   0.04718171,
   0.05405557,
   0.0596571,
   0.06883895,
   0.08280096,
   0.09835486,
   0.1130508,
   0.2337414,
   1.023868};
   Double_t S12S18_chi2NDF_vs_p_fey1005[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,S12S18_chi2NDF_vs_p_fx1005,S12S18_chi2NDF_vs_p_fy1005,S12S18_chi2NDF_vs_p_fex1005,S12S18_chi2NDF_vs_p_fey1005);
   gre->SetName("S12S18_chi2NDF_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_chi2NDF_vs_p1005 = new TH1F("Graph_S12S18_chi2NDF_vs_p1005","",100,114.3931,3139.166);
   Graph_S12S18_chi2NDF_vs_p1005->SetMinimum(-0.4509862);
   Graph_S12S18_chi2NDF_vs_p1005->SetMaximum(2.549014);
   Graph_S12S18_chi2NDF_vs_p1005->SetDirectory(0);
   Graph_S12S18_chi2NDF_vs_p1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12S18_chi2NDF_vs_p1005->SetLineColor(ci);
   Graph_S12S18_chi2NDF_vs_p1005->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12S18_chi2NDF_vs_p1005->GetXaxis()->SetRange(22,88);
   Graph_S12S18_chi2NDF_vs_p1005->GetXaxis()->CenterTitle(true);
   Graph_S12S18_chi2NDF_vs_p1005->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_chi2NDF_vs_p1005->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_chi2NDF_vs_p1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_chi2NDF_vs_p1005->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_chi2NDF_vs_p1005->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 125 MeV");
   Graph_S12S18_chi2NDF_vs_p1005->GetYaxis()->CenterTitle(true);
   Graph_S12S18_chi2NDF_vs_p1005->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_chi2NDF_vs_p1005->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_chi2NDF_vs_p1005->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_chi2NDF_vs_p1005->GetYaxis()->SetTitleOffset(1.1);
   Graph_S12S18_chi2NDF_vs_p1005->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_chi2NDF_vs_p1005->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_chi2NDF_vs_p1005->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_chi2NDF_vs_p1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_chi2NDF_vs_p1005);
   
   
   TF1 *pol01006 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01006->SetFillColor(19);
   pol01006->SetFillStyle(0);
   pol01006->SetLineColor(2);
   pol01006->SetLineWidth(2);
   pol01006->SetChisquare(1.292416);
   pol01006->SetNDF(15);
   pol01006->GetXaxis()->SetLabelFont(42);
   pol01006->GetXaxis()->SetTitleOffset(1);
   pol01006->GetXaxis()->SetTitleFont(42);
   pol01006->GetYaxis()->SetLabelFont(42);
   pol01006->GetYaxis()->SetTitleFont(42);
   pol01006->SetParameter(0,1.049014);
   pol01006->SetParError(0,0.07338301);
   pol01006->SetParLimits(0,0,0);
   pol01006->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01006);
   gre->Draw("apl");
   
   TLegend *leg = new TLegend(0.41,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12S18_chi2NDF_vs_p","Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#chi^{2}/NDF#GT = 1.05
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
