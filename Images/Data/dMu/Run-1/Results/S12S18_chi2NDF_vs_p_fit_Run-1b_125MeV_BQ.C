void S12S18_chi2NDF_vs_p_fit_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  8 14:22:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(462.8522,-0.8323145,3034.329,2.917686);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12S18_chi2NDF_vs_p_fx1011[22] = {
   367.2357,
   456.7094,
   570.1064,
   694.7384,
   815.8181,
   938.6515,
   1062.74,
   1188.098,
   1312.711,
   1435.779,
   1562.01,
   1685.105,
   1810.597,
   1935.076,
   2060.311,
   2184.992,
   2309.087,
   2433.142,
   2559.748,
   2678.663,
   2780.904,
   2886.857};
   Double_t S12S18_chi2NDF_vs_p_fy1011[22] = {
   0.9766394,
   0.7815365,
   0.808746,
   1.096379,
   1.363094,
   0.8336631,
   1.478884,
   1.255801,
   0.9042647,
   0.8528443,
   1.259959,
   0.8159852,
   0.5620402,
   0.8517534,
   0.5094042,
   1.028307,
   1.117524,
   1.380927,
   1.396086,
   1.072433,
   1.557321,
   1.876053};
   Double_t S12S18_chi2NDF_vs_p_fex1011[22] = {
   0.1835482,
   0.09181292,
   0.06165579,
   0.04212079,
   0.03405696,
   0.03070085,
   0.0292026,
   0.02820956,
   0.02864864,
   0.02884614,
   0.0309262,
   0.03266457,
   0.03671056,
   0.04027293,
   0.04611049,
   0.05082832,
   0.0587242,
   0.07083069,
   0.08409929,
   0.09634159,
   0.1950596,
   1.250899};
   Double_t S12S18_chi2NDF_vs_p_fey1011[22] = {
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
   TGraphErrors *gre = new TGraphErrors(22,S12S18_chi2NDF_vs_p_fx1011,S12S18_chi2NDF_vs_p_fy1011,S12S18_chi2NDF_vs_p_fex1011,S12S18_chi2NDF_vs_p_fey1011);
   gre->SetName("S12S18_chi2NDF_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_chi2NDF_vs_p1011 = new TH1F("Graph_S12S18_chi2NDF_vs_p1011","",100,114.9465,3140.214);
   Graph_S12S18_chi2NDF_vs_p1011->SetMinimum(-0.4573144);
   Graph_S12S18_chi2NDF_vs_p1011->SetMaximum(2.542686);
   Graph_S12S18_chi2NDF_vs_p1011->SetDirectory(0);
   Graph_S12S18_chi2NDF_vs_p1011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12S18_chi2NDF_vs_p1011->SetLineColor(ci);
   Graph_S12S18_chi2NDF_vs_p1011->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12S18_chi2NDF_vs_p1011->GetXaxis()->SetRange(21,88);
   Graph_S12S18_chi2NDF_vs_p1011->GetXaxis()->CenterTitle(true);
   Graph_S12S18_chi2NDF_vs_p1011->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_chi2NDF_vs_p1011->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_chi2NDF_vs_p1011->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_chi2NDF_vs_p1011->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_chi2NDF_vs_p1011->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 125 MeV");
   Graph_S12S18_chi2NDF_vs_p1011->GetYaxis()->CenterTitle(true);
   Graph_S12S18_chi2NDF_vs_p1011->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_chi2NDF_vs_p1011->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_chi2NDF_vs_p1011->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_chi2NDF_vs_p1011->GetYaxis()->SetTitleOffset(1.1);
   Graph_S12S18_chi2NDF_vs_p1011->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_chi2NDF_vs_p1011->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_chi2NDF_vs_p1011->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_chi2NDF_vs_p1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_chi2NDF_vs_p1011);
   
   
   TF1 *pol01012 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01012->SetFillColor(19);
   pol01012->SetFillStyle(0);
   pol01012->SetLineColor(2);
   pol01012->SetLineWidth(2);
   pol01012->SetChisquare(1.333695);
   pol01012->SetNDF(15);
   pol01012->GetXaxis()->SetLabelFont(42);
   pol01012->GetXaxis()->SetTitleOffset(1);
   pol01012->GetXaxis()->SetTitleFont(42);
   pol01012->GetYaxis()->SetLabelFont(42);
   pol01012->GetYaxis()->SetTitleFont(42);
   pol01012->SetParameter(0,1.042686);
   pol01012->SetParError(0,0.07454572);
   pol01012->SetParLimits(0,0,0);
   pol01012->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01012);
   gre->Draw("apl");
   
   TLegend *leg = new TLegend(0.41,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12S18_chi2NDF_vs_p","Run-1b","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#chi^{2}/NDF#GT = 1.04
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
