void S12S18_chi2NDF_vs_p_fit_Run-1d_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 12:17:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(471.2007,-0.8254375,3017.767,2.924563);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12S18_chi2NDF_vs_p_fx1023[11] = {
   456.1407,
   654.522,
   883.9024,
   1127.365,
   1373.276,
   1619.898,
   1866.765,
   2116.081,
   2359.447,
   2607.574,
   2781.592};
   Double_t S12S18_chi2NDF_vs_p_fy1023[11] = {
   0.9298292,
   0.9061208,
   0.9052508,
   1.144557,
   0.8984663,
   1.298962,
   0.8459436,
   0.727793,
   1.381652,
   0.8094194,
   1.496195};
   Double_t S12S18_chi2NDF_vs_p_fex1023[11] = {
   0.05661455,
   0.03997354,
   0.02675629,
   0.02434376,
   0.02403286,
   0.02662535,
   0.03248723,
   0.04093049,
   0.05375175,
   0.0746232,
   0.1234491};
   Double_t S12S18_chi2NDF_vs_p_fey1023[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,S12S18_chi2NDF_vs_p_fx1023,S12S18_chi2NDF_vs_p_fy1023,S12S18_chi2NDF_vs_p_fex1023,S12S18_chi2NDF_vs_p_fey1023);
   gre->SetName("S12S18_chi2NDF_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_chi2NDF_vs_p1023 = new TH1F("Graph_S12S18_chi2NDF_vs_p1023","",100,223.521,3014.278);
   Graph_S12S18_chi2NDF_vs_p1023->SetMinimum(-0.4504375);
   Graph_S12S18_chi2NDF_vs_p1023->SetMaximum(2.549562);
   Graph_S12S18_chi2NDF_vs_p1023->SetDirectory(0);
   Graph_S12S18_chi2NDF_vs_p1023->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12S18_chi2NDF_vs_p1023->SetLineColor(ci);
   Graph_S12S18_chi2NDF_vs_p1023->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12S18_chi2NDF_vs_p1023->GetXaxis()->SetRange(19,91);
   Graph_S12S18_chi2NDF_vs_p1023->GetXaxis()->CenterTitle(true);
   Graph_S12S18_chi2NDF_vs_p1023->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_chi2NDF_vs_p1023->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_chi2NDF_vs_p1023->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_chi2NDF_vs_p1023->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_chi2NDF_vs_p1023->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 250 MeV");
   Graph_S12S18_chi2NDF_vs_p1023->GetYaxis()->CenterTitle(true);
   Graph_S12S18_chi2NDF_vs_p1023->GetYaxis()->SetNdivisions(4000510);
   Graph_S12S18_chi2NDF_vs_p1023->GetYaxis()->SetLabelFont(42);
   Graph_S12S18_chi2NDF_vs_p1023->GetYaxis()->SetTitleSize(0.04);
   Graph_S12S18_chi2NDF_vs_p1023->GetYaxis()->SetTitleOffset(1.1);
   Graph_S12S18_chi2NDF_vs_p1023->GetYaxis()->SetTitleFont(42);
   Graph_S12S18_chi2NDF_vs_p1023->GetZaxis()->SetLabelFont(42);
   Graph_S12S18_chi2NDF_vs_p1023->GetZaxis()->SetTitleOffset(1);
   Graph_S12S18_chi2NDF_vs_p1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12S18_chi2NDF_vs_p1023);
   
   
   TF1 *pol01024 = new TF1("pol0","pol0",1000,2500, TF1::EAddToList::kNo);
   pol01024->SetFillColor(19);
   pol01024->SetFillStyle(0);
   pol01024->SetLineColor(2);
   pol01024->SetLineWidth(2);
   pol01024->SetChisquare(0.3493344);
   pol01024->SetNDF(5);
   pol01024->GetXaxis()->SetLabelFont(42);
   pol01024->GetXaxis()->SetTitleOffset(1);
   pol01024->GetXaxis()->SetTitleFont(42);
   pol01024->GetYaxis()->SetLabelFont(42);
   pol01024->GetYaxis()->SetTitleFont(42);
   pol01024->SetParameter(0,1.049562);
   pol01024->SetParError(0,0.1079096);
   pol01024->SetParLimits(0,0,0);
   pol01024->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01024);
   gre->Draw("apl");
   
   TLegend *leg = new TLegend(0.41,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12S18_chi2NDF_vs_p","Run-1d","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#chi^{2}/NDF#GT = 1.05
#pm0.1
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
