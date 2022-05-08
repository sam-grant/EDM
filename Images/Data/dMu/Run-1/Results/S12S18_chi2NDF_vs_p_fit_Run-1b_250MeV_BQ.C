void S12S18_chi2NDF_vs_p_fit_Run-1b_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 12:17:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(470.8201,-0.8641665,3017.493,2.885834);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12S18_chi2NDF_vs_p_fx1011[11] = {
   455.7969,
   654.7653,
   883.9805,
   1127.404,
   1373.257,
   1619.935,
   1866.796,
   2116.303,
   2359.525,
   2607.531,
   2781.233};
   Double_t S12S18_chi2NDF_vs_p_fy1011[11] = {
   0.7089654,
   1.26445,
   0.9977776,
   1.49702,
   0.707779,
   1.319517,
   0.55013,
   0.6714925,
   1.319063,
   1.253898,
   1.578364};
   Double_t S12S18_chi2NDF_vs_p_fex1011[11] = {
   0.09410864,
   0.06648538,
   0.04456566,
   0.04050181,
   0.03992305,
   0.04410202,
   0.05363618,
   0.06745903,
   0.08830392,
   0.12202,
   0.1984395};
   Double_t S12S18_chi2NDF_vs_p_fey1011[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,S12S18_chi2NDF_vs_p_fx1011,S12S18_chi2NDF_vs_p_fy1011,S12S18_chi2NDF_vs_p_fex1011,S12S18_chi2NDF_vs_p_fey1011);
   gre->SetName("S12S18_chi2NDF_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12S18_chi2NDF_vs_p1011 = new TH1F("Graph_S12S18_chi2NDF_vs_p1011","",100,223.13,3014.004);
   Graph_S12S18_chi2NDF_vs_p1011->SetMinimum(-0.4891664);
   Graph_S12S18_chi2NDF_vs_p1011->SetMaximum(2.510834);
   Graph_S12S18_chi2NDF_vs_p1011->SetDirectory(0);
   Graph_S12S18_chi2NDF_vs_p1011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12S18_chi2NDF_vs_p1011->SetLineColor(ci);
   Graph_S12S18_chi2NDF_vs_p1011->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12S18_chi2NDF_vs_p1011->GetXaxis()->SetRange(19,91);
   Graph_S12S18_chi2NDF_vs_p1011->GetXaxis()->CenterTitle(true);
   Graph_S12S18_chi2NDF_vs_p1011->GetXaxis()->SetLabelFont(42);
   Graph_S12S18_chi2NDF_vs_p1011->GetXaxis()->SetTitleSize(0.04);
   Graph_S12S18_chi2NDF_vs_p1011->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12S18_chi2NDF_vs_p1011->GetXaxis()->SetTitleFont(42);
   Graph_S12S18_chi2NDF_vs_p1011->GetYaxis()->SetTitle("#chi^{2}_{NDF} / 250 MeV");
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
   
   
   TF1 *pol01012 = new TF1("pol0","pol0",1000,2500, TF1::EAddToList::kNo);
   pol01012->SetFillColor(19);
   pol01012->SetFillStyle(0);
   pol01012->SetLineColor(2);
   pol01012->SetLineWidth(2);
   pol01012->SetChisquare(0.8459102);
   pol01012->SetNDF(5);
   pol01012->GetXaxis()->SetLabelFont(42);
   pol01012->GetXaxis()->SetTitleOffset(1);
   pol01012->GetXaxis()->SetTitleFont(42);
   pol01012->GetYaxis()->SetLabelFont(42);
   pol01012->GetYaxis()->SetTitleFont(42);
   pol01012->SetParameter(0,1.010834);
   pol01012->SetParError(0,0.1679196);
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
   entry=leg->AddEntry("pol0","#LT#chi^{2}/NDF#GT = 1.01
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
