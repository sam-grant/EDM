void S18_chi2NDF_vs_p_fit_Run-1a_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 12:17:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(471.122,-0.8984255,3018.211,2.851575);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S18_chi2NDF_vs_p_fx1003[11] = {
   456.1582,
   653.9005,
   883.5294,
   1127.34,
   1373.07,
   1619.549,
   1866.691,
   2115.977,
   2359.683,
   2607.205,
   2781.75};
   Double_t S18_chi2NDF_vs_p_fy1003[11] = {
   0.7372589,
   0.6391604,
   0.9729052,
   1.254397,
   0.9838348,
   0.947605,
   0.464259,
   1.166425,
   1.042927,
   0.535665,
   1.354623};
   Double_t S18_chi2NDF_vs_p_fex1003[11] = {
   0.1558516,
   0.1097482,
   0.07461565,
   0.06792102,
   0.06754761,
   0.07503672,
   0.09225336,
   0.1164617,
   0.154189,
   0.2106078,
   0.3609038};
   Double_t S18_chi2NDF_vs_p_fey1003[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,S18_chi2NDF_vs_p_fx1003,S18_chi2NDF_vs_p_fy1003,S18_chi2NDF_vs_p_fex1003,S18_chi2NDF_vs_p_fey1003);
   gre->SetName("S18_chi2NDF_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_chi2NDF_vs_p1003 = new TH1F("Graph_S18_chi2NDF_vs_p1003","",100,223.3915,3014.722);
   Graph_S18_chi2NDF_vs_p1003->SetMinimum(-0.5234254);
   Graph_S18_chi2NDF_vs_p1003->SetMaximum(2.476575);
   Graph_S18_chi2NDF_vs_p1003->SetDirectory(0);
   Graph_S18_chi2NDF_vs_p1003->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S18_chi2NDF_vs_p1003->SetLineColor(ci);
   Graph_S18_chi2NDF_vs_p1003->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_chi2NDF_vs_p1003->GetXaxis()->SetRange(19,91);
   Graph_S18_chi2NDF_vs_p1003->GetXaxis()->CenterTitle(true);
   Graph_S18_chi2NDF_vs_p1003->GetXaxis()->SetLabelFont(42);
   Graph_S18_chi2NDF_vs_p1003->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_chi2NDF_vs_p1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_chi2NDF_vs_p1003->GetXaxis()->SetTitleFont(42);
   Graph_S18_chi2NDF_vs_p1003->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 250 MeV");
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
   
   
   TF1 *pol01004 = new TF1("pol0","pol0",1000,2500, TF1::EAddToList::kNo);
   pol01004->SetFillColor(19);
   pol01004->SetFillStyle(0);
   pol01004->SetLineColor(2);
   pol01004->SetLineWidth(2);
   pol01004->SetChisquare(0.3809902);
   pol01004->SetNDF(5);
   pol01004->GetXaxis()->SetLabelFont(42);
   pol01004->GetXaxis()->SetTitleOffset(1);
   pol01004->GetXaxis()->SetTitleFont(42);
   pol01004->GetYaxis()->SetLabelFont(42);
   pol01004->GetYaxis()->SetTitleFont(42);
   pol01004->SetParameter(0,0.9765746);
   pol01004->SetParError(0,0.1126928);
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
   entry=leg->AddEntry("pol0","#LT#chi^{2}/NDF#GT = 0.977
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
