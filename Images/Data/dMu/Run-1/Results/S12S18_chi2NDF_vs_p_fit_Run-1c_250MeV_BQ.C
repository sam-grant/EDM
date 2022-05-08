void S12S18_chi2NDF_vs_p_fit_Run-1c_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 12:17:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(471.2072,-0.7147906,3017.714,3.035209);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12S18_chi2NDF_vs_p_fx1017[11] = {
   456.169,
   654.5552,
   883.9874,
   1127.416,
   1373.27,
   1619.964,
   1866.887,
   2116.045,
   2359.597,
   2607.039,
   2781.499};
   Double_t S12S18_chi2NDF_vs_p_fy1017[11] = {
   1.174199,
   0.8590662,
   1.274243,
   1.658187,
   1.210202,
   0.8652879,
   1.478886,
   1.176063,
   0.5726305,
   0.8835857,
   0.8081686};
   Double_t S12S18_chi2NDF_vs_p_fex1017[11] = {
   0.07806059,
   0.05494614,
   0.03668293,
   0.03331732,
   0.03291709,
   0.0364692,
   0.04438718,
   0.0559475,
   0.07338766,
   0.102104,
   0.1694422};
   Double_t S12S18_chi2NDF_vs_p_fey1017[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,S12S18_chi2NDF_vs_p_fx1017,S12S18_chi2NDF_vs_p_fy1017,S12S18_chi2NDF_vs_p_fex1017,S12S18_chi2NDF_vs_p_fey1017);
   gre->SetName("S12S18_chi2NDF_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_chi2NDF_vs_p1017 = new TH1F("Graph_S12S18_chi2NDF_vs_p1017","",100,223.5332,3014.226);
   Graph_S12S18_chi2NDF_vs_p1017->SetMinimum(-0.3397905);
   Graph_S12S18_chi2NDF_vs_p1017->SetMaximum(2.660209);
   Graph_S12S18_chi2NDF_vs_p1017->SetDirectory(0);
   Graph_S12S18_chi2NDF_vs_p1017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12S18_chi2NDF_vs_p1017->SetLineColor(ci);
   Graph_S12S18_chi2NDF_vs_p1017->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12S18_chi2NDF_vs_p1017->GetXaxis()->SetRange(19,91);
   Graph_S12S18_chi2NDF_vs_p1017->GetXaxis()->CenterTitle(true);
   Graph_S12S18_chi2NDF_vs_p1017->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_chi2NDF_vs_p1017->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_chi2NDF_vs_p1017->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_chi2NDF_vs_p1017->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_chi2NDF_vs_p1017->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 250 MeV");
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
   
   
   TF1 *pol01018 = new TF1("pol0","pol0",1000,2500, TF1::EAddToList::kNo);
   pol01018->SetFillColor(19);
   pol01018->SetFillStyle(0);
   pol01018->SetLineColor(2);
   pol01018->SetLineWidth(2);
   pol01018->SetChisquare(0.7845152);
   pol01018->SetNDF(5);
   pol01018->GetXaxis()->SetLabelFont(42);
   pol01018->GetXaxis()->SetTitleOffset(1);
   pol01018->GetXaxis()->SetTitleFont(42);
   pol01018->GetYaxis()->SetLabelFont(42);
   pol01018->GetYaxis()->SetTitleFont(42);
   pol01018->SetParameter(0,1.160209);
   pol01018->SetParError(0,0.1617112);
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
   entry=leg->AddEntry("pol0","#LT#chi^{2}/NDF#GT = 1.16
#pm0.2
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
